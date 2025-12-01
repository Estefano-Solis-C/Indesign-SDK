//========================================================================================
//  
//  $File$
//  
//  Owner: Shengliu Dai
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
#ifndef __IACCELERATECONTROLDATA__
#define __IACCELERATECONTROLDATA__

#include "widgetid.h"


class IAccelerateControlData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IACCELERATECONTROLDATA };

	virtual void SetThreshold(int32 threshold) = 0;
	virtual void SetMaximum(int32 max) = 0;
	virtual int32 GetThreshold() const = 0;
	virtual int32 GetMaximum() const = 0;
	virtual int32 GetIncrement() const = 0;
	virtual void SetIncrement(int32 increment) = 0;
};

#endif
