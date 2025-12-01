//========================================================================================
//  
//  $File$
//  
//  Owner: Adobe Developer Technologies
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

#ifndef __IBPIData_h__
#define __IBPIData_h__

class WideString;
class IPMUnknown;

/**	From SDK sample; data interface that stores a WideString value. A
	persistent implementation BPIDataPersist and a non
	persistent implementation BPIData is provided in this plug-in.

	@ingroup basicpersistinterface
	
*/
class IBPIData : public IPMUnknown
{
public:
	enum	{kDefaultIID = IID_IBPIDATA};

	/** Set the string value. 
	 */
	virtual void	Set(const WideString& value) = 0;

	/** Get the string value.
	 */
	virtual const WideString&	Get() = 0;
};

#endif // __IBPIData_h__

// End, IBPIData.h.



