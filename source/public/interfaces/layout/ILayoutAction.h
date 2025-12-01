//========================================================================================
//  
//  $File$
//  
//  Owner: Robin Briggs
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
//  An interface off the document, manages the list of document-wide layers.
//  
//========================================================================================

#pragma once
#ifndef __ILayoutAction__
#define __ILayoutAction__

#include "IPMUnknown.h"
#include "LayoutUIID.h"
#include "UIDRef.h"

class ILayoutControlData;

class ILayoutAction : public IPMUnknown
{
public:
	virtual void SetSpread(ILayoutControlData *layout, const UIDRef& spreadInWindow) = 0;
	virtual void RemoveSpread(ILayoutControlData *layout, const UIDRef& spreadInWindow) = 0;
	virtual void SetDocument(ILayoutControlData *layout, const UIDRef& docInWindow) = 0 ;
	virtual void RemoveDocument(ILayoutControlData *layout, const UIDRef& docInWindow) = 0;
};

#endif	// __ILayoutAction__

