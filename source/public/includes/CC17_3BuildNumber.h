/************************************************************************
 Copyright 2021 Adobe
 All Rights Reserved.
 NOTICE: Adobe permits you to use, modify, and distribute this file in accordance with the terms of the Adobe license agreement accompanying it.
*************************************************************************
*/

#ifndef __CC17_3BuildNumber_h__
#define __CC17_3BuildNumber_h__

// ----- This is for scripting and should be a 'reasonable' floating-point
//		 representation of the product version number.
//
// ----- This DOES NOT change when we have a dot release
//
#define kCC17_3VersionNumber 17.3

// ----- This string is primarily used as the key in the Windows registry,
//		as well as for application registration on startup.
//
// ----- This DOES NOT change when we have a dot release
//
#define kCC17_3VersionNumberStr "17.3"

// ----- This represents the product version number in the form it will
//		 be presented to the user. You will see it used in the
//		 Windows application window frame, for example.
//		It is also used by OLEAutomation as part of the application version key.
//
// ----- This DOES NOT change when we have a dot release
//
#ifdef BETA_BUILD
#define kCC17_3UIVersionStr "2022 (Beta)"
#elif PRERELEASE_BUILD
#define kCC17_3UIVersionStr "2022 (Prerelease)"
#else
#define kCC17_3UIVersionStr "2022"
#endif

// ----- This represents year based handle of the product to
//		 be presented to the user in splash screen.
// ----- This DOES NOT change when we have a dot release
//
#define kCC17_3CCVersionYearBasedHandleStr "2022"

// ----- This represents year based full version handle of the product to
//		 be presented to the user in about screen.
// ----- This DOES NOT change when we have a dot release
//
#define kCC17_3CCVersionYearBasedFullHandleStr "2022.1"


// ----- CC17_3_DOT_RELEASE_NUMBER represents the product dot
//		release version.
//		All necessary changes for a dot release update can be
//		done in this file by following these directions.
//
// ----- To update a dot release:
//		1. Change CC17_3_DOT_RELEASE_NUMBER to non-zero
// 			(If you want 4.0.2 change it to 2.)
//		2. Update kCC17VersionNumberForResourceStr
//		3. Update kCC17VersionCopyRightStr for the Mac
//		4. Update kCC17CFBundleVersionStr for the Mac (4.0.1 would be "4010")
//		5. Update kCC17AUMComponentVersionStr
//		6. Update kCC17CRAdobeProductVersionStr similar to kCC17CFBundleVersionStr
// 
// At a minimum, you must then rebuild AppFramework, ApplicationUI
// InDesign, InCopy, & InDesignServer. Rebuilding plugins will
// update their Windows resources and Mac plist settings so that,
// for example, the Finder or Explorer will correctly display version info.
//
#define CC17_3_DOT_RELEASE_NUMBER 0

#if CC17_3_DOT_RELEASE_NUMBER
#define kCC17_3VersionNumberForResourceStr "17.3.0"
#else
#define kCC17_3VersionNumberForResourceStr "17.3"
#endif

// ----- Used for plug-in actual and expected version numbers
#define kCC17_3MajorVersionNumber RezLong(17)
#define kCC17_3MinorVersionNumber RezLong(3)
#define kCC17_3DotVersionNumber RezLong(CC17_3_DOT_RELEASE_NUMBER)

// ----- Numbers for 'vers', FILEVERSION and PRODUCTVERSION resources. 
#define kCC17_3MajorVersionNumberForResource 17
#define kCC17_3MinorVersionNumberForResource 3
#define kCC17_3DotVersionNumberForResource CC17_3_DOT_RELEASE_NUMBER


// ----- Version copyright strings are different for different platforms

// When updating version strings, the copyright years are cumulative.
// e.g. in the future the year string will look like 2000-2009, 2000-2010, etc.
#ifdef MACINTOSH
#if CC17_3_DOT_RELEASE_NUMBER
#define kCC17_3VersionCopyRightStr "17.3.0, Copyright 1999-2022 Adobe. All rights reserved."
#define kCC17_3CFBundleVersionStr "17300"
#else
#define kCC17_3VersionCopyRightStr "17.3, Copyright 1999-2022 Adobe. All rights reserved."
#define kCC17_3CFBundleVersionStr "17300"
#endif
#ifdef BETA_BUILD
#define kCC17_3CFBundleNameStr "InDesign (Beta)"
#define kCC17_3InCopyCFBundleNameStr "InCopy (Beta)"
#elif PRERELEASE_BUILD
#define kCC17_3CFBundleNameStr "InDesign (Prerelease)"
#define kCC17_3InCopyCFBundleNameStr "InCopy (Prerelease)"
#else
#define kCC17_3CFBundleNameStr "InDesign"
#define kCC17_3InCopyCFBundleNameStr "InCopy"
#endif
#endif

#ifdef WINDOWS
#define kCC17_3VersionCopyRightStr "Copyright 1999-2022 Adobe. All rights reserved."
#define kCC17_3ShortCopyRightStr "\xa9 1999-2022 Adobe. All rights reserved."
#endif

// ----- Version string for Adobe Update Manager managed components
#if CC17_3_DOT_RELEASE_NUMBER
#define kCC17_3AUMComponentVersionStr	"17.3.1."
#else
#define kCC17_3AUMComponentVersionStr	"17.3.0."
#endif

// ----- Version string for Adobe Crash Reporter
#if CC17_3_DOT_RELEASE_NUMBER
#define kCC17_3CRAdobeProductVersionStr "17300"
#else
#define kCC17_3CRAdobeProductVersionStr "17300"
#endif

#define kCC17_3CRAdobeInDesignDisplayNameStr	"Adobe InDesign 2022"
#define kCC17_3CRAdobeInCopyDisplayNameStr    "(Adobe InCopy 2022)"

// ----- Scripting DOM Version
// To define a new version of the Scripting DOM:
// For a dot release, add a new major and minor script version number, and new typelib CLSIDs.
// For a minor version release, also add new application CLSIDs.
// Note: This assumes that kUIVersionStr also changes for a minor version release.
#define kCC17_3MajorScriptVersionNumber	RezLong(17)
#define kCC17_3MinorScriptVersionNumber	RezLong(3)

/* Use class ID's from 17.0 build

#ifdef BETA_BUILD

// {8901299C-42B9-42C2-8D9E-07CFBC32CE60}
#define kInDesign17_0_CLSID				{ 0x8901299c, 0x42b9, 0x42c2, { 0x8d, 0x9e, 0x7, 0xcf, 0xbc, 0x32, 0xce, 0x60 } }
// {75964D56-1689-43F0-BBE0-DB0A1D0D3631}
#define kInDesignSUTypeLib17_0_CLSID	{ 0x75964d56, 0x1689, 0x43f0, { 0xbb, 0xe0, 0xdb, 0xa, 0x1d, 0xd, 0x36, 0x31 } }
// {5468229D-F1FF-4159-AC72-25040BA877CD}
#define kInDesignMUTypeLib17_0_CLSID	{ 0x5468229d, 0xf1ff, 0x4159, { 0xac, 0x72, 0x25, 0x4, 0xb, 0xa8, 0x77, 0xcd } }

// {5DE2529E-39DC-467E-8708-89781BDF2721}
#define kInCopy17_0_CLSID				{ 0x5de2529e, 0x39dc, 0x467e, { 0x87, 0x8, 0x89, 0x78, 0x1b, 0xdf, 0x27, 0x21 } }
// {C7418BA6-5C9E-41EB-8B40-A4633FFE0BB3}
#define kInCopySUTypeLib17_0_CLSID		{ 0xc7418ba6, 0x5c9e, 0x41eb, { 0x8b, 0x40, 0xa4, 0x63, 0x3f, 0xfe, 0xb, 0xb3 } }
// {A561BB2A-9C9E-4366-B41F-8013018C498F}
#define kInCopyMUTypeLib17_0_CLSID		{ 0xa561bb2a, 0x9c9e, 0x4366, { 0xb4, 0x1f, 0x80, 0x13, 0x1, 0x8c, 0x49, 0x8f } }

#elif PRERELEASE_BUILD

// {1C7520D5-2FCB-4874-8C85-A1974582A099}
#define kInDesign17_0_CLSID				{ 0x1c7520d5, 0x2fcb, 0x4874, { 0x8c, 0x85, 0xa1, 0x97, 0x45, 0x82, 0xa0, 0x99 } }
// {69158754-F902-4FA1-8ECE-40D350EEEEAB}
#define kInDesignSUTypeLib17_0_CLSID	{ 0x69158754, 0xf902, 0x4fa1, { 0x8e, 0xce, 0x40, 0xd3, 0x50, 0xee, 0xee, 0xab } }
// {57D7837C-4521-4C4D-A90E-AE36522A37B2}
#define kInDesignMUTypeLib17_0_CLSID	{ 0x57d7837c, 0x4521, 0x4c4d, { 0xa9, 0xe, 0xae, 0x36, 0x52, 0x2a, 0x37, 0xb2 } }

// {321ABCA0-20B4-4F48-847F-DF506C914913}
#define kInCopy17_0_CLSID				{ 0x321abca0, 0x20b4, 0x4f48, { 0x84, 0x7f, 0xdf, 0x50, 0x6c, 0x91, 0x49, 0x13 } }
// {828C22A9-A1FA-4C56-A2A4-15D70368A46B}
#define kInCopySUTypeLib17_0_CLSID		{ 0x828c22a9, 0xa1fa, 0x4c56, { 0xa2, 0xa4, 0x15, 0xd7, 0x3, 0x68, 0xa4, 0x6b } }
// {7953E804-62F5-42A3-85F4-3E57DE21D890}
#define kInCopyMUTypeLib17_0_CLSID		{ 0x7953e804, 0x62f5, 0x42a3, { 0x85, 0xf4, 0x3e, 0x57, 0xde, 0x21, 0xd8, 0x90 } }

#else
// {51C743AF-552D-4C39-98DC-FA36BE832BF9}
#define kInDesign17_0_CLSID				{ 0x51c743af, 0x552d, 0x4c39, { 0x98, 0xdc, 0xfa, 0x36, 0xbe, 0x83, 0x2b, 0xf9 } }
// {CAFD9E85-9C30-4DF2-8990-EF98EC7C8F62}
#define kInDesignSUTypeLib17_0_CLSID	{ 0xcafd9e85, 0x9c30, 0x4df2, { 0x89, 0x90, 0xef, 0x98, 0xec, 0x7c, 0x8f, 0x62 } }
// {B39B48C4-70B1-44BD-9081-355D916B3289}
#define kInDesignMUTypeLib17_0_CLSID	{ 0xb39b48c4, 0x70b1, 0x44bd, { 0x90, 0x81, 0x35, 0x5d, 0x91, 0x6b, 0x32, 0x89 } }

// {75CE4654-735C-44CC-8DAC-B9673A6D626E}
#define kInCopy17_0_CLSID				{ 0x75ce4654, 0x735c, 0x44cc, { 0x8d, 0xac, 0xb9, 0x67, 0x3a, 0x6d, 0x62, 0x6e } }
// {61375B91-78E8-432C-A2C9-644139C8E345}
#define kInCopySUTypeLib17_0_CLSID		{ 0x61375b91, 0x78e8, 0x432c, { 0xa2, 0xc9, 0x64, 0x41, 0x39, 0xc8, 0xe3, 0x45 } }
// {111DB36E-0CF6-4889-BA63-9FAA64ADC77B}
#define kInCopyMUTypeLib17_0_CLSID		{ 0x111db36e, 0xcf6, 0x4889, { 0xba, 0x63, 0x9f, 0xaa, 0x64, 0xad, 0xc7, 0x7b } }

#endif

// {EA579FF1-2019-4853-809D-A324A2C1C75C}
#define kInDesignServer17_0_CLSID		{ 0xea579ff1, 0x2019, 0x4853, { 0x80, 0x9d, 0xa3, 0x24, 0xa2, 0xc1, 0xc7, 0x5c } }
// {22B669D6-2925-43D6-84F6-E7DC67D6E0A6}
#define kInDesignServerSUTypeLib17_0_CLSID	{ 0x22b669d6, 0x2925, 0x43d6, { 0x84, 0xf6, 0xe7, 0xdc, 0x67, 0xd6, 0xe0, 0xa6 } }
// {1898B683-9AB0-426F-8D2E-4C20AA757835}
#define kInDesignServerMUTypeLib17_0_CLSID	{ 0x1898b683, 0x9ab0, 0x426f, { 0x8d, 0x2e, 0x4c, 0x20, 0xaa, 0x75, 0x78, 0x35 } }
 */
#endif



