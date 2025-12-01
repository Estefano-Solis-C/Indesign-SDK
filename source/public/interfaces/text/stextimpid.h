//========================================================================================
//  
//  $File$
//  
//  Owner: Prakash Sahni 
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

#ifndef __STextImpID__
#define __STextImpID__

#include "CrossPlatformTypes.h"
#include "IDFactory.h"

#define kSimpleTextImportPrefix   RezLong(0x11400)

// PluginID
#define kSimpleTextImportPluginName       "SimpleTextImportFilter"
DECLARE_PMID(kPlugInIDSpace, kSimpleTextImportPluginID, kSimpleTextImportPrefix + 1)

// <Class ID>
DECLARE_PMID(kClassIDSpace, kSimpleTextImportBoss,  kSimpleTextImportPrefix + 1)
// <Implementation ID>
DECLARE_PMID(kImplementationIDSpace, kSimpleTextImportImpl, kSimpleTextImportPrefix + 1)


#endif // __STextImpID__
