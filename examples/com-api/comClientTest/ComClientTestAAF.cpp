/***********************************************************************
 *
 *              Copyright (c) 1996 Avid Technology, Inc.
 *
 * Permission to use, copy and modify this software and to distribute
 * and sublicense application software incorporating this software for
 * any purpose is hereby granted, provided that (i) the above
 * copyright notice and this permission notice appear in all copies of
 * the software and related documentation, and (ii) the name Avid
 * Technology, Inc. may not be used in any advertising or publicity
 * relating to the software without the specific, prior written
 * permission of Avid Technology, Inc.
 *
 * THE SOFTWARE IS PROVIDED "AS-IS" AND WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS, IMPLIED OR OTHERWISE, INCLUDING WITHOUT LIMITATION, ANY
 * WARRANTY OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE.
 * IN NO EVENT SHALL AVID TECHNOLOGY, INC. BE LIABLE FOR ANY DIRECT,
 * SPECIAL, INCIDENTAL, INDIRECT, CONSEQUENTIAL OR OTHER DAMAGES OF
 * ANY KIND, OR ANY DAMAGES WHATSOEVER ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE, INCLUDING, 
 * WITHOUT  LIMITATION, DAMAGES RESULTING FROM LOSS OF USE,
 * DATA OR PROFITS, AND WHETHER OR NOT ADVISED OF THE POSSIBILITY OF
 * DAMAGE, REGARDLESS OF THE THEORY OF LIABILITY.
 *
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "aafErr.h"		// TODO: this file needs to be moved to a public include directory...
#include "AAFTypes.h"
#include "AAFUtils.h"	// TODO: this file needs to be moved to a public include directory...

#if defined(_MAC) || defined(macintosh)
#include <wprintf.h>
#include <initguid.h> // define all of the AAF guids.
#include "AAF.h"
#else
#include "AAF.h"
// TODO: these should not be here, I added them for now to get a good link
// Need to modify Win32 project to include  midl generated AAF_i.c IID definition file.
const CLSID CLSID_AAFSession = { 0xF0C10891, 0x3073, 0x11d2, { 0x80, 0x4A, 0x00, 0x60, 0x08, 0x14, 0x3E, 0x6F } };
#endif


const aafProductVersion_t AAFToolkitVersion = {2, 1, 0, 1, kVersionBeta};

static void     FatalErrorCode(aafErr_t errcode, int line, char *file)
{
  printf("Error '%0x' returned at line %d in %s\n", errcode, line, file);
  exit(1);
}

static void     FatalError(char *message)
{
  printf(message);
  exit(1);
}

static aafErr_t moduleErrorTmp = OM_ERR_NONE;/* note usage in macro */
#define check(a)  \
{ moduleErrorTmp = a; \
  if (moduleErrorTmp != OM_ERR_NONE) \
     FatalErrorCode(moduleErrorTmp, __LINE__, __FILE__);\
}

#define assert(b, msg) \
  if (!(b)) {fprintf(stderr, "ASSERT: %s\n\n", msg); exit(1);}

static void printIdentification(IAAFIdentification* pIdent)
{
	aafString_t companyName;
	check(pIdent->GetCompanyName(&companyName));
	wprintf(L"CompanyName          = \"%s\"\n", companyName.value);

	aafString_t productName;
	check(pIdent->GetProductName(&productName));
	wprintf(L"ProductName          = \"%s\"\n", productName.value);

	aafString_t productVersionString;
	check(pIdent->GetProductVersionString(&productVersionString));
	wprintf(L"ProductVersionString = \"%s\"\n", productVersionString.value);

	aafString_t platform;
	check(pIdent->GetPlatform(&platform));
	wprintf(L"Platform             = \"%s\"\n", platform.value);
}

static void ReadAAFFile(unsigned char * pFileName)
{
	IAAFSession *				pSession = NULL;
	IAAFFile *					pFile = NULL;
	IAAFHeader *				pHeader = NULL;
	IAAFIdentification *		pIdent;
	aafProductIdentification_t	ProductInfo;

	ProductInfo.companyName = (unsigned char *)"AAF Developers Desk. NOT!";
	ProductInfo.productName = (unsigned char *)"Make AVR Example. NOT!";
	ProductInfo.productVersion = AAFToolkitVersion;
	ProductInfo.productVersionString = NULL;
	ProductInfo.productID = -1;
	ProductInfo.platform = NULL;
	  
	check(CoCreateInstance(CLSID_AAFSession,
						   NULL, 
						   CLSCTX_INPROC_SERVER, 
						   IID_IAAFSession, 
						   (void **)&pSession));
	  
	check(pSession->SetDefaultIdentification(&ProductInfo));

	check(pSession->OpenReadFile(pFileName, &pFile));
  
	check(pFile->GetHeader(&pHeader));

	check(pHeader->GetLastIdentification(&pIdent));

	wprintf(L"LastIdentification\n");
	printIdentification(pIdent);

	check(pFile->Close());

	check(pSession->EndSession());

	if (pHeader) pHeader->Release();
	if (pFile) pFile->Release();
	if (pSession) pSession->Release();
}

static void CreateAAFFile(unsigned char * pFileName)
{
	IAAFSession *				pSession = NULL;
	IAAFFile *					pFile = NULL;
	aafProductIdentification_t	ProductInfo;

	ProductInfo.companyName = (unsigned char *)"AAF Developers Desk";
	ProductInfo.productName = (unsigned char *)"Make AVR Example";
	ProductInfo.productVersion = AAFToolkitVersion;
	ProductInfo.productVersionString = NULL;
	ProductInfo.productID = -1;
	ProductInfo.platform = NULL;

	check(CoCreateInstance(CLSID_AAFSession,
						   NULL, 
						   CLSCTX_INPROC_SERVER, 
						   IID_IAAFSession, 
						   (void **)&pSession));
    
	check(pSession->SetDefaultIdentification(&ProductInfo));

	check(pSession->CreateFile(pFileName, kAAFRev1, &pFile));
  
	check(pFile->Close());

	check(pSession->EndSession());

	if (pFile) pFile->Release();
	if (pSession) pSession->Release();
}

// simple helper class to initialize and cleanup COM library.
struct CComInitialize
{
	CComInitialize()
	{
		CoInitialize(NULL);
	}

	~CComInitialize()
	{
		CoUninitialize();
	}
};

main()
{
	CComInitialize comInit;

	CreateAAFFile((unsigned char *)"Foo.aaf");
	ReadAAFFile((unsigned char *)"Foo.aaf");

	wprintf(L"Done\n");


	return(0);
}

