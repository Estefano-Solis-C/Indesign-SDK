//========================================================================================
//  
//  $File$
//  
//  Owner: Habib Khalfallah
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
#ifndef __DBChangesMonitorDisabler__
#define __DBChangesMonitorDisabler__

#pragma export on

/** Private; for internal use only.
*/
class PUBLIC_DECL DBChangesMonitorDisabler
{
public:
	DBChangesMonitorDisabler(IDataBase* db);
	DBChangesMonitorDisabler(const DBChangesMonitorDisabler& copy);
	DBChangesMonitorDisabler & operator = (const DBChangesMonitorDisabler& copy);
	~DBChangesMonitorDisabler();
private:
		bool fBeforeState;
		InterfacePtr<IPMUnknown> fDBMonitor;
};

#endif
