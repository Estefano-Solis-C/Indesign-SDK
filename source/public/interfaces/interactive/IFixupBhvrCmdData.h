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
#ifndef __IFixupBehaviorCmdData_h__
#define __IFixupBehaviorCmdData_h__

#include "IPMUnknown.h"
#include "BehaviorID.h"

/** Command parameters for FixupBehaviorCmd.
	FixupBehaviorCmd handles fixing up UID references in certain behaviors that reference other
	bosses (e.g. ShowHide, Sound, Movie)
*/
class IFixupBehaviorCmdData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IFIXUPBEHAVIORCMDDATA };
	
	/** Set the destination database for delete or copy */
	virtual void Set(IDataBase* dstDb) = 0;

	/** Get the destination database for delete or copy */
	virtual IDataBase* GetDstDataBase() const = 0;
};

#endif // __IFixupBehaviorCmdData_h__
