// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreeTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATETREEMODULE_StateTreeTypes_generated_h
#error "StateTreeTypes.generated.h already included, missing '#pragma once' in StateTreeTypes.h"
#endif
#define STATETREEMODULE_StateTreeTypes_generated_h

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_212_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeStateHandle>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_320_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeDataHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeDataHandle>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_477_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeRandomTimeDuration>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_556_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompactEventDesc_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FCompactEventDesc>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_601_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompactStateTransition_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FCompactStateTransition>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_660_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompactStateTreeState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FCompactStateTreeState>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_788_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FCompactStateTreeParameters>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_825_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeStateIdToHandle>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_847_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeNodeIdToIndex>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_869_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeTransitionIdToIndex>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_912_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeStructRef_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeStructRef>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_1141_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeStateLink_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeStateLink>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h


#define FOREACH_ENUM_ESTATETREETRANSITIONTYPE(op) \
	op(EStateTreeTransitionType::None) \
	op(EStateTreeTransitionType::Succeeded) \
	op(EStateTreeTransitionType::Failed) \
	op(EStateTreeTransitionType::GotoState) \
	op(EStateTreeTransitionType::NextState) \
	op(EStateTreeTransitionType::NextSelectableState) \
	op(EStateTreeTransitionType::NotSet) 

enum class EStateTreeTransitionType : uint8;
template<> struct TIsUEnumClass<EStateTreeTransitionType> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeTransitionType>();

#define FOREACH_ENUM_ESTATETREEEXPRESSIONOPERAND(op) \
	op(EStateTreeExpressionOperand::Copy) \
	op(EStateTreeExpressionOperand::And) \
	op(EStateTreeExpressionOperand::Or) 

enum class EStateTreeExpressionOperand : uint8;
template<> struct TIsUEnumClass<EStateTreeExpressionOperand> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeExpressionOperand>();

#define FOREACH_ENUM_ESTATETREESTATETYPE(op) \
	op(EStateTreeStateType::State) \
	op(EStateTreeStateType::Group) \
	op(EStateTreeStateType::Linked) \
	op(EStateTreeStateType::LinkedAsset) \
	op(EStateTreeStateType::Subtree) 

enum class EStateTreeStateType : uint8;
template<> struct TIsUEnumClass<EStateTreeStateType> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeStateType>();

#define FOREACH_ENUM_ESTATETREESTATESELECTIONBEHAVIOR(op) \
	op(EStateTreeStateSelectionBehavior::None) \
	op(EStateTreeStateSelectionBehavior::TryEnterState) \
	op(EStateTreeStateSelectionBehavior::TrySelectChildrenInOrder) \
	op(EStateTreeStateSelectionBehavior::TrySelectChildrenAtRandom) \
	op(EStateTreeStateSelectionBehavior::TrySelectChildrenWithHighestUtility) \
	op(EStateTreeStateSelectionBehavior::TrySelectChildrenAtRandomWeightedByUtility) \
	op(EStateTreeStateSelectionBehavior::TryFollowTransitions) \
	op(EStateTreeStateSelectionBehavior::TrySelectChildrenAtUniformRandom) \
	op(EStateTreeStateSelectionBehavior::TrySelectChildrenBasedOnRelativeUtility) 

enum class EStateTreeStateSelectionBehavior : uint8;
template<> struct TIsUEnumClass<EStateTreeStateSelectionBehavior> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeStateSelectionBehavior>();

#define FOREACH_ENUM_ESTATETREETRANSITIONTRIGGER(op) \
	op(EStateTreeTransitionTrigger::None) \
	op(EStateTreeTransitionTrigger::OnStateCompleted) \
	op(EStateTreeTransitionTrigger::OnStateSucceeded) \
	op(EStateTreeTransitionTrigger::OnStateFailed) \
	op(EStateTreeTransitionTrigger::OnTick) \
	op(EStateTreeTransitionTrigger::OnEvent) 

enum class EStateTreeTransitionTrigger : uint8;
template<> struct TIsUEnumClass<EStateTreeTransitionTrigger> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeTransitionTrigger>();

#define FOREACH_ENUM_ESTATETREETRANSITIONPRIORITY(op) \
	op(EStateTreeTransitionPriority::None) \
	op(EStateTreeTransitionPriority::Low) \
	op(EStateTreeTransitionPriority::Normal) \
	op(EStateTreeTransitionPriority::Medium) \
	op(EStateTreeTransitionPriority::High) \
	op(EStateTreeTransitionPriority::Critical) 

enum class EStateTreeTransitionPriority : uint8;
template<> struct TIsUEnumClass<EStateTreeTransitionPriority> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeTransitionPriority>();

#define FOREACH_ENUM_ESTATETREEDATASOURCETYPE(op) \
	op(EStateTreeDataSourceType::None) \
	op(EStateTreeDataSourceType::GlobalInstanceData) \
	op(EStateTreeDataSourceType::GlobalInstanceDataObject) \
	op(EStateTreeDataSourceType::ActiveInstanceData) \
	op(EStateTreeDataSourceType::ActiveInstanceDataObject) \
	op(EStateTreeDataSourceType::SharedInstanceData) \
	op(EStateTreeDataSourceType::SharedInstanceDataObject) \
	op(EStateTreeDataSourceType::ContextData) \
	op(EStateTreeDataSourceType::ExternalData) \
	op(EStateTreeDataSourceType::GlobalParameterData) \
	op(EStateTreeDataSourceType::SubtreeParameterData) \
	op(EStateTreeDataSourceType::StateParameterData) \
	op(EStateTreeDataSourceType::TransitionEvent) \
	op(EStateTreeDataSourceType::StateEvent) 

enum class EStateTreeDataSourceType : uint8;
template<> struct TIsUEnumClass<EStateTreeDataSourceType> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeDataSourceType>();

#define FOREACH_ENUM_ESTATETREESELECTIONFALLBACK(op) \
	op(EStateTreeSelectionFallback::None) \
	op(EStateTreeSelectionFallback::NextSelectableSibling) 

enum class EStateTreeSelectionFallback : uint8;
template<> struct TIsUEnumClass<EStateTreeSelectionFallback> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeSelectionFallback>();

#define FOREACH_ENUM_ESTATETREEEXTERNALDATAREQUIREMENT(op) \
	op(EStateTreeExternalDataRequirement::Required) \
	op(EStateTreeExternalDataRequirement::Optional) 

enum class EStateTreeExternalDataRequirement : uint8;
template<> struct TIsUEnumClass<EStateTreeExternalDataRequirement> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeExternalDataRequirement>();

#define FOREACH_ENUM_ESTATETREEPROPERTYUSAGE(op) \
	op(EStateTreePropertyUsage::Invalid) \
	op(EStateTreePropertyUsage::Context) \
	op(EStateTreePropertyUsage::Input) \
	op(EStateTreePropertyUsage::Parameter) \
	op(EStateTreePropertyUsage::Output) 

enum class EStateTreePropertyUsage : uint8;
template<> struct TIsUEnumClass<EStateTreePropertyUsage> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreePropertyUsage>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
