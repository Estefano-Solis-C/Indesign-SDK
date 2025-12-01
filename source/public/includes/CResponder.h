//========================================================================================
//  
//  $File$
//  
//  Owner: Robin briggs
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
#ifndef __CResponder__
#define __CResponder__

#include "iresponder.h"
#include "HelperInterface.h"


#pragma export on

/** CResponder is a helper base class for implementing IResponder. All responders
	should inherit from CResponder.
*/
class PUBLIC_DECL CResponder : public IResponder
{
public:
   CResponder(IPMUnknown *boss);

		/** Should be overridden by the derived class, if the
			derived class uses the generic responder service provider.
			@see IResponder
		*/
		virtual ServiceID GetResponderService();

		/**	Should be overridden by the derived class, @see IResponder */
   		virtual void Respond(ISignalMgr* signalMgr);

		/**	Should be overridden by the derived class, @see IResponder */
		virtual void SignalFailed(ISignalMgr *signalMgr);
	  
   DECLARE_HELPER_METHODS()
};

#pragma export off

#endif // __CResponder__
