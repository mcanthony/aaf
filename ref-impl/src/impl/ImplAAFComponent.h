//@doc
//@class    AAFComponent | Implementation class for AAFComponent
#ifndef __ImplAAFComponent_h__
#define __ImplAAFComponent_h__

#ifndef __ImplAAFDataDef_h__
#include "ImplAAFDataDef.h"
#endif

class ImplAAFMob;
class ImplAAFMobSlot;
class ImplAAFOperationDef;
class ImplAAFOperationGroup;
class ImplAAFScopeStack;

/***********************************************************************
 *
 *              Copyright (c) 1998-1999 Avid Technology, Inc.
 *
 * Permission to use, copy and modify this software and accompanying 
 * documentation, and to distribute and sublicense application software
 * incorporating this software for any purpose is hereby granted, 
 * provided that (i) the above copyright notice and this permission
 * notice appear in all copies of the software and related documentation,
 * and (ii) the name Avid Technology, Inc. may not be used in any
 * advertising or publicity relating to the software without the specific,
 * prior written permission of Avid Technology, Inc.
 *
 * THE SOFTWARE IS PROVIDED AS-IS AND WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS, IMPLIED OR OTHERWISE, INCLUDING WITHOUT LIMITATION, ANY
 * WARRANTY OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE.
 * IN NO EVENT SHALL AVID TECHNOLOGY, INC. BE LIABLE FOR ANY DIRECT,
 * SPECIAL, INCIDENTAL, PUNITIVE, INDIRECT, ECONOMIC, CONSEQUENTIAL OR
 * OTHER DAMAGES OF ANY KIND, OR ANY DAMAGES WHATSOEVER ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE AND
 * ACCOMPANYING DOCUMENTATION, INCLUDING, WITHOUT LIMITATION, DAMAGES
 * RESULTING FROM LOSS OF USE, DATA OR PROFITS, AND WHETHER OR NOT
 * ADVISED OF THE POSSIBILITY OF DAMAGE, REGARDLESS OF THE THEORY OF
 * LIABILITY.
 *
 ************************************************************************/




#ifndef __ImplAAFObject_h__
#include "ImplAAFObject.h"
#endif

#include "OMWeakRefProperty.h"
#include "OMStrongRefVectorProperty.h"

#ifndef __ImplAAFKLVData_h__
#include "ImplAAFKLVData.h"
#endif

#ifndef __ImplEnumAAFKLVData_h__
#include "ImplEnumAAFKLVData.h"
#endif

typedef 
enum _implCompType_t
    {
		kTransition	= 0,
		kSegment	= 1,
		kComponent	=2
	} implCompType_t;

class ImplAAFComponent : public ImplAAFObject
{
public:
  //
  // Constructor/destructor
  //
  //********
  ImplAAFComponent ();
  ~ImplAAFComponent ();

  //****************
  // SetLength()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    SetLength
        (const aafLength_t & length);  //@parm [in] Length of this object


  //****************
  // GetLength()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    GetLength
        (aafLength_t *  length);  //@parm [retval][out] Length of this component

	
  //****************
  // SetDataDef()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    SetDataDef
        (ImplAAFDataDef * pDataDef);  //@parm [in] DataDef of this object


  //****************
  // GetDataDef()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    GetDataDef
        (ImplAAFDataDef ** ppDataDef);  //@parm [retval][out] DataDef of this object

  //****************
  // AppendKLVData()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    AppendKLVData
        (ImplAAFKLVData * pData);  //@parm [in,ref] Data

  //****************
  // RemoveKLVData()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    RemoveKLVData
        (ImplAAFKLVData * pData);

  //****************
  // CountKLVData()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    CountKLVData
        (aafUInt32 *  pNumComments);  //@parm [out,retval] Number  of KLVData


  //****************
  // GetKLVData()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    GetKLVData
        (ImplEnumAAFKLVData ** ppEnum);  //@parm [out,retval] KLVData

public:
	AAFRESULT SetNewProps(
				aafLength_t length,		// IN - Length  property value
				ImplAAFDataDef * pDataDef);		// IN - DataDef property value
	virtual AAFRESULT AccumulateLength(aafLength_t *length);
	virtual AAFRESULT GetMinimumBounds(aafPosition_t rootPos, aafLength_t rootLen,
										ImplAAFMob *mob, ImplAAFMobSlot *track,
										aafMediaCriteria_t *mediaCrit,
										aafPosition_t currentObjPos,
										aafOperationChoice_t *effectChoice,
										ImplAAFComponent	*prevObject,
										ImplAAFComponent *nextObject,
										ImplAAFScopeStack *scopeStack,
										aafPosition_t *diffPos, aafLength_t *minLength,
										ImplAAFOperationGroup **groupObject, aafInt32	*nestDepth,
										ImplAAFComponent **found, aafBool *foundTransition);

	virtual AAFRESULT GetComponentType(implCompType_t* pType) {*pType = kComponent; return AAFRESULT_SUCCESS;}
	virtual AAFRESULT ChangeContainedReferences(aafMobID_constref from,
												aafMobID_constref to);


private:
	OMWeakReferenceProperty<ImplAAFDataDef>		_dataDef;
	OMFixedSizeProperty<aafLength_t>	_length;
    OMStrongReferenceVectorProperty<ImplAAFKLVData> _KLVData;
};

#endif // ! __ImplAAFComponent_h__

