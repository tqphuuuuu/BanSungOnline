// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Public/Blueprint/StateTreeTaskBlueprintBase.h"
#include "StateTreeModule/Public/StateTreeExecutionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeTaskBlueprintBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeNodeBlueprintBase();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeTaskBlueprintBase();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeTaskBlueprintBase_NoRegister();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeActiveStates();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBlueprintTaskWrapper();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTaskBase();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransitionResult();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin Class UStateTreeTaskBlueprintBase Function FinishTask
struct Z_Construct_UFunction_UStateTreeTaskBlueprintBase_FinishTask_Statics
{
	struct StateTreeTaskBlueprintBase_eventFinishTask_Parms
	{
		bool bSucceeded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StateTree" },
		{ "Comment", "/** Finish the task and sets it's status. */" },
		{ "CPP_Default_bSucceeded", "true" },
		{ "DisplayName", "Finish Task" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeTaskBlueprintBase.h" },
		{ "ToolTip", "Finish the task and sets it's status." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSucceeded_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UStateTreeTaskBlueprintBase_FinishTask_Statics::NewProp_bSucceeded_SetBit(void* Obj)
{
	((StateTreeTaskBlueprintBase_eventFinishTask_Parms*)Obj)->bSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStateTreeTaskBlueprintBase_FinishTask_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StateTreeTaskBlueprintBase_eventFinishTask_Parms), &Z_Construct_UFunction_UStateTreeTaskBlueprintBase_FinishTask_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSucceeded_MetaData), NewProp_bSucceeded_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTreeTaskBlueprintBase_FinishTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeTaskBlueprintBase_FinishTask_Statics::NewProp_bSucceeded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTaskBlueprintBase_FinishTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTreeTaskBlueprintBase_FinishTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTreeTaskBlueprintBase, nullptr, "FinishTask", nullptr, nullptr, Z_Construct_UFunction_UStateTreeTaskBlueprintBase_FinishTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTaskBlueprintBase_FinishTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStateTreeTaskBlueprintBase_FinishTask_Statics::StateTreeTaskBlueprintBase_eventFinishTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTaskBlueprintBase_FinishTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateTreeTaskBlueprintBase_FinishTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStateTreeTaskBlueprintBase_FinishTask_Statics::StateTreeTaskBlueprintBase_eventFinishTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStateTreeTaskBlueprintBase_FinishTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateTreeTaskBlueprintBase_FinishTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStateTreeTaskBlueprintBase::execFinishTask)
{
	P_GET_UBOOL(Z_Param_bSucceeded);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishTask(Z_Param_bSucceeded);
	P_NATIVE_END;
}
// End Class UStateTreeTaskBlueprintBase Function FinishTask

// Begin Class UStateTreeTaskBlueprintBase Function ReceiveEnterState
struct StateTreeTaskBlueprintBase_eventReceiveEnterState_Parms
{
	FStateTreeTransitionResult Transition;
	EStateTreeRunStatus ReturnValue;

	/** Constructor, initializes return property only **/
	StateTreeTaskBlueprintBase_eventReceiveEnterState_Parms()
		: ReturnValue((EStateTreeRunStatus)0)
	{
	}
};
static const FName NAME_UStateTreeTaskBlueprintBase_ReceiveEnterState = FName(TEXT("ReceiveEnterState"));
EStateTreeRunStatus UStateTreeTaskBlueprintBase::ReceiveEnterState(FStateTreeTransitionResult const& Transition)
{
	StateTreeTaskBlueprintBase_eventReceiveEnterState_Parms Parms;
	Parms.Transition=Transition;
	UFunction* Func = FindFunctionChecked(NAME_UStateTreeTaskBlueprintBase_ReceiveEnterState);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveEnterState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the new EnterState event without without return value instead. Task status is now controlled via FinishTask node, instead of a return value. Default status is running." },
		{ "DisplayName", "EnterState (Deprecated)" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeTaskBlueprintBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveEnterState_Statics::NewProp_Transition = { "Transition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateTreeTaskBlueprintBase_eventReceiveEnterState_Parms, Transition), Z_Construct_UScriptStruct_FStateTreeTransitionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transition_MetaData), NewProp_Transition_MetaData) }; // 3558080894
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveEnterState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveEnterState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateTreeTaskBlueprintBase_eventReceiveEnterState_Parms, ReturnValue), Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus, METADATA_PARAMS(0, nullptr) }; // 955675859
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveEnterState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveEnterState_Statics::NewProp_Transition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveEnterState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveEnterState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveEnterState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveEnterState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTreeTaskBlueprintBase, nullptr, "ReceiveEnterState", nullptr, nullptr, Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveEnterState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveEnterState_Statics::PropPointers), sizeof(StateTreeTaskBlueprintBase_eventReceiveEnterState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveEnterState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveEnterState_Statics::Function_MetaDataParams) };
static_assert(sizeof(StateTreeTaskBlueprintBase_eventReceiveEnterState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveEnterState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveEnterState_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UStateTreeTaskBlueprintBase Function ReceiveEnterState

// Begin Class UStateTreeTaskBlueprintBase Function ReceiveExitState
struct StateTreeTaskBlueprintBase_eventReceiveExitState_Parms
{
	FStateTreeTransitionResult Transition;
};
static const FName NAME_UStateTreeTaskBlueprintBase_ReceiveExitState = FName(TEXT("ReceiveExitState"));
void UStateTreeTaskBlueprintBase::ReceiveExitState(FStateTreeTransitionResult const& Transition)
{
	StateTreeTaskBlueprintBase_eventReceiveExitState_Parms Parms;
	Parms.Transition=Transition;
	UFunction* Func = FindFunctionChecked(NAME_UStateTreeTaskBlueprintBase_ReceiveExitState);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveExitState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called when a current state is exited and task is part of active states.\n\x09 * @param Transition Describes the states involved in the transition\n\x09 */" },
		{ "DisplayName", "ExitState" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeTaskBlueprintBase.h" },
		{ "ToolTip", "Called when a current state is exited and task is part of active states.\n@param Transition Describes the states involved in the transition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveExitState_Statics::NewProp_Transition = { "Transition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateTreeTaskBlueprintBase_eventReceiveExitState_Parms, Transition), Z_Construct_UScriptStruct_FStateTreeTransitionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transition_MetaData), NewProp_Transition_MetaData) }; // 3558080894
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveExitState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveExitState_Statics::NewProp_Transition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveExitState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveExitState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTreeTaskBlueprintBase, nullptr, "ReceiveExitState", nullptr, nullptr, Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveExitState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveExitState_Statics::PropPointers), sizeof(StateTreeTaskBlueprintBase_eventReceiveExitState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveExitState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveExitState_Statics::Function_MetaDataParams) };
static_assert(sizeof(StateTreeTaskBlueprintBase_eventReceiveExitState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveExitState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveExitState_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UStateTreeTaskBlueprintBase Function ReceiveExitState

// Begin Class UStateTreeTaskBlueprintBase Function ReceiveLatentEnterState
struct StateTreeTaskBlueprintBase_eventReceiveLatentEnterState_Parms
{
	FStateTreeTransitionResult Transition;
};
static const FName NAME_UStateTreeTaskBlueprintBase_ReceiveLatentEnterState = FName(TEXT("ReceiveLatentEnterState"));
void UStateTreeTaskBlueprintBase::ReceiveLatentEnterState(FStateTreeTransitionResult const& Transition)
{
	StateTreeTaskBlueprintBase_eventReceiveLatentEnterState_Parms Parms;
	Parms.Transition=Transition;
	UFunction* Func = FindFunctionChecked(NAME_UStateTreeTaskBlueprintBase_ReceiveLatentEnterState);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveLatentEnterState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called when a new state is entered and task is part of active states.\n\x09 * Use FinishTask() to set the task execution completed. State completion is controlled by completed tasks.\n\x09 *\n\x09 * GameplayTasks and other latent actions should be generally triggered on EnterState. When using a GameplayTasks it's required\n\x09 * to manually cancel active tasks on ExitState if the GameplayTask's lifetime is tied to the State Tree task.\n\x09 *\n\x09 * @param Transition Describes the states involved in the transition\n\x09 */" },
		{ "DisplayName", "EnterState" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeTaskBlueprintBase.h" },
		{ "ToolTip", "Called when a new state is entered and task is part of active states.\nUse FinishTask() to set the task execution completed. State completion is controlled by completed tasks.\n\nGameplayTasks and other latent actions should be generally triggered on EnterState. When using a GameplayTasks it's required\nto manually cancel active tasks on ExitState if the GameplayTask's lifetime is tied to the State Tree task.\n\n@param Transition Describes the states involved in the transition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveLatentEnterState_Statics::NewProp_Transition = { "Transition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateTreeTaskBlueprintBase_eventReceiveLatentEnterState_Parms, Transition), Z_Construct_UScriptStruct_FStateTreeTransitionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transition_MetaData), NewProp_Transition_MetaData) }; // 3558080894
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveLatentEnterState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveLatentEnterState_Statics::NewProp_Transition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveLatentEnterState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveLatentEnterState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTreeTaskBlueprintBase, nullptr, "ReceiveLatentEnterState", nullptr, nullptr, Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveLatentEnterState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveLatentEnterState_Statics::PropPointers), sizeof(StateTreeTaskBlueprintBase_eventReceiveLatentEnterState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveLatentEnterState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveLatentEnterState_Statics::Function_MetaDataParams) };
static_assert(sizeof(StateTreeTaskBlueprintBase_eventReceiveLatentEnterState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveLatentEnterState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveLatentEnterState_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UStateTreeTaskBlueprintBase Function ReceiveLatentEnterState

// Begin Class UStateTreeTaskBlueprintBase Function ReceiveLatentTick
struct StateTreeTaskBlueprintBase_eventReceiveLatentTick_Parms
{
	float DeltaTime;
};
static const FName NAME_UStateTreeTaskBlueprintBase_ReceiveLatentTick = FName(TEXT("ReceiveLatentTick"));
void UStateTreeTaskBlueprintBase::ReceiveLatentTick(const float DeltaTime)
{
	StateTreeTaskBlueprintBase_eventReceiveLatentTick_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	UFunction* Func = FindFunctionChecked(NAME_UStateTreeTaskBlueprintBase_ReceiveLatentTick);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveLatentTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called during state tree tick when the task is on active state.\n\x09 * Use FinishTask() to set the task execution completed. State completion is controlled by completed tasks.\n\x09 *\n\x09 * Triggering GameplayTasks and other latent action should generally be done on EnterState. Tick is called on each update (or event)\n\x09 * and can cause huge amount of task added if the logic is not handled carefully.\n\x09 * Tick should be generally be used for monitoring that require polling, or actions that require constant ticking.  \n\x09 *\n\x09 * Note: The method is called only if bShouldCallTick or bShouldCallTickOnlyOnEvents is set.\n\x09 * @param DeltaTime Time since last StateTree tick.\n\x09 */" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeTaskBlueprintBase.h" },
		{ "ToolTip", "Called during state tree tick when the task is on active state.\nUse FinishTask() to set the task execution completed. State completion is controlled by completed tasks.\n\nTriggering GameplayTasks and other latent action should generally be done on EnterState. Tick is called on each update (or event)\nand can cause huge amount of task added if the logic is not handled carefully.\nTick should be generally be used for monitoring that require polling, or actions that require constant ticking.\n\nNote: The method is called only if bShouldCallTick or bShouldCallTickOnlyOnEvents is set.\n@param DeltaTime Time since last StateTree tick." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveLatentTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateTreeTaskBlueprintBase_eventReceiveLatentTick_Parms, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTime_MetaData), NewProp_DeltaTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveLatentTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveLatentTick_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveLatentTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveLatentTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTreeTaskBlueprintBase, nullptr, "ReceiveLatentTick", nullptr, nullptr, Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveLatentTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveLatentTick_Statics::PropPointers), sizeof(StateTreeTaskBlueprintBase_eventReceiveLatentTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveLatentTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveLatentTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(StateTreeTaskBlueprintBase_eventReceiveLatentTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveLatentTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveLatentTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UStateTreeTaskBlueprintBase Function ReceiveLatentTick

// Begin Class UStateTreeTaskBlueprintBase Function ReceiveStateCompleted
struct StateTreeTaskBlueprintBase_eventReceiveStateCompleted_Parms
{
	EStateTreeRunStatus CompletionStatus;
	FStateTreeActiveStates CompletedActiveStates;
};
static const FName NAME_UStateTreeTaskBlueprintBase_ReceiveStateCompleted = FName(TEXT("ReceiveStateCompleted"));
void UStateTreeTaskBlueprintBase::ReceiveStateCompleted(const EStateTreeRunStatus CompletionStatus, const FStateTreeActiveStates CompletedActiveStates)
{
	StateTreeTaskBlueprintBase_eventReceiveStateCompleted_Parms Parms;
	Parms.CompletionStatus=CompletionStatus;
	Parms.CompletedActiveStates=CompletedActiveStates;
	UFunction* Func = FindFunctionChecked(NAME_UStateTreeTaskBlueprintBase_ReceiveStateCompleted);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveStateCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called right after a state has been completed, but before new state has been selected. StateCompleted is called in reverse order to allow to propagate state to other Tasks that\n\x09 * are executed earlier in the tree. Note that StateCompleted is not called if conditional transition changes the state.\n\x09 * @param CompletionStatus Describes the running status of the completed state (Succeeded/Failed).\n\x09 * @param CompletedActiveStates Active states at the time of completion.\n\x09 */" },
		{ "DisplayName", "StateCompleted" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeTaskBlueprintBase.h" },
		{ "ToolTip", "Called right after a state has been completed, but before new state has been selected. StateCompleted is called in reverse order to allow to propagate state to other Tasks that\nare executed earlier in the tree. Note that StateCompleted is not called if conditional transition changes the state.\n@param CompletionStatus Describes the running status of the completed state (Succeeded/Failed).\n@param CompletedActiveStates Active states at the time of completion." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompletionStatus_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompletedActiveStates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompletionStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CompletionStatus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompletedActiveStates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveStateCompleted_Statics::NewProp_CompletionStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveStateCompleted_Statics::NewProp_CompletionStatus = { "CompletionStatus", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateTreeTaskBlueprintBase_eventReceiveStateCompleted_Parms, CompletionStatus), Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompletionStatus_MetaData), NewProp_CompletionStatus_MetaData) }; // 955675859
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveStateCompleted_Statics::NewProp_CompletedActiveStates = { "CompletedActiveStates", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateTreeTaskBlueprintBase_eventReceiveStateCompleted_Parms, CompletedActiveStates), Z_Construct_UScriptStruct_FStateTreeActiveStates, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompletedActiveStates_MetaData), NewProp_CompletedActiveStates_MetaData) }; // 1547864753
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveStateCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveStateCompleted_Statics::NewProp_CompletionStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveStateCompleted_Statics::NewProp_CompletionStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveStateCompleted_Statics::NewProp_CompletedActiveStates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveStateCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveStateCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTreeTaskBlueprintBase, nullptr, "ReceiveStateCompleted", nullptr, nullptr, Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveStateCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveStateCompleted_Statics::PropPointers), sizeof(StateTreeTaskBlueprintBase_eventReceiveStateCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveStateCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveStateCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(StateTreeTaskBlueprintBase_eventReceiveStateCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveStateCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveStateCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UStateTreeTaskBlueprintBase Function ReceiveStateCompleted

// Begin Class UStateTreeTaskBlueprintBase Function ReceiveTick
struct StateTreeTaskBlueprintBase_eventReceiveTick_Parms
{
	float DeltaTime;
	EStateTreeRunStatus ReturnValue;

	/** Constructor, initializes return property only **/
	StateTreeTaskBlueprintBase_eventReceiveTick_Parms()
		: ReturnValue((EStateTreeRunStatus)0)
	{
	}
};
static const FName NAME_UStateTreeTaskBlueprintBase_ReceiveTick = FName(TEXT("ReceiveTick"));
EStateTreeRunStatus UStateTreeTaskBlueprintBase::ReceiveTick(const float DeltaTime)
{
	StateTreeTaskBlueprintBase_eventReceiveTick_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	UFunction* Func = FindFunctionChecked(NAME_UStateTreeTaskBlueprintBase_ReceiveTick);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the new Tick event without without return value instead. Task status is now controlled via FinishTask node, instead of a return value. Default status is running." },
		{ "DisplayName", "Tick (Deprecated)" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeTaskBlueprintBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateTreeTaskBlueprintBase_eventReceiveTick_Parms, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTime_MetaData), NewProp_DeltaTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveTick_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateTreeTaskBlueprintBase_eventReceiveTick_Parms, ReturnValue), Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus, METADATA_PARAMS(0, nullptr) }; // 955675859
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveTick_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveTick_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveTick_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTreeTaskBlueprintBase, nullptr, "ReceiveTick", nullptr, nullptr, Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveTick_Statics::PropPointers), sizeof(StateTreeTaskBlueprintBase_eventReceiveTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(StateTreeTaskBlueprintBase_eventReceiveTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UStateTreeTaskBlueprintBase Function ReceiveTick

// Begin Class UStateTreeTaskBlueprintBase
void UStateTreeTaskBlueprintBase::StaticRegisterNativesUStateTreeTaskBlueprintBase()
{
	UClass* Class = UStateTreeTaskBlueprintBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FinishTask", &UStateTreeTaskBlueprintBase::execFinishTask },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTreeTaskBlueprintBase);
UClass* Z_Construct_UClass_UStateTreeTaskBlueprintBase_NoRegister()
{
	return UStateTreeTaskBlueprintBase::StaticClass();
}
struct Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Base class for Blueprint based Tasks.\n */" },
		{ "IncludePath", "Blueprint/StateTreeTaskBlueprintBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeTaskBlueprintBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* Base class for Blueprint based Tasks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldStateChangeOnReselect_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/**\n\x09 * If set to true, the task will receive EnterState/ExitState even if the state was previously active.\n\x09 * Generally this should be true for action type tasks, like playing animation,\n\x09 * and false on state like tasks like claiming a resource that is expected to be acquired on child states. */" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeTaskBlueprintBase.h" },
		{ "ToolTip", "If set to true, the task will receive EnterState/ExitState even if the state was previously active.\nGenerally this should be true for action type tasks, like playing animation,\nand false on state like tasks like claiming a resource that is expected to be acquired on child states." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldCallTickOnlyOnEvents_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** If set to true, Tick() is called. Default false. */" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeTaskBlueprintBase.h" },
		{ "ToolTip", "If set to true, Tick() is called. Default false." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldCopyBoundPropertiesOnTick_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** If set to true, copy the values of bound properties before calling Tick(). Default true. */" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeTaskBlueprintBase.h" },
		{ "ToolTip", "If set to true, copy the values of bound properties before calling Tick(). Default true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldCopyBoundPropertiesOnExitState_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** If set to true, copy the values of bound properties before calling ExitState(). Default true. */" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeTaskBlueprintBase.h" },
		{ "ToolTip", "If set to true, copy the values of bound properties before calling ExitState(). Default true." },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldStateChangeOnReselect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldStateChangeOnReselect;
	static void NewProp_bShouldCallTickOnlyOnEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldCallTickOnlyOnEvents;
	static void NewProp_bShouldCopyBoundPropertiesOnTick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldCopyBoundPropertiesOnTick;
	static void NewProp_bShouldCopyBoundPropertiesOnExitState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldCopyBoundPropertiesOnExitState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStateTreeTaskBlueprintBase_FinishTask, "FinishTask" }, // 2066782428
		{ &Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveEnterState, "ReceiveEnterState" }, // 1263674336
		{ &Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveExitState, "ReceiveExitState" }, // 942584511
		{ &Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveLatentEnterState, "ReceiveLatentEnterState" }, // 1095122103
		{ &Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveLatentTick, "ReceiveLatentTick" }, // 3892784480
		{ &Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveStateCompleted, "ReceiveStateCompleted" }, // 2451195077
		{ &Z_Construct_UFunction_UStateTreeTaskBlueprintBase_ReceiveTick, "ReceiveTick" }, // 208327271
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTreeTaskBlueprintBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics::NewProp_bShouldStateChangeOnReselect_SetBit(void* Obj)
{
	((UStateTreeTaskBlueprintBase*)Obj)->bShouldStateChangeOnReselect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics::NewProp_bShouldStateChangeOnReselect = { "bShouldStateChangeOnReselect", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStateTreeTaskBlueprintBase), &Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics::NewProp_bShouldStateChangeOnReselect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldStateChangeOnReselect_MetaData), NewProp_bShouldStateChangeOnReselect_MetaData) };
void Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics::NewProp_bShouldCallTickOnlyOnEvents_SetBit(void* Obj)
{
	((UStateTreeTaskBlueprintBase*)Obj)->bShouldCallTickOnlyOnEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics::NewProp_bShouldCallTickOnlyOnEvents = { "bShouldCallTickOnlyOnEvents", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStateTreeTaskBlueprintBase), &Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics::NewProp_bShouldCallTickOnlyOnEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldCallTickOnlyOnEvents_MetaData), NewProp_bShouldCallTickOnlyOnEvents_MetaData) };
void Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics::NewProp_bShouldCopyBoundPropertiesOnTick_SetBit(void* Obj)
{
	((UStateTreeTaskBlueprintBase*)Obj)->bShouldCopyBoundPropertiesOnTick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics::NewProp_bShouldCopyBoundPropertiesOnTick = { "bShouldCopyBoundPropertiesOnTick", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStateTreeTaskBlueprintBase), &Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics::NewProp_bShouldCopyBoundPropertiesOnTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldCopyBoundPropertiesOnTick_MetaData), NewProp_bShouldCopyBoundPropertiesOnTick_MetaData) };
void Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics::NewProp_bShouldCopyBoundPropertiesOnExitState_SetBit(void* Obj)
{
	((UStateTreeTaskBlueprintBase*)Obj)->bShouldCopyBoundPropertiesOnExitState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics::NewProp_bShouldCopyBoundPropertiesOnExitState = { "bShouldCopyBoundPropertiesOnExitState", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStateTreeTaskBlueprintBase), &Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics::NewProp_bShouldCopyBoundPropertiesOnExitState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldCopyBoundPropertiesOnExitState_MetaData), NewProp_bShouldCopyBoundPropertiesOnExitState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics::NewProp_bShouldStateChangeOnReselect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics::NewProp_bShouldCallTickOnlyOnEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics::NewProp_bShouldCopyBoundPropertiesOnTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics::NewProp_bShouldCopyBoundPropertiesOnExitState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStateTreeNodeBlueprintBase,
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics::ClassParams = {
	&UStateTreeTaskBlueprintBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStateTreeTaskBlueprintBase()
{
	if (!Z_Registration_Info_UClass_UStateTreeTaskBlueprintBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTreeTaskBlueprintBase.OuterSingleton, Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStateTreeTaskBlueprintBase.OuterSingleton;
}
template<> STATETREEMODULE_API UClass* StaticClass<UStateTreeTaskBlueprintBase>()
{
	return UStateTreeTaskBlueprintBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTreeTaskBlueprintBase);
UStateTreeTaskBlueprintBase::~UStateTreeTaskBlueprintBase() {}
// End Class UStateTreeTaskBlueprintBase

// Begin ScriptStruct FStateTreeBlueprintTaskWrapper
static_assert(std::is_polymorphic<FStateTreeBlueprintTaskWrapper>() == std::is_polymorphic<FStateTreeTaskBase>(), "USTRUCT FStateTreeBlueprintTaskWrapper cannot be polymorphic unless super FStateTreeTaskBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeBlueprintTaskWrapper;
class UScriptStruct* FStateTreeBlueprintTaskWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeBlueprintTaskWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeBlueprintTaskWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeBlueprintTaskWrapper, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeBlueprintTaskWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeBlueprintTaskWrapper.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeBlueprintTaskWrapper>()
{
	return FStateTreeBlueprintTaskWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeBlueprintTaskWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Wrapper for Blueprint based Tasks.\n */" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeTaskBlueprintBase.h" },
		{ "ToolTip", "Wrapper for Blueprint based Tasks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeTaskBlueprintBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_TaskClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeBlueprintTaskWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FStateTreeBlueprintTaskWrapper_Statics::NewProp_TaskClass = { "TaskClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeBlueprintTaskWrapper, TaskClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UStateTreeTaskBlueprintBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskClass_MetaData), NewProp_TaskClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeBlueprintTaskWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBlueprintTaskWrapper_Statics::NewProp_TaskClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBlueprintTaskWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeBlueprintTaskWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreeTaskBase,
	&NewStructOps,
	"StateTreeBlueprintTaskWrapper",
	Z_Construct_UScriptStruct_FStateTreeBlueprintTaskWrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBlueprintTaskWrapper_Statics::PropPointers),
	sizeof(FStateTreeBlueprintTaskWrapper),
	alignof(FStateTreeBlueprintTaskWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBlueprintTaskWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeBlueprintTaskWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBlueprintTaskWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeBlueprintTaskWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeBlueprintTaskWrapper.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeBlueprintTaskWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeBlueprintTaskWrapper.InnerSingleton;
}
// End ScriptStruct FStateTreeBlueprintTaskWrapper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreeBlueprintTaskWrapper::StaticStruct, Z_Construct_UScriptStruct_FStateTreeBlueprintTaskWrapper_Statics::NewStructOps, TEXT("StateTreeBlueprintTaskWrapper"), &Z_Registration_Info_UScriptStruct_StateTreeBlueprintTaskWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeBlueprintTaskWrapper), 74857307U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStateTreeTaskBlueprintBase, UStateTreeTaskBlueprintBase::StaticClass, TEXT("UStateTreeTaskBlueprintBase"), &Z_Registration_Info_UClass_UStateTreeTaskBlueprintBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTreeTaskBlueprintBase), 1262088726U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_5682338(TEXT("/Script/StateTreeModule"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
