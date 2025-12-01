//========================================================================================
//  
//  $File$
//  
//  Owner: Robin_Briggs
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

#include "ClassFactory.h"
#include "IObjectModel.h"
#include "ISession.h"
#include "InterfacePtr.h"

ClassFactory *ClassFactory::gFirstClass = nil;

ClassFactory :: ClassFactory(ClassID id, BossConstructor classFact) :
	fID(id),
	fFactory(classFact),
	fNext(gFirstClass)
{
	gFirstClass = this;
}


void ClassFactory :: InstallClasses(PluginID ownerComponent)
{
	InterfacePtr<IObjectModel> om(GetExecutionContextSession(), IID_IOBJECTMODEL);
	for (ClassFactory *theClass = gFirstClass; theClass != nil; theClass = theClass->fNext)	{
		if (theClass->GetFactory() != nil)
			om->AddClassFactory(ownerComponent, theClass->GetClassID(), theClass->GetFactory());
		}
}


