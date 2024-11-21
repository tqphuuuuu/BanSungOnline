// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusNodeSubGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPTIMUSCORE_OptimusNodeSubGraph_generated_h
#error "OptimusNodeSubGraph.generated.h already included, missing '#pragma once' in OptimusNodeSubGraph.h"
#endif
#define OPTIMUSCORE_OptimusNodeSubGraph_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeSubGraph_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusNodeSubGraph(); \
	friend struct Z_Construct_UClass_UOptimusNodeSubGraph_Statics; \
public: \
	DECLARE_CLASS(UOptimusNodeSubGraph, UOptimusNodeGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), NO_API) \
	DECLARE_SERIALIZER(UOptimusNodeSubGraph) \
	virtual UObject* _getUObject() const override { return const_cast<UOptimusNodeSubGraph*>(this); }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeSubGraph_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptimusNodeSubGraph(UOptimusNodeSubGraph&&); \
	UOptimusNodeSubGraph(const UOptimusNodeSubGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusNodeSubGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusNodeSubGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOptimusNodeSubGraph) \
	NO_API virtual ~UOptimusNodeSubGraph();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeSubGraph_h_12_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeSubGraph_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeSubGraph_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeSubGraph_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPTIMUSCORE_API UClass* StaticClass<class UOptimusNodeSubGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeSubGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
