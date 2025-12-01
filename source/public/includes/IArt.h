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
#ifndef __IART_H__
#define __IART_H__

#include "BravoForwardDecl.h"
#include "IDFile.h"

class IGraphicsPort;

#ifdef PUBLIC_BUILD
#pragma export on
#endif

class  PUBLIC_DECL IArt
{
    public :
    
    /** Deletes any currently loaded resource and loads an image from a plugin's resource. This is the preferred approach.

        @param  PluginID:  PluginId to load the resource from
        @param  RsrcID:    Resource ID of the image
        @param  bool:      Rollover resource?
        @param  bool:      Dark UI resource?
        @param  float scale factor at which image should be displayed.
        @param  float scale of the icon.
        @return true if file / resource was loaded
    */
    virtual bool SetRsrc    (const PluginID & pid, const RsrcID & rid, const bool isRollOver, const bool isDark = false, const float scaleFactor = 1.0, const float iconScale = 2.0) = 0;
    virtual bool SetRsrc    (const RsrcSpec& spec, const float scaleFactor = 1.0, const float iconScale = 2.0) = 0; // all decisions (light/dark/rollover/hiRes/etc.) resolved by caller
    
    /** Deletes any currently loaded resource and loads an image file resource in from the supplied file.
        @param  path to a file
        @param  float scale factor at which image should be displayed.
        @param  float scale of the icon.
        @return true if file / resource was loaded
    */
    virtual bool SetFile    (const IDFile& idFile, const float scaleFactor = 1.0, const float iconScale = 2.0) = 0;
    
    /** Draw's the image to the supplied graphics port

        @param  IGraphicsPort:  IGraphicsPort to draw to
        @param  PMMatrix:        Transformation matrix to apply to the SVG/PNG, if no translation is desired use the idenity matrix or just a plain PMMatrix.
        @param  agmflags:       Any desired AGM flags, use 0 if none are desired.
    */
    virtual void Draw        (IGraphicsPort * gPort, const PMMatrix &imMatrix, int32 agmflags) = 0;
    
    /** Draw's the image with a 50% transparensy see regular draw methode for more info.
    */
    virtual void DrawDisabled (IGraphicsPort * gPort, const PMMatrix &imMatrix, int32 agmflags) = 0;
    
    /** Does the image have a a alpha?
        @return true if image contains pixels not totally opaque
    */
    virtual bool HasAlpha () = 0;
    
    /** Did the image sucessfully load?
        @return true if loaded
    */
    virtual bool IsLoaded () = 0;
    
    /** Deletes the image resource, this is done automatically when this class is destroyed
    */
    virtual void Delete () = 0;
    
    /** @return The height of the loaded resource
    */
    virtual int GetHeight () const = 0;
    
    /** @return The width of the loaded resource
    */
    virtual int GetWidth  () const = 0;
    
    /** @return A pointer to the AGMImageRecord for the loaded image resource
    */
    virtual AGMImageRecord* GetBitmap  () const = 0;
    
    virtual ~IArt() {}
    
};

#ifdef PUBLIC_BUILD
#pragma export off
#endif

#endif

