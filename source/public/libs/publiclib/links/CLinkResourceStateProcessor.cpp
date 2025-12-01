//========================================================================================
//  
//  $File$
//  
//  Owner: Michael Easter
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

#include "VCPublicHeaders.h"
#include "CLinkResourceStateProcessor.h"

#include "LinkResourceStatePacket.h"


//========================================================================================
//
// CLinkResourceStateProcessor Public Implementation
//
//========================================================================================

//========================================================================================
// Destructor
//========================================================================================
CLinkResourceStateProcessor::~CLinkResourceStateProcessor()
{
}

//========================================================================================
// CLinkResourceStateProcessor::ProcessPacket
//========================================================================================
void CLinkResourceStateProcessor::ProcessPacket(AsyncWorkPacket* packet)
{
	// force the packet to be of the type it should be
	LinkResourceStatePacket* resourcePacket = static_cast<LinkResourceStatePacket*>(packet);

	UpdateState(*resourcePacket);
}
