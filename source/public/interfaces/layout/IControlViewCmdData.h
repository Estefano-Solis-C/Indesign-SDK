//========================================================================================
//  
//  $File$
//  
//  Owner: robin briggs
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
//  
//  Command data interface for commands that operate on an 
//  ILayoutControlData.
//  
//========================================================================================

#pragma once
#ifndef __IControlViewCmdData__
#define __IControlViewCmdData__

#include "IPMUnknown.h"
#include "widgetid.h"

class IControlView;

class IControlViewCmdData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ICONTROLVIEWCMDDATA };

	virtual void Set(IControlView *view) = 0;
	virtual IControlView *GetControlView() const = 0;
	virtual IDataBase *GetControlViewData( UID* viewUID) const = 0;
};

#endif // __IControlViewCmdData__
