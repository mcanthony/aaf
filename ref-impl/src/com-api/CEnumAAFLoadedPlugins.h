//@doc
//@class    EnumAAFLoadedPlugins | Implementation class for EnumAAFLoadedPlugins
#ifndef __CEnumAAFLoadedPlugins_h__
#define __CEnumAAFLoadedPlugins_h__

//=---------------------------------------------------------------------=
//
// This file was GENERATED for the AAF SDK
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
// The Original Code of this file is Copyright 1998-2012, licensor of the
// Advanced Media Workflow Association.  All rights reserved.
//
// The Initial Developer of the Original Code of this file and the
// licensor of the Advanced Media Workflow Association is
// Avid Technology.
// All rights reserved.
//
//=---------------------------------------------------------------------=



#ifndef __AAF_h__
#include "AAF.h"
#endif









#ifndef __CAAFRoot_h__
#include "CAAFRoot.h"
#endif


class CEnumAAFLoadedPlugins
  : public IEnumAAFLoadedPlugins,
    public CAAFRoot
{
protected:

  //********
  //
  // Constructor/destructor
  //
  CEnumAAFLoadedPlugins (IUnknown * pControllingUnknown, aafBool doInit = kAAFTrue);
  virtual ~CEnumAAFLoadedPlugins ();

public:



  //***********************************************************
  //
  // NextOne()
  //
  // Enumerates to the next element in the enumerators list. The caller is responsible 
  /// for properly releasing the returned pointer when it is no longer needed.
  /// @comm This is a just simplified version of the Next method. 
  //
  STDMETHOD (NextOne) (
    // The Next AAFPluginID 
    /*[out,retval]*/ aafUID_t*  ppAAFPluginID);

  //***********************************************************
  //
  // Next()
  //
  // Enumerates the next count elements (AAFPluginDesc pointers) in 
  /// the enumerator's list, returning them in the given array along with the actual 
  /// number of enumerated elements in pFetched. The caller is responsible for 
  /// properly releasing the returned pointers.
  //
  STDMETHOD (Next) (
    // number of AAFPluginDef requested
    /*[in]*/ aafUInt32  count,

    // array to receive aafUID_t
    /*[out, size_is(count), length_is(*pFetched)]*/ aafUID_t*  pAAFPluginIDs,

    // number of actual AAFPluginDef fetched into ppAAFPluginDef array
    /*[out,ref]*/ aafUInt32 *  pFetched);

  //***********************************************************
  //
  // Skip()
  //
  // Instructs the enumerator to skip the next count elements in the enumeration so that 
  /// the next call to EnumAAFLoadedPlugins::Next will not return 
  /// those elements.
  //
  STDMETHOD (Skip) (
    // Number of elements to skip 
    /*[in]*/ aafUInt32  count);

  //***********************************************************
  //
  // Reset()
  //
  // Instructs the enumerator to position itself at the beginning of the list of elements. 
  /// @comm There is no guarantee that the same set of elements will be enumerated on 
  /// each pass through the list, nor will the elements necessarily be enumerated in 
  /// the same order. The exact behavior depends on the collection being enumerated.
  //
  STDMETHOD (Reset)
     ();


  //***********************************************************
  //
  // Clone()
  //
  // Creates another EnumAAFLoadedPlugins enumerator with the same state as the current 
  /// enumerator to iterate over the same list. This method makes it possible to 
  /// record a point in the enumeration sequence in order to return to that point 
  /// at a later time.
  /// @comm The caller must release this new enumerator separately from the first
  /// enumerator.
  //
  STDMETHOD (Clone) (
    // new enumeration 
    /*[out,retval]*/ IEnumAAFLoadedPlugins ** ppEnum);


protected:
  // 
  // Declare the QI that implements for the interfaces
  // for this module. This will be called by CAAFUnknown::QueryInterface().
  // 
  STDMETHOD(InternalQueryInterface)(REFIID riid, void **ppvObjOut);


public:
  //
  // This class as concrete. All AAF objects can be constructed from
  // a CLSID. This will allow subclassing all "base-classes" by
  // aggreggation.
  // 
  AAF_DECLARE_CONCRETE();
  //
  //********
};

#endif // ! __CEnumAAFLoadedPlugins_h__


