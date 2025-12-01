//========================================================================================
//  
//  $File$
//  
//  Owner: Dave Burnard
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
#ifndef __ICursorRegion__
#define __ICursorRegion__

#include "CursorID.h"
#include "IPMUnknown.h"

class ICursorProvider;

/**	This class represents the mapping between a region of the screen
	to a provider who will supply the cursor the region.
*/  
class ICursorRegion : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ICURSORREGION };
		
		/** Use this provider for the regions managed by this instance.
			@param provider IN the provider to use		
		*/
		virtual void	SetCursorProvider(ICursorProvider* p) =0;

		/** Get the provider for the regions managed by this instance.
			@param provider IN the provider to use		
		*/
		virtual ICursorProvider *	GetCursorProvider() const =0;
};

#endif
