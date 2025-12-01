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
	#ifndef _IGraphicAttribute_Boolean_
	#define _IGraphicAttribute_Boolean_
//===================================================================================
//___________________________________________________________________________________
//	INCLUDES
//___________________________________________________________________________________
	#include "GraphicStylesID.h"
	#include "IPMUnknown.h"
//===================================================================================
//___________________________________________________________________________________
//	CLASS DECLARATION
//___________________________________________________________________________________

	/**	A graphic attribute data interface for boolean values.
	*/
	class IGraphicAttrBoolean : public IPMUnknown
		{
		public:
			enum {kDefaultIID = IID_IGRAPHICATTR_BOOLEAN};
			
		//___________________________________________________________________________
		//	Accessor memeber functions
		//___________________________________________________________________________
		public:
			/**	Returns the boolean value.
			*/
			virtual bool16		GetBoolean				(void) const = 0;
			/**	Set the boolean value.
				@param boolValue is the boolean value to set.
			*/
			virtual void		SetBoolean				(const bool16& boolValue) = 0;
		};
		
#endif // _IGraphicAttribute_Boolean_
