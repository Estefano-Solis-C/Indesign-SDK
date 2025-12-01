//========================================================================================
//  
//  $File$
//  
//  Owner: Tim Wright
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
#ifndef __IPDFAnnotation_h__
#define __IPDFAnnotation_h__

#include "IPMUnknown.h"
#include "FormFieldID.h"

//=============================================================================

/** Identifies a page item as a pdf annotation.  These objects shouldn't be
    placed within one another, as it poses difficulty for PDF export...
*/
class IPDFAnnotation : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IPDFANNOTATION };
};

//=============================================================================

#endif // __IPDFAnnotation_h__

//  IFormField.h.
