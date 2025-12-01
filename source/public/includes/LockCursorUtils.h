//========================================================================================
//  
//  $File$
//  
//  Owner: Yeming Liu
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
//  Utilities for lock cursor
//  
//========================================================================================

#pragma once
#ifndef __LockCursorUtils__
#define __LockCursorUtils__

 
#pragma export on

PUBLIC_DECL bool16 	HaveSelectedItemsAndAllLocked();		
	// test if all the selected items are locked or not 
	// NO selection returns kFalse

PUBLIC_DECL bool16 AreItemsAllLocked( const UIDList& items ) ;
			// test if all the selected items are locked or not (empty list returns kTrue)

PUBLIC_DECL void FilterLockedItems( UIDList& items ) ;
			// filter out the locked items so that they will not be affected

PUBLIC_DECL bool16 HaveLockedItems( const UIDList& items ) ;
PUBLIC_DECL void FilterUnlockedItems( UIDList& items ) ;

PUBLIC_DECL bool16 IsLockedItemOrLayer(UIDRef& itemRef);
			// Test if the item is locked, or if it's on a locked layer.

#pragma export off

#endif // __LockCursorUtils__
