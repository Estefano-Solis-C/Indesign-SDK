/************************************************************************
 Copyright 2023 Adobe
 All Rights Reserved.
 NOTICE: Adobe permits you to use, modify, and distribute this file in accordance with the terms of the Adobe license agreement accompanying it.
*************************************************************************
*/

#ifndef __CC19_2BuildNumber_h__
#define __CC19_2BuildNumber_h__

// ----- This is for scripting and should be a 'reasonable' floating-point
//		 representation of the product version number.
//
// ----- This DOES NOT change when we have a dot release
//
#define kCC19_2VersionNumber 19.2

// ----- This string is primarily used as the key in the Windows registry,
//		as well as for application registration on startup.
//
// ----- This DOES NOT change when we have a dot release
//
#define kCC19_2VersionNumberStr "19.2"

// ----- This represents the product version number in the form it will
//		 be presented to the user. You will see it used in the
//		 Windows application window frame, for example.
//		It is also used by OLEAutomation as part of the application version key.
//
// ----- This DOES NOT change when we have a dot release
//
#ifdef BETA_BUILD
#define kCC19_2UIVersionStr "2024 (Beta)"
#elif PRERELEASE_BUILD
#define kCC19_2UIVersionStr "2024 (Prerelease)"
#else
#define kCC19_2UIVersionStr "2024"
#endif

// ----- This represents year based handle of the product to
//		 be presented to the user in splash screen.
// ----- This DOES NOT change when we have a dot release
//
#define kCC19_2CCVersionYearBasedHandleStr "2024"

// ----- This represents year based full version handle of the product to
//		 be presented to the user in about screen.
// ----- This DOES NOT change when we have a dot release
//
#define kCC19_2CCVersionYearBasedFullHandleStr "2024.2"


// ----- CC19_2_DOT_RELEASE_NUMBER represents the product dot
//		release version.
//		All necessary changes for a dot release update can be
//		done in this file by following these directions.
//
// ----- To update a dot release:
//		1. Change CC19_2_DOT_RELEASE_NUMBER to non-zero
// 			(If you want 4.0.2 change it to 2.)
//		2. Update kCC19_2VersionNumberForResourceStr
//		3. Update kCC19_2VersionCopyRightStr for the Mac
//		4. Update kCC19_2CFBundleVersionStr for the Mac (4.0.1 would be "4010")
//		5. Update kCC19_2AUMComponentVersionStr
//		6. Update kCC19_2CRAdobeProductVersionStr similar to kCC19_1CFBundleVersionStr
// 
// At a minimum, you must then rebuild AppFramework, ApplicationUI
// InDesign, InCopy, & InDesignServer. Rebuilding plugins will
// update their Windows resources and Mac plist settings so that,
// for example, the Finder or Explorer will correctly display version info.
//
#define CC19_2_DOT_RELEASE_NUMBER 0

#if CC19_2_DOT_RELEASE_NUMBER
#define kCC19_2VersionNumberForResourceStr "19.2.1"
#else
#define kCC19_2VersionNumberForResourceStr "19.2"
#endif

// ----- Used for plug-in actual and expected version numbers
#define kCC19_2MajorVersionNumber RezLong(19)
#define kCC19_2MinorVersionNumber RezLong(2)
#define kCC19_2DotVersionNumber  RezLong(CC19_2_DOT_RELEASE_NUMBER)

// ----- Numbers for 'vers', FILEVERSION and PRODUCTVERSION resources.
#define kCC19_2MajorVersionNumberForResource 19
#define kCC19_2MinorVersionNumberForResource 2
#define kCC19_2DotVersionNumberForResource CC19_2_DOT_RELEASE_NUMBER


// ----- Version copyright strings are different for different platforms

// When updating version strings, the copyright years are cumulative.
// e.g. in the future the year string will look like 2000-2009, 2000-2010, etc.
#ifdef MACINTOSH
#if CC19_2_DOT_RELEASE_NUMBER
#define kCC19_2VersionCopyRightStr "19.2.1, Copyright 1999-2024 Adobe Inc. All rights reserved."
#define kCC19_2CFBundleVersionStr "19210"
#else
#define kCC19_2VersionCopyRightStr "19.2, Copyright 1999-2024 Adobe Inc. All rights reserved."
#define kCC19_2CFBundleVersionStr "19200"
#endif
#endif

#ifdef WINDOWS
#define kCC19_2VersionCopyRightStr "Copyright 1999-2024 Adobe. All rights reserved."
#define kCC19_2ShortCopyRightStr "© 1999-2024 Adobe. All rights reserved."
#endif

// ----- Version string for Adobe Update Manager managed components
#if CC19_2_DOT_RELEASE_NUMBER
#define kCC19_2AUMComponentVersionStr	"19.2.1."
#else
#define kCC19_2AUMComponentVersionStr	"19.2.0."
#endif
// ----- Version string for Adobe Crash Reporter
#if CC19_2_DOT_RELEASE_NUMBER
#define kCC19_2CRAdobeProductVersionStr	"19.2.1"
#else
#define kCC19_2CRAdobeProductVersionStr	"19.2.0"
#endif

// ----- Display name for Adobe Crash Reporter
#define kCC19_2CRAdobeInDesignDisplayNameStr	"Adobe InDesign 2024"
#define kCC19_2CRAdobeInCopyDisplayNameStr	"(Adobe InCopy 2024)"

// ----- Scripting DOM Version
// To define a new version of the Scripting DOM:
// For a dot release, add a new major and minor script version number, and new typelib CLSIDs.
// For a minor version release, also add new application CLSIDs.
// Note: This assumes that kUIVersionStr also changes for a minor version release.
#define kCC19_2MajorScriptVersionNumber	RezLong(19)
#define kCC19_2MinorScriptVersionNumber	RezLong(2)
// keeping same CLSIDs as 19 can be picked up from CC19BuildNumber.h
#endif
