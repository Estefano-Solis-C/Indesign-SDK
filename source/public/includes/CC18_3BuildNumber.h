/************************************************************************
 Copyright 2022 Adobe
 All Rights Reserved.
 NOTICE: Adobe permits you to use, modify, and distribute this file in accordance with the terms of the Adobe license agreement accompanying it.
*************************************************************************
*/

#ifndef __CC18_3BuildNumber_h__
#define __CC18_3BuildNumber_h__

// ----- This is for scripting and should be a 'reasonable' floating-point
//		 representation of the product version number.
//
// ----- This DOES NOT change when we have a dot release
//
#define kCC18_3VersionNumber 18.3

// ----- This string is primarily used as the key in the Windows registry,
//		as well as for application registration on startup.
//
// ----- This DOES NOT change when we have a dot release
//
#define kCC18_3VersionNumberStr "18.3"

// ----- This represents the product version number in the form it will
//		 be presented to the user. You will see it used in the
//		 Windows application window frame, for example.
//		It is also used by OLEAutomation as part of the application version key.
//
// ----- This DOES NOT change when we have a dot release
//
#ifdef BETA_BUILD
#define kCC18_3UIVersionStr "2023 (Beta)"
#elif PRERELEASE_BUILD
#define kCC18_3UIVersionStr "2023 (Prerelease)"
#else
#define kCC18_3UIVersionStr "2023"
#endif

// ----- This represents year based handle of the product to
//		 be presented to the user in splash screen.
// ----- This DOES NOT change when we have a dot release
//
#define kCC18_3CCVersionYearBasedHandleStr "2023"

// ----- This represents year based full version handle of the product to
//		 be presented to the user in about screen.
// ----- This DOES NOT change when we have a dot release
//
#define kCC18_3CCVersionYearBasedFullHandleStr "2023.3"


// ----- CC18_3_DOT_RELEASE_NUMBER represents the product dot
//		release version.
//		All necessary changes for a dot release update can be
//		done in this file by following these directions.
//
// ----- To update a dot release:
//		1. Change CC18_3_DOT_RELEASE_NUMBER to non-zero
// 			(If you want 4.0.2 change it to 2.)
//		2. Update kCC18_3VersionNumberForResourceStr
//		3. Update kCC18_3VersionCopyRightStr for the Mac
//		4. Update kCC18_3CFBundleVersionStr for the Mac (4.0.1 would be "4010")
//		5. Update kCC18_3AUMComponentVersionStr
//		6. Update kCC18_3CRAdobeProductVersionStr similar to kCC18_1CFBundleVersionStr
// 
// At a minimum, you must then rebuild AppFramework, ApplicationUI
// InDesign, InCopy, & InDesignServer. Rebuilding plugins will
// update their Windows resources and Mac plist settings so that,
// for example, the Finder or Explorer will correctly display version info.
//
#define CC18_3_DOT_RELEASE_NUMBER 0

#if CC18_3_DOT_RELEASE_NUMBER
#define kCC18_3VersionNumberForResourceStr "18.3.0"
#else
#define kCC18_3VersionNumberForResourceStr "18.3"
#endif

// ----- Used for plug-in actual and expected version numbers
#define kCC18_3MajorVersionNumber RezLong(18)
#define kCC18_3MinorVersionNumber RezLong(3)
#define kCC18_3DotVersionNumber  RezLong(CC18_3_DOT_RELEASE_NUMBER)

// ----- Numbers for 'vers', FILEVERSION and PRODUCTVERSION resources.
#define kCC18_3MajorVersionNumberForResource 18
#define kCC18_3MinorVersionNumberForResource 3
#define kCC18_3DotVersionNumberForResource CC18_3_DOT_RELEASE_NUMBER


// ----- Version copyright strings are different for different platforms

// When updating version strings, the copyright years are cumulative.
// e.g. in the future the year string will look like 2000-2009, 2000-2010, etc.
#ifdef MACINTOSH
#if CC18_3_DOT_RELEASE_NUMBER
#define kCC18_3VersionCopyRightStr "18.3.0, Copyright 1999-2023 Adobe Inc. All rights reserved."
#define kCC18_3CFBundleVersionStr "18300"
#else
#define kCC18_3VersionCopyRightStr "18.3, Copyright 1999-2023 Adobe Inc. All rights reserved."
#define kCC18_3CFBundleVersionStr "18300"
#endif
#endif

#ifdef WINDOWS
#define kCC18_3VersionCopyRightStr "Copyright 1999-2023 Adobe. All rights reserved."
#define kCC18_3ShortCopyRightStr "© 1999-2023 Adobe. All rights reserved."
#endif

// ----- Version string for Adobe Update Manager managed components
#if CC18_3_DOT_RELEASE_NUMBER
#define kCC18_3AUMComponentVersionStr	"18.3.0."
#else
#define kCC18_3AUMComponentVersionStr	"18.3.0."
#endif
// ----- Version string for Adobe Crash Reporter
#if CC18_3_DOT_RELEASE_NUMBER
#define kCC18_3CRAdobeProductVersionStr	"18300"
#else
#define kCC18_3CRAdobeProductVersionStr	"18300"
#endif

// ----- Display name for Adobe Crash Reporter
#define kCC18_3CRAdobeInDesignDisplayNameStr	"Adobe InDesign 2023"
#define kCC18_3CRAdobeInCopyDisplayNameStr	"(Adobe InCopy 2023)"

// ----- Scripting DOM Version
// To define a new version of the Scripting DOM:
// For a dot release, add a new major and minor script version number, and new typelib CLSIDs.
// For a minor version release, also add new application CLSIDs.
// Note: This assumes that kUIVersionStr also changes for a minor version release.
#define kCC18_3MajorScriptVersionNumber	RezLong(18)
#define kCC18_3MinorScriptVersionNumber	RezLong(3)
// keeping same CLSIDs as 18 can be picked up from CC18BuildNumber.h
#endif
