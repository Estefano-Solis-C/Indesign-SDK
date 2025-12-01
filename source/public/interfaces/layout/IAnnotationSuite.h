//========================================================================================
//  
//  $File$
//  
//  Owner: Mudit Rastogi
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
#ifndef __IAnnotationSuite__
#define __IAnnotationSuite__

// Interfaces:
#include "IPMUnknown.h"
#include "PDFID.h"

class UIDList;

// Includes:
/** Defines the interface for a annotation-related suite to be used in the new selection architecture
	@ingroup layout_suite
	@ingroup layout_hyper
*/
class IAnnotationSuite : public IPMUnknown
{
public:
	/**	Return a list of UIDs to annotations whose destinations are selected on layout
		@param none
		@return UIDList - List of selected annotation
	 */
	virtual UIDList GetSelectedAnnotations() const = 0;
};

#endif	// __IAnnotationSuite__

