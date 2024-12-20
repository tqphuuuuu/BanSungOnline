// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/OptimusNode_GraphTerminal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPTIMUSCORE_OptimusNode_GraphTerminal_generated_h
#error "OptimusNode_GraphTerminal.generated.h already included, missing '#pragma once' in OptimusNode_GraphTerminal.h"
#endif
#define OPTIMUSCORE_OptimusNode_GraphTerminal_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GraphTerminal_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusNode_GraphTerminal(); \
	friend struct Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics; \
public: \
	DECLARE_CLASS(UOptimusNode_GraphTerminal, UOptimusNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), NO_API) \
	DECLARE_SERIALIZER(UOptimusNode_GraphTerminal) \
	virtual UObject* _getUObject() const override { return const_cast<UOptimusNode_GraphTerminal*>(this); }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GraphTerminal_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptimusNode_GraphTerminal(UOptimusNode_GraphTerminal&&); \
	UOptimusNode_GraphTerminal(const UOptimusNode_GraphTerminal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusNode_GraphTerminal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusNode_GraphTerminal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOptimusNode_GraphTerminal) \
	NO_API virtual ~UOptimusNode_GraphTerminal();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GraphTerminal_h_25_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GraphTerminal_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GraphTerminal_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GraphTerminal_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPTIMUSCORE_API UClass* StaticClass<class UOptimusNode_GraphTerminal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GraphTerminal_h


#define FOREACH_ENUM_EOPTIMUSTERMINALTYPE(op) \
	op(EOptimusTerminalType::Unknown) \
	op(EOptimusTerminalType::Entry) \
	op(EOptimusTerminalType::Return) 

enum class EOptimusTerminalType;
template<> struct TIsUEnumClass<EOptimusTerminalType> { enum { Value = true }; };
template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusTerminalType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
