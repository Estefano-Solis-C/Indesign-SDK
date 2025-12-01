//========================================================================================
//  
//  $File$
//  
//  Owner: Bernd Paradies
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
#ifndef __IAdaptiveLayoutUtils__
#define __IAdaptiveLayoutUtils__



#include "AutoLayoutID.h"
#include "IPMUnknown.h"
#include "ITransformCmdData.h"

class IAdaptiveLayoutUtils : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IADAPTIVELAYOUTUTILS };
	virtual ErrorCode ResizePageMarginsAndGutter(const UIDRef& pageUIDRef, const PMReal& horizontalScale, const PMReal& verticalScale, bool scaleMargins, bool scaleGutter) = 0;
	virtual ErrorCode TransformItems(const UIDList& items, const Transform::CoordinateSpace &coordinateSpace, const Transform::TransformOrigin& referencePoint,
		const Transform::TransformValue& xform, Transform::ScaleMethod scaleMethod = Transform::UseLensScaling()) = 0;
};


#endif	// __IAdaptiveLayoutUtils__
