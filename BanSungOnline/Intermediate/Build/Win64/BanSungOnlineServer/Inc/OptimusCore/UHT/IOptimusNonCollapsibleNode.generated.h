// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusNonCollapsibleNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPTIMUSCORE_IOptimusNonCollapsibleNode_generated_h
#error "IOptimusNonCollapsibleNode.generated.h already included, missing '#pragma once' in IOptimusNonCollapsibleNode.h"
#endif
#define OPTIMUSCORE_IOptimusNonCollapsibleNode_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCollapsibleNode_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusNonCollapsibleNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptimusNonCollapsibleNode(UOptimusNonCollapsibleNode&&); \
	UOptimusNonCollapsibleNode(const UOptimusNonCollapsibleNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusNonCollapsibleNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusNonCollapsibleNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusNonCollapsibleNode) \
	NO_API virtual ~UOptimusNonCollapsibleNode();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCollapsibleNode_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusNonCollapsibleNode(); \
	friend struct Z_Construct_UClass_UOptimusNonCollapsibleNode_Statics; \
public: \
	DECLARE_CLASS(UOptimusNonCollapsibleNode, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), NO_API) \
	DECLARE_SERIALIZER(UOptimusNonCollapsibleNode)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCollapsibleNode_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCollapsibleNode_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCollapsibleNode_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCollapsibleNode_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusNonCollapsibleNode() {} \
public: \
	typedef UOptimusNonCollapsibleNode UClassType; \
	typedef IOptimusNonCollapsibleNode ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCollapsibleNode_h_9_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCollapsibleNode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCollapsibleNode_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPTIMUSCORE_API UClass* StaticClass<class UOptimusNonCollapsibleNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCollapsibleNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
