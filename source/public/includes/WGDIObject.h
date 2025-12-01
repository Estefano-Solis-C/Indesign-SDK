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
//========================================================================================

#pragma once
#ifndef __WGDIObject_h__
#define __WGDIObject_h__

class WGDIObjectRep;

//========================================================================================
// CLASS WGDIObject
/**
	Internal utility class used to help keep track of shared Windows GDI drawing objects
	(but used only by InterfaceFontInfo).
*/
//========================================================================================

class DV_WIDGET_DECL WGDIObject
{
public:
	/** Constructor based on a GDI object. */
	WGDIObject(HGDIOBJ GDIOBJ = nil);
	/** Copy Constructor */
	WGDIObject(const WGDIObject& other);
	~WGDIObject();

	/** assignment operator */
	WGDIObject& operator=(const WGDIObject& other);

	/** get the GDI object */
	HGDIOBJ GetGDIObject() const;

private:
	/** add ref GDI object */
	void AddRef(WGDIObjectRep* rep);
	/** release the GDI object */
	void Release(WGDIObjectRep* rep);

private:
	WGDIObjectRep*	fRep;
};

#endif
