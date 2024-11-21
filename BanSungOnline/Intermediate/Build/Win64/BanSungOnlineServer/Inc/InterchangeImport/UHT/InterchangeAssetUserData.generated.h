// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeAssetUserData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGEIMPORT_InterchangeAssetUserData_generated_h
#error "InterchangeAssetUserData.generated.h already included, missing '#pragma once' in InterchangeAssetUserData.h"
#endif
#define INTERCHANGEIMPORT_InterchangeAssetUserData_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_InterchangeAssetUserData_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeAssetUserData(); \
	friend struct Z_Construct_UClass_UInterchangeAssetUserData_Statics; \
public: \
	DECLARE_CLASS(UInterchangeAssetUserData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeAssetUserData)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_InterchangeAssetUserData_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeAssetUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeAssetUserData(UInterchangeAssetUserData&&); \
	UInterchangeAssetUserData(const UInterchangeAssetUserData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeAssetUserData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeAssetUserData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeAssetUserData) \
	NO_API virtual ~UInterchangeAssetUserData();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_InterchangeAssetUserData_h_11_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_InterchangeAssetUserData_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_InterchangeAssetUserData_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_InterchangeAssetUserData_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEIMPORT_API UClass* StaticClass<class UInterchangeAssetUserData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_InterchangeAssetUserData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
