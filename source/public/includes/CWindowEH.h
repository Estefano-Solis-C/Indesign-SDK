//========================================================================================
//  
//  $File$
//  
//  Owner: Michael Burbidge
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
#ifndef __CWindowEH__
#define __CWindowEH__

#include "CEventHandler.h"

#ifdef WIDGET_BUILD
#pragma export on
#endif

//========================================================================================
// CLASS CWindowEH
//========================================================================================



class WIDGET_DECL CWindowEH : public CEventHandler
{
public:
	CWindowEH(IPMUnknown *boss);
	~CWindowEH();

	virtual bool16 ButtonDblClk(IEvent* e);
	virtual bool16 ButtonTrplClk(IEvent* e);
	
	virtual bool16 ControlCmd(IEvent* e);
	virtual bool16 KeyCmd(IEvent* e);
	virtual bool16 KeyUp(IEvent* e);
	
	virtual bool16 LButtonUp(IEvent* e);
	virtual bool16 MouseMove(IEvent* e);
	virtual bool16 MouseDrag(IEvent* e);
	
	virtual bool16 Activate(IEvent* e);
	virtual bool16 Deactivate(IEvent* e);
	
	virtual bool16 Update(IEvent* e);
};

#pragma export off

#endif
