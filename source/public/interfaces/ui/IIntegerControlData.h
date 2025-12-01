//========================================================================================
//  
//  $File$
//  
//  Owner: Frits Habermann
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
#ifndef __IINTEGERCONTROLDATA__
#define __IINTEGERCONTROLDATA__

#include "widgetid.h"


/**
	Interface for storing an integer
*/
class IIntegerControlData : public IPMUnknown
{
public:
 	enum { kDefaultIID = IID_IINTEGERCONTROLDATA};
 
	/** Method to set the integer stored in the interface.
		@param newValue integer to set
		@param invalidate specifies whether the control should be redrawn
		@param notifyOfChange specifies whether observers on the control data should be notified of the change.
	*/
	virtual void	SetValue(int32	newValue, bool16 invalidate = kTrue, bool16 notifyOfChange = kTrue) = 0;
	/**
		returns stored integer
	*/
	virtual int32 	GetValue() const = 0;
};

#endif
