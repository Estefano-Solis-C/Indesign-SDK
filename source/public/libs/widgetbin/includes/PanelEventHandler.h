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
#ifndef __PanelEventHandler__
#define __PanelEventHandler__

#include "IEvent.h"
#include "DVControlEventHandler.h"

#ifdef WIDGET_BUILD
#pragma export on
#endif

/**	PanelEventHandler is an EventHandler class that is a convenient starting place for palette panels.
 PanelEventHandler existed pre CC and was preserved as a convenience.
 It is now based on DVControlEventHandler, and adds no functionality beyond it.
 @see IControlView, DVControlEventHandler
 */
class WIDGET_DECL PanelEventHandler : public DVControlEventHandler
{
	typedef DVControlEventHandler inherited;
public:
	PanelEventHandler(IPMUnknown *boss);
	virtual ~PanelEventHandler(); 
};

#pragma export off

#endif
