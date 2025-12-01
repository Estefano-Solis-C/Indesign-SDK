//========================================================================================
//  
//  $File$
//  
//  Owner: Michael Burbidge
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
//  Implementation for a simple XML Element exchange handler
//  
//========================================================================================

#include "VCPlugInHeaders.h"

// ----- Interface Includes -----

#include "IBehaviorDragDropData.h"

// ----- Implementation Includes -----

#include "BehaviorUIID.h"
#include "BehaviorFlavorTypes.h"
#include "CDataExchangeHandlerFor.h"

//========================================================================
// Class EventDragDropDEHandler
//========================================================================

class EventDragDropDEHandler : public CDataExchangeHandlerFor
{
	public:
		EventDragDropDEHandler(IPMUnknown *boss) : CDataExchangeHandlerFor(boss) {}
		virtual	~EventDragDropDEHandler() {}

		virtual	PMFlavor 	GetFlavor() const { return kEventDragDropFlavor; }

		virtual void			Clear();
		virtual bool16		IsEmpty() const;
};

//========================================================================================
// Implementation EventDragDropDEHandler
//========================================================================================

CREATE_PMINTERFACE(EventDragDropDEHandler, kEventDragDropDEHandlerImpl)

//--------------------------------------------------------------------------------------
// Clear
//--------------------------------------------------------------------------------------
void EventDragDropDEHandler::Clear()
{
	InterfacePtr<IBehaviorDragDropData> data(this, UseDefaultIID());
	data->Clear();
}

//--------------------------------------------------------------------------------------
// IsEmpty
//--------------------------------------------------------------------------------------
bool16 EventDragDropDEHandler::IsEmpty() const
{
	InterfacePtr<IBehaviorDragDropData> data(this, UseDefaultIID());
	return data->IsEmpty();
}
