//========================================================================================
//  
//  $File$
//  
//  Owner: Jeff Argast  (From Hotchkiss tips code)
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
//  Contains the ResourceErrSTR definition
//  
//========================================================================================

#pragma once
#ifndef __ErrorTableTypes__
#define __ErrorTableTypes__

#include "CoreResTypes.h"

// The following number is arbitrary, but is used by the ErrorUtils::GetErrorString
// function to find the correct platform error string table resource
#define kPlatformErrorStringTableRsrcID 699


#ifdef __ODFRC__

// Definition for platform specific errors
type PlatformErrorTable (kPErrorTableType) {
	integer = $$CountOf( errorArray );	
	wide array errorArray {
		longint;	/* minimum error id */
		longint;	/* maximum error id */
		pstring;	/* error message */
		};
};

// Definition for user defined errors
type UserErrorTable (kUErrorTableType) {
	integer = $$CountOf( errorArray );	
	wide array errorArray {
		longint;	/* error id */
		pstring;	/* error message */
		};
};
#endif

#endif /* __CoreErrorTypes__ */
