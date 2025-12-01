//========================================================================================
//  
//  $File$
//  
//  Owner: Tom Taylor
//  
//  $Author$
//  
//  $DateTime$
//  
//  $Revision$
//  
//  $Change$
//  
//  ADOBE CONFIDENTIAL
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
#ifndef __TypeaheadEditBoxEH__
#define __TypeaheadEditBoxEH__

#include "CIDEditBoxEventHandler.h"
#include "PMString.h"

#ifdef WIDGET_BUILD
#pragma export on
#endif

class WIDGET_DECL TypeaheadEditBoxEH : public CIDEditBoxEventHandler
{
	typedef CIDEditBoxEventHandler inherited;
public:
	TypeaheadEditBoxEH(IPMUnknown *boss);
	~TypeaheadEditBoxEH();
	
	virtual bool16	KeyDown(IEvent* e) ;
	virtual bool16	KeyCmd(IEvent* e) ;

protected:
	
	enum	{ kNoSelection = -1 };
	
	//	Must override
	virtual	bool16	SelectionListSelectItem (int32, bool16 = kTrue, bool16 = kTrue) = 0;
	virtual	bool16	SelectionListItemIsEnabled (int32) const = 0;
	virtual	int32	SelectionListGetIndex (const PMString&) const = 0;
	virtual	int32	SelectionListGetIndexOfPartialString (const PMString&) const = 0;
	virtual	int32	SelectionListGetLength (void) const = 0;
	virtual	PMString  GetTextDataString() const = 0;
	
	//	Internal use
	bool16	HandleTypeAhead(IEvent* e, bool16 bCalledFromKeyUp = kFalse);
	bool16 	HandleKeyEvent(IEvent *e);

};

#pragma export off

#endif
