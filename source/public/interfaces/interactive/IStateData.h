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
#ifndef __IStateData__
#define __IStateData__

#include "IPMUnknown.h"
#include "FormFieldID.h"
#include "FormFieldTypes.h"

/** Used as a parameter interface for command bosses that
    take appearance states as input or output.
    @see kNewStateCmdBoss, kDeleteStateCmdBoss
*/
class IStateData : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ISTATEDATA };
		
		typedef Form::AppearanceState		ValueType;

		/** Set the state value */
		virtual void Set(ValueType inState) = 0;

		/** Get the state value */
		virtual ValueType GetState() const = 0;

		/** Get the state value */
		ValueType Get() const
			{ return GetState(); }
};



#endif // __IStateData__
