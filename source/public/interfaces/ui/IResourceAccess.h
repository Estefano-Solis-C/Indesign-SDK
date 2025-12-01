//========================================================================================
//  
//  $File$
//  
//  Owner: Dave Burnard
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
#ifndef __IResourceAccess__
#define __IResourceAccess__

#include "PMTypes.h" 

/** Defines an abstract class for accessing resources. Allows the caller
		to open a resource file before making a resource manager call, and
		to close it again after the call has been made. 
		
		Clients access resources using the helper class ResourceEnabler.
		
		@see ResourceEnabler
*/  
class IResourceAccess {
public:
	virtual ~IResourceAccess();

	/** ID to resource file that contains the requested resource. */
	virtual const IDFile *GetResourceFile() = 0;
		
};

#endif // __IResourceAccess__

	
