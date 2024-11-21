// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/StateTreeConsiderationBlueprintBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATETREEMODULE_StateTreeConsiderationBlueprintBase_generated_h
#error "StateTreeConsiderationBlueprintBase.generated.h already included, missing '#pragma once' in StateTreeConsiderationBlueprintBase.h"
#endif
#define STATETREEMODULE_StateTreeConsiderationBlueprintBase_generated_h

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConsiderationBlueprintBase_h_18_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConsiderationBlueprintBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeConsiderationBlueprintBase(); \
	friend struct Z_Construct_UClass_UStateTreeConsiderationBlueprintBase_Statics; \
public: \
	DECLARE_CLASS(UStateTreeConsiderationBlueprintBase, UStateTreeNodeBlueprintBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/StateTreeModule"), NO_API) \
	DECLARE_SERIALIZER(UStateTreeConsiderationBlueprintBase)


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConsiderationBlueprintBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStateTreeConsiderationBlueprintBase(UStateTreeConsiderationBlueprintBase&&); \
	UStateTreeConsiderationBlueprintBase(const UStateTreeConsiderationBlueprintBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateTreeConsiderationBlueprintBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeConsiderationBlueprintBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeConsiderationBlueprintBase) \
	NO_API virtual ~UStateTreeConsiderationBlueprintBase();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConsiderationBlueprintBase_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConsiderationBlueprintBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConsiderationBlueprintBase_h_18_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConsiderationBlueprintBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConsiderationBlueprintBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STATETREEMODULE_API UClass* StaticClass<class UStateTreeConsiderationBlueprintBase>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConsiderationBlueprintBase_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeBlueprintConsiderationWrapper_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStateTreeConsiderationBase Super;


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeBlueprintConsiderationWrapper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConsiderationBlueprintBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
