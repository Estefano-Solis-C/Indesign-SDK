//========================================================================================
//  
//  $File$
//  
//  Owner: mohammed fakhoury
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

#include "PlugIn.h"
#include "PMTypes.h"


bool16 gFalse = kFalse;
void DontDeadStrip();

extern "C" BOOL APIENTRY DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved);

//
// DllMain; DLL entry point
//
extern "C" BOOL APIENTRY DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	switch( dwReason ){
	  	case DLL_PROCESS_ATTACH:
		{
			DontDeadStrip();	// force static constructors & destructors 
								// to be linked in
			
			TCHAR pathName[_MAX_PATH];
			::GetModuleFileName(hInstance, pathName, sizeof( pathName ) / sizeof ( TCHAR ));	
			IDFile spec;
			spec.SetTString(pathName);
			ResourceEnabler::SetResourceFile( &spec );
		}
		break;

	};

	return TRUE; 
}

