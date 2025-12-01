//========================================================================================
//  
//  $File$
//  
//  Owner: Joe Shankar
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
//  Purpose: Data interface for ITableModel::ESplitDirection
//  
//========================================================================================

#ifndef __ICellSplitDirectionData__
#define __ICellSplitDirectionData__

#include "ITableModel.h"


//===================================================================================
// class ICellSplitDirectionData		
//===================================================================================
class ICellSplitDirectionData : public IPMUnknown {

public:
	// ----- Types and Constants -----
	enum { kDefaultIID = IID_ICELLSPLITDIRECTIONDATA };

	// ----- Accessors -----
	virtual void 							Set(ITableModel::ESplitDirection direction) = 0;
	virtual ITableModel::ESplitDirection 	Get() const = 0;
};

#endif // __ICellSplitDirectionData__
