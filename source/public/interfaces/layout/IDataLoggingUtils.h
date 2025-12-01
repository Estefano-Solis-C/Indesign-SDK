
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

#ifndef IDataLogging_h
#define IDataLogging_h

#include "IPMUnknown.h"

#include "LinksID.h"

//NOTE: FOR INTERNAL USE ONLY..
class IDataLoggingUtils:public IPMUnknown{
    public:
    enum { kDefaultIID = IID_IDATALOGGINGUTILS};
    
    enum EditOriginalEvents{
        kMenuEnum,
        kLinksPanelEnum
    };
    //
    /** @brief INTERNAL USE ONLY : Log Initiation of Edit Original,sets the value for Edit Original Invoker
        @param event - The eventName whose value is to be mapped with EditOriginalInvoker
    */
    virtual void SetkDesignLibrariesEditOriginalData(EditOriginalEvents event)=0;
    
    
    /** @brief INTERNAL USE ONLY : Resets the  value mapped to Edit Original Invoker as the function goes out of scope
    */
    virtual void ResetkDesignLibrariesEditOriginalData()=0;

};


#endif /* IDataLogging_h */
