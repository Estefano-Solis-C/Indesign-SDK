//========================================================================================
//  
//  $File$
//  
//  Owner: Wai Cheuk
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
#ifndef __IStyleActionData__
#define __IStyleActionData__

#include "IPMUnknown.h"
#include "TextStylePanelID.h"

/** 
 * 	What action is being performed on the style
 *  	@ingroup text_style
 */
 class IStyleActionData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ISTYLEACTIONDATA };

	/**
		Action that can be performed on a style
	*/
	enum StyleAction { kNone, kCreateNewStyle, kEditStyle, kDuplicateStyle };

	/**
		Sets the action that can be performed on a style
		@param 	action	the action
	*/
	virtual void SetStyleAction(IStyleActionData::StyleAction action) = 0;
	/**
		Gets the action that can be performed on a style
		@return	IStyleActionData::StyleAction
	*/
	virtual IStyleActionData::StyleAction GetStyleAction() = 0;
};

#endif //__IStyleActionData__
