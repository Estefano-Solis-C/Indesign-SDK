/*************************************************************************
* ADOBE CONFIDENTIAL
* ___________________
*
* Copyright 2022 Adobe
* All Rights Reserved.
*
* NOTICE: All information contained herein is, and remains
* the property of Adobe and its suppliers, if any. The intellectual
* and technical concepts contained herein are proprietary to Adobe
* and its suppliers and are protected by all applicable intellectual
* property laws, including trade secret and copyright laws.
* Dissemination of this information or reproduction of this material
* is strictly forbidden unless prior written permission is obtained
* from Adobe.
**************************************************************************/

#ifndef ImageDumpUtils_h
#define ImageDumpUtils_h

#if MACINTOSH

#include "IDVPlatformOffscreen.h"

namespace ImageDumpUtils
{
	/* For internal use only 
	 * Dump CGImageRef to disk on desktop with given fileName
	 */
	DV_WIDGET_DECL void DumpCGImageToDisk(CGImageRef image, std::string fileName);
	
	/* For internal use only
	 * Dump IDVPlatformOffscreen to disk on desktop with given fileName
	 */
	DV_WIDGET_DECL void DumpOffScreenToDisk(IDVPlatformOffscreen* srcOffscreen, std::string fileName);

	/* For internal use only
	 * Dump CGContextRef to disk on desktop with given fileName
	 */
    DV_WIDGET_DECL void DumpCGContextToDisk(CGContextRef ctx, std::string fileName);
}

#endif //MACINTOSH

#endif /* ImageDumpUtils_h */
