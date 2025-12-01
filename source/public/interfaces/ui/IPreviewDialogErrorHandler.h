//========================================================================================
//  
//  $File$
//  
//  $Owner: Michael Burbidge $
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
#ifndef __IPreviewDialogErrorHandler_h__
#define __IPreviewDialogErrorHandler_h__

class IDialog;

#include "IPMUnknown.h"
#include "widgetid.h"

//========================================================================================
// CLASS IPreviewDialogErrorHandler
//========================================================================================

class IPreviewDialogErrorHandler : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IPREVIEWDIALOGERRORHANDLER };
	
	virtual void	ReportError(const ErrorCode& error) = 0;
	virtual void	CleanupDialog(IDialog *) = 0;
};

#endif // __IPreviewDialogErrorHandler_h__
