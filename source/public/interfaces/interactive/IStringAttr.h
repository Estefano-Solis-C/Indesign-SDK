//========================================================================================
//  
//  $File$
//  
//  Owner: Tim Wright
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
//  PMString attribute to be used with graphic attributes machinery.
//  
//========================================================================================

#pragma once
#ifndef __IStringAttr_h__
#define __IStringAttr_h__

#include "IPMUnknown.h"
#include "PMString.h"
#include "FormFieldID.h"

//===================================================================================

/** Data interface for string graphic attribute.
    The String attribute is used for things like Form Field names, descriptions...
*/
class IStringAttr : public IPMUnknown
{
public:
	enum {kDefaultIID = IID_ISTRINGATTR};
	
	/** Get PMString parameter */
	virtual PMString	GetString() const = 0;

	/** Set PMString parameter */
	virtual void		SetString( const PMString& inName ) = 0;
};

//===================================================================================

#endif // __IStringAttr_h__

