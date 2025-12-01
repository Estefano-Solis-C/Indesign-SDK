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
#ifndef __ITableAttrBool16__
#define __ITableAttrBool16__

#include "IPMUnknown.h"
#include "TablesID.h"

/** Data interface for boolean table attribute.
*/
class ITableAttrBool16 : public IPMUnknown
{
public:
		enum  { kDefaultIID = IID_ITABLEATTRBOOL16 };

		typedef  bool16 value_type;

		/** Accessor for value represented.
			@return bool16 represented by this interface
		*/virtual value_type	Get() const = 0;
		/** Mutator for value represented.
			@param val new value to set
		*/
		virtual void		Set(value_type val) = 0;
};

#endif	// __ITableAttrBool16__
