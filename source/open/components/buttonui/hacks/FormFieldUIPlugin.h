//========================================================================================
//  
//  $File$
//  
//  Owner: Tim Wright
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
//  Adapted from GroupPlugin.h
//  
//========================================================================================

#pragma once
#ifndef __FORMFIELDUIPLUGIN__
#define __FORMFIELDUIPLUGIN__

#include "PlugIn.h"

class FormFieldUIPlugin : public PlugIn {
public:
	virtual bool16 Load(ISession* theSession);
};


#endif
