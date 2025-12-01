//========================================================================================
//  
//  $File$
//  
//  Owner: jangir
//  
//  $Author$
//  
//  $DateTime$
//  
//  $Revision$
//  
//  $Change$
//  
//  Copyright 2020 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#ifndef __CC16_4BuildNumber_h__
#define __CC16_4BuildNumber_h__

// ----- This is for scripting and should be a 'reasonable' floating-point
//		 representation of the product version number.
//
// ----- This DOES NOT change when we have a dot release
//
#define kCC16_4VersionNumber 16.4

// ----- This string is primarily used as the key in the Windows registry,
//		as well as for application registration on startup.
//
// ----- This DOES NOT change when we have a dot release
//
#define kCC16_4VersionNumberStr "16.4"

// ----- This represents the product version number in the form it will
//		 be presented to the user. You will see it used in the
//		 Windows application window frame, for example.
//		It is also used by OLEAutomation as part of the application version key.
//
// ----- This DOES NOT change when we have a dot release
//
#ifdef BETA_BUILD
#define kCC16_4UIVersionStr "2021 (Beta)"
#elif PRERELEASE_BUILD
#define kCC16_4UIVersionStr "2021 (Prerelease)"
#else
#define kCC16_4UIVersionStr "2021"
#endif

// ----- This represents year based handle of the product to
//		 be presented to the user in splash screen.
// ----- This DOES NOT change when we have a dot release
//
#define kCC16_4CCVersionYearBasedHandleStr "2021"

// ----- This represents year based full version handle of the product to
//		 be presented to the user in about screen.
// ----- This DOES NOT change when we have a dot release
//
#define kCC16_4CCVersionYearBasedFullHandleStr "2021.4"


// ----- CC15_DOT_RELEASE_NUMBER represents the product dot
//		release version.
//		All necessary changes for a dot release update can be
//		done in this file by following these directions.
//
// ----- To update a dot release:
//		1. Change CC16_DOT_RELEASE_NUMBER to non-zero
// 			(If you want 4.0.2 change it to 2.)
//		2. Update kCC16_4VersionNumberForResourceStr
//		3. Update kCC16_4VersionCopyRightStr for the Mac
//		4. Update kCC16_4CFBundleVersionStr for the Mac (4.0.1 would be "4010")
//		5. Update kCC16_4AUMComponentVersionStr
// 
// At a minimum, you must then rebuild AppFramework, ApplicationUI
// InDesign, InCopy, & InDesignServer. Rebuilding plugins will
// update their Windows resources and Mac plist settings so that,
// for example, the Finder or Explorer will correctly display version info.
//

// ------ This flag will be used to check if this is dot release or not
#define CC16_4_DOT_RELEASE_NUMBER 0
#if CC16_4_DOT_RELEASE_NUMBER
#define kCC16_4VersionNumberForResourceStr "16.4.0"
#else
#define kCC16_4VersionNumberForResourceStr "16.4"
#endif

// ----- Used for plug-in actual and expected version numbers
#define kCC16_4MajorVersionNumber RezLong(16)
#define kCC16_4MinorVersionNumber RezLong(4)
#define kCC16_4DotVersionNumber  RezLong(CC16_4_DOT_RELEASE_NUMBER)

// ----- Numbers for 'vers', FILEVERSION and PRODUCTVERSION resources.
#define kCC16_4MajorVersionNumberForResource 16
#define kCC16_4MinorVersionNumberForResource 4
#define kCC16_4DotVersionNumberForResource CC16_4_DOT_RELEASE_NUMBER


// ----- Version copyright strings are different for different platforms

// When updating version strings, the copyright years are cumulative.
// e.g. in the future the year string will look like 2000-2009, 2000-2010, etc.
#ifdef MACINTOSH
#if CC16_4_DOT_RELEASE_NUMBER
#define kCC16_4VersionCopyRightStr "16.4.0, Copyright 1999-2021 Adobe. All rights reserved."
#define kCC16_4CFBundleVersionStr "16400"
#else
#define kCC16_4VersionCopyRightStr "16.4, Copyright 1999-2021 Adobe. All rights reserved."
#define kCC16_4CFBundleVersionStr "16400"
#endif
#ifdef BETA_BUILD
#define kCC16_4CFBundleNameStr "InDesign (Beta)"
#define kCC16_4InCopyCFBundleNameStr "InCopy (Beta)"
#elif PRERELEASE_BUILD
#define kCC16_4CFBundleNameStr "InDesign (Prerelease)"
#define kCC16_4InCopyCFBundleNameStr "InCopy (Prerelease)"
#else
#define kCC16_4CFBundleNameStr "InDesign"
#define kCC16_4InCopyCFBundleNameStr "InCopy"
#endif
#endif

#ifdef WINDOWS
#define kCC16_4VersionCopyRightStr "Copyright 1999-2021 Adobe. All rights reserved."
#define kCC16_4ShortCopyRightStr "\xa9 1999-2021 Adobe. All rights reserved."
#endif

// ----- Version string for Adobe Update Manager managed components
#if CC16_4_DOT_RELEASE_NUMBER
#define kCC16_4AUMComponentVersionStr	"16.4.0."
#else
#define kCC16_4AUMComponentVersionStr	"16.4.0."
#endif
// ----- Version string for Adobe Crash Reporter
#if CC16_4_DOT_RELEASE_NUMBER
#define kCC16_4CRAdobeProductVersionStr	"16400"
#else
#define kCC16_4CRAdobeProductVersionStr	"16400"
#endif

// ----- Display name for Adobe Crash Reporter
#define kCC16_4CRAdobeInDesignDisplayNameStr	"Adobe InDesign 2021"
#define kCC16_4CRAdobeInCopyDisplayNameStr	"Adobe InCopy 2021"

// ----- Scripting DOM Version
// To define a new version of the Scripting DOM:
// For a dot release, add a new major and minor script version number, and new typelib CLSIDs.
// For a minor version release, also add new application CLSIDs.
// Note: This assumes that kUIVersionStr also changes for a minor version release.
#define kCC16_4MajorScriptVersionNumber	RezLong(16)
#define kCC16_4MinorScriptVersionNumber	RezLong(4)
/* keeping same as 16.0 can be picked up from CC16BuildNumber.h
// 
#define kInDesign16_0_CLSID				{ 0x2c3995bf, 0x82f2, 0x483d, { 0x81, 0x4, 0xf2, 0x29, 0x0, 0xf9, 0x42, 0x8d } }
// {76F98E79-C12D-4C62-8B30-C10BCCDD6F96}
#define kInDesignSUTypeLib16_0_CLSID	{ 0x76f98e79, 0xc12d, 0x4c62, { 0x8b, 0x30, 0xc1, 0xb, 0xcc, 0xdd, 0x6f, 0x96 } }
// {CDD13F68-1CBC-47EB-BCC7-F35A8874299F}
#define kInDesignMUTypeLib16_0_CLSID	{ 0xcdd13f68, 0x1cbc, 0x47eb, { 0xbc, 0xc7, 0xf3, 0x5a, 0x88, 0x74, 0x29, 0x9f } }

// {22B843ED-7478-45ED-AD1F-B95E1F3BD07C}
#define kInCopy16_0_CLSID				{ 0x22b843ed, 0x7478, 0x45ed, { 0xad, 0x1f, 0xb9, 0x5e, 0x1f, 0x3b, 0xd0, 0x7c } }
// {43502033-4D52-4B48-A936-17DCE1618A4E}
#define kInCopySUTypeLib16_0_CLSID		{ 0x43502033, 0x4d52, 0x4b48, { 0xa9, 0x36, 0x17, 0xdc, 0xe1, 0x61, 0x8a, 0x4e } }
// {086FE31C-68EE-4D96-B38B-2CE6A1A337A7}
#define kInCopyMUTypeLib16_0_CLSID		{ 0x86fe31c, 0x68ee, 0x4d96, { 0xb3, 0x8b, 0x2c, 0xe6, 0xa1, 0xa3, 0x37, 0xa7 } }

// {CA6474A2-8CF8-4345-A8EC-0E3398BD7335}
#define kInDesignServer16_0_CLSID		{ 0xca6474a2, 0x8cf8, 0x4345, { 0xa8, 0xec, 0xe, 0x33, 0x98, 0xbd, 0x73, 0x35 } }
// {C9FDA445-332E-489B-9BED-96C563B451AF}
#define kInDesignServerSUTypeLib16_0_CLSID	{ 0xc9fda445, 0x332e, 0x489b, { 0x9b, 0xed, 0x96, 0xc5, 0x63, 0xb4, 0x51, 0xaf } }
// {7FF30520-A5D2-4D12-9B30-B6148B675116}
#define kInDesignServerMUTypeLib16_0_CLSID	{ 0x7ff30520, 0xa5d2, 0x4d12, { 0x9b, 0x30, 0xb6, 0x14, 0x8b, 0x67, 0x51, 0x16 } }
*/
#endif
