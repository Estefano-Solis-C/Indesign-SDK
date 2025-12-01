//========================================================================================
//  
//  $File$
//  
//  Owner: Zak_Williamson
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
#ifndef __IObjectModelIterator__
#define __IObjectModelIterator__

/**
	Abstract class for iterating over the classes registered in the object model. 
	You can get one of these by calling IObjectModel::NewObjectModelIterator.
	THIS IS NOT A STANDARD BOSS INTERFACE!!
	@see IObjectModel
*/
class IObjectModelIterator INHERITFROM
{
public:
	/** This object should be deleted when you are all done with it. */
	virtual ~IObjectModelIterator() {}

	/**
		An iterator iterates over classes that implement a given interface. Next() returns the 
		next class that supports the interface, or kInvalidClass if there are no more classes.
	*/
	virtual ClassID Next() = 0;
};

#endif
