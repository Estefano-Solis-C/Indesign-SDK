//========================================================================================
//  
//  $File$
//  
//  Owner: Peter Boctor
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

#ifndef __BUILDNUMBER__ 
#define __BUILDNUMBER__

#include "CrossPlatformTypes.h"

//----------------------------------------------------------------------------------------
// Only use spaces as separators (no tabs) in these defines to make automated parsing
// and extraction of the build and change numbers easier.
//----------------------------------------------------------------------------------------
#define kBuildNumber 84
#define kBuildNumberStr "84"
#define kChangeNumberStr "c26ecf8a181749bfc4aa8f2426962dd5f591aa33"

//----------------------------------------------------------------------------------------
// Create a new file and add it to the end of the list for each new InDesign product version.
//----------------------------------------------------------------------------------------
#include "K2BuildNumber.h"
#include "SherpaBuildNumber.h"
#include "HotakaBuildNumber.h"
#include "AnnaBuildNumber.h"
#include "DragontailBuildNumber.h"
#include "FiredrakeBuildNumber.h"
#include "CobaltBuildNumber.h"
#include "BasilBuildNumber.h"
#include "RocketBuildNumber.h"
#include "OdinBuildNumber.h"
#include "AthosBuildNumber.h"
#include "CitiusBuildNumber.h"
//#include "CitiusR0BuildNumber.h"
//#include "CitiusR1BuildNumber.h"
#include "SiriusBuildNumber.h"
#include "SiriusR3BuildNumber.h"
#include "SiriusR4BuildNumber.h"
#include "R5BuildNumber.h"
#include "R7BuildNumber.h"
#include "R8BuildNumber.h"
#include "R9BuildNumber.h"
#include "R10BuildNumber.h"
#include "R11BuildNumber.h"
#include "R12BuildNumber.h"
#include "R13BuildNumber.h"
#include "CC14BuildNumber.h"
#include "CC15BuildNumber.h"
#include "CC15_1BuildNumber.h"
#include "CC16BuildNumber.h"
#include "CC16_1BuildNumber.h"
#include "CC16_2BuildNumber.h"
#include "CC17BuildNumber.h"
#include "CC18BuildNumber.h"
#include "CC17_1BuildNumber.h"
#include "CC17_3BuildNumber.h"
#include "CC17_7BuildNumber.h"
#include "CC18_1BuildNumber.h"
#include "CC18_2BuildNumber.h"
#include "CC18_3BuildNumber.h"
#include "CC18_4BuildNumber.h"
#include "CC18_5BuildNumber.h"
#include "CC19BuildNumber.h"
#include "CC19_1BuildNumber.h"
#include "CC19_2BuildNumber.h"
#include "CC19_3BuildNumber.h"
#include "CC19_4BuildNumber.h"
#include "CC19_5BuildNumber.h"


//----------------------------------------------------------------------------------------
// Now, build the overall definitions from the most recently included file.
//----------------------------------------------------------------------------------------

#define kVersionNumber					kCC19_5VersionNumber
#define kVersionNumberStr				kCC19_5VersionNumberStr
#define kVersionNumberForResourceStr	                kCC19_5VersionNumberForResourceStr
#define kUIVersionStr					kCC19_5UIVersionStr
#define kCCVersionYearBasedHandleStr	                kCC19_5CCVersionYearBasedHandleStr
#define kCCVersionYearBasedFullHandleStr	        kCC19_5CCVersionYearBasedFullHandleStr
#define kMajorVersionNumber				kCC19_5MajorVersionNumber
#define kMinorVersionNumber				kCC19_5MinorVersionNumber
#define kDotVersionNumber				kCC19_5DotVersionNumber
#define kMajorVersionNumberForResource	                kCC19_5MajorVersionNumberForResource
#define kMinorVersionNumberForResource	                kCC19_5MinorVersionNumberForResource
#define kDotVersionNumberForResource	                kCC19_5DotVersionNumberForResource
#define kVersionCopyRightStr			        kCC19_5VersionCopyRightStr
#ifdef WINDOWS
#define kShortCopyRightStr				kCC19_5ShortCopyRightStr
#endif
#ifdef DEBUG
#define kAUMComponentVersionStr			        kCC19_5AUMComponentVersionStr kBuildNumberStr "D"
#else
#define kAUMComponentVersionStr			        kCC19_5AUMComponentVersionStr kBuildNumberStr
#endif
#ifdef DEBUG
#define kVersionNumberForAboutStr		        kCC19_5VersionNumberForResourceStr "D"
#else
#define kVersionNumberForAboutStr		        kCC19_5VersionNumberForResourceStr
#endif
#if defined(MACINTOSH) || defined(WASM)
#define kApplicationCFBundleVersionStr	                kCC19_5CFBundleVersionStr
#ifdef BETA_BUILD
#define kApplicationCFBundleNameStr  			"InDesign (Beta)"
#define kInCopyApplicationCFBundleNameStr 		"InCopy (Beta)"
#elif PRERELEASE_BUILD
#define kApplicationCFBundleNameStr  			"InDesign (Prerelease)"
#define kInCopyApplicationCFBundleNameStr 		"InCopy (Prerelease)"
#else
#define kApplicationCFBundleNameStr  			"InDesign"
#define kInCopyApplicationCFBundleNameStr 		"InCopy"
#endif
#endif

//used for reporting version to crash reporter
#define kCRAdobeProductBuild                            "Adobe Product Build"
#define kCRAdobeProductVersion                          "Adobe Product Version"
#define kCRAdobeProductVersionStr                       kCC19_5CRAdobeProductVersionStr

// Display name for Adobe Crash Reporter
#define kCRAdobeInDesignDisplayNameStr	                kCC19_5CRAdobeInDesignDisplayNameStr
#define kCRAdobeInCopyDisplayNameStr	                kCC19_5CRAdobeInCopyDisplayNameStr

// Update this if scripting DOM changes in feature bearing updates as well.
#define kMajorScriptVersionNumber		        kCC19MajorScriptVersionNumber
#define kMinorScriptVersionNumber		        kCC19_5MinorScriptVersionNumber

// Used for the application registry key (version number sub-key) on windows.
// HKLM\Software\Adobe\<Application>\<version number>
//
// NOTE: This should not be changed for dot releases, but should be revisited at the time of next major release.
//
#define kAppVersionNumberKeyStr			        kCC19VersionNumberStr

// Used in ESInit::GetXPEPSpecifier, it specifies the indesign version number used to
// (i)  Read Bridge CC startup scripts
// (ii) For incoming bridge talk messages.
//
// NOTE: This should not be changed for dot releases, but should be revisited at the time of next major release.
//
#define kXPEPSpecifierVersionNumberStr	                kCC19VersionNumberStr

// Used in IDDroverApp::GetAppInternalVersion, it specifies the folder name for drover app preferences
// NOTE: This should not be changed for dot releases, but should be revisited at the time of next major release.
#define kDroverAppInternalVersionNumberStr		kCC19VersionNumberStr

// Used in SettingsMigrationManager::DoesUserWantAutoMigration, to check if user has specified to auto-migrate settings post-install
// NOTE: This should not be changed for dot releases, but should be revisited at the time of next major release.
#define kAutoMigratePrefsVersionNumberStr		kCC19VersionNumberStr

// Specifies the feature branch name for prerelease builds
#define kFeatureBranchStr            			"Mainline"

// Strings for FeatureSet preferences
#define kFeatureSetStr "Feature Set Locale Setting"

#if defined(MACINTOSH) || defined(WASM)
    #ifdef PRERELEASE
            #define kDevelopmentStage development
    #else
            #define kDevelopmentStage release
    #endif
#endif

#endif
