/************************************************************************
 Copyright 2023 Adobe
 All Rights Reserved.
 NOTICE: Adobe permits you to use, modify, and distribute this file in accordance with the terms of the Adobe license agreement accompanying it.
*************************************************************************
*/

#ifndef __CC19_1BuildNumber_h__
#define __CC19_1BuildNumber_h__

// ----- This is for scripting and should be a 'reasonable' floating-point
//		 representation of the product version number.
//
// ----- This DOES NOT change when we have a dot release
//
#define kCC19_1VersionNumber 19.1

// ----- This string is primarily used as the key in the Windows registry,
//		as well as for application registration on startup.
//
// ----- This DOES NOT change when we have a dot release
//
#define kCC19_1VersionNumberStr "19.1"

// ----- This represents the product version number in the form it will
//		 be presented to the user. You will see it used in the
//		 Windows application window frame, for example.
//		It is also used by OLEAutomation as part of the application version key.
//
// ----- This DOES NOT change when we have a dot release
//
#ifdef BETA_BUILD
#define kCC19_1UIVersionStr "2024 (Beta)"
#elif PRERELEASE_BUILD
#define kCC19_1UIVersionStr "2024 (Prerelease)"
#else
#define kCC19_1UIVersionStr "2024"
#endif

// ----- This represents year based handle of the product to
//		 be presented to the user in splash screen.
// ----- This DOES NOT change when we have a dot release
//
#define kCC19_1CCVersionYearBasedHandleStr "2024"

// ----- This represents year based full version handle of the product to
//		 be presented to the user in about screen.
// ----- This DOES NOT change when we have a dot release
//
#define kCC19_1CCVersionYearBasedFullHandleStr "2024.1"


// ----- CC19_1_DOT_RELEASE_NUMBER represents the product dot
//		release version.
//		All necessary changes for a dot release update can be
//		done in this file by following these directions.
//
// ----- To update a dot release:
//		1. Change CC19_1_DOT_RELEASE_NUMBER to non-zero
// 			(If you want 4.0.2 change it to 2.)
//		2. Update kCC19_1VersionNumberForResourceStr
//		3. Update kCC19_1VersionCopyRightStr for the Mac
//		4. Update kCC19_1CFBundleVersionStr for the Mac (4.0.1 would be "4010")
//		5. Update kCC19_1AUMComponentVersionStr
//		6. Update kCC19_1CRAdobeProductVersionStr similar to kCC18_1CFBundleVersionStr
// 
// At a minimum, you must then rebuild AppFramework, ApplicationUI
// InDesign, InCopy, & InDesignServer. Rebuilding plugins will
// update their Windows resources and Mac plist settings so that,
// for example, the Finder or Explorer will correctly display version info.
//
#define CC19_1_DOT_RELEASE_NUMBER 0

#if CC19_1_DOT_RELEASE_NUMBER
#define kCC19_1VersionNumberForResourceStr "19.1.0"
#else
#define kCC19_1VersionNumberForResourceStr "19.1"
#endif

// ----- Used for plug-in actual and expected version numbers
#define kCC19_1MajorVersionNumber RezLong(19)
#define kCC19_1MinorVersionNumber RezLong(1)
#define kCC19_1DotVersionNumber  RezLong(CC19_1_DOT_RELEASE_NUMBER)

// ----- Numbers for 'vers', FILEVERSION and PRODUCTVERSION resources.
#define kCC19_1MajorVersionNumberForResource 19
#define kCC19_1MinorVersionNumberForResource 1
#define kCC19_1DotVersionNumberForResource CC19_1_DOT_RELEASE_NUMBER


// ----- Version copyright strings are different for different platforms

// When updating version strings, the copyright years are cumulative.
// e.g. in the future the year string will look like 2000-2009, 2000-2010, etc.
#ifdef MACINTOSH
#if CC19_1_DOT_RELEASE_NUMBER
#define kCC19_1VersionCopyRightStr "19.1.0, Copyright 1999-2024 Adobe Inc. All rights reserved."
#define kCC19_1CFBundleVersionStr "19100"
#else
#define kCC19_1VersionCopyRightStr "19.1, Copyright 1999-2024 Adobe Inc. All rights reserved."
#define kCC19_1CFBundleVersionStr "19100"
#endif
#endif

#ifdef WINDOWS
#define kCC19_1VersionCopyRightStr "Copyright 1999-2024 Adobe. All rights reserved."
#define kCC19_1ShortCopyRightStr "© 1999-2024 Adobe. All rights reserved."
#endif

// ----- Version string for Adobe Update Manager managed components
#if CC19_1_DOT_RELEASE_NUMBER
#define kCC19_1AUMComponentVersionStr	"19.1.0."
#else
#define kCC19_1AUMComponentVersionStr	"19.1.0."
#endif
// ----- Version string for Adobe Crash Reporter
#if CC18_1_DOT_RELEASE_NUMBER
#define kCC19_1CRAdobeProductVersionStr	"19.1.0"
#else
#define kCC19_1CRAdobeProductVersionStr	"19.1.0"
#endif

// ----- Display name for Adobe Crash Reporter
#define kCC19_1CRAdobeInDesignDisplayNameStr	"Adobe InDesign 2024"
#define kCC19_1CRAdobeInCopyDisplayNameStr	"(Adobe InCopy 2024)"

// ----- Scripting DOM Version
// To define a new version of the Scripting DOM:
// For a dot release, add a new major and minor script version number, and new typelib CLSIDs.
// For a minor version release, also add new application CLSIDs.
// Note: This assumes that kUIVersionStr also changes for a minor version release.
#define kCC19_1MajorScriptVersionNumber	RezLong(19)
#define kCC19_1MinorScriptVersionNumber	RezLong(1)
// keeping same CLSIDs as 18 can be picked up from CC18BuildNumber.h
#endif
