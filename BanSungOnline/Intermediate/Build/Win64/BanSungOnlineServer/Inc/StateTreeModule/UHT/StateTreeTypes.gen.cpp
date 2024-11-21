// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Public/StateTreeTypes.h"
#include "Runtime/CoreUObject/Public/StructUtils/PropertyBag.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "StateTreeModule/Public/StateTreeIndexTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedPropertyBag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTree_NoRegister();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeDataSourceType();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeExpressionOperand();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeSelectionFallback();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeStateType();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FCompactEventDesc();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FCompactStateTransition();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FCompactStateTreeParameters();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FCompactStateTreeState();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeDataHandle();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeIndex16();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStateHandle();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStateIdToHandle();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStateLink();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStructRef();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin Enum EStateTreeTransitionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeTransitionType;
static UEnum* EStateTreeTransitionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStateTreeTransitionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStateTreeTransitionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeTransitionType"));
	}
	return Z_Registration_Info_UEnum_EStateTreeTransitionType.OuterSingleton;
}
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeTransitionType>()
{
	return EStateTreeTransitionType_StaticEnum();
}
struct Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Transitions behavior. */" },
		{ "Failed.Comment", "/** Stop State Tree or sub-tree and mark execution failed. */" },
		{ "Failed.Name", "EStateTreeTransitionType::Failed" },
		{ "Failed.ToolTip", "Stop State Tree or sub-tree and mark execution failed." },
		{ "GotoState.Comment", "/** Transition to the specified state. */" },
		{ "GotoState.Name", "EStateTreeTransitionType::GotoState" },
		{ "GotoState.ToolTip", "Transition to the specified state." },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "NextSelectableState.Comment", "/** Transition to the next selectable sibling state */" },
		{ "NextSelectableState.Name", "EStateTreeTransitionType::NextSelectableState" },
		{ "NextSelectableState.ToolTip", "Transition to the next selectable sibling state" },
		{ "NextState.Comment", "/** Transition to the next sibling state. */" },
		{ "NextState.Name", "EStateTreeTransitionType::NextState" },
		{ "NextState.ToolTip", "Transition to the next sibling state." },
		{ "None.Comment", "/** No transition will take place. */" },
		{ "None.Name", "EStateTreeTransitionType::None" },
		{ "None.ToolTip", "No transition will take place." },
		{ "NotSet.Name", "EStateTreeTransitionType::NotSet" },
		{ "Succeeded.Comment", "/** Stop State Tree or sub-tree and mark execution succeeded. */" },
		{ "Succeeded.Name", "EStateTreeTransitionType::Succeeded" },
		{ "Succeeded.ToolTip", "Stop State Tree or sub-tree and mark execution succeeded." },
		{ "ToolTip", "Transitions behavior." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStateTreeTransitionType::None", (int64)EStateTreeTransitionType::None },
		{ "EStateTreeTransitionType::Succeeded", (int64)EStateTreeTransitionType::Succeeded },
		{ "EStateTreeTransitionType::Failed", (int64)EStateTreeTransitionType::Failed },
		{ "EStateTreeTransitionType::GotoState", (int64)EStateTreeTransitionType::GotoState },
		{ "EStateTreeTransitionType::NextState", (int64)EStateTreeTransitionType::NextState },
		{ "EStateTreeTransitionType::NextSelectableState", (int64)EStateTreeTransitionType::NextSelectableState },
		{ "EStateTreeTransitionType::NotSet", (int64)EStateTreeTransitionType::NotSet },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	"EStateTreeTransitionType",
	"EStateTreeTransitionType",
	Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType()
{
	if (!Z_Registration_Info_UEnum_EStateTreeTransitionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeTransitionType.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStateTreeTransitionType.InnerSingleton;
}
// End Enum EStateTreeTransitionType

// Begin Enum EStateTreeExpressionOperand
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeExpressionOperand;
static UEnum* EStateTreeExpressionOperand_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStateTreeExpressionOperand.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStateTreeExpressionOperand.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeExpressionOperand, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeExpressionOperand"));
	}
	return Z_Registration_Info_UEnum_EStateTreeExpressionOperand.OuterSingleton;
}
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeExpressionOperand>()
{
	return EStateTreeExpressionOperand_StaticEnum();
}
struct Z_Construct_UEnum_StateTreeModule_EStateTreeExpressionOperand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "And.Comment", "/** Combine results with AND. */" },
		{ "And.Name", "EStateTreeExpressionOperand::And" },
		{ "And.ToolTip", "Combine results with AND." },
		{ "Comment", "/** Operand in an expression */" },
		{ "Copy.Comment", "/** Copy result */" },
		{ "Copy.Hidden", "" },
		{ "Copy.Name", "EStateTreeExpressionOperand::Copy" },
		{ "Copy.ToolTip", "Copy result" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "Or.Comment", "/** Combine results with OR. */" },
		{ "Or.Name", "EStateTreeExpressionOperand::Or" },
		{ "Or.ToolTip", "Combine results with OR." },
		{ "ToolTip", "Operand in an expression" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStateTreeExpressionOperand::Copy", (int64)EStateTreeExpressionOperand::Copy },
		{ "EStateTreeExpressionOperand::And", (int64)EStateTreeExpressionOperand::And },
		{ "EStateTreeExpressionOperand::Or", (int64)EStateTreeExpressionOperand::Or },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeExpressionOperand_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	"EStateTreeExpressionOperand",
	"EStateTreeExpressionOperand",
	Z_Construct_UEnum_StateTreeModule_EStateTreeExpressionOperand_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeExpressionOperand_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeExpressionOperand_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeExpressionOperand_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeExpressionOperand()
{
	if (!Z_Registration_Info_UEnum_EStateTreeExpressionOperand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeExpressionOperand.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeExpressionOperand_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStateTreeExpressionOperand.InnerSingleton;
}
// End Enum EStateTreeExpressionOperand

// Begin Enum EStateTreeStateType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeStateType;
static UEnum* EStateTreeStateType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStateTreeStateType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStateTreeStateType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeStateType, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeStateType"));
	}
	return Z_Registration_Info_UEnum_EStateTreeStateType.OuterSingleton;
}
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeStateType>()
{
	return EStateTreeStateType_StaticEnum();
}
struct Z_Construct_UEnum_StateTreeModule_EStateTreeStateType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Group.Comment", "/** A State containing just child states. */" },
		{ "Group.Name", "EStateTreeStateType::Group" },
		{ "Group.ToolTip", "A State containing just child states." },
		{ "Linked.Comment", "/** A State that is linked to another state in the tree (the execution continues on the linked state). */" },
		{ "Linked.Name", "EStateTreeStateType::Linked" },
		{ "Linked.ToolTip", "A State that is linked to another state in the tree (the execution continues on the linked state)." },
		{ "LinkedAsset.Comment", "/** A State that is linked to another StateTree asset (the execution continues on the Root state of the linked asset). */" },
		{ "LinkedAsset.Name", "EStateTreeStateType::LinkedAsset" },
		{ "LinkedAsset.ToolTip", "A State that is linked to another StateTree asset (the execution continues on the Root state of the linked asset)." },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "State.Comment", "/** A State containing tasks and child states. */" },
		{ "State.Name", "EStateTreeStateType::State" },
		{ "State.ToolTip", "A State containing tasks and child states." },
		{ "Subtree.Comment", "/** A subtree that can be linked to. */" },
		{ "Subtree.Name", "EStateTreeStateType::Subtree" },
		{ "Subtree.ToolTip", "A subtree that can be linked to." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStateTreeStateType::State", (int64)EStateTreeStateType::State },
		{ "EStateTreeStateType::Group", (int64)EStateTreeStateType::Group },
		{ "EStateTreeStateType::Linked", (int64)EStateTreeStateType::Linked },
		{ "EStateTreeStateType::LinkedAsset", (int64)EStateTreeStateType::LinkedAsset },
		{ "EStateTreeStateType::Subtree", (int64)EStateTreeStateType::Subtree },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeStateType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	"EStateTreeStateType",
	"EStateTreeStateType",
	Z_Construct_UEnum_StateTreeModule_EStateTreeStateType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeStateType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeStateType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeStateType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeStateType()
{
	if (!Z_Registration_Info_UEnum_EStateTreeStateType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeStateType.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeStateType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStateTreeStateType.InnerSingleton;
}
// End Enum EStateTreeStateType

// Begin Enum EStateTreeStateSelectionBehavior
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeStateSelectionBehavior;
static UEnum* EStateTreeStateSelectionBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStateTreeStateSelectionBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStateTreeStateSelectionBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeStateSelectionBehavior"));
	}
	return Z_Registration_Info_UEnum_EStateTreeStateSelectionBehavior.OuterSingleton;
}
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeStateSelectionBehavior>()
{
	return EStateTreeStateSelectionBehavior_StaticEnum();
}
struct Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "None.Comment", "/** The State cannot be directly selected. */" },
		{ "None.Name", "EStateTreeStateSelectionBehavior::None" },
		{ "None.ToolTip", "The State cannot be directly selected." },
		{ "TryEnterState.Comment", "/** When state is considered for selection, it is selected even if it has child states. */" },
		{ "TryEnterState.DisplayName", "Try Enter" },
		{ "TryEnterState.Name", "EStateTreeStateSelectionBehavior::TryEnterState" },
		{ "TryEnterState.ToolTip", "When state is considered for selection, it is selected even if it has child states." },
		{ "TryFollowTransitions.Comment", "/** When state is considered for selection, try to trigger the transitions instead. */" },
		{ "TryFollowTransitions.DisplayName", "Try Follow Transitions" },
		{ "TryFollowTransitions.Name", "EStateTreeStateSelectionBehavior::TryFollowTransitions" },
		{ "TryFollowTransitions.ToolTip", "When state is considered for selection, try to trigger the transitions instead." },
		{ "TrySelectChildrenAtRandom.Comment", "/** When state is considered for selection, shuffle the order of child states and try to select the first one. If no child states are present, behaves like SelectState. */" },
		{ "TrySelectChildrenAtRandom.DisplayName", "Try Select Children At Random" },
		{ "TrySelectChildrenAtRandom.Name", "EStateTreeStateSelectionBehavior::TrySelectChildrenAtRandom" },
		{ "TrySelectChildrenAtRandom.ToolTip", "When state is considered for selection, shuffle the order of child states and try to select the first one. If no child states are present, behaves like SelectState." },
		{ "TrySelectChildrenAtRandomWeightedByUtility.Comment", "/** When state is considered for selection, randomly pick one of its child states. The probability of selecting each child state is its normalized utility score */" },
		{ "TrySelectChildrenAtRandomWeightedByUtility.DisplayName", "Try Select Children At Random Weighted By Utility" },
		{ "TrySelectChildrenAtRandomWeightedByUtility.Name", "EStateTreeStateSelectionBehavior::TrySelectChildrenAtRandomWeightedByUtility" },
		{ "TrySelectChildrenAtRandomWeightedByUtility.ToolTip", "When state is considered for selection, randomly pick one of its child states. The probability of selecting each child state is its normalized utility score" },
		{ "TrySelectChildrenAtUniformRandom.Comment", "// Olds names that needs to be kept forever to ensure asset serialization to work correctly when UENUM() switched from serializing int to names.\n" },
		{ "TrySelectChildrenAtUniformRandom.Hidden", "" },
		{ "TrySelectChildrenAtUniformRandom.Name", "EStateTreeStateSelectionBehavior::TrySelectChildrenAtUniformRandom" },
		{ "TrySelectChildrenAtUniformRandom.ToolTip", "Olds names that needs to be kept forever to ensure asset serialization to work correctly when UENUM() switched from serializing int to names." },
		{ "TrySelectChildrenBasedOnRelativeUtility.Hidden", "" },
		{ "TrySelectChildrenBasedOnRelativeUtility.Name", "EStateTreeStateSelectionBehavior::TrySelectChildrenBasedOnRelativeUtility" },
		{ "TrySelectChildrenInOrder.Comment", "/** When state is considered for selection, try to select the first child state (in order they appear in the child list). If no child states are present, behaves like SelectState. */" },
		{ "TrySelectChildrenInOrder.DisplayName", "Try Select Children In Order" },
		{ "TrySelectChildrenInOrder.Name", "EStateTreeStateSelectionBehavior::TrySelectChildrenInOrder" },
		{ "TrySelectChildrenInOrder.ToolTip", "When state is considered for selection, try to select the first child state (in order they appear in the child list). If no child states are present, behaves like SelectState." },
		{ "TrySelectChildrenWithHighestUtility.Comment", "/** When state is considered for selection, try to select the child state with highest utility score. If there is a tie, it will try to select in order. */" },
		{ "TrySelectChildrenWithHighestUtility.DisplayName", "Try Select Children With Highest Utility" },
		{ "TrySelectChildrenWithHighestUtility.Name", "EStateTreeStateSelectionBehavior::TrySelectChildrenWithHighestUtility" },
		{ "TrySelectChildrenWithHighestUtility.ToolTip", "When state is considered for selection, try to select the child state with highest utility score. If there is a tie, it will try to select in order." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStateTreeStateSelectionBehavior::None", (int64)EStateTreeStateSelectionBehavior::None },
		{ "EStateTreeStateSelectionBehavior::TryEnterState", (int64)EStateTreeStateSelectionBehavior::TryEnterState },
		{ "EStateTreeStateSelectionBehavior::TrySelectChildrenInOrder", (int64)EStateTreeStateSelectionBehavior::TrySelectChildrenInOrder },
		{ "EStateTreeStateSelectionBehavior::TrySelectChildrenAtRandom", (int64)EStateTreeStateSelectionBehavior::TrySelectChildrenAtRandom },
		{ "EStateTreeStateSelectionBehavior::TrySelectChildrenWithHighestUtility", (int64)EStateTreeStateSelectionBehavior::TrySelectChildrenWithHighestUtility },
		{ "EStateTreeStateSelectionBehavior::TrySelectChildrenAtRandomWeightedByUtility", (int64)EStateTreeStateSelectionBehavior::TrySelectChildrenAtRandomWeightedByUtility },
		{ "EStateTreeStateSelectionBehavior::TryFollowTransitions", (int64)EStateTreeStateSelectionBehavior::TryFollowTransitions },
		{ "EStateTreeStateSelectionBehavior::TrySelectChildrenAtUniformRandom", (int64)EStateTreeStateSelectionBehavior::TrySelectChildrenAtUniformRandom },
		{ "EStateTreeStateSelectionBehavior::TrySelectChildrenBasedOnRelativeUtility", (int64)EStateTreeStateSelectionBehavior::TrySelectChildrenBasedOnRelativeUtility },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	"EStateTreeStateSelectionBehavior",
	"EStateTreeStateSelectionBehavior",
	Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior()
{
	if (!Z_Registration_Info_UEnum_EStateTreeStateSelectionBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeStateSelectionBehavior.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStateTreeStateSelectionBehavior.InnerSingleton;
}
// End Enum EStateTreeStateSelectionBehavior

// Begin Enum EStateTreeTransitionTrigger
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeTransitionTrigger;
static UEnum* EStateTreeTransitionTrigger_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStateTreeTransitionTrigger.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStateTreeTransitionTrigger.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeTransitionTrigger"));
	}
	return Z_Registration_Info_UEnum_EStateTreeTransitionTrigger.OuterSingleton;
}
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeTransitionTrigger>()
{
	return EStateTreeTransitionTrigger_StaticEnum();
}
struct Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Transitions trigger. */" },
		{ "MAX.Name", "EStateTreeTransitionTrigger::MAX" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EStateTreeTransitionTrigger::None" },
		{ "OnEvent.Comment", "/** Try trigger transition on specific State Tree event. */" },
		{ "OnEvent.Name", "EStateTreeTransitionTrigger::OnEvent" },
		{ "OnEvent.ToolTip", "Try trigger transition on specific State Tree event." },
		{ "OnStateCompleted.Comment", "/** Try trigger transition when a state succeeded or failed. */" },
		{ "OnStateCompleted.Name", "EStateTreeTransitionTrigger::OnStateCompleted" },
		{ "OnStateCompleted.ToolTip", "Try trigger transition when a state succeeded or failed." },
		{ "OnStateFailed.Comment", "/** Try trigger transition when a state failed. */" },
		{ "OnStateFailed.Name", "EStateTreeTransitionTrigger::OnStateFailed" },
		{ "OnStateFailed.ToolTip", "Try trigger transition when a state failed." },
		{ "OnStateSucceeded.Comment", "/** Try trigger transition when a state succeeded. */" },
		{ "OnStateSucceeded.Name", "EStateTreeTransitionTrigger::OnStateSucceeded" },
		{ "OnStateSucceeded.ToolTip", "Try trigger transition when a state succeeded." },
		{ "OnTick.Comment", "/** Try trigger transition each State Tree tick. */" },
		{ "OnTick.Name", "EStateTreeTransitionTrigger::OnTick" },
		{ "OnTick.ToolTip", "Try trigger transition each State Tree tick." },
		{ "ToolTip", "Transitions trigger." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStateTreeTransitionTrigger::None", (int64)EStateTreeTransitionTrigger::None },
		{ "EStateTreeTransitionTrigger::OnStateCompleted", (int64)EStateTreeTransitionTrigger::OnStateCompleted },
		{ "EStateTreeTransitionTrigger::OnStateSucceeded", (int64)EStateTreeTransitionTrigger::OnStateSucceeded },
		{ "EStateTreeTransitionTrigger::OnStateFailed", (int64)EStateTreeTransitionTrigger::OnStateFailed },
		{ "EStateTreeTransitionTrigger::OnTick", (int64)EStateTreeTransitionTrigger::OnTick },
		{ "EStateTreeTransitionTrigger::OnEvent", (int64)EStateTreeTransitionTrigger::OnEvent },
		{ "EStateTreeTransitionTrigger::MAX", (int64)EStateTreeTransitionTrigger::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	"EStateTreeTransitionTrigger",
	"EStateTreeTransitionTrigger",
	Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger()
{
	if (!Z_Registration_Info_UEnum_EStateTreeTransitionTrigger.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeTransitionTrigger.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStateTreeTransitionTrigger.InnerSingleton;
}
// End Enum EStateTreeTransitionTrigger

// Begin Enum EStateTreeTransitionPriority
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeTransitionPriority;
static UEnum* EStateTreeTransitionPriority_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStateTreeTransitionPriority.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStateTreeTransitionPriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeTransitionPriority"));
	}
	return Z_Registration_Info_UEnum_EStateTreeTransitionPriority.OuterSingleton;
}
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeTransitionPriority>()
{
	return EStateTreeTransitionPriority_StaticEnum();
}
struct Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Transition priority. When multiple transitions trigger at the same time, the first transition of highest priority is selected. */" },
		{ "Critical.Comment", "/** Critical priority. */" },
		{ "Critical.Name", "EStateTreeTransitionPriority::Critical" },
		{ "Critical.ToolTip", "Critical priority." },
		{ "High.Comment", "/** High priority. */" },
		{ "High.Name", "EStateTreeTransitionPriority::High" },
		{ "High.ToolTip", "High priority." },
		{ "Low.Comment", "/** Low priority. */" },
		{ "Low.Name", "EStateTreeTransitionPriority::Low" },
		{ "Low.ToolTip", "Low priority." },
		{ "Medium.Comment", "/** Medium priority. */" },
		{ "Medium.Name", "EStateTreeTransitionPriority::Medium" },
		{ "Medium.ToolTip", "Medium priority." },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EStateTreeTransitionPriority::None" },
		{ "Normal.Comment", "/** Normal priority. */" },
		{ "Normal.Name", "EStateTreeTransitionPriority::Normal" },
		{ "Normal.ToolTip", "Normal priority." },
		{ "ToolTip", "Transition priority. When multiple transitions trigger at the same time, the first transition of highest priority is selected." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStateTreeTransitionPriority::None", (int64)EStateTreeTransitionPriority::None },
		{ "EStateTreeTransitionPriority::Low", (int64)EStateTreeTransitionPriority::Low },
		{ "EStateTreeTransitionPriority::Normal", (int64)EStateTreeTransitionPriority::Normal },
		{ "EStateTreeTransitionPriority::Medium", (int64)EStateTreeTransitionPriority::Medium },
		{ "EStateTreeTransitionPriority::High", (int64)EStateTreeTransitionPriority::High },
		{ "EStateTreeTransitionPriority::Critical", (int64)EStateTreeTransitionPriority::Critical },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	"EStateTreeTransitionPriority",
	"EStateTreeTransitionPriority",
	Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority()
{
	if (!Z_Registration_Info_UEnum_EStateTreeTransitionPriority.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeTransitionPriority.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStateTreeTransitionPriority.InnerSingleton;
}
// End Enum EStateTreeTransitionPriority

// Begin ScriptStruct FStateTreeStateHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeStateHandle;
class UScriptStruct* FStateTreeStateHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeStateHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeStateHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeStateHandle, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeStateHandle"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeStateHandle.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeStateHandle>()
{
	return FStateTreeStateHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Handle to a StateTree state */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Handle to a StateTree state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeStateHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeStateHandle, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeStateHandle",
	Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::PropPointers),
	sizeof(FStateTreeStateHandle),
	alignof(FStateTreeStateHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStateHandle()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeStateHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeStateHandle.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeStateHandle.InnerSingleton;
}
// End ScriptStruct FStateTreeStateHandle

// Begin Enum EStateTreeDataSourceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeDataSourceType;
static UEnum* EStateTreeDataSourceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStateTreeDataSourceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStateTreeDataSourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeDataSourceType, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeDataSourceType"));
	}
	return Z_Registration_Info_UEnum_EStateTreeDataSourceType.OuterSingleton;
}
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeDataSourceType>()
{
	return EStateTreeDataSourceType_StaticEnum();
}
struct Z_Construct_UEnum_StateTreeModule_EStateTreeDataSourceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ActiveInstanceData.Comment", "/** Active State Tasks */" },
		{ "ActiveInstanceData.Name", "EStateTreeDataSourceType::ActiveInstanceData" },
		{ "ActiveInstanceData.ToolTip", "Active State Tasks" },
		{ "ActiveInstanceDataObject.Comment", "/** Active State Tasks */" },
		{ "ActiveInstanceDataObject.Name", "EStateTreeDataSourceType::ActiveInstanceDataObject" },
		{ "ActiveInstanceDataObject.ToolTip", "Active State Tasks" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Data type the FStateTreeDataHandle is pointing at. */" },
		{ "ContextData.Comment", "/** Context Data, Tree Parameters */" },
		{ "ContextData.Name", "EStateTreeDataSourceType::ContextData" },
		{ "ContextData.ToolTip", "Context Data, Tree Parameters" },
		{ "ExternalData.Comment", "/** External Data required by the nodes. */" },
		{ "ExternalData.Name", "EStateTreeDataSourceType::ExternalData" },
		{ "ExternalData.ToolTip", "External Data required by the nodes." },
		{ "GlobalInstanceData.Comment", "/** Global Tasks, Evaluators */" },
		{ "GlobalInstanceData.Name", "EStateTreeDataSourceType::GlobalInstanceData" },
		{ "GlobalInstanceData.ToolTip", "Global Tasks, Evaluators" },
		{ "GlobalInstanceDataObject.Comment", "/** Global Tasks, Evaluators*/" },
		{ "GlobalInstanceDataObject.Name", "EStateTreeDataSourceType::GlobalInstanceDataObject" },
		{ "GlobalInstanceDataObject.ToolTip", "Global Tasks, Evaluators" },
		{ "GlobalParameterData.Comment", "/** Global parameters */" },
		{ "GlobalParameterData.Name", "EStateTreeDataSourceType::GlobalParameterData" },
		{ "GlobalParameterData.ToolTip", "Global parameters" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EStateTreeDataSourceType::None" },
		{ "SharedInstanceData.Comment", "/** Conditions and Considerations */" },
		{ "SharedInstanceData.Name", "EStateTreeDataSourceType::SharedInstanceData" },
		{ "SharedInstanceData.ToolTip", "Conditions and Considerations" },
		{ "SharedInstanceDataObject.Comment", "/** Conditions and Considerations */" },
		{ "SharedInstanceDataObject.Name", "EStateTreeDataSourceType::SharedInstanceDataObject" },
		{ "SharedInstanceDataObject.ToolTip", "Conditions and Considerations" },
		{ "StateEvent.Comment", "/** Event used in state selection. */" },
		{ "StateEvent.Name", "EStateTreeDataSourceType::StateEvent" },
		{ "StateEvent.ToolTip", "Event used in state selection." },
		{ "StateParameterData.Comment", "/** Parameters for regular and linked states */" },
		{ "StateParameterData.Name", "EStateTreeDataSourceType::StateParameterData" },
		{ "StateParameterData.ToolTip", "Parameters for regular and linked states" },
		{ "SubtreeParameterData.Comment", "/** Parameters for subtree (may resolve to a linked state's parameters or default params) */" },
		{ "SubtreeParameterData.Name", "EStateTreeDataSourceType::SubtreeParameterData" },
		{ "SubtreeParameterData.ToolTip", "Parameters for subtree (may resolve to a linked state's parameters or default params)" },
		{ "ToolTip", "Data type the FStateTreeDataHandle is pointing at." },
		{ "TransitionEvent.Comment", "/** Event used in transition. */" },
		{ "TransitionEvent.Name", "EStateTreeDataSourceType::TransitionEvent" },
		{ "TransitionEvent.ToolTip", "Event used in transition." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStateTreeDataSourceType::None", (int64)EStateTreeDataSourceType::None },
		{ "EStateTreeDataSourceType::GlobalInstanceData", (int64)EStateTreeDataSourceType::GlobalInstanceData },
		{ "EStateTreeDataSourceType::GlobalInstanceDataObject", (int64)EStateTreeDataSourceType::GlobalInstanceDataObject },
		{ "EStateTreeDataSourceType::ActiveInstanceData", (int64)EStateTreeDataSourceType::ActiveInstanceData },
		{ "EStateTreeDataSourceType::ActiveInstanceDataObject", (int64)EStateTreeDataSourceType::ActiveInstanceDataObject },
		{ "EStateTreeDataSourceType::SharedInstanceData", (int64)EStateTreeDataSourceType::SharedInstanceData },
		{ "EStateTreeDataSourceType::SharedInstanceDataObject", (int64)EStateTreeDataSourceType::SharedInstanceDataObject },
		{ "EStateTreeDataSourceType::ContextData", (int64)EStateTreeDataSourceType::ContextData },
		{ "EStateTreeDataSourceType::ExternalData", (int64)EStateTreeDataSourceType::ExternalData },
		{ "EStateTreeDataSourceType::GlobalParameterData", (int64)EStateTreeDataSourceType::GlobalParameterData },
		{ "EStateTreeDataSourceType::SubtreeParameterData", (int64)EStateTreeDataSourceType::SubtreeParameterData },
		{ "EStateTreeDataSourceType::StateParameterData", (int64)EStateTreeDataSourceType::StateParameterData },
		{ "EStateTreeDataSourceType::TransitionEvent", (int64)EStateTreeDataSourceType::TransitionEvent },
		{ "EStateTreeDataSourceType::StateEvent", (int64)EStateTreeDataSourceType::StateEvent },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeDataSourceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	"EStateTreeDataSourceType",
	"EStateTreeDataSourceType",
	Z_Construct_UEnum_StateTreeModule_EStateTreeDataSourceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeDataSourceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeDataSourceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeDataSourceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeDataSourceType()
{
	if (!Z_Registration_Info_UEnum_EStateTreeDataSourceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeDataSourceType.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeDataSourceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStateTreeDataSourceType.InnerSingleton;
}
// End Enum EStateTreeDataSourceType

// Begin ScriptStruct FStateTreeDataHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeDataHandle;
class UScriptStruct* FStateTreeDataHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeDataHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeDataHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeDataHandle, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeDataHandle"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeDataHandle.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeDataHandle>()
{
	return FStateTreeDataHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeDataHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Handle to a StateTree data */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Handle to a StateTree data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeDataHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeDataHandle_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeDataHandle_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeDataHandle, Source), Z_Construct_UEnum_StateTreeModule_EStateTreeDataSourceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 451103781
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FStateTreeDataHandle_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeDataHandle, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeDataHandle_Statics::NewProp_StateHandle = { "StateHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeDataHandle, StateHandle), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateHandle_MetaData), NewProp_StateHandle_MetaData) }; // 3726322759
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeDataHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeDataHandle_Statics::NewProp_Source_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeDataHandle_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeDataHandle_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeDataHandle_Statics::NewProp_StateHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeDataHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeDataHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeDataHandle",
	Z_Construct_UScriptStruct_FStateTreeDataHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeDataHandle_Statics::PropPointers),
	sizeof(FStateTreeDataHandle),
	alignof(FStateTreeDataHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeDataHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeDataHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeDataHandle()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeDataHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeDataHandle.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeDataHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeDataHandle.InnerSingleton;
}
// End ScriptStruct FStateTreeDataHandle

// Begin ScriptStruct FStateTreeRandomTimeDuration
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeRandomTimeDuration;
class UScriptStruct* FStateTreeRandomTimeDuration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeRandomTimeDuration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeRandomTimeDuration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeRandomTimeDuration"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeRandomTimeDuration.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeRandomTimeDuration>()
{
	return FStateTreeRandomTimeDuration::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Time duration with random variance. Stored compactly as two uint16s, which gives time range of about 650 seconds.\n * The variance is symmetric (+-) around the specified duration.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Time duration with random variance. Stored compactly as two uint16s, which gives time range of about 650 seconds.\nThe variance is symmetric (+-) around the specified duration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomVariance_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_Duration;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_RandomVariance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeRandomTimeDuration>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeRandomTimeDuration, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewProp_RandomVariance = { "RandomVariance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeRandomTimeDuration, RandomVariance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomVariance_MetaData), NewProp_RandomVariance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewProp_RandomVariance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeRandomTimeDuration",
	Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::PropPointers),
	sizeof(FStateTreeRandomTimeDuration),
	alignof(FStateTreeRandomTimeDuration),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeRandomTimeDuration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeRandomTimeDuration.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeRandomTimeDuration.InnerSingleton;
}
// End ScriptStruct FStateTreeRandomTimeDuration

// Begin Enum EStateTreeSelectionFallback
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeSelectionFallback;
static UEnum* EStateTreeSelectionFallback_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStateTreeSelectionFallback.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStateTreeSelectionFallback.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeSelectionFallback, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeSelectionFallback"));
	}
	return Z_Registration_Info_UEnum_EStateTreeSelectionFallback.OuterSingleton;
}
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeSelectionFallback>()
{
	return EStateTreeSelectionFallback_StaticEnum();
}
struct Z_Construct_UEnum_StateTreeModule_EStateTreeSelectionFallback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Fallback behavior indicating what to do after failing to select a state */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "NextSelectableSibling.Comment", "/** Find next selectable sibling, if any, and select it */" },
		{ "NextSelectableSibling.Name", "EStateTreeSelectionFallback::NextSelectableSibling" },
		{ "NextSelectableSibling.ToolTip", "Find next selectable sibling, if any, and select it" },
		{ "None.Comment", "/** No fallback */" },
		{ "None.Name", "EStateTreeSelectionFallback::None" },
		{ "None.ToolTip", "No fallback" },
		{ "ToolTip", "Fallback behavior indicating what to do after failing to select a state" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStateTreeSelectionFallback::None", (int64)EStateTreeSelectionFallback::None },
		{ "EStateTreeSelectionFallback::NextSelectableSibling", (int64)EStateTreeSelectionFallback::NextSelectableSibling },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeSelectionFallback_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	"EStateTreeSelectionFallback",
	"EStateTreeSelectionFallback",
	Z_Construct_UEnum_StateTreeModule_EStateTreeSelectionFallback_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeSelectionFallback_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeSelectionFallback_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeSelectionFallback_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeSelectionFallback()
{
	if (!Z_Registration_Info_UEnum_EStateTreeSelectionFallback.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeSelectionFallback.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeSelectionFallback_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStateTreeSelectionFallback.InnerSingleton;
}
// End Enum EStateTreeSelectionFallback

// Begin ScriptStruct FCompactEventDesc
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompactEventDesc;
class UScriptStruct* FCompactEventDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompactEventDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompactEventDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompactEventDesc, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("CompactEventDesc"));
	}
	return Z_Registration_Info_UScriptStruct_CompactEventDesc.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FCompactEventDesc>()
{
	return FCompactEventDesc::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCompactEventDesc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *  Runtime representation of an event description.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Runtime representation of an event description." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PayloadStruct_MetaData[] = {
		{ "Comment", "/** Event Payload Struct. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Event Payload Struct." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Comment", "/** Event Tag. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Event Tag." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PayloadStruct;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompactEventDesc>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCompactEventDesc_Statics::NewProp_PayloadStruct = { "PayloadStruct", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactEventDesc, PayloadStruct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PayloadStruct_MetaData), NewProp_PayloadStruct_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactEventDesc_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactEventDesc, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompactEventDesc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactEventDesc_Statics::NewProp_PayloadStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactEventDesc_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactEventDesc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompactEventDesc_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"CompactEventDesc",
	Z_Construct_UScriptStruct_FCompactEventDesc_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactEventDesc_Statics::PropPointers),
	sizeof(FCompactEventDesc),
	alignof(FCompactEventDesc),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactEventDesc_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCompactEventDesc_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCompactEventDesc()
{
	if (!Z_Registration_Info_UScriptStruct_CompactEventDesc.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompactEventDesc.InnerSingleton, Z_Construct_UScriptStruct_FCompactEventDesc_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CompactEventDesc.InnerSingleton;
}
// End ScriptStruct FCompactEventDesc

// Begin ScriptStruct FCompactStateTransition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompactStateTransition;
class UScriptStruct* FCompactStateTransition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompactStateTransition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompactStateTransition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompactStateTransition, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("CompactStateTransition"));
	}
	return Z_Registration_Info_UScriptStruct_CompactStateTransition.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FCompactStateTransition>()
{
	return FCompactStateTransition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCompactStateTransition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *  Runtime representation of a StateTree transition.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Runtime representation of a StateTree transition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredEvent_MetaData[] = {
		{ "Comment", "/** Event Description */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Event Description" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConditionsBegin_MetaData[] = {
		{ "Comment", "/** Index to first condition to test */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Index to first condition to test" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Comment", "/** Target state of the transition */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Target state of the transition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[] = {
		{ "Comment", "/** Transition delay. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Transition delay." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[] = {
		{ "Comment", "/* Type of the transition trigger. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Type of the transition trigger." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Comment", "/* Priority of the transition. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Priority of the transition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fallback_MetaData[] = {
		{ "Comment", "/** Fallback of the transition if it fails to select the target state */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Fallback of the transition if it fails to select the target state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConditionsNum_MetaData[] = {
		{ "Comment", "/** Number of conditions to test. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Number of conditions to test." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTransitionEnabled_MetaData[] = {
		{ "Comment", "/** Indicates if the transition is enabled and should be considered. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Indicates if the transition is enabled and should be considered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConsumeEventOnSelect_MetaData[] = {
		{ "Comment", "/** If set to true, the required event is consumed (later state selection cannot react to it) if state selection can be made. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "If set to true, the required event is consumed (later state selection cannot react to it) if state selection can be made." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredEvent;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_ConditionsBegin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_State;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Delay;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Trigger_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Trigger;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Fallback_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Fallback;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConditionsNum;
	static void NewProp_bTransitionEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransitionEnabled;
	static void NewProp_bConsumeEventOnSelect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsumeEventOnSelect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompactStateTransition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_RequiredEvent = { "RequiredEvent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTransition, RequiredEvent), Z_Construct_UScriptStruct_FCompactEventDesc, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredEvent_MetaData), NewProp_RequiredEvent_MetaData) }; // 167574243
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_ConditionsBegin = { "ConditionsBegin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTransition, ConditionsBegin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConditionsBegin_MetaData), NewProp_ConditionsBegin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTransition, State), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 3726322759
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTransition, Delay), Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delay_MetaData), NewProp_Delay_MetaData) }; // 937730432
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Trigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTransition, Trigger), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Trigger_MetaData), NewProp_Trigger_MetaData) }; // 1812548344
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTransition, Priority), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) }; // 2934257566
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Fallback_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Fallback = { "Fallback", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTransition, Fallback), Z_Construct_UEnum_StateTreeModule_EStateTreeSelectionFallback, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fallback_MetaData), NewProp_Fallback_MetaData) }; // 342781465
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_ConditionsNum = { "ConditionsNum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTransition, ConditionsNum), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConditionsNum_MetaData), NewProp_ConditionsNum_MetaData) };
void Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_bTransitionEnabled_SetBit(void* Obj)
{
	((FCompactStateTransition*)Obj)->bTransitionEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_bTransitionEnabled = { "bTransitionEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FCompactStateTransition), &Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_bTransitionEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTransitionEnabled_MetaData), NewProp_bTransitionEnabled_MetaData) };
void Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_bConsumeEventOnSelect_SetBit(void* Obj)
{
	((FCompactStateTransition*)Obj)->bConsumeEventOnSelect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_bConsumeEventOnSelect = { "bConsumeEventOnSelect", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FCompactStateTransition), &Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_bConsumeEventOnSelect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConsumeEventOnSelect_MetaData), NewProp_bConsumeEventOnSelect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompactStateTransition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_RequiredEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_ConditionsBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Delay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Trigger_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Trigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Priority_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Fallback_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Fallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_ConditionsNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_bTransitionEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_bConsumeEventOnSelect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"CompactStateTransition",
	Z_Construct_UScriptStruct_FCompactStateTransition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::PropPointers),
	sizeof(FCompactStateTransition),
	alignof(FCompactStateTransition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCompactStateTransition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCompactStateTransition()
{
	if (!Z_Registration_Info_UScriptStruct_CompactStateTransition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompactStateTransition.InnerSingleton, Z_Construct_UScriptStruct_FCompactStateTransition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CompactStateTransition.InnerSingleton;
}
// End ScriptStruct FCompactStateTransition

// Begin ScriptStruct FCompactStateTreeState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompactStateTreeState;
class UScriptStruct* FCompactStateTreeState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompactStateTreeState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompactStateTreeState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompactStateTreeState, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("CompactStateTreeState"));
	}
	return Z_Registration_Info_UScriptStruct_CompactStateTreeState.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FCompactStateTreeState>()
{
	return FCompactStateTreeState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCompactStateTreeState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *  Runtime representation of a StateTree state.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Runtime representation of a StateTree state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredEventToEnter_MetaData[] = {
		{ "Comment", "/** Description of an event required to enter the state. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Description of an event required to enter the state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name of the State */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Name of the State" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Comment", "/** GameplayTag describing the State */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "GameplayTag describing the State" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedState_MetaData[] = {
		{ "Comment", "/** Linked state handle if the state type is linked state. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Linked state handle if the state type is linked state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "Comment", "/** Parent state handle, invalid if root state. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Parent state handle, invalid if root state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildrenBegin_MetaData[] = {
		{ "Comment", "/** Index to first child state */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Index to first child state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildrenEnd_MetaData[] = {
		{ "Comment", "/** Index one past the last child state. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Index one past the last child state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterConditionsBegin_MetaData[] = {
		{ "Comment", "/** Index to first state enter condition */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Index to first state enter condition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UtilityConsiderationsBegin_MetaData[] = {
		{ "Comment", "/** Index to first state utility consideration */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Index to first state utility consideration" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionsBegin_MetaData[] = {
		{ "Comment", "/** Index to first transition */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Index to first transition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TasksBegin_MetaData[] = {
		{ "Comment", "/** Index to first task */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Index to first task" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterTemplateIndex_MetaData[] = {
		{ "Comment", "/** Index to state instance data. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Index to state instance data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterDataHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterBindingsBatch_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventDataIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterConditionsNum_MetaData[] = {
		{ "Comment", "/** Number of enter conditions */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Number of enter conditions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UtilityConsiderationsNum_MetaData[] = {
		{ "Comment", "/** Number of utility considerations */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Number of utility considerations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionsNum_MetaData[] = {
		{ "Comment", "/** Number of transitions */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Number of transitions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TasksNum_MetaData[] = {
		{ "Comment", "/** Number of tasks */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Number of tasks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceDataNum_MetaData[] = {
		{ "Comment", "/** Number of instance data */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Number of instance data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[] = {
		{ "Comment", "/** Distance to root state. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Distance to root state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Comment", "/** Type of the state */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Type of the state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionBehavior_MetaData[] = {
		{ "Comment", "/** What to do when the state is considered for selection. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "What to do when the state is considered for selection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasTransitionTasks_MetaData[] = {
		{ "Comment", "/** True if the state contains tasks that should be called during transition handling. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "True if the state contains tasks that should be called during transition handling." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasStateChangeConditions_MetaData[] = {
		{ "Comment", "/** True if the state contains conditions which require call to enter/completed/exit state. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "True if the state contains conditions which require call to enter/completed/exit state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckPrerequisitesWhenActivatingChildDirectly_MetaData[] = {
		{ "Comment", "/** Should state's required event and enter conditions be evaluated when transition leads directly to it's child. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Should state's required event and enter conditions be evaluated when transition leads directly to it's child." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Comment", "/** Weight used to scale the normalized final utility score for this state */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Weight used to scale the normalized final utility score for this state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Comment", "/** True if the state is Enabled (i.e. not explicitly marked as disabled). */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "True if the state is Enabled (i.e. not explicitly marked as disabled)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConsumeEventOnSelect_MetaData[] = {
		{ "Comment", "/** If set to true, the required event is consumed (later state selection cannot react to it) if state selection can be made. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "If set to true, the required event is consumed (later state selection cannot react to it) if state selection can be made." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredEventToEnter;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LinkedAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinkedState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_ChildrenBegin;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_ChildrenEnd;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_EnterConditionsBegin;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_UtilityConsiderationsBegin;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_TransitionsBegin;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_TasksBegin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterTemplateIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterDataHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterBindingsBatch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventDataIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnterConditionsNum;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UtilityConsiderationsNum;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransitionsNum;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TasksNum;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InstanceDataNum;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Depth;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionBehavior;
	static void NewProp_bHasTransitionTasks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasTransitionTasks;
	static void NewProp_bHasStateChangeConditions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasStateChangeConditions;
	static void NewProp_bCheckPrerequisitesWhenActivatingChildDirectly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckPrerequisitesWhenActivatingChildDirectly;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static void NewProp_bConsumeEventOnSelect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsumeEventOnSelect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompactStateTreeState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_RequiredEventToEnter = { "RequiredEventToEnter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, RequiredEventToEnter), Z_Construct_UScriptStruct_FCompactEventDesc, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredEventToEnter_MetaData), NewProp_RequiredEventToEnter_MetaData) }; // 167574243
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_LinkedAsset = { "LinkedAsset", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, LinkedAsset), Z_Construct_UClass_UStateTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedAsset_MetaData), NewProp_LinkedAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_LinkedState = { "LinkedState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, LinkedState), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedState_MetaData), NewProp_LinkedState_MetaData) }; // 3726322759
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, Parent), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) }; // 3726322759
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ChildrenBegin = { "ChildrenBegin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, ChildrenBegin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildrenBegin_MetaData), NewProp_ChildrenBegin_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ChildrenEnd = { "ChildrenEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, ChildrenEnd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildrenEnd_MetaData), NewProp_ChildrenEnd_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_EnterConditionsBegin = { "EnterConditionsBegin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, EnterConditionsBegin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterConditionsBegin_MetaData), NewProp_EnterConditionsBegin_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_UtilityConsiderationsBegin = { "UtilityConsiderationsBegin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, UtilityConsiderationsBegin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UtilityConsiderationsBegin_MetaData), NewProp_UtilityConsiderationsBegin_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TransitionsBegin = { "TransitionsBegin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, TransitionsBegin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionsBegin_MetaData), NewProp_TransitionsBegin_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TasksBegin = { "TasksBegin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, TasksBegin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TasksBegin_MetaData), NewProp_TasksBegin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ParameterTemplateIndex = { "ParameterTemplateIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, ParameterTemplateIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterTemplateIndex_MetaData), NewProp_ParameterTemplateIndex_MetaData) }; // 2905844030
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ParameterDataHandle = { "ParameterDataHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, ParameterDataHandle), Z_Construct_UScriptStruct_FStateTreeDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterDataHandle_MetaData), NewProp_ParameterDataHandle_MetaData) }; // 3876109322
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ParameterBindingsBatch = { "ParameterBindingsBatch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, ParameterBindingsBatch), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterBindingsBatch_MetaData), NewProp_ParameterBindingsBatch_MetaData) }; // 2905844030
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_EventDataIndex = { "EventDataIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, EventDataIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventDataIndex_MetaData), NewProp_EventDataIndex_MetaData) }; // 2905844030
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_EnterConditionsNum = { "EnterConditionsNum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, EnterConditionsNum), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterConditionsNum_MetaData), NewProp_EnterConditionsNum_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_UtilityConsiderationsNum = { "UtilityConsiderationsNum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, UtilityConsiderationsNum), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UtilityConsiderationsNum_MetaData), NewProp_UtilityConsiderationsNum_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TransitionsNum = { "TransitionsNum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, TransitionsNum), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionsNum_MetaData), NewProp_TransitionsNum_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TasksNum = { "TasksNum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, TasksNum), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TasksNum_MetaData), NewProp_TasksNum_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_InstanceDataNum = { "InstanceDataNum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, InstanceDataNum), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceDataNum_MetaData), NewProp_InstanceDataNum_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, Depth), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Depth_MetaData), NewProp_Depth_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, Type), Z_Construct_UEnum_StateTreeModule_EStateTreeStateType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1574872396
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_SelectionBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_SelectionBehavior = { "SelectionBehavior", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, SelectionBehavior), Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionBehavior_MetaData), NewProp_SelectionBehavior_MetaData) }; // 2240951960
void Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bHasTransitionTasks_SetBit(void* Obj)
{
	((FCompactStateTreeState*)Obj)->bHasTransitionTasks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bHasTransitionTasks = { "bHasTransitionTasks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FCompactStateTreeState), &Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bHasTransitionTasks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasTransitionTasks_MetaData), NewProp_bHasTransitionTasks_MetaData) };
void Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bHasStateChangeConditions_SetBit(void* Obj)
{
	((FCompactStateTreeState*)Obj)->bHasStateChangeConditions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bHasStateChangeConditions = { "bHasStateChangeConditions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FCompactStateTreeState), &Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bHasStateChangeConditions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasStateChangeConditions_MetaData), NewProp_bHasStateChangeConditions_MetaData) };
void Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bCheckPrerequisitesWhenActivatingChildDirectly_SetBit(void* Obj)
{
	((FCompactStateTreeState*)Obj)->bCheckPrerequisitesWhenActivatingChildDirectly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bCheckPrerequisitesWhenActivatingChildDirectly = { "bCheckPrerequisitesWhenActivatingChildDirectly", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FCompactStateTreeState), &Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bCheckPrerequisitesWhenActivatingChildDirectly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckPrerequisitesWhenActivatingChildDirectly_MetaData), NewProp_bCheckPrerequisitesWhenActivatingChildDirectly_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
void Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FCompactStateTreeState*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FCompactStateTreeState), &Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
void Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bConsumeEventOnSelect_SetBit(void* Obj)
{
	((FCompactStateTreeState*)Obj)->bConsumeEventOnSelect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bConsumeEventOnSelect = { "bConsumeEventOnSelect", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FCompactStateTreeState), &Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bConsumeEventOnSelect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConsumeEventOnSelect_MetaData), NewProp_bConsumeEventOnSelect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_RequiredEventToEnter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_LinkedAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_LinkedState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ChildrenBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ChildrenEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_EnterConditionsBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_UtilityConsiderationsBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TransitionsBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TasksBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ParameterTemplateIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ParameterDataHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ParameterBindingsBatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_EventDataIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_EnterConditionsNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_UtilityConsiderationsNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TransitionsNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TasksNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_InstanceDataNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Depth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_SelectionBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_SelectionBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bHasTransitionTasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bHasStateChangeConditions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bCheckPrerequisitesWhenActivatingChildDirectly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bConsumeEventOnSelect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"CompactStateTreeState",
	Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::PropPointers),
	sizeof(FCompactStateTreeState),
	alignof(FCompactStateTreeState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCompactStateTreeState()
{
	if (!Z_Registration_Info_UScriptStruct_CompactStateTreeState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompactStateTreeState.InnerSingleton, Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CompactStateTreeState.InnerSingleton;
}
// End ScriptStruct FCompactStateTreeState

// Begin ScriptStruct FCompactStateTreeParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompactStateTreeParameters;
class UScriptStruct* FCompactStateTreeParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompactStateTreeParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompactStateTreeParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompactStateTreeParameters, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("CompactStateTreeParameters"));
	}
	return Z_Registration_Info_UScriptStruct_CompactStateTreeParameters.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FCompactStateTreeParameters>()
{
	return FCompactStateTreeParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompactStateTreeParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeParameters, Parameters), Z_Construct_UScriptStruct_FInstancedPropertyBag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 2222206664
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"CompactStateTreeParameters",
	Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::PropPointers),
	sizeof(FCompactStateTreeParameters),
	alignof(FCompactStateTreeParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCompactStateTreeParameters()
{
	if (!Z_Registration_Info_UScriptStruct_CompactStateTreeParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompactStateTreeParameters.InnerSingleton, Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CompactStateTreeParameters.InnerSingleton;
}
// End ScriptStruct FCompactStateTreeParameters

// Begin Enum EStateTreeExternalDataRequirement
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement;
static UEnum* EStateTreeExternalDataRequirement_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeExternalDataRequirement"));
	}
	return Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement.OuterSingleton;
}
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeExternalDataRequirement>()
{
	return EStateTreeExternalDataRequirement_StaticEnum();
}
struct Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "Optional.Comment", "// StateTree cannot be executed if the data is not present.\n" },
		{ "Optional.Name", "EStateTreeExternalDataRequirement::Optional" },
		{ "Optional.ToolTip", "StateTree cannot be executed if the data is not present." },
		{ "Required.Name", "EStateTreeExternalDataRequirement::Required" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStateTreeExternalDataRequirement::Required", (int64)EStateTreeExternalDataRequirement::Required },
		{ "EStateTreeExternalDataRequirement::Optional", (int64)EStateTreeExternalDataRequirement::Optional },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	"EStateTreeExternalDataRequirement",
	"EStateTreeExternalDataRequirement",
	Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement()
{
	if (!Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement.InnerSingleton;
}
// End Enum EStateTreeExternalDataRequirement

// Begin Enum EStateTreePropertyUsage
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreePropertyUsage;
static UEnum* EStateTreePropertyUsage_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStateTreePropertyUsage.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStateTreePropertyUsage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreePropertyUsage"));
	}
	return Z_Registration_Info_UEnum_EStateTreePropertyUsage.OuterSingleton;
}
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreePropertyUsage>()
{
	return EStateTreePropertyUsage_StaticEnum();
}
struct Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Context.Name", "EStateTreePropertyUsage::Context" },
		{ "Input.Name", "EStateTreePropertyUsage::Input" },
		{ "Invalid.Name", "EStateTreePropertyUsage::Invalid" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "Output.Name", "EStateTreePropertyUsage::Output" },
		{ "Parameter.Name", "EStateTreePropertyUsage::Parameter" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStateTreePropertyUsage::Invalid", (int64)EStateTreePropertyUsage::Invalid },
		{ "EStateTreePropertyUsage::Context", (int64)EStateTreePropertyUsage::Context },
		{ "EStateTreePropertyUsage::Input", (int64)EStateTreePropertyUsage::Input },
		{ "EStateTreePropertyUsage::Parameter", (int64)EStateTreePropertyUsage::Parameter },
		{ "EStateTreePropertyUsage::Output", (int64)EStateTreePropertyUsage::Output },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	"EStateTreePropertyUsage",
	"EStateTreePropertyUsage",
	Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage()
{
	if (!Z_Registration_Info_UEnum_EStateTreePropertyUsage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreePropertyUsage.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStateTreePropertyUsage.InnerSingleton;
}
// End Enum EStateTreePropertyUsage

// Begin ScriptStruct FStateTreeStateIdToHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeStateIdToHandle;
class UScriptStruct* FStateTreeStateIdToHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeStateIdToHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeStateIdToHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeStateIdToHandle, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeStateIdToHandle"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeStateIdToHandle.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeStateIdToHandle>()
{
	return FStateTreeStateIdToHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Pair of state guid and its associated state handle created at compilation.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Pair of state guid and its associated state handle created at compilation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeStateIdToHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeStateIdToHandle, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeStateIdToHandle, Handle), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 3726322759
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeStateIdToHandle",
	Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::PropPointers),
	sizeof(FStateTreeStateIdToHandle),
	alignof(FStateTreeStateIdToHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStateIdToHandle()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeStateIdToHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeStateIdToHandle.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeStateIdToHandle.InnerSingleton;
}
// End ScriptStruct FStateTreeStateIdToHandle

// Begin ScriptStruct FStateTreeNodeIdToIndex
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeNodeIdToIndex;
class UScriptStruct* FStateTreeNodeIdToIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeNodeIdToIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeNodeIdToIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeNodeIdToIndex"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeNodeIdToIndex.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeNodeIdToIndex>()
{
	return FStateTreeNodeIdToIndex::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Pair of node id and its associated node index created at compilation.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Pair of node id and its associated node index created at compilation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeNodeIdToIndex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeNodeIdToIndex, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeNodeIdToIndex, Index), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) }; // 2905844030
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeNodeIdToIndex",
	Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::PropPointers),
	sizeof(FStateTreeNodeIdToIndex),
	alignof(FStateTreeNodeIdToIndex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeNodeIdToIndex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeNodeIdToIndex.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeNodeIdToIndex.InnerSingleton;
}
// End ScriptStruct FStateTreeNodeIdToIndex

// Begin ScriptStruct FStateTreeTransitionIdToIndex
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeTransitionIdToIndex;
class UScriptStruct* FStateTreeTransitionIdToIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTransitionIdToIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeTransitionIdToIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeTransitionIdToIndex"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTransitionIdToIndex.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeTransitionIdToIndex>()
{
	return FStateTreeTransitionIdToIndex::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Pair of transition id and its associated compact transition index created at compilation.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Pair of transition id and its associated compact transition index created at compilation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeTransitionIdToIndex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionIdToIndex, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionIdToIndex, Index), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) }; // 2905844030
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeTransitionIdToIndex",
	Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::PropPointers),
	sizeof(FStateTreeTransitionIdToIndex),
	alignof(FStateTreeTransitionIdToIndex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTransitionIdToIndex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeTransitionIdToIndex.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTransitionIdToIndex.InnerSingleton;
}
// End ScriptStruct FStateTreeTransitionIdToIndex

// Begin ScriptStruct FStateTreeStructRef
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeStructRef;
class UScriptStruct* FStateTreeStructRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeStructRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeStructRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeStructRef, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeStructRef"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeStructRef.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeStructRef>()
{
	return FStateTreeStructRef::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeStructRef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * StateTree struct ref allows to get a reference/pointer to a specified type via property binding.\n * It is useful for referencing larger properties to avoid copies of the data, or to be able to write to a bounds property.\n *\n * The expected type of the reference should be set in \"BaseStruct\" meta tag.\n *\n * Example:\n *\n *\x09USTRUCT()\n *\x09struct FAwesomeTaskInstanceData\n *\x09{\n *\x09\x09GENERATED_BODY()\n *\n *\x09\x09UPROPERTY(VisibleAnywhere, Category = Input, meta = (BaseStruct = \"/Script/AwesomeModule.AwesomeData\"))\n *\x09\x09""FStateTreeStructRef Data;\n *\x09};\n *\n *\n *\x09if (const FAwesomeData* Awesome = InstanceData.Data.GetPtr<FAwesomeData>())\n *\x09{\n *\x09\x09...\n *\x09}\n */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "StateTree struct ref allows to get a reference/pointer to a specified type via property binding.\nIt is useful for referencing larger properties to avoid copies of the data, or to be able to write to a bounds property.\n\nThe expected type of the reference should be set in \"BaseStruct\" meta tag.\n\nExample:\n\n    USTRUCT()\n    struct FAwesomeTaskInstanceData\n    {\n            GENERATED_BODY()\n\n            UPROPERTY(VisibleAnywhere, Category = Input, meta = (BaseStruct = \"/Script/AwesomeModule.AwesomeData\"))\n            FStateTreeStructRef Data;\n    };\n\n\n    if (const FAwesomeData* Awesome = InstanceData.Data.GetPtr<FAwesomeData>())\n    {\n            ...\n    }" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeStructRef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeStructRef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeStructRef",
	nullptr,
	0,
	sizeof(FStateTreeStructRef),
	alignof(FStateTreeStructRef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStructRef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeStructRef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStructRef()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeStructRef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeStructRef.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeStructRef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeStructRef.InnerSingleton;
}
// End ScriptStruct FStateTreeStructRef

// Begin ScriptStruct FStateTreeStateLink
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeStateLink;
class UScriptStruct* FStateTreeStateLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeStateLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeStateLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeStateLink, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeStateLink"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeStateLink.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeStateLink>()
{
	return FStateTreeStateLink::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeStateLink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Link to another state in StateTree\n */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Link to another state in StateTree" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Link" },
		{ "Comment", "/** Name of the state at the time of linking, used for error reporting. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Name of the state at the time of linking, used for error reporting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "Link" },
		{ "Comment", "/** ID of the state linked to. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "ID of the state linked to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkType_MetaData[] = {
		{ "Category", "Link" },
		{ "Comment", "/** Type of the transition, used at edit time to describe e.g. next state (which is calculated at compile time). */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Type of the transition, used at edit time to describe e.g. next state (which is calculated at compile time)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateHandle_MetaData[] = {
		{ "Comment", "/** Handle of the linked state. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Handle of the linked state." },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LinkType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LinkType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeStateLink>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeStateLink, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeStateLink, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_LinkType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_LinkType = { "LinkType", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeStateLink, LinkType), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkType_MetaData), NewProp_LinkType_MetaData) }; // 2078075038
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeStateLink, Type_DEPRECATED), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2078075038
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_StateHandle = { "StateHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeStateLink, StateHandle), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateHandle_MetaData), NewProp_StateHandle_MetaData) }; // 3726322759
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_LinkType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_LinkType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Type,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_StateHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeStateLink",
	Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::PropPointers),
	sizeof(FStateTreeStateLink),
	alignof(FStateTreeStateLink),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStateLink()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeStateLink.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeStateLink.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeStateLink.InnerSingleton;
}
// End ScriptStruct FStateTreeStateLink

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStateTreeTransitionType_StaticEnum, TEXT("EStateTreeTransitionType"), &Z_Registration_Info_UEnum_EStateTreeTransitionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2078075038U) },
		{ EStateTreeExpressionOperand_StaticEnum, TEXT("EStateTreeExpressionOperand"), &Z_Registration_Info_UEnum_EStateTreeExpressionOperand, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2760319656U) },
		{ EStateTreeStateType_StaticEnum, TEXT("EStateTreeStateType"), &Z_Registration_Info_UEnum_EStateTreeStateType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1574872396U) },
		{ EStateTreeStateSelectionBehavior_StaticEnum, TEXT("EStateTreeStateSelectionBehavior"), &Z_Registration_Info_UEnum_EStateTreeStateSelectionBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2240951960U) },
		{ EStateTreeTransitionTrigger_StaticEnum, TEXT("EStateTreeTransitionTrigger"), &Z_Registration_Info_UEnum_EStateTreeTransitionTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1812548344U) },
		{ EStateTreeTransitionPriority_StaticEnum, TEXT("EStateTreeTransitionPriority"), &Z_Registration_Info_UEnum_EStateTreeTransitionPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2934257566U) },
		{ EStateTreeDataSourceType_StaticEnum, TEXT("EStateTreeDataSourceType"), &Z_Registration_Info_UEnum_EStateTreeDataSourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 451103781U) },
		{ EStateTreeSelectionFallback_StaticEnum, TEXT("EStateTreeSelectionFallback"), &Z_Registration_Info_UEnum_EStateTreeSelectionFallback, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 342781465U) },
		{ EStateTreeExternalDataRequirement_StaticEnum, TEXT("EStateTreeExternalDataRequirement"), &Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3138985269U) },
		{ EStateTreePropertyUsage_StaticEnum, TEXT("EStateTreePropertyUsage"), &Z_Registration_Info_UEnum_EStateTreePropertyUsage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 526546424U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreeStateHandle::StaticStruct, Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::NewStructOps, TEXT("StateTreeStateHandle"), &Z_Registration_Info_UScriptStruct_StateTreeStateHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeStateHandle), 3726322759U) },
		{ FStateTreeDataHandle::StaticStruct, Z_Construct_UScriptStruct_FStateTreeDataHandle_Statics::NewStructOps, TEXT("StateTreeDataHandle"), &Z_Registration_Info_UScriptStruct_StateTreeDataHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeDataHandle), 3876109322U) },
		{ FStateTreeRandomTimeDuration::StaticStruct, Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewStructOps, TEXT("StateTreeRandomTimeDuration"), &Z_Registration_Info_UScriptStruct_StateTreeRandomTimeDuration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeRandomTimeDuration), 937730432U) },
		{ FCompactEventDesc::StaticStruct, Z_Construct_UScriptStruct_FCompactEventDesc_Statics::NewStructOps, TEXT("CompactEventDesc"), &Z_Registration_Info_UScriptStruct_CompactEventDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompactEventDesc), 167574243U) },
		{ FCompactStateTransition::StaticStruct, Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewStructOps, TEXT("CompactStateTransition"), &Z_Registration_Info_UScriptStruct_CompactStateTransition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompactStateTransition), 3965864148U) },
		{ FCompactStateTreeState::StaticStruct, Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewStructOps, TEXT("CompactStateTreeState"), &Z_Registration_Info_UScriptStruct_CompactStateTreeState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompactStateTreeState), 3471686121U) },
		{ FCompactStateTreeParameters::StaticStruct, Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewStructOps, TEXT("CompactStateTreeParameters"), &Z_Registration_Info_UScriptStruct_CompactStateTreeParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompactStateTreeParameters), 3920909672U) },
		{ FStateTreeStateIdToHandle::StaticStruct, Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::NewStructOps, TEXT("StateTreeStateIdToHandle"), &Z_Registration_Info_UScriptStruct_StateTreeStateIdToHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeStateIdToHandle), 2279058267U) },
		{ FStateTreeNodeIdToIndex::StaticStruct, Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::NewStructOps, TEXT("StateTreeNodeIdToIndex"), &Z_Registration_Info_UScriptStruct_StateTreeNodeIdToIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeNodeIdToIndex), 3067998738U) },
		{ FStateTreeTransitionIdToIndex::StaticStruct, Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::NewStructOps, TEXT("StateTreeTransitionIdToIndex"), &Z_Registration_Info_UScriptStruct_StateTreeTransitionIdToIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeTransitionIdToIndex), 3708718522U) },
		{ FStateTreeStructRef::StaticStruct, Z_Construct_UScriptStruct_FStateTreeStructRef_Statics::NewStructOps, TEXT("StateTreeStructRef"), &Z_Registration_Info_UScriptStruct_StateTreeStructRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeStructRef), 4163267819U) },
		{ FStateTreeStateLink::StaticStruct, Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewStructOps, TEXT("StateTreeStateLink"), &Z_Registration_Info_UScriptStruct_StateTreeStateLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeStateLink), 1927682115U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_2007961769(TEXT("/Script/StateTreeModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
