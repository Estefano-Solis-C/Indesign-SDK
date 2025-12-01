//========================================================================================
//  
//  $File$
//  
//  Owner: jargast
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

#pragma once
#ifndef __CompoundSequenceCmd__
#define __CompoundSequenceCmd__

#include "SequenceCmd.h"


#pragma export on

class PUBLIC_DECL CompoundSequenceCmd : public SequenceCmd
{
	public:
		CompoundSequenceCmd(IPMUnknown *boss);
		virtual ~CompoundSequenceCmd();
		
	protected:
		
		virtual void SetUpTarget();
		virtual void Do();
		virtual PMString *CreateName();
		
};

#pragma export off

#endif		// __COMPOUNDCMD__
