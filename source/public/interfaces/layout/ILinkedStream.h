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
//  
//  ILinkedStream.h
//  
//========================================================================================

#pragma once
#ifndef __ILinkedStream__
#define __ILinkedStream__

// IID_ILINKEDSTREAM interface

/**
 Interface used to create a stream for reading a DataLink's associated linked file.
 */
class ILinkedStream : public IPMUnknown
{
public:
	/**
	 Creates a stream that can be used to read a linked file. 
	 @return Pointer to the created read stream.
	 */
	virtual IPMStream *CreateReadStream() = 0;
};

#endif // __ILinkedStream__
