// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusDeformerInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef OPTIMUSCORE_OptimusDeformerInstance_generated_h
#error "OptimusDeformerInstance.generated.h already included, missing '#pragma once' in OptimusDeformerInstance.h"
#endif
#define OPTIMUSCORE_OptimusDeformerInstance_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_87_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FOptimusDeformerInstanceExecInfo>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FOptimusDeformerInstanceComponentBinding>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_140_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusDeformerInstanceSettings(); \
	friend struct Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics; \
public: \
	DECLARE_CLASS(UOptimusDeformerInstanceSettings, UMeshDeformerInstanceSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), NO_API) \
	DECLARE_SERIALIZER(UOptimusDeformerInstanceSettings)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_140_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusDeformerInstanceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptimusDeformerInstanceSettings(UOptimusDeformerInstanceSettings&&); \
	UOptimusDeformerInstanceSettings(const UOptimusDeformerInstanceSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusDeformerInstanceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusDeformerInstanceSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusDeformerInstanceSettings) \
	NO_API virtual ~UOptimusDeformerInstanceSettings();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_136_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_140_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_140_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_140_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPTIMUSCORE_API UClass* StaticClass<class UOptimusDeformerInstanceSettings>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_172_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEnqueueTriggerGraph); \
	DECLARE_FUNCTION(execSetNameArrayVariable); \
	DECLARE_FUNCTION(execSetNameVariable); \
	DECLARE_FUNCTION(execSetTransformArrayVariable); \
	DECLARE_FUNCTION(execSetTransformVariable); \
	DECLARE_FUNCTION(execSetRotatorArrayVariable); \
	DECLARE_FUNCTION(execSetRotatorVariable); \
	DECLARE_FUNCTION(execSetQuatArrayVariable); \
	DECLARE_FUNCTION(execSetQuatVariable); \
	DECLARE_FUNCTION(execSetLinearColorArrayVariable); \
	DECLARE_FUNCTION(execSetLinearColorVariable); \
	DECLARE_FUNCTION(execSetVector4ArrayVariable); \
	DECLARE_FUNCTION(execSetVector4Variable); \
	DECLARE_FUNCTION(execSetVectorArrayVariable); \
	DECLARE_FUNCTION(execSetVectorVariable); \
	DECLARE_FUNCTION(execSetVector2ArrayVariable); \
	DECLARE_FUNCTION(execSetVector2Variable); \
	DECLARE_FUNCTION(execSetFloatArrayVariable); \
	DECLARE_FUNCTION(execSetFloatVariable); \
	DECLARE_FUNCTION(execSetInt4ArrayVariable); \
	DECLARE_FUNCTION(execSetInt4Variable); \
	DECLARE_FUNCTION(execSetInt3ArrayVariable); \
	DECLARE_FUNCTION(execSetInt3Variable); \
	DECLARE_FUNCTION(execSetInt2ArrayVariable); \
	DECLARE_FUNCTION(execSetInt2Variable); \
	DECLARE_FUNCTION(execSetIntArrayVariable); \
	DECLARE_FUNCTION(execSetIntVariable); \
	DECLARE_FUNCTION(execSetBoolArrayVariable); \
	DECLARE_FUNCTION(execSetBoolVariable);


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_172_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusDeformerInstance(); \
	friend struct Z_Construct_UClass_UOptimusDeformerInstance_Statics; \
public: \
	DECLARE_CLASS(UOptimusDeformerInstance, UMeshDeformerInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), NO_API) \
	DECLARE_SERIALIZER(UOptimusDeformerInstance)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_172_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusDeformerInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptimusDeformerInstance(UOptimusDeformerInstance&&); \
	UOptimusDeformerInstance(const UOptimusDeformerInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusDeformerInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusDeformerInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusDeformerInstance) \
	NO_API virtual ~UOptimusDeformerInstance();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_169_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_172_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_172_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_172_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_172_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPTIMUSCORE_API UClass* StaticClass<class UOptimusDeformerInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
