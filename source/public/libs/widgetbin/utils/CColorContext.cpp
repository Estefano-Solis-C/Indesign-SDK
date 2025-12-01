//========================================================================================
//  
//  $File$
//  
//  Owner: Mouhammad Fakhoury
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

#include "DV_VCWidgetHeaders.h"

#include "CColorContext.h"

CColorContext::CColorContext()
{
	fIInterfaceColors = (IInterfaceColors*)GetExecutionContextSession()->QueryInterface( IID_IINTERFACECOLORS );
}


CColorContext::~CColorContext()
{
	if( fIInterfaceColors )
		fIInterfaceColors->Release();
}


bool16 CColorContext::GetRGBColor(const IInterfaceColors::InterfaceColor index, RGBColor& rgbColor)const
{
	return fIInterfaceColors->GetRGBColor(index, rgbColor);
}


bool16 CColorContext::GetRealAGMColor(const IInterfaceColors::InterfaceColor index, RealAGMColor& realAGMColor)const
{
	return fIInterfaceColors->GetRealAGMColor(index, realAGMColor);
}

