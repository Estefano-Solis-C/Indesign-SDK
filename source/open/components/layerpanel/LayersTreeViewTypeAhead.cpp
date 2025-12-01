//========================================================================================
//  
//  $File$
//  
//  Owner: Bob Freeman
//  
//  $Author$
//  
//  $DateTime$
//  
//  $Revision$
//  
//  $Change$
//  
//  ADOBE CONFIDENTIAL
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#include "VCPlugInHeaders.h"
#include "CPMUnknown.h" 
#include "ITreeViewTypeAhead.h"
#include "IDocumentLayer.h"
#include "IHierarchy.h"

#include "LayerPanelUtils.h"
#include "LayerTreeUIDNodeID.h"


class LayersTreeViewTypeAhead : public CPMUnknown<ITreeViewTypeAhead>
{
public:
	LayersTreeViewTypeAhead(IPMUnknown *boss):CPMUnknown<ITreeViewTypeAhead>(boss) {}

	virtual PMString	GetStringForNode( const NodeID& node ) const;

};


CREATE_PMINTERFACE(LayersTreeViewTypeAhead, kLayersTreeViewTypeAheadImpl)


PMString LayersTreeViewTypeAhead::GetStringForNode( const NodeID& node ) const
{
	// Get the name
	TreeNodePtr<const LayerTreeUIDNodeID>	layerNode(node);

	if(layerNode->IsLayerEntry())
	{
		InterfacePtr<const IDocumentLayer> docLayer(LayerPanelUtils::GetCurrentLayerPanelDB(this),layerNode->GetUID(),UseDefaultIID());
		return docLayer->GetName();
	}
	else
	{
		InterfacePtr<const IHierarchy> piHier(LayerPanelUtils::GetCurrentLayerPanelDB(this),layerNode->GetUID(),UseDefaultIID());
		return LayerPanelUtils::GetDefaultPageItemElementName(piHier);
	}
}


