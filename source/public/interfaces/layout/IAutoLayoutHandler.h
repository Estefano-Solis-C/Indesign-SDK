//========================================================================================
//  
//  $File$
//  
//  Owner: ?
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
//  Command-Handler Interface for AutoLayout.
//  
//========================================================================================

#pragma once
#ifndef __IAUTOLAYOUTHANDLER
#define __IAUTOLAYOUTHANDLER

#include "PMTypes.h"
#include "IPMUnknown.h"

class ICommand;

/**	FOR INTERNAL USE ONLY.
	An interface class for handling command actions on behalf of the Layout Adjustment feature.  Used in FrameworkObserver::Update().
*/
class IAutoLayoutHandler : public IPMUnknown {

	public:
		/**	Perform layout-adjustment operations on behalf the the passed-in command.  Called by FrameworkObserver::Update(), and 
			must handle both the kNotDone and kDone instances of the command (FrameworkObserver catches both moments in the command's
			lifecycle).  See CAutoLayoutHandler.h for current usage example.
			@param cmd IN pointer to the command being intercepted
		*/
		virtual void HandleCommand(ICommand *cmd) = 0;

};


#endif	// __IAUTOLAYOUTHANDLER
