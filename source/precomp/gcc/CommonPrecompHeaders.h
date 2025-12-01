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
//  
//  ADOBE CONFIDENTIAL
//  
//========================================================================================

#include "GeneralBuildFlags.h"

#if MACINTOSH
#include <stdint.h>
#endif
#include "MemoryStatics.h"
#include "AnsiBasedTypes.h"

#ifdef WASM
#include "WasmShukHeaders.h"
#include "WasmBuildFlags.h"
#else

#ifdef MACINTOSH
#include "MacOSSDK_AvoidTypeCollisions.h"

//#include <Carbon/Carbon.h>
#define ID_NOCARBON_ALLOWED //#define to denote remaining Carbon code and references.
#define __CARBON__ //Prevent Carbon from being included
#define __DRAG__ //Prevent Drag manager from being included
#define __HIDATABROWSER__ //Prevent Drag manager from being included

#include <ApplicationServices/ApplicationServices.h> //CoreGraphics, CoreText, HIShape, Pasteboard Manager
//#include <ApplicationServices/../Frameworks/CoreGraphics.framework/Headers/CoreGraphics.h>
//#include <ApplicationServices/../Frameworks/HIServices.framework/Headers/HIShape.h>	//HIShape
//#include <ApplicationServices/../Frameworks/HIServices.framework/Headers/Pasteboard.h>	//Pasteboard Manager

#include <Carbon/../Frameworks/OpenScripting.framework/Headers/AppleScript.h> // OpenScripting/AppleScript

#include <Carbon/../Frameworks/HIToolbox.framework/Headers/CarbonEventsCore.h> // for EventRef

#ifdef ID_UI_PRECOMPILE
	#include <Cocoa/Cocoa.h>
#endif
#endif

#endif
