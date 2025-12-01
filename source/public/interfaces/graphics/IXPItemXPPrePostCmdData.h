//========================================================================================
//  
//  $File$
//  
//  Owner: Matt Phillips
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

#pragma once
#ifndef __IXPItemXPPrePostCmdData__
#define __IXPItemXPPrePostCmdData__

#include "IPMUnknown.h"
#include "XPID.h"
#include "IXPManager.h"

class IXPItemXPPrePostCmdData : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_IXPITEMXPPREPOSTCMDDATA };
	
		virtual void SetDoBehavior(bool32 invalidate, IXPManager::XPChangeType chg) = 0;
		virtual void SetUndoBehavior(bool32 invalidate, IXPManager::XPChangeType chg) = 0;
		
		virtual bool32 InvalidateOnDo() = 0;
		virtual bool32 InvalidateOnUndo() = 0;
		virtual IXPManager::XPChangeType GetChangeTypeOnDo() = 0;
		virtual IXPManager::XPChangeType GetChangeTypeOnUndo() = 0;
};

#endif