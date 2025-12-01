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
#ifndef __AFL__
#define __AFL__

#include "ATypes.h"

namespace adobe {
namespace afl {

#ifdef WINDOWS
	HINSTANCE GetInstance();
#endif

}	// namespace afl
}	// namespace adobe

#endif	// __AFL__
