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
#ifndef __IHyperlinkPageItemData__
#define __IHyperlinkPageItemData__

#include "IPMUnknown.h"
#include "HyperlinkID.h"

/**
	@ingroup layout_hyper
*/
class IHyperlinkPageItemData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IHYPERLINKPAGEITEMDATA };

	/**	Setup this data structure
		@param &hyperLinkSource - UIDRef of the hyperlink source that "owns" this page item
	 */
	virtual void Initialize( const UIDRef &hyperLinkSource ) = 0;

	/**	Get the UID of the source that "owns" this page item
		@param none
		@return UID - UID of the appropriate source
	 */
	virtual UID GetSource() const = 0;

};


#endif // __IHyperlinkPageItemData__

