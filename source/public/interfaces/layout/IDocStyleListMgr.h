//========================================================================================
//  
//  $File$
//  
//  Owner: Rich Gartland
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
#ifndef __IDocStyleListMgr__
#define __IDocStyleListMgr__

#include "IGenStlEdtListMgr.h"
#include "SpreadID.h"

/** Provides a version of the generic style edit list manager interface for Document Presets
*/
class IDocStyleListMgr : public IGenStlEdtListMgr

{	
public:
	enum { kDefaultIID = IID_IDOCSTYLELISTMGR };
};

#endif
