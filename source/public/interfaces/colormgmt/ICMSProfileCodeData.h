//========================================================================================
//  
//  $File$
//  
//  Owner: James Jardee-Borquist
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

#ifndef __ICMSProfileCodeData__
#define __ICMSProfileCodeData__

#if PRAGMA_ONCE
#pragma once
#endif

#include "ICMSProfile.h"
#include "IPMUnknown.h"

#include "ACEColorMgmtID.h"

//========================================================================================
// CLASS ICMSProfileCodeData
//========================================================================================

class ICMSProfileCodeData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ICMSPROFILECODEDATA };
	
	virtual void Set(ICMSProfile::profileCode profileCode) = 0;
	virtual ICMSProfile::profileCode GetProfileCode() const = 0;
};

#endif // __ICMSProfileCodeData__

// End, ICMSProfileCodeData.h.
