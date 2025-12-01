//========================================================================================
//  
//  $File$
//  
//  Owner: Lonnie Millett
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
#ifndef __IFRAMEEDGEPREFSCMDDATA__
#define __IFRAMEEDGEPREFSCMDDATA__

#include "IPMUnknown.h"
#include "SpreadID.h"
#include "UIDRef.h" 

class IFrameEdgePrefsCmdData : public IPMUnknown
{
public:
	virtual void Set(const	UIDRef&	doc, const	bool16	shown) = 0;
	virtual const UIDRef& GetDocument() const = 0;
	virtual const bool16 GetFrameEdgeShown() const = 0;
};


#endif
