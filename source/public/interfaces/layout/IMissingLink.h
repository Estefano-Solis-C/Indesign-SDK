//========================================================================================
//  
//  $File$
//  
//  Owner: Steve Flenniken
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
#ifndef __MISSINGLINK__
#define __MISSINGLINK__

class IDataLink;

/**
This interface is used cache missing data links and to determine whether to search for a data link.
*/
class IMissingLink : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IMISSINGLINK };

	/**
		Add the specified data link to a list.
		@param IDataLink *dl: The data link to add to the list.
	*/
	virtual void AddMissing(const IDataLink &dl) = 0;

	/**
		Return whether we should look for the specified link.
		@param IDataLink *dl: The data link to check.
		@return bool32: True when you shouldn't bother looking for the link.
	*/
	virtual bool32 ShouldWeLookForLink(const IDataLink &dl) const = 0;
};

#endif // __MISSINGLINK__
