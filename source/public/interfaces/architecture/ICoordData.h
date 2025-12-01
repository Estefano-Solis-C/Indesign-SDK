//========================================================================================
//  
//  $File$
//  
//  Owner: Robin_Briggs
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
//  Data interface for commands.
//  
//========================================================================================

#pragma once
#ifndef __ICoordData__
#define __ICoordData__

#include "IPMUnknown.h"
#include "CommandID.h"
#include "PMReal.h"


class ICoordData : public IPMUnknown {
public:
	virtual void Set(PMReal theFile) = 0;
	virtual const PMReal GetCoord() const = 0;
};


#endif // __ICoordData__
