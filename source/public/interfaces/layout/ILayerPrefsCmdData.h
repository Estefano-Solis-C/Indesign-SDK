//========================================================================================
//  
//  $File$
//  
//  Owner: psorrick
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
#ifndef __ILayerPrefsCmdData__
#define __ILayerPrefsCmdData__

#include "IPMUnknown.h"
#include "LayerID.h"
#include "UIDRef.h" 

class IDataBase;

/**  Data interface for layer prefs command to change properties such as whether paste remembers layers.
	@ingroup layout_layer
    @see kSetLayerPrefsCmdBoss.
*/
class ILayerPrefsCmdData : public IPMUnknown
{
public:
	/**
	   Sets the command's data interface to preserve layers on paste or duplicate to indicated value.
	   @param bRemembers kTrue to preserve layers on paste/duplicate, kFalse to put items on active layer.
	 */
	virtual void Set(const	bool16	bRemembers) = 0;/* paste remembers layers */

	/**
	   Gets the command's data interface to preserve layers on paste and duplicate.
	   @return kTrue to preserve layers on paste/duplicate, kFalse to put items on active layer.
	   @see kSetLayerPrefsCmdBoss.
	 */
	virtual const bool16 GetPasteRemembersLayers() const = 0;
};




#endif // __IGuidePrefsCmdData__
