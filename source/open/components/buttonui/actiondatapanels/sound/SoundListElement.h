//========================================================================================
//  
//  $File$
//  
//  Owner: Tim Wright
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
#ifndef __SoundListElement_h__
#define __SoundListElement_h__

#include "UIDRef.h"

//========================================================================================
// CLASS SoundListElement
//========================================================================================

class SoundListElement
{
public:
	typedef object_type data_type;

	SoundListElement(const UIDRef& sound) :
		fSound(sound)
	{
	}
	
	SoundListElement(const SoundListElement& other) :
		fSound(other.fSound)
	{
	}
	
	SoundListElement& operator=(const SoundListElement& other)
	{
		if (this != &other)
			fSound = other.fSound;
		
		return *this;
	}

	UIDRef GetSoundRef() const
	{
		return fSound;
	}
	
public:
	UIDRef		fSound;
};

#endif // __SoundListElement_h__
