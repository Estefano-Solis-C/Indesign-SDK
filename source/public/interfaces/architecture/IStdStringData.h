/************************************************************************
 Copyright 2022 Adobe
 All Rights Reserved.
 NOTICE: Adobe permits you to use, modify, and distribute this file in accordance with the terms of the Adobe license agreement accompanying it.
*************************************************************************
*/

#pragma once
#ifndef __IStdStringData__
#define __IStdStringData__

#include "IPMUnknown.h"
#include "CommandID.h"


/**  Data interface for storing std strings.
*/
class IStdStringData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ISTDSTRINGDATA };

	/** Set the string value
		@param newString - new value of the string
	*/
	virtual void Set(const std::string& newString) = 0;

	/** Return the string value.
		@return value of the string
	*/
	virtual const std::string& GetString() const = 0;
};



#endif // __IStdStringData__
