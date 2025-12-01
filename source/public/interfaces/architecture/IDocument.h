//========================================================================================
//  
//  $File$
//  
//  Owner: jack_kirstein
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
#ifndef __IDOCUMENT__
#define __IDOCUMENT__

#include "PMTypes.h"
#include "DocumentID.h"
#include "AsyncWork.h"

class PMString;

/**	
	IID_IDOCUMENT interface, Represents an InDesign publication. Provides the basic file operations.
 */
class IDocument : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_IDOCUMENT };
        enum class saveType {kNativeType=0,kCloudType};
		/** Level of undo support for the open document.
		Full undo support means that we have both undo support for error handling as well as the capacity to have changes go
		on the undo menu, and hence be undoable.
		Partial undo support means that we have just enough support to do error handling. Document changes will not go on the undo
		menu and hence are not undoable.
		*/
		enum UndoSupport {
			kFullUndoSupport,
			kPartialUndoSupport
		};


		/**	Save the document to the user file. May want to make sure that
			IsSaved() below returns kTrue before you call this method
			@note Third Party Developers should use a command (such as kSaveDocCmdBoss) instead. IDocumentCommands contains command generator methods for convenience.
			@see IDocumentCommands.h
		 */
		virtual void 			Save() = 0;
		

		/**	Save the document to the specified file. If there is already a file
			with the same name, it is first deleted. After the call: Leaves the 
			document open and targeted to the saved-to file.
 			@note Third Party Developers should use a command (such as kSaveAsDocCmdBoss) instead. IDocumentCommands contains command generator methods for convenience.
			@see IDocumentCommands.h
			@param destFile saved to file 
		 */
		virtual void 			SaveAs(const IDFile& destFile) = 0;
		

		/**	Save the document to the specified file. If there is already a file
			with the same name, it is first deleted.
			After the call: Leaves the document open and targeted to the current file.
			Further editing will not affect destFile.
 			@note Third Party Developers should use a command (such as kSaveACopyCmdBoss) instead. IDocumentCommands contains command generator methods for convenience.
			@see IDocumentCommands.h
			@param destFile file to save a copy to. 
		 */
		virtual void 			SaveACopy(const IDFile& destFile) = 0;
			

		/**	This doesn't close the document. Do not use this method!
			(only set open flag to kFalse)
 			@note Third Party Developers should use a command (such as kCloseDocCmdBoss) instead. IDocumentCommands contains command generator methods for convenience.
			@see IDocumentCommands.h
		 */
		virtual void			Close() = 0;
			
		/**	Test if the document has ever been saved (not UNTITLEDxx.indd)
			@return if the document has a permanent pub file associated with it 
		 */
		virtual bool16			IsSaved() = 0;
			

		/**	Return if a recovered document
			@return kTrue if the document was recovered.  
		 */
		virtual bool16			IsRecovered() = 0;
			
		/**	Return if a converted document (from previous version or other type)
			@return kTrue if the document was converted.
  		 */
		virtual bool16			IsConverted() = 0;

		/**	Set converted flag
		 */
		virtual void			SetConverted() = 0;
			

		/**	Return if a ready only dccument
			@return kTrue if the document was opened read-only.  
		 */
		virtual bool16			IsReadOnly() = 0;
		
		/** Return if the doc was opened in a missing plug-in state
			@return kTrue if the document was opened in a missing plug-in state.
		*/
		virtual bool16 			IsMissingPlugins() = 0;
			

		/**	Set missing plugins flag
		 */
		virtual void			SetMissingPlugins() = 0;
			
		/**	Return if the document has been modified since the last save or open
			@return kTrue if the document has been modified since the last save or open. 
		 */
		virtual bool16			IsModified() = 0;
			

		/**	Return the name associated with the document. The name is used for
			the default window title, and for the default "save-to" file the first
			time it is saved.
			Do not use the document's name to make assumptions about the
			name of the actual pub file in the file system.
			@param name [OUT] Document name to path out 
		 */
		virtual void			GetName(PMString& name) const = 0;
		
		/**	Set the document name. See GetName() above for more info.
			@note Third Party Developers should use a command (such as kSetDocNameCmdBoss) instead.
			@see kSetDocNameCmdBoss
			@param name document's new name 
		 */
		virtual void			SetName(const PMString& name) = 0;


		/**	Get document level work space
			@return UIDRef of document work space
		 */
		virtual UIDRef 		GetDocWorkSpace() const = 0;			

		virtual UndoSupport GetUndoSupport() const = 0;

		/**	Get number used for next untitled-? document
			@return int32 number for next untitled document
		 */
		virtual int32 		GetUntitledCount() const = 0;

		/**	Set number used for next untitled-? document
			@param int32 number for next untitled document
		 */
		virtual void 		SetUntitledCount(int32 untitledCount) = 0;
    
        /**    Check the type of document this is, cloud or native
            @return bool16 kTrue if CloudDocument, kFalse for native
         */
        virtual bool16      IsCloudDoc() const = 0;

		/**
		******* Internal use only. *******************
		** 
		** Notify the document that an asynchronous job is queued that
		** accesses this document
		** 
		** @param packetId packet id for the enqueued job
		*/
		virtual void		NotifyDocBasedAsyncJobQueued(AsyncWorkPacketID packetId) = 0;
        /**
        ******* Internal use only. *******************
        **
        ** This is used to make system aware that there is backing file for this doc
        **
        */
        virtual void        SetAsCloudDoc() = 0;

        /**
        **
        ** Clouds docs have unique UIRs from which we can uniquely identify them\
        ** These are setter and getter for cloud assetRef associated with a doc 
        */
        virtual void        SetAssetRefForThisDoc(const std::string & assetRef) = 0;
        virtual std::string GetAssetRefForThisDoc() const = 0;
        /**
        **
        ** Clouds docs can be conflicted since they can be edited from multiple machines\
        ** These are setter and getter for cloud doc status
        */
		/** 
		******* Internal use only. *******************
		**  Tells whether particular document has a conflict or not  
		**  @return kTrue if the document has a conflict.
		**/
        virtual bool IsDocumentConflicted() const =0;
        /** 
		******* Internal use only. *******************
		** 	Sets status as conflicted for document. 
		** 	@param conflicted IN bool value for the conflict status of the document
		**/
        virtual void SetIsDocumentConflicted(const bool conflicted) =0;
        /** 
	    ******* Internal use only. *******************
	   	** 	Save As for cloud documents.
		** 	@param path IN For IDS only - path of document where to save
		** 	@param docPathValue IN path of file on cloud. 
		**/	
        virtual void SaveAsCloudDoc(const IDFile& path ,const std::string& docPathValue) =0;
	    /** 
		******* Internal use only. *******************
		** 	Incremental save for cloud document.
		**/	
        virtual void SaveCloudDoc()=0;
		/** 
		******* Internal use only. *******************
		** 	Checks whether the document is synced atleast once
		** 	@return kTrue if the document is synced. 
		**/	
        virtual bool IsDocumentSyncedOnce() const =0;
		/** 
		******* Internal use only. *******************
		** 	Sets the status of the document synced
		** 	@param syncedonce IN sets the whether document is synced once or not.
		**/	
        virtual void SetIsDocumentSynced(const bool syncedonce)=0;
		/** 
		******* Internal use only. *******************
		** 	Saves Cloud Document (.inddc) as a native document (.indd)
		** 	@param destFile IN path to save the native file.
		**/	
        virtual void SaveCloudDocAsNative(const IDFile& destFile)=0;

};

#endif		// __IDOCUMENT__
