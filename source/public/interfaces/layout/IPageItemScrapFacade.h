//========================================================================================
//  
//  $File$
//  
//  Owner: lance bushore
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
//  
//  Note:
//  
//========================================================================================

#pragma once
	#ifndef _IPageItemScrapFacade_
	#define _IPageItemScrapFacade_

#include "GenericID.h"

/**
 Lock and Unlock page item Facade
  
*/
namespace Facade
{
	class IPageItemScrapFacade : public IPMUnknown
	{
	public:
		enum { kDefaultIID = IID_IPAGEITEMSCRAPFACADE };

		/**	Description:Can delete any of the target page items?
			@param targetItemList - the list of items in question
			@return bool16 
		 */
		virtual bool16 CanDeletePageItems(UIDList targetItemList) const = 0;	
			
		/**	Description: Delete the target page items	
			@param targetItemList - the list of items to operate on
			@return ErrorCode 
		 */
		virtual ErrorCode DeletePageItems (UIDList targetItemList) = 0;

		/**	Description:Can duplicate any of the target page items?
			@param targetItemList - the list of items in question
			@return bool16 
		 */
		virtual bool16 CanDuplicatePageItems(UIDList targetItemList) const = 0;	
			
		/**	Description: Duplicate the target page items	
			@param targetItemList - the list of items to operate on
			@return ErrorCode 
		 */
		virtual ErrorCode DuplicatePageItems (UIDList targetItemList) = 0;

		 
	};
}
#endif // _IPageItemScrapFacade_