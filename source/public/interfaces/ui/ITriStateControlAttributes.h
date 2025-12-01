//========================================================================================
//  
//  $File$
//  
//  Owner: Tommy Donovan
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
#ifndef __ITriStateControlAttributes__
#define __ITriStateControlAttributes__

#include "IPMUnknown.h"
#include "WidgetDefs.h"
#include "widgetid.h"

/** Interface associated with the kCheckBoxWidgetBoss, used to control alignment of the widget.
*/
class  ITriStateControlAttributes : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ITRISTATECONTROLATTRIBUTES };

	/** Set the alignment value for the widget (kAlignLeft, kAlignCenter, or kAlignRight). */
	virtual void			SetAlignment(const int16 alignment) = 0;
	/** Get the alignment value for the widget */
	virtual int16			GetAlignment() const = 0;
};	

#endif // __ITriStateControlAttributes__
