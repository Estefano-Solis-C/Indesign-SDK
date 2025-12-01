//========================================================================================
//
// Copyright 2021 Adobe
// All Rights Reserved.
//
// NOTICE: Adobe permits you to use, modify, and distribute this file in
// accordance with the terms of the Adobe license agreement accompanying
// it.
//
//========================================================================================

#pragma once
#ifndef __SVGART_H__
#define __SVGART_H__

#include "BravoForwardDecl.h"
#include "IDFile.h"
#include "IArt.h"

class IGraphicsPort;

#ifdef PUBLIC_BUILD
#pragma export on
#endif

class  PUBLIC_DECL SVGArt : public IArt
{
public :
    SVGArt ();
    
    /** If a SVG resource has been loaded it deletes it.
    */
    ~SVGArt ();

    /** Deletes any currently loaded resource and loads a SVG image from a plugin's resource. This is the preferred approach.

        @param  PluginID:  PluginId to load the resource from
        @param  RsrcID:    Resource ID of the PNG
        @param  bool:      Rollover resource?
                           If false, then a resource type of "SVGA" will be loaded, else a resource type of "SVGR" will be loaded.
        @param  bool:      Dark UI resource?
                           If false, then a resource type of "SVGA" (or "SVGR" if isRollover is true) will be loaded, else a
                           resource type of "SVGD" (or "SVGK" if isRollover is true) will be loaded. Default is false.
        @param  float scale factor at which image should be displayed.
        @param  float scale of the icon.
        @return true if file / resource was loaded
    */
    bool SetRsrc    (const PluginID & pid, const RsrcID & rid, const bool isRollOver, const bool isDark = false, const float scaleFactor = 1.0, const float iconScale = 2.0);
    bool SetRsrc    (const RsrcSpec& spec, const float scaleFactor = 1.0, const float iconScale = 2.0);    // all decisions (light/dark/rollover/hiRes/etc.) resolved by caller
    
    /** Deletes any currently loaded resource and loads a SVG image file resource in from the supplied file.
        @param  path to a SVG file
        @param  float scale factor at which image should be displayed.
        @param  float scale of the icon.
        @return true if file / resource was loaded
    */
    bool SetFile    (const IDFile& idFile, const float scaleFactor = 1.0, const float iconScale = 2.0);

    /** Draw's the SVG to the supplied graphics port

        @param  IGraphicsPort:  IGraphicsPort to draw to
        @param  PMMatrix:        Transformation matrix to apply to the SVG, if no translation is desired use the idenity matrix or just a plain PMMatrix.
        @param  agmflags:       Any desired AGM flags, use 0 if none are desired.
    */
    void Draw        (IGraphicsPort * gPort, const PMMatrix &imMatrix, int32 agmflags);
    
    /** Draw's the SVG with a 50% transparensy see regular draw methode for more info.
    */
    void DrawDisabled (IGraphicsPort * gPort, const PMMatrix &imMatrix, int32 agmflags);
    
    /** Does the SVG have a alpha?
        @return true if SVG contains pixels not totally opaque
    */
    bool HasAlpha ();

    /** Did the SVG sucessfully load?
        @return true if loaded
    */
    bool IsLoaded ();
    
    /** Deletes the SVG resource, this is done automatically when this class is destroyed
    */
    void Delete ();

    /** @return The height of the loaded SVG resource
    */
    int GetHeight () const;
    
    /** @return The width of the loaded SVG resource
    */
    int GetWidth  () const;

    /** @return A pointer to the AGMImageRecord for the loaded SVG resource
    */
    AGMImageRecord* GetBitmap  () const;

    /** Different instantiations of SVGArt may share a cache.
		ReleaseCaches can be called to free these cache.
	*/
	static void ReleaseSVGSharedCaches (void);

private :
    void CreateAGMProxy(AGMImageRecord * bitmap,const PMRect& boundingBox, CAGMDisplayList& svgDL);
    bool16 ReadSVGImage(IPMStream* iPMStream, AGMImageRecord * bitmap);
    bool16 ReadSVGImageHelper(IPMStream* iPMStream, AGMImageRecord * bitmap);
    void DeepCopyAGMImageRecord(AGMImageRecord * from, AGMImageRecord * to);
    static bool16 IsCacheDisabled();
    AGMImageRecord  *fBitmap;
    float fIconScale;
    float fScaleFactor;
    CBIBSharedBuffer fBuffer;
};

#ifdef PUBLIC_BUILD
#pragma export off
#endif

#endif
