//========================================================================================
//
//  $File$
//
//  Owner: Nitika Bansal
//
//  $Author$
//
//  $DateTime$
//
//  $Revision$
//
//  $Change$
//  ___________________
//
//  ADOBE CONFIDENTIAL
//
//  Copyright 2020 Adobe
//  All Rights Reserved.
//
//  NOTICE:  All information contained herein is, and remains
//  the property of Adobe and its suppliers,
//  if any.  The intellectual and technical concepts contained
//  herein are proprietary to Adobe and its
//  suppliers and are protected by all applicable intellectual property
//  laws, including trade secret and copyright laws.
//  Dissemination of this information or reproduction of this material
//  is strictly forbidden unless prior written permission is obtained
//  from Adobe.
//
//========================================================================================

#include "IPMUnknown.h"
#include "FontUsageDialogID.h"

class IType1FontIAMPref : public IPMUnknown
{
public:
    enum { kDefaultIID =  IID_ITYPE1FONTIAMPREF};
    
    virtual const bool16 GetIAMPref() = 0;
    virtual void SetIAMPref(const bool16 ) = 0;
};


