//@doc
//@class    AAFPluginDescriptor | Implementation class for AAFPluginDescriptor
#ifndef __ImplAAFPluginDescriptor_h__
#define __ImplAAFPluginDescriptor_h__


/************************************************\
*												*
* Advanced Authoring Format						*
*												*
* Copyright (c) 1998-1999 Avid Technology, Inc. *
* Copyright (c) 1998-1999 Microsoft Corporation *
*												*
\************************************************/

class ImplAAFPluggableCode;

class ImplEnumAAFPluginLocators;



#ifndef __ImplAAFDefObject_h__
#include "ImplAAFDefObject.h"
#endif

#include "ImplAAFLocator.h"
#include "ImplAAFNetworkLocator.h"

class ImplAAFPluginDescriptor : public ImplAAFDefObject
{
public:
  //
  // Constructor/destructor
  //
  //********
  ImplAAFPluginDescriptor ();

protected:
  virtual ~ImplAAFPluginDescriptor ();

public:


  //****************
  // GetCategoryClass()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    GetCategoryClass
        // @parm [out] The CategoryClass
        (aafUID_t *  pCategoryClass);


  //****************
  // SetCategoryClass()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    SetCategoryClass
        // @parm [in] The Category Class
        (aafUID_t *  pCategoryClass);

  //****************
  // GetPluginVersion()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    GetPluginVersion
        // @parm [out] The Plugin Version
        (aafVersionType_t *  pVersion);

  //****************
  // SetPluginVersion()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    SetPluginVersion
        (aafVersionType_t *  pVersion);

  //****************
  // GetPluginVersionString()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    GetPluginVersionString
        (// @parm [in,string] Plugin version string
         wchar_t *  pVersionString,

         // @parm [in] length of the buffer to hold plugin version string
         aafInt32  bufSize);


  //****************
  // GetProductVersionStringLen()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    GetProductVersionStringLen
        // @parm [out] Mob Name
        (aafInt32 *  pLen);

  //****************
  // SetPluginVersionString()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    SetPluginVersionString
        // @parm [in, string] Plugin version
        (wchar_t *  pVersionString);

  //****************
  // GetPluginManufacturerName()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    GetPluginManufacturerName
        (// @parm [in,string] Plugin Manufacturer Name
         wchar_t *  pManufacturerName,

         // @parm [in] length of the buffer to hold plugin Manufacturer Name
         aafInt32  bufSize);


  //****************
  // GetProductManufacturerNameLen()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    GetProductManufacturerNameLen
        // @parm [out] Manufacturer Name
        (aafInt32 *  pLen);

  //****************
  // SetPluginManufacturerName()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    SetPluginManufacturerName
        // @parm [in, string] Plugin Manufacturer
        (wchar_t *  pManufacturerName);

  //****************
  // GetManufacturerInfo()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    GetManufacturerInfo
        // @parm [out,retval] ManufacturerInfo property value
        (ImplAAFNetworkLocator ** ppResult);

  //****************
  // SetManufacturerInfo()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    SetManufacturerInfo
        // @parm [in] ManufacturerInfo property value
        (ImplAAFNetworkLocator * pManufacturerInfo);

  //****************
  // GetManufacturerID()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    GetManufacturerID
        // @parm [out] The ManufacturerID
        (aafUID_t *  pManufacturerID);


  //****************
  // SetManufacturerID()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    SetManufacturerID
        // @parm [in] The Category Class
        (aafUID_t *  pManufacturerID);

  //****************
  // GetHardwarePlatform()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    GetHardwarePlatform
        // @parm [out] The HardwarePlatform
        (aafHardwarePlatform_t *  pHardwarePlatform);

  //****************
  // SetHardwarePlatform()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    SetHardwarePlatform
        // @parm [in] The Category Class
        (aafHardwarePlatform_t  hardwarePlatform);


  //****************
  // GetPlatformVersionRange()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    GetPlatformVersionRange
        (// @parm [out] The Minimum Platform Version
         aafVersionType_t *  pMinVersion,

         // @parm [out] The Maximum Platform Version
         aafVersionType_t *  pMaxVersion);

  //****************
  // SetPlatformMinimumVersion()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    SetPlatformMinimumVersion
        // @parm [in] The Minimum Platform Version
        (aafVersionType_t *  pMinVersion);

  //****************
  // SetPlatformMaximumVersion()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    SetPlatformMaximumVersion
        // @parm [in] The Maximum Platform Version
        (aafVersionType_t *  pMaxVersion);

  //****************
  // GetEngine()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    GetEngine
        // @parm [out] The software engine
        (aafEngine_t *  pEngine);


  //****************
  // SetEngine()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    SetEngine
        // @parm [in] The software engine
        (aafEngine_t  engine);


  //****************
  // GetEngineVersionRange()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    GetEngineVersionRange
        (// @parm [out] The Minimum Engine Version
         aafVersionType_t *  pMinVersion,

         // @parm [out] The Maximum Engine Version
         aafVersionType_t *  pMaxVersion);


  //****************
  // SetEngineMinimumVersion()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    SetEngineMinimumVersion
        // @parm [in] The Minimum Engine Version
        (aafVersionType_t *  pMinVersion);


  //****************
  // SetEngineMaximumVersion()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    SetEngineMaximumVersion
        // @parm [in] The Minimum Engine Version
        (aafVersionType_t *  pMaxVersion);


  //****************
  // GetPluginAPI()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    GetPluginAPI
        // @parm [out] The PluginAPI
        (aafPluginAPI_t *  pPluginAPI);


  //****************
  // SetPluginAPI()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    SetPluginAPI
        // @parm [in] The Category Class
        (aafPluginAPI_t  pluginAPI);


  //****************
  // GetPluginAPIVersionRange()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    GetPluginAPIVersionRange
        (// @parm [out] The Minimum Plugin API Version
         aafVersionType_t *  pMinVersion,

         // @parm [out] The Maximum Plugin API Version
         aafVersionType_t *  pMaxVersion);


  //****************
  // SetPluginAPIMinimumVersion()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    SetPluginAPIMinimumVersion
        // @parm [out] The Minimum Plugin API Version
        (aafVersionType_t *  pMinVersion);

  //****************
  // SetPluginAPIMaximumVersion()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    SetPluginAPIMaximumVersion
        // @parm [in] The Maximum Plugin API Version
        (aafVersionType_t *  pMaxVersion);

  //****************
  // IsSoftwareOnly()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    IsSoftwareOnly
        // @parm [out] The IsSoftwareOnly
        (aafBool *  pIsSoftwareOnly);



  //****************
  // SetIsSoftwareOnly()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    SetIsSoftwareOnly
        // @parm [in] The isSoftwareOnly flag
        (aafBool  isSoftwareOnly);



  //****************
  // IsAccelerated()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    IsAccelerated
        // @parm [out] The IsAccelerated
        (aafBool *  pIsAccelerated);




  //****************
  // SetIsAccelerated()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    SetIsAccelerated
        // @parm [in] The isAccelerated flag
        (aafBool  isAccelerated);

  //****************
  // SupportsAuthentication()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    SupportsAuthentication
        // @parm [out] The SupportsAuthentication
        (aafBool *  pSupportsAuthentication);


  //****************
  // SetSupportsAuthentication()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    SetSupportsAuthentication
        // @parm [in] The SupportsAuthentication flag
        (aafBool  SupportsAuthentication);

  //****************
  // GetPluggableCode()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    GetPluggableCode
        // @parm [out] An interface pointer to the pluggable code object
        (ImplAAFPluggableCode ** pCode);

  //****************
  // GetNumLocators()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    GetNumLocators
        // @parm [out] Returns the number of locators
        (aafUInt32 *  pCount);


  //****************
  // AppendLocator()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    AppendLocator
        // @parm [in] Locator to append
        (ImplAAFLocator * pLocator);


  //****************
  // PrependLocator()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    PrependLocator
        // @parm [in] Locator to append
        (ImplAAFLocator * pLocator);


  //****************
  // IsPluginLocal()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    IsPluginLocal
        // @parm [out] Returns AAFTrue if the plugin is local
        (aafBool *  pIsLocal);

  //****************
  // GetPluginDescriptorID()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    GetPluginDescriptorID
        // @parm [out] The unique plugin descriptor id
        (aafUID_t *  pDescriptorID);


  //****************
  // SetPluginDescriptorID()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    SetPluginDescriptorID
        // @parm [in] New Mob ID
        (aafUID_t  descriptorID);
  

  //****************
  // EnumPluginLocators()
  //
  virtual AAFRESULT STDMETHODCALLTYPE
    EnumPluginLocators
        // @parm [out, retval] Plugin Locator Enumeration
        (ImplEnumAAFPluginLocators ** ppEnum);





public:
  // Declare this class to be storable.
  //
  OMDECLARE_STORABLE(ImplAAFPluginDescriptor)

  // Declare the module test method. The implementation of the will be be
  // in /test/ImplAAFPluginDescriptorTest.cpp.
  static AAFRESULT test();

public:
	virtual AAFRESULT
		GetNthLocator (aafInt32 index, ImplAAFLocator **ppLocator);
	virtual AAFRESULT
		 GetNumLocators (aafInt32 *  pCount);

private:
	OMFixedSizeProperty<aafUID_t>					_categoryClass;
	OMFixedSizeProperty<aafVersionType_t>			_pluginVersion;	//!!!StructuredProperty?
	OMWideStringProperty                            _pluginVersionString;
	OMWideStringProperty                            _pluginManufacturerName;
	OMStrongReferenceProperty<ImplAAFNetworkLocator> _manufacturerURL;
	OMFixedSizeProperty<aafUID_t>					_pluginManufacturerID;
	OMFixedSizeProperty<aafUID_t>					_platform;
	OMFixedSizeProperty<aafVersionType_t>			_minPlatformVersion;	//!!!StructuredProperty?
	OMFixedSizeProperty<aafVersionType_t>			_maxPlatformVersion;	//!!!StructuredProperty?
	OMFixedSizeProperty<aafUID_t>					_engine;
	OMFixedSizeProperty<aafVersionType_t>			_minEngineVersion;	//!!!StructuredProperty?
	OMFixedSizeProperty<aafVersionType_t>			_maxEngineVersion;	//!!!StructuredProperty?
	OMFixedSizeProperty<aafUID_t>					_pluginAPI;
	OMFixedSizeProperty<aafVersionType_t>			_minPluginAPIVersion;	//!!!StructuredProperty?
	OMFixedSizeProperty<aafVersionType_t>			_maxPluginAPIVersion;	//!!!StructuredProperty?
	OMFixedSizeProperty<aafBool>					_softwareOnly;
	OMFixedSizeProperty<aafBool>					_accelerator;
    OMStrongReferenceVectorProperty<ImplAAFLocator> _locators;
	OMFixedSizeProperty<aafBool>					_authentication;
};

#endif // ! __ImplAAFPluginDescriptor_h__


