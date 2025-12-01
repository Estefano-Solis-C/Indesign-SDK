//========================================================================================
//  
//  $File$
//  
//  Owner: matt ramme
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
#ifndef __IXMLExportHandlerData__
#define __IXMLExportHandlerData__

#include "IPMUnknown.h"
#include "XMLID.h"
class IXMLOutStream;

/** Stores the stream from the XMLExportHandler.
*/
class IXMLExportHandlerData : public IPMUnknown {
public:
	enum { kDefaultIID = IID_IXMLEXPORTHANDLERDATA };
	

	/**	Mutator for stream stored on this interface
		@param outStream stream to store on this interface
	 */
	virtual void SetStream(IXMLOutStream *outStream) = 0;

	/**	Accessor for stream stored on this interface
		@return IXMLOutStream stored on this interface
	 */
	virtual IXMLOutStream *GetStream() = 0;
};

#endif //__IXMLExportHandlerData__
