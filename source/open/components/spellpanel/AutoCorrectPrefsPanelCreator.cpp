//========================================================================================
//  
//  $File$
//  
//  Owner: Heath Horton
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
//  Proj:	AutoCorrectPanel
//  
//========================================================================================

#include "VCPlugInHeaders.h"

#include "IControlView.h"

#include "CmdUtils.h"
#include "CoreResTypes.h"
#include "cpanelcreator.h"

#include "SpellPanelID.h"

class AutoCorrectPrefsPanelCreator : public CPanelCreator
{
public:
	// ----- Initialization -----
	
						AutoCorrectPrefsPanelCreator(IPMUnknown *boss);
	virtual				~AutoCorrectPrefsPanelCreator();
	
	// ----- Dialog protocol -----

	virtual	RsrcID		GetPanelRsrcID() const;
};


CREATE_PMINTERFACE(AutoCorrectPrefsPanelCreator, kAutoCorrectPrefsPanelCreatorImpl)

AutoCorrectPrefsPanelCreator::AutoCorrectPrefsPanelCreator(IPMUnknown *boss) :
	CPanelCreator(boss)
{
}

AutoCorrectPrefsPanelCreator::~AutoCorrectPrefsPanelCreator()
{
}

RsrcID AutoCorrectPrefsPanelCreator::GetPanelRsrcID() const
{
	RsrcID	rsrcID = kAutoCorrectPrefsDialogCreatorRsrcID;

	return rsrcID;
}

