//=---------------------------------------------------------------------=
//
// This file was GENERATED for the AAF SDK
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

/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */
//=--------------------------------------------------------------------------=
// Definitions for all of the public IID needed by an AAF SDK client
//=--------------------------------------------------------------------------=
//

#ifdef __cplusplus
extern "C"{
#endif


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_IAAFAIFCDescriptor = {0xe684d774,0xb935,0x11d2,{0xbf,0x9d,0x00,0x10,0x4b,0xc9,0x15,0x6d}};


const IID IID_IAAFClassDef = {0xdfbd6525,0x1d81,0x11d2,{0xbf,0x96,0x00,0x60,0x97,0x11,0x62,0x12}};


const IID IID_IAAFCodecDef = {0xAD1BB856,0xDBB2,0x11d2,{0x80,0x9C,0x00,0x60,0x08,0x14,0x3E,0x6F}};


const IID IID_IAAFCommentMarker = {0xe684d78a,0xb935,0x11d2,{0xbf,0x9d,0x00,0x10,0x4b,0xc9,0x15,0x6d}};


const IID IID_IAAFComponent = {0x38e6f8a1,0x2a2c,0x11d2,{0x84,0x11,0x00,0x60,0x08,0x32,0xac,0xb8}};


const IID IID_IAAFCompositionMob = {0x91920d63,0x2a2e,0x11D2,{0xbf,0xA3,0x00,0x60,0x97,0x11,0x62,0x12}};


const IID IID_IAAFConstantValue = {0xb8ddc080,0x2afa,0x11D2,{0xbf,0xA5,0x00,0x60,0x97,0x11,0x62,0x12}};


const IID IID_IAAFContainerDef = {0xAD1BB858,0xDBB2,0x11d2,{0x80,0x9C,0x00,0x60,0x08,0x14,0x3E,0x6F}};


const IID IID_IAAFContentStorage = {0x54D4C482,0x5F8B,0x11d2,{0x80,0x73,0x00,0x60,0x08,0x14,0x3E,0x6F}};


const IID IID_IAAFControlPoint = {0x86192db1,0x2a23,0x11D2,{0xBF,0xa3,0x00,0x60,0x97,0x11,0x62,0x12}};


const IID IID_IAAFDataDef = {0xdfbd6529,0x1d81,0x11d2,{0xbf,0x96,0x00,0x60,0x97,0x11,0x62,0x12}};


const IID IID_IAAFDefObject = {0xdfbd6527,0x1d81,0x11d2,{0xbf,0x96,0x00,0x60,0x97,0x11,0x62,0x12}};


const IID IID_IAAFPluginDef = {0xAD1BB854,0xDBB2,0x11d2,{0x80,0x9C,0x00,0x60,0x08,0x14,0x3E,0x6F}};


const IID IID_IAAFDictionary = {0xB1A21398,0x1A7D,0x11D2,{0xBF,0x78,0x00,0x10,0x4B,0xC9,0x15,0x6D}};


const IID IID_IAAFEdgecode = {0x38e6f8a4,0x2a2c,0x11d2,{0x84,0x11,0x00,0x60,0x08,0x32,0xac,0xb8}};


const IID IID_IAAFOperationDef = {0x14035d91,0x1ff5,0x11d2,{0xbf,0x97,0x00,0x60,0x97,0x11,0x62,0x12}};


const IID IID_IAAFEssenceAccess = {0xaed97eb0,0x2bc8,0x11D2,{0xbf,0xaa,0x00,0x60,0x97,0x11,0x62,0x12}};


const IID IID_IAAFEssenceData = {0x6a33f4e2,0x8ed6,0x11d2,{0xbf,0x9d,0x00,0x10,0x4b,0xc9,0x15,0x6d}};


const IID IID_IAAFEssenceDescriptor = {0x94659783,0x2a3c,0x11D2,{0xbf,0xA4,0x00,0x60,0x97,0x11,0x62,0x12}};


const IID IID_IAAFEvent = {0xe684d790,0xb935,0x11d2,{0xbf,0x9d,0x00,0x10,0x4b,0xc9,0x15,0x6d}};


const IID IID_IAAFEventMobSlot = {0xe684d766,0xb935,0x11d2,{0xbf,0x9d,0x00,0x10,0x4b,0xc9,0x15,0x6d}};


const IID IID_IAAFFile = {0x9346ACD3,0x2713,0x11d2,{0x80,0x35,0x00,0x60,0x08,0x14,0x3E,0x6F}};


const IID IID_IAAFFileDescriptor = {0xe58a8561,0x2a3e,0x11D2,{0xbf,0xa4,0x00,0x60,0x97,0x11,0x62,0x12}};


const IID IID_IAAFFilmDescriptor = {0xe58a8563,0x2a3e,0x11D2,{0xbf,0xa4,0x00,0x60,0x97,0x11,0x62,0x12}};


const IID IID_IAAFDigitalImageDescriptor = {0x44861701,0x8AEA,0x11d2,{0x81,0x3C,0x00,0x60,0x97,0x31,0x01,0x72}};


const IID IID_IAAFCDCIDescriptor = {0x44861703,0x8AEA,0x11d2,{0x81,0x3C,0x00,0x60,0x97,0x31,0x01,0x72}};


const IID IID_IAAFEssenceFormat = {0x34C2DC82,0x904C,0x11d2,{0x80,0x88,0x00,0x60,0x08,0x14,0x3E,0x6F}};


const IID IID_IAAFEssenceGroup = {0xe58a8567,0x2a3e,0x11D2,{0xbf,0xa4,0x00,0x60,0x97,0x11,0x62,0x12}};


const IID IID_IAAFFiller = {0x38e6f8a9,0x2a2c,0x11d2,{0x84,0x11,0x00,0x60,0x08,0x32,0xac,0xb8}};


const IID IID_IAAFFindSourceInfo = {0x9346ACD1,0x2713,0x11d2,{0x80,0x35,0x00,0x60,0x08,0x14,0x3E,0x6F}};


const IID IID_IAAFOperationGroup = {0x3AE3BA82,0x2C98,0x11d2,{0x80,0x42,0x00,0x60,0x08,0x14,0x3E,0x6F}};


const IID IID_IAAFGPITrigger = {0xe684d78c,0xb935,0x11d2,{0xbf,0x9d,0x00,0x10,0x4b,0xc9,0x15,0x6d}};


const IID IID_IAAFHeader = {0xB1A21382,0x1A7D,0x11D2,{0xBF,0x78,0x00,0x10,0x4B,0xC9,0x15,0x6D}};


const IID IID_IAAFIdentification = {0xB1A2137E,0x1A7D,0x11D2,{0xBF,0x78,0x00,0x10,0x4B,0xC9,0x15,0x6D}};


const IID IID_IAAFInterpolationDef = {0x293600A3,0x0D37,0x11d3,{0x80,0xA9,0x00,0x60,0x08,0x14,0x3E,0x6F}};


const IID IID_IAAFKLVData = {0x46114414,0x0676,0x11d4,{0xA3,0x56,0x00,0x90,0x27,0xDF,0xCA,0x6A}};


const IID IID_IAAFLocator = {0xd4f89061,0x69d6,0x11d2,{0x84,0x1b,0x00,0x60,0x08,0x32,0xac,0xb8}};


const IID IID_IAAFMasterMob = {0xb1a21372,0x1a7d,0x11d2,{0xbf,0x78,0x00,0x10,0x4b,0xc9,0x15,0x6d}};


const IID IID_IAAFMetaDefinition = {0xcee32174,0x0c10,0x11d4,{0x80,0x14,0x00,0x10,0x4b,0xc9,0x15,0x6d}};


const IID IID_IAAFMob = {0xB1A21374,0x1A7D,0x11d2,{0xBF,0x78,0x00,0x10,0x4B,0xC9,0x15,0x6D}};


const IID IID_IAAFMobSlot = {0xB1A21376,0x1A7D,0x11D2,{0xBF,0x78,0x00,0x10,0x4B,0xC9,0x15,0x6D}};


const IID IID_IAAFNestedScope = {0xe44be451,0x2099,0x11d2,{0xbf,0x98,0x00,0x60,0x97,0x11,0x62,0x12}};


const IID IID_IAAFNetworkLocator = {0x2c1097b2,0x69d6,0x11d2,{0x84,0x1b,0x00,0x60,0x08,0x32,0xac,0xb8}};


const IID IID_IAAFObject = {0xB1A213AB,0x1A7D,0x11D2,{0xBF,0x78,0x00,0x10,0x4B,0xC9,0x15,0x6D}};


const IID IID_IAAFParameter = {0x9c568a81,0x2096,0x11d2,{0xbf,0x98,0x00,0x60,0x97,0x11,0x62,0x12}};


const IID IID_IAAFParameterDef = {0x20045fa1,0x1d87,0x11d2,{0xbf,0x96,0x00,0x60,0x97,0x11,0x62,0x12}};


const IID IID_IAAFProperty = {0x83057d74,0x9691,0x11d2,{0xaa,0x7f,0x80,0xe6,0xaa,0x00,0x00,0x00}};


const IID IID_IAAFPropertyDef = {0xdfbd6521,0x1d81,0x11d2,{0xbf,0x96,0x00,0x60,0x97,0x11,0x62,0x12}};


const IID IID_IAAFPropertyValue = {0x83057d72,0x9691,0x11d2,{0xaa,0x7f,0x80,0xe6,0xaa,0x00,0x00,0x00}};


const IID IID_IAAFPluginManager = {0xAD1BB85C,0xDBB2,0x11d2,{0x80,0x9C,0x00,0x60,0x08,0x14,0x3E,0x6F}};


const IID IID_IAAFPulldown = {0x92B88031,0x2B2B,0x11d2,{0xBF,0x7E,0x00,0x10,0x4B,0xC9,0x15,0x6D}};


const IID IID_IAAFRGBADescriptor = {0xe684d772,0xb935,0x11d2,{0xbf,0x9d,0x00,0x10,0x4b,0xc9,0x15,0x6d}};


const IID IID_IAAFScopeReference = {0xe44be453,0x2099,0x11d2,{0xbf,0x98,0x00,0x60,0x97,0x11,0x62,0x12}};


const IID IID_IAAFSegment = {0x7a2f0570,0x1ba3,0x11D2,{0xbf,0xaa,0x00,0x60,0x97,0x11,0x62,0x12}};


const IID IID_IAAFSelector = {0xe684d788,0xb935,0x11d2,{0xbf,0x9d,0x00,0x10,0x4b,0xc9,0x15,0x6d}};


const IID IID_IAAFSequence = {0x66e855f0,0x2bc2,0x11d2,{0xbf,0xaa,0x00,0x60,0x97,0x11,0x62,0x12}};


const IID IID_IAAFSourceClip = {0x38e6f8a7,0x2a2c,0x11d2,{0x84,0x11,0x00,0x60,0x08,0x32,0xac,0xb8}};


const IID IID_IAAFSourceMob = {0xB1A2137C,0x1A7D,0x11D2,{0xBF,0x78,0x00,0x10,0x4B,0xC9,0x15,0x6D}};


const IID IID_IAAFSourceReference = {0x92B88033,0x2B2B,0x11d2,{0xBF,0x7E,0x00,0x10,0x4B,0xC9,0x15,0x6D}};


const IID IID_IAAFStaticMobSlot = {0xe684d764,0xb935,0x11d2,{0xbf,0x9d,0x00,0x10,0x4b,0xc9,0x15,0x6d}};


const IID IID_IAAFTapeDescriptor = {0xe58a8569,0x2a3e,0x11D2,{0xbf,0xa4,0x00,0x60,0x97,0x11,0x62,0x12}};


const IID IID_IAAFTaggedValue = {0xe684d762,0xb935,0x11d2,{0xbf,0x9d,0x00,0x10,0x4b,0xc9,0x15,0x6d}};


const IID IID_IAAFTextLocator = {0xe684d768,0xb935,0x11d2,{0xbf,0x9d,0x00,0x10,0x4b,0xc9,0x15,0x6d}};


const IID IID_IAAFTimecode = {0x92B88035,0x2B2B,0x11d2,{0xBF,0x7E,0x00,0x10,0x4B,0xC9,0x15,0x6D}};


const IID IID_IAAFTimelineMobSlot = {0xB1A21378,0x1A7D,0x11D2,{0xBF,0x78,0x00,0x10,0x4B,0xC9,0x15,0x6D}};


const IID IID_IAAFTransition = {0xE3F38312,0x2D3C,0x11d2,{0x80,0x43,0x00,0x60,0x08,0x14,0x3E,0x6F}};


const IID IID_IAAFTIFFDescriptor = {0xe684d76c,0xb935,0x11d2,{0xbf,0x9d,0x00,0x10,0x4b,0xc9,0x15,0x6d}};


const IID IID_IAAFTimecodeStream = {0x7B007BF2,0x2D39,0x11d2,{0x80,0x43,0x00,0x60,0x08,0x14,0x3E,0x6F}};


const IID IID_IAAFTimecodeStream12M = {0xEBF5EDB2,0x2D3A,0x11d2,{0x80,0x43,0x00,0x60,0x08,0x14,0x3E,0x6F}};


const IID IID_IAAFTypeDef = {0xdfbd6523,0x1d81,0x11d2,{0xbf,0x96,0x00,0x60,0x97,0x11,0x62,0x12}};


const IID IID_IAAFTypeDefCharacter = {0xFE717CAA,0xF04C,0x11d3,{0x80,0x0B,0x00,0x10,0x4B,0xC9,0x15,0x6D}};


const IID IID_IAAFTypeDefIndirect = {0xFE717CA8,0xF04C,0x11d3,{0x80,0x0B,0x00,0x10,0x4B,0xC9,0x15,0x6D}};


const IID IID_IAAFTypeDefInt = {0x809c8ca2,0x9884,0x11d2,{0x84,0x1f,0x00,0x60,0x08,0x32,0xac,0xb8}};


const IID IID_IAAFTypeDefRename = {0x307e9e6a,0xdcb2,0x11d2,{0x84,0x29,0x00,0x60,0x08,0x32,0xac,0xb8}};


const IID IID_IAAFTypeDefEnum = {0x307e9e64,0xdcb2,0x11d2,{0x84,0x29,0x00,0x60,0x08,0x32,0xac,0xb8}};


const IID IID_IAAFTypeDefExtEnum = {0xa5456f01,0x0ef2,0x11d3,{0x84,0x2e,0x00,0x60,0x08,0x32,0xac,0xb8}};


const IID IID_IAAFTypeDefFixedArray = {0xc3274646,0x9467,0x11d2,{0x84,0x1f,0x00,0x60,0x08,0x32,0xac,0xb8}};


const IID IID_IAAFTypeDefRecord = {0x809c8ca6,0x9884,0x11d2,{0x84,0x1f,0x00,0x60,0x08,0x32,0xac,0xb8}};


const IID IID_IAAFTypeDefSet = {0x381e1f22,0xe7bb,0x11d2,{0x84,0x2a,0x00,0x60,0x08,0x32,0xac,0xb8}};


const IID IID_IAAFTypeDefStream = {0x307e9e6e,0xdcb2,0x11d2,{0x84,0x29,0x00,0x60,0x08,0x32,0xac,0xb8}};


const IID IID_IAAFTypeDefString = {0x307e9e68,0xdcb2,0x11d2,{0x84,0x29,0x00,0x60,0x08,0x32,0xac,0xb8}};


const IID IID_IAAFTypeDefStrongObjRef = {0x381e1f26,0xe7bb,0x11d2,{0x84,0x2a,0x00,0x60,0x08,0x32,0xac,0xb8}};


const IID IID_IAAFTypeDefWeakObjRef = {0x381e1f24,0xe7bb,0x11d2,{0x84,0x2a,0x00,0x60,0x08,0x32,0xac,0xb8}};


const IID IID_IAAFTypeDefObjectRef = {0xc3274644,0x9467,0x11d2,{0x84,0x1f,0x00,0x60,0x08,0x32,0xac,0xb8}};


const IID IID_IAAFTypeDefOpaque = {0xFE717CAC,0xF04C,0x11d3,{0x80,0x0B,0x00,0x10,0x4B,0xC9,0x15,0x6D}};


const IID IID_IAAFTypeDefVariableArray = {0x307e9e66,0xdcb2,0x11d2,{0x84,0x29,0x00,0x60,0x08,0x32,0xac,0xb8}};


const IID IID_IAAFVaryingValue = {0x91920d60,0x2a2e,0x11D2,{0xbf,0xA3,0x00,0x60,0x97,0x11,0x62,0x12}};


const IID IID_IAAFWAVEDescriptor = {0x4c2e1692,0x8ae6,0x11d2,{0x81,0x3c,0x00,0x60,0x97,0x31,0x01,0x72}};


const IID IID_IEnumAAFClassDefs = {0xB1A2138E,0x1A7D,0x11D2,{0xBF,0x78,0x00,0x10,0x4B,0xC9,0x15,0x6D}};


const IID IID_IEnumAAFCodecDefs = {0x3B2C9AD4,0x022A,0x11d3,{0x80,0xA6,0x00,0x60,0x08,0x14,0x3E,0x6F}};


const IID IID_IEnumAAFCodecFlavours = {0xAB4D9F12,0xDD69,0x11d2,{0x80,0x9C,0x00,0x60,0x08,0x14,0x3E,0x6F}};


const IID IID_IEnumAAFComponents = {0xB1A21394,0x1A7D,0x11D2,{0xBF,0x78,0x00,0x10,0x4B,0xC9,0x15,0x6D}};


const IID IID_IEnumAAFContainerDefs = {0x3B2C9AD2,0x022A,0x11d3,{0x80,0xA6,0x00,0x60,0x08,0x14,0x3E,0x6F}};


const IID IID_IEnumAAFControlPoints = {0xB1A2139C,0x1A7D,0x11D2,{0xBF,0x78,0x00,0x10,0x4B,0xC9,0x15,0x6D}};


const IID IID_IEnumAAFDataDefs = {0xd8000382,0x498e,0x11d2,{0x84,0x1B,0x00,0x60,0x08,0x32,0xAC,0xB8}};


const IID IID_IEnumAAFIdentifications = {0xB1A21384,0x1A7D,0x11D2,{0xBF,0x78,0x00,0x10,0x4B,0xC9,0x15,0x6D}};


const IID IID_IEnumAAFInterpolationDefs = {0x293600A5,0x0D37,0x11d3,{0x80,0xA9,0x00,0x60,0x08,0x14,0x3E,0x6F}};


const IID IID_IEnumAAFOperationDefs = {0x92B88021,0x2B2B,0x11D2,{0xBF,0x7E,0x00,0x10,0x4B,0xC9,0x15,0x6D}};


const IID IID_IEnumAAFEssenceData = {0xB1A21392,0x1A7D,0x11D2,{0xBF,0x78,0x00,0x10,0x4B,0xC9,0x15,0x6D}};


const IID IID_IEnumAAFKLVData = {0x46114416,0x0676,0x11d4,{0xA3,0x56,0x00,0x90,0x27,0xDF,0xCA,0x6A}};


const IID IID_IEnumAAFLoadedPlugins = {0xAB4D9F14,0xDD69,0x11d2,{0x80,0x9C,0x00,0x60,0x08,0x14,0x3E,0x6F}};


const IID IID_IEnumAAFLocators = {0xB1A2139E,0x1A7D,0x11D2,{0xBF,0x78,0x00,0x10,0x4B,0xC9,0x15,0x6D}};


const IID IID_IEnumAAFMobSlots = {0xB1A21388,0x1A7D,0x11D2,{0xBF,0x78,0x00,0x10,0x4B,0xC9,0x15,0x6D}};


const IID IID_IEnumAAFMobs = {0xB1A21386,0x1A7D,0x11D2,{0xBF,0x78,0x00,0x10,0x4B,0xC9,0x15,0x6D}};


const IID IID_IEnumAAFParameterDefs = {0xB1A213A4,0x1A7D,0x11D2,{0xBF,0x78,0x00,0x10,0x4B,0xC9,0x15,0x6D}};


const IID IID_IEnumAAFParameters = {0x7227261E,0xA8C9,0x11D3,{0xA3,0xED,0x00,0x04,0xAC,0x96,0xA9,0x37}};


const IID IID_IEnumAAFProperties = {0xBE316DB2,0x7E73,0x11D2,{0x84,0x1D,0x00,0x60,0x08,0x32,0xAC,0xB8}};


const IID IID_IEnumAAFPropertyDefs = {0x245343C1,0x2D59,0x11D2,{0xBF,0x80,0x00,0x10,0x4B,0xC9,0x15,0x6D}};


const IID IID_IEnumAAFPropertyValues = {0x809c8caa,0x9884,0x11d2,{0x84,0x1f,0x00,0x60,0x08,0x32,0xac,0xb8}};


const IID IID_IEnumAAFPluginDefs = {0xAD1BB85F,0xDBB2,0x11d2,{0x80,0x9C,0x00,0x60,0x08,0x14,0x3E,0x6F}};


const IID IID_IEnumAAFPluginLocators = {0xAD1BB861,0xDBB2,0x11d2,{0x80,0x9C,0x00,0x60,0x08,0x14,0x3E,0x6F}};


const IID IID_IEnumAAFSegments = {0xB1A213A2,0x1A7D,0x11D2,{0xBF,0x78,0x00,0x10,0x4B,0xC9,0x15,0x6D}};


const IID IID_IEnumAAFTaggedValues = {0x5f7916f1,0x0f87,0x11d3,{0x8a,0x3e,0x00,0x50,0x04,0x0e,0xf7,0xd2}};


const IID IID_IEnumAAFTypeDefs = {0xB1A2138C,0x1A7D,0x11D2,{0xBF,0x78,0x00,0x10,0x4B,0xC9,0x15,0x6D}};


const IID IID_IAAFRawStorage = {0xF45FA9E1,0x7166,0x11D4,{0xB8,0x0D,0x00,0x00,0x86,0x3F,0x2C,0x27}};


const IID IID_IAAFRandomRawStorage = {0xB1341782,0x71FE,0x11d4,{0xB8,0x0D,0x00,0x00,0x86,0x3F,0x2C,0x27}};


const IID IID_IAAFGetFileBits = {0x3CC80282,0x72A8,0x11D4,{0xB8,0x0D,0x00,0x00,0x86,0x3F,0x2C,0x27}};


const IID IID_IAAFSetFileBits = {0x6D950762,0x8DB4,0x11D4,{0xB8,0x0D,0x00,0x00,0x86,0x3F,0x2C,0x27}};


const IID IID_IAAFRandomFile = {0x3CC80284,0x72A8,0x11D4,{0xB8,0x0D,0x00,0x00,0x86,0x3F,0x2C,0x27}};


const IID IID_IAAFEndian = {0x6BACC0C1,0x6091,0x11D2,{0x84,0x1B,0x00,0x60,0x08,0x32,0xAC,0xB8}};


const IID IID_IAAFSearchSource = {0x332CBDD0,0x5425,0x11D2,{0xAA,0x7A,0x10,0x00,0x3D,0x00,0x00,0x00}};


const IID IID_IAAFEssenceMultiAccess = {0xD815E2B4,0x2425,0x11d3,{0x80,0xAD,0x00,0x60,0x08,0x14,0x3E,0x6F}};


const IID IID_IAAFTypeDefVariableArrayEx = {0x7f73d4b3,0x6f9a,0x11d4,{0x8e,0x59,0x00,0x90,0x27,0xdf,0xcc,0x26}};


const IID IID_IAAFMasterMobEx = {0xb1a21370,0x1a7d,0x11d2,{0xbf,0x78,0x00,0x10,0x4b,0xc9,0x15,0x6d}};


#ifdef __cplusplus
}
#endif
