//========================================================================================
//
//  $File$
//
//  Owner: Harshvardhan Singh
//
//  $Author$
//
//  $DateTime$
//
//  $Revision$
//
//  $Change $
//  ___________________
//
//  ADOBE CONFIDENTIAL
//
//  Copyright 2021 Adobe
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
//  from Adobe .
//
//========================================================================================

#ifndef IScriptOfText_h
#define IScriptOfText_h

#include "IPMUnknown.h"
#include "LinguisticID.h"

class IScriptOfText:public IPMUnknown{
public:
    enum{kDefaultIID = IID_ISCRIPTOFTEXT};

    virtual bool16 IsScriptRoman(const char *romanText)=0;
    virtual bool16 IsScriptJapanese(const char *japaneseText)=0;
    virtual int32 RoundTripScriptOfText( const char *anyText, int32 writingScript, bool16 dontAssert = kFalse )=0;
    
};
#endif /* IScriptOfText_h */
