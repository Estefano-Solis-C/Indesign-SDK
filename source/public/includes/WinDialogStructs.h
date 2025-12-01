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

#pragma once
#ifdef WINDOWS

#ifndef __WinDialogStructs__
#define __WinDialogStructs__

/////////////////////////////////////////////////////////////////////////////
// Extended dialog templates (new in Win95)

#pragma pack(push, 1)

struct DlgTmpl
{
	WORD dlgVer;
	WORD signature;
	DWORD helpID;
	DWORD exStyle;
	DWORD style;
	WORD cdit;//cDlgItems;
	short x;
	short y;
	short cx;
	short cy;
};

struct DlgItemTmpl
{
	DWORD helpID;
	DWORD dwExtendedStyle;
	DWORD style;
	short x;
	short y;
	short cx;
	short cy;
	DWORD id;
};

#pragma pack(pop)

#endif //__WinDialogStructs__

#endif // WINDOWS
