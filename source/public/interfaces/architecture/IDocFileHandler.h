//========================================================================================
//  
//  $File$
//  
//  Owner: Roey Horns
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
//  Purpose:	Interface for the handler of file related actions for an open document.
//  
//========================================================================================

#pragma once
#ifndef __IDOCFILEHANDLER__
#define __IDOCFILEHANDLER__

#include "DocumentID.h"
#include "IPMUnknown.h"


class IDocFileHandler : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_IDOCFILEHANDLER };
		// To Identify multiple save/open workflows for CDP launch. 
        enum SaveType{
            //To Make it unified with the CloseAll functional and UXPCdoClientHelper functionalite we have taken default as 0
            //The Range of enums here can range till 1000
            kNone=0,         // Default --> clear prefs
            kClosing,        // single doc is closing
            kSaving,         // single doc is saving
            kAppQuit,        // on application quit
            kSaveAndClose,   //single doc is saving while closing.
            kSaveAndCloseAll,//multiple doc gets saved while close all is called
            kSaveViaCDP,     
            kOpenAndLoad,     //loading data from a document on open cloud doc
            kSaveAsCopy,      // save a copy of the file
            kSaveAsCloudDoc,  // save as of a cloud document
            kSaveAsNative     // save as native document.
        };
        
        //Depicts save dialog button pressed state i.e cancel/save/default
        enum SaveDialogButtonState {
            kNoButtonPressed = 0,
            kSavePressed = 1,
            kCancelPressed = 2
        };
		// Should return kTrue if the document is modified or unsaved.
		virtual bool8 CanSave(const UIDRef& doc) = 0;		
		// Save the document.
		// If it is unsaved Save should call SaveAs
		virtual void Save(const UIDRef& doc, UIFlags uiFlags = kFullUI) = 0;

		// Can save as.
		virtual bool8 CanSaveAs(const UIDRef& doc) = 0;
		// Save the doc as destFile.
		// If destFile is nil SaveAs should ask the user (if uiFlags allow) or fail.
		// The asStationery flag should be considered as Mac only and will only be honored
		// if destFile is not nil.
		virtual void SaveAs(const UIDRef& doc, const IDFile *destFile = nil,
												UIFlags uiFlags = kFullUI,
												bool8 asStationery = kFalse,
												FileTypeInfoID fileTypeID = kInvalidFileTypeInfoID,SaveType saveType = kSaveAsNative) = 0;

		// Can save a copy.
		virtual bool8 CanSaveACopy(const UIDRef& doc) = 0;
		// Save a copy of the doc as destFile.
		// If destFile is nil SaveACopy should ask the user (if uiFlags allow) or fail.
		// The asStationery flag should be considered as Mac only and will only be honored
		// if destFile is not nil.
		virtual void SaveACopy(const UIDRef& doc, const IDFile *destFile = nil,
												UIFlags uiFlags = kFullUI,
												bool8 asStationery = kFalse,
												FileTypeInfoID fileTypeID = kInvalidFileTypeInfoID) = 0;

		// Can revert should return kFalse if the doc is unmodified or unsaved.
		virtual bool8 CanRevert(const UIDRef& doc) = 0;
		// Revert should ask the user (if uiFlags allow).
		virtual void Revert(const UIDRef& doc, UIFlags uiFlags = kFullUI) = 0;

		// Can close.
		virtual bool8 CanClose(const UIDRef& doc) = 0;
		// Close should close any open window and finaly the document.
		// If uiFlags allow the user should get a chance to save a modified document.

		enum CloseCmdMode { kProcess, kSchedule, kPreProcessAndProcess };
		virtual void Close(const UIDRef& doc, UIFlags uiFlags = kFullUI, bool8 allowCancel = kTrue, CloseCmdMode cmdMode = kSchedule) = 0;


		// Methods implemented in a standard way by the default DocFileHandler. Other handlers
		// should call these to insure consistent behavior.

		// Check to see if the file is dirty on close and, if so, ask the user whether
		// it should be saved.
		enum CloseOptions { kSave, kDontSave, kCancel, kSaveVersion, kJustSaveVersion, kCacelAndLaunchCDP };
		virtual CloseOptions CheckOnClose(const UIDRef& doc, UIFlags uiFlags, bool8 allowCancel) = 0;
		// Get the appropriate default SaveAs file name.
		virtual void GetCopyDefaultName(const UIDRef& doc, IDFile *name, bool16& useSystemDefaultDir) = 0;

		// FOR INTERNAL USE ONLY! Very Similar to SaveAs method.
		// Instead of destfile, pass in a filename, that will be shown pre-populated in the SaveAs dialog.
		virtual void SaveAs2(const UIDRef& doc, const PMString& fileName, UIFlags uiFlags = kFullUI, 
			bool8 asStationery = kFalse, FileTypeInfoID fileTypeID = kInvalidFileTypeInfoID) = 0;
		// Saves the document as a cloud doc (.inddc) 
		// assetPath is the path of the asset in adobe cloud. ex: /Cloud-content/*
        virtual void SaveAsCloudDoc(const UIDRef& doc, const std::string & assetPath) = 0;

};

#endif //__IDOCFILEHANDLER__
