//========================================================================================
//  
//  $File$
//  
//  Owner: Sdu 
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
//  
//  Contains IDs used by the Portable Network Graphics (PNG) format filter
//  
//========================================================================================

#ifndef __PNGFilterUIID__
#define __PNGFilterUIID__

#include "CrossPlatformTypes.h"
#include "IDFactory.h"

#define kPNGFilterUIPrefix				RezLong(0x1d900)

// Plugin ID
#define kPNGFilterUIPluginName			"PNG Import Filter UI"
DECLARE_PMID(kPlugInIDSpace, kPNGFilterUIPluginID, kPNGFilterUIPrefix + 0)

// ClassIDs
DECLARE_PMID(kClassIDSpace, kPNGPrefsDialogBoss, kPNGFilterUIPrefix + 0)
DECLARE_PMID(kClassIDSpace, kPNGExportUIDialogBoss, kPNGFilterUIPrefix + 1)
DECLARE_PMID(kClassIDSpace, kEVEPNGExportSuffixButtonWidgetBoss, kPNGFilterUIPrefix + 2)
DECLARE_PMID(kClassIDSpace, kPNGExportSuffixActionComponentBoss, kPNGFilterUIPrefix + 3)

// Interface IDs
DECLARE_PMID(kInterfaceIDSpace, IID_IPNGIMPORTFILEDATA, kPNGFilterUIPrefix + 1)

// Implementation IDs
DECLARE_PMID(kImplementationIDSpace,	kPNGPrefsDialogControllerImpl,		kPNGFilterUIPrefix + 1)
DECLARE_PMID(kImplementationIDSpace,	kPNGPrefsPanelCreatorImpl,			kPNGFilterUIPrefix + 2)
DECLARE_PMID(kImplementationIDSpace,	kPNGPrefsDialogObserverImpl,		kPNGFilterUIPrefix + 3)
DECLARE_PMID(kImplementationIDSpace,	kPNGExportUIDialogControllerImpl,	kPNGFilterUIPrefix + 4) 
DECLARE_PMID(kImplementationIDSpace,	kPNGExportUIDialogObserverImpl,		kPNGFilterUIPrefix + 5)
DECLARE_PMID(kImplementationIDSpace,	kPNGExportSuffixActionComponentImpl,	kPNGFilterUIPrefix + 6)


// Widget IDs

DECLARE_PMID(kWidgetIDSpace, kPNGPrefsDialogWidgetId,				kPNGFilterUIPrefix + 1)
DECLARE_PMID(kWidgetIDSpace, kPNGPrefsIntentDropDownWidgetId,		kPNGFilterUIPrefix + 2)
DECLARE_PMID(kWidgetIDSpace, kPNGPrefsProfileDropDownWidgetId,		kPNGFilterUIPrefix + 3)
DECLARE_PMID(kWidgetIDSpace, kPNGUISettingsPanelWID,				kPNGFilterUIPrefix + 4)
DECLARE_PMID(kWidgetIDSpace, kPNGPrefsUseTransCheckBoxWidgetId,		kPNGFilterUIPrefix + 5)
DECLARE_PMID(kWidgetIDSpace, kPNGPrefsWhiteBkgndWidgetId,			kPNGFilterUIPrefix + 6)
DECLARE_PMID(kWidgetIDSpace, kPNGPrefsFileDefdWidgetId,				kPNGFilterUIPrefix + 7)
DECLARE_PMID(kWidgetIDSpace, kPNGPrefsApplyGammaCheckBoxWidgetId,	kPNGFilterUIPrefix + 8)
DECLARE_PMID(kWidgetIDSpace, kPNGPrefsGammaValueEditBoxWidgetId,	kPNGFilterUIPrefix + 9)
DECLARE_PMID(kWidgetIDSpace, kBackgroundClusterWidgetId,			kPNGFilterUIPrefix + 10)
DECLARE_PMID(kWidgetIDSpace, kGammaValueTextWidgetId,				kPNGFilterUIPrefix + 11)
DECLARE_PMID(kWidgetIDSpace, kPNGExportPrefsDialogWidgetId,			kPNGFilterUIPrefix + 12)
DECLARE_PMID(kWidgetIDSpace, kPNGUIPagePanelWID,					kPNGFilterUIPrefix + 13)
DECLARE_PMID(kWidgetIDSpace, kPNGUIPageGroupTitleWID,				kPNGFilterUIPrefix + 14)
DECLARE_PMID(kWidgetIDSpace, kPNGUIPageClusterWID,					kPNGFilterUIPrefix + 15)
DECLARE_PMID(kWidgetIDSpace, kRadioPNGUIItemSelectionWID,			kPNGFilterUIPrefix + 16)
DECLARE_PMID(kWidgetIDSpace, kRadioPNGUICurrentPageWID,				kPNGFilterUIPrefix + 17)
DECLARE_PMID(kWidgetIDSpace, kRadioPNGUIAllPageWID,					kPNGFilterUIPrefix + 18)
DECLARE_PMID(kWidgetIDSpace, kRangeEditPNGUIPageWID,				kPNGFilterUIPrefix + 19)
//DECLARE_PMID(kWidgetIDSpace, kPNGExportSpreadsCheckWID,				kPNGFilterUIPrefix + 20)
DECLARE_PMID(kWidgetIDSpace, kPNGUISettingsGroupTitleWID,			kPNGFilterUIPrefix + 21)
DECLARE_PMID(kWidgetIDSpace, kStaticPNGExportImageQualityWId,		kPNGFilterUIPrefix + 22)
DECLARE_PMID(kWidgetIDSpace, kDropDownPNGExportImageQualityWId,		kPNGFilterUIPrefix + 23)
DECLARE_PMID(kWidgetIDSpace, kPNGResolutionComboWID,				kPNGFilterUIPrefix + 24)
DECLARE_PMID(kWidgetIDSpace, kPNGColorTextWidgetId,					kPNGFilterUIPrefix + 25)
DECLARE_PMID(kWidgetIDSpace, kPNGColorDropDownWidgetId,				kPNGFilterUIPrefix + 26)
DECLARE_PMID(kWidgetIDSpace, kPNGUIOptionsGroupTitleWID,			kPNGFilterUIPrefix + 27)
DECLARE_PMID(kWidgetIDSpace, kPNGAntiAliasWID,						kPNGFilterUIPrefix + 28)
DECLARE_PMID(kWidgetIDSpace, kPNGUseDocBleedSettingsWID,			kPNGFilterUIPrefix + 29)
DECLARE_PMID(kWidgetIDSpace, kPNGSimulateOverprintWID,				kPNGFilterUIPrefix + 30)
DECLARE_PMID(kWidgetIDSpace, kPNGTransperentBackgroundWID,			kPNGFilterUIPrefix + 31)
DECLARE_PMID(kWidgetIDSpace, kPNGExportSpreadsRadioWID,				kPNGFilterUIPrefix + 32)
DECLARE_PMID(kWidgetIDSpace, kPNGExportPagesRadioWID,				kPNGFilterUIPrefix + 33)
DECLARE_PMID(kWidgetIDSpace, kPNGExportSuffixGenericPanelWId,			kPNGFilterUIPrefix + 34)
DECLARE_PMID(kWidgetIDSpace, kPNGExportSuffixStaticTextWId,			kPNGFilterUIPrefix + 35)
DECLARE_PMID(kWidgetIDSpace, kPNGExportTextAfterEditBoxWId,			kPNGFilterUIPrefix + 36)
DECLARE_PMID(kWidgetIDSpace, kPNGExportSuffixButtonWId,				kPNGFilterUIPrefix + 37)
DECLARE_PMID(kWidgetIDSpace, kPNGExportPreviewTextBoxWId,			kPNGFilterUIPrefix + 38)
DECLARE_PMID(kWidgetIDSpace, kPNGExportHiddenSpreadNotePanelWID,    kPNGFilterUIPrefix + 39)
DECLARE_PMID(kWidgetIDSpace, kPNGExportHiddenSpreadNoteWID,         kPNGFilterUIPrefix + 40)
DECLARE_PMID(kWidgetIDSpace, kPNGExportHiddenSpreadWID,             kPNGFilterUIPrefix + 41)

// Action ID 
DECLARE_PMID(kActionIDSpace, kPNGExportSuffixPageNumActionID,		kPNGFilterUIPrefix + 1)
DECLARE_PMID(kActionIDSpace, kPNGExportSuffixPageSizeActionID,		kPNGFilterUIPrefix + 2)
DECLARE_PMID(kActionIDSpace, kPNGExportSuffixIncrementalNumActionID,kPNGFilterUIPrefix + 3)


#endif // __PNGFilterUIID__
