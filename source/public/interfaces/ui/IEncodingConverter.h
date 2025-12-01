//========================================================================================
//  
//  $File$
//  
//  Owner: Michael Burbidge
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
#ifndef __IEncodingConverter_h__
#define __IEncodingConverter_h__

#include "IPMUnknown.h"

class IEncodingConverter : public IPMUnknown
{
public:
	virtual void	Convert(void* fromBuffer, const int32& length, void* toBuffer) = 0;
};

#endif
