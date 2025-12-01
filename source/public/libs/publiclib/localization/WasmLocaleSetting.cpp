/*************************************************************************
 * ADOBE CONFIDENTIAL
 * ___________________
 *
 * Copyright 2023 Adobe
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

#include "VCPublicHeaders.h"

#include "WasmLocaleSetting.h"
#include "PMLocaleIds.h"

#include "IPMStream.h"

#include "BuildNumber.h"


//========================================================================================
// METHODS WasmLocaleSetting
//========================================================================================
// ts_gLocaleSetting is modified only from within Initialize & GetSystemScript & that too only
// on the 1st call. Subsequent calls & access from other functions are read-only. The 1st call
// to Initialize & GetSystemScript happen at start-up, hence ts_gLocaleSetting would be accessed
// by threads in a read-only way.
static WasmLocaleSetting ts_gLocaleSetting;

//----------------------------------------------------------------------------------------
// WasmLocaleSetting::WasmLocaleSetting
//----------------------------------------------------------------------------------------

WasmLocaleSetting::WasmLocaleSetting() :
	fInitialized(kFalse),
	fLocale(k_enUS),
	fSystemScript(kCTDontKnowScript)
{
}

//----------------------------------------------------------------------------------------
// WasmLocaleSetting::SetLocale
//----------------------------------------------------------------------------------------

void WasmLocaleSetting::SetLocale(const PMLocaleId& locale)
{
	ts_gLocaleSetting.fLocale = locale;
	ts_gLocaleSetting.fInitialized = kTrue;
}

//----------------------------------------------------------------------------------------
// WasmLocaleSetting::Initialize
//----------------------------------------------------------------------------------------
void WasmLocaleSetting::Initialize()
{
	ASSERT (IDThreading::IsMainThreadDomain ());
	if (!ts_gLocaleSetting.fInitialized)
	{
		ts_gLocaleSetting.fInitialized = kTrue;
		ASSERT_UNIMPLEMENTED();
	}
}

//----------------------------------------------------------------------------------------
// WasmLocaleSetting::GetLocale
//----------------------------------------------------------------------------------------

PMLocaleId WasmLocaleSetting::GetLocale()
{
	if (!ts_gLocaleSetting.fInitialized)
		WasmLocaleSetting::Initialize();

	return ts_gLocaleSetting.fLocale;
}

//----------------------------------------------------------------------------------------
// WasmLocaleSetting::GetSystemLocale
//----------------------------------------------------------------------------------------

PMLocaleId WasmLocaleSetting::GetSystemLocale()
{
	ASSERT_FAIL("WasmLocaleSetting::GetSystemLocale: System locale is not defined for WASM. Is it expected? Revisit.");
	return ts_gLocaleSetting.fLocale;
}

//---------------------------------------------------------------------------------------
// WasmLocaleSetting::GetSystemScript
//----------------------------------------------------------------------------------------

int16 WasmLocaleSetting::GetSystemScript()
{
	ASSERT_FAIL("WasmLocaleSetting::GetSystemScript:: System script is not defined for WASM. Is it expected? Revisit.");
	return ts_gLocaleSetting.fSystemScript;
}
