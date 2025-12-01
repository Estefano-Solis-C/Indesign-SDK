//========================================================================================
//  
//  $File$
//  
//  Owner: Michael Mortimer
//  
//  $Author$
//  
//  $DateTime$
//  
//  $Revision$
//  
//  $Change$
//  
//  Copyright 1997-2012 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#pragma once
#ifndef __ErasablePanelView__
#define __ErasablePanelView__

#include "DVErasablePanelView.h"

class WIDGET_DECL CIDErasablePanelView : public DVErasablePanelView 
{ 
	typedef DVErasablePanelView inherited;

public: 
			 CIDErasablePanelView( IPMUnknown *boss ); 

	virtual ~CIDErasablePanelView( void );
};

#endif // __ErasablePanelView__
