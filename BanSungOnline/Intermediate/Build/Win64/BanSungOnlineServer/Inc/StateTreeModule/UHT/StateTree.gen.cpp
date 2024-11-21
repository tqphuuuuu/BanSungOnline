// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Public/StateTree.h"
#include "Runtime/CoreUObject/Public/StructUtils/InstancedStructContainer.h"
#include "Runtime/CoreUObject/Public/StructUtils/PropertyBag.h"
#include "Serialization/StructuredArchive.h"
#include "StateTreeModule/Public/StateTreeExecutionTypes.h"
#include "StateTreeModule/Public/StateTreeInstanceData.h"
#include "StateTreeModule/Public/StateTreePropertyBindings.h"
#include "StateTreeModule/Public/StateTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTree() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedPropertyBag();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStructContainer();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTree();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTree_NoRegister();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeSchema_NoRegister();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FCompactStateTransition();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FCompactStateTreeState();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeExternalDataDesc();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeInstanceData();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyBindings();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStateIdToHandle();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin Class UStateTree
void UStateTree::StaticRegisterNativesUStateTree()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTree);
UClass* Z_Construct_UClass_UStateTree_NoRegister()
{
	return UStateTree::StaticClass();
}
struct Z_Construct_UClass_UStateTree_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * StateTree asset. Contains the StateTree definition in both editor and runtime (baked) formats.\n */" },
		{ "IncludePath", "StateTree.h" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "StateTree asset. Contains the StateTree definition in both editor and runtime (baked) formats." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorData_MetaData[] = {
		{ "Comment", "/** Edit time data for the StateTree, instance of UStateTreeEditorData */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Edit time data for the StateTree, instance of UStateTreeEditorData" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastCompiledEditorDataHash_MetaData[] = {
		{ "Comment", "/** Hash of the editor data from last compile. Also used to detect mismatching events from recorded traces. */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Hash of the editor data from last compile. Also used to detect mismatching events from recorded traces." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Schema_MetaData[] = {
		{ "Comment", "/** Schema used to compile the StateTree. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Schema used to compile the StateTree." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[] = {
		{ "Comment", "/** Runtime states, root state at index 0 */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Runtime states, root state at index 0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transitions_MetaData[] = {
		{ "Comment", "/** Runtime transitions. */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Runtime transitions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[] = {
		{ "Comment", "/** Evaluators, Tasks, Condition and Consideration nodes. */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Evaluators, Tasks, Condition and Consideration nodes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInstanceData_MetaData[] = {
		{ "Comment", "/** Default node instance data (e.g. evaluators, tasks). */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Default node instance data (e.g. evaluators, tasks)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedInstanceData_MetaData[] = {
		{ "Comment", "/** Shared node instance data (e.g. conditions, considerations). */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Shared node instance data (e.g. conditions, considerations)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextDataDescs_MetaData[] = {
		{ "Comment", "/** List of names external data enforced by the schema, created at compilation. */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "List of names external data enforced by the schema, created at compilation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyBindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTree.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IDToStateMappings_MetaData[] = {
		{ "Comment", "/** Mapping of state guid for the Editor and state handles, created at compilation. */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Mapping of state guid for the Editor and state handles, created at compilation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IDToNodeMappings_MetaData[] = {
		{ "Comment", "/** Mapping of node guid for the Editor and node index, created at compilation. */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Mapping of node guid for the Editor and node index, created at compilation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IDToTransitionMappings_MetaData[] = {
		{ "Comment", "/** Mapping of state transition identifiers and runtime compact transition index, created at compilation. */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Mapping of state transition identifiers and runtime compact transition index, created at compilation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "Comment", "/**\n\x09 * Parameters that could be used for bindings within the Tree.\n\x09 * Default values are stored within the asset but StateTreeReference can be used to parameterized the tree.\n\x09 * @see FStateTreeReference\n\x09 */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Parameters that could be used for bindings within the Tree.\nDefault values are stored within the asset but StateTreeReference can be used to parameterized the tree.\n@see FStateTreeReference" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumContextData_MetaData[] = {
		{ "Comment", "/** Number of context data, include parameters and all context data. */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Number of context data, include parameters and all context data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumGlobalInstanceData_MetaData[] = {
		{ "Comment", "/** Number of global instance data. */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Number of global instance data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvaluatorsBegin_MetaData[] = {
		{ "Comment", "/** Index of first evaluator in Nodes. */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Index of first evaluator in Nodes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvaluatorsNum_MetaData[] = {
		{ "Comment", "/** Number of evaluators. */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Number of evaluators." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalTasksBegin_MetaData[] = {
		{ "Comment", "/** Index of first global task in Nodes. */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Index of first global task in Nodes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalTasksNum_MetaData[] = {
		{ "Comment", "/** Number of global tasks. */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Number of global tasks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasGlobalTransitionTasks_MetaData[] = {
		{ "Comment", "/** True if any global task is a transition task. */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "True if any global task is a transition task." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalDataDescs_MetaData[] = {
		{ "Comment", "/** List of external data required by the state tree, created during linking. */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "List of external data required by the state tree, created during linking." },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_LastCompiledEditorDataHash;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Schema;
	static const UECodeGen_Private::FStructPropertyParams NewProp_States_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_States;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Transitions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Nodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultInstanceData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SharedInstanceData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContextDataDescs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ContextDataDescs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyBindings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IDToStateMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IDToStateMappings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IDToNodeMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IDToNodeMappings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IDToTransitionMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IDToTransitionMappings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_NumContextData;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_NumGlobalInstanceData;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_EvaluatorsBegin;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_EvaluatorsNum;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_GlobalTasksBegin;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_GlobalTasksNum;
	static void NewProp_bHasGlobalTransitionTasks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasGlobalTransitionTasks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalDataDescs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalDataDescs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTree>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_EditorData = { "EditorData", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTree, EditorData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorData_MetaData), NewProp_EditorData_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_LastCompiledEditorDataHash = { "LastCompiledEditorDataHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTree, LastCompiledEditorDataHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastCompiledEditorDataHash_MetaData), NewProp_LastCompiledEditorDataHash_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_Schema = { "Schema", nullptr, (EPropertyFlags)0x0146000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTree, Schema), Z_Construct_UClass_UStateTreeSchema_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Schema_MetaData), NewProp_Schema_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_States_Inner = { "States", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCompactStateTreeState, METADATA_PARAMS(0, nullptr) }; // 3471686121
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTree, States), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_States_MetaData), NewProp_States_MetaData) }; // 3471686121
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_Transitions_Inner = { "Transitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCompactStateTransition, METADATA_PARAMS(0, nullptr) }; // 3965864148
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_Transitions = { "Transitions", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTree, Transitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transitions_MetaData), NewProp_Transitions_MetaData) }; // 3965864148
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTree, Nodes), Z_Construct_UScriptStruct_FInstancedStructContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nodes_MetaData), NewProp_Nodes_MetaData) }; // 3889300166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_DefaultInstanceData = { "DefaultInstanceData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTree, DefaultInstanceData), Z_Construct_UScriptStruct_FStateTreeInstanceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInstanceData_MetaData), NewProp_DefaultInstanceData_MetaData) }; // 1096932953
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_SharedInstanceData = { "SharedInstanceData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTree, SharedInstanceData), Z_Construct_UScriptStruct_FStateTreeInstanceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedInstanceData_MetaData), NewProp_SharedInstanceData_MetaData) }; // 1096932953
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_ContextDataDescs_Inner = { "ContextDataDescs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreeExternalDataDesc, METADATA_PARAMS(0, nullptr) }; // 1953451301
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_ContextDataDescs = { "ContextDataDescs", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTree, ContextDataDescs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextDataDescs_MetaData), NewProp_ContextDataDescs_MetaData) }; // 1953451301
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_PropertyBindings = { "PropertyBindings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTree, PropertyBindings), Z_Construct_UScriptStruct_FStateTreePropertyBindings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyBindings_MetaData), NewProp_PropertyBindings_MetaData) }; // 2320100137
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_IDToStateMappings_Inner = { "IDToStateMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreeStateIdToHandle, METADATA_PARAMS(0, nullptr) }; // 2279058267
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_IDToStateMappings = { "IDToStateMappings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTree, IDToStateMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IDToStateMappings_MetaData), NewProp_IDToStateMappings_MetaData) }; // 2279058267
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_IDToNodeMappings_Inner = { "IDToNodeMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex, METADATA_PARAMS(0, nullptr) }; // 3067998738
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_IDToNodeMappings = { "IDToNodeMappings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTree, IDToNodeMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IDToNodeMappings_MetaData), NewProp_IDToNodeMappings_MetaData) }; // 3067998738
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_IDToTransitionMappings_Inner = { "IDToTransitionMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex, METADATA_PARAMS(0, nullptr) }; // 3708718522
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_IDToTransitionMappings = { "IDToTransitionMappings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTree, IDToTransitionMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IDToTransitionMappings_MetaData), NewProp_IDToTransitionMappings_MetaData) }; // 3708718522
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTree, Parameters), Z_Construct_UScriptStruct_FInstancedPropertyBag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 2222206664
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_NumContextData = { "NumContextData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTree, NumContextData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumContextData_MetaData), NewProp_NumContextData_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_NumGlobalInstanceData = { "NumGlobalInstanceData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTree, NumGlobalInstanceData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumGlobalInstanceData_MetaData), NewProp_NumGlobalInstanceData_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_EvaluatorsBegin = { "EvaluatorsBegin", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTree, EvaluatorsBegin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvaluatorsBegin_MetaData), NewProp_EvaluatorsBegin_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_EvaluatorsNum = { "EvaluatorsNum", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTree, EvaluatorsNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvaluatorsNum_MetaData), NewProp_EvaluatorsNum_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_GlobalTasksBegin = { "GlobalTasksBegin", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTree, GlobalTasksBegin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalTasksBegin_MetaData), NewProp_GlobalTasksBegin_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_GlobalTasksNum = { "GlobalTasksNum", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTree, GlobalTasksNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalTasksNum_MetaData), NewProp_GlobalTasksNum_MetaData) };
void Z_Construct_UClass_UStateTree_Statics::NewProp_bHasGlobalTransitionTasks_SetBit(void* Obj)
{
	((UStateTree*)Obj)->bHasGlobalTransitionTasks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_bHasGlobalTransitionTasks = { "bHasGlobalTransitionTasks", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStateTree), &Z_Construct_UClass_UStateTree_Statics::NewProp_bHasGlobalTransitionTasks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasGlobalTransitionTasks_MetaData), NewProp_bHasGlobalTransitionTasks_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_ExternalDataDescs_Inner = { "ExternalDataDescs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreeExternalDataDesc, METADATA_PARAMS(0, nullptr) }; // 1953451301
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_ExternalDataDescs = { "ExternalDataDescs", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTree, ExternalDataDescs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalDataDescs_MetaData), NewProp_ExternalDataDescs_MetaData) }; // 1953451301
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateTree_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_EditorData,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_LastCompiledEditorDataHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_Schema,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_States_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_States,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_Transitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_Transitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_Nodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_DefaultInstanceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_SharedInstanceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_ContextDataDescs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_ContextDataDescs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_PropertyBindings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_IDToStateMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_IDToStateMappings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_IDToNodeMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_IDToNodeMappings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_IDToTransitionMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_IDToTransitionMappings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_NumContextData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_NumGlobalInstanceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_EvaluatorsBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_EvaluatorsNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_GlobalTasksBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_GlobalTasksNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_bHasGlobalTransitionTasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_ExternalDataDescs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_ExternalDataDescs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTree_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStateTree_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTree_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTree_Statics::ClassParams = {
	&UStateTree::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStateTree_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStateTree_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTree_Statics::Class_MetaDataParams), Z_Construct_UClass_UStateTree_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStateTree()
{
	if (!Z_Registration_Info_UClass_UStateTree.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTree.OuterSingleton, Z_Construct_UClass_UStateTree_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStateTree.OuterSingleton;
}
template<> STATETREEMODULE_API UClass* StaticClass<UStateTree>()
{
	return UStateTree::StaticClass();
}
UStateTree::UStateTree(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTree);
UStateTree::~UStateTree() {}
IMPLEMENT_FARCHIVE_SERIALIZER(UStateTree)
// End Class UStateTree

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStateTree, UStateTree::StaticClass, TEXT("UStateTree"), &Z_Registration_Info_UClass_UStateTree, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTree), 3732601365U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h_518628835(TEXT("/Script/StateTreeModule"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
