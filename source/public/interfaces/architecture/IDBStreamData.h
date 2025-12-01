//========================================================================================
//  
//  $File$
//  
//  Owner: robin briggs
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
#ifndef __IDBStreamData__
#define __IDBStreamData__

#include "ShuksanID.h"

/** Data interface for controlling a read or write database stream.
@see StreamUtil
@see IDBStreamCopyData
@ingroup arch_db
*/
class IDBStreamData : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_IDBSTREAMDATA };

		/** Set what object in the database we're streaming to/from.
			@param db	what database we're looking in
			@param id	UID of the object in the database
		*/
		virtual void Set(IDataBase *db, UID id) = 0;

		/** Get which database we're streaming to/from.
			@return Database stream is reading or writing.
		*/
		virtual IDataBase *GetDataBase() const = 0;

		/** Get which object we're streaming to/from.
			@return UID of the object we're reading or writing
		*/
		virtual UID GetUID() const = 0;
};


#endif // __IDBStreamData__
