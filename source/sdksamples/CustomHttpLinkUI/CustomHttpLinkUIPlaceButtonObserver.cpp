//========================================================================================
//  
//  $File$
//  
//  Owner: swagarg
//  
//  $Author$
//  
//  $DateTime$
//  
//  $Revision$
//  
//  $Change$
//
//  ADOBE CONFIDENTIAL
//  
//  Copyright 2019 Adobe
//  All Rights Reserved.
//
//  NOTICE: Adobe permits you to use, modify, and distribute this file in
//  accordance with the terms of the Adobe license agreement accompanying
//  it. If you have received this file from a source other than Adobe,
//  then your use, modification, or distribution of it requires the prior
//  written permission of Adobe. 
//  
//========================================================================================

#include "VCPlugInHeaders.h"

// General includes:
#include "CObserver.h"
#include "ErrorUtils.h"
#include "EventUtilities.h"
#include "ILayoutUIUtils.h"
#include "ILinkFacade.h"
#include "IPasteboardUtils.h"

// Interface includes:
#include "IActiveContext.h"
#include "IControlView.h"
#include "IDropDownListController.h"
#include "IImportExportFacade.h"
#include "IPanelControlData.h"
#include "IStringData.h"
#include "IStringListControlData.h"
#include "ISpread.h"
#include "ISubject.h"
#include "IWidgetParent.h"

#include "PMString.h"
#include "URI.h"

// Project includes:
#include "CustomHttpLinkUIID.h"

/** Implementation of IObserver to respond to notification about changes
    to the Place Button (kPlaceButtonBoss) subject
 
	@ingroup customhttplinkui.sdk
*/

class CustomHttpLinkUIPlaceButtonObserver : public CObserver
{
public:

    /**
     Constructor for CustomHttpLinkUIPlaceButtonObserver class.
     @param interface ptr from boss object on which this interface is aggregated.
     */
    CustomHttpLinkUIPlaceButtonObserver(IPMUnknown* boss);

    /**
     Destructor
     */
    virtual ~CustomHttpLinkUIPlaceButtonObserver() {}
    
    /**
     AutoAttach is only called for registered observers
     of widgets.  This method is called by the application
     core when the widget is shown.
     */
    virtual void AutoAttach();
    
    /**
     AutoDetach is only called for registered observers
     of widgets. Called when widget hidden.
     */
    virtual void AutoDetach();
    
    /**
    Update is called for all registered observers, and is
        the method through which changes are broadcast.
        @param theChange [IN] this is specified by the agent of change; it can be the class ID of the agent,
    or it may be some specialised message ID.
    @param theSubject [IN] provides a reference to the object which has changed; in this case, the button
    widget boss object that is being observed.
    @param protocol [IN] the protocol along which the change occurred.
    @param changedBy [IN] this can be used to provide additional information about the change or a reference
    to the boss object that caused the change.
    */
    virtual void Update(const ClassID& theChange, ISubject* theSubject, const PMIID &protocol, void* changedBy);
};

/* CREATE_PMINTERFACE
    Binds the C++ implementation class onto its
    ImplementationID making the C++ code callable by the
    application.
*/
CREATE_PMINTERFACE(CustomHttpLinkUIPlaceButtonObserver, kCustomHttpLinkUIPlaceButtonObserverImpl)

/**
 CustomHttpLinkUIPlaceButtonObserver Constructor
*/
CustomHttpLinkUIPlaceButtonObserver::CustomHttpLinkUIPlaceButtonObserver(IPMUnknown* boss)
: CObserver(boss)
{
}

/* AutoAttach
 */
void CustomHttpLinkUIPlaceButtonObserver::AutoAttach()
{
    InterfacePtr<ISubject> subject(this, IID_ISUBJECT);
    if (subject && !subject->IsAttached(this, IID_IBOOLEANCONTROLDATA))
        subject->AttachObserver(this, IID_IBOOLEANCONTROLDATA);
}

/* AutoDetach
 */
void CustomHttpLinkUIPlaceButtonObserver::AutoDetach()
{
    InterfacePtr<ISubject> subject(this, IID_ISUBJECT);
    if (subject && subject->IsAttached(this, IID_IBOOLEANCONTROLDATA))
        subject->DetachObserver(this, IID_IBOOLEANCONTROLDATA);
}

/* Update
 */
void CustomHttpLinkUIPlaceButtonObserver::Update(const ClassID &theChange, ISubject *theSubject, const PMIID &protocol, void *changedBy)
{
    if (theChange == kTrueStateMessage) {
        
        // Check for the widget id
        InterfacePtr<IControlView> view (this, UseDefaultIID());
        WidgetID widgetid = view -> GetWidgetID();
        
        if (widgetid == kChooseFileWidgetID) {
            
            // Go to parent widget to query for the selected item in dropdown
            InterfacePtr<IWidgetParent> iParentHolder(this, UseDefaultIID());
            InterfacePtr<IPanelControlData> pcd(iParentHolder->GetParent(),UseDefaultIID());
            if (!pcd)
                return;
            
            IControlView* filesDropDown = pcd->FindWidget(kFileListWidgetID);
            InterfacePtr<IStringListControlData> iData(filesDropDown, IID_ISTRINGLISTCONTROLDATA);
            InterfacePtr<IDropDownListController> dropDownListController(iData, IID_IDROPDOWNLISTCONTROLLER);
            
            // Create the URI for the asset to be placed
            int32 selectedFormatIndex = dropDownListController->GetSelected();
            PMString selectedFormatName = iData->GetString(selectedFormatIndex);
            std::string path = "/image/" + selectedFormatName.GetUTF8String();
            URI uri;
            uri.SetComponent(URI::kScheme, WideString(kCusHttpLnkScheme));
            uri.SetComponent(URI::kAuthority, WideString(kCusHttpLnkAuthority));
            uri.SetComponent(URI::kPath, WideString(path.c_str()));
            
            // Get active context
            IActiveContext* ac = GetExecutionContextSession()->GetActiveContext();
            IDocument* activeDoc = ac->GetContextDocument();
            IControlView* view = ac->GetContextView();
            if (!view)
               return;
            
            // Get current spread database
            GSysPoint globalPoint;
            globalPoint = ::GetGlobalMouseLocation();
            PMPoint convertedPoint = Utils<ILayoutUIUtils>()->ComputePasteboardPoint(globalPoint, view);
            InterfacePtr<ISpread> spread(Utils<IPasteboardUtils>()->QueryNearestSpread(view, convertedPoint));
            if (!spread)
                return;
            IDataBase* db = ::GetDataBase(spread);
            
            // Setting Default rendition type to kFPO
            ErrorCode err = Utils<Facade::ILinkFacade>()->SetHTTPLinksDefaultRenditionType(ILinkResourceRenditionData::kFPO);

            // Load the selected uri in place gun now!
            err = Utils<Facade::IImportExportFacade>()->ImportAndLoadPlaceGun(db, uri, kMinimalUI, kFalse, kFalse, kFalse, UID(kInvalidUID), IPlaceGun::kAddToFront);
        }
    }
}
