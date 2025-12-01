//========================================================================================
//  
//  $File$
//  
//  Owner: Michael Brubidge
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
#ifndef __IEventBehavior_h__
#define __IEventBehavior_h__

#include "IPMUnknown.h"
#include "BehaviorUIID.h"

//========================================================================================
// CLASS IEventBehaviorData
//========================================================================================

class IEventBehaviorData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IEVENTBEHAVIORDATA };

	virtual int32	GetEvent() const = 0;
	virtual void	SetEvent(const int32& event) = 0;

	virtual int32	GetBehavior() const = 0;
	virtual void	SetBehavior(const int32& behavior) = 0;
};

#endif // __IEventBehavior_h__
