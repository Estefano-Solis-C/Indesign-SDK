//========================================================================================
//  
//  $File$
//  
//  Owner: SusanCL
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
//  This interface get/set the swatches panel's current selection list.
//  
//========================================================================================

#pragma once
#ifndef __ISwatchesUIDData__
#define __ISwatchesUIDData__

#include "IPMUnknown.h"
#include "UIDList.h"

/**	A data interface used by the swatch list widget for keeping track of current list widget's
	selection.
*/
class ISwatchesUIDData : public IPMUnknown {
public:

	/**	Set the current selection.
		@param theList specifies the list swatch UIDs to update list selection to.
	*/
	virtual void SetItemList(const UIDList& theList) = 0;

	/**	Returns the current selection.
	*/
	virtual const UIDList& GetItemList() const = 0;

};


#endif // __ISwatchesUIDData__
