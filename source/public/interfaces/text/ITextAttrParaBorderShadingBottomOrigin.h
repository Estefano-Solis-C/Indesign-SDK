//========================================================================================
//  
//  $File$
//  
//  Owner: Sanyam Jain
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
#ifndef __ITextAttrParaBorderShadingBottomOrigin__
#define __ITextAttrParaBorderShadingBottomOrigin__

#include "IPMUnknown.h"
#include "ICompositionStyle.h"
#include "TextAttrID.h"


/** 
	This holds the bottom origin value for paragraph border and shading bottom origin attribute
	@ingroup text_attr
*/

class ITextAttrParaBorderShadingBottomOrigin : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ITEXTATTRPARABORDERSHADINGBOTTOMORIGIN };
		
		typedef ICompositionStyle::ParagraphBorderShadingBottomOrigin		ValueType;

		/**
			Sets the paragragh rule mode to the param passed in
			@param flag		ICompositionStyle::ParagraphBorderShadingBottomOrigin
		*/
		virtual void Set(ValueType dq) = 0;
		/**
			Gets the paragragh rule mode
			@return 	ICompositionStyle::ParagraphBorderShadingBottomOrigin
		*/
		virtual ValueType Get() const = 0;
};

#endif
// __ITextAttrParaBorderShadingBottomOrigin__
