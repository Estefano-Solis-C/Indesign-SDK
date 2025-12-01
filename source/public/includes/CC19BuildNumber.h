/************************************************************************
 Copyright 2023 Adobe
 All Rights Reserved.
 NOTICE: Adobe permits you to use, modify, and distribute this file in accordance with the terms of the Adobe license agreement accompanying it.
*************************************************************************
*/

#ifndef __CC19BuildNumber_h__
#define __CC19BuildNumber_h__

// ----- This is for scripting and should be a 'reasonable' floating-point
//		 representation of the product version number.
//
// ----- This DOES NOT change when we have a dot release
//
#define kCC19VersionNumber 19.0

// ----- This string is primarily used as the key in the Windows registry,
//		as well as for application registration on startup.
//
// ----- This DOES NOT change when we have a dot release
//
#define kCC19VersionNumberStr "19.0"

// ----- This represents the product version number in the form it will
//		 be presented to the user. You will see it used in the
//		 Windows application window frame, for example.
//		It is also used by OLEAutomation as part of the application version key.
//
// ----- This DOES NOT change when we have a dot release
//
#ifdef BETA_BUILD
#define kCC19UIVersionStr "2024 (Beta)"
#elif PRERELEASE_BUILD
#define kCC19UIVersionStr "2024 (Prerelease)"
#else
#define kCC19UIVersionStr "2024"
#endif

// ----- This represents year based handle of the product to
//		 be presented to the user in splash screen.
// ----- This DOES NOT change when we have a dot release
//
#define kCC19CCVersionYearBasedHandleStr "2024"

// ----- This represents year based full version handle of the product to
//		 be presented to the user in about screen.
// ----- This DOES NOT change when we have a dot release
//
#define kCC19CCVersionYearBasedFullHandleStr "2024.0"


// ----- CC19_DOT_RELEASE_NUMBER represents the product dot
//		release version.
//		All necessary changes for a dot release update can be
//		done in this file by following these directions.
//
// ----- To update a dot release:
//		1. Change CC19_DOT_RELEASE_NUMBER to non-zero
// 			(If you want 4.0.2 change it to 2.)
//		2. Update kCC19VersionNumberForResourceStr
//		3. Update kCC19VersionCopyRightStr for the Mac
//		4. Update kCC19CFBundleVersionStr for the Mac (4.0.1 would be "4010")
//		5. Update kCC19AUMComponentVersionStr
//		6. Update kCC19CRAdobeProductVersionStr similar to kCC19CFBundleVersionStr
// 
// At a minimum, you must then rebuild AppFramework, ApplicationUI
// InDesign, InCopy, & InDesignServer. Rebuilding plugins will
// update their Windows resources and Mac plist settings so that,
// for example, the Finder or Explorer will correctly display version info.
//
#define CC19_DOT_RELEASE_NUMBER 0

#if CC19_DOT_RELEASE_NUMBER
#define kCC19VersionNumberForResourceStr "19.0.0"
#else
#define kCC19VersionNumberForResourceStr "19.0"
#endif

// ----- Used for plug-in actual and expected version numbers
#define kCC19MajorVersionNumber RezLong(19)
#define kCC19MinorVersionNumber RezLong(0)
#define kCC19DotVersionNumber RezLong(CC19_DOT_RELEASE_NUMBER)

// ----- Numbers for 'vers', FILEVERSION and PRODUCTVERSION resources. 
#define kCC19MajorVersionNumberForResource 19
#define kCC19MinorVersionNumberForResource 0
#define kCC19DotVersionNumberForResource CC19_DOT_RELEASE_NUMBER


// ----- Version copyright strings are different for different platforms

// When updating version strings, the copyright years are cumulative.
// e.g. in the future the year string will look like 2000-2009, 2000-2010, etc.
#if defined(MACINTOSH) || defined(WASM)
#if CC19_DOT_RELEASE_NUMBER
#define kCC19VersionCopyRightStr "19.0.0, Copyright 1999-2024 Adobe Inc. All rights reserved."
#define kCC19CFBundleVersionStr "19000"
#else
#define kCC19VersionCopyRightStr "19.0, Copyright 1999-2024 Adobe Inc. All rights reserved."
#define kCC19CFBundleVersionStr "19000"
#endif
#endif

#ifdef WINDOWS
#define kCC19VersionCopyRightStr "Copyright 1999-2024 Adobe. All rights reserved."
#define kCC19ShortCopyRightStr "\xa9 1999-2024 Adobe. All rights reserved."
#endif

// ----- Version string for Adobe Update Manager managed components
#if CC19_DOT_RELEASE_NUMBER
#define kCC19AUMComponentVersionStr	"19.0.0."
#else
#define kCC19AUMComponentVersionStr	"19.0.0."
#endif

// ----- Version string for Adobe Crash Reporter
#if CC19_DOT_RELEASE_NUMBER
#define kCC19CRAdobeProductVersionStr "19000"
#else
#define kCC19CRAdobeProductVersionStr "19000"
#endif

#define kCC19CRAdobeInDesignDisplayNameStr	"Adobe InDesign 2024"
#define kCC19CRAdobeInCopyDisplayNameStr    "(Adobe InCopy 2024)"

// ----- Scripting DOM Version
// To define a new version of the Scripting DOM:
// For a dot release, add a new major and minor script version number, and new typelib CLSIDs.
// For a minor version release, also add new application CLSIDs.
// Note: This assumes that kUIVersionStr also changes for a minor version release.
#define kCC19MajorScriptVersionNumber	RezLong(19)
#define kCC19MinorScriptVersionNumber	RezLong(0)

#ifdef BETA_BUILD

// {1F340283-9CF9-41DD-A528-0D26B1EB790B}
#define kInDesign19_0_CLSID	           { 0x1f340283, 0x9cf9, 0x41dd, { 0xa5, 0x28, 0xd, 0x26, 0xb1, 0xeb, 0x79, 0xb } }

// {44132AA4-EE01-40B8-A61F-50FBE34E9A74}
#define kInDesignSUTypeLib19_0_CLSID	{ 0x44132aa4, 0xee01, 0x40b8, { 0xa6, 0x1f, 0x50, 0xfb, 0xe3, 0x4e, 0x9a, 0x74 } }

// {B20A7E2A-28BF-432E-93AC-D8F76C3D9A27}
#define kInDesignMUTypeLib19_0_CLSID    { 0xb20a7e2a, 0x28bf, 0x432e, { 0x93, 0xac, 0xd8, 0xf7, 0x6c, 0x3d, 0x9a, 0x27 } }

// {D4F35416-9E1A-4C3A-BF07-A08177DCEC1C}
#define kInCopy19_0_CLSID		        { 0xd4f35416, 0x9e1a, 0x4c3a, { 0xbf, 0x7, 0xa0, 0x81, 0x77, 0xdc, 0xec, 0x1c } }

// {E5C4F899-94F6-40C6-854C-F7C7F8E54D1B}
#define kInCopySUTypeLib19_0_CLSID		{ 0xe5c4f899, 0x94f6, 0x40c6, { 0x85, 0x4c, 0xf7, 0xc7, 0xf8, 0xe5, 0x4d, 0x1b } }

// {536E983D-B094-447C-BA86-66ED22878297}
#define kInCopyMUTypeLib19_0_CLSID		{ 0x536e983d, 0xb094, 0x447c, { 0xba, 0x86, 0x66, 0xed, 0x22, 0x87, 0x82, 0x97 } }

// {5BE8FD15-ABB4-45A4-A651-4CD402B27BD9}
#define kInDesignServer19_0_CLSID		{ 0x5be8fd15, 0xabb4, 0x45a4, { 0xa6, 0x51, 0x4c, 0xd4, 0x2, 0xb2, 0x7b, 0xd9 } }

// {22B65917-3564-47D1-B3A2-1DAD66033833}
#define kInDesignServerSUTypeLib19_0_CLSID	{ 0x22b65917, 0x3564, 0x47d1, { 0xb3, 0xa2, 0x1d, 0xad, 0x66, 0x3, 0x38, 0x33 } }

// {E615A8A2-FA9C-4ABE-AF8F-0C29B16F3F64}
#define kInDesignServerMUTypeLib19_0_CLSID	{ 0xe615a8a2, 0xfa9c, 0x4abe, { 0xaf, 0x8f, 0xc, 0x29, 0xb1, 0x6f, 0x3f, 0x64 } }


#elif PRERELEASE_BUILD

// {B7D5B049-4F95-4688-B5AF-F6BF77098F7F}
#define kInDesign19_0_CLSID				{ 0xb7d5b049, 0x4f95, 0x4688, { 0xb5, 0xaf, 0xf6, 0xbf, 0x77, 0x9, 0x8f, 0x7f } }

// {6C287E7D-8B2C-4865-B012-BC48D53FAB97}
#define kInDesignSUTypeLib19_0_CLSID	{ 0x6c287e7d, 0x8b2c, 0x4865, { 0xb0, 0x12, 0xbc, 0x48, 0xd5, 0x3f, 0xab, 0x97 } }

// {3D7D9F16-4C1A-4B12-B853-CF58F46B5D28}
#define kInDesignMUTypeLib19_0_CLSID	{ 0x3d7d9f16, 0x4c1a, 0x4b12, { 0xb8, 0x53, 0xcf, 0x58, 0xf4, 0x6b, 0x5d, 0x28 } }

// {992A95BB-A82E-4AF8-8B1B-D6006C000637}
#define kInCopy19_0_CLSID				{ 0x992a95bb, 0xa82e, 0x4af8, { 0x8b, 0x1b, 0xd6, 0x0, 0x6c, 0x0, 0x6, 0x37 } }

// {41CD4F81-B133-4818-BEE5-C563A05FBE92}
#define kInCopySUTypeLib19_0_CLSID		{ 0x41cd4f81, 0xb133, 0x4818, { 0xbe, 0xe5, 0xc5, 0x63, 0xa0, 0x5f, 0xbe, 0x92 } }

// {D0247B98-A08F-4B8E-87B0-A9F17A9A6510}
#define kInCopyMUTypeLib19_0_CLSID		{ 0xd0247b98, 0xa08f, 0x4b8e, { 0x87, 0xb0, 0xa9, 0xf1, 0x7a, 0x9a, 0x65, 0x10 } }

// {CFF72A29-B9F8-471D-9508-71BFC56889B7}
#define kInDesignServer19_0_CLSID		{ 0xcff72a29, 0xb9f8, 0x471d, { 0x95, 0x8, 0x71, 0xbf, 0xc5, 0x68, 0x89, 0xb7 } }

// {C67A0CCA-41A7-424B-9289-68DA2B446AF1}
#define kInDesignServerSUTypeLib19_0_CLSID	{ 0xc67a0cca, 0x41a7, 0x424b, { 0x92, 0x89, 0x68, 0xda, 0x2b, 0x44, 0x6a, 0xf1 } }

// {D975F3B5-5340-499E-B675-4162F3DFF25C}
#define kInDesignServerMUTypeLib19_0_CLSID	{ 0xd975f3b5, 0x5340, 0x499e, { 0xb6, 0x75, 0x41, 0x62, 0xf3, 0xdf, 0xf2, 0x5c } }

#else

// {CED3B02D-77EF-478F-85CE-FC7C5023DB35}
#define kInDesign19_0_CLSID				{ 0xced3b02d, 0x77ef, 0x478f, { 0x85, 0xce, 0xfc, 0x7c, 0x50, 0x23, 0xdb, 0x35 } }

// {2CB2A8CB-2A01-4DB3-BB50-58AE8261F64B}
#define kInDesignSUTypeLib19_0_CLSID	{ 0x2cb2a8cb, 0x2a01, 0x4db3, { 0xbb, 0x50, 0x58, 0xae, 0x82, 0x61, 0xf6, 0x4b } }

// {526905B8-9008-4086-99A8-67D3ED1B4A17}
#define kInDesignMUTypeLib19_0_CLSID	{ 0x526905b8, 0x9008, 0x4086, { 0x99, 0xa8, 0x67, 0xd3, 0xed, 0x1b, 0x4a, 0x17 } }

// {3661CF9F-84BC-4EC5-ACD1-764F219B52DD}
#define kInCopy19_0_CLSID			{ 0x3661cf9f, 0x84bc, 0x4ec5, { 0xac, 0xd1, 0x76, 0x4f, 0x21, 0x9b, 0x52, 0xdd } }

// {700DDCD9-0839-44D4-A38D-A48B88328879}
#define kInCopySUTypeLib19_0_CLSID		{ 0x700ddcd9, 0x839, 0x44d4, { 0xa3, 0x8d, 0xa4, 0x8b, 0x88, 0x32, 0x88, 0x79 } }

// {7FFDD3E1-2986-4CA2-8349-B5C9552C6E8C}
#define kInCopyMUTypeLib19_0_CLSID		{ 0x7ffdd3e1, 0x2986, 0x4ca2, { 0x83, 0x49, 0xb5, 0xc9, 0x55, 0x2c, 0x6e, 0x8c } }

// {79D2D169-33C8-44FF-BB43-4917281010D3}
#define kInDesignServer19_0_CLSID		{ 0x79d2d169, 0x33c8, 0x44ff, { 0xbb, 0x43, 0x49, 0x17, 0x28, 0x10, 0x10, 0xd3 } }

// {0C319515-F3BB-4FE6-9BC4-DB5752157E50}
#define kInDesignServerSUTypeLib19_0_CLSID	{ 0xc319515, 0xf3bb, 0x4fe6, { 0x9b, 0xc4, 0xdb, 0x57, 0x52, 0x15, 0x7e, 0x50 } }

// {7551D224-EB98-4B3D-9B32-02EF837BFB03}
#define kInDesignServerMUTypeLib19_0_CLSID	{ 0x7551d224, 0xeb98, 0x4b3d, { 0x9b, 0x32, 0x2, 0xef, 0x83, 0x7b, 0xfb, 0x3 } }

#endif


#endif
