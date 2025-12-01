//========================================================================================
//  
//  $File$
//  
//  Owner: jargast
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
#ifndef __IStrokeChangePreference__
#define __IStrokeChangePreference__

#include "IPMUnknown.h"
#include "GraphicStylesID.h"

class IStrokeChangePreference : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ISTROKECHANGEPREFERENCE };

	// Default value for this preference is kFalse.
	virtual void SetStrokeChangesBoundingBox (bool8 changeVal) = 0;
	
	virtual bool8 GetStrokeChangesBoundingBox() const = 0;
};


#endif
