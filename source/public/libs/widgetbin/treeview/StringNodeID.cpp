//========================================================================================
//  
//  $File$
//  
//  Owner: Matt Joss
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

#include "VCWidgetHeaders.h"
#include "StringNodeID.h"

#include "IPMStream.h"

//----------------------------------------------------------------------------------------
// StringNodeID::Compare
//----------------------------------------------------------------------------------------
int32 StringNodeID::Compare(const NodeIDClass* NodeID) const
{

	const StringNodeID* otherNode = static_cast<const StringNodeID*>(NodeID);
	return fString.Compare(kTrue, otherNode->GetString());
}

//----------------------------------------------------------------------------------------
// StringNodeID::Copy
//----------------------------------------------------------------------------------------
NodeIDClass* StringNodeID::Clone() const
{
	return new StringNodeID(this->GetString());
}

//----------------------------------------------------------------------------------------
// StringNodeID::Read
//----------------------------------------------------------------------------------------
void StringNodeID::Read(IPMStream* stream)
{
	fString.ReadWrite(stream);
}

//----------------------------------------------------------------------------------------
// StringNodeID::Write
//----------------------------------------------------------------------------------------
void StringNodeID::Write(IPMStream* stream) const
{
	(const_cast<StringNodeID*>(this)->fString).ReadWrite(stream);
}

//----------------------------------------------------------------------------------------
// StringNodeID::GetDescription
//----------------------------------------------------------------------------------------
PMString StringNodeID::GetDescription() const
{
	return GetString();
}