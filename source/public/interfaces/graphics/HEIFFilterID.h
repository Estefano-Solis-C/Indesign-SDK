/*************************************************************************
* Copyright 2022 Adobe
* All Rights Reserved.
*
* NOTICE: Adobe permits you to use, modify, and distribute
* this file in accordance with the terms of the Adobe license
* agreement accompanying it.
**************************************************************************/

#ifndef __HEIFFilterID__
#define __HEIFFilterID__

#include "CrossPlatformTypes.h"
#include "IDFactory.h"

#define kHEIFFilterPrefix	RezLong(0x24200)

// <Start IDC>
// PluginID
//#define kHEIFFilterPluginName 			"HEIF Import Filter"
//DECLARE_PMID(kPlugInIDSpace, kHEIFFilterPluginID, kHEIFFilterPrefix + 1)

// <Class ID>
// ClassIDs
DECLARE_PMID(kClassIDSpace, kHEIFImageReadFormatBoss, kHEIFFilterPrefix + 1)
//gap
DECLARE_PMID(kClassIDSpace, kHEIFFilterConversionProviderBoss, kHEIFFilterPrefix + 3)

// <Implementation ID>
// ImplementationIDs
DECLARE_PMID(kImplementationIDSpace, kHEIFImageReadFormatServiceImpl, kHEIFFilterPrefix + 1)
DECLARE_PMID(kImplementationIDSpace, kHEIFImageReadFormatInfoImpl, kHEIFFilterPrefix + 2)
DECLARE_PMID(kImplementationIDSpace, kHEIFImageReadFormatImpl, kHEIFFilterPrefix + 3)

// <Widget ID>
DECLARE_PMID(kWidgetIDSpace, kHEIFDecoderDontShowAgainID, kHEIFFilterPrefix + 1)

#endif // __HEIFFilterID__

// End, HEIFFilterID.h.
