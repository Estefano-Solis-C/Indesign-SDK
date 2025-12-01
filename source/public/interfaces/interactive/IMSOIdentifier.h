//========================================================================================
//  
//  $File$
//  
//  Owner: Mitch Coleman
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
#ifndef __IMSOIdentifier_h__
#define __IMSOIdentifier_h__

#include "IPMUnknown.h"
#include "FormFieldID.h"

//=============================================================================

/** Identifies a page item as a Multi-State Object.  These objects shouldn't be
    placed within one another.
*/
class IMSOIdentifier : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IMSOIDENTIFIER };
};

//=============================================================================

#endif // __IMSOIdentifier_h__

