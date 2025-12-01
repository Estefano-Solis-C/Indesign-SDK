//========================================================================================
//  
//  $File$
//  
//  Owner: robin briggs
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
#ifndef __ITextFocusData__
#define __ITextFocusData__

#include "IPMUnknown.h"
#include "TextID.h"

class ITextFocus;

/** Specifies a text focus (start/end marks).
	@ingroup text_focus
*/
class ITextFocusData : public IPMUnknown
{
	public:
		virtual void Set(ITextFocus *focus) = 0;
		virtual const ITextFocus *GetFocus() const = 0;
};


#endif // __ITextFocusData__
