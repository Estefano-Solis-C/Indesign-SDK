//========================================================================================
//  
//  $File$
//  
//  Owner: Roey Horns
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
//  Purpose:	DataInterface for Post import signal responders.
//  
//========================================================================================

#pragma once
#ifndef __IPostImportResponderData__
#define __IPostImportResponderData__

#include "IPMUnknown.h"
#include "XMLID.h"

class XMLReference;

/** IPostImportResponderData is used to hold data used by the XMLPostImportResponders.
	
	@see IResponder
	@see ISignalMgr
*/
class IPostImportResponderData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IPOSTIMPORTRESPONDERDATA };
		
	/** Sets the importer being used for this import.
		@param importer		An interface on the kXMLImporterBoss. Must not be nil.
	*/
	virtual void SetImporter(IPMUnknown *importer) = 0;

	/** Gets the importer being used for this import.
	@return - The importer.
	*/
	virtual IPMUnknown *GetImporter() = 0;
};

#endif // __IPostImportResponderData__

