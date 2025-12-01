//========================================================================================
//  
//  $File$
//  
//  Owner: lance bushore
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
#ifndef __IToolSizer__
#define __IToolSizer__

#include "IUserInterfacePreferences.h"
#include "ToolboxID.h"

/** Interface for notifying tools that toolbox orientation is changing
*/
class IToolSizer : public IPMUnknown
{
public:	
	enum { kDefaultIID = IID_ITOOLSIZER };
	
	/**  Adjust to the new toolbox orientation. Some tools have to resize or do some other fancy stuff to
		fit nicely into different toolbox shapes.
		@param newOrientation which state we're setting to
	*/
	virtual void AdjustToolSizeForOrientation(IUserInterfacePreferences::ToolboxState newOrientation) = 0;
};

#endif
