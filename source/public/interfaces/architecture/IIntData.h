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
//========================================================================================

#pragma once
#ifndef __IIntData__
#define __IIntData__

#include "IPMUnknown.h"
#include "CommandID.h"

/** Data interface for storing integers.
	@ingroup arch_coredata 
*/
class IIntData : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_IINTDATA };
		
		typedef int32		ValueType;

		/** Set the value.
			@param i	new value of the integer
		*/
		virtual void Set(ValueType i) = 0;

		/** Get the value.
			@return value of the interface
		*/
		virtual ValueType GetInt() const = 0;

		/** Get the value.
			@return value of the interface
		*/
		ValueType Get() const
			{ return GetInt(); }
};



#endif // __IIntData__
