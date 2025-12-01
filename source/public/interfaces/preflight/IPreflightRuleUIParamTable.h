//========================================================================================
//  
//  $File$
//  
//  Owner: Matt Phillips
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
//  
//	The purpose of this interface is to work with the kPreflightNativeRuleUIImpl 
//	implementation of IID_IPREFLIGHTRULEUI. That implementation looks for this interface
//	to pull a table of parameter information, and drives the UI requirements from there.
//
//========================================================================================

#pragma once

#include "IPMUnknown.h"
#include "IPreflightRuleUI.h"
#include "PackageAndPreflightUIID.h"

static const char* kParamRoot = "";
static const char* kParamNoLabel = "";

class IPreflightRuleUIParamTable : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IPREFLIGHTRULEUIPARAMTABLE };

	/** */
	typedef struct 
	{
		/** */
		const char*	fKeyID;
		/** */
		const char* fKeyLabel;
		/** */
		const IPreflightRuleUI::UnitType fUnitType;
		/** */
		const PMReal fMin;
		/** */
		const PMReal fMax;
		/** */
		const char* fKeyParent;
	} ParamInfo;

	/** Return an array of ParamInfo records. Return the number of entries in 'count.' */
	virtual ParamInfo const* GetParameterTable(int32& count) const = 0;
};

