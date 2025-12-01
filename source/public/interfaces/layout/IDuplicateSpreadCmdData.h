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
//  
//  Data interface for new/delete pages.
//  
//========================================================================================

#pragma once
#ifndef __IDuplicateSpreadCmdData__
#define __IDuplicateSpreadCmdData__

#include "IPMUnknown.h"
#include "UIDRef.h"
#include "ISyncMasterPageData.h"

class IDuplicateSpreadCmdData : public IPMUnknown
{
public:
	virtual void Set(const UIDRef& sourceSpread, const UIDRef& destinationSpread) = 0;
	virtual const UIDRef& GetSourceSpread() const = 0;
	virtual const UIDRef& GetDestinationSpread() const = 0;
	virtual bool16 GetSignalResponderFlag() const = 0;
	virtual void SetSignalResponderFlag(const bool16& bSignalResponder) = 0;
	virtual const ISyncMasterPageData::SyncMasterPageOptions& GetDuplicateOption() const = 0;
	virtual void SetDuplicateOption(const ISyncMasterPageData::SyncMasterPageOptions& option) = 0;
};

#endif // __IDuplicateSpreadCmdData__
