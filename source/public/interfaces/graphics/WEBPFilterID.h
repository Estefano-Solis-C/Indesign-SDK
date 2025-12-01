/*************************************************************************
* Copyright 2022 Adobe
* All Rights Reserved.
*
* NOTICE: Adobe permits you to use, modify, and distribute
* this file in accordance with the terms of the Adobe license
* agreement accompanying it.
**************************************************************************/

#ifndef __WEBPFilterID__
#define __WEBPFilterID__

#include "CrossPlatformTypes.h"
#include "IDFactory.h"

#define kWEBPFilterPrefix	RezLong(0x24300)

// <Start IDC>
// PluginID
//#define kWEBPFilterPluginName 			"WEBP Import Filter"
//DECLARE_PMID(kPlugInIDSpace, kWEBPFilterPluginID, kWEBPFilterPrefix + 1)

// <Class ID>
// ClassIDs
DECLARE_PMID(kClassIDSpace, kWEBPImageReadFormatBoss, kWEBPFilterPrefix + 1)
//gap
DECLARE_PMID(kClassIDSpace, kWEBPFilterConversionProviderBoss, kWEBPFilterPrefix + 3)

// <Implementation ID>
// ImplementationIDs
DECLARE_PMID(kImplementationIDSpace, kWEBPImageReadFormatServiceImpl, kWEBPFilterPrefix + 1)
DECLARE_PMID(kImplementationIDSpace, kWEBPImageReadFormatInfoImpl, kWEBPFilterPrefix + 2)
DECLARE_PMID(kImplementationIDSpace, kWEBPImageReadFormatImpl, kWEBPFilterPrefix + 3)

#endif // __WEBPFilterID__

// End, WEBPFilterID.h.
