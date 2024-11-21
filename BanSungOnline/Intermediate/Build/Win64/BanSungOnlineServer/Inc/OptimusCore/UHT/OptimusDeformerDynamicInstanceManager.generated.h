// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusDeformerDynamicInstanceManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPTIMUSCORE_OptimusDeformerDynamicInstanceManager_generated_h
#error "OptimusDeformerDynamicInstanceManager.generated.h already included, missing '#pragma once' in OptimusDeformerDynamicInstanceManager.h"
#endif
#define OPTIMUSCORE_OptimusDeformerDynamicInstanceManager_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerDynamicInstanceManager_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusDeformerDynamicInstanceManager(); \
	friend struct Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_Statics; \
public: \
	DECLARE_CLASS(UOptimusDeformerDynamicInstanceManager, UMeshDeformerInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), NO_API) \
	DECLARE_SERIALIZER(UOptimusDeformerDynamicInstanceManager)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerDynamicInstanceManager_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusDeformerDynamicInstanceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptimusDeformerDynamicInstanceManager(UOptimusDeformerDynamicInstanceManager&&); \
	UOptimusDeformerDynamicInstanceManager(const UOptimusDeformerDynamicInstanceManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusDeformerDynamicInstanceManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusDeformerDynamicInstanceManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusDeformerDynamicInstanceManager) \
	NO_API virtual ~UOptimusDeformerDynamicInstanceManager();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerDynamicInstanceManager_h_24_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerDynamicInstanceManager_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerDynamicInstanceManager_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerDynamicInstanceManager_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPTIMUSCORE_API UClass* StaticClass<class UOptimusDeformerDynamicInstanceManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerDynamicInstanceManager_h


#define FOREACH_ENUM_EOPTIMUSDEFORMEREXECUTIONPHASE(op) \
	op(EOptimusDeformerExecutionPhase::AfterDefaultDeformer) \
	op(EOptimusDeformerExecutionPhase::OverrideDefaultDeformer) \
	op(EOptimusDeformerExecutionPhase::BeforeDefaultDeformer) 

enum class EOptimusDeformerExecutionPhase : uint8;
template<> struct TIsUEnumClass<EOptimusDeformerExecutionPhase> { enum { Value = true }; };
template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusDeformerExecutionPhase>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
