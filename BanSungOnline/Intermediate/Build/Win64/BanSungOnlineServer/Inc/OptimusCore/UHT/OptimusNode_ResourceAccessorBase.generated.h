// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/OptimusNode_ResourceAccessorBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPTIMUSCORE_OptimusNode_ResourceAccessorBase_generated_h
#error "OptimusNode_ResourceAccessorBase.generated.h already included, missing '#pragma once' in OptimusNode_ResourceAccessorBase.h"
#endif
#define OPTIMUSCORE_OptimusNode_ResourceAccessorBase_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FOptimusNode_ResourceAccessorBase_DuplicationInfo>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusNode_ResourceAccessorBase(); \
	friend struct Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics; \
public: \
	DECLARE_CLASS(UOptimusNode_ResourceAccessorBase, UOptimusNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/OptimusCore"), NO_API) \
	DECLARE_SERIALIZER(UOptimusNode_ResourceAccessorBase) \
	virtual UObject* _getUObject() const override { return const_cast<UOptimusNode_ResourceAccessorBase*>(this); }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusNode_ResourceAccessorBase(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptimusNode_ResourceAccessorBase(UOptimusNode_ResourceAccessorBase&&); \
	UOptimusNode_ResourceAccessorBase(const UOptimusNode_ResourceAccessorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusNode_ResourceAccessorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusNode_ResourceAccessorBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UOptimusNode_ResourceAccessorBase) \
	NO_API virtual ~UOptimusNode_ResourceAccessorBase();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_35_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPTIMUSCORE_API UClass* StaticClass<class UOptimusNode_ResourceAccessorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
