//========================================================================================
//  
//  $File$
//  
//  Owner: Michael_Martz
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
	#ifndef _ToolboxProxyTypes_
	#define _ToolboxProxyTypes_
//========================================================================================
/**	A class to describe the type of toolbox proxy
 */
class ToolboxProxy
	{
	//________________________________________________________________________________
	//	Data Types
	//________________________________________________________________________________
	public:
/**	The ActiveProxyType either has the stroke active or the fill active
 */
		typedef enum
			{
			/** The stroke is active */
			kStrokeActive			= 0,
			/** The fill is active */
			kFillActive
			}
			ActiveProxyType;
	};
	
#endif // _ToolboxProxyTypes_
