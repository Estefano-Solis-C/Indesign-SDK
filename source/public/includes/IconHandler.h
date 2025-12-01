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
#ifndef __ICONHANDLER_H__
#define __ICONHANDLER_H__

#include "BravoForwardDecl.h"
#include "IDFile.h"
#include "IArt.h"

class IGraphicsPort;

#ifdef PUBLIC_BUILD
#pragma export on
#endif

class  PUBLIC_DECL IconHandler
{
public :
    IconHandler ();

    /** If a SVG/PNG resource has been loaded it deletes it.
    */
    ~IconHandler ();

    /** Deletes any currently loaded resource and loads a SVG/PNG image from a plugin's resource. First tries for SVG then for PNG. SVG images are preferred.

        @param  PluginID:  PluginId to load the resource from
        @param  RsrcID:    Resource ID of the SVG/PNG
        @param  bool:      Rollover resource?
                           If false, then a resource type of "SVGA/PNGA" will be loaded, else a resource type of "SVGR/PNGR" will be loaded.
        @param  bool:      Dark UI resource?
                           If false, then a resource type of "SVGA/PNGA" (or "SVGR/PNGR" if isRollover is true) will be loaded, else a
                           resource type of "SVGD/PNGD" (or "SVGK/PNGK" if isRollover is true) will be loaded. Default is false.
        @param  float scale factor at which image should be displayed.
        @param  float scale of the icon.
        @return true if file / resource was loaded
    */
    bool SetRsrc    (const PluginID & pid, const RsrcID & rid, const bool isRollOver, const bool isDark = false, const float scaleFactor = 1.0 ,const float iconScale=2.0);
    bool SetRsrc    (const RsrcSpec& spec, const float scaleFactor = 1.0, const float iconScale=2.0);    // all decisions (light/dark/rollover/hiRes/etc.) resolved by caller
    
    /** Deletes any currently loaded resource and loads a SVG/PNG image file resource in from the supplied file.
        @param  path to a SVG/PNG file
        @param  float scale factor at which image should be displayed.
        @param  float scale of the icon.
        @return true if file / resource was loaded
    */
    bool SetFile    (const IDFile& idFile,const float scaleFactor = 1.0, const float iconScale=2.0);

    /** Draw's the SVG/PNG to the supplied graphics port

        @param  IGraphicsPort:  IGraphicsPort to draw to
        @param  PMMatrix:        Transformation matrix to apply to the SVG/PNG, if no translation is desired use the idenity matrix or just a plain PMMatrix.
        @param  agmflags:       Any desired AGM flags, use 0 if none are desired.
    */
    void Draw        (IGraphicsPort * gPort, const PMMatrix &imMatrix, int32 agmflags);
    
    /** Draw's the SVG/PNG with a 50% transparensy see regular draw methode for more info.
    */
    void DrawDisabled (IGraphicsPort * gPort, const PMMatrix &imMatrix, int32 agmflags);
    
    /** Does the SVG/PNG have a alpha?
        @return true if SVG/PNG contains pixels not totally opaque
    */
    bool HasAlpha ();

    /** Did the SVG/PNG sucessfully load?
        @return true if loaded
    */
    bool IsLoaded ();
    
    /** Deletes the SVG/PNG resource, this is done automatically when this class is destroyed
    */
    void Delete ();

    /** @return The height of the loaded SVG/PNG resource
    */
    int GetHeight () const;
    
    /** @return The width of the loaded SVG/PNG resource
    */
    int GetWidth  () const;

    /** @return A pointer to the AGMImageRecord for the loaded SVG resource
    */
    AGMImageRecord* GetBitmap  () const;

private :
    void LoadSVGHandler();
    void LoadPNGHandler();
    std::unique_ptr<IArt> fIconPtr;
    PMReal fProxyScale;
};

#ifdef PUBLIC_BUILD
#pragma export off
#endif

#endif
