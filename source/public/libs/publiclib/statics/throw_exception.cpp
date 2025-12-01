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
//  
//  ADOBE CONFIDENTIAL
//  
//  throw_exception is called by boost when it needs to throw an exception and exception handling is not defined for the project
//  
//========================================================================================

#include <boost/throw_exception.hpp>

#ifdef BOOST_NO_EXCEPTIONS

void boost::throw_exception(std::exception const & /* e */)
{
	ASSERT_FAIL("Boost is throwing an exception! Do you need to enable exceptions in your project? InDesign will quit now.");
	std::abort();
}

#endif