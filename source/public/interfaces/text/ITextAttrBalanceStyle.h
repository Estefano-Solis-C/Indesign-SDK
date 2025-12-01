//========================================================================================
//  
//  $File$
//  
//  Owner: EricM
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
#ifndef __ITextAttrBalanceStyle__
#define __ITextAttrBalanceStyle__

#include "IPMUnknown.h"
#include "ICompositionStyle.h"
#include "TextAttrID.h"


/** 
	@ingroup text_attr
*/
class ITextAttrBalanceStyle : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ITEXTATTRBALANCESTYLE };
		
		typedef ICompositionStyle::BalanceLinePreference		ValueType;

		ValueType Get() const
			{ return GetBalancePref(); }
		void Set(ValueType val)
			{ SetBalancePref(val); }

		virtual void SetBalancePref(ICompositionStyle::BalanceLinePreference dq) = 0;
		virtual ICompositionStyle::BalanceLinePreference GetBalancePref() const = 0;
};

#endif
		// __ITextAttrBalanceStyle__
		 
