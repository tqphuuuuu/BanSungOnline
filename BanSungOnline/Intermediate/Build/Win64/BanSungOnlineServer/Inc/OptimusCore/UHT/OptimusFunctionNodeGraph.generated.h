// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusFunctionNodeGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPTIMUSCORE_OptimusFunctionNodeGraph_generated_h
#error "OptimusFunctionNodeGraph.generated.h already included, missing '#pragma once' in OptimusFunctionNodeGraph.h"
#endif
#define OPTIMUSCORE_OptimusFunctionNodeGraph_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAccessSpecifierOptions);


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusFunctionNodeGraph(); \
	friend struct Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics; \
public: \
	DECLARE_CLASS(UOptimusFunctionNodeGraph, UOptimusNodeSubGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), NO_API) \
	DECLARE_SERIALIZER(UOptimusFunctionNodeGraph)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptimusFunctionNodeGraph(UOptimusFunctionNodeGraph&&); \
	UOptimusFunctionNodeGraph(const UOptimusFunctionNodeGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusFunctionNodeGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusFunctionNodeGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOptimusFunctionNodeGraph) \
	NO_API virtual ~UOptimusFunctionNodeGraph();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h_16_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPTIMUSCORE_API UClass* StaticClass<class UOptimusFunctionNodeGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
