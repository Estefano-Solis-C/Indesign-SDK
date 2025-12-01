//========================================================================================
//  
//  $File$
//  
//  Owner: Steve Pellegrin
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
//  ABSTRACT:
//  This file defines a set of types for use by all PageMaker applciations.
//  See the comments below for the different types.
//  
//========================================================================================

#pragma once
#ifndef __PMTYPES__
#define __PMTYPES__

#include "BaseType.h"

#ifdef MACINTOSH
#include "MSysType.h"
#endif
#ifdef WINDOWS
#include "WSysType.h"
#endif
#ifdef WASM
#include "WasmSysType.h"
#endif

#ifdef WASM
typedef uint32_t OSType;
#endif

typedef OSType	SysOSType;

#if defined(MACINTOSH)
const SysOSType kAnyCreator = 0x3f3f3f3f;	// this is four question marks, "?", as hex, so it isn't interpreted as a trigraph
const SysOSType kTextType = 'TEXT';
const SysOSType kAllTypes = 0x3f3f3f3f;	// this is four question marks, "?", as hex, so it isn't interpreted as a trigraph
#endif
#if defined(WINDOWS)
const SysOSType kAnyCreator = 0;
const SysOSType kTextType = 0;
#endif
#if defined(WASM)
const SysOSType kAnyCreator = 0x3f3f3f3f;
const SysOSType kTextType = 0x3f3f3f3f;
#endif

#include "SysFileType.h"

#include "PMReal.h"

const RsrcID kInvalidRsrcID = 0;

class PMRsrcID
{
	public:
		PMRsrcID() : fId(kInvalidRsrcID),fPluginId(kInvalidPlugin) {} 
		PMRsrcID(const RsrcID rID, const PluginID& pluginID) : fId(rID),fPluginId(pluginID) {}
		PMRsrcID(const PMRsrcID& other) : fId(other.fId),fPluginId(other.fPluginId) {}
		
		void operator=(const PMRsrcID& other) { fId = other.fId; fPluginId = other.fPluginId; }
		
		bool operator==(const PMRsrcID& other) const { return (fId == other.fId) && (fPluginId == other.fPluginId); }

		bool operator <(const PMRsrcID& rhs) const
		{
			if (fId != rhs.fId)
				return fId < rhs.fId;
			else
				return fPluginId < rhs.fPluginId;
		}

	RsrcID		fId;
	PluginID	fPluginId;
	
};

/** Constant to use to for global mouse location. */
#ifdef MACINTOSH
	const GSysPoint     kInvalidMousePoint(-kMaxInt16,-kMaxInt16);
#else
	const GSysPoint     kInvalidMousePoint = {-kMaxInt16,-kMaxInt16};
#endif

#endif // __PMTYPES__
