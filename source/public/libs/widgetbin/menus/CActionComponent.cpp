//========================================================================================
//  
//  $File$
//  
//  Owner: lance bushore
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

#include "VCWidgetHeaders.h" 

#include "CActionComponent.h"

#ifdef DEBUG
#include "DebugClassUtils.h"
#include "IActionStateList.h"
#endif
DEFINE_HELPER_METHODS(CActionComponent)

CActionComponent::CActionComponent(IPMUnknown* boss)
	: HELPER_METHODS_INIT(boss)
{
}

CActionComponent::~CActionComponent()
{
}

#ifdef ID_ENABLE_DEBUGGING
void CActionComponent::Register_Debug_Actions()
{
}
#endif

void CActionComponent::UpdateActionStates(IActiveContext* ac, IActionStateList *listToUpdate, GSysPoint mousePoint, IPMUnknown* widget)
{
#ifdef DEBUG
	DebugClassUtilsBuffer classBuf,actionBuf;
	ASSERT_FAIL(FORMAT_ARGS("Action %s specifies 'kCustomEnabling' but ClassID %s does not override UpdateActionStates!",DebugClassUtils::GetIDName(&actionBuf,listToUpdate->GetNthAction(0)),DebugClassUtils::GetIDName(&classBuf,::GetClass(this))));
#endif
}
