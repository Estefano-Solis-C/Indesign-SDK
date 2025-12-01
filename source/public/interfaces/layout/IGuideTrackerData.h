//========================================================================================
//  
//  $File$
//  
//  Owner: Paul Sorrick
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
//  Interface for storing what type of guide is being tracked.
//  
//========================================================================================

#pragma once
#ifndef __IGuideTrackerData__
#define __IGuideTrackerData__

#include "IPMUnknown.h"
#include "CommandID.h"

class IGuideTrackerData : public IPMUnknown
{
public:
	enum { kHGuide = 1, kVGuide, kMultiGuides };			

	virtual void Set(int32 i) = 0;
	virtual int32 GetInt() = 0;
};



#endif // __IGuideTrackerData__