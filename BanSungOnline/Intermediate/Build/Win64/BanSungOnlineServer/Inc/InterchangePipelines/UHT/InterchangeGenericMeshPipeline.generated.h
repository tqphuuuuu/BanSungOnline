// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeGenericMeshPipeline.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGEPIPELINES_InterchangeGenericMeshPipeline_generated_h
#error "InterchangeGenericMeshPipeline.generated.h already included, missing '#pragma once' in InterchangeGenericMeshPipeline.h"
#endif
#define INTERCHANGEPIPELINES_InterchangeGenericMeshPipeline_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCombineSkeletalMeshes); \
	DECLARE_FUNCTION(execGetCombineSkeletalMeshes);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeGenericMeshPipeline(); \
	friend struct Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics; \
public: \
	DECLARE_CLASS(UInterchangeGenericMeshPipeline, UInterchangePipelineBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangePipelines"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeGenericMeshPipeline)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeGenericMeshPipeline(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeGenericMeshPipeline(UInterchangeGenericMeshPipeline&&); \
	UInterchangeGenericMeshPipeline(const UInterchangeGenericMeshPipeline&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeGenericMeshPipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeGenericMeshPipeline); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeGenericMeshPipeline) \
	NO_API virtual ~UInterchangeGenericMeshPipeline();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h_28_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEPIPELINES_API UClass* StaticClass<class UInterchangeGenericMeshPipeline>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
