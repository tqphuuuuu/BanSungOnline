// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/OptimusNode_ComponentSource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPTIMUSCORE_OptimusNode_ComponentSource_generated_h
#error "OptimusNode_ComponentSource.generated.h already included, missing '#pragma once' in OptimusNode_ComponentSource.h"
#endif
#define OPTIMUSCORE_OptimusNode_ComponentSource_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComponentSource_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOptimusNode_ComponentSource_DuplicationInfo_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FOptimusNode_ComponentSource_DuplicationInfo>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComponentSource_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusNode_ComponentSource(); \
	friend struct Z_Construct_UClass_UOptimusNode_ComponentSource_Statics; \
public: \
	DECLARE_CLASS(UOptimusNode_ComponentSource, UOptimusNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), NO_API) \
	DECLARE_SERIALIZER(UOptimusNode_ComponentSource) \
	virtual UObject* _getUObject() const override { return const_cast<UOptimusNode_ComponentSource*>(this); }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComponentSource_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusNode_ComponentSource(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptimusNode_ComponentSource(UOptimusNode_ComponentSource&&); \
	UOptimusNode_ComponentSource(const UOptimusNode_ComponentSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusNode_ComponentSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusNode_ComponentSource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOptimusNode_ComponentSource) \
	NO_API virtual ~UOptimusNode_ComponentSource();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComponentSource_h_25_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComponentSource_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComponentSource_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComponentSource_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPTIMUSCORE_API UClass* StaticClass<class UOptimusNode_ComponentSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComponentSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
