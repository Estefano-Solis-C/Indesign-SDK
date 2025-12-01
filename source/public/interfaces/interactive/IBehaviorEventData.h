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
#ifndef __IBehaviorEventData_h__
#define __IBehaviorEventData_h__

#include "IPMUnknown.h"
#include "BehaviorID.h"
#include "BehaviorTypes.h"

/** Used to pass in an event parameter to a command
*/
class IBehaviorEventData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IBEHAVIOREVENTDATA };
	
	/** Set the event.
		@param event Should be an enum in kBehaviorEventIDSpace
	*/
	virtual void		SetEvent(const ActionEvent& event) = 0;
	
	/** Return the event.
		@return event is an enum in kBehaviorEventIDSpace
	*/
	virtual ActionEvent	GetEvent() const = 0;
};

#endif // __IBehaviorEventData_h__
