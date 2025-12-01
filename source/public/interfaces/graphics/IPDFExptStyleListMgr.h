//========================================================================================
//  
//  $File$
//  
//  Owner: Ed Bomke
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
#ifndef __IPDFExptStyleListMgr__
#define __IPDFExptStyleListMgr__

#include "IGenStlEdtListMgr.h"
#include "PersistUIDList.h"
#include "HelperInterface.h"
#include "PDFID.h"

/**
 Subclass of IGenStlEdtListMgr. This interface adds nothing to its base class and 
 is preserved for historical reasons and to avoid changing client code that was 
 written against this interface.
 
 @see IGenStlEdtListMgr
 */
class IPDFExptStyleListMgr : public IGenStlEdtListMgr

{	
	public:
	enum { kDefaultIID = IID_IPDFEXPORTSTYLELISTMGR };
};

#endif