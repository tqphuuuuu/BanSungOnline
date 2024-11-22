// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusComputeGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPTIMUSCORE_OptimusComputeGraph_generated_h
#error "OptimusComputeGraph.generated.h already included, missing '#pragma once' in OptimusComputeGraph.h"
#endif
#define OPTIMUSCORE_OptimusComputeGraph_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_OptimusComputeGraph_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UOptimusComputeGraph, NO_API)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_OptimusComputeGraph_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusComputeGraph(); \
	friend struct Z_Construct_UClass_UOptimusComputeGraph_Statics; \
public: \
	DECLARE_CLASS(UOptimusComputeGraph, UComputeGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), NO_API) \
	DECLARE_SERIALIZER(UOptimusComputeGraph) \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_OptimusComputeGraph_h_19_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_OptimusComputeGraph_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusComputeGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptimusComputeGraph(UOptimusComputeGraph&&); \
	UOptimusComputeGraph(const UOptimusComputeGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusComputeGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusComputeGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusComputeGraph) \
	NO_API virtual ~UOptimusComputeGraph();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_OptimusComputeGraph_h_15_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_OptimusComputeGraph_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_OptimusComputeGraph_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_OptimusComputeGraph_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPTIMUSCORE_API UClass* StaticClass<class UOptimusComputeGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_OptimusComputeGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS