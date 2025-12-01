//========================================================================================
//  
//  $File$
//  
//  Owner: Robin Briggs
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

#ifndef __PluginMetaData__
#define __PluginMetaData__

#include "IPMStream.h"

class PluginMetadata
{
	public:
		PluginMetadata() :
			fCompanyName(),
			fURL(),
			fMissingAlertText()
			{}
		PluginMetadata(const PMString &companyName, const PMString& url, const PMString& alertText) :
			fCompanyName(companyName),
			fURL(url),
			fMissingAlertText(alertText)
			{}
		PluginMetadata(const PluginMetadata& other) :
			fCompanyName(other.fCompanyName),
			fURL(other.fURL),
			fMissingAlertText(other.fMissingAlertText)
			{}
		PMString GetCompanyName() const
			{ return fCompanyName; }
		PMString GetURL() const
			{ return fURL; }
		PMString GetMissingAlertText() const
			{ return fMissingAlertText; }
	
		void ReadWrite(IPMStream *s)
			{
				fCompanyName.ReadWrite(s);
				fURL.ReadWrite(s);
				fMissingAlertText.ReadWrite(s);
			}
	private:
		PMString fCompanyName;
		PMString fURL;
		PMString fMissingAlertText;
};


#endif //__PluginMetaData__
