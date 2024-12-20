// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/StateTreeNodeBlueprintBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStateTreeTransitionPriority : uint8;
struct FStateTreeBlueprintPropertyRef;
struct FStateTreeEvent;
struct FStateTreeStateLink;
#ifdef STATETREEMODULE_StateTreeNodeBlueprintBase_generated_h
#error "StateTreeNodeBlueprintBase.generated.h already included, missing '#pragma once' in StateTreeNodeBlueprintBase.h"
#endif
#define STATETREEMODULE_StateTreeNodeBlueprintBase_generated_h

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPropertyDescriptionByPropertyName); \
	DECLARE_FUNCTION(execIsPropertyRefValid); \
	DECLARE_FUNCTION(execRequestTransition); \
	DECLARE_FUNCTION(execSendEvent);


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_40_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeNodeBlueprintBase(); \
	friend struct Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics; \
public: \
	DECLARE_CLASS(UStateTreeNodeBlueprintBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/StateTreeModule"), NO_API) \
	DECLARE_SERIALIZER(UStateTreeNodeBlueprintBase)


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStateTreeNodeBlueprintBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStateTreeNodeBlueprintBase(UStateTreeNodeBlueprintBase&&); \
	UStateTreeNodeBlueprintBase(const UStateTreeNodeBlueprintBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateTreeNodeBlueprintBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeNodeBlueprintBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeNodeBlueprintBase) \
	NO_API virtual ~UStateTreeNodeBlueprintBase();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_37_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_40_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STATETREEMODULE_API UClass* StaticClass<class UStateTreeNodeBlueprintBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h


#define FOREACH_ENUM_ESTATETREEBLUEPRINTPROPERTYCATEGORY(op) \
	op(EStateTreeBlueprintPropertyCategory::NotSet) \
	op(EStateTreeBlueprintPropertyCategory::Input) \
	op(EStateTreeBlueprintPropertyCategory::Parameter) \
	op(EStateTreeBlueprintPropertyCategory::Output) \
	op(EStateTreeBlueprintPropertyCategory::ContextObject) 

enum class EStateTreeBlueprintPropertyCategory : uint8;
template<> struct TIsUEnumClass<EStateTreeBlueprintPropertyCategory> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeBlueprintPropertyCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
