//========================================================================================
//
//  $File$
//
//  Owner: gangwal
//
//  $Author$
//
//  $DateTime$
//
//  $Revision$
//
//  $Change: 1103835
//
//  ADOBE CONFIDENTIAL
//
//  Copyright 2021 Adobe
//  All Rights Reserved.
//
//  NOTICE:  All information contained herein is, and remains
//  the property of Adobe and its suppliers,
//  if any.  The intellectual and technical concepts contained
//  herein are proprietary to Adobe and its
//  suppliers and are protected by all applicable intellectual property
//  laws, including trade secret and copyright laws.
//  Dissemination of this information or reproduction of this material
//  is strictly forbidden unless prior written permission is obtained
//  from Adobe .
//
//========================================================================================

#pragma once
#ifndef __IPMStringList__
#define __IPMSTringList__

#include "AppUIID.h"
#include "PMString.h"

/** This class is used to store a list of PMString objects */
class IPMStringList : public IPMUnknown
{
public:
	enum {kDefaultIID = IID_IPMSTRINGLIST};

public:    
	/** Use to add a new string
		@param k - the new String to be added
	*/
	virtual void Append(PMString k) = 0;
	
	/** Get the nth PMString
		@param n - the string you want (must be less than Length - 1)
		@return - the string you requested. (if you request a value that is out of range behavior is undefined)
	*/
	virtual PMString Get(int32 n) = 0;

	/** Get the number of strings currently stored
		@return - The number of integers
	*/
	virtual int32 Length() = 0;

	/** remove all the entries in the array
	*/
	virtual void Clear() = 0;
};


#endif // __IPMStringList__

