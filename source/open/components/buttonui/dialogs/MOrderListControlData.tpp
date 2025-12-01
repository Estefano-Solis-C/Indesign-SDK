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

#ifndef __MOrderListControlData_tpp__
#define __MOrderListControlData_tpp__

#include "OrderListElement.h"
#include "MListBoxControlDataOf.tpp"

//----------------------------------------------------------------------------------------
// MListBoxControlDataOf::GetItemData -- Specialization for ActionsListElement
//----------------------------------------------------------------------------------------

template <>
void MListBoxControlDataOf<OrderListElement>::GetItemData(const OrderListElement& item, void** data, short* length) const
{
	static std::string staticString;

	PMString string = item.GetName();
	staticString = string.GetPlatformString();

	*data = (void*)staticString.c_str();
	*length = staticString.size();
}

#endif // __MActionsListControlData_tpp__

