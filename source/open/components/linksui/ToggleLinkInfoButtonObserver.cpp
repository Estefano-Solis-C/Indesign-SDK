//========================================================================================
//  
//  $File$
//  
//  Owner: lance bushore
//  
//  $Author$
//  
//  $DateTime$
//  
//  $Revision$
//  
//  $Change$
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#include "VCPlugInHeaders.h"

// ----- Interfaces -----
#include "ISubject.h"
#include "IControlView.h"

// ----- Includes -----

#include "CObserver.h"
#include "LinksUIID.h"
#include "ILinksUIUtils.h"
#include "Utils.h"

// ----- Utility files -----

//========================================================================================
// CLASS ToggleLinkInfoButtonObserver
//========================================================================================
class ToggleLinkInfoButtonObserver : public CObserver
{
	public:
		ToggleLinkInfoButtonObserver(IPMUnknown *boss);
		virtual ~ToggleLinkInfoButtonObserver();
		
		virtual void Update(const ClassID& theChange, ISubject* theSubject, const PMIID& protocol, void* changedBy);
		
		virtual void AutoAttach();
		virtual void AutoDetach();
};


CREATE_PMINTERFACE(ToggleLinkInfoButtonObserver, kToggleLinkInfoButtonObserverImpl)

//----------------------------------------------------------------------------------------
// ToggleLinkInfoButtonObserver constructor 
//----------------------------------------------------------------------------------------

ToggleLinkInfoButtonObserver::ToggleLinkInfoButtonObserver(IPMUnknown *boss) :
	CObserver(boss)
{
}

//----------------------------------------------------------------------------------------
// ToggleLinkInfoButtonObserver::~ToggleLinkInfoButtonObserver: 
//----------------------------------------------------------------------------------------

ToggleLinkInfoButtonObserver::~ToggleLinkInfoButtonObserver()
{
}

//----------------------------------------------------------------------------------------
// ToggleLinkInfoButtonObserver::AutoAttach: 
//----------------------------------------------------------------------------------------
void ToggleLinkInfoButtonObserver::AutoAttach()
{
	InterfacePtr<ISubject> subject(this, UseDefaultIID());
	if (subject)
		subject->AttachObserver(this, IID_ITRISTATECONTROLDATA);

	Utils<ILinksUIUtils>()->UpdateLinkInfoSectionButtonState();
}

//----------------------------------------------------------------------------------------
// ToggleLinkInfoButtonObserver::AutoDetach: 
//----------------------------------------------------------------------------------------
void ToggleLinkInfoButtonObserver::AutoDetach()
{
	InterfacePtr<ISubject> subject(this, UseDefaultIID());
	if (subject)
		subject->DetachObserver(this, IID_ITRISTATECONTROLDATA);
}

void ToggleLinkInfoButtonObserver::Update(const ClassID& theChange, ISubject* theSubject, const PMIID& protocol, void* changedBy)
{
	#pragma unused(theSubject,protocol,changedBy)
	if (theChange == kTrueStateMessage)
	{
		Utils<ILinksUIUtils>()->ToggleLinkInfoSectionVisibility(false,false);		
	}
}
