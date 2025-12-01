//========================================================================================
//  
//  $File$
//  
//  Owner: Paul Sorrick
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
//  Implementation for a simple layer z-order exchange handler
//  
//========================================================================================

#include "VCPlugInHeaders.h"

#include "LayerPanelID.h"

#include "CDataExchangeHandlerFor.h"

//========================================================================
// Class LayerZOrderDEHandler
//========================================================================

class LayerZOrderDEHandler : public CDataExchangeHandlerFor
{
	public:
		LayerZOrderDEHandler(IPMUnknown *boss) : CDataExchangeHandlerFor(boss) {}
		virtual	~LayerZOrderDEHandler() {}

		virtual	PMFlavor 	GetFlavor() const { return kPMLayerZOrderFlavor; }
};

CREATE_PMINTERFACE(LayerZOrderDEHandler, kLayerZOrderDEHandlerImpl)
