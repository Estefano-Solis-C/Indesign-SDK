//========================================================================================
//  
//  $File$
//  
//  Owner: Heath Horton
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
//  Proj:	
//  
//========================================================================================

#pragma once
#ifndef _H_SpellPrefsDialogController
#define _H_SpellPrefsDialogController

#include "CDialogController.h"

class ICommand;

class SpellPrefsDialogController : public CDialogController
{
public:
	// ----- Initialization -----
	
						SpellPrefsDialogController(IPMUnknown *boss);
	virtual				~SpellPrefsDialogController();
	
	// ----- Dialog protocol -----

	virtual void		InitializeDialogFields(IActiveContext* context);
	virtual WidgetID	ValidateDialogFields(IActiveContext* myContext);
	virtual void		ApplyDialogFields(IActiveContext* myContext, const WidgetID& widgetId);
};


#endif
