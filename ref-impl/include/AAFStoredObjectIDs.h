#ifndef __AAFStoredObjectIDs_h__
#define __AAFStoredObjectIDs_h__

//=---------------------------------------------------------------------=
//
// This file was GENERATED for the AAF SDK
//
// $Id$ $Name$
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
// The Original Code of this file is Copyright 1998-2005, Licensor of the
// AAF Association.
//
// The Initial Developer of the Original Code of this file and the
// Licensor of the AAF Association is Avid Technology.
// All rights reserved.
//
//=---------------------------------------------------------------------=


#include "AAFTypes.h"

// AAF stored object UIDs.
//

#if !defined(INIT_AUID)
#define DEFINE_AUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
  extern "C" const aafUID_t name
#else
#define DEFINE_AUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
  extern "C" const aafUID_t name = \
    { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }
#endif

// The AAF reference implementation uses shorter names than
// SMPTE. The names are shortened by the following aliases.
//
#define AUID_AAFClassDef             AUID_AAFClassDefinition
#define AUID_AAFCodecDef             AUID_AAFCodecDefinition
#define AUID_AAFDataDef              AUID_AAFDataDefinition
#define AUID_AAFDefObject            AUID_AAFDefinitionObject
#define AUID_AAFEdgecode             AUID_AAFEdgeCode
#define AUID_AAFOperationDef         AUID_AAFOperationDefinition
#define AUID_AAFObject               AUID_AAFInterchangeObject
#define AUID_AAFParameterDef         AUID_AAFParameterDefinition
#define AUID_AAFInterpolationDef     AUID_AAFInterpolationDefinition
#define AUID_AAFPropertyDef          AUID_AAFPropertyDefinition
#define AUID_AAFTypeDef              AUID_AAFTypeDefinition
#define AUID_AAFTypeDefCharacter     AUID_AAFTypeDefinitionCharacter
#define AUID_AAFTypeDefEnum          AUID_AAFTypeDefinitionEnumeration
#define AUID_AAFTypeDefExtEnum       AUID_AAFTypeDefinitionExtendibleEnumeration
#define AUID_AAFTypeDefFixedArray    AUID_AAFTypeDefinitionFixedArray
#define AUID_AAFTypeDefInt           AUID_AAFTypeDefinitionInteger
#define AUID_AAFTypeDefRecord        AUID_AAFTypeDefinitionRecord
#define AUID_AAFTypeDefRename        AUID_AAFTypeDefinitionRename
#define AUID_AAFTypeDefSet           AUID_AAFTypeDefinitionSet
#define AUID_AAFTypeDefStream        AUID_AAFTypeDefinitionStream
#define AUID_AAFTypeDefString        AUID_AAFTypeDefinitionString
#define AUID_AAFTypeDefIndirect      AUID_AAFTypeDefinitionIndirect
#define AUID_AAFTypeDefOpaque        AUID_AAFTypeDefinitionOpaque
#define AUID_AAFTypeDefStrongObjRef  AUID_AAFTypeDefinitionStrongObjectReference
#define AUID_AAFTypeDefVariableArray AUID_AAFTypeDefinitionVariableArray
#define AUID_AAFTypeDefWeakObjRef    AUID_AAFTypeDefinitionWeakObjectReference
#define AUID_AAFContainerDef         AUID_AAFContainerDefinition
#define AUID_AAFPluginDef            AUID_AAFPluginDefinition

//{0d010101-0101-0100-060e-2b3402060101}
DEFINE_AUID(AUID_AAFInterchangeObject,
0x0d010101, 0x0101, 0x0100, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-0200-060e-2b3402060101}
DEFINE_AUID(AUID_AAFComponent,
0x0d010101, 0x0101, 0x0200, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-0300-060e-2b3402060101}
DEFINE_AUID(AUID_AAFSegment,
0x0d010101, 0x0101, 0x0300, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-0400-060e-2b3402060101}
DEFINE_AUID(AUID_AAFEdgeCode,
0x0d010101, 0x0101, 0x0400, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-0500-060e-2b3402060101}
DEFINE_AUID(AUID_AAFEssenceGroup,
0x0d010101, 0x0101, 0x0500, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-0600-060e-2b3402060101}
DEFINE_AUID(AUID_AAFEvent,
0x0d010101, 0x0101, 0x0600, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-0700-060e-2b3402060101}
DEFINE_AUID(AUID_AAFGPITrigger,
0x0d010101, 0x0101, 0x0700, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-0800-060e-2b3402060101}
DEFINE_AUID(AUID_AAFCommentMarker,
0x0d010101, 0x0101, 0x0800, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-0900-060e-2b3402060101}
DEFINE_AUID(AUID_AAFFiller,
0x0d010101, 0x0101, 0x0900, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-0a00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFOperationGroup,
0x0d010101, 0x0101, 0x0a00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-0b00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFNestedScope,
0x0d010101, 0x0101, 0x0b00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-0c00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFPulldown,
0x0d010101, 0x0101, 0x0c00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-0d00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFScopeReference,
0x0d010101, 0x0101, 0x0d00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-0e00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFSelector,
0x0d010101, 0x0101, 0x0e00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-0f00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFSequence,
0x0d010101, 0x0101, 0x0f00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-1000-060e-2b3402060101}
DEFINE_AUID(AUID_AAFSourceReference,
0x0d010101, 0x0101, 0x1000, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-1100-060e-2b3402060101}
DEFINE_AUID(AUID_AAFSourceClip,
0x0d010101, 0x0101, 0x1100, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-1200-060e-2b3402060101}
DEFINE_AUID(AUID_AAFTextClip,
0x0d010101, 0x0101, 0x1200, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-1300-060e-2b3402060101}
DEFINE_AUID(AUID_AAFHTMLClip,
0x0d010101, 0x0101, 0x1300, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-1400-060e-2b3402060101}
DEFINE_AUID(AUID_AAFTimecode,
0x0d010101, 0x0101, 0x1400, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-1500-060e-2b3402060101}
DEFINE_AUID(AUID_AAFTimecodeStream,
0x0d010101, 0x0101, 0x1500, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-1600-060e-2b3402060101}
DEFINE_AUID(AUID_AAFTimecodeStream12M,
0x0d010101, 0x0101, 0x1600, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-1700-060e-2b3402060101}
DEFINE_AUID(AUID_AAFTransition,
0x0d010101, 0x0101, 0x1700, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-1800-060e-2b3402060101}
DEFINE_AUID(AUID_AAFContentStorage,
0x0d010101, 0x0101, 0x1800, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-1900-060e-2b3402060101}
DEFINE_AUID(AUID_AAFControlPoint,
0x0d010101, 0x0101, 0x1900, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-1a00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFDefinitionObject,
0x0d010101, 0x0101, 0x1a00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-1b00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFDataDefinition,
0x0d010101, 0x0101, 0x1b00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-1c00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFOperationDefinition,
0x0d010101, 0x0101, 0x1c00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-1d00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFParameterDefinition,
0x0d010101, 0x0101, 0x1d00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-1e00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFPluginDefinition,
0x0d010101, 0x0101, 0x1e00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-1f00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFCodecDefinition,
0x0d010101, 0x0101, 0x1f00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-2000-060e-2b3402060101}
DEFINE_AUID(AUID_AAFContainerDefinition,
0x0d010101, 0x0101, 0x2000, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-2100-060e-2b3402060101}
DEFINE_AUID(AUID_AAFInterpolationDefinition,
0x0d010101, 0x0101, 0x2100, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-2200-060e-2b3402060101}
DEFINE_AUID(AUID_AAFDictionary,
0x0d010101, 0x0101, 0x2200, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-2300-060e-2b3402060101}
DEFINE_AUID(AUID_AAFEssenceData,
0x0d010101, 0x0101, 0x2300, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-2400-060e-2b3402060101}
DEFINE_AUID(AUID_AAFEssenceDescriptor,
0x0d010101, 0x0101, 0x2400, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-2500-060e-2b3402060101}
DEFINE_AUID(AUID_AAFFileDescriptor,
0x0d010101, 0x0101, 0x2500, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-2600-060e-2b3402060101}
DEFINE_AUID(AUID_AAFAIFCDescriptor,
0x0d010101, 0x0101, 0x2600, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-2700-060e-2b3402060101}
DEFINE_AUID(AUID_AAFDigitalImageDescriptor,
0x0d010101, 0x0101, 0x2700, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-2800-060e-2b3402060101}
DEFINE_AUID(AUID_AAFCDCIDescriptor,
0x0d010101, 0x0101, 0x2800, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-2900-060e-2b3402060101}
DEFINE_AUID(AUID_AAFRGBADescriptor,
0x0d010101, 0x0101, 0x2900, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-2a00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFHTMLDescriptor,
0x0d010101, 0x0101, 0x2a00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-2b00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFTIFFDescriptor,
0x0d010101, 0x0101, 0x2b00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-2c00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFWAVEDescriptor,
0x0d010101, 0x0101, 0x2c00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-2d00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFFilmDescriptor,
0x0d010101, 0x0101, 0x2d00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-2e00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFTapeDescriptor,
0x0d010101, 0x0101, 0x2e00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-2f00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFHeader,
0x0d010101, 0x0101, 0x2f00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-3000-060e-2b3402060101}
DEFINE_AUID(AUID_AAFIdentification,
0x0d010101, 0x0101, 0x3000, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-3100-060e-2b3402060101}
DEFINE_AUID(AUID_AAFLocator,
0x0d010101, 0x0101, 0x3100, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-3200-060e-2b3402060101}
DEFINE_AUID(AUID_AAFNetworkLocator,
0x0d010101, 0x0101, 0x3200, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-3300-060e-2b3402060101}
DEFINE_AUID(AUID_AAFTextLocator,
0x0d010101, 0x0101, 0x3300, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-3400-060e-2b3402060101}
DEFINE_AUID(AUID_AAFMob,
0x0d010101, 0x0101, 0x3400, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-3500-060e-2b3402060101}
DEFINE_AUID(AUID_AAFCompositionMob,
0x0d010101, 0x0101, 0x3500, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-3600-060e-2b3402060101}
DEFINE_AUID(AUID_AAFMasterMob,
0x0d010101, 0x0101, 0x3600, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-3700-060e-2b3402060101}
DEFINE_AUID(AUID_AAFSourceMob,
0x0d010101, 0x0101, 0x3700, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-3800-060e-2b3402060101}
DEFINE_AUID(AUID_AAFMobSlot,
0x0d010101, 0x0101, 0x3800, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-3900-060e-2b3402060101}
DEFINE_AUID(AUID_AAFEventMobSlot,
0x0d010101, 0x0101, 0x3900, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-3a00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFStaticMobSlot,
0x0d010101, 0x0101, 0x3a00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-3b00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFTimelineMobSlot,
0x0d010101, 0x0101, 0x3b00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-3c00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFParameter,
0x0d010101, 0x0101, 0x3c00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-3d00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFConstantValue,
0x0d010101, 0x0101, 0x3d00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-3e00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFVaryingValue,
0x0d010101, 0x0101, 0x3e00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-3f00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFTaggedValue,
0x0d010101, 0x0101, 0x3f00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-4000-060e-2b3402060101}
DEFINE_AUID(AUID_AAFKLVData,
0x0d010101, 0x0101, 0x4000, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-4100-060e-2b3402060101}
DEFINE_AUID(AUID_AAFDescriptiveMarker,
0x0d010101, 0x0101, 0x4100, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-4200-060e-2b3402060101}
DEFINE_AUID(AUID_AAFSoundDescriptor,
0x0d010101, 0x0101, 0x4200, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-4400-060e-2b3402060101}
DEFINE_AUID(AUID_AAFMultipleDescriptor,
0x0d010101, 0x0101, 0x4400, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-4700-060e-2b3402060101}
DEFINE_AUID(AUID_AAFAES3PCMDescriptor,
0x0d010101, 0x0101, 0x4700, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-4800-060e-2b3402060101}
DEFINE_AUID(AUID_AAFPCMDescriptor,
0x0d010101, 0x0101, 0x4800, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-4900-060e-2b3402060101}
DEFINE_AUID(AUID_AAFPhysicalDescriptor,
0x0d010101, 0x0101, 0x4900, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-4a00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFImportDescriptor,
0x0d010101, 0x0101, 0x4a00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-4b00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFRecordingDescriptor,
0x0d010101, 0x0101, 0x4b00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-4c00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFTaggedValueDefinition,
0x0d010101, 0x0101, 0x4c00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-4d00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFKLVDataDefinition,
0x0d010101, 0x0101, 0x4d00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0101-4e00-060e-2b3402060101}
DEFINE_AUID(AUID_AAFAuxiliaryDescriptor,
0x0d010101, 0x0101, 0x4e00, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0201-0000-060e-2b3402060101}
DEFINE_AUID(AUID_AAFClassDefinition,
0x0d010101, 0x0201, 0x0000, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0202-0000-060e-2b3402060101}
DEFINE_AUID(AUID_AAFPropertyDefinition,
0x0d010101, 0x0202, 0x0000, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0203-0000-060e-2b3402060101}
DEFINE_AUID(AUID_AAFTypeDefinition,
0x0d010101, 0x0203, 0x0000, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0204-0000-060e-2b3402060101}
DEFINE_AUID(AUID_AAFTypeDefinitionInteger,
0x0d010101, 0x0204, 0x0000, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0205-0000-060e-2b3402060101}
DEFINE_AUID(AUID_AAFTypeDefinitionStrongObjectReference,
0x0d010101, 0x0205, 0x0000, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0206-0000-060e-2b3402060101}
DEFINE_AUID(AUID_AAFTypeDefinitionWeakObjectReference,
0x0d010101, 0x0206, 0x0000, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0207-0000-060e-2b3402060101}
DEFINE_AUID(AUID_AAFTypeDefinitionEnumeration,
0x0d010101, 0x0207, 0x0000, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0208-0000-060e-2b3402060101}
DEFINE_AUID(AUID_AAFTypeDefinitionFixedArray,
0x0d010101, 0x0208, 0x0000, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0209-0000-060e-2b3402060101}
DEFINE_AUID(AUID_AAFTypeDefinitionVariableArray,
0x0d010101, 0x0209, 0x0000, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-020a-0000-060e-2b3402060101}
DEFINE_AUID(AUID_AAFTypeDefinitionSet,
0x0d010101, 0x020a, 0x0000, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-020b-0000-060e-2b3402060101}
DEFINE_AUID(AUID_AAFTypeDefinitionString,
0x0d010101, 0x020b, 0x0000, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-020c-0000-060e-2b3402060101}
DEFINE_AUID(AUID_AAFTypeDefinitionStream,
0x0d010101, 0x020c, 0x0000, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-020d-0000-060e-2b3402060101}
DEFINE_AUID(AUID_AAFTypeDefinitionRecord,
0x0d010101, 0x020d, 0x0000, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-020e-0000-060e-2b3402060101}
DEFINE_AUID(AUID_AAFTypeDefinitionRename,
0x0d010101, 0x020e, 0x0000, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0220-0000-060e-2b3402060101}
DEFINE_AUID(AUID_AAFTypeDefinitionExtendibleEnumeration,
0x0d010101, 0x0220, 0x0000, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0221-0000-060e-2b3402060101}
DEFINE_AUID(AUID_AAFTypeDefinitionIndirect,
0x0d010101, 0x0221, 0x0000, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0222-0000-060e-2b3402060101}
DEFINE_AUID(AUID_AAFTypeDefinitionOpaque,
0x0d010101, 0x0222, 0x0000, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0223-0000-060e-2b3402060101}
DEFINE_AUID(AUID_AAFTypeDefinitionCharacter,
0x0d010101, 0x0223, 0x0000, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0224-0000-060e-2b3402060101}
DEFINE_AUID(AUID_AAFMetaDefinition,
0x0d010101, 0x0224, 0x0000, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010101-0225-0000-060e-2b3402060101}
DEFINE_AUID(AUID_AAFMetaDictionary,
0x0d010101, 0x0225, 0x0000, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);

//{0d010401-0000-0000-060e-2b3402060101}
DEFINE_AUID(AUID_AAFDescriptiveFramework,
0x0d010401, 0x0000, 0x0000, 0x06, 0x0e, 0x2b, 0x34, 0x02, 0x06, 0x01, 0x01);


#endif // ! __AAFStoredObjectIDs_h__
