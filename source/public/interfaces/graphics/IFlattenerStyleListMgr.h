//========================================================================================
//  
//  $File$
//  
//  Owner: Greg St. Pierre
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

#ifndef __IFlattenerStyleListMgr__
#define __IFlattenerStyleListMgr__

#if PRAGMA_ONCE
#pragma once
#endif

#include "IGenStlEdtListMgr.h"

#include "XPID.h"

/**
 Subclass of IGenStlEdtListMgr. This interface adds nothing to its base class and 
 is preserved for historical reasons and to avoid changing client code that was 
 written against this interface.
 
 @see IGenStlEdtListMgr
 */
class IFlattenerStyleListMgr : public IGenStlEdtListMgr
{
public:
	enum { kDefaultIID = IID_IXPFLATTENERSTYLELISTMGR };
};

#endif //!def __IFlattenerStyleListMgr__
