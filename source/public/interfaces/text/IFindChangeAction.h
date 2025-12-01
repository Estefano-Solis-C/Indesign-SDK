//========================================================================================
//  
//  $File$
//  
//  Owner: Habib Khalfallah
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
#ifndef __IFindChangeAction__
#define __IFindChangeAction__
#include "TextWalkerServiceProviderID.h"


/** 
	@ingroup text_find
*/
class IFindChangeAction : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IFINDCHANGEACTION};

	/** Find change actions */
	enum		Action	 { kNoneAction, /** no action */
						   kFindAction, 	/** find action */
						   kReplaceAction, 	/** replace action */
						   kReplaceAllAction };	/** replace all action */

	/**	
		Sets find change action.

		@param action	Action to set to.
	 */
	virtual void SetAction (Action action) = 0;
	/**	
		Gets find change action.

		@return Action	Action retrieved.
	 */
	virtual Action GetAction () = 0;
};

#endif //__IFindChangeAction__
