/***********************************************************************
 *
//  Copyright 1988 - 2010 WinSoft SA. All rights reserved.
//  Usage rights licenced to Adobe Inc. 1993 - 2008.
 *
 ***********************************************************************/

 /*
  *	WRServices
  *
  *	WRVer.h
  *
  */

#ifndef WRVer_H_
#define WRVer_H_

  // -----------------------------------------------------------------------------

  // The WR_VER_STRINGIFY macro takes a preprocessor token (i.e. the value of a #define)
  // and wraps it in quotes as a string.
#ifndef WR_VER_STRINGIFY
#define WR_VER_STRINGIFY_HELPER(s) #s
#define WR_VER_STRINGIFY(s) WR_VER_STRINGIFY_HELPER(s)
#endif // WR_VER_STRINGIFY

// -----------------------------------------------------------------------------

/* The DLL Version will show up as MAJOR.MINOR.ENG */
#define WR_VERSION_MAJOR        18
#define WR_VERSION_MAJORSTR     WR_VER_STRINGIFY(WR_VERSION_MAJOR)
#define WR_VERSION_MINOR        0
#define WR_VERSION_MINORSTR     WR_VER_STRINGIFY(WR_VERSION_MINOR)
#define WR_VERSION_ENG          7
#define WR_VERSION_ENGSTR       WR_VER_STRINGIFY(WR_VERSION_ENG)

/**
	Current version number of WRServices

	The WRServices version number is a 32 bit integer with four sub-fields.  It consists
	of a "debug vs. release" field, a "major version" field, a "minor version" field,
	and an "engineering" or "build number" field.  The highest bit (0x80000000) of
	the integer is set to 1 for debug builds of WRServices and is set to 0 for release
	builds.  The next highest 15 bits (0x7fff0000) are the major version.  The next
	highest 8 bits (0x0000ff00) are the minor version.  The lowest 8 bits
	(0x000000ff) are the engineering version.

	On Windows the WRServices version number number is displayed in the WRServices.dll file
	by looking in the Properties dialog (right-click on the WRServices.dll file and choose
	"Properties" from the pop-up menu).  In this dialog, look at the "Version" panel.
	The version number is displayed as the "File version:"

	On Macintosh the version number can be seen by selecting the WRServicesLib file in the
	Finder and choosing "Get Info" from the "File" menu.  In that dialog (in the "General
	Information" panel) the version number is displayed at the beginning of the "Version:"
	field.

	The version number can be programatically determined by calling the WRGetVersion function
	from WRServices.h.

	@see WRGetVersion
*/
#define WR_VERSION				((WR_VERSION_MAJOR << 16) | (WR_VERSION_MINOR << 8) | WR_VERSION_ENG)

// -----------------------------------------------------------------------------
//  Utility preprocessor macros to compose version numbers.
// -----------------------------------------------------------------------------

#ifndef COMPOSE_VERSION_NUMBER_TRIPLET
#define COMPOSE_VERSION_NUMBER_TRIPLET_HELPER(A,B,C) A##.##B##.##C
#define COMPOSE_VERSION_NUMBER_TRIPLET(major, minor, patch) COMPOSE_VERSION_NUMBER_TRIPLET_HELPER(major, minor, patch)
#endif // COMPOSE_VERSION_NUMBER_TRIPLET

#ifndef COMPOSE_VERSION_NUMBER_QUARTET
#define COMPOSE_VERSION_NUMBER_QUARTET_HELPER(A,B,C,D) A##.##B##.##C##.##D
#define COMPOSE_VERSION_NUMBER_QUARTET(major, minor, patch, id) COMPOSE_VERSION_NUMBER_QUARTET_HELPER(major, minor, patch, id)
#endif // COMPOSE_VERSION_NUMBER_QUARTET

// -----------------------------------------------------------------------------

#endif /* WRVer_H_ */
