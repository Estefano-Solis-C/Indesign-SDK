//========================================================================================
//  
//  $File$
//  
//  Owner: Eric Menninga
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
#ifndef __ITADataPosition__
#define __ITADataPosition__

#include "IPMUnknown.h"
#include "IDrawingStyle.h"
#include "TextAttrID.h"


/** 
	@ingroup text_attr
*/
class ITextAttrDataPosition : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ITEXTATTRDATAPOSITION };
		
		typedef IDrawingStyle::PositionIndicator		ValueType;

		virtual ValueType Get() const = 0;
		virtual void Set(ValueType val) = 0;
};

#endif
		// ITADataPosition
