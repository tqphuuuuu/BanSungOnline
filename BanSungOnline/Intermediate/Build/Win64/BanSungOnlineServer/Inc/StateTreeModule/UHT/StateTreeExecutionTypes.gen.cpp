// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Public/StateTreeExecutionTypes.h"
#include "StateTreeModule/Public/StateTreeEvents.h"
#include "StateTreeModule/Public/StateTreeIndexTypes.h"
#include "StateTreeModule/Public/StateTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeExecutionTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTree_NoRegister();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeRecordTransitions();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionSourceType();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeActiveStates();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeDataHandle();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEvent();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeExecutionFrame();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeExecutionState();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeExternalDataDesc();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeExternalDataHandle();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeIndex16();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeSharedEvent();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStateHandle();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransitionRequest();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransitionResult();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransitionSource();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin Enum EStateTreeUpdatePhase
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeUpdatePhase;
static UEnum* EStateTreeUpdatePhase_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStateTreeUpdatePhase.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStateTreeUpdatePhase.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeUpdatePhase"));
	}
	return Z_Registration_Info_UEnum_EStateTreeUpdatePhase.OuterSingleton;
}
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeUpdatePhase>()
{
	return EStateTreeUpdatePhase_StaticEnum();
}
struct Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ApplyTransitions.DisplayName", "Transition" },
		{ "ApplyTransitions.Name", "EStateTreeUpdatePhase::ApplyTransitions" },
		{ "Comment", "/**\n * Enumeration for the different update phases.\n * This is used as context information when tracing debug events.\n */" },
		{ "EnterConditions.DisplayName", "Enter conditions" },
		{ "EnterConditions.Name", "EStateTreeUpdatePhase::EnterConditions" },
		{ "EnterStates.DisplayName", "Enter States" },
		{ "EnterStates.Name", "EStateTreeUpdatePhase::EnterStates" },
		{ "ExitStates.DisplayName", "Exit States" },
		{ "ExitStates.Name", "EStateTreeUpdatePhase::ExitStates" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "StartGlobalTasks.DisplayName", "Start Global Tasks & Evaluators" },
		{ "StartGlobalTasks.Name", "EStateTreeUpdatePhase::StartGlobalTasks" },
		{ "StartTree.DisplayName", "Start Tree" },
		{ "StartTree.Name", "EStateTreeUpdatePhase::StartTree" },
		{ "StateCompleted.DisplayName", "State(s) Completed" },
		{ "StateCompleted.Name", "EStateTreeUpdatePhase::StateCompleted" },
		{ "StateSelection.DisplayName", "Try Enter" },
		{ "StateSelection.Name", "EStateTreeUpdatePhase::StateSelection" },
		{ "StopGlobalTasks.DisplayName", "Stop Global Tasks & Evaluators" },
		{ "StopGlobalTasks.Name", "EStateTreeUpdatePhase::StopGlobalTasks" },
		{ "StopTree.DisplayName", "Stop Tree" },
		{ "StopTree.Name", "EStateTreeUpdatePhase::StopTree" },
		{ "TickingGlobalTasks.DisplayName", "Tick Global Tasks & Evaluators" },
		{ "TickingGlobalTasks.Name", "EStateTreeUpdatePhase::TickingGlobalTasks" },
		{ "TickingTasks.DisplayName", "Tick Tasks" },
		{ "TickingTasks.Name", "EStateTreeUpdatePhase::TickingTasks" },
		{ "TickStateTree.DisplayName", "Tick State Tree" },
		{ "TickStateTree.Name", "EStateTreeUpdatePhase::TickStateTree" },
		{ "ToolTip", "Enumeration for the different update phases.\nThis is used as context information when tracing debug events." },
		{ "TransitionConditions.DisplayName", "Transition conditions" },
		{ "TransitionConditions.Name", "EStateTreeUpdatePhase::TransitionConditions" },
		{ "TriggerTransitions.DisplayName", "Trigger Transitions" },
		{ "TriggerTransitions.Name", "EStateTreeUpdatePhase::TriggerTransitions" },
		{ "TrySelectBehavior.DisplayName", "Try Select Behavior" },
		{ "TrySelectBehavior.Name", "EStateTreeUpdatePhase::TrySelectBehavior" },
		{ "Unset.Name", "EStateTreeUpdatePhase::Unset" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStateTreeUpdatePhase::Unset", (int64)EStateTreeUpdatePhase::Unset },
		{ "EStateTreeUpdatePhase::StartTree", (int64)EStateTreeUpdatePhase::StartTree },
		{ "EStateTreeUpdatePhase::StopTree", (int64)EStateTreeUpdatePhase::StopTree },
		{ "EStateTreeUpdatePhase::StartGlobalTasks", (int64)EStateTreeUpdatePhase::StartGlobalTasks },
		{ "EStateTreeUpdatePhase::StopGlobalTasks", (int64)EStateTreeUpdatePhase::StopGlobalTasks },
		{ "EStateTreeUpdatePhase::TickStateTree", (int64)EStateTreeUpdatePhase::TickStateTree },
		{ "EStateTreeUpdatePhase::ApplyTransitions", (int64)EStateTreeUpdatePhase::ApplyTransitions },
		{ "EStateTreeUpdatePhase::TriggerTransitions", (int64)EStateTreeUpdatePhase::TriggerTransitions },
		{ "EStateTreeUpdatePhase::TickingGlobalTasks", (int64)EStateTreeUpdatePhase::TickingGlobalTasks },
		{ "EStateTreeUpdatePhase::TickingTasks", (int64)EStateTreeUpdatePhase::TickingTasks },
		{ "EStateTreeUpdatePhase::TransitionConditions", (int64)EStateTreeUpdatePhase::TransitionConditions },
		{ "EStateTreeUpdatePhase::StateSelection", (int64)EStateTreeUpdatePhase::StateSelection },
		{ "EStateTreeUpdatePhase::TrySelectBehavior", (int64)EStateTreeUpdatePhase::TrySelectBehavior },
		{ "EStateTreeUpdatePhase::EnterConditions", (int64)EStateTreeUpdatePhase::EnterConditions },
		{ "EStateTreeUpdatePhase::EnterStates", (int64)EStateTreeUpdatePhase::EnterStates },
		{ "EStateTreeUpdatePhase::ExitStates", (int64)EStateTreeUpdatePhase::ExitStates },
		{ "EStateTreeUpdatePhase::StateCompleted", (int64)EStateTreeUpdatePhase::StateCompleted },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	"EStateTreeUpdatePhase",
	"EStateTreeUpdatePhase",
	Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase()
{
	if (!Z_Registration_Info_UEnum_EStateTreeUpdatePhase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeUpdatePhase.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStateTreeUpdatePhase.InnerSingleton;
}
// End Enum EStateTreeUpdatePhase

// Begin Enum EStateTreeRunStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeRunStatus;
static UEnum* EStateTreeRunStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStateTreeRunStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStateTreeRunStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeRunStatus"));
	}
	return Z_Registration_Info_UEnum_EStateTreeRunStatus.OuterSingleton;
}
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeRunStatus>()
{
	return EStateTreeRunStatus_StaticEnum();
}
struct Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Status describing current run status of a State Tree. */" },
		{ "Failed.Comment", "/** Tree execution has stopped on failure. */" },
		{ "Failed.Name", "EStateTreeRunStatus::Failed" },
		{ "Failed.ToolTip", "Tree execution has stopped on failure." },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "Running.Comment", "/** Tree is still running. */" },
		{ "Running.Name", "EStateTreeRunStatus::Running" },
		{ "Running.ToolTip", "Tree is still running." },
		{ "Stopped.Comment", "/** The State Tree was requested to stop without a particular success or failure state. */" },
		{ "Stopped.Name", "EStateTreeRunStatus::Stopped" },
		{ "Stopped.ToolTip", "The State Tree was requested to stop without a particular success or failure state." },
		{ "Succeeded.Comment", "/** Tree execution has stopped on success. */" },
		{ "Succeeded.Name", "EStateTreeRunStatus::Succeeded" },
		{ "Succeeded.ToolTip", "Tree execution has stopped on success." },
		{ "ToolTip", "Status describing current run status of a State Tree." },
		{ "Unset.Comment", "/** Status not set. */" },
		{ "Unset.Name", "EStateTreeRunStatus::Unset" },
		{ "Unset.ToolTip", "Status not set." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStateTreeRunStatus::Running", (int64)EStateTreeRunStatus::Running },
		{ "EStateTreeRunStatus::Failed", (int64)EStateTreeRunStatus::Failed },
		{ "EStateTreeRunStatus::Succeeded", (int64)EStateTreeRunStatus::Succeeded },
		{ "EStateTreeRunStatus::Stopped", (int64)EStateTreeRunStatus::Stopped },
		{ "EStateTreeRunStatus::Unset", (int64)EStateTreeRunStatus::Unset },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	"EStateTreeRunStatus",
	"EStateTreeRunStatus",
	Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus()
{
	if (!Z_Registration_Info_UEnum_EStateTreeRunStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeRunStatus.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStateTreeRunStatus.InnerSingleton;
}
// End Enum EStateTreeRunStatus

// Begin Enum EStateTreeStateChangeType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeStateChangeType;
static UEnum* EStateTreeStateChangeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStateTreeStateChangeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStateTreeStateChangeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeStateChangeType"));
	}
	return Z_Registration_Info_UEnum_EStateTreeStateChangeType.OuterSingleton;
}
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeStateChangeType>()
{
	return EStateTreeStateChangeType_StaticEnum();
}
struct Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Changed.Comment", "/** The state became activated or deactivated. */" },
		{ "Changed.Name", "EStateTreeStateChangeType::Changed" },
		{ "Changed.ToolTip", "The state became activated or deactivated." },
		{ "Comment", "/** State change type. Passed to EnterState() and ExitState() to indicate how the state change affects the state and Evaluator or Task is on. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "None.Comment", "/** Not an activation */" },
		{ "None.Name", "EStateTreeStateChangeType::None" },
		{ "None.ToolTip", "Not an activation" },
		{ "Sustained.Comment", "/** The state is parent of new active state and sustained previous active state. */" },
		{ "Sustained.Name", "EStateTreeStateChangeType::Sustained" },
		{ "Sustained.ToolTip", "The state is parent of new active state and sustained previous active state." },
		{ "ToolTip", "State change type. Passed to EnterState() and ExitState() to indicate how the state change affects the state and Evaluator or Task is on." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStateTreeStateChangeType::None", (int64)EStateTreeStateChangeType::None },
		{ "EStateTreeStateChangeType::Changed", (int64)EStateTreeStateChangeType::Changed },
		{ "EStateTreeStateChangeType::Sustained", (int64)EStateTreeStateChangeType::Sustained },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	"EStateTreeStateChangeType",
	"EStateTreeStateChangeType",
	Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType()
{
	if (!Z_Registration_Info_UEnum_EStateTreeStateChangeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeStateChangeType.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStateTreeStateChangeType.InnerSingleton;
}
// End Enum EStateTreeStateChangeType

// Begin Enum EStateTreeConditionEvaluationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeConditionEvaluationMode;
static UEnum* EStateTreeConditionEvaluationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStateTreeConditionEvaluationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStateTreeConditionEvaluationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeConditionEvaluationMode"));
	}
	return Z_Registration_Info_UEnum_EStateTreeConditionEvaluationMode.OuterSingleton;
}
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeConditionEvaluationMode>()
{
	return EStateTreeConditionEvaluationMode_StaticEnum();
}
struct Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Defines how to assign the result of a condition to evaluate.  */" },
		{ "Evaluated.Comment", "/** Condition is evaluated to set the result. This is the normal behavior. */" },
		{ "Evaluated.Name", "EStateTreeConditionEvaluationMode::Evaluated" },
		{ "Evaluated.ToolTip", "Condition is evaluated to set the result. This is the normal behavior." },
		{ "ForcedFalse.Comment", "/** Do not evaluate the condition and force result to 'false'. */" },
		{ "ForcedFalse.Name", "EStateTreeConditionEvaluationMode::ForcedFalse" },
		{ "ForcedFalse.ToolTip", "Do not evaluate the condition and force result to 'false'." },
		{ "ForcedTrue.Comment", "/** Do not evaluate the condition and force result to 'true'. */" },
		{ "ForcedTrue.Name", "EStateTreeConditionEvaluationMode::ForcedTrue" },
		{ "ForcedTrue.ToolTip", "Do not evaluate the condition and force result to 'true'." },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Defines how to assign the result of a condition to evaluate." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStateTreeConditionEvaluationMode::Evaluated", (int64)EStateTreeConditionEvaluationMode::Evaluated },
		{ "EStateTreeConditionEvaluationMode::ForcedTrue", (int64)EStateTreeConditionEvaluationMode::ForcedTrue },
		{ "EStateTreeConditionEvaluationMode::ForcedFalse", (int64)EStateTreeConditionEvaluationMode::ForcedFalse },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	"EStateTreeConditionEvaluationMode",
	"EStateTreeConditionEvaluationMode",
	Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode()
{
	if (!Z_Registration_Info_UEnum_EStateTreeConditionEvaluationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeConditionEvaluationMode.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStateTreeConditionEvaluationMode.InnerSingleton;
}
// End Enum EStateTreeConditionEvaluationMode

// Begin ScriptStruct FStateTreeExternalDataHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeExternalDataHandle;
class UScriptStruct* FStateTreeExternalDataHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeExternalDataHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeExternalDataHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeExternalDataHandle, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeExternalDataHandle"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeExternalDataHandle.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeExternalDataHandle>()
{
	return FStateTreeExternalDataHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Handle to access an external struct or object.\n * Note: Use the templated version below. \n */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Handle to access an external struct or object.\nNote: Use the templated version below." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataViewIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataHandle;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataViewIndex;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeExternalDataHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::NewProp_DataHandle = { "DataHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExternalDataHandle, DataHandle), Z_Construct_UScriptStruct_FStateTreeDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataHandle_MetaData), NewProp_DataHandle_MetaData) }; // 3876109322
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::NewProp_DataViewIndex = { "DataViewIndex", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExternalDataHandle, DataViewIndex_DEPRECATED), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataViewIndex_MetaData), NewProp_DataViewIndex_MetaData) }; // 2905844030
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::NewProp_DataHandle,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::NewProp_DataViewIndex,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeExternalDataHandle",
	Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::PropPointers),
	sizeof(FStateTreeExternalDataHandle),
	alignof(FStateTreeExternalDataHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeExternalDataHandle()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeExternalDataHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeExternalDataHandle.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeExternalDataHandle.InnerSingleton;
}
// End ScriptStruct FStateTreeExternalDataHandle

// Begin ScriptStruct FStateTreeExternalDataDesc
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeExternalDataDesc;
class UScriptStruct* FStateTreeExternalDataDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeExternalDataDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeExternalDataDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeExternalDataDesc"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeExternalDataDesc.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeExternalDataDesc>()
{
	return FStateTreeExternalDataDesc::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Describes an external data. The data can point to a struct or object.\n * The code that handles StateTree ticking is responsible for passing in the actually data, see FStateTreeExecutionContext.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Describes an external data. The data can point to a struct or object.\nThe code that handles StateTree ticking is responsible for passing in the actually data, see FStateTreeExecutionContext." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[] = {
		{ "Comment", "/** Class or struct of the external data. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Class or struct of the external data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/**\n\x09 * Name of the external data. Used only for bindable external data (enforced by the schema).\n\x09 * External data linked explicitly by the nodes (i.e. LinkExternalData) are identified only\n\x09 * by their type since they are used for unique instance of a given type.  \n\x09 */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Name of the external data. Used only for bindable external data (enforced by the schema).\nExternal data linked explicitly by the nodes (i.e. LinkExternalData) are identified only\nby their type since they are used for unique instance of a given type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "Comment", "/** Handle/Index to the StateTreeExecutionContext data views array */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Handle/Index to the StateTreeExecutionContext data views array" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Requirement_MetaData[] = {
		{ "Comment", "/** Describes if the data is required or not. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Describes if the data is required or not." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Comment", "/** Unique identifier. Used only for bindable external data. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Unique identifier. Used only for bindable external data." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Struct;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Requirement_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Requirement;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeExternalDataDesc>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExternalDataDesc, Struct), Z_Construct_UClass_UStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Struct_MetaData), NewProp_Struct_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExternalDataDesc, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExternalDataDesc, Handle), Z_Construct_UScriptStruct_FStateTreeExternalDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 1678939215
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Requirement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Requirement = { "Requirement", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExternalDataDesc, Requirement), Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Requirement_MetaData), NewProp_Requirement_MetaData) }; // 3138985269
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExternalDataDesc, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Struct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Requirement_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Requirement,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_ID,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeExternalDataDesc",
	Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::PropPointers),
	sizeof(FStateTreeExternalDataDesc),
	alignof(FStateTreeExternalDataDesc),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeExternalDataDesc()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeExternalDataDesc.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeExternalDataDesc.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeExternalDataDesc.InnerSingleton;
}
// End ScriptStruct FStateTreeExternalDataDesc

// Begin ScriptStruct FStateTreeTransitionRequest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeTransitionRequest;
class UScriptStruct* FStateTreeTransitionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTransitionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeTransitionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTransitionRequest, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeTransitionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTransitionRequest.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeTransitionRequest>()
{
	return FStateTreeTransitionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Transition request */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Transition request" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceState_MetaData[] = {
		{ "Comment", "/** Source state of the transition. Filled in by the StateTree execution context. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Source state of the transition. Filled in by the StateTree execution context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceStateTree_MetaData[] = {
		{ "Comment", "/** StateTree asset that was active when the transition was requested. Filled in by the StateTree execution context. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "StateTree asset that was active when the transition was requested. Filled in by the StateTree execution context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceRootState_MetaData[] = {
		{ "Comment", "/** Root state the execution frame where the transition was requested. Filled in by the StateTree execution context. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Root state the execution frame where the transition was requested. Filled in by the StateTree execution context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetState_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Target state of the transition. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Target state of the transition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Priority of the transition. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Priority of the transition." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceStateTree;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceRootState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeTransitionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_SourceState = { "SourceState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionRequest, SourceState), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceState_MetaData), NewProp_SourceState_MetaData) }; // 3726322759
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_SourceStateTree = { "SourceStateTree", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionRequest, SourceStateTree), Z_Construct_UClass_UStateTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceStateTree_MetaData), NewProp_SourceStateTree_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_SourceRootState = { "SourceRootState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionRequest, SourceRootState), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceRootState_MetaData), NewProp_SourceRootState_MetaData) }; // 3726322759
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_TargetState = { "TargetState", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionRequest, TargetState), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetState_MetaData), NewProp_TargetState_MetaData) }; // 3726322759
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionRequest, Priority), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) }; // 2934257566
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_SourceState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_SourceStateTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_SourceRootState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_TargetState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_Priority_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_Priority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeTransitionRequest",
	Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::PropPointers),
	sizeof(FStateTreeTransitionRequest),
	alignof(FStateTreeTransitionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransitionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTransitionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeTransitionRequest.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTransitionRequest.InnerSingleton;
}
// End ScriptStruct FStateTreeTransitionRequest

// Begin ScriptStruct FStateTreeActiveStates
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeActiveStates;
class UScriptStruct* FStateTreeActiveStates::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeActiveStates.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeActiveStates.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeActiveStates, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeActiveStates"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeActiveStates.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeActiveStates>()
{
	return FStateTreeActiveStates::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Describes an array of active states in a State Tree.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Describes an array of active states in a State Tree." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumStates_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_States;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NumStates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeActiveStates>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(States, FStateTreeActiveStates), STRUCT_OFFSET(FStateTreeActiveStates, States), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_States_MetaData), NewProp_States_MetaData) }; // 3726322759
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewProp_NumStates = { "NumStates", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeActiveStates, NumStates), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumStates_MetaData), NewProp_NumStates_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewProp_States,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewProp_NumStates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeActiveStates",
	Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::PropPointers),
	sizeof(FStateTreeActiveStates),
	alignof(FStateTreeActiveStates),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeActiveStates()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeActiveStates.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeActiveStates.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeActiveStates.InnerSingleton;
}
// End ScriptStruct FStateTreeActiveStates

// Begin Enum EStateTreeTransitionSourceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeTransitionSourceType;
static UEnum* EStateTreeTransitionSourceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStateTreeTransitionSourceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStateTreeTransitionSourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionSourceType, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeTransitionSourceType"));
	}
	return Z_Registration_Info_UEnum_EStateTreeTransitionSourceType.OuterSingleton;
}
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeTransitionSourceType>()
{
	return EStateTreeTransitionSourceType_StaticEnum();
}
struct Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionSourceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Asset.Name", "EStateTreeTransitionSourceType::Asset" },
		{ "ExternalRequest.Name", "EStateTreeTransitionSourceType::ExternalRequest" },
		{ "Internal.Name", "EStateTreeTransitionSourceType::Internal" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "Unset.Name", "EStateTreeTransitionSourceType::Unset" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStateTreeTransitionSourceType::Unset", (int64)EStateTreeTransitionSourceType::Unset },
		{ "EStateTreeTransitionSourceType::Asset", (int64)EStateTreeTransitionSourceType::Asset },
		{ "EStateTreeTransitionSourceType::ExternalRequest", (int64)EStateTreeTransitionSourceType::ExternalRequest },
		{ "EStateTreeTransitionSourceType::Internal", (int64)EStateTreeTransitionSourceType::Internal },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionSourceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	"EStateTreeTransitionSourceType",
	"EStateTreeTransitionSourceType",
	Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionSourceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionSourceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionSourceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionSourceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionSourceType()
{
	if (!Z_Registration_Info_UEnum_EStateTreeTransitionSourceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeTransitionSourceType.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionSourceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStateTreeTransitionSourceType.InnerSingleton;
}
// End Enum EStateTreeTransitionSourceType

// Begin ScriptStruct FStateTreeTransitionSource
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeTransitionSource;
class UScriptStruct* FStateTreeTransitionSource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTransitionSource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeTransitionSource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTransitionSource, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeTransitionSource"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTransitionSource.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeTransitionSource>()
{
	return FStateTreeTransitionSource::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeTransitionSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Describes the origin of an applied transition.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Describes the origin of an applied transition." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeTransitionSource>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeTransitionSource_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeTransitionSource",
	nullptr,
	0,
	sizeof(FStateTreeTransitionSource),
	alignof(FStateTreeTransitionSource),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionSource_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeTransitionSource_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransitionSource()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTransitionSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeTransitionSource.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeTransitionSource_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTransitionSource.InnerSingleton;
}
// End ScriptStruct FStateTreeTransitionSource

// Begin ScriptStruct FStateTreeTransitionDelayedState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeTransitionDelayedState;
class UScriptStruct* FStateTreeTransitionDelayedState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTransitionDelayedState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeTransitionDelayedState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeTransitionDelayedState"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTransitionDelayedState.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeTransitionDelayedState>()
{
	return FStateTreeTransitionDelayedState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Describes current state of a delayed transition. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Describes current state of a delayed transition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateTree_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeLeft_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapturedEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapturedEventHash_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateTree;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLeft;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedEvent;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_CapturedEventHash;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeTransitionDelayedState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState_Statics::NewProp_StateTree = { "StateTree", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionDelayedState, StateTree), Z_Construct_UClass_UStateTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateTree_MetaData), NewProp_StateTree_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState_Statics::NewProp_TransitionIndex = { "TransitionIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionDelayedState, TransitionIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionIndex_MetaData), NewProp_TransitionIndex_MetaData) }; // 2905844030
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState_Statics::NewProp_TimeLeft = { "TimeLeft", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionDelayedState, TimeLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeLeft_MetaData), NewProp_TimeLeft_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState_Statics::NewProp_CapturedEvent = { "CapturedEvent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionDelayedState, CapturedEvent), Z_Construct_UScriptStruct_FStateTreeSharedEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapturedEvent_MetaData), NewProp_CapturedEvent_MetaData) }; // 4090353654
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState_Statics::NewProp_CapturedEventHash = { "CapturedEventHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionDelayedState, CapturedEventHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapturedEventHash_MetaData), NewProp_CapturedEventHash_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState_Statics::NewProp_StateTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState_Statics::NewProp_TransitionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState_Statics::NewProp_TimeLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState_Statics::NewProp_CapturedEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState_Statics::NewProp_CapturedEventHash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeTransitionDelayedState",
	Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState_Statics::PropPointers),
	sizeof(FStateTreeTransitionDelayedState),
	alignof(FStateTreeTransitionDelayedState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTransitionDelayedState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeTransitionDelayedState.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTransitionDelayedState.InnerSingleton;
}
// End ScriptStruct FStateTreeTransitionDelayedState

// Begin ScriptStruct FStateTreeExecutionFrame
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeExecutionFrame;
class UScriptStruct* FStateTreeExecutionFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeExecutionFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeExecutionFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeExecutionFrame, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeExecutionFrame"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeExecutionFrame.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeExecutionFrame>()
{
	return FStateTreeExecutionFrame::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Describes an active branch of a State Tree. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Describes an active branch of a State Tree." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateTree_MetaData[] = {
		{ "Comment", "/** The State Tree used for ticking this frame. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The State Tree used for ticking this frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootState_MetaData[] = {
		{ "Comment", "/** The root state of the frame (e.g. Root state or a subtree). */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "The root state of the frame (e.g. Root state or a subtree)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveStates_MetaData[] = {
		{ "Comment", "/** Active states in this frame */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Active states in this frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalDataBaseIndex_MetaData[] = {
		{ "Comment", "/** First index of the external data for this frame. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "First index of the external data for this frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalInstanceIndexBase_MetaData[] = {
		{ "Comment", "/** Index within the instance data to the first global instance data (e.g. global tasks) */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Index within the instance data to the first global instance data (e.g. global tasks)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveInstanceIndexBase_MetaData[] = {
		{ "Comment", "/** Index within the instance data to the first active state's instance data (e.g. tasks) */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Index within the instance data to the first active state's instance data (e.g. tasks)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateParameterDataHandle_MetaData[] = {
		{ "Comment", "/** Handle to the state parameter data, exists in ParentFrame. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Handle to the state parameter data, exists in ParentFrame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalParameterDataHandle_MetaData[] = {
		{ "Comment", "/** Handle to the global parameter data, exists in ParentFrame. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Handle to the global parameter data, exists in ParentFrame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGlobalFrame_MetaData[] = {
		{ "Comment", "/** If true, the global tasks of the State Tree should be handle in this frame. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "If true, the global tasks of the State Tree should be handle in this frame." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateTree;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveStates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalDataBaseIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalInstanceIndexBase;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveInstanceIndexBase;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateParameterDataHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalParameterDataHandle;
	static void NewProp_bIsGlobalFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGlobalFrame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeExecutionFrame>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::NewProp_StateTree = { "StateTree", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExecutionFrame, StateTree), Z_Construct_UClass_UStateTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateTree_MetaData), NewProp_StateTree_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::NewProp_RootState = { "RootState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExecutionFrame, RootState), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootState_MetaData), NewProp_RootState_MetaData) }; // 3726322759
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::NewProp_ActiveStates = { "ActiveStates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExecutionFrame, ActiveStates), Z_Construct_UScriptStruct_FStateTreeActiveStates, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveStates_MetaData), NewProp_ActiveStates_MetaData) }; // 1547864753
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::NewProp_ExternalDataBaseIndex = { "ExternalDataBaseIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExecutionFrame, ExternalDataBaseIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalDataBaseIndex_MetaData), NewProp_ExternalDataBaseIndex_MetaData) }; // 2905844030
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::NewProp_GlobalInstanceIndexBase = { "GlobalInstanceIndexBase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExecutionFrame, GlobalInstanceIndexBase), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalInstanceIndexBase_MetaData), NewProp_GlobalInstanceIndexBase_MetaData) }; // 2905844030
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::NewProp_ActiveInstanceIndexBase = { "ActiveInstanceIndexBase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExecutionFrame, ActiveInstanceIndexBase), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveInstanceIndexBase_MetaData), NewProp_ActiveInstanceIndexBase_MetaData) }; // 2905844030
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::NewProp_StateParameterDataHandle = { "StateParameterDataHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExecutionFrame, StateParameterDataHandle), Z_Construct_UScriptStruct_FStateTreeDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateParameterDataHandle_MetaData), NewProp_StateParameterDataHandle_MetaData) }; // 3876109322
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::NewProp_GlobalParameterDataHandle = { "GlobalParameterDataHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExecutionFrame, GlobalParameterDataHandle), Z_Construct_UScriptStruct_FStateTreeDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalParameterDataHandle_MetaData), NewProp_GlobalParameterDataHandle_MetaData) }; // 3876109322
void Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::NewProp_bIsGlobalFrame_SetBit(void* Obj)
{
	((FStateTreeExecutionFrame*)Obj)->bIsGlobalFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::NewProp_bIsGlobalFrame = { "bIsGlobalFrame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FStateTreeExecutionFrame), &Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::NewProp_bIsGlobalFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGlobalFrame_MetaData), NewProp_bIsGlobalFrame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::NewProp_StateTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::NewProp_RootState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::NewProp_ActiveStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::NewProp_ExternalDataBaseIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::NewProp_GlobalInstanceIndexBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::NewProp_ActiveInstanceIndexBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::NewProp_StateParameterDataHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::NewProp_GlobalParameterDataHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::NewProp_bIsGlobalFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeExecutionFrame",
	Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::PropPointers),
	sizeof(FStateTreeExecutionFrame),
	alignof(FStateTreeExecutionFrame),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeExecutionFrame()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeExecutionFrame.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeExecutionFrame.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeExecutionFrame.InnerSingleton;
}
// End ScriptStruct FStateTreeExecutionFrame

// Begin ScriptStruct FStateTreeExecutionState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeExecutionState;
class UScriptStruct* FStateTreeExecutionState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeExecutionState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeExecutionState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeExecutionState, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeExecutionState"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeExecutionState.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeExecutionState>()
{
	return FStateTreeExecutionState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Describes the execution state of the current State Tree instance. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Describes the execution state of the current State Tree instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveFrames_MetaData[] = {
		{ "Comment", "/** Currently active frames (and states) */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Currently active frames (and states)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayedTransitions_MetaData[] = {
		{ "Comment", "/** Pending delayed transitions. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Pending delayed transitions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterStateFailedFrameIndex_MetaData[] = {
		{ "Comment", "/** The index of the task that failed during enter state. Exit state uses it to call ExitState() symmetrically. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "The index of the task that failed during enter state. Exit state uses it to call ExitState() symmetrically." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterStateFailedTaskIndex_MetaData[] = {
		{ "Comment", "/** The index of the frame that failed during enter state. Exit state uses it to call ExitState() symmetrically. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "The index of the frame that failed during enter state. Exit state uses it to call ExitState() symmetrically." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastTickStatus_MetaData[] = {
		{ "Comment", "/** Result of last tick */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Result of last tick" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TreeRunStatus_MetaData[] = {
		{ "Comment", "/** Running status of the instance */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Running status of the instance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestedStop_MetaData[] = {
		{ "Comment", "/** Completion status stored if Stop was called during the Tick and needed to be deferred. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Completion status stored if Stop was called during the Tick and needed to be deferred." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPhase_MetaData[] = {
		{ "Comment", "/** Current update phase used to validate reentrant calls to the main entry points of the execution context (i.e. Start, Stop, Tick). */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Current update phase used to validate reentrant calls to the main entry points of the execution context (i.e. Start, Stop, Tick)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompletedFrameIndex_MetaData[] = {
		{ "Comment", "/** Handle of the state that was first to report state completed (success or failure), used to trigger completion transitions. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Handle of the state that was first to report state completed (success or failure), used to trigger completion transitions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompletedStateHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateChangeCount_MetaData[] = {
		{ "Comment", "/** Number of times a new state has been changed. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Number of times a new state has been changed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[] = {
		{ "Comment", "/** Used by state tree random-based operations. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Used by state tree random-based operations." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActiveStates_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveFrames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveFrames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DelayedTransitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DelayedTransitions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnterStateFailedFrameIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnterStateFailedTaskIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LastTickStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LastTickStatus;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TreeRunStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TreeRunStatus;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RequestedStop_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RequestedStop;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentPhase;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompletedFrameIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompletedStateHandle;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_StateChangeCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentActiveStates;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeExecutionState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_ActiveFrames_Inner = { "ActiveFrames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreeExecutionFrame, METADATA_PARAMS(0, nullptr) }; // 1314638814
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_ActiveFrames = { "ActiveFrames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExecutionState, ActiveFrames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveFrames_MetaData), NewProp_ActiveFrames_MetaData) }; // 1314638814
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_DelayedTransitions_Inner = { "DelayedTransitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState, METADATA_PARAMS(0, nullptr) }; // 3760001273
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_DelayedTransitions = { "DelayedTransitions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExecutionState, DelayedTransitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayedTransitions_MetaData), NewProp_DelayedTransitions_MetaData) }; // 3760001273
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_EnterStateFailedFrameIndex = { "EnterStateFailedFrameIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExecutionState, EnterStateFailedFrameIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterStateFailedFrameIndex_MetaData), NewProp_EnterStateFailedFrameIndex_MetaData) }; // 2905844030
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_EnterStateFailedTaskIndex = { "EnterStateFailedTaskIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExecutionState, EnterStateFailedTaskIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterStateFailedTaskIndex_MetaData), NewProp_EnterStateFailedTaskIndex_MetaData) }; // 2905844030
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_LastTickStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_LastTickStatus = { "LastTickStatus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExecutionState, LastTickStatus), Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastTickStatus_MetaData), NewProp_LastTickStatus_MetaData) }; // 955675859
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_TreeRunStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_TreeRunStatus = { "TreeRunStatus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExecutionState, TreeRunStatus), Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TreeRunStatus_MetaData), NewProp_TreeRunStatus_MetaData) }; // 955675859
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_RequestedStop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_RequestedStop = { "RequestedStop", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExecutionState, RequestedStop), Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestedStop_MetaData), NewProp_RequestedStop_MetaData) }; // 955675859
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_CurrentPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_CurrentPhase = { "CurrentPhase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExecutionState, CurrentPhase), Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPhase_MetaData), NewProp_CurrentPhase_MetaData) }; // 3443519489
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_CompletedFrameIndex = { "CompletedFrameIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExecutionState, CompletedFrameIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompletedFrameIndex_MetaData), NewProp_CompletedFrameIndex_MetaData) }; // 2905844030
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_CompletedStateHandle = { "CompletedStateHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExecutionState, CompletedStateHandle), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompletedStateHandle_MetaData), NewProp_CompletedStateHandle_MetaData) }; // 3726322759
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_StateChangeCount = { "StateChangeCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExecutionState, StateChangeCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateChangeCount_MetaData), NewProp_StateChangeCount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExecutionState, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomStream_MetaData), NewProp_RandomStream_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_CurrentActiveStates = { "CurrentActiveStates", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExecutionState, CurrentActiveStates_DEPRECATED), Z_Construct_UScriptStruct_FStateTreeActiveStates, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentActiveStates_MetaData), NewProp_CurrentActiveStates_MetaData) }; // 1547864753
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_ActiveFrames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_ActiveFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_DelayedTransitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_DelayedTransitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_EnterStateFailedFrameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_EnterStateFailedTaskIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_LastTickStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_LastTickStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_TreeRunStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_TreeRunStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_RequestedStop_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_RequestedStop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_CurrentPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_CurrentPhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_CompletedFrameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_CompletedStateHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_StateChangeCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_RandomStream,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_CurrentActiveStates,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeExecutionState",
	Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::PropPointers),
	sizeof(FStateTreeExecutionState),
	alignof(FStateTreeExecutionState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeExecutionState()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeExecutionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeExecutionState.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeExecutionState.InnerSingleton;
}
// End ScriptStruct FStateTreeExecutionState

// Begin ScriptStruct FStateTreeTransitionResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeTransitionResult;
class UScriptStruct* FStateTreeTransitionResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTransitionResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeTransitionResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTransitionResult, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeTransitionResult"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTransitionResult.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeTransitionResult>()
{
	return FStateTreeTransitionResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Describes a state tree transition. Source is the state where the transition started, Target describes the state where the transition pointed at,\n * and Next describes the selected state. The reason Transition and Next are different is that Transition state can be a selector state,\n * in which case the children will be visited until a leaf state is found, which will be the next state.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Describes a state tree transition. Source is the state where the transition started, Target describes the state where the transition pointed at,\nand Next describes the selected state. The reason Transition and Next are different is that Transition state can be a selector state,\nin which case the children will be visited until a leaf state is found, which will be the next state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextActiveFrames_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** States selected as result of the transition. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "States selected as result of the transition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRunStatus_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Current Run status. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Current Run status." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceState_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Transition source state. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Transition source state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetState_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Transition target state. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Transition target state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** The current state being executed. On enter/exit callbacks this is the state of the task. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "The current state being executed. On enter/exit callbacks this is the state of the task." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangeType_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** If the change type is Sustained, then the CurrentState was reselected, or if Changed then the state was just activated. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "If the change type is Sustained, then the CurrentState was reselected, or if Changed then the state was just activated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Priority of the transition that caused the state change. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Priority of the transition that caused the state change." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceStateTree_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** StateTree asset that was active when the transition was requested. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "StateTree asset that was active when the transition was requested." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceRootState_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Root state the execution frame where the transition was requested. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Root state the execution frame where the transition was requested." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActiveStates_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextActiveStates_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NextActiveFrames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NextActiveFrames;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentRunStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentRunStatus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChangeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChangeType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceStateTree;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceRootState;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentActiveStates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NextActiveStates;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeTransitionResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_NextActiveFrames_Inner = { "NextActiveFrames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreeExecutionFrame, METADATA_PARAMS(0, nullptr) }; // 1314638814
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_NextActiveFrames = { "NextActiveFrames", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionResult, NextActiveFrames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextActiveFrames_MetaData), NewProp_NextActiveFrames_MetaData) }; // 1314638814
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentRunStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentRunStatus = { "CurrentRunStatus", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionResult, CurrentRunStatus), Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRunStatus_MetaData), NewProp_CurrentRunStatus_MetaData) }; // 955675859
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_SourceState = { "SourceState", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionResult, SourceState), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceState_MetaData), NewProp_SourceState_MetaData) }; // 3726322759
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_TargetState = { "TargetState", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionResult, TargetState), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetState_MetaData), NewProp_TargetState_MetaData) }; // 3726322759
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionResult, CurrentState), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 3726322759
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_ChangeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_ChangeType = { "ChangeType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionResult, ChangeType), Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangeType_MetaData), NewProp_ChangeType_MetaData) }; // 4203008829
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionResult, Priority), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) }; // 2934257566
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_SourceStateTree = { "SourceStateTree", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionResult, SourceStateTree), Z_Construct_UClass_UStateTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceStateTree_MetaData), NewProp_SourceStateTree_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_SourceRootState = { "SourceRootState", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionResult, SourceRootState), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceRootState_MetaData), NewProp_SourceRootState_MetaData) }; // 3726322759
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentActiveStates = { "CurrentActiveStates", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionResult, CurrentActiveStates_DEPRECATED), Z_Construct_UScriptStruct_FStateTreeActiveStates, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentActiveStates_MetaData), NewProp_CurrentActiveStates_MetaData) }; // 1547864753
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_NextActiveStates = { "NextActiveStates", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionResult, NextActiveStates_DEPRECATED), Z_Construct_UScriptStruct_FStateTreeActiveStates, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextActiveStates_MetaData), NewProp_NextActiveStates_MetaData) }; // 1547864753
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_NextActiveFrames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_NextActiveFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentRunStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentRunStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_SourceState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_TargetState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_ChangeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_ChangeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_Priority_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_SourceStateTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_SourceRootState,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentActiveStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_NextActiveStates,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeTransitionResult",
	Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::PropPointers),
	sizeof(FStateTreeTransitionResult),
	alignof(FStateTreeTransitionResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransitionResult()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTransitionResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeTransitionResult.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTransitionResult.InnerSingleton;
}
// End ScriptStruct FStateTreeTransitionResult

// Begin Enum EStateTreeRecordTransitions
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeRecordTransitions;
static UEnum* EStateTreeRecordTransitions_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStateTreeRecordTransitions.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStateTreeRecordTransitions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeRecordTransitions, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeRecordTransitions"));
	}
	return Z_Registration_Info_UEnum_EStateTreeRecordTransitions.OuterSingleton;
}
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeRecordTransitions>()
{
	return EStateTreeRecordTransitions_StaticEnum();
}
struct Z_Construct_UEnum_StateTreeModule_EStateTreeRecordTransitions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/*\n * Enumeration for the different transition recording types.\n * This is used by the execution context to capture transition snapshots if set to record.\n*/" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "No.Name", "EStateTreeRecordTransitions::No" },
		{ "ToolTip", "* Enumeration for the different transition recording types.\n* This is used by the execution context to capture transition snapshots if set to record." },
		{ "Yes.Name", "EStateTreeRecordTransitions::Yes" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStateTreeRecordTransitions::No", (int64)EStateTreeRecordTransitions::No },
		{ "EStateTreeRecordTransitions::Yes", (int64)EStateTreeRecordTransitions::Yes },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeRecordTransitions_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	"EStateTreeRecordTransitions",
	"EStateTreeRecordTransitions",
	Z_Construct_UEnum_StateTreeModule_EStateTreeRecordTransitions_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeRecordTransitions_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeRecordTransitions_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeRecordTransitions_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeRecordTransitions()
{
	if (!Z_Registration_Info_UEnum_EStateTreeRecordTransitions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeRecordTransitions.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeRecordTransitions_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStateTreeRecordTransitions.InnerSingleton;
}
// End Enum EStateTreeRecordTransitions

// Begin ScriptStruct FRecordedStateTreeExecutionFrame
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RecordedStateTreeExecutionFrame;
class UScriptStruct* FRecordedStateTreeExecutionFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RecordedStateTreeExecutionFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RecordedStateTreeExecutionFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("RecordedStateTreeExecutionFrame"));
	}
	return Z_Registration_Info_UScriptStruct_RecordedStateTreeExecutionFrame.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FRecordedStateTreeExecutionFrame>()
{
	return FRecordedStateTreeExecutionFrame::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/*\n* Captured state tree execution frame that can be cached for recording purposes.\n* Held in FRecordedStateTreeTransitionResult for its NextActiveFrames.\n*/" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "* Captured state tree execution frame that can be cached for recording purposes.\n* Held in FRecordedStateTreeTransitionResult for its NextActiveFrames." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateTree_MetaData[] = {
		{ "Comment", "/** The State Tree used for ticking this frame. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The State Tree used for ticking this frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootState_MetaData[] = {
		{ "Comment", "/** The root state of the frame (e.g. Root state or a subtree). */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "The root state of the frame (e.g. Root state or a subtree)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveStates_MetaData[] = {
		{ "Comment", "/** Active states in this frame. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Active states in this frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGlobalFrame_MetaData[] = {
		{ "Comment", "/** If true, the global tasks of the State Tree should be handle in this frame. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "If true, the global tasks of the State Tree should be handle in this frame." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateTree;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveStates;
	static void NewProp_bIsGlobalFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGlobalFrame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecordedStateTreeExecutionFrame>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame_Statics::NewProp_StateTree = { "StateTree", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordedStateTreeExecutionFrame, StateTree), Z_Construct_UClass_UStateTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateTree_MetaData), NewProp_StateTree_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame_Statics::NewProp_RootState = { "RootState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordedStateTreeExecutionFrame, RootState), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootState_MetaData), NewProp_RootState_MetaData) }; // 3726322759
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame_Statics::NewProp_ActiveStates = { "ActiveStates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordedStateTreeExecutionFrame, ActiveStates), Z_Construct_UScriptStruct_FStateTreeActiveStates, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveStates_MetaData), NewProp_ActiveStates_MetaData) }; // 1547864753
void Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame_Statics::NewProp_bIsGlobalFrame_SetBit(void* Obj)
{
	((FRecordedStateTreeExecutionFrame*)Obj)->bIsGlobalFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame_Statics::NewProp_bIsGlobalFrame = { "bIsGlobalFrame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRecordedStateTreeExecutionFrame), &Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame_Statics::NewProp_bIsGlobalFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGlobalFrame_MetaData), NewProp_bIsGlobalFrame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame_Statics::NewProp_StateTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame_Statics::NewProp_RootState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame_Statics::NewProp_ActiveStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame_Statics::NewProp_bIsGlobalFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"RecordedStateTreeExecutionFrame",
	Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame_Statics::PropPointers),
	sizeof(FRecordedStateTreeExecutionFrame),
	alignof(FRecordedStateTreeExecutionFrame),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame()
{
	if (!Z_Registration_Info_UScriptStruct_RecordedStateTreeExecutionFrame.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RecordedStateTreeExecutionFrame.InnerSingleton, Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RecordedStateTreeExecutionFrame.InnerSingleton;
}
// End ScriptStruct FRecordedStateTreeExecutionFrame

// Begin ScriptStruct FRecordedStateTreeTransitionResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RecordedStateTreeTransitionResult;
class UScriptStruct* FRecordedStateTreeTransitionResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RecordedStateTreeTransitionResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RecordedStateTreeTransitionResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("RecordedStateTreeTransitionResult"));
	}
	return Z_Registration_Info_UScriptStruct_RecordedStateTreeTransitionResult.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FRecordedStateTreeTransitionResult>()
{
	return FRecordedStateTreeTransitionResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/*\n* Captured state tree transition result that can be cached for recording purposes.\n* Primarily, when transitions are recorded through this structure, we can replicate them down\n* to clients to keep our state tree in sync.\n*/" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "* Captured state tree transition result that can be cached for recording purposes.\n* Primarily, when transitions are recorded through this structure, we can replicate them down\n* to clients to keep our state tree in sync." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextActiveFrames_MetaData[] = {
		{ "Comment", "/** States selected as result of the transition. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "States selected as result of the transition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextActiveFrameEvents_MetaData[] = {
		{ "Comment", "/** Captured events from the transition that we've recorded */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Captured events from the transition that we've recorded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceState_MetaData[] = {
		{ "Comment", "/** Transition source state. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Transition source state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetState_MetaData[] = {
		{ "Comment", "/** Transition target state. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Transition target state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Comment", "/** Priority of the transition that caused the state change. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Priority of the transition that caused the state change." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceStateTree_MetaData[] = {
		{ "Comment", "/** StateTree asset that was active when the transition was requested. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "StateTree asset that was active when the transition was requested." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceRootState_MetaData[] = {
		{ "Comment", "/** Root state the execution frame where the transition was requested. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Root state the execution frame where the transition was requested." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NextActiveFrames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NextActiveFrames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NextActiveFrameEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NextActiveFrameEvents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceStateTree;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceRootState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecordedStateTreeTransitionResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::NewProp_NextActiveFrames_Inner = { "NextActiveFrames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame, METADATA_PARAMS(0, nullptr) }; // 4242780615
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::NewProp_NextActiveFrames = { "NextActiveFrames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordedStateTreeTransitionResult, NextActiveFrames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextActiveFrames_MetaData), NewProp_NextActiveFrames_MetaData) }; // 4242780615
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::NewProp_NextActiveFrameEvents_Inner = { "NextActiveFrameEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreeEvent, METADATA_PARAMS(0, nullptr) }; // 1586505974
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::NewProp_NextActiveFrameEvents = { "NextActiveFrameEvents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordedStateTreeTransitionResult, NextActiveFrameEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextActiveFrameEvents_MetaData), NewProp_NextActiveFrameEvents_MetaData) }; // 1586505974
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::NewProp_SourceState = { "SourceState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordedStateTreeTransitionResult, SourceState), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceState_MetaData), NewProp_SourceState_MetaData) }; // 3726322759
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::NewProp_TargetState = { "TargetState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordedStateTreeTransitionResult, TargetState), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetState_MetaData), NewProp_TargetState_MetaData) }; // 3726322759
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordedStateTreeTransitionResult, Priority), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) }; // 2934257566
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::NewProp_SourceStateTree = { "SourceStateTree", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordedStateTreeTransitionResult, SourceStateTree), Z_Construct_UClass_UStateTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceStateTree_MetaData), NewProp_SourceStateTree_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::NewProp_SourceRootState = { "SourceRootState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordedStateTreeTransitionResult, SourceRootState), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceRootState_MetaData), NewProp_SourceRootState_MetaData) }; // 3726322759
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::NewProp_NextActiveFrames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::NewProp_NextActiveFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::NewProp_NextActiveFrameEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::NewProp_NextActiveFrameEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::NewProp_SourceState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::NewProp_TargetState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::NewProp_Priority_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::NewProp_SourceStateTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::NewProp_SourceRootState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"RecordedStateTreeTransitionResult",
	Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::PropPointers),
	sizeof(FRecordedStateTreeTransitionResult),
	alignof(FRecordedStateTreeTransitionResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult()
{
	if (!Z_Registration_Info_UScriptStruct_RecordedStateTreeTransitionResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RecordedStateTreeTransitionResult.InnerSingleton, Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RecordedStateTreeTransitionResult.InnerSingleton;
}
// End ScriptStruct FRecordedStateTreeTransitionResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStateTreeUpdatePhase_StaticEnum, TEXT("EStateTreeUpdatePhase"), &Z_Registration_Info_UEnum_EStateTreeUpdatePhase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3443519489U) },
		{ EStateTreeRunStatus_StaticEnum, TEXT("EStateTreeRunStatus"), &Z_Registration_Info_UEnum_EStateTreeRunStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 955675859U) },
		{ EStateTreeStateChangeType_StaticEnum, TEXT("EStateTreeStateChangeType"), &Z_Registration_Info_UEnum_EStateTreeStateChangeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4203008829U) },
		{ EStateTreeConditionEvaluationMode_StaticEnum, TEXT("EStateTreeConditionEvaluationMode"), &Z_Registration_Info_UEnum_EStateTreeConditionEvaluationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4101265614U) },
		{ EStateTreeTransitionSourceType_StaticEnum, TEXT("EStateTreeTransitionSourceType"), &Z_Registration_Info_UEnum_EStateTreeTransitionSourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 158169413U) },
		{ EStateTreeRecordTransitions_StaticEnum, TEXT("EStateTreeRecordTransitions"), &Z_Registration_Info_UEnum_EStateTreeRecordTransitions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3083584606U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreeExternalDataHandle::StaticStruct, Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::NewStructOps, TEXT("StateTreeExternalDataHandle"), &Z_Registration_Info_UScriptStruct_StateTreeExternalDataHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeExternalDataHandle), 1678939215U) },
		{ FStateTreeExternalDataDesc::StaticStruct, Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewStructOps, TEXT("StateTreeExternalDataDesc"), &Z_Registration_Info_UScriptStruct_StateTreeExternalDataDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeExternalDataDesc), 1953451301U) },
		{ FStateTreeTransitionRequest::StaticStruct, Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewStructOps, TEXT("StateTreeTransitionRequest"), &Z_Registration_Info_UScriptStruct_StateTreeTransitionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeTransitionRequest), 2670843344U) },
		{ FStateTreeActiveStates::StaticStruct, Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewStructOps, TEXT("StateTreeActiveStates"), &Z_Registration_Info_UScriptStruct_StateTreeActiveStates, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeActiveStates), 1547864753U) },
		{ FStateTreeTransitionSource::StaticStruct, Z_Construct_UScriptStruct_FStateTreeTransitionSource_Statics::NewStructOps, TEXT("StateTreeTransitionSource"), &Z_Registration_Info_UScriptStruct_StateTreeTransitionSource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeTransitionSource), 330792730U) },
		{ FStateTreeTransitionDelayedState::StaticStruct, Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState_Statics::NewStructOps, TEXT("StateTreeTransitionDelayedState"), &Z_Registration_Info_UScriptStruct_StateTreeTransitionDelayedState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeTransitionDelayedState), 3760001273U) },
		{ FStateTreeExecutionFrame::StaticStruct, Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::NewStructOps, TEXT("StateTreeExecutionFrame"), &Z_Registration_Info_UScriptStruct_StateTreeExecutionFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeExecutionFrame), 1314638814U) },
		{ FStateTreeExecutionState::StaticStruct, Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewStructOps, TEXT("StateTreeExecutionState"), &Z_Registration_Info_UScriptStruct_StateTreeExecutionState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeExecutionState), 2563513698U) },
		{ FStateTreeTransitionResult::StaticStruct, Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewStructOps, TEXT("StateTreeTransitionResult"), &Z_Registration_Info_UScriptStruct_StateTreeTransitionResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeTransitionResult), 3558080894U) },
		{ FRecordedStateTreeExecutionFrame::StaticStruct, Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame_Statics::NewStructOps, TEXT("RecordedStateTreeExecutionFrame"), &Z_Registration_Info_UScriptStruct_RecordedStateTreeExecutionFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecordedStateTreeExecutionFrame), 4242780615U) },
		{ FRecordedStateTreeTransitionResult::StaticStruct, Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::NewStructOps, TEXT("RecordedStateTreeTransitionResult"), &Z_Registration_Info_UScriptStruct_RecordedStateTreeTransitionResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecordedStateTreeTransitionResult), 2300963014U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionTypes_h_2380392759(TEXT("/Script/StateTreeModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
