//========================================================================================
//  
//  $File$
//  
//  Owner: Bill Tislar
//  
//  $Author$
//  
//  $DateTime$
//  
//  $Revision$
//  
//  $Change$
//  
//  ADOBE CONFIDENTIAL
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
#ifndef __IMediaAdornmentIcon__
#define __IMediaAdornmentIcon__

class IGraphicsPort;
#include "IPMUnknown.h"

#include "MediaID.h"
class PMPoint;
#include "PMReal.h"
#include "iuicolorutils.h"


class IMediaAdornmentIcon : public IPMUnknown
{
public:

	enum { kDefaultIID = IID_IMEDIAADORNMENTICON };

	virtual void Draw( IGraphicsPort* gPort, PMPoint center, ColorArray color ) = 0;
	virtual const PMReal & GetHeight() const = 0;
	virtual const PMReal & GetMaxLineWidth() const = 0;
	virtual const PMReal & GetWidth() const = 0;

}; // end IMediaAdornmentIcon interface

#endif // __IMediaAdornmentIcon__
