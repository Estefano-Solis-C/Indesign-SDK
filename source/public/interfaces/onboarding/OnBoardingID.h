//========================================================================================
//  
//  $File$
//  
//  Owner: murastog
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
//  Defines IDs used by the BscDlg plug-in.
//  
//========================================================================================

#ifndef __OnBoardingID_h__
#define __OnBoardingID_h__

#include "CrossPlatformTypes.h"
#include "IDFactory.h"
#include "FormatNumber.h"

#define kOnBoardingPrefix	 RezLong(0x23000)

// <Start IDC>
// PluginID
#define kOnBoardingPluginName 				"OnBoarding"
DECLARE_PMID(kPlugInIDSpace, kOnBoardingPluginID, kOnBoardingPrefix + 1)

// <Class ID>
DECLARE_PMID(kClassIDSpace, kContextManagerBoss, kOnBoardingPrefix + 1)
DECLARE_PMID(kClassIDSpace, kContextMangerResponderBoss, kOnBoardingPrefix + 2)
//DECLARE_PMID(kClassIDSpace, kSetNewDocCountCmdBoss, kOnBoardingPrefix + 3)
DECLARE_PMID(kClassIDSpace, kSetOpenDocCountCmdBoss, kOnBoardingPrefix + 4)
DECLARE_PMID(kClassIDSpace, kStockIAMResponderBoss, kOnBoardingPrefix + 5)
DECLARE_PMID(kClassIDSpace, kSetFootnoteIAMShownCmdBoss, kOnBoardingPrefix + 6)
DECLARE_PMID(kClassIDSpace, kFootnoteIAMObserverBoss, kOnBoardingPrefix + 7)
DECLARE_PMID(kClassIDSpace, kFootNoteIAMResponderBoss, kOnBoardingPrefix + 8)
DECLARE_PMID(kClassIDSpace, kCopyPasteIAMObserverBoss, kOnBoardingPrefix + 9)
DECLARE_PMID(kClassIDSpace, kSetCopyPasteIAMShownCmdBoss, kOnBoardingPrefix + 10)
DECLARE_PMID(kClassIDSpace, kSetEndNoteIAMShownCmdBoss, kOnBoardingPrefix + 11)
DECLARE_PMID(kClassIDSpace, kEndNoteIAMResponderBoss, kOnBoardingPrefix + 12)
DECLARE_PMID(kClassIDSpace, kSetParaBorderIAMShownCmdBoss, kOnBoardingPrefix + 13)
DECLARE_PMID(kClassIDSpace, kParaBorderIAMObserverBoss, kOnBoardingPrefix + 14)
DECLARE_PMID(kClassIDSpace, kParaBorderIAMResponderBoss, kOnBoardingPrefix + 15)
DECLARE_PMID(kClassIDSpace, kDudenIAMResponderBoss, kOnBoardingPrefix + 16)
DECLARE_PMID(kClassIDSpace, kSetDudenIAMShownCmdBoss, kOnBoardingPrefix + 17)
DECLARE_PMID(kClassIDSpace, kSetParaBorderIAMforIconShownCmdBoss, kOnBoardingPrefix + 18)
DECLARE_PMID(kClassIDSpace, kSetConsistentShortcutsIAMShownCmdBoss, kOnBoardingPrefix + 19)
DECLARE_PMID(kClassIDSpace, kConsistentShortcutsIAMResponderBoss, kOnBoardingPrefix + 20)
DECLARE_PMID(kClassIDSpace, kOnBoardingObserverBoss, kOnBoardingPrefix + 21)
DECLARE_PMID(kClassIDSpace, kPropsPanelIAMResponderBoss, kOnBoardingPrefix + 22)
DECLARE_PMID(kClassIDSpace, kPropsPanelIAMShownCmdBoss, kOnBoardingPrefix + 23)
DECLARE_PMID(kClassIDSpace, kkAdaptiveLayoutIAMShowCountIncrementCmdBoss, kOnBoardingPrefix + 24)
DECLARE_PMID(kClassIDSpace, kSetImportPDFCommentsIAMShownCmdBoss, kOnBoardingPrefix + 25)
//gap
DECLARE_PMID(kClassIDSpace, kAdaptiveIAMCloseOnAllDocCloseResponderBoss, kOnBoardingPrefix + 27)
DECLARE_PMID(kClassIDSpace, kContentAwareFitIAMResponderBoss, kOnBoardingPrefix + 28)
DECLARE_PMID(kClassIDSpace, kSetContentAwareFitIAMShownCountCmdBoss, kOnBoardingPrefix + 29)
DECLARE_PMID(kClassIDSpace, kOnboardingConversionProviderBoss, kOnBoardingPrefix + 30)
DECLARE_PMID(kClassIDSpace, kSetVariableFontsIAMShownCmdBoss, kOnBoardingPrefix + 31)
DECLARE_PMID(kClassIDSpace, kVariableFontsIAMResponderBoss, kOnBoardingPrefix + 32)
DECLARE_PMID(kClassIDSpace, kReviewCollaborationIAMCmdBoss, kOnBoardingPrefix + 33)
DECLARE_PMID(kClassIDSpace, kReviewCollaborationIAMResponderBoss, kOnBoardingPrefix + 34)
DECLARE_PMID(kClassIDSpace, kSetPdfExportDocListCmdBoss, kOnBoardingPrefix + 35)
DECLARE_PMID(kClassIDSpace, kReviewCollabNewLabelShownCmdBoss, kOnBoardingPrefix + 36)
DECLARE_PMID(kClassIDSpace, kReviewCollabNewDotShownCmdBoss, kOnBoardingPrefix + 37)
DECLARE_PMID(kClassIDSpace, kLocateColorIAMCmdBoss, kOnBoardingPrefix + 38)
DECLARE_PMID(kClassIDSpace, kSetFastEditorModeShownCountCmdBoss, kOnBoardingPrefix + 39)
DECLARE_PMID(kClassIDSpace, kFastEditorIAMResponderBoss, kOnBoardingPrefix + 40)
DECLARE_PMID(kClassIDSpace, kSetFastEditorModeFeedbackIAMShownCmdBoss, kOnBoardingPrefix + 41)
DECLARE_PMID(kClassIDSpace, kSetFastEditorModeFeedbackUIShownCountCmdBoss, kOnBoardingPrefix + 42)
DECLARE_PMID(kClassIDSpace, kNormalModeIAMCmdBoss, kOnBoardingPrefix + 43)
DECLARE_PMID(kClassIDSpace, kTextCommentsIAMCmdBoss, kOnBoardingPrefix + 44)
DECLARE_PMID(kClassIDSpace, kTextCommentsIAMResponderBoss, kOnBoardingPrefix + 45)
DECLARE_PMID(kClassIDSpace, kType1FontIAMCmdBoss, kOnBoardingPrefix + 46)
DECLARE_PMID(kClassIDSpace, kType1FontIAMResponderBoss, kOnBoardingPrefix + 47)
DECLARE_PMID(kClassIDSpace, kOpszMappingIAMCmdBoss, kOnBoardingPrefix + 48)
DECLARE_PMID(kClassIDSpace, kOpszMappingIAMShownCmdBoss, kOnBoardingPrefix + 49)
DECLARE_PMID(kClassIDSpace, kMediaPanelIAMCmdBoss, kOnBoardingPrefix + 50)
DECLARE_PMID(kClassIDSpace, kMediaPanelIAMResponderBoss, kOnBoardingPrefix + 51)
DECLARE_PMID(kClassIDSpace, kSetPantoneRemovalIAMShownCmdBoss, kOnBoardingPrefix + 52)
DECLARE_PMID(kClassIDSpace, kIsPantoneRemovalLearnMoreClickedCmdBoss, kOnBoardingPrefix + 53)
DECLARE_PMID(kClassIDSpace, kIsPantoneRemovalClosedCmdBoss, kOnBoardingPrefix + 54)
DECLARE_PMID(kClassIDSpace, kShareForReviewCSATIAMCmdBoss, kOnBoardingPrefix + 55)
DECLARE_PMID(kClassIDSpace, kIAMDismissCountCmdBoss, kOnBoardingPrefix + 56)
DECLARE_PMID(kClassIDSpace, kOpenDocSessionCounterCmdBoss, kOnBoardingPrefix + 57)
DECLARE_PMID(kClassIDSpace, kCloudDocsAutoSaveIAMShownCmdBoss, kOnBoardingPrefix + 58)
DECLARE_PMID(kClassIDSpace, kExtendingCaseTextStylesIAMCmdBoss, kOnBoardingPrefix + 59)
DECLARE_PMID(kClassIDSpace, kExtendingCaseIAMShownCmdBoss, kOnBoardingPrefix + 60)
DECLARE_PMID(kClassIDSpace, kSetPantoneRemovalIAMShownPostAppUpdateCmdBoss, kOnBoardingPrefix + 61)
DECLARE_PMID(kClassIDSpace, kIsPantoneRemovalLearnMoreClickedPostAppUpdateCmdBoss, kOnBoardingPrefix + 62)
DECLARE_PMID(kClassIDSpace, kNamingPagesIAMCmdBoss, kOnBoardingPrefix + 63)
DECLARE_PMID(kClassIDSpace, kHideSpreadIAMCmdBoss, kOnBoardingPrefix + 64)
DECLARE_PMID(kClassIDSpace, kBetaBuildsIAMCmdBoss, kOnBoardingPrefix + 65)
DECLARE_PMID(kClassIDSpace, kFeatureFlagServiceBoss, kOnBoardingPrefix + 66)
DECLARE_PMID(kClassIDSpace, kSetGenAIShortPromptSuggestionShownCountCmdBoss, kOnBoardingPrefix + 67)
DECLARE_PMID(kClassIDSpace, kEditPDFIAMResponderBoss, kOnBoardingPrefix + 68)
DECLARE_PMID(kClassIDSpace, kCloudDocsRelaunchIAMShownCmdBoss, kOnBoardingPrefix + 69)
DECLARE_PMID(kClassIDSpace, kChangeCaseGrepIAMCmdBoss, kOnBoardingPrefix + 70)
DECLARE_PMID(kClassIDSpace, kChangeCaseTextIAMCmdBoss, kOnBoardingPrefix + 71)
DECLARE_PMID(kClassIDSpace, kCaseOptionsLowercaseIAMCmdBoss, kOnBoardingPrefix + 72)
DECLARE_PMID(kClassIDSpace, kCaseOptionsLowercaseIAMShownCmdBoss, kOnBoardingPrefix + 73)
DECLARE_PMID(kClassIDSpace, kCaseOptionsOtherCasesIAMCmdBoss, kOnBoardingPrefix + 74)
DECLARE_PMID(kClassIDSpace, kCaseOptionsOtherCasesIAMShownCmdBoss, kOnBoardingPrefix + 75)


// <Implementation ID>
DECLARE_PMID(kImplementationIDSpace, kOnBoardingManagerImpl, kOnBoardingPrefix + 1)
DECLARE_PMID(kImplementationIDSpace, kContextManagerStartupShutdownImpl, kOnBoardingPrefix + 2)
DECLARE_PMID(kImplementationIDSpace, kContextManagerObserverImpl, kOnBoardingPrefix + 3)
DECLARE_PMID(kImplementationIDSpace, kContextManagerSignalRespServiceImpl, kOnBoardingPrefix + 4)
DECLARE_PMID(kImplementationIDSpace, kContextManagerResponderImpl, kOnBoardingPrefix + 5)
DECLARE_PMID(kImplementationIDSpace, kNewDocCountIntDataImpl_Obsolete, kOnBoardingPrefix + 6)
DECLARE_PMID(kImplementationIDSpace, kNewDocCountCmdImpl_Obsolete, kOnBoardingPrefix + 7)
DECLARE_PMID(kImplementationIDSpace, kOnBoardingExtensionEventsWrapperImpl, kOnBoardingPrefix + 12)

DECLARE_PMID(kImplementationIDSpace, kActiveIAMUniqueIDDataImpl, kOnBoardingPrefix + 19)
DECLARE_PMID(kImplementationIDSpace, kCopyPasteIAMObserverImpl, kOnBoardingPrefix + 20)
DECLARE_PMID(kImplementationIDSpace, kCopyPasteIAMStartupShutdownImpl, kOnBoardingPrefix + 21)
DECLARE_PMID(kImplementationIDSpace, kCopyPasteIAMShownCmdImpl, kOnBoardingPrefix + 22)
DECLARE_PMID(kImplementationIDSpace, kCopyPasteIAMShownBoolDataImpl_Obsolete, kOnBoardingPrefix + 23)
DECLARE_PMID(kImplementationIDSpace, kEndNoteIAMShownBoolDataImpl_Obsolete, kOnBoardingPrefix + 24)
DECLARE_PMID(kImplementationIDSpace, kEndnoteIAMCountIntDataImpl_Obsolete, kOnBoardingPrefix + 29)
//gap
DECLARE_PMID(kImplementationIDSpace, kIsFinalIAMImpl, kOnBoardingPrefix + 32)
DECLARE_PMID(kImplementationIDSpace, kIsEventFromPageOrSpreadCreateImpl, kOnBoardingPrefix + 33)
DECLARE_PMID(kImplementationIDSpace, kParaBorderIAMShownBoolDataImpl_Obsolete, kOnBoardingPrefix + 34)
//gap
DECLARE_PMID(kImplementationIDSpace, kDisableEndnoteIAMForDataMergeImpl_Obsolete, kOnBoardingPrefix + 40)
DECLARE_PMID(kImplementationIDSpace, kContentAwareWrapIAMUtilsImpl, kOnBoardingPrefix + 41)
//gap
DECLARE_PMID(kImplementationIDSpace, kDudenIAMShownBoolDataImpl_Obsolete, kOnBoardingPrefix + 43)
//gap
DECLARE_PMID(kImplementationIDSpace, kParaBorderIAMforIconShownBoolDataImpl_Obsolete, kOnBoardingPrefix + 45)
//gap
DECLARE_PMID(kImplementationIDSpace, kConsistentShortcutsIAMShownBoolDataImpl_Obsolete, kOnBoardingPrefix + 49)
DECLARE_PMID(kImplementationIDSpace, kOnBoardingStartupShutdownImpl, kOnBoardingPrefix + 53)
DECLARE_PMID(kImplementationIDSpace, kOnBoardingObserverImpl, kOnBoardingPrefix + 54)

DECLARE_PMID(kImplementationIDSpace, kPropsPanelIAMSignalRespServiceImpl, kOnBoardingPrefix + 55)
DECLARE_PMID(kImplementationIDSpace, kPropsPanelIAMResponderImpl, kOnBoardingPrefix + 56)
DECLARE_PMID(kImplementationIDSpace, kPropsPanelIAMShownCmdImpl, kOnBoardingPrefix + 57)
DECLARE_PMID(kImplementationIDSpace, kPropsPanelIAMShownBoolDataImpl, kOnBoardingPrefix + 58)
DECLARE_PMID(kImplementationIDSpace, kWorkspaceBasicsFTUEUtilsImpl, kOnBoardingPrefix + 59)
//gap
//gap
DECLARE_PMID(kImplementationIDSpace, kAdaptiveLayoutCoachMarkShowCountImpl_Obsolete, kOnBoardingPrefix + 62)
DECLARE_PMID(kImplementationIDSpace, kAdaptiveLayoutToastShowCountImpl_Obsolete, kOnBoardingPrefix + 63)
//gap
//gap
//gap
DECLARE_PMID(kImplementationIDSpace, kImportPDFCommentsIAMShownBoolDataImpl_Obsolete, kOnBoardingPrefix + 67)
//gap
//gap
//gap
DECLARE_PMID(kImplementationIDSpace, kContentAwareFitIAMShownCountIntDataImpl_Obsolete, kOnBoardingPrefix + 71)
//gap
DECLARE_PMID(kImplementationIDSpace, kPropsPanelIAMThreadImpl, kOnBoardingPrefix + 73)
DECLARE_PMID(kImplementationIDSpace, kVariableFontsIAMResponderImpl, kOnBoardingPrefix + 74)
DECLARE_PMID(kImplementationIDSpace, kVariableFontsIAMSignalRespServiceImpl, kOnBoardingPrefix + 75)
DECLARE_PMID(kImplementationIDSpace, kVariableFontsIAMShownCmdImpl, kOnBoardingPrefix + 76)
DECLARE_PMID(kImplementationIDSpace, kVariableFontsIAMShownBoolDataImpl, kOnBoardingPrefix + 77)

DECLARE_PMID(kImplementationIDSpace, kReviewCollaborationIAMSessionCountIntDataImpl, kOnBoardingPrefix + 78)
DECLARE_PMID(kImplementationIDSpace, kReviewCollaborationIAMShownInSessionBoolDataImpl, kOnBoardingPrefix + 79)
DECLARE_PMID(kImplementationIDSpace, kReviewCollaborationIAMCmdImpl, kOnBoardingPrefix + 80)
DECLARE_PMID(kImplementationIDSpace, kPdfExportDocsListDataImpl, kOnBoardingPrefix + 81)
DECLARE_PMID(kImplementationIDSpace, kReviewCollaborationIAMServiceProviderImpl, kOnBoardingPrefix + 82)
DECLARE_PMID(kImplementationIDSpace, kReviewCollaborationIAMResponderImpl, kOnBoardingPrefix + 83)
DECLARE_PMID(kImplementationIDSpace, kSetPdfExportDocListCmdImpl, kOnBoardingPrefix + 84)
DECLARE_PMID(kImplementationIDSpace, kReviewCollabNewLabelShownBoolDataImpl, kOnBoardingPrefix + 85)
DECLARE_PMID(kImplementationIDSpace, kReviewCollabNewLabelShownCmdImpl, kOnBoardingPrefix +86)
DECLARE_PMID(kImplementationIDSpace, kReviewCollabNewDotShownBoolDataImpl, kOnBoardingPrefix + 87)
DECLARE_PMID(kImplementationIDSpace, kReviewCollabNewDotShownCmdImpl, kOnBoardingPrefix +88)
DECLARE_PMID(kImplementationIDSpace, kReviewCollabIAMIdleTaskImpl, kOnBoardingPrefix +89)
DECLARE_PMID(kImplementationIDSpace, kFastEditorModeIAMUtilsImpl, kOnBoardingPrefix + 90)
DECLARE_PMID(kImplementationIDSpace, kFastEditorModeShownCountIntDataImpl, kOnBoardingPrefix + 91)
DECLARE_PMID(kImplementationIDSpace, kFastEditorModeShownCountCmdImpl, kOnBoardingPrefix + 92)
DECLARE_PMID(kImplementationIDSpace, kFastEditorSignalRespServiceImpl, kOnBoardingPrefix + 93)
DECLARE_PMID(kImplementationIDSpace, kFastEditorIAMResponderImpl, kOnBoardingPrefix + 94)
DECLARE_PMID(kImplementationIDSpace, kFastEditorModeFeedbackUIToShowCountIntDataImpl, kOnBoardingPrefix + 95)
DECLARE_PMID(kImplementationIDSpace, kFastEditorModeFeedbackIAMShownBoolDataImpl, kOnBoardingPrefix + 96)
DECLARE_PMID(kImplementationIDSpace, kFastEditorModeFeedbackUIShownCountCmdImpl, kOnBoardingPrefix + 97)
DECLARE_PMID(kImplementationIDSpace, kFastEditorModeFeedbackIAMShownCmdImpl, kOnBoardingPrefix + 98)

DECLARE_PMID(kImplementationIDSpace, kLocateColorTabOnBoardingBlueDotImpl, kOnBoardingPrefix + 100)
DECLARE_PMID(kImplementationIDSpace, kLocateColorIAMCmdImpl, kOnBoardingPrefix + 101)
DECLARE_PMID(kImplementationIDSpace, kNormalModeIAMCmdImpl, kOnBoardingPrefix + 102)
DECLARE_PMID(kImplementationIDSpace, kNormalModeIAMSessionDocShownImpl, kOnBoardingPrefix + 103)
DECLARE_PMID(kImplementationIDSpace, kTextCommentsIAMSessionDocShownImpl, kOnBoardingPrefix + 104)
DECLARE_PMID(kImplementationIDSpace, kTextCommentsIAMResponderImpl, kOnBoardingPrefix + 105)
DECLARE_PMID(kImplementationIDSpace, kTextCommentsServiceProviderImpl, kOnBoardingPrefix + 106)
DECLARE_PMID(kImplementationIDSpace, kTextCommentsIAMCmdImpl, kOnBoardingPrefix + 107)
DECLARE_PMID(kImplementationIDSpace, kTextCommentsIAMIdleTaskImpl, kOnBoardingPrefix + 108)
DECLARE_PMID(kImplementationIDSpace, kArtifactURNImpl, kOnBoardingPrefix + 109)
DECLARE_PMID(kImplementationIDSpace, kType1FontIAMCmdImpl, kOnBoardingPrefix + 110)
DECLARE_PMID(kImplementationIDSpace, kType1FontIAMResponderImpl, kOnBoardingPrefix + 111)
DECLARE_PMID(kImplementationIDSpace, kType1FontIAMServiceProviderImpl, kOnBoardingPrefix + 112)
DECLARE_PMID(kImplementationIDSpace, kOpszMappingIAMCmdImpl, kOnBoardingPrefix + 113)
DECLARE_PMID(kImplementationIDSpace, kOpszMappingIAMShownCmdImpl, kOnBoardingPrefix + 114)
DECLARE_PMID(kImplementationIDSpace, kOpszMappingIAMShownBoolDataImpl, kOnBoardingPrefix + 115)
DECLARE_PMID(kImplementationIDSpace, kMediaPanelIAMCmdImpl, kOnBoardingPrefix + 116)
DECLARE_PMID(kImplementationIDSpace, kMediaPanelIAMResponderImpl, kOnBoardingPrefix + 117)
DECLARE_PMID(kImplementationIDSpace, kMediaPanelIAMServiceProviderImpl, kOnBoardingPrefix + 118)
DECLARE_PMID(kImplementationIDSpace, kConsistentShortcutsIAMShownBoolDataNewImpl, kOnBoardingPrefix + 119)
DECLARE_PMID(kImplementationIDSpace, kConsistentShortcutsIAMShownCmdImpl, kOnBoardingPrefix + 120)
DECLARE_PMID(kImplementationIDSpace, kConsistentShortcutsGenericIAMShownBoolDataImpl, kOnBoardingPrefix + 121)
DECLARE_PMID(kImplementationIDSpace, kConsistentShortcutsIAMUtilsImpl, kOnBoardingPrefix + 122)
DECLARE_PMID(kImplementationIDSpace, kIntelliStyleIAMUtilsImpl, kOnBoardingPrefix + 123)
DECLARE_PMID(kImplementationIDSpace, kPantoneRemovalIAMUtilsImpl, kOnBoardingPrefix + 124)
DECLARE_PMID(kImplementationIDSpace, kPantoneRemovalIAMShownCountCmdImpl, kOnBoardingPrefix + 125)
DECLARE_PMID(kImplementationIDSpace, kPantoneRemovalIsLearnMoreClickedCmdImpl, kOnBoardingPrefix + 126)
DECLARE_PMID(kImplementationIDSpace, kPantoneRemovalIAMShownCountIntDataImpl, kOnBoardingPrefix + 127)
DECLARE_PMID(kImplementationIDSpace, kPantoneRemovalIAMLearnMoreClickedBoolDataImpl, kOnBoardingPrefix + 128)
DECLARE_PMID(kImplementationIDSpace, kPantoneRemovalIAMShownInSessionBoolDataImpl, kOnBoardingPrefix + 129)
DECLARE_PMID(kImplementationIDSpace, kPantoneRemovalIAMClosedBoolDataImpl, kOnBoardingPrefix + 130)
DECLARE_PMID(kImplementationIDSpace, kReviewCollaborationIAMEnableBoolDataImpl,      kOnBoardingPrefix + 131)
DECLARE_PMID(kImplementationIDSpace, kShowSFRCSATIAMBoolDataImpl,      kOnBoardingPrefix + 132)
DECLARE_PMID(kImplementationIDSpace, kShareForReviewCSATIAMCmdImpl,      kOnBoardingPrefix + 133)
DECLARE_PMID(kImplementationIDSpace, kSFRCSATDismissCountIntDataImpl,      kOnBoardingPrefix + 134)
DECLARE_PMID(kImplementationIDSpace, kIAMDismissCountCmdImpl,      kOnBoardingPrefix + 135)
DECLARE_PMID(kImplementationIDSpace, kOpenDocSessionCounterCmdImpl,      kOnBoardingPrefix + 136)
DECLARE_PMID(kImplementationIDSpace, kOpenDocSessionCountIntDataImpl,      kOnBoardingPrefix + 137)
DECLARE_PMID(kImplementationIDSpace, kCSATIAMIdleTaskImpl, kOnBoardingPrefix +138)
DECLARE_PMID(kImplementationIDSpace, kCloudDocsAutoSaveStatusImpl, kOnBoardingPrefix + 139)
DECLARE_PMID(kImplementationIDSpace, kCloudDocsAutoSaveIAMUtilsImpl, kOnBoardingPrefix + 140)
DECLARE_PMID(kImplementationIDSpace, kCloudDocsAutoSaveIAMShownCmdImpl, kOnBoardingPrefix + 141)
DECLARE_PMID(kImplementationIDSpace, kExtendingCaseTextStylesIAMCmdImpl, kOnBoardingPrefix + 142)
DECLARE_PMID(kImplementationIDSpace, kExtendingCaseIAMShownCmdImpl, kOnBoardingPrefix + 143)
DECLARE_PMID(kImplementationIDSpace, kPantoneRemovalIAMShownCountPostAppUpdateIntDataImpl, kOnBoardingPrefix + 144)
DECLARE_PMID(kImplementationIDSpace, kPantoneRemovalIAMLearnMoreClickedPostAppUpdateBoolDataImpl, kOnBoardingPrefix + 145)
DECLARE_PMID(kImplementationIDSpace, kPantoneRemovalIAMShownCountPostAppUpdateCmdImpl, kOnBoardingPrefix + 146)
DECLARE_PMID(kImplementationIDSpace, kPantoneRemovalIsLearnMoreClickedPostAppUpdateCmdImpl, kOnBoardingPrefix + 147)
DECLARE_PMID(kImplementationIDSpace, kAutoStyleFeedbackIAMUtilsImpl, kOnBoardingPrefix + 148)
DECLARE_PMID(kImplementationIDSpace, kPluginsPanelIAMUtilsImpl, kOnBoardingPrefix + 149)
DECLARE_PMID(kImplementationIDSpace, kNamingPagesIAMShownImpl, kOnBoardingPrefix + 150)
DECLARE_PMID(kImplementationIDSpace, kNamingPagesIAMCmdImpl, kOnBoardingPrefix + 151)
DECLARE_PMID(kImplementationIDSpace, kHideSpreadIAMCmdImpl, kOnBoardingPrefix + 152)
DECLARE_PMID(kImplementationIDSpace, kHideSpreadIAMShowInSessionImpl, kOnBoardingPrefix + 153)
DECLARE_PMID(kImplementationIDSpace, kShowAutoStyleFeedbackIAMImpl, kOnBoardingPrefix + 154)
DECLARE_PMID(kImplementationIDSpace, kAutoStyleOnboardingFlagsImpl, kOnBoardingPrefix + 155)
DECLARE_PMID(kImplementationIDSpace, kOnBoardingPrefsImpl, kOnBoardingPrefix + 156)
DECLARE_PMID(kImplementationIDSpace, kBetaBuildsIAMShownImpl, kOnBoardingPrefix + 157)
DECLARE_PMID(kImplementationIDSpace, kBetaBuildsIAMCmdImpl, kOnBoardingPrefix + 158)
DECLARE_PMID(kImplementationIDSpace, kBetaBuildsMajorVersionImpl, kOnBoardingPrefix + 159)
DECLARE_PMID(kImplementationIDSpace, kBetaBuildMinorVersionImpl, kOnBoardingPrefix + 160)
DECLARE_PMID(kImplementationIDSpace, kBetaBuildDotVersionImpl, kOnBoardingPrefix + 161)
DECLARE_PMID(kImplementationIDSpace, kFeatureFlagServiceProviderImpl, kOnBoardingPrefix + 162)
DECLARE_PMID(kImplementationIDSpace, kFeatureFlagResponderImpl, kOnBoardingPrefix + 163)
DECLARE_PMID(kImplementationIDSpace, kGenAIIAMUtilsImpl, kOnBoardingPrefix + 164)
DECLARE_PMID(kImplementationIDSpace, kShowGenAIIAMImpl, kOnBoardingPrefix + 165)
DECLARE_PMID(kImplementationIDSpace, kShowDescribeAndGenerateIAMImpl, kOnBoardingPrefix + 166)
DECLARE_PMID(kImplementationIDSpace, kImportExportPrefsIAMUtilsImpl, kOnBoardingPrefix + 167)
DECLARE_PMID(kImplementationIDSpace, kImportExportPrefsIAMShownImpl, kOnBoardingPrefix + 168)
DECLARE_PMID(kImplementationIDSpace, kImportExportPrefsToastIAMShownImpl, kOnBoardingPrefix + 169)
DECLARE_PMID(kImplementationIDSpace, kGenAIShortPromptSuggestionShownCountCmdImpl, kOnBoardingPrefix + 170)
DECLARE_PMID(kImplementationIDSpace, kGenAIShortPromptSuggestionShownCountIntDataImpl, kOnBoardingPrefix + 171)
DECLARE_PMID(kImplementationIDSpace, kEditPDFIAMUtilsImpl, kOnBoardingPrefix + 172)
DECLARE_PMID(kImplementationIDSpace, kEditPDFIAMServiceProviderImpl, kOnBoardingPrefix + 173)
DECLARE_PMID(kImplementationIDSpace, kEditPDFIAMResponderImpl, kOnBoardingPrefix + 174)
DECLARE_PMID(kImplementationIDSpace, kEditPDFIAMDataImpl, kOnBoardingPrefix + 175)
DECLARE_PMID(kImplementationIDSpace, kCloudDocsRelaunchIAMUtilsImpl, kOnBoardingPrefix + 176)
DECLARE_PMID(kImplementationIDSpace, kCloudDocsRelaunchStatusImpl, kOnBoardingPrefix + 177)
DECLARE_PMID(kImplementationIDSpace, kCloudDocsRelaunchIAMShownCmdImpl, kOnBoardingPrefix + 178)
DECLARE_PMID(kImplementationIDSpace, kHistoryPanelIAMUtilsImpl, kOnBoardingPrefix + 179)
DECLARE_PMID(kImplementationIDSpace, kHistoryPanelBlueDotShownImpl, kOnBoardingPrefix + 180)
DECLARE_PMID(kImplementationIDSpace, kHistoryPanelIAMShownImpl, kOnBoardingPrefix + 181)
DECLARE_PMID(kImplementationIDSpace, kShowSwitchToT2IIAMImpl, kOnBoardingPrefix + 182)
DECLARE_PMID(kImplementationIDSpace, kShowSwitchToGenExpandIAMImpl, kOnBoardingPrefix + 183)
DECLARE_PMID(kImplementationIDSpace, kShowGenExpandIAMIAMImpl, kOnBoardingPrefix + 184)
DECLARE_PMID(kImplementationIDSpace, kChangeCaseGrepIAMCmdImpl, kOnBoardingPrefix + 185)
DECLARE_PMID(kImplementationIDSpace, kChangeCaseGrepIAMShowImpl, kOnBoardingPrefix + 186)
DECLARE_PMID(kImplementationIDSpace, kChangeCaseTextIAMCmdImpl, kOnBoardingPrefix + 187)
DECLARE_PMID(kImplementationIDSpace, kChangeCaseTextIAMShowImpl, kOnBoardingPrefix + 188)
DECLARE_PMID(kImplementationIDSpace, kCaseOptionsLowercaseIAMCmdImpl, kOnBoardingPrefix + 189)
DECLARE_PMID(kImplementationIDSpace, kCaseOptionsLowercaseIAMShownCmdImpl, kOnBoardingPrefix + 190)
DECLARE_PMID(kImplementationIDSpace, kCaseOptionsOtherCasesIAMCmdImpl, kOnBoardingPrefix + 191)
DECLARE_PMID(kImplementationIDSpace, kCaseOptionsOtherCasesIAMShownCmdImpl, kOnBoardingPrefix + 192)
DECLARE_PMID(kImplementationIDSpace, kShowSwitchToT2IContextBarIAMImpl, kOnBoardingPrefix + 193)
DECLARE_PMID(kImplementationIDSpace, kShowGenExpandBlueDot, kOnBoardingPrefix + 194)

//<Interface ID>

DECLARE_PMID(kInterfaceIDSpace, IID_IONBOARDINGMANAGER, kOnBoardingPrefix + 1)
//DECLARE_PMID(kInterfaceIDSpace, IID_INEWDOCCMDCOUNT, kOnBoardingPrefix + 2)
DECLARE_PMID(kInterfaceIDSpace, IID_IDOCOPENCMDCOUNT, kOnBoardingPrefix + 3)
DECLARE_PMID(kInterfaceIDSpace, IID_IONBOARDINGEXTENSIONEVENTWRAPPER, kOnBoardingPrefix + 4)
//DECLARE_PMID(kInterfaceIDSpace, IID_ICONTEXTMANAGEROBSERVER, kOnBoardingPrefix + 5)
DECLARE_PMID(kInterfaceIDSpace, IID_IFOOTNOTEIAMSHOWN, kOnBoardingPrefix + 6)
DECLARE_PMID(kInterfaceIDSpace, IID_IACTIVEIAM, kOnBoardingPrefix + 7)
DECLARE_PMID(kInterfaceIDSpace, IID_ICOPYPASTEIAMOBSERVER, kOnBoardingPrefix + 8)
DECLARE_PMID(kInterfaceIDSpace, IID_ICOPYPASTEIAMSHOWN, kOnBoardingPrefix + 9)
DECLARE_PMID(kInterfaceIDSpace, IID_IENDNOTEIAMSHOWN, kOnBoardingPrefix + 10)
DECLARE_PMID(kInterfaceIDSpace, IID_IENDNOTEIAMCOUNT, kOnBoardingPrefix + 11)
DECLARE_PMID(kInterfaceIDSpace, IID_IENDNOTEIAMUTILS, kOnBoardingPrefix + 12)
DECLARE_PMID(kInterfaceIDSpace, IID_IENDNOTEIAMOBSERVER, kOnBoardingPrefix + 13)
DECLARE_PMID(kInterfaceIDSpace, IID_IFINALIAM, kOnBoardingPrefix + 14)
DECLARE_PMID(kInterfaceIDSpace, IID_IEVENTFROMPAGEORSPREADCREATE, kOnBoardingPrefix + 15)
DECLARE_PMID(kInterfaceIDSpace, IID_IPARABORDERIAMSHOWN, kOnBoardingPrefix + 16)
DECLARE_PMID(kInterfaceIDSpace, IID_IDUDENIAMSHOWN, kOnBoardingPrefix + 18)
DECLARE_PMID(kInterfaceIDSpace, IID_IPARABORDERIAMFORICONSHOWN, kOnBoardingPrefix + 19)
DECLARE_PMID(kInterfaceIDSpace, IID_ICONSISTENTSHORTCUTSIAMOBSERVER, kOnBoardingPrefix + 20)
DECLARE_PMID(kInterfaceIDSpace, IID_ICONSISTENTSHORTCUTSIAMSHOWN, kOnBoardingPrefix + 21)
DECLARE_PMID(kInterfaceIDSpace, IID_ICONSISTENTSHORTCUTSIAMUTILS, kOnBoardingPrefix + 22)
DECLARE_PMID(kInterfaceIDSpace, IID_IONBOARDINGOBSERVER, kOnBoardingPrefix + 23)
DECLARE_PMID(kInterfaceIDSpace, IID_IFILENEWCOMPLETENOTIFIER, kOnBoardingPrefix + 24)
DECLARE_PMID(kInterfaceIDSpace, IID_ILEARNPANELCLOSENOTIFIER, kOnBoardingPrefix + 25)
DECLARE_PMID(kInterfaceIDSpace, IID_IPROPSPANELIAMSHOWN, kOnBoardingPrefix + 26)
DECLARE_PMID(kInterfaceIDSpace, IID_IWORKSPACEBASICSFTUEUTILS, kOnBoardingPrefix + 27)
DECLARE_PMID(kInterfaceIDSpace, IID_IPROPSPANELIAMSHOWNINSESSION, kOnBoardingPrefix + 28)

DECLARE_PMID(kInterfaceIDSpace, IID_IADAPTIVELAYOUTIAMUTILS, kOnBoardingPrefix + 29)
DECLARE_PMID(kInterfaceIDSpace, IID_IADAPTIVELAYOUTCOACHMARKSHOWCOUNT, kOnBoardingPrefix + 30)
DECLARE_PMID(kInterfaceIDSpace, IID_IADAPTIVELAYOUTTOASTSHOWCOUNT, kOnBoardingPrefix + 31)

DECLARE_PMID(kInterfaceIDSpace, IID_IIMPORTPDFCOMMENTSIAMSHOWN, kOnBoardingPrefix + 32)
DECLARE_PMID(kInterfaceIDSpace, IID_IIMPORTPDFCOMMENTSIAMUTILS, kOnBoardingPrefix + 33)
DECLARE_PMID(kInterfaceIDSpace, IID_ICONTENTAWAREFITIAMSHOWNCOUNT, kOnBoardingPrefix + 34)
DECLARE_PMID(kInterfaceIDSpace, IID_IPROPSPANELIAMTHREAD, kOnBoardingPrefix + 35)
DECLARE_PMID(kInterfaceIDSpace, IID_IVARIABLEFONTSIAMSHOWN, kOnBoardingPrefix + 36)

DECLARE_PMID(kInterfaceIDSpace, IID_IREVIEWCOLLBORATIONIAMSESSIONCOUNT, kOnBoardingPrefix + 37)
DECLARE_PMID(kInterfaceIDSpace, IID_IREVIEWCOLLBORATIONIAMSHOWNINSESSION, kOnBoardingPrefix + 38)
DECLARE_PMID(kInterfaceIDSpace, IID_IPDFEXPORTDOCSLISTDATA, kOnBoardingPrefix + 39)
DECLARE_PMID(kInterfaceIDSpace, IID_IREVIEWCOLLABNEWLABELSHOWN, kOnBoardingPrefix + 40)
DECLARE_PMID(kInterfaceIDSpace, IID_IREVIEWCOLLABNEWDOTSHOWN, kOnBoardingPrefix + 41)
DECLARE_PMID(kInterfaceIDSpace, IID_IREVIEWCOLLABIAMIDLETASK, kOnBoardingPrefix + 42)
DECLARE_PMID(kInterfaceIDSpace, IID_IFASTEDITORMODEIAMUTILS, kOnBoardingPrefix + 43)
DECLARE_PMID(kInterfaceIDSpace, IID_IFASTEDITORMODESHOWNCOUNT, kOnBoardingPrefix + 44)
DECLARE_PMID(kInterfaceIDSpace, IID_IFASTEDITORFEEDBACKUITOSHOWCOUNT, kOnBoardingPrefix + 45)
DECLARE_PMID(kInterfaceIDSpace, IID_IFASTEDITORFEEDBACKIAMSHOWN, kOnBoardingPrefix + 46)
DECLARE_PMID(kInterfaceIDSpace, IID_ILOCATECOLORTABONBOARDINGBLUEDOT, kOnBoardingPrefix + 51)
DECLARE_PMID(kInterfaceIDSpace, IID_ICONTENTAWAREWRAPIAMUTILS, kOnBoardingPrefix + 52)
DECLARE_PMID(kInterfaceIDSpace, IID_INORMALMODEIAMSESSIONDOCSHOWN, kOnBoardingPrefix + 53)
DECLARE_PMID(kInterfaceIDSpace, IID_ITEXTCOMMENTSIAMSESSIONDOCSHOWN, kOnBoardingPrefix + 54)
DECLARE_PMID(kInterfaceIDSpace, IID_ITEXTCOMMENTSIAMIDLETASK, kOnBoardingPrefix + 55)
DECLARE_PMID(kInterfaceIDSpace, IID_IARTIFACTURNDATA, kOnBoardingPrefix + 56)
DECLARE_PMID(kInterfaceIDSpace, IID_IOPSZMAPPINGIAMSHOWN, kOnBoardingPrefix + 57)
DECLARE_PMID(kInterfaceIDSpace, IID_ICONSISTENTSHORTCUTSIAMSHOWN_NEW, kOnBoardingPrefix + 58)
DECLARE_PMID(kInterfaceIDSpace, IID_ICONSISTENTSHORTCUTSTATEINTDATA, kOnBoardingPrefix + 59)
DECLARE_PMID(kInterfaceIDSpace, IID_ICONSISTENTSHORTCUTSGENERICIAMSHOWN, kOnBoardingPrefix + 60)
DECLARE_PMID(kInterfaceIDSpace, IID_IISGENERICCONSISTENTSHORTCUT, kOnBoardingPrefix + 61)
DECLARE_PMID(kInterfaceIDSpace, IID_IWRONGSHORTCUTINTDATA, kOnBoardingPrefix + 62)
DECLARE_PMID(kInterfaceIDSpace, IID_IINTELLISTYLEIAMUTILS, kOnBoardingPrefix + 63)
DECLARE_PMID(kInterfaceIDSpace, IID_IPANTONEREMOVALIAMUTILS, kOnBoardingPrefix + 64)
DECLARE_PMID(kInterfaceIDSpace, IID_IPANTONEREMOVALIAMSHOWNCOUNT, kOnBoardingPrefix + 65)
DECLARE_PMID(kInterfaceIDSpace, IID_IISLEARNMORECLICKED, kOnBoardingPrefix + 66)
DECLARE_PMID(kInterfaceIDSpace, IID_IPANTONEREMOVALIAMSHOWNINSESSION, kOnBoardingPrefix + 67)
DECLARE_PMID(kInterfaceIDSpace, IID_ISHOWSFRCSATIAM, kOnBoardingPrefix + 68)
DECLARE_PMID(kInterfaceIDSpace, IID_IREVIEWCOLLBORATIONIAMENABLE, kOnBoardingPrefix + 69)
DECLARE_PMID(kInterfaceIDSpace, IID_ISFRCSATDISMISSCOUNT, kOnBoardingPrefix + 70)
DECLARE_PMID(kInterfaceIDSpace, IID_IOPENDOCSESSIONCOUNT, kOnBoardingPrefix + 71)
DECLARE_PMID(kInterfaceIDSpace, IID_ICSATIAMIDLETASK, kOnBoardingPrefix + 72)
DECLARE_PMID(kInterfaceIDSpace, IID_ICLOUDDOCSAUTOSAVESTATUS, kOnBoardingPrefix + 73)
DECLARE_PMID(kInterfaceIDSpace, IID_ICLOUDDOCSAUTOSAVEIAMUTILS, kOnBoardingPrefix + 74)
DECLARE_PMID(kInterfaceIDSpace, IID_IEXTENDEDCASETEXTSTYLESIAMSHOWN, kOnBoardingPrefix + 75)
DECLARE_PMID(kInterfaceIDSpace, IID_IPANTONEREMOVALIAMSHOWNCOUNTPOSTAPPUPDATE, kOnBoardingPrefix + 76)
DECLARE_PMID(kInterfaceIDSpace, IID_IISLEARNMORECLICKEDPOSTAPPUPDATE, kOnBoardingPrefix + 77)
DECLARE_PMID(kInterfaceIDSpace, IID_IAUTOSTYLEFEEDBACKIAMUTILS, kOnBoardingPrefix + 78)
DECLARE_PMID(kInterfaceIDSpace, IID_IPLUGINSPANELMUTILS, kOnBoardingPrefix + 79)
DECLARE_PMID(kInterfaceIDSpace, IID_INAMINGPAGESIAMSHOWN, kOnBoardingPrefix + 80)
DECLARE_PMID(kInterfaceIDSpace, IID_IHIDESPREADIAMSHOWINSESSION, kOnBoardingPrefix + 81)
DECLARE_PMID(kInterfaceIDSpace, IID_ISHOWAUTOSTYLEFEEDBACKIAM, kOnBoardingPrefix + 82)
DECLARE_PMID(kInterfaceIDSpace, IID_IAUTOSTYLEONBOARDINGFLAGS, kOnBoardingPrefix + 83)
DECLARE_PMID(kInterfaceIDSpace, IID_IONBOARDINGPREFS, kOnBoardingPrefix + 84)
DECLARE_PMID(kInterfaceIDSpace, IID_IBETABUILDSIAMSHOWN, kOnBoardingPrefix + 85)
DECLARE_PMID(kInterfaceIDSpace, IID_IBETABUILDMAJORVERSION, kOnBoardingPrefix + 86)
DECLARE_PMID(kInterfaceIDSpace, IID_IBETABUILDMINORVERSION, kOnBoardingPrefix + 87)
DECLARE_PMID(kInterfaceIDSpace, IID_IBETABUILDDOTVERSION, kOnBoardingPrefix + 88)
DECLARE_PMID(kInterfaceIDSpace, IID_IGENAIIAMUTILS, kOnBoardingPrefix + 89)
DECLARE_PMID(kInterfaceIDSpace, IID_ISHOWGENAIIAM, kOnBoardingPrefix + 90)
DECLARE_PMID(kInterfaceIDSpace, IID_ISHOWDESCRIBEANDGENERATEIAM, kOnBoardingPrefix + 91)
DECLARE_PMID(kInterfaceIDSpace, IID_IIMPORTEXPORTPREFSIAMUTILS, kOnBoardingPrefix + 92)
DECLARE_PMID(kInterfaceIDSpace, IID_IIMPORTEXPORTPREFSIAMSHOWN, kOnBoardingPrefix + 93)
DECLARE_PMID(kInterfaceIDSpace, IID_IIMPORTEXPORTPREFSTOASTIAMSHOWN, kOnBoardingPrefix + 94)
DECLARE_PMID(kInterfaceIDSpace, IID_IGENAISHORTPROMPTSUGGESTIONSHOWNCOUNT, kOnBoardingPrefix + 95)
DECLARE_PMID(kInterfaceIDSpace, IID_IEDITPDFIAMUTILS, kOnBoardingPrefix + 96)
DECLARE_PMID(kInterfaceIDSpace, IID_IEDITPDFIAMDATA, kOnBoardingPrefix + 97)
DECLARE_PMID(kInterfaceIDSpace, IID_ICLOUDDOCSRELAUNCHIAMUTILS, kOnBoardingPrefix + 98)
DECLARE_PMID(kInterfaceIDSpace, IID_ICLOUDDOCSRELAUNCHSTATUS, kOnBoardingPrefix + 99)
DECLARE_PMID(kInterfaceIDSpace, IID_IHISTORYPANELIAMUTILS, kOnBoardingPrefix + 100)
DECLARE_PMID(kInterfaceIDSpace, IID_IHISTORYPANELBLUEDOTSHOWN, kOnBoardingPrefix + 101)
DECLARE_PMID(kInterfaceIDSpace, IID_IHISTORYPANELIAMSHOWN, kOnBoardingPrefix + 102)
DECLARE_PMID(kInterfaceIDSpace, IID_ISHOWSWITCHTOT2IIAM, kOnBoardingPrefix + 103)
DECLARE_PMID(kInterfaceIDSpace, IID_ISHOWSWITCHTOGENEXPANDIAM, kOnBoardingPrefix + 104)
DECLARE_PMID(kInterfaceIDSpace, IID_ISHOWGENEXPANDIAM, kOnBoardingPrefix + 105)
DECLARE_PMID(kInterfaceIDSpace, IID_ICHANGECASEGREPONBOARDINGBLUEDOT, kOnBoardingPrefix + 106)
DECLARE_PMID(kInterfaceIDSpace, IID_ICHANGECASETEXTONBOARDINGBLUEDOT, kOnBoardingPrefix + 107)
DECLARE_PMID(kInterfaceIDSpace, IID_ICASEOPTIONSLOWERCASEIAMSHOWN, kOnBoardingPrefix + 108)
DECLARE_PMID(kInterfaceIDSpace, IID_ICASEOPTIONSOTHERCASESIAMSHOWN, kOnBoardingPrefix + 109)
DECLARE_PMID(kInterfaceIDSpace, IID_ISHOWSWITCHTOT2ICONTEXTBARIAM, kOnBoardingPrefix + 110)
DECLARE_PMID(kInterfaceIDSpace, IID_ISHOWGENEXPANDBLUEDOT, kOnBoardingPrefix + 111)


// <Error ID>
// Error Codes
DECLARE_PMID(kErrorIDSpace, kBadParamterError, kOnBoardingPrefix + 1)


// <Widget ID>
// Character attribute widgets <1-50>

// <Message ID>
// <Message ID> 
DECLARE_PMID(kMessageIDSpace, kFileNewComplete, kOnBoardingPrefix + 1)
DECLARE_PMID(kMessageIDSpace, kLearnPanelClose, kOnBoardingPrefix + 2)  
//DECLARE_PMID(kMessageIDSpace, kItemPickedMessage, kContentDropperPrefix + 1)

// <Service ID>
// Service IDs
//DECLARE_PMID(kServiceIDSpace, kContentDropperPrefsPanelServiceImpl, kContentDropperPrefix + 1)

// <Action ID>
// Action IDs
//DECLARE_PMID(kActionIDSpace, kContentDropperToolActionID, kContentDropperPrefix + 1)

//<Icon IDs>


// Initial data format version numbers
//#define kOnBoardingFirstMajorFormatNumber  RezLong(1)
//#define kOnBoardingFirstMinorFormatNumber  RezLong(0)

// Data format version numbers for the PluginVersion resource
#define kOnBoardingLastMajorFormatNumber kCC15MajorFormatNumber
#define kOnBoardingLastMinorFormatNumber kCC15InitialMinorFormatNumber

#endif
