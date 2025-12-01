//========================================================================================
//  
//  $File$
//  
//  Owner: Peter Boctor
//  
//  $Author$
//  
//  $DateTime$
//  
//  $Revision$
//  
//  $Change$
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#ifndef __ICorba_h__
#define __ICorba_h__

#include "CorbaUtilsID.h"

#undef nil
#include <omniORB4/CORBA.h>
#define nil 0

//========================================================================================
// CLASS ICorba
//========================================================================================

class ICorba : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ICORBA };
	
	virtual void Initialize(CORBA::ORB_ptr orb, PortableServer::POA_ptr rootPOA) = 0;
	
	virtual CORBA::ORB_ptr GetOrb() const = 0;
	virtual PortableServer::POA_ptr GetRootPOA() const = 0;
};

#endif
