//========================================================================================
//  
//  $File$
//  
//  Owner: Joe Shankar
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
#ifndef __ITableAttrRealNumber__
#define __ITableAttrRealNumber__

#include "IPMUnknown.h"
#include "TablesID.h"

/** Data interface for real number table attribute.
*/
class ITableAttrRealNumber : public IPMUnknown
{
public:
		enum  { kDefaultIID = IID_ITABLEATTRREALNUMBER };

		typedef  PMReal value_type;

		/** Accessor */
		virtual const value_type& Get() const = 0;
		/** Mutator */
		virtual void Set(const value_type& val) = 0;
};

#endif	// __ITableAttrRealNumber__
