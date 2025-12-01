//========================================================================================
//  
//  $File$
//  
//  Owner: Michael Burbidge
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
#ifndef __IHyperlinkSourceUI_h__
#define __IHyperlinkSourceUI_h__

#include "IPMUnknown.h"
#include "HyperlinkID.h"

class IHyperlinkSource;

/** Class responsible for going to hyperlink sources.
	@ingroup layout_hyper
*/
class IHyperlinkSourceUI : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IHYPERLINKSOURCEUI };

	/**	Show the source in the Layout Window
		@param none
	 */
	virtual void	GoToHyperlinkSource(const IHyperlinkSource* source) const = 0;
};

#endif	// __IHyperlinkSourceUI_h__
