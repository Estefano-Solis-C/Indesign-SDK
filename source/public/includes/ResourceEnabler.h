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
#ifndef __RESOURCEENABLER__
#define __RESOURCEENABLER__

/** @name ResourceEnabler

		ResourceEnabler is a #define to the platform appropriate version MResourceAccess or WResourceAccess.

		@see MResourceAccess, WResourceAccess
*/
#ifdef MACINTOSH
	#include "MResourceAccess.h"
	#define ResourceEnabler MResourceAccess
#elif WASM
	#include "WasmResourceAccess.h"
	#define ResourceEnabler WasmResourceAccess
#else
	#include "WResourceAccess.h"
	#define ResourceEnabler WResourceAccess
#endif

#endif
