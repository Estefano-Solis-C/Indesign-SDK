//========================================================================================
//  
//  $File$
//  
//  Owner: Tim Wright
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

#ifndef __ChoiceListControlData_tpp__
#define __ChoiceListControlData_tpp__

#include "ListBoxControlDataOf.tpp"

#ifdef MACINTOSH
#include "MChoiceListControlData.tpp"
#endif

#ifdef WINDOWS
#include "WChoiceListControlData.tpp"
#endif

#endif // __ChoiceListControlData_tpp__

