/*************************************************************************
* Copyright 2022 Adobe
* All Rights Reserved.
*
* NOTICE: Adobe permits you to use, modify, and distribute
* this file in accordance with the terms of the Adobe license
* agreement accompanying it.
**************************************************************************/

#ifndef __JP2KFilterID__
#define __JP2KFilterID__

#include "CrossPlatformTypes.h"
#include "IDFactory.h"

#define kJP2KFilterPrefix	RezLong(0x24400)

// <Start IDC>
// PluginID
//#define kJP2KFilterPluginName 			"JP2K Import Filter"
//DECLARE_PMID(kPlugInIDSpace, kJP2KFilterPluginID, kJP2KFilterPrefix + 1)

// <Class ID>
// ClassIDs
DECLARE_PMID(kClassIDSpace, kJP2KImageReadFormatBoss, kJP2KFilterPrefix + 1)
//gap
DECLARE_PMID(kClassIDSpace, kJP2KFilterConversionProviderBoss, kJP2KFilterPrefix + 3)

// <Implementation ID>
// ImplementationIDs
DECLARE_PMID(kImplementationIDSpace, kJP2KImageReadFormatServiceImpl, kJP2KFilterPrefix + 1)
DECLARE_PMID(kImplementationIDSpace, kJP2KImageReadFormatInfoImpl, kJP2KFilterPrefix + 2)
DECLARE_PMID(kImplementationIDSpace, kJP2KImageReadFormatImpl, kJP2KFilterPrefix + 3)

#endif // __JP2KFilterID__

// End, JP2KFilterID.h.
