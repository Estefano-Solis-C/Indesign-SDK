//========================================================================================
//  
//  $File$
//  
//  Owner: Chris Parrish
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

#ifndef __InCopyFileActionsUIID__
#define __InCopyFileActionsUIID__

#include "CrossPlatformTypes.h"
#include "IDFactory.h"

#define kInCopyFileActionsUIPrefix			RezLong(0x21300)

//----------------------------------------------------------------------------------------
// Plug-in identifier
//----------------------------------------------------------------------------------------

#define kInCopyFileActionsUIPluginName 	"InCopyFileActionsUI"
DECLARE_PMID(kPlugInIDSpace, kInCopyFileActionsUIPluginID, kInCopyFileActionsUIPrefix + 1)

//----------------------------------------------------------------------------------------
// Class identifiers
//----------------------------------------------------------------------------------------

DECLARE_PMID(kClassIDSpace,		kInCopyFileActionsComponentBoss,		kInCopyFileActionsUIPrefix + 2)
DECLARE_PMID(kClassIDSpace,		kInCopyMRUListBoss,						kInCopyFileActionsUIPrefix + 13)


//----------------------------------------------------------------------------------------
// Interface identifiers
//----------------------------------------------------------------------------------------



//----------------------------------------------------------------------------------------
// Implementation identifiers
//----------------------------------------------------------------------------------------

DECLARE_PMID(kImplementationIDSpace,		kInCopyFileActionsComponentImpl,	kInCopyFileActionsUIPrefix + 1)

DECLARE_PMID(kImplementationIDSpace,		kInCopyRecentDocsDynamicMenuImpl,	kInCopyFileActionsUIPrefix + 12)
DECLARE_PMID(kImplementationIDSpace,		kInCopyRecentDocsComponentImpl,		kInCopyFileActionsUIPrefix + 13)


//----------------------------------------------------------------------------------------
// Action identifiers
//----------------------------------------------------------------------------------------

DECLARE_PMID(kActionIDSpace,		kUpdateDesignActionID,		kInCopyFileActionsUIPrefix + 1)
DECLARE_PMID(kActionIDSpace,		kSaveOldActionID,			kInCopyFileActionsUIPrefix + 2)

#endif // __InCopyFileActionsUIID__
