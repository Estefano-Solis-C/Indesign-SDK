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

#pragma once
#ifndef __IPMRectData__
#define __IPMRectData__

#include "IPMUnknown.h"
#include "CommandID.h"
#include "PMRect.h"

/** Data interface for storing a rectangle (PMRect).
	@ingroup arch_coredata 
*/
class IPMRectData : public IPMUnknown {
public:
	enum { kDefaultIID = IID_IPMRECTDATA };
	
	/** Set the value of the rectangle.
		@param theRect	new value
	*/
	virtual void SetRect(const PMRect& theRect) = 0;

	/** Return the rectangle.
		@return return the rectangle
	*/
	virtual const PMRect& GetRect() const = 0;
};

#endif
