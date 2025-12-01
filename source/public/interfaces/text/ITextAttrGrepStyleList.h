//========================================================================================
//  
//  $File$
//  
//  Owner: Eric_Menninga
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
#ifndef __ITextAttrGrepStyleList__
#define __ITextAttrGrepStyleList__

#include "IPMUnknown.h"
#include "RunInGrepStyleList.h"
#include "TextAttrID.h"


/** Simple data interface for holding the list of run-in styles applied to the paragraph
	@ingroup text_attr
*/
class ITextAttrGrepStyleList : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ITEXTATTRGREPSTYLELIST };
		enum { kMaximumNumberOfGrepStyleRules = 100 };

		typedef RunInGrepStyleList		ValueType;

			/** assign the RunInStyleList associated with this interface (usually as a text attribute)
				@param ValueType = standardized alias to RunInStyleList
			*/
		void Set(const ValueType& list)
			{ SetStyleList(list); }

			/** @return the RunInStyleList associated with this interface, more standardized naming */
		ValueType Get() const
			{ return GetStyleList(); }

			/** assign the RunInStyleList associated with this interface (usually as a text attribute)
				@param RunInStyleList
			*/
		virtual void SetStyleList(const RunInGrepStyleList& list) = 0;

			/** @return the RunInStyleList associated with this interface */
		virtual RunInGrepStyleList GetStyleList() const = 0;
};

#endif
		// __ITextAttrStyleList__
