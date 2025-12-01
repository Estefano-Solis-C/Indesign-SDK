/************************************************************************
 Copyright 2024 Adobe
 All Rights Reserved.
 NOTICE: Adobe permits you to use, modify, and distribute this file in accordance with the terms of the Adobe license agreement accompanying it.
*************************************************************************
*/

#ifndef __CC19_5BuildNumber_h__
#define __CC19_5BuildNumber_h__

// ----- This is for scripting and should be a 'reasonable' floating-point
//		 representation of the product version number.
//
// ----- This DOES NOT change when we have a dot release
//
#define kCC19_5VersionNumber 19.5

// ----- This string is primarily used as the key in the Windows registry,
//		as well as for application registration on startup.
//
// ----- This DOES NOT change when we have a dot release
//
#define kCC19_5VersionNumberStr "19.5"

// ----- This represents the product version number in the form it will
//		 be presented to the user. You will see it used in the
//		 Windows application window frame, for example.
//		It is also used by OLEAutomation as part of the application version key.
//
// ----- This DOES NOT change when we have a dot release
//
#ifdef BETA_BUILD
#define kCC19_5UIVersionStr "2024 (Beta)"
#elif PRERELEASE_BUILD
#define kCC19_5UIVersionStr "2024 (Prerelease)"
#else
#define kCC19_5UIVersionStr "2024"
#endif

// ----- This represents year based handle of the product to
//		 be presented to the user in splash screen.
// ----- This DOES NOT change when we have a dot release
//
#define kCC19_5CCVersionYearBasedHandleStr "2024"

// ----- This represents year based full version handle of the product to
//		 be presented to the user in about screen.
// ----- This DOES NOT change when we have a dot release
//
#define kCC19_5CCVersionYearBasedFullHandleStr "2024.5"


// ----- CC19_5_DOT_RELEASE_NUMBER represents the product dot
//		release version.
//		All necessary changes for a dot release update can be
//		done in this file by following these directions.
//
// ----- To update a dot release:
//		1. Change CC19_5_DOT_RELEASE_NUMBER to non-zero
// 			(If you want 4.0.2 change it to 2.)
//		2. Update kCC19_5VersionNumberForResourceStr
//		3. Update kCC19_5VersionCopyRightStr for the Mac
//		4. Update kCC19_5CFBundleVersionStr for the Mac (4.0.1 would be "4010")
//		5. Update kCC19_5AUMComponentVersionStr
//		6. Update kCC19_5CRAdobeProductVersionStr similar to kCC19_5CFBundleVersionStr
// 
// At a minimum, you must then rebuild AppFramework, ApplicationUI
// InDesign, InCopy, & InDesignServer. Rebuilding plugins will
// update their Windows resources and Mac plist settings so that,
// for example, the Finder or Explorer will correctly display version info.
//
#define CC19_5_DOT_RELEASE_NUMBER 0

#if CC19_5_DOT_RELEASE_NUMBER
#define kCC19_5VersionNumberForResourceStr "19.5.1"
#else
#define kCC19_5VersionNumberForResourceStr "19.5"
#endif

// ----- Used for plug-in actual and expected version numbers
#define kCC19_5MajorVersionNumber RezLong(19)
#define kCC19_5MinorVersionNumber RezLong(5)
#define kCC19_5DotVersionNumber  RezLong(CC19_5_DOT_RELEASE_NUMBER)

// ----- Numbers for 'vers', FILEVERSION and PRODUCTVERSION resources.
#define kCC19_5MajorVersionNumberForResource 19
#define kCC19_5MinorVersionNumberForResource 5
#define kCC19_5DotVersionNumberForResource CC19_5_DOT_RELEASE_NUMBER


// ----- Version copyright strings are different for different platforms

// When updating version strings, the copyright years are cumulative.
// e.g. in the future the year string will look like 2000-2009, 2000-2010, etc.
#ifdef MACINTOSH
#if CC19_5_DOT_RELEASE_NUMBER
#define kCC19_5VersionCopyRightStr "19.5.1, Copyright 1999-2024 Adobe Inc. All rights reserved."
#define kCC19_5CFBundleVersionStr "19510"
#else
#define kCC19_5VersionCopyRightStr "19.5, Copyright 1999-2024 Adobe Inc. All rights reserved."
#define kCC19_5CFBundleVersionStr "19500"
#endif
#endif

#ifdef WINDOWS
#define kCC19_5VersionCopyRightStr "Copyright 1999-2024 Adobe. All rights reserved."
#define kCC19_5ShortCopyRightStr "© 1999-2024 Adobe. All rights reserved."
#endif

// ----- Version string for Adobe Update Manager managed components
#if CC19_5_DOT_RELEASE_NUMBER
#define kCC19_5AUMComponentVersionStr	"19.5.1."
#else
#define kCC19_5AUMComponentVersionStr	"19.5.0."
#endif
// ----- Version string for Adobe Crash Reporter
#if CC19_5_DOT_RELEASE_NUMBER
#define kCC19_5CRAdobeProductVersionStr	"19.5.1"
#else
#define kCC19_5CRAdobeProductVersionStr	"19.5.0"
#endif

// ----- Display name for Adobe Crash Reporter
#define kCC19_5CRAdobeInDesignDisplayNameStr	"Adobe InDesign 2024"
#define kCC19_5CRAdobeInCopyDisplayNameStr	"(Adobe InCopy 2024)"

// ----- Scripting DOM Version
// To define a new version of the Scripting DOM:
// For a dot release, add a new major and minor script version number, and new typelib CLSIDs.
// For a minor version release, also add new application CLSIDs.
// Note: This assumes that kUIVersionStr also changes for a minor version release.
#define kCC19_5MajorScriptVersionNumber	RezLong(19)
#define kCC19_5MinorScriptVersionNumber	RezLong(5)
// keeping same CLSIDs as 19 can be picked up from CC19BuildNumber.h
#endif
