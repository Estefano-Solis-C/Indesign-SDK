//========================================================================================
//  
//  $File$
//  
//  Owner: Lonnie Millett
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
//  
//  ADOBE CONFIDENTIAL
//  
//  For CodeWarrior the symbol __INTEL__ is defined if building for Windows.
//  If using Visual C++ then _MSC_VER is defined. [amb-cwi86]
//  
//  make sure we get MACINTOSH or WINDOWS defined correctly for ODFRC
//  
//========================================================================================

#pragma once
#ifdef __ODFRC__
	#ifdef __WINDOWS__
		#ifndef WINDOWS
			#define WINDOWS 1
		#endif
	#elif defined (__APPLE__)
		#ifndef MACINTOSH
			#define MACINTOSH 1
		#endif
        #if defined(TARGET_CPU_ARM) || defined(__arm64__)
            #ifndef APPLE_SILICON
                #define APPLE_SILICON 1
            #endif
        #elif defined(TARGET_CPU_X86) || defined(__x86_64__)
            #ifndef APPLE_INTEL
                #define APPLE_INTEL 1
            #endif
        #endif
    #elif defined (WASM)
        #ifndef WASM
            #define WASM 1
        #endif
	#endif

#endif

#if defined _WIN32 && defined _MSC_VER
	// The Microsoft Visual C++ compiler is being used to generate
	// code for the WIN32 platform.
	//
	// The Visual C++ compiler by default defines WIN32 and _WINDOWS but
	// we don't need these defined in the project settings.  Instead we
	// count on the fact that the compiler internally defines _WIN32 and
	// _MSC_VER.  We define WINDOWS ourself right here.

#define WINDOWS 1

#ifndef PMRESOURCE
#include "VCSettings.h"
#endif

#elif defined UNIX

#elif !defined WINDOWS && !defined __INTEL__ && !defined WASM
	// Building for Macintosh
//pragma once on - causes boost problems and weird behaviour
#define MACINTOSH 1
#if defined(TARGET_CPU_ARM) || defined(__arm64__)
    #ifndef APPLE_SILICON
        #define APPLE_SILICON 1
    #endif
#elif defined(TARGET_CPU_X86) || defined(__x86_64__)
    #ifndef APPLE_INTEL
        #define APPLE_INTEL 1
    #endif
#else
#ifndef __ODFRC__
    #error "Unknown Apple Target"
#endif
#endif

#endif


// Move the actual compiler macros to a central location - djb
//	see http://gcc.gnu.org/wiki/Visibility
#ifdef __GNUC__
	#define DLL_IMPORT_DECL __attribute__ ((visibility("default")))
	#define DLL_EXPORT_DECL __attribute__ ((visibility("default")))
	#define LOCAL_DECL 	__attribute__ ((visibility("hidden")))
	#define INTERFACE_DECL 	__attribute__ ((visibility("default")))
#elif defined _WIN32 && defined _MSC_VER
	#define DLL_IMPORT_DECL __declspec(dllimport)
	#define DLL_EXPORT_DECL __declspec(dllexport)
	#define LOCAL_DECL
	#define INTERFACE_DECL
#endif

// This keyword is for code that is obsolete, but is present so that client
// code can still run. We anticipate that what is DEPRECATED in version x, 
// will be removed completely in version x + 1.
#define ID_DEPRECATED

#define USEPMTYPES 1
#define SKIPOMPARSE 1
#if !defined(OLDROUTINENAMES)
	#define OLDROUTINENAMES	0
#endif

// Should undef (i.e. comment out) before product ships!!!
// See comments in PMNew.cpp about this flag. This flag is for internal use only and should not be defined in 3rd party plug-ins.
//#define INTERNAL_TEST_WITH_PLATFORM_ALLOCATOR 1


#if defined(PRERELEASE_BUILD) || defined(BETA_BUILD)
    //Keeping BENCHMARK and PRERELEASE ON by default for PRERELEASE/BETA
    //IMPORTANT NOTE: PLEASE DON'T CHANGE THIS DURING ENDGAME.
	#define PRERELEASE	1
	#define BENCHMARK_ONLY 1 
#else
// Turned ON on 4 Apr, 2024 for 19.5
    // #define PRERELEASE	1		//Please undef before product ships!!!

// Turned ON on 4 Apr, 2024 for 19.5
	// Should undef before product ships!!!
	// #define BENCHMARK_ONLY 1  //Used for benchmark specific code
#endif

#ifdef WASM
    #undef BENCHMARK_ONLY
#endif

// Use this flag to create a build that will turn off the
// "edited with prerelease" flag in the Content Manager.
#define BRIDGEBUILD	0

#ifdef DEBUG 
    #define ID_ENABLE_DEBUGGING 1
    #undef  DISABLE_TRACE_MENU          // not meaningful for debug builds, defined for release builds
    #undef  DISABLE_ASSERT_PROMPTS      // not meaningful for debug builds, defined for release builds

#else // Release

//Internal use: Turn on to get some debugging features to work in release builds (e.g. traces, asserts). Requires complete recompilation of code
//Turn off before shipping
//    #define ID_ENABLE_DEBUGGING         1

    #if defined (ID_ENABLE_DEBUGGING)
        #define DISABLE_TRACE_MENU      1   // disable traces menu in release build.
        #define DISABLE_ASSERT_PROMPTS  1   // disable assert prompts in release build.
    #endif // ID_ENABLE_DEBUGGING

#endif // DEBUG

#if defined(ID_ENABLE_DEBUGGING) // following are commnon to debug and release

//    #define ENABLE_ALL_TRACES           1   // enable this flag only to log all type of traces in a special folder
//    #define ENABLE_TRACE_FILES_DIVISION 1   // enable this to put trace logs in individual files, with name same as category and works with ENABLE_ALL_TRACES

    #if !defined (DISABLE_TRACE_MENU)
        #define ENABLE_TRACE_MENU       1   // enable traces menu if the disabling is off.
    #endif


//    #define TRACE_TEXT_M2M_VALIDATION   1   // enable this flag to let Text subsystem do the special m2m validation and log appropriately

#endif // ID_ENABLE_DEBUGGING

//#define REMOVED_JBX_FOR_CS3	1	// Used for jbxs
//#ifndef qME
//#define qME 1
//#endif
#if !defined(qME)
#define DISPLAY_CELLS_IN_STORY 1
#endif


#include "id_auto_ptr.h"
#if MACINTOSH
    // Flags that will control certain features on Apple silicon as these are not available.
    // CEP for Apple Silicon
    #if APPLE_SILICON
        #ifndef ENABLE_CEP_FOR_APPLE_SILICON
            #define ENABLE_CEP_FOR_APPLE_SILICON 1
        #endif
    #else
        #ifndef ENABLE_CEP_FOR_APPLE_SILICON
            #define ENABLE_CEP_FOR_APPLE_SILICON 1
        #endif
    #endif

    // Content Aware Fit for Apple Silicon
    #if APPLE_SILICON
        #ifndef ENABLE_DEEPCUT_FOR_APPLE_SILICON
            #define ENABLE_DEEPCUT_FOR_APPLE_SILICON 0
        #endif
    #else
        #ifndef ENABLE_DEEPCUT_FOR_APPLE_SILICON
            #define ENABLE_DEEPCUT_FOR_APPLE_SILICON 1
        #endif
    #endif
#elif WINDOWS
    #define ENABLE_CEP_FOR_APPLE_SILICON 1
    #define ENABLE_DEEPCUT_FOR_APPLE_SILICON 1
#endif
//To make BETA or PR build, switch on corresponding flag
//#define BETA_BUILD 

#ifdef MACINTOSH
   #define UI_SCALING_MAC 1
#endif
#ifdef WINDOWS
   #define UI_SCALING_WINDOWS 1
#endif

#if MACINTOSH
    #ifndef CLOUD_DOCS_TRACES_ENABLED
        #define CLOUD_DOCS_TRACES_ENABLED 1
    #endif
#endif

#define ENABLE_CLOUD_DOCS 1
#define ENABLE_SAVE_A_COPY_CLOUD 0
#define ENABLE_CLOUDID_ANALYTICS 1
#define DISABLE_INCOPY_WORKFLOW_CLOUD 1
#define DISABLE_IDS_ANALYTICS 0
#define ENABLE_19_0_IDS_ANALYTICS 1
#define DISABLE_CLOUD_COMMENTING 0
#define ENABLE_HARFBUZZ_SHAPING 1
//PLEASE DON't REMOVE
#ifndef ID_DVA_NEXT
	#define ID_DVA_NEXT 1
#endif

//Prevent essential plugins to get excluded from PluginConfig.txt
#if WINDOWS
#define FORCE_LOAD_ESSENTIAL_PLUGINS 1
#endif

