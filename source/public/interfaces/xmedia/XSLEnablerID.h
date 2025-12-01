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
//  
//  Info:	Contains IDs used by the XSLEnabler plugin for access to AXE.
//  
//========================================================================================

#ifndef __XSLEnablerID__
#define __XSLEnablerID__

#include "CrossPlatformTypes.h"
#include "IDFactory.h"

#define kXSLEnablerPrefix	 					RezLong(0x1A900)
#define kXSLEnablerPluginName 					"XSLEnabler"

// <Plugin ID>
DECLARE_PMID(kPlugInIDSpace, kXSLEnablerPluginID, kXSLEnablerPrefix + 1)

// <Class ID>
DECLARE_PMID(kClassIDSpace, kXSLEnablerServiceBoss, kXSLEnablerPrefix + 1)

// <Interface ID>

// <Service ID>

// <Implementation ID>

#endif
