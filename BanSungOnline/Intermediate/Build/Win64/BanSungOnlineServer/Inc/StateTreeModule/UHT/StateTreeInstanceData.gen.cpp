// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Public/StateTreeInstanceData.h"
#include "Runtime/CoreUObject/Public/StructUtils/InstancedStruct.h"
#include "Runtime/CoreUObject/Public/StructUtils/InstancedStructContainer.h"
#include "Runtime/CoreUObject/Public/StructUtils/PropertyBag.h"
#include "StateTreeModule/Public/StateTreeExecutionTypes.h"
#include "StateTreeModule/Public/StateTreeIndexTypes.h"
#include "StateTreeModule/Public/StateTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeInstanceData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedPropertyBag();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStructContainer();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTree_NoRegister();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeDataHandle();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeExecutionState();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeIndex16();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeInstanceData();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeInstanceStorage();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStateHandle();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransitionRequest();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin ScriptStruct FStateTreeInstanceObjectWrapper
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeInstanceObjectWrapper;
class UScriptStruct* FStateTreeInstanceObjectWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeInstanceObjectWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeInstanceObjectWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeInstanceObjectWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeInstanceObjectWrapper.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeInstanceObjectWrapper>()
{
	return FStateTreeInstanceObjectWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Wrapper class to store an object amongst the structs. */" },
		{ "ModuleRelativePath", "Public/StateTreeInstanceData.h" },
		{ "ToolTip", "Wrapper class to store an object amongst the structs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeInstanceData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstanceObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeInstanceObjectWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper_Statics::NewProp_InstanceObject = { "InstanceObject", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeInstanceObjectWrapper, InstanceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceObject_MetaData), NewProp_InstanceObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper_Statics::NewProp_InstanceObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeInstanceObjectWrapper",
	Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper_Statics::PropPointers),
	sizeof(FStateTreeInstanceObjectWrapper),
	alignof(FStateTreeInstanceObjectWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeInstanceObjectWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeInstanceObjectWrapper.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeInstanceObjectWrapper.InnerSingleton;
}
// End ScriptStruct FStateTreeInstanceObjectWrapper

// Begin ScriptStruct FStateTreeTemporaryInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeTemporaryInstanceData;
class UScriptStruct* FStateTreeTemporaryInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTemporaryInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeTemporaryInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeTemporaryInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTemporaryInstanceData.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeTemporaryInstanceData>()
{
	return FStateTreeTemporaryInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds temporary instance data created during state selection.\n * The data is identified by Frame (StateTree + RootState) and DataHandle.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeInstanceData.h" },
		{ "ToolTip", "Holds temporary instance data created during state selection.\nThe data is identified by Frame (StateTree + RootState) and DataHandle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateTree_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeInstanceData.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootState_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeInstanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeInstanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerNodeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeInstanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeInstanceData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateTree;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerNodeIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Instance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeTemporaryInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData_Statics::NewProp_StateTree = { "StateTree", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTemporaryInstanceData, StateTree), Z_Construct_UClass_UStateTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateTree_MetaData), NewProp_StateTree_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData_Statics::NewProp_RootState = { "RootState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTemporaryInstanceData, RootState), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootState_MetaData), NewProp_RootState_MetaData) }; // 3726322759
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData_Statics::NewProp_DataHandle = { "DataHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTemporaryInstanceData, DataHandle), Z_Construct_UScriptStruct_FStateTreeDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataHandle_MetaData), NewProp_DataHandle_MetaData) }; // 3876109322
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData_Statics::NewProp_OwnerNodeIndex = { "OwnerNodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTemporaryInstanceData, OwnerNodeIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerNodeIndex_MetaData), NewProp_OwnerNodeIndex_MetaData) }; // 2905844030
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTemporaryInstanceData, Instance), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instance_MetaData), NewProp_Instance_MetaData) }; // 111383296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData_Statics::NewProp_StateTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData_Statics::NewProp_RootState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData_Statics::NewProp_DataHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData_Statics::NewProp_OwnerNodeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData_Statics::NewProp_Instance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeTemporaryInstanceData",
	Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData_Statics::PropPointers),
	sizeof(FStateTreeTemporaryInstanceData),
	alignof(FStateTreeTemporaryInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTemporaryInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeTemporaryInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTemporaryInstanceData.InnerSingleton;
}
// End ScriptStruct FStateTreeTemporaryInstanceData

// Begin ScriptStruct FStateTreeInstanceStorage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeInstanceStorage;
class UScriptStruct* FStateTreeInstanceStorage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeInstanceStorage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeInstanceStorage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceStorage, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeInstanceStorage"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeInstanceStorage.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeInstanceStorage>()
{
	return FStateTreeInstanceStorage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Storage for the actual instance data. */" },
		{ "ModuleRelativePath", "Public/StateTreeInstanceData.h" },
		{ "ToolTip", "Storage for the actual instance data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceStructs_MetaData[] = {
		{ "Comment", "/** Struct instances (Not transient, as we use FStateTreeInstanceData to store default values for instance data) */" },
		{ "ModuleRelativePath", "Public/StateTreeInstanceData.h" },
		{ "ToolTip", "Struct instances (Not transient, as we use FStateTreeInstanceData to store default values for instance data)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionState_MetaData[] = {
		{ "Comment", "/** Execution state of the state tree instance. */" },
		{ "ModuleRelativePath", "Public/StateTreeInstanceData.h" },
		{ "ToolTip", "Execution state of the state tree instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemporaryInstances_MetaData[] = {
		{ "Comment", "/** Temporary instances */" },
		{ "ModuleRelativePath", "Public/StateTreeInstanceData.h" },
		{ "ToolTip", "Temporary instances" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionRequests_MetaData[] = {
		{ "Comment", "/** Requested transitions */" },
		{ "ModuleRelativePath", "Public/StateTreeInstanceData.h" },
		{ "ToolTip", "Requested transitions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalParameters_MetaData[] = {
		{ "Comment", "/** Global parameters */" },
		{ "ModuleRelativePath", "Public/StateTreeInstanceData.h" },
		{ "ToolTip", "Global parameters" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceStructs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TemporaryInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TemporaryInstances;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionRequests_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TransitionRequests;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeInstanceStorage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_InstanceStructs = { "InstanceStructs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeInstanceStorage, InstanceStructs), Z_Construct_UScriptStruct_FInstancedStructContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceStructs_MetaData), NewProp_InstanceStructs_MetaData) }; // 3889300166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_ExecutionState = { "ExecutionState", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeInstanceStorage, ExecutionState), Z_Construct_UScriptStruct_FStateTreeExecutionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionState_MetaData), NewProp_ExecutionState_MetaData) }; // 2563513698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_TemporaryInstances_Inner = { "TemporaryInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData, METADATA_PARAMS(0, nullptr) }; // 2700724437
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_TemporaryInstances = { "TemporaryInstances", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeInstanceStorage, TemporaryInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemporaryInstances_MetaData), NewProp_TemporaryInstances_MetaData) }; // 2700724437
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_TransitionRequests_Inner = { "TransitionRequests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreeTransitionRequest, METADATA_PARAMS(0, nullptr) }; // 2670843344
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_TransitionRequests = { "TransitionRequests", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeInstanceStorage, TransitionRequests), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionRequests_MetaData), NewProp_TransitionRequests_MetaData) }; // 2670843344
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_GlobalParameters = { "GlobalParameters", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeInstanceStorage, GlobalParameters), Z_Construct_UScriptStruct_FInstancedPropertyBag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalParameters_MetaData), NewProp_GlobalParameters_MetaData) }; // 2222206664
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_InstanceStructs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_ExecutionState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_TemporaryInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_TemporaryInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_TransitionRequests_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_TransitionRequests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_GlobalParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeInstanceStorage",
	Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::PropPointers),
	sizeof(FStateTreeInstanceStorage),
	alignof(FStateTreeInstanceStorage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeInstanceStorage()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeInstanceStorage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeInstanceStorage.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeInstanceStorage.InnerSingleton;
}
// End ScriptStruct FStateTreeInstanceStorage

// Begin ScriptStruct FStateTreeInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeInstanceData;
class UScriptStruct* FStateTreeInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeInstanceData.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeInstanceData>()
{
	return FStateTreeInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * StateTree instance data is used to store the runtime state of a StateTree.\n * The layout of the data is described in a FStateTreeInstanceDataLayout.\n *\n * Note: If FStateTreeInstanceData is placed on an struct, you must call AddStructReferencedObjects() manually,\n *\x09\x09 as it is not automatically called recursively.   \n * Note: Serialization is supported only for FArchive::IsModifyingWeakAndStrongReferences(), that is replacing object references.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeInstanceData.h" },
		{ "ToolTip", "StateTree instance data is used to store the runtime state of a StateTree.\nThe layout of the data is described in a FStateTreeInstanceDataLayout.\n\nNote: If FStateTreeInstanceData is placed on an struct, you must call AddStructReferencedObjects() manually,\n             as it is not automatically called recursively.\nNote: Serialization is supported only for FArchive::IsModifyingWeakAndStrongReferences(), that is replacing object references." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceStorage_MetaData[] = {
		{ "BaseStruct", "/Script/StateTreeModule.StateTreeInstanceStorage" },
		{ "ModuleRelativePath", "Public/StateTreeInstanceData.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceStorage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::NewProp_InstanceStorage = { "InstanceStorage", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeInstanceData, InstanceStorage_DEPRECATED), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceStorage_MetaData), NewProp_InstanceStorage_MetaData) }; // 111383296
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::NewProp_InstanceStorage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeInstanceData",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::PropPointers), 0),
	sizeof(FStateTreeInstanceData),
	alignof(FStateTreeInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeInstanceData.InnerSingleton;
}
// End ScriptStruct FStateTreeInstanceData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeInstanceData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreeInstanceObjectWrapper::StaticStruct, Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper_Statics::NewStructOps, TEXT("StateTreeInstanceObjectWrapper"), &Z_Registration_Info_UScriptStruct_StateTreeInstanceObjectWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeInstanceObjectWrapper), 4083387502U) },
		{ FStateTreeTemporaryInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData_Statics::NewStructOps, TEXT("StateTreeTemporaryInstanceData"), &Z_Registration_Info_UScriptStruct_StateTreeTemporaryInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeTemporaryInstanceData), 2700724437U) },
		{ FStateTreeInstanceStorage::StaticStruct, Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewStructOps, TEXT("StateTreeInstanceStorage"), &Z_Registration_Info_UScriptStruct_StateTreeInstanceStorage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeInstanceStorage), 1630105320U) },
		{ FStateTreeInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::NewStructOps, TEXT("StateTreeInstanceData"), &Z_Registration_Info_UScriptStruct_StateTreeInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeInstanceData), 1096932953U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeInstanceData_h_3859047669(TEXT("/Script/StateTreeModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeInstanceData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeInstanceData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
