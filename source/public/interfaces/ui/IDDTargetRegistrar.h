//========================================================================================
//  
//  $File$
//  
//  Owner: Sanyam Jain
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
#ifndef __IDDTargetRegistrar__
#define __IDDTargetRegistrar__

#include "IPMUnknown.h"
#include "DragDropID.h"

/** class IDDTargetRegistrar
 replaces IDDTargetWindow for CS6 
 name change reflects the fact that is isn't restricted to "window bosses"
 platform registration implementation details are not exposed in the interface
 */
class IDDTargetRegistrar: public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_IDDTARGETREGISTRAR };
		/** register this boss as a platform Drag Drop target */
		virtual void				RegisterAsTarget() = 0;
		/** unregister this boss as a platform Drag Drop target */
		virtual void				UnregisterAsTarget() = 0;
};

#endif // End of __IDDTargetRegistrar__

