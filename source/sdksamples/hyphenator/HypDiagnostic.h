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

#ifndef __HypDiagnostic__
#define __HypDiagnostic__

/** Diagnostic trace utility.

	@ingroup hyphenator

	
 */
class HypDiagnostic {
public:
	/** Constructor.
		@param category of trace to direct output at.
	 */
	HypDiagnostic(const char* category) : fCategory(category) {}

	/** Dump diagnostic trace on the given word.
		@param hyphWord Hyphenated word to be traced.
	 */
	void TraceHyphenatedWord(const IHyphenatedWord& hyphWord);
private:
	const char* fCategory;
};

#endif // __HypDiagnostic__

