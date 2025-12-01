//========================================================================================
//  
//  $File$
//  
//  Owner: Mark VerMurlen
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
//  Reviewed: 9/28/98
//  
//  Purpose:
//  This interface is an "add in" to the kPageItemScrapHandlerBoss and is responsible
//  for setting and getting library data.
//  
//========================================================================================

#pragma once
#ifndef __ILIBRARYSCRAPDATA__
#define __ILIBRARYSCRAPDATA__

#include "LibraryAssetID.h"
#include "LibraryProviderID.h"

class ILibrary;

/**  This interface is an "add in" to the kPageItemScrapHandlerBoss and is responsible
	for setting and getting library data.
*/
class ILibraryScrapData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ILIBRARYSCRAPDATA };

	/** Set the library being accessed.
		@param library IN interface pointer to the library
	*/
	virtual void SetLibrary(ILibrary* library) = 0;

	/** Get the library being accessed.
		@return interface pointer to library being accessed
	*/
	virtual ILibrary* GetLibrary() = 0;
	
	/** Set the list of assets being accessed.
		@param assetList IN a list of assetIDs
	*/
	virtual void SetAssetList(const AssetIDList& assetList) = 0;

	/** Get the list of assets being accessed.
		@return the list of AssetIDs
	*/
	virtual const AssetIDList& GetAssetList() = 0;
	
};

#endif
