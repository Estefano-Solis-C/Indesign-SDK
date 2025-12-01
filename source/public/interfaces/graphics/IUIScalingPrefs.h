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
#ifndef __IUIScalingPrefs__
#define __IUIScalingPrefs__

#include "IPMUnknown.h"
#include "AppUIID.h"

//________________________________________________________________________________________
//	CLASS DECLARATIONS
//	InDesign now supports UI scaling from 100% to 300%. This Interface is used to manage the UI scaling preferences.
//_________________________________________________________________________________

class IUIScalingPrefs : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IUISCALINGPREFS };

	typedef enum { kLower = 0, kHigher } ScalingFactorPref;
	typedef enum {kMinScaling = 1, kMaxScaling = 3} ScalingRange;

	/**
		Returns the current value of UI Scaling scalefactor stored in preferences.
	*/
	virtual PMReal GetScaleFactorValue()=0;
	/**
		Returns the boolean value stored in preferences for whether the cursor should be scaled or not. 
	 */
	virtual bool16 GetScaleCursor()=0;
	/**
		Returns the bounding box, handles and adornment scale factor stored in preferences.
	 */
	virtual PMReal GetBoundingBoxValue()=0;
	/**
		Returns the number of stops in the UI scaling slider to be shown to the user based on the 
		screen resolution and OS scale factor.
	 */
	virtual int32 GetNumStops()=0;
    
    	/**
         	Returns a boolean value indicating that user has updated UI Scaling preferences
     	*/
    	virtual bool16 GetHasUserUpdatedPrefs() = 0;
    
    
	/**
		Sets the UI scaling scale factor preference.
		@param scaleFactor the application scale factor.s
	 */
	virtual void SetScaleFactorValue(PMReal& scaleFactor)=0;

	/**
		Sets the boolean value whether the cursors should scale or not.
		@param scaleCursor if True the cursors would be scaled to effective scale factor, otherwise to OS scale factor.
	 */
	virtual void SetScaleCursor(bool16& scaleCursor)=0;

	/**
		Sets the bounding box scale factor.
		@param boundingBox the scale factor for the scaling of adornments, bounding boxes and handles.
	 */
	virtual void SetBoundingBoxValue(PMReal& boundingBox)=0;
    
	/**
	 	Sets the number of slider stops in the UI scaling slider.
	  	@param numStops the number of stops that should be there in the UI scaling slider. 
	 */
	virtual void SetNumSliderStops(int32& numStops)=0;
    
    /**
        INTERNAL USE ONLY.
        Sets a boolean value indicating that user has updated UI Scaling preferences
        @param hasUpdatedPrefs Sets a boolean value indicating that user has updated UI Scaling preferences
    */
    virtual void SetHasUserUpdatedPrefs(bool16 &hasUpdatedPrefs) = 0;
    
    
};

#endif
