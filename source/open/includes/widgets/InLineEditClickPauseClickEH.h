//========================================================================================
//  
//  $File$
//  
//  Owner: Tom Taylor
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
#ifndef __InLineEditClickPauseClickEH__
#define __InLineEditClickPauseClickEH__

#ifdef WIDGET_BUILD
#pragma export on
#endif

#include "DVControlEventHandler.h"

class WIDGET_DECL InLineEditClickPauseClickEH : public DVControlEventHandler
{
	typedef DVControlEventHandler inherited;
public:
	InLineEditClickPauseClickEH(IPMUnknown *boss);
	~InLineEditClickPauseClickEH();
			
	virtual bool16 LButtonDn(IEvent* e); 
	virtual bool16 LButtonUp(IEvent* e); 
	virtual bool16 ButtonDblClk(IEvent* e);		

private:
	bool16 fSelected;
	bool16 fDoubleClick;
	int32 fDoubleClickTime;
};

#pragma export off

#endif
