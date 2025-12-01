/*************************************************************************
 *
 * ADOBE CONFIDENTIAL
 * ___________________
 *
 *  Copyright 2024 Adobe
 *  All Rights Reserved.
 *
 * NOTICE: All information contained herein is, and remains
 * the property of Adobe and its suppliers, if any. The intellectual
 * and technical concepts contained herein are proprietary to Adobe
 * and its suppliers and are protected by all applicable intellectual
 * property laws, including trade secret and copyright laws.
 * Dissemination of this information or reproduction of this material
 * is strictly forbidden unless prior written permission is obtained
 * from Adobe.

  **************************************************************************/



#pragma once
#ifndef __IICONLISTCONTROLDATA__
#define __IICONLISTCONTROLDATA__

#include "widgetid.h"
#include "IPMUnknown.h"

class IIconTextDropDownControlData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IICONLISTCONTROLDATA};

	/** Gets the icon name of the icon to be shown in the dropdown for the specific index/position.
	@param index The drop down item index number
	@return PMString of the icon name
	*/
	virtual const PMString& GetNthIconNameFromList(int32 index) = 0;
};

#endif
