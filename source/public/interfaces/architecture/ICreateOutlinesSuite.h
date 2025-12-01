//========================================================================================
//  
//  $File$
//  
//  Owner: Bryce Morsello
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
#ifndef _ICreateOutlinesSuite_
#define _ICreateOutlinesSuite_

#include "IPMUnknown.h"
#include "ShuksanID.h"
#include "PMRect.h"

/**
	Exposes the ability to create outlines on a selection
*/
class ICreateOutlinesSuite : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ICREATEOUTLINES_ISUITE };

	/** Returns kTrue if CreateOutlines may be called */
	virtual bool16			CanCreateOutlines (void) = 0;

	/**
		Create the outlines for the current target
		@param deleteOriginalText pass kTrue to replace the selection with the created outline object
		@return the result of the create outlines command
	*/
	virtual ErrorCode 		CreateOutlines (bool16 deleteOrignalText) = 0;
};

#endif // _ICreateOutlinesSuite_
