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
//========================================================================================

#include "VCPlugInHeaders.h"

// ----- Interface files -----

#include "ITreeNodeIDData.h"
#include "IViewPort.h"
#include "IWidgetParent.h"

// ----- Include files -----

#include "DVControlView.h"
#include "TimingPanelTreeNodeID.h"

// ----- Utility files -----

#include "DynamicDocumentsUIUtils.h"

// ----- ID files -----

#include "DynamicDocumentsUIID.h"

class TimingPanelTreeNodeGroupWidgetView : public DVControlView
{
	public:
		typedef DVControlView inherited;
							TimingPanelTreeNodeGroupWidgetView(IPMUnknown *boss);
		virtual 			~TimingPanelTreeNodeGroupWidgetView();
		
		virtual void  		DV_Draw(dvaui::drawbot::Drawbot *drawbotP) const;
};

CREATE_PERSIST_PMINTERFACE(TimingPanelTreeNodeGroupWidgetView, kTimingPanelTreeNodeGroupWidgetViewImpl)

TimingPanelTreeNodeGroupWidgetView::TimingPanelTreeNodeGroupWidgetView(IPMUnknown *boss) : inherited(boss)
{
}

TimingPanelTreeNodeGroupWidgetView :: ~TimingPanelTreeNodeGroupWidgetView()
{
}

void TimingPanelTreeNodeGroupWidgetView :: DV_Draw(dvaui::drawbot::Drawbot *drawbotP) const
{
	InterfacePtr<IWidgetParent>	iWidgetParent(this, IID_IWIDGETPARENT);
	InterfacePtr<ITreeNodeIDData> iHolderData(iWidgetParent->GetParent(), IID_ITREENODEIDDATA);
	if (iHolderData)
	{
		//
		// Get node information.
		//
		NodeID nodeIDHolder = iHolderData->Get();	
		TreeNodePtr<TimingPanelTreeNodeID> itemNode(nodeIDHolder);

		//
		// If it is not group item, we don't need to draw anything.
		//
		bool16 bIsGroupItem = itemNode->IsGroupItem();
		if (!bIsGroupItem)
			return;

		bool16 bIsFirstItemInGroup = itemNode->IsFirstItemInGroup();
		bool16 bIsLastItemInGroup = itemNode->IsLastItemInGroup();

		InterfacePtr<IControlView> iGroupWidgetView(this, UseDefaultIID());
		const PMRect& frame = iGroupWidgetView->GetFrame();
		PMReal width = frame.Width();
		PMReal height = frame.Height();

		ddui_utils::DrawGroupWidgetLines(frame.LeftTop(), width, height, drawbotP, kFalse, bIsFirstItemInGroup, bIsLastItemInGroup);
	}
}
