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
#include "ILinkResource.h"
#include "AbstractTip.h"
#include "ILinkInfoProvider.h"
#include "ILink.h"
#include "PMString.h"
#include "ILinksUIUtils.h"
#include "Utils.h"
#include "CPMUnknown.h"
#include "LinksUIID.h"

class LinkInfoIconTip : public AbstractTip
{			
public:
	LinkInfoIconTip( IPMUnknown *boss );
	virtual ~LinkInfoIconTip();

	virtual PMString  GetTipText(const PMPoint& mouseLocation);
};

CREATE_PMINTERFACE(LinkInfoIconTip, kLinkInfoIconTipImpl )


LinkInfoIconTip::LinkInfoIconTip(IPMUnknown *boss) :
	AbstractTip( boss )
{
} 



LinkInfoIconTip::~LinkInfoIconTip()
{
} 


PMString LinkInfoIconTip::GetTipText(const PMPoint& mouseLocation)
{
#pragma unused(mouseLocation)

	PMString tipString;

	InterfacePtr<const ILinkInfoProvider> headerProvider(Utils<ILinksUIUtils>()->QueryLinkInfoProviderFromHeaderWidget(this));
	if(headerProvider)
	{
		tipString = headerProvider->GetInfoDescriptionString();
	}
	else
	{
		InterfacePtr<const ILinkInfoProvider> infoProvider(Utils<ILinksUIUtils>()->QueryInfoProviderFromLinksUIWidget(this));
		if(infoProvider)
		{
			InterfacePtr<const ILink> link(Utils<ILinksUIUtils>()->QueryLinkFromLinksUIWidget(this));
			InterfacePtr<const ILinkResource> linkResource(Utils<ILinksUIUtils>()->QueryLinkResourceFromLinksUIWidget(this));
			if(link || linkResource)
			{
				tipString = infoProvider->GetUpdatedInfoForLink(link,linkResource,false);
				if(!tipString.empty() && infoProvider->CanDoDoubleClickAction(link,linkResource))
				{
                    tipString.Translate();
                    PMString doubleClickStr = infoProvider->GetDoubleClickDescription(link,linkResource);
                    if(!doubleClickStr.empty()){
                        PMString periodWithSpaceStr("#PeriodWithSpace");
                        periodWithSpaceStr.Translate();
                        tipString.Append(periodWithSpaceStr);
                        doubleClickStr.Translate();
                        tipString.Append(doubleClickStr);
                    }
				}
			}
		}
	}

	return tipString;
} 
