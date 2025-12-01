/************************************************************************
 Copyright 2022 Adobe
 All Rights Reserved.
 NOTICE: Adobe permits you to use, modify, and distribute this file in accordance with the terms of the Adobe license agreement accompanying it.
*************************************************************************
*/

#pragma once
#ifndef __ITimeData__
#define __ITimeData__

#include "IPMUnknown.h"
#include "CommandID.h"


/** Data interface to store IDTime time.
    IDTime is based on a uint64 bit number.  It matches NT's FILETIME, the number
    of 100 nanoseconds since January 1, 1601, and it is UTC based.
	@ingroup arch_coredata 
	@see IDTime
*/
class ITimeData : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ITIMEDATA };
	
		/**	Set the time.
			@param time IDTime value of the time to set.
		*/
		virtual void				Set( uint64 time ) = 0;

		/** Get the time.
			@return uint64 value of time which has been set.
		*/
		virtual uint64			Get() const = 0;	
};

#endif
 
