//========================================================================================
//  
//  $File$
//  
//  Owner: Adrian O'Lenskie
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
#ifndef __IURIData__
#define __IURIData__

#include "ShuksanID.h"

class URI;

/**  Data interface for storing a single URI.
	@ingroup arch_coredata 
*/
class IURIData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IURIDATA };

	/** Set the URI value
		@param newURI IN new value of the URI
	*/
	virtual void Set(const URI& newString) = 0;

	/** Return the URI value.
		@return value of the URI
	*/
	virtual const URI& Get() const = 0;
	
};



#endif // __IURIData__
