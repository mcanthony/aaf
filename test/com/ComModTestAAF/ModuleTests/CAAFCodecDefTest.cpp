// @doc INTERNAL
// @com This file implements the module test for CAAFCodecDef
//=---------------------------------------------------------------------=
//
// The contents of this file are subject to the AAF SDK Public
// Source License Agreement (the "License"); You may not use this file
// except in compliance with the License.  The License is available in
// AAFSDKPSL.TXT, or you may obtain a copy of the License from the AAF
// Association or its successor.
// 
// Software distributed under the License is distributed on an "AS IS"
// basis, WITHOUT WARRANTY OF ANY KIND, either express or implied.  See
// the License for the specific language governing rights and limitations
// under the License.
// 
// The Original Code of this file is Copyright 1998-2001, Licensor of the
// AAF Association.
// 
// The Initial Developer of the Original Code of this file and the
// Licensor of the AAF Association is Avid Technology.
// All rights reserved.
//
//=---------------------------------------------------------------------=

#include "AAF.h"

#include <iostream>
using namespace std;
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "AAFClassDefUIDs.h"
#include "AAFStoredObjectIDs.h"
#include "AAFResult.h"
#include "ModuleTest.h"
#include "AAFDataDefs.h"
#include "AAFDefUIDs.h"
#include "AAFCodecDefs.h"

#include "CAAFBuiltinDefs.h"

// Cross-platform utility to delete a file.
static void RemoveTestFile(const wchar_t* pFileName)
{
  const size_t kMaxFileName = 512;
  char cFileName[kMaxFileName];

  size_t status = wcstombs(cFileName, pFileName, kMaxFileName);
  if (status != (size_t)-1)
  { // delete the file.
    remove(cFileName);
  }
}

// convenient error handlers.
inline void checkResult(HRESULT r)
{
  if (FAILED(r))
    throw r;
}
inline void checkExpression(bool expression, HRESULT r)
{
  if (!expression)
    throw r;
}

// Function to compare COM interface pointers, taken from 
// CAAFTypeDefFixedArrayTest.cpp.
template <class T1, class T2>
aafBoolean_t  AreUnksSame(T1& cls1, T2& cls2)
{
	IAAFSmartPointer<IUnknown>    spUnk1, spUnk2;
	
	checkResult(cls1->QueryInterface(IID_IUnknown, (void **)&spUnk1));
	checkResult(cls2->QueryInterface(IID_IUnknown, (void **)&spUnk2));
	
	if (spUnk1 == spUnk2)
		return kAAFTrue;
	else
		return kAAFFalse;
}

static HRESULT OpenAAFFile(aafWChar*			pFileName,
						   aafMediaOpenMode_t	mode,
						   IAAFFile**			ppFile,
						   IAAFHeader**			ppHeader)
{
	aafProductIdentification_t	ProductInfo;
	HRESULT						hr = AAFRESULT_SUCCESS;

	aafProductVersion_t v;
	v.major = 1;
	v.minor = 0;
	v.tertiary = 0;
	v.patchLevel = 0;
	v.type = kAAFVersionUnknown;
	ProductInfo.companyName = L"AAF Developers Desk";
	ProductInfo.productName = L"AAFCodecDef Test";
	ProductInfo.productVersion = &v;
	ProductInfo.productVersionString = NULL;
	ProductInfo.productID = UnitTestProductID;
	ProductInfo.platform = NULL;

	*ppFile = NULL;

	if(mode == kAAFMediaOpenAppend)
		hr = AAFFileOpenNewModify(pFileName, 0, &ProductInfo, ppFile);
	else
		hr = AAFFileOpenExistingRead(pFileName, 0, ppFile);

	if (FAILED(hr))
	{
		if (*ppFile)
		{
			(*ppFile)->Release();
			*ppFile = NULL;
		}
		return hr;
	}
  
  	hr = (*ppFile)->GetHeader(ppHeader);
	if (FAILED(hr))
	{
		(*ppFile)->Release();
		*ppFile = NULL;
		return hr;
	}
 	
	return hr;
}

static HRESULT CreateAAFFile(aafWChar * pFileName)
{
	IAAFFile*		pFile = NULL;
	IAAFHeader *        pHeader = NULL;
	IAAFDictionary*  pDictionary = NULL;
	IAAFCodecDef*	pPlugDef = NULL;
	IAAFDataDef		*pDataDef = NULL;
	IAAFClassDef	*classDef = NULL;
	IAAFClassDef *pWaveClassDef=0,*pReturnedClassDef=0;
	bool bFileOpen = false;
	HRESULT			hr = S_OK;
	aafUID_t		uid;

	try
	{
		// Remove the previous test file if any.
		RemoveTestFile(pFileName);


		// Create the AAF file
		checkResult(OpenAAFFile(pFileName, kAAFMediaOpenAppend, /*&pSession,*/ &pFile, &pHeader));
		bFileOpen = true;

		// Get the AAF Dictionary so that we can create valid AAF objects.
		checkResult(pHeader->GetDictionary(&pDictionary));
		CAAFBuiltinDefs defs (pDictionary);
    
		checkResult(defs.cdCodecDef()->
					CreateInstance(IID_IAAFCodecDef,
								   (IUnknown **)&pPlugDef));
    
		uid = kAAFCodecWAVE;
		checkResult(pPlugDef->Initialize (uid, L"TestCodec", L"TestCodecDescription"));

		checkResult(pPlugDef->AddEssenceKind (defs.ddMatte()));
		checkResult(pDictionary->RegisterCodecDef(pPlugDef));
		uid = kAAFClassID_WAVEDescriptor;
		checkResult(pDictionary->LookupClassDef(uid, &classDef));
		checkResult(pPlugDef->SetFileDescriptorClass (classDef));

		// Make sure GetFileDescriptorClass() returns correct value
		aafUID_t uid = kAAFClassID_WAVEDescriptor;
		checkResult(pDictionary->LookupClassDef(uid, &pWaveClassDef));
		checkResult(pPlugDef->GetFileDescriptorClass(&pReturnedClassDef));
		// COM interface pointers pReturnedClassDef and pWaveClassDef should be 
		// equal
		checkExpression(AreUnksSame(pReturnedClassDef,pWaveClassDef)==kAAFTrue,
			AAFRESULT_TEST_FAILED);
	}
	catch (HRESULT& rResult)
	{
		hr = rResult;
	}


  // Cleanup and return
  if (pReturnedClassDef)
    pReturnedClassDef->Release();

  if (pWaveClassDef)
    pWaveClassDef->Release();

  if (classDef)
    classDef->Release();

  if (pDataDef)
    pDataDef->Release();

  if (pPlugDef)
    pPlugDef->Release();

  if (pDictionary)
    pDictionary->Release();

  if (pHeader)
    pHeader->Release();
      
  if (pFile)
  {  // Close file
    if (bFileOpen)
	  {
		  pFile->Save();
		  pFile->Close();
	  }
    pFile->Release();
  }

  return hr;
}

static HRESULT ReadAAFFile(aafWChar* pFileName)
{
	IAAFFile*				pFile = NULL;
	IAAFHeader*				pHeader = NULL;
	IAAFDictionary*			 pDictionary = NULL;
	IAAFCodecDef			*pCodec = NULL;
	IAAFClassDef *pWaveClassDef=0,*pReturnedClassDef=0;
	IAAFDataDef				*pDataDef = NULL;
	IEnumAAFCodecFlavours	*pEnum = NULL;
	bool					bFileOpen = false;
	aafBool					testResult;
	aafUID_t				codecID = kAAFCodecWAVE;
	aafUID_t				readFlavour, checkFlavour = kAAFNilCodecFlavour;
	HRESULT					hr = S_OK;

	try
	{
	  // Open the AAF file
	  checkResult(OpenAAFFile(pFileName, kAAFMediaOpenReadOnly, &pFile, &pHeader));
		bFileOpen = true;

		checkResult(pHeader->GetDictionary(&pDictionary));
		CAAFBuiltinDefs defs (pDictionary);
		checkResult(pDictionary->LookupCodecDef(codecID, &pCodec));

		checkResult(pCodec->IsEssenceKindSupported (defs.ddMatte(), &testResult));
		checkExpression (testResult == kAAFTrue, AAFRESULT_TEST_FAILED);
		checkResult(pCodec->IsEssenceKindSupported (defs.ddPicture(), &testResult));
		checkExpression (testResult == kAAFFalse, AAFRESULT_TEST_FAILED);
		checkResult(pCodec->EnumCodecFlavours (&pEnum));
		checkResult(pEnum->NextOne (&readFlavour));
		checkExpression (memcmp(&readFlavour, &checkFlavour, sizeof(checkFlavour)) == 0,
						 AAFRESULT_TEST_FAILED);
		checkResult(pCodec->AreThereFlavours (&testResult));
		checkExpression (kAAFFalse == testResult,
						 AAFRESULT_TEST_FAILED);
		aafUID_t uid = kAAFClassID_WAVEDescriptor;
		checkResult(pDictionary->LookupClassDef(uid, &pWaveClassDef));
		checkResult(pCodec->GetFileDescriptorClass(&pReturnedClassDef));
		// COM interface pointers pReturnedClassDef and pWaveClassDef should be 
		// equal
		checkExpression(AreUnksSame(pReturnedClassDef,pWaveClassDef)==kAAFTrue,
			AAFRESULT_TEST_FAILED);
	}
	catch (HRESULT& rResult)
	{
		hr = rResult;
	}

	// Cleanup and return
  if (pReturnedClassDef)
    pReturnedClassDef->Release();

  if (pWaveClassDef)
    pWaveClassDef->Release();

	if (pEnum)
		pEnum->Release();
	if (pDataDef)
		pDataDef->Release();
	if (pCodec)
		pCodec->Release();
	if (pDictionary)
		pDictionary->Release();

	if (pHeader)
		pHeader->Release();

	if (pFile)
	{  // Close file
		if (bFileOpen)
			pFile->Close();
		pFile->Release();
	}

	return hr;
}
 
extern "C" HRESULT CAAFCodecDef_test(testMode_t mode);
extern "C" HRESULT CAAFCodecDef_test(testMode_t mode)
{
	HRESULT hr = AAFRESULT_NOT_IMPLEMENTED;
	aafWChar * pFileName = L"AAFCodecDefTest.aaf";

	try
	{
		if(mode == kAAFUnitTestReadWrite)
			hr = CreateAAFFile(pFileName);
		else
			hr = AAFRESULT_SUCCESS;
		if (SUCCEEDED(hr))
			hr = ReadAAFFile(pFileName);
	}
	catch (...)
	{
		cerr << "CAAFCodecDef_test..."
			 << "Caught general C++ exception!" << endl; 
		hr = AAFRESULT_TEST_FAILED;
	}

	return hr;
}
























