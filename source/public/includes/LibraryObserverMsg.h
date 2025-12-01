//========================================================================================
//  
//  $File$
//  
//  Owner: Mark VerMurlen
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
//  Reviewed: 9/28/98
//  
//  Purpose:
//  This class is used by the Library to specify to the Library Observers
//  when libraries are opened and closed.
//  
//========================================================================================

#pragma once
#ifndef __LibraryObserverMsg__
#define __LibraryObserverMsg__


class ILibrary;

/** This class is used by the Library to specify to the Library Observers
	when libraries are opened and closed.
*/
class LibraryObserverMsg
{
public:
	/** Messages used to indicate library access operations.
	*/
	enum MessageType
		{
			kMsg_OpenLibrary = 0,
			kMsg_CloseLibrary,
			kMsg_LibraryAlreadyOpen
		};

	/** What is happening
	*/
	MessageType					fMsgType;

	/** What library it's happening to
	*/
	ILibrary*					fLibrary;
};

#endif	// __LibraryObserverMsg__
