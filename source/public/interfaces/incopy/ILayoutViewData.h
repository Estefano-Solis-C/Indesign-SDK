//========================================================================================
//  
//  $File$
//  
//  Owner: Kevin Van Wiel
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
#ifndef __ILayoutViewData__
#define __ILayoutViewData__

#include "IPMUnknown.h"

#include "WritingModeUIID.h"
#include "UIDRef.h"


class ILayoutViewData : public IPMUnknown
{
	public:
		virtual void SetOldSpreadRef(UIDRef ref) = 0;
		virtual UIDRef GetOldSpreadRef() = 0;
};

#endif 		// __ILayoutViewData__