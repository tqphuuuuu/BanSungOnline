// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mesh/InterchangeStaticMeshFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGEIMPORT_InterchangeStaticMeshFactory_generated_h
#error "InterchangeStaticMeshFactory.generated.h already included, missing '#pragma once' in InterchangeStaticMeshFactory.h"
#endif
#define INTERCHANGEIMPORT_InterchangeStaticMeshFactory_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshFactory_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeStaticMeshFactory(); \
	friend struct Z_Construct_UClass_UInterchangeStaticMeshFactory_Statics; \
public: \
	DECLARE_CLASS(UInterchangeStaticMeshFactory, UInterchangeFactoryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeStaticMeshFactory)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshFactory_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeStaticMeshFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeStaticMeshFactory(UInterchangeStaticMeshFactory&&); \
	UInterchangeStaticMeshFactory(const UInterchangeStaticMeshFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeStaticMeshFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeStaticMeshFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeStaticMeshFactory) \
	NO_API virtual ~UInterchangeStaticMeshFactory();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshFactory_h_24_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshFactory_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshFactory_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshFactory_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEIMPORT_API UClass* StaticClass<class UInterchangeStaticMeshFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
