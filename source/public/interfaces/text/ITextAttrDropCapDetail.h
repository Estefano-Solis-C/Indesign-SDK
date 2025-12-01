//========================================================================================
//  
//  $File$
//  
//  Owner: emenning
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
#ifndef __ITextAttrDropCapDetail__
#define __ITextAttrDropCapDetail__

#include "IPMUnknown.h"
#include "CTextEnum.h"
#include "TextAttrID.h"


/**	@ingroup text_attr
	@see IDrawingStyle
*/
class ITextAttrDropCapDetail : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ITEXTATTRDROPCAPDETAIL };

		typedef Text::DropCapDetailedSettings 	ValueType;

		/** Set the value.
			@param dcds specifies the drop cap detail (positioning detailed rules)
		*/
		virtual void Set(Text::DropCapDetailedSettings dcds) = 0;

		/** Get the value.
			@return the drop cap detail (positioning detailed rules)
		*/
		virtual Text::DropCapDetailedSettings Get() const = 0;
};

#endif
		// __ITextAttrDropCapDetail__

