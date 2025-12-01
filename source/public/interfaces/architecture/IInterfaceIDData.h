//========================================================================================
//  
//  $File$
//  
//  Owner: Roey Horns
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
#ifndef __IINTERFACEIDDATA__
#define __IINTERFACEIDDATA__

#include "ShuksanID.h"
#include "IPMUnknown.h"

/** Data interface that stores an interface identifier (PMIID).
	@ingroup arch_coredata 
*/
class IInterfaceIDData : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_IINTERFACEIDDATA };
		
		/** Set the interface ID. 
			@param id	new value for the PMIID
		*/
		virtual void Set(PMIID id) = 0;

		/** Return the interface ID.
			@return	The interfaceID
		*/
		virtual PMIID GetInterfaceID() const = 0;
};

#endif
