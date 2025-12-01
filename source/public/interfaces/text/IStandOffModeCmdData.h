//========================================================================================
//  
//  $File$
//  
//  Owner: Bernd Paradies
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
#ifndef __IStandOffModeCmdData__
#define __IStandOffModeCmdData__

#include "IPMUnknown.h"
#include "IStandOff.h"
#include "StandOffID.h"

/** INTERNAL USE ONLY */
class IStandOffModeCmdData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ISTANDOFFMODECMDDATA };

	virtual	void				SetMode( IStandOff::mode nMode ) = 0;
	virtual	IStandOff::mode	GetMode() const = 0;
};

#endif
