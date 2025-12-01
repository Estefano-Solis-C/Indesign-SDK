//========================================================================================
//  
//  $File$
//  
//  Owner: Sanjay Kumar
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
#ifndef __IStyleGroupInfo__
#define __IStyleGroupInfo__

#include "IPMUnknown.h"
#include "TextID.h"


/** Data Interface for style sets attributes 
*/

class IStyleGroupInfo : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ISTYLEGROUPINFO };

	/** Returns the name of the style set.
    */
	virtual const PMString& GetName() const = 0;

	/** Sets the name of this style set.
		@param name [IN] name of the style set.
	*/
	virtual void SetName(const PMString& name,bool16 tranlatable = kFalse) = 0;
};

#endif //__IStyleGroupInfo__