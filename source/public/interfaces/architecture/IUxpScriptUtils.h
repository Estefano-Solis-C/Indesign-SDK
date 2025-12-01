/*************************************************************************
 * ADOBE CONFIDENTIAL
 * ___________________
 *
 * Copyright 2022 Adobe
 * All Rights Reserved.
 *
 * NOTICE: All information contained herein is, and remains
 * the property of Adobe and its suppliers, if any. The intellectual
 * and technical concepts contained herein are proprietary to Adobe
 * and its suppliers and are protected by all applicable intellectual
 * property laws, including trade secret and copyright laws.
 * Dissemination of this information or reproduction of this material
 * is strictly forbidden unless prior written permission is obtained
 * from Adobe.
**************************************************************************/

#pragma once
#ifndef __IUxpScriptUtils__
#define __IUxpScriptUtils__

#include "IPMUnknown.h"
#include "JavaScriptID.h"
#include "IScriptRunner.h"
#include "Utils.h"

class IUxpScriptUtils : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IUXPSCRIPTUTILS } ;

	/**
		Create a new engine, if none exists with this name
		@param engineName is the name of the engine to create
		@param isResettable whether the engine should be reset after every script
		@param isDebuggable whether the engine should be visible to the ESTK IDE
		@return kSuccess if a new engine is created, kItemWithThisNameAlreadyExistsError if an engine
			with this name already exists, or kFailure if no engine was created
	*/
	virtual ErrorCode	CreateUxpScriptEngine( const PMString& engineName, bool16 isResettable, bool16 isDebuggable ) const = 0 ;

	/**
		Delete an engine by name
		@param engineName is the name of the engine to delete
		@return kSuccess if an engine with that name was found and deleted, kObjectDeletedError if no
			engine with that name was found, or kFailure if an engine was found but not deleted
	*/
	virtual ErrorCode	DeleteUxpScriptEngine( const PMString& engineName ) const = 0 ;

	/**
		Execute a script file in a particular engine. Creates the engine if it doesn't already exist.
		@param engineName is the name of the engine to use
		@param idFile the script file to execute IN
		@param showErrorAlert if an error occurs whether the runner should display an alert with the error IN
		@param invokeDebugger whether to load script into debugger for execution IN
		@return is kSuccess or an error code
	*/
	virtual ErrorCode	RunFileInEngine( const PMString& engineName, const IDFile& idFile, 
											bool16 showErrorAlert = kTrue, bool16 invokeDebugger = kFalse ) const = 0 ;

	/**
		Execute a script in a particular engine. Creates the engine if it doesn't already exist.
		@param engineName is the name of the engine to use
		@param scriptText the script text to execute IN
		@param showErrorAlert if an error occurs whether the runner should display an alert with the error IN
		@param invokeDebugger whether to load script into debugger for execution IN
		@return is kSuccess or an error code
	*/
	virtual ErrorCode	RunScriptInEngine( const PMString& engineName, const PMString& scriptText, 
											bool16 showErrorAlert = kTrue, bool16 invokeDebugger = kFalse ) const = 0 ;

	/**
		Execute a script in a particular engine. Creates the engine if it doesn't already exist.
		@param engineName is the name of the engine to use IN
		@param script is the script to execute (may be a String, a File, or a Function) IN
		@param arguments is used to pass arguments to the script IN
		@param result is the return value OUT
		@param errorString is the error string OUT
		@param showErrorAlert if kTrue show an error alert if an error occurs IN
		@param invokeDebugger indicates whether to load script into debugger for execution IN
		@param undoMode indicates how to handle undo for document changes made by the script IN
		@param undoName is the name for the undo step in single undo step mode IN
		@return kSuccess or an error
	*/
	virtual ErrorCode	RunScriptInEngine( const PMString& engineName, const ScriptData& script, 
											const ScriptRecordData& arguments, ScriptData& result, PMString& errorString, 
											bool16 showErrorAlert = kTrue, bool16 invokeDebugger = kFalse, 
											const RunScriptParams::UndoMode undoMode = RunScriptParams::kUndoScriptRequest, 
											const PMString& undoName = PMString() ) const = 0 ;

	
	/**
	 INTERNAL USE ONLY
	 Execute a script in a particular engine. Creates the engine if it doesn't already exist.
	 @param engineName is the name of the engine to use IN
	 @param script is the script to execute (may be a String, a File, or a Function) IN
	 @param evalStringAsFilePath if kTrue evaluate if the script string is a file path IN
	 @param arguments is used to pass arguments to the script IN
	 @param result is the return value OUT
	 @param errorString is the error string OUT
	 @param showErrorAlert if kTrue show an error alert if an error occurs IN
	 @param invokeDebugger indicates whether to load script into debugger for execution IN
	 @param undoMode indicates how to handle undo for document changes made by the script IN
	 @param undoName is the name for the undo step in single undo step mode IN
	 @return kSuccess or an error
	 */
	virtual ErrorCode	RunScriptInEngine( const PMString& engineName, const ScriptData& script, bool16 evalStringAsFilePath,
										  const ScriptRecordData& arguments, ScriptData& result, PMString& errorString,
										  bool16 showErrorAlert = kTrue, bool16 invokeDebugger = kFalse,
										  const RunScriptParams::UndoMode undoMode = RunScriptParams::kUndoScriptRequest,
										  const PMString& undoName = PMString() ) const = 0 ;
} ;

#endif
