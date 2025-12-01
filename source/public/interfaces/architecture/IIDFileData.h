//========================================================================================
//  
//  $File$
//  
//  Owner: Michael Easter
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
#ifndef __IIDFileData__
#define __IIDFileData__

// ----- Includes -----
#include "IPMUnknown.h"
#include "CommandID.h"

class IDFile;

/**
 Data interface used for storing a file (IDFile).
*/
class IIDFileData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IIDFILEDATA };

	/**
	 Set the file to store.
	 @param file [IN] File to store.
	 */
	virtual void Set(const IDFile& file) = 0;

	/**
	 Return the stored file.
	 @return Reference to the stored file.
	 */
	virtual const IDFile& Get() const = 0;
};



#endif // __IIDFileData__
