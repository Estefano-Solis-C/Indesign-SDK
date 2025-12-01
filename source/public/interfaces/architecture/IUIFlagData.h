//========================================================================================
//  
//  $File$
//  
//  Owner: Dave Burnard
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
#ifndef __IUIFlagData__
#define __IUIFlagData__

#include "DocumentID.h"

#include "IPMUnknown.h"
#include "IImportProvider.h"

/** Data interface storing UIFlag parameter common to commands
	@ingroup arch_coredata
*/
class IUIFlagData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IUIFLAGDATA };

	/** Initialize the settings of this object from the settings of another object */
	virtual void Set(const IUIFlagData &data) = 0;

	/** Set the flags */
	virtual void Set(UIFlags uiFlags = kFullUI) = 0;

	/** Get the flags */
	virtual UIFlags GetUIFlags() const = 0;
};

#endif
