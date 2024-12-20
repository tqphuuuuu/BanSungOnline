// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangePipelineMeshesUtilities.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterchangeBaseNodeContainer;
class UInterchangePipelineMeshesUtilities;
struct FInterchangeMeshGeometry;
struct FInterchangeMeshInstance;
struct FInterchangePipelineMeshesUtilitiesContext;
#ifdef INTERCHANGEPIPELINES_InterchangePipelineMeshesUtilities_generated_h
#error "InterchangePipelineMeshesUtilities.generated.h already included, missing '#pragma once' in InterchangePipelineMeshesUtilities.h"
#endif
#define INTERCHANGEPIPELINES_InterchangePipelineMeshesUtilities_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics; \
	INTERCHANGEPIPELINES_API static class UScriptStruct* StaticStruct();


template<> INTERCHANGEPIPELINES_API UScriptStruct* StaticStruct<struct FInterchangeLodSceneNodeContainer>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics; \
	INTERCHANGEPIPELINES_API static class UScriptStruct* StaticStruct();


template<> INTERCHANGEPIPELINES_API UScriptStruct* StaticStruct<struct FInterchangeMeshInstance>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics; \
	INTERCHANGEPIPELINES_API static class UScriptStruct* StaticStruct();


template<> INTERCHANGEPIPELINES_API UScriptStruct* StaticStruct<struct FInterchangeMeshGeometry>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_129_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics; \
	INTERCHANGEPIPELINES_API static class UScriptStruct* StaticStruct();


template<> INTERCHANGEPIPELINES_API UScriptStruct* StaticStruct<struct FInterchangePipelineMeshesUtilitiesContext>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_179_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetContext); \
	DECLARE_FUNCTION(execGetMeshGeometrySkeletonRootUid); \
	DECLARE_FUNCTION(execGetMeshInstanceSkeletonRootUid); \
	DECLARE_FUNCTION(execGetAllMeshInstanceUidsUsingMeshGeometryUid); \
	DECLARE_FUNCTION(execGetMeshGeometryByUid); \
	DECLARE_FUNCTION(execIsValidMeshGeometryUid); \
	DECLARE_FUNCTION(execGetMeshInstanceByUid); \
	DECLARE_FUNCTION(execIsValidMeshInstanceUid); \
	DECLARE_FUNCTION(execGetAllMeshGeometryNotInstanced); \
	DECLARE_FUNCTION(execGetAllStaticMeshGeometry); \
	DECLARE_FUNCTION(execGetAllSkinnedMeshGeometry); \
	DECLARE_FUNCTION(execGetAllMeshGeometry); \
	DECLARE_FUNCTION(execGetAllStaticMeshInstance); \
	DECLARE_FUNCTION(execGetAllSkinnedMeshInstance); \
	DECLARE_FUNCTION(execGetAllMeshInstanceUids); \
	DECLARE_FUNCTION(execCreateInterchangePipelineMeshesUtilities);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_179_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangePipelineMeshesUtilities(); \
	friend struct Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics; \
public: \
	DECLARE_CLASS(UInterchangePipelineMeshesUtilities, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangePipelines"), NO_API) \
	DECLARE_SERIALIZER(UInterchangePipelineMeshesUtilities)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_179_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangePipelineMeshesUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangePipelineMeshesUtilities(UInterchangePipelineMeshesUtilities&&); \
	UInterchangePipelineMeshesUtilities(const UInterchangePipelineMeshesUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangePipelineMeshesUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangePipelineMeshesUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangePipelineMeshesUtilities) \
	NO_API virtual ~UInterchangePipelineMeshesUtilities();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_176_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_179_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_179_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_179_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_179_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEPIPELINES_API UClass* StaticClass<class UInterchangePipelineMeshesUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
