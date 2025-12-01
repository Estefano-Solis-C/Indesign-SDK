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

#include "VCWidgetHeaders.h"
#include "FileNodeID.h"

#include "IPMStream.h"

//----------------------------------------------------------------------------------------
// FileNodeID::Compare
//----------------------------------------------------------------------------------------
int32 FileNodeID::Compare(const NodeIDClass* NodeID) const
{
	const FileNodeID* fileNode = static_cast<const FileNodeID*>(NodeID);
	return (const_cast<FileNodeID*>(this)->fPathListString.Compare(kFalse, fileNode->GetPathItemsString()));
}

//----------------------------------------------------------------------------------------
// FileNodeID::Copy
//----------------------------------------------------------------------------------------
NodeIDClass* FileNodeID::Clone() const
{
	return new FileNodeID(this->GetPathItemsString());
}

//----------------------------------------------------------------------------------------
// FileNodeID::Read
//----------------------------------------------------------------------------------------
void FileNodeID::Read(IPMStream* stream)
{
	fPathListString.ReadWrite(stream);
}

//----------------------------------------------------------------------------------------
// FileNodeID::Write
//----------------------------------------------------------------------------------------
void FileNodeID::Write(IPMStream* stream) const
{
	(const_cast<FileNodeID*>(this)->fPathListString).ReadWrite(stream);
}