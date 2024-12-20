// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Selection/GeometrySelectionManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODELINGCOMPONENTS_GeometrySelectionManager_generated_h
#error "GeometrySelectionManager.generated.h already included, missing '#pragma once' in GeometrySelectionManager.h"
#endif
#define MODELINGCOMPONENTS_GeometrySelectionManager_generated_h

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshElementSelectionParams_Statics; \
	MODELINGCOMPONENTS_API static class UScriptStruct* StaticStruct();


template<> MODELINGCOMPONENTS_API UScriptStruct* StaticStruct<struct FMeshElementSelectionParams>();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometrySelectionManager(); \
	friend struct Z_Construct_UClass_UGeometrySelectionManager_Statics; \
public: \
	DECLARE_CLASS(UGeometrySelectionManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelingComponents"), NO_API) \
	DECLARE_SERIALIZER(UGeometrySelectionManager)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometrySelectionManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGeometrySelectionManager(UGeometrySelectionManager&&); \
	UGeometrySelectionManager(const UGeometrySelectionManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometrySelectionManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometrySelectionManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometrySelectionManager) \
	NO_API virtual ~UGeometrySelectionManager();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h_77_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h_80_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODELINGCOMPONENTS_API UClass* StaticClass<class UGeometrySelectionManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
