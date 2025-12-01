/************************************************************************
*
* ADOBE CONFIDENTIAL
* ___________________
*
* Copyright 2022 Adobe
* All Rights Reserved.
*
* NOTICE: All information contained herein is, and remains
* the property of Adobe and its suppliers, if any. The intellectual
* and technical concepts contained herein are proprietary to Adobe
* and its suppliers and are protected by all applicable intellectual
* property laws, including trade secret and copyright laws.
* Dissemination of this information or reproduction of this material
* is strictly forbidden unless prior written permission is obtained
* from Adobe.
*************************************************************************
*/

#ifndef __CC18_2BuildNumber_h__
#define __CC18_2BuildNumber_h__

// ----- This is for scripting and should be a 'reasonable' floating-point
//		 representation of the product version number.
//
// ----- This DOES NOT change when we have a dot release
//
#define kCC18_2VersionNumber 18.2

// ----- This string is primarily used as the key in the Windows registry,
//		as well as for application registration on startup.
//
// ----- This DOES NOT change when we have a dot release
//
#define kCC18_2VersionNumberStr "18.2"

// ----- This represents the product version number in the form it will
//		 be presented to the user. You will see it used in the
//		 Windows application window frame, for example.
//		It is also used by OLEAutomation as part of the application version key.
//
// ----- This DOES NOT change when we have a dot release
//
#ifdef BETA_BUILD
#define kCC18_2UIVersionStr "2023 (Beta)"
#elif PRERELEASE_BUILD
#define kCC18_2UIVersionStr "2023 (Prerelease)"
#else
#define kCC18_2UIVersionStr "2023"
#endif

// ----- This represents year based handle of the product to
//		 be presented to the user in splash screen.
// ----- This DOES NOT change when we have a dot release
//
#define kCC18_2CCVersionYearBasedHandleStr "2023"

// ----- This represents year based full version handle of the product to
//		 be presented to the user in about screen.
// ----- This DOES NOT change when we have a dot release
//
#define kCC18_2CCVersionYearBasedFullHandleStr "2023.2"


// ----- CC18_2_DOT_RELEASE_NUMBER represents the product dot
//		release version.
//		All necessary changes for a dot release update can be
//		done in this file by following these directions.
//
// ----- To update a dot release:
//		1. Change CC18_2_DOT_RELEASE_NUMBER to non-zero
// 			(If you want 4.0.2 change it to 2.)
//		2. Update kCC18_2VersionNumberForResourceStr
//		3. Update kCC18_2VersionCopyRightStr for the Mac
//		4. Update kCC18_2CFBundleVersionStr for the Mac (4.0.1 would be "4010")
//		5. Update kCC18_2AUMComponentVersionStr
//		6. Update kCC18_2CRAdobeProductVersionStr similar to kCC18_2CFBundleVersionStr
// 
// At a minimum, you must then rebuild AppFramework, ApplicationUI
// InDesign, InCopy, & InDesignServer. Rebuilding plugins will
// update their Windows resources and Mac plist settings so that,
// for example, the Finder or Explorer will correctly display version info.
//
#define CC18_2_DOT_RELEASE_NUMBER 0

#if CC18_2_DOT_RELEASE_NUMBER
#define kCC18_2VersionNumberForResourceStr "18.2.0"
#else
#define kCC18_2VersionNumberForResourceStr "18.2"
#endif

// ----- Used for plug-in actual and expected version numbers
#define kCC18_2MajorVersionNumber RezLong(18)
#define kCC18_2MinorVersionNumber RezLong(2)
#define kCC18_2DotVersionNumber  RezLong(CC18_2_DOT_RELEASE_NUMBER)

// ----- Numbers for 'vers', FILEVERSION and PRODUCTVERSION resources.
#define kCC18_2MajorVersionNumberForResource 18
#define kCC18_2MinorVersionNumberForResource 2
#define kCC18_2DotVersionNumberForResource CC18_2_DOT_RELEASE_NUMBER


// ----- Version copyright strings are different for different platforms

// When updating version strings, the copyright years are cumulative.
// e.g. in the future the year string will look like 2000-2009, 2000-2010, etc.
#ifdef MACINTOSH
#if CC18_2_DOT_RELEASE_NUMBER
#define kCC18_2VersionCopyRightStr "18.2.0, Copyright 1999-2023 Adobe Inc. All rights reserved."
#define kCC18_2CFBundleVersionStr "18200"
#else
#define kCC18_2VersionCopyRightStr "18.2, Copyright 1999-2023 Adobe Inc. All rights reserved."
#define kCC18_2CFBundleVersionStr "18200"
#endif
#endif

#ifdef WINDOWS
#define kCC18_2VersionCopyRightStr "Copyright 1999-2023 Adobe. All rights reserved."
#define kCC18_2ShortCopyRightStr "\xa9 1999-2023 Adobe. All rights reserved."
#endif

// ----- Version string for Adobe Update Manager managed components
#if CC18_2_DOT_RELEASE_NUMBER
#define kCC18_2AUMComponentVersionStr	"18.2.0."
#else
#define kCC18_2AUMComponentVersionStr	"18.2.0."
#endif
// ----- Version string for Adobe Crash Reporter
#if CC18_2_DOT_RELEASE_NUMBER
#define kCC18_2CRAdobeProductVersionStr	"18200"
#else
#define kCC18_2CRAdobeProductVersionStr	"18200"
#endif

#define kCC18_2CRAdobeInDesignDisplayNameStr	"Adobe InDesign 2023"
#define kCC18_2CRAdobeInCopyDisplayNameStr    "(Adobe InCopy 2023)"

// ----- Scripting DOM Version
// To define a new version of the Scripting DOM:
// For a dot release, add a new major and minor script version number, and new typelib CLSIDs.
// For a minor version release, also add new application CLSIDs.
// Note: This assumes that kUIVersionStr also changes for a minor version release.
#define kCC18_2MajorScriptVersionNumber	RezLong(18)
#define kCC18_2MinorScriptVersionNumber	RezLong(2)

/* Use class ID's from 18.0 build

#ifdef BETA_BUILD

// {D2876E66-6B9C-4366-997D-AC0404D54B21}
#define kInDesign18_0_CLSID	            { 0xd2876e66, 0x6b9c, 0x4366, { 0x99, 0x7d, 0xac, 0x4, 0x4, 0xd5, 0x4b, 0x21 } }

// {E1C85B3A-E8CC-4EE7-A0B8-B057D4790014}
#define kInDesignSUTypeLib18_0_CLSID	{ 0xe1c85b3a, 0xe8cc, 0x4ee7, { 0xa0, 0xb8, 0xb0, 0x57, 0xd4, 0x79, 0x0, 0x14 } }

// {7B1B8E51-8DBD-4E6C-B090-58A1FB22BCEA}
#define kInDesignMUTypeLib18_0_CLSID	{ 0x7b1b8e51, 0x8dbd, 0x4e6c, { 0xb0, 0x90, 0x58, 0xa1, 0xfb, 0x22, 0xbc, 0xea } }

// {233E1423-7C94-444F-9FE1-EB4659AFB8BF}
#define kInCopy18_0_CLSID		        { 0x233e1423, 0x7c94, 0x444f, { 0x9f, 0xe1, 0xeb, 0x46, 0x59, 0xaf, 0xb8, 0xbf } }

// {1CCF99D8-FFB7-4A41-B287-38D4B28BD494}
#define kInCopySUTypeLib18_0_CLSID		{ 0x1ccf99d8, 0xffb7, 0x4a41, { 0xb2, 0x87, 0x38, 0xd4, 0xb2, 0x8b, 0xd4, 0x94 } }

// {F198A270-7FA8-4D92-AD86-A474EB889CA6}
#define kInCopyMUTypeLib18_0_CLSID		{ 0xf198a270, 0x7fa8, 0x4d92, { 0xad, 0x86, 0xa4, 0x74, 0xeb, 0x88, 0x9c, 0xa6 } }

// {6E1F8AD9-8AF8-475A-BE67-5C8579280F3C}
#define kInDesignServer18_0_CLSID		{ 0x6e1f8ad9, 0x8af8, 0x475a, { 0xbe, 0x67, 0x5c, 0x85, 0x79, 0x28, 0xf, 0x3c } }

// {B19B6244-7EA8-4E77-ABBB-7C9FEC435743}
#define kInDesignServerSUTypeLib18_0_CLSID	{ 0xb19b6244, 0x7ea8, 0x4e77, { 0xab, 0xbb, 0x7c, 0x9f, 0xec, 0x43, 0x57, 0x43 } }

// {3DAB03C7-DADE-4134-87E8-A1751081E293}
#define kInDesignServerMUTypeLib18_0_CLSID	{ 0x3dab03c7, 0xdade, 0x4134, { 0x87, 0xe8, 0xa1, 0x75, 0x10, 0x81, 0xe2, 0x93 } }


#elif PRERELEASE_BUILD

// {B261D34E-96E0-4EE0-8B8D-832EF4F8B59E}
#define kInDesign18_0_CLSID				{ 0xb261d34e, 0x96e0, 0x4ee0, { 0x8b, 0x8d, 0x83, 0x2e, 0xf4, 0xf8, 0xb5, 0x9e } }

// {2C6BBB7A-C4B4-484B-923A-C531128882EB}
#define kInDesignSUTypeLib18_0_CLSID	{ 0x2c6bbb7a, 0xc4b4, 0x484b, { 0x92, 0x3a, 0xc5, 0x31, 0x12, 0x88, 0x82, 0xeb } }

// {D94E046E-75F8-4B65-BA4A-504BC723E76B}
#define kInDesignMUTypeLib18_0_CLSID	{ 0xd94e046e, 0x75f8, 0x4b65, { 0xba, 0x4a, 0x50, 0x4b, 0xc7, 0x23, 0xe7, 0x6b } }

// {C3EFE7D2-41FC-455A-B7BE-36490E8DA962}
#define kInCopy18_0_CLSID				{ 0xc3efe7d2, 0x41fc, 0x455a, { 0xb7, 0xbe, 0x36, 0x49, 0xe, 0x8d, 0xa9, 0x62 } }

// {691014DC-25BF-46FB-9CD3-9C9F7E7428A3}
#define kInCopySUTypeLib18_0_CLSID		{ 0x691014dc, 0x25bf, 0x46fb, { 0x9c, 0xd3, 0x9c, 0x9f, 0x7e, 0x74, 0x28, 0xa3 } }

// {1899B30B-FE1D-43C4-8945-89C1475070A4}
#define kInCopyMUTypeLib18_0_CLSID		{ 0x1899b30b, 0xfe1d, 0x43c4, { 0x89, 0x45, 0x89, 0xc1, 0x47, 0x50, 0x70, 0xa4 } }

// {6F45B885-D927-42FD-85D8-04BC7411B723}
#define kInDesignServer18_0_CLSID		{ 0x6f45b885, 0xd927, 0x42fd, { 0x85, 0xd8, 0x4, 0xbc, 0x74, 0x11, 0xb7, 0x23 } }

// {80396B52-5CC6-4B61-8310-FF809525D7D1}
#define kInDesignServerSUTypeLib18_0_CLSID	{ 0x80396b52, 0x5cc6, 0x4b61, { 0x83, 0x10, 0xff, 0x80, 0x95, 0x25, 0xd7, 0xd1 } }

// {6C056BF5-EF05-4427-9BF6-33A27E690D5C}
#define kInDesignServerMUTypeLib18_0_CLSID	{ 0x6c056bf5, 0xef05, 0x4427, { 0x9b, 0xf6, 0x33, 0xa2, 0x7e, 0x69, 0xd, 0x5c } }

#else

// {231441AB-8969-4F6D-8CD1-B596C4047898}
#define kInDesign18_0_CLSID				{ 0x231441ab, 0x8969, 0x4f6d, { 0x8c, 0xd1, 0xb5, 0x96, 0xc4, 0x4, 0x78, 0x98 } }

// {AC3AFC8E-5FEC-4EDA-8BD9-4C27919E5E1D}
#define kInDesignSUTypeLib18_0_CLSID	{ 0xac3afc8e, 0x5fec, 0x4eda, { 0x8b, 0xd9, 0x4c, 0x27, 0x91, 0x9e, 0x5e, 0x1d } }

// {F8817376-B287-45BB-8139-1BF5BFC1FD02}
#define kInDesignMUTypeLib18_0_CLSID	{ 0xf8817376, 0xb287, 0x45bb, { 0x81, 0x39, 0x1b, 0xf5, 0xbf, 0xc1, 0xfd, 0x2 } }

// {66A6961E-7BD8-4154-872B-1CFF406DCCEB}
#define kInCopy18_0_CLSID			{ 0x66a6961e, 0x7bd8, 0x4154, { 0x87, 0x2b, 0x1c, 0xff, 0x40, 0x6d, 0xcc, 0xeb } }

// {E69D201D-480F-483E-ADF1-8F22B780D783}
#define kInCopySUTypeLib18_0_CLSID		{ 0xe69d201d, 0x480f, 0x483e, { 0xad, 0xf1, 0x8f, 0x22, 0xb7, 0x80, 0xd7, 0x83 } }

// {3B0C62BA-46B6-4537-9680-99DC291897FE}
#define kInCopyMUTypeLib18_0_CLSID		{ 0x3b0c62ba, 0x46b6, 0x4537, { 0x96, 0x80, 0x99, 0xdc, 0x29, 0x18, 0x97, 0xfe } }

// {5735A0C6-64D9-4850-A721-C88B76C58964}
#define kInDesignServer18_0_CLSID		{ 0x5735a0c6, 0x64d9, 0x4850, { 0xa7, 0x21, 0xc8, 0x8b, 0x76, 0xc5, 0x89, 0x64 } }
// {2B9865D4-A066-44EA-BCCC-0AB9A1CD3404}
#define kInDesignServerSUTypeLib18_0_CLSID	{ 0x2b9865d4, 0xa066, 0x44ea, { 0xbc, 0xcc, 0xa, 0xb9, 0xa1, 0xcd, 0x34, 0x4 } }
// {55CE315E-C02F-410A-9419-B1B013998C2D}
#define kInDesignServerMUTypeLib18_0_CLSID	{ 0x55ce315e, 0xc02f, 0x410a, { 0x94, 0x19, 0xb1, 0xb0, 0x13, 0x99, 0x8c, 0x2d } }

#endif
*/

#endif
