//========================================================================================
//  
//  $File$
//  
//  Owner: Brendan O'Shea
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
#ifndef __IHyperlinkPageItemSourceData__
#define __IHyperlinkPageItemSourceData__

#include "IPMUnknown.h"
#include "HyperlinkID.h"

/**
	@ingroup layout_hyper
	@see kHyperlinkPageItemSourceBoss 
*/
class IHyperlinkPageItemSourceData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IHYPERLINKPAGEITEMSOURCEDATA };

	/**	Setup this data structure
		@param &hyperLinkSource - The page item that this source "owns"
	 */
	virtual void Initialize( const UIDRef &hyperLinkSource ) = 0;


	/**	Get the UID of the page item that this source "owns"
		@param none
		@return UID - The UID of the appropriate page item
	 */
	virtual UID	GetSourceUID() const = 0;
};


#endif // __IHyperlinkPageItemSourceData__

