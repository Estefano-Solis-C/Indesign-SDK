//========================================================================================
//  
//  $File$
//  
//  Owner: Sanyam Jain
//  
//  $Author$
//  
//  $DateTime$
//  
//  $Revision$
//  
//  $Change$
//  
//  ADOBE CONFIDENTIAL
//  
//  Copyright 2019 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  All information contained herein is, and remains
//  the property of Adobe Systems Incorporated and its suppliers,
//  if any.  The intellectual and technical concepts contained
//  herein are proprietary to Adobe Systems Incorporated and its
//  suppliers and may be covered by U.S. and Foreign Patents,
//  patents in process, and are protected by trade secret or copyright law.
//  Dissemination of this information or reproduction of this material
//  is strictly forbidden unless prior written permission is obtained
//  from Adobe Systems Incorporated.
//  
//  
//========================================================================================

#ifndef __ID_AUTO_PTR__
#define __ID_AUTO_PTR__

#if USE_STD_AUTO_PTR
#include <memory>
#else
#include "Hacked_AutoPtr.h"
#ifndef __ODFRC__
#include <sys/types.h>
#include <memory>
#endif
#endif

#ifdef __cplusplus
namespace indesign
{
#if USE_STD_AUTO_PTR
    template <typename T>
    using autoptr = std::auto_ptr<T>;
#else
    template <typename T>
    using autoptr = std::shared_ptr<T>;
#endif
}

#endif

#endif // __ID_AUTO_PTR__

