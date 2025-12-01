//========================================================================================
//  
//  $File$
//  
//  Owner: psorrick
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
//  Data interface for Ruler prefs commands.
//  includes : 	Rulers shown or hidden
//  
//========================================================================================

#pragma once
#ifndef __IRulerPrefsCmdData__
#define __IRulerPrefsCmdData__

#include "IPMUnknown.h"
#include "LayoutID.h"
#include "UIDRef.h" 

class IDataBase;

class IRulerPrefsCmdData : public IPMUnknown
{
public:
	virtual void Set(	const	UIDRef&	doc, 			/* which document to affect */
						const	bool16	shown) = 0; 	/* column and margin Rulers shown or hidden */
	virtual const UIDRef& GetDocument() const = 0;
	virtual const bool16 GetRulersShown() const = 0;
};




#endif // __IRulerPrefsCmdData__
