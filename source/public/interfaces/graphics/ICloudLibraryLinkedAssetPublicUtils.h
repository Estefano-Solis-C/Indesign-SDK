/*************************************************************************
* ADOBE CONFIDENTIAL
* ___________________
*
* Copyright 2021 Adobe
* All Rights Reserved.
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

#ifndef ICloudLibraryLinkedAssetPublicUtils_h
#define ICloudLibraryLinkedAssetPublicUtils_h

#include "IPMUnknown.h"
#include "ILinkResource.h"

#include "LinksID.h"

class ICloudLibraryLinkedAssetPublicUtils :public IPMUnknown
{
public:

    enum { kDefaultIID = IID_ICLOUDLIBRARYLINKEDASSETPUBLICUTILS };
    
    /** @brief Returns whether or not this utils can be used for querying information.

    @returns true if the utils can used for querying, false otherwise
    */
    virtual bool IsInitialized() = 0;
    
    /** @brief Check whether or not the element represented with the given elementRef exists.

    @param[in] elementRef unique identifier of the linked library element that is queried

    @returns true if element exists, false if element cannot be found
    */
    virtual bool DoesElementExist(const std::string& elementRef) = 0;
    
    /** @brief Check whether the page item link is a cloud library asset.
     
       @param[in] pageItem : The UIDRef of the page item we are interested in.
       @returns true if the given pageItem a cloud library asset, false otherwise.
     */
    virtual bool16 IsCloudLibraryAsset(const UIDRef& pageItem) = 0;

    /** @brief Check whether or not the element represented with the given elementRef is an Adobe Stock element.

    @param[in] elementRef unique identifier of the linked library element that is queried
    @returns true if element is an Adobe Stock element, false if element cannot be found or is not an Adobe Stock element.
    */
    virtual bool IsElementStock(const std::string& elementRef) = 0;

    /** @brief Check whether or not the element represented with the given elementRef is a licensed Adobe Stock element.

    @param[in] elementRef unique identifier of the linked library element that is queried
    @returns true if element is a licensed Adobe Stock element, false if element cannot be found, is not an Adobe Stock element or not licensed.
    */
    virtual bool IsElementStockLicensed(const std::string& elementRef) = 0;
    
    /** @brief Trigger License Stock Image workflow for the Adobe Stock element represented by elementRef.
    Please check whether the element is unlicensed stock asset before calling this api.
    @param[in] elementRef unique identifier of the linked library element for which the stock id is requested
    */
    virtual void LicenseStockElement(const std::string& elementRef) = 0;
    
    /** @brief Check whether or not  uri refers to a cloud asset.
    @param[in] URI of the link resource
    @returns true if the uri refers to a cloud asset. , false otherwise.
    */
    virtual bool16    IsCloudScheme(const URI& uri) = 0;
};
#endif /* ICloudLibraryLinkedAssetPublicUtils_h */

