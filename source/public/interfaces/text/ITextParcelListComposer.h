//========================================================================================
//  
//  $File$
//  
//  Owner: dwaterfa
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
#ifndef __ITextParcelListComposer__
#define __ITextParcelListComposer__

#include "IPMUnknown.h"
#include "TextID.h"
#include "ParcelKey.h"


/** 
	@ingroup text_comp
*/
class ITextParcelListComposer : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ITEXTPARCELLISTCOMPOSER };

	/**
	Compose all the Parcels in the ParcelList.
	*/
	virtual void RecomposeThruLastParcel() = 0;

	/**
	Compose upto and including the specified Parcel. Passing in an invalid
	ParcelKey is the same as calling RecomposeThruLastParcel().
	*/
	virtual void RecomposeThru(ParcelKey key) = 0;

	//
	// Compose upto and including the specified TextIndex. The TextIndex MUST
	// be part of the TextStoryThread mapped to the ParcelList.
	//
	virtual void RecomposeThruTextIndex(TextIndex composeUpThruThisIndex) = 0;

};

#endif
