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
#ifndef __IGridAttributes__
#define __IGridAttributes__

#include "IPMUnknown.h"

class PMPoint;

class IGridAttributes : public IPMUnknown
{
public:
	// ----- Accessors -----

	virtual void			Set(const PMPoint& gridDimensions, const PMPoint& cellDimensions,
								const PMReal& borderWidth) = 0;

	virtual PMPoint			GetGridDimensions() const = 0; 
	virtual PMPoint			GetCellDimensions() const = 0;
	virtual PMReal			GetBorderWidth() const = 0;
};

#endif
