//========================================================================================
//  
//  $File$
//  
//  Owner: Jesse Jones
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
#ifndef __ITableAttrPoint__
#define __ITableAttrPoint__

#include "IPMUnknown.h"
#include "PMPoint.h"
#include "TablesID.h"


/** Data interface that holds a reference to a PMPoint. */
class ITableAttrPoint : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ITABLEATTRPOINT };
			
	typedef PMPoint value_type;

	/** Accessor */
	virtual value_type	Get() const = 0;
	/** Mutator */
	virtual void		Set(const value_type& value) = 0;
};

#endif
