//========================================================================================
//  
//  $File$
//  
//  Owner: Michele Goodwin
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
#ifndef __IInCopyBridgeUIUtils__
#define __IInCopyBridgeUIUtils__

#include "InCopyBridgeUIID.h"
#include "IPMUnknown.h"

class IInCopyBridgeUIUtils : public IPMUnknown
{
public:
 	enum { kDefaultIID = IID_IINCOPYBRIDGEUIUTILS };

	/**
		Ask user if they want to check out the story or, in InCopy, alert that
		they cannot if it was already checked out.
		@param theItem IN. the uidref of the item that is being edited.
		@return kTrue if the user chose to check out the item.
    */
	virtual bool16 WantCheckOutOrAlertCant( const UIDRef& theItem ) = 0;
};


#endif	// __IInCopyBridgeUIUtils__
