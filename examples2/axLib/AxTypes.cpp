//=---------------------------------------------------------------------=
//
// $Id$ $Name$
//
// The contents of this file are subject to the AAF SDK Public Source
// License Agreement Version 2.0 (the "License"); You may not use this
// file except in compliance with the License.  The License is available
// in AAFSDKPSL.TXT, or you may obtain a copy of the License from the
// Advanced Media Workflow Association, Inc., or its successor.
//
// Software distributed under the License is distributed on an "AS IS"
// basis, WITHOUT WARRANTY OF ANY KIND, either express or implied.  See
// the License for the specific language governing rights and limitations
// under the License.  Refer to Section 3.3 of the License for proper use
// of this Exhibit.
//
// WARNING:  Please contact the Advanced Media Workflow Association,
// Inc., for more information about any additional licenses to
// intellectual property covering the AAF Standard that may be required
// to create and distribute AAF compliant products.
// (http://www.amwa.tv/policies).
//
// Copyright Notices:
// The Original Code of this file is Copyright 1998-2009, licensor of the
// Advanced Media Workflow Association.  All rights reserved.
//
//=---------------------------------------------------------------------=

#if defined(OS_WINDOWS)
#pragma warning(disable:4786)
// The prama is busted. It must be above std lib header includes, even then
// it doesn't work. See:
// http://support.microsoft.com/support/kb/articles/Q167/3/55.ASP
// http://support.microsoft.com/support/kb/articles/Q195/3/86.ASP
// http://support.microsoft.com/support/kb/articles/Q122/5/39.ASP
#endif

#include "AxTypes.h"
#include "AxUtil.h"
#include "AxEx.h"

#include <iostream>
#include <map>


#include <cstring>
#include <stdio.h>
#include <assert.h>

namespace {

// Here is the official AAF Example programs (a.k.a "Ax") product UUID
// as generated by Microsoft's UUIDGEN.EXE program:
// 684074c2-02da-41db-b6fc-995b46234b19
  
aafUID_t axUuid = { 0x684074c2, 0x02da, 0x41db,
		    { 0xb6, 0xfc, 0x99, 0x5b, 0x46, 0x23, 0x4b, 0x19 } };

// FIXME: Should the version match the spec version, or the sdk release 
//  version, or what?
aafProductVersion_t axProductVersion = { 3, 5, 7, 11, kAAFVersionPrivateBuild };

}

AxProductIdentification::AxProductIdentification()
  : _companyName( L"AAF Association Inc." ),
    _productName( L"AAF SDK Examples" ),
    _productVersionString( L"3.141592654" ),
    _platform( L"All Platform" ),
    _productVersion( axProductVersion )

{
  init( axUuid );
}


AxProductIdentification::AxProductIdentification(
  const AxString& companyName,
  const AxString& productName,
  const AxString& productVersionString,
  const AxString& platform,
  const aafUID_t& productId,
  const aafProductVersion_t& productVersion
  )
  : _companyName( companyName ),
    _productName( productName ),
    _productVersionString( productVersionString ),
    _platform( platform ),
    _productVersion( productVersion )
{
  init( productId );
}

void AxProductIdentification::init( const aafUID_t& productId )
{
   // All _productId strings get pointers to memory owned
   // (transitively) by this object.
  _productId.companyName          = const_cast<aafCharacter*>( _companyName.c_str() );
  _productId.productName          = const_cast<aafCharacter*>( _productName.c_str() );
  _productId.productVersionString = const_cast<aafCharacter*>( _productVersionString.c_str() );
  _productId.platform             = const_cast<aafCharacter*>( _platform.c_str() );

  // _productId.productVersion get a pointer to memory owned by this
  // object as well.
  _productId.productVersion       = &_productVersion;

  // productId is copied into _productId.productID because
  // aafProductIdentification_t stores this by value - unlike the
  // others which are all pointers.
  _productId.productID            = productId;
}

AxProductIdentification::~AxProductIdentification()
{}

const aafProductIdentification_t* AxProductIdentification::getProductId() const
{
  return &_productId;
}

std::wostream& AxProductIdentification::dump( std::wostream& os ) const
{
	using namespace std; 

	os << L"Product Identification:   " << endl;
	os << L"\tCompany Name:           " << _companyName          << endl;
	os << L"\tProduct Name:           " << _productName          << endl;
	os << L"\tProduct Version String: " << _productVersionString << endl;
    os << L"\tProduct UUID:           " << _productId.productID  << endl;
	os << L"\tPlatform:               " << _platform             << endl;
	os << L"\tProduct Version:        " << _productVersion       << endl;
 
	return os;
}

std::wostream& operator<<( std::wostream& os, const AxProductIdentification& id )
{
	return id.dump( os );
}

std::wostream& operator<<( std::wostream& os, const aafUID_t& uid )
{
    const int bufSize = 37;
	char buf[bufSize];
	int rc;
	using namespace std;

	// swprintf does not have uniform all platform support.
	// Instead, use sprintf and convert to wide characters.

	rc = sprintf( buf, "%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",
				     uid.Data1, uid.Data2, uid.Data3,
				     uid.Data4[0], uid.Data4[1],uid.Data4[2], uid.Data4[3],
				     uid.Data4[4], uid.Data4[5],uid.Data4[6], uid.Data4[7] );
	if ( -1 == rc ) {
	  throw AxEx( L"sprintf failed" );
	}

	AxString wBuf = AxStringUtil::mbtowc( buf );

	os << wBuf;

	return os;
}

std::wostream& operator<<( std::wostream& os, const aafProductVersion_t& pv )
{
	using namespace std;

	os << pv.major << L" " << pv.minor << L" " << pv.tertiary << L" " << pv.patchLevel << L" ";
	
	// FIXME - should be in a central name repository.

	map<int,AxString> releaseTypeNames;

	releaseTypeNames[ kAAFVersionUnknown]		= L"AAFVersionUnknown";
	releaseTypeNames[ kAAFVersionReleased ]		= L"AAFVersionReleased";
	releaseTypeNames[ kAAFVersionDebug]			= L"AAFVersionDebug";
	releaseTypeNames[ kAAFVersionPatched]		= L"AAFVersionPatched";
	releaseTypeNames[ kAAFVersionBeta]			= L"AAFVersionBeta";
	releaseTypeNames[ kAAFVersionPrivateBuild ] = L"AAFVersionPrivateBuild";

	assert( releaseTypeNames.find( pv.type ) != releaseTypeNames.end() );
	
	os << releaseTypeNames[ pv.type ];

	return os;
}

bool operator<( const aafUID_t& uidL, const aafUID_t& uidR )
{
	return 0 > ::memcmp( &uidL, &uidR, sizeof( aafUID_t ) );
}

#if !defined(DISABLE_DYNAMIC_LOADING)
// These two operators are also defined in ImplAAFCloneResolver.cpp
// so only build if this is not a static build to avoid a clash.
bool operator==( const aafUID_t& uidL, const aafUID_t& uidR )
{
	return 0 == ::memcmp( &uidL, &uidR, sizeof( aafUID_t ) );
}

bool operator==( const aafMobID_t& lhs, const aafMobID_t& rhs )
{
  return 0 == ::memcmp( &lhs, &rhs, sizeof( aafMobID_t ) );
}
#endif

#if !defined(OS_WINDOWS)
bool operator==( const tagGUID& uidL, const tagGUID& uidR )
{
	return 0 == ::memcmp( &uidL, &uidR, sizeof( tagGUID ) );
}
#endif

bool operator<( const aafMobID_t& lhs, const aafMobID_t& rhs )
{
  return 0 > ::memcmp( &lhs, &rhs, sizeof( aafMobID_t ) );
}
