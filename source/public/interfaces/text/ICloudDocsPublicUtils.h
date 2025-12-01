/*************************************************************************
 * Copyright [2023] Adobe
 * All Rights Reserved.
 * NOTICE: Adobe permits you to use, modify, and distribute this file in accordance with the terms of the Adobe license agreement accompanying it.
**************************************************************************/
#pragma once

#ifndef ICloudDocsPublicUtils_h
#define ICloudDocsPublicUtils_h

#include "IPMUnknown.h"
#include "CloudDocsID.h"
#include "URI.h"
#include "WideString.h"
/*
    ICloudDocsPublicUtils
    A class which cloud specific APIs used by ConditionalTextUIFacade project.
*/

/* For internal use only */
class ICloudDocsPublicUtils : public IPMUnknown
{
public:
    enum { kDefaultIID = IID_ICLOUDDOCSPUBLICUTILS };
    /*    For internal use only -
           Loads condition for CDP in case of a cloud document
           @param loadConditionTagSets IN only when CDP is launched, If kTrue then sets the 'CDPLaunchedFor' as kLoadConditionalTextWithTag, else as kLoadConditionalText.
    */
    enum SamInitStatus{
        kNotifcationCalled,  //in case of cookie workflow,
        kSamInitUnknown,
        kSamInitSuccess,
        kSamInitFailed,
        kSamDoNoInit,
        k0GBAccount
      
    };
    virtual void LoadConditionsForCloudDoc(const bool16 loadConditionTagSets) const = 0;
    /*    For internal use only -
            Loads cross reference formats from a cloud file
    */
    virtual void LoadXrefFromCloudDocs() = 0;
    
    /*  Checks if the cloud document is enabled or not.
        @return kTrue if enabled and kFalse otherwise.
    */
    virtual bool16 isCloudFeatureEnabled() = 0;

    /*  Checks if the provided uri corresponds to an Adobe cloud asset.
        @param uri - the uri that needs to be checked.
        @return kTrue if it is a cloud asset and kFalse otherwise.
      */
    virtual bool16 IsAdobeCloudScheme(const URI &uri) const = 0;

    /*  Returns the scheme of Adobe cloud assets
        @return The Adobe cloud assets scheme.
    */
    virtual WideString GetAdobeCloudAssetScheme() const = 0;
};

#endif /* ICloudDocsPublicUtils_h */
