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
//  Move pages command data interface
//  
//========================================================================================

#pragma once
#ifndef __IMovePageData__
#define __IMovePageData__

#include "IPMUnknown.h"
#include "SpreadID.h"
#include "UIDRef.h"
#include "ILayoutUtils.h"	// for kDefaultBinding

class IMovePageData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IMOVEPAGEDATA };

	virtual void Set(const UIDRef& spreadToMoveTo, int32 posOnSpread, bool16 bShouldNotify = kTrue, int32 pageBinding = kDefaultBinding) = 0;
	virtual const UIDRef& GetSpread() const = 0;
	virtual const int32 GetPosition() const = 0;
	virtual const int32 GetPageBinding() const = 0;
	virtual const bool16 GetShouldNotify() const = 0;
};



#endif // __IMovePageData__
