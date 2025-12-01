//========================================================================================
//  
//  $File$
//  
//  Owner: Michiko Jessett
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
#ifndef __ITextAttrCompMode__
#define __ITextAttrCompMode__

#include "IPMUnknown.h"
#include "IIMEAttrStyle.h"

/** Used by the IME (input method editory) code to set IME composition mode.
	IME's are used by some languages to input text. ex. Japanese, Chinese, Korean.

	@ingroup text_attr
*/
class ITextAttrCompMode : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ITEXTATTRCOMPMODE };
		
		typedef IIMEAttrStyle::IMECompMode		ValueType;

        /**    Set IME composition mode 
            @param flag		mode to set to 
         */ 
		void Set(ValueType flag)
			{ SetMode(flag); }

		/**    Get IME composition mode 
            @return			composition mode 
         */ 
		ValueType Get() const
			{ return GetMode(); }


		/**    Set IME composition mode 
            @param mode		mode to set to 
         */ 
		virtual void SetMode(IIMEAttrStyle::IMECompMode mode) = 0;

		/**    Get IME composition mode 
            @return			composition mode 
         */ 
		virtual IIMEAttrStyle::IMECompMode GetMode() const = 0;
};

#endif
// __ITextAttrCompMode__
