// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MassEntity/Public/MassProcessor.h"
#include "Runtime/MassEntity/Public/MassProcessingTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassProcessor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MASSENTITY_API UClass* Z_Construct_UClass_UMassCompositeProcessor();
MASSENTITY_API UClass* Z_Construct_UClass_UMassCompositeProcessor_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor_NoRegister();
MASSENTITY_API UEnum* Z_Construct_UEnum_MassEntity_EMassProcessingPhase();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassProcessorExecutionOrder();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassRuntimePipeline();
UPackage* Z_Construct_UPackage__Script_MassEntity();
// End Cross Module References

// Begin ScriptStruct FMassProcessorExecutionOrder
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassProcessorExecutionOrder;
class UScriptStruct* FMassProcessorExecutionOrder::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassProcessorExecutionOrder.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassProcessorExecutionOrder.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassProcessorExecutionOrder, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassProcessorExecutionOrder"));
	}
	return Z_Registration_Info_UScriptStruct_MassProcessorExecutionOrder.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassProcessorExecutionOrder>()
{
	return FMassProcessorExecutionOrder::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteInGroup_MetaData[] = {
		{ "Category", "Processor" },
		{ "Comment", "/** Determines which processing group this processor will be placed in. Leaving it empty (\"None\") means \"top-most group for my ProcessingPhase\" */" },
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
		{ "ToolTip", "Determines which processing group this processor will be placed in. Leaving it empty (\"None\") means \"top-most group for my ProcessingPhase\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteBefore_MetaData[] = {
		{ "Category", "Processor" },
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteAfter_MetaData[] = {
		{ "Category", "Processor" },
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExecuteInGroup;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExecuteBefore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExecuteBefore;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExecuteAfter_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExecuteAfter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassProcessorExecutionOrder>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteInGroup = { "ExecuteInGroup", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassProcessorExecutionOrder, ExecuteInGroup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecuteInGroup_MetaData), NewProp_ExecuteInGroup_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteBefore_Inner = { "ExecuteBefore", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteBefore = { "ExecuteBefore", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassProcessorExecutionOrder, ExecuteBefore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecuteBefore_MetaData), NewProp_ExecuteBefore_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteAfter_Inner = { "ExecuteAfter", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteAfter = { "ExecuteAfter", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassProcessorExecutionOrder, ExecuteAfter), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecuteAfter_MetaData), NewProp_ExecuteAfter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteInGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteBefore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteBefore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteAfter_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteAfter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
	nullptr,
	&NewStructOps,
	"MassProcessorExecutionOrder",
	Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::PropPointers),
	sizeof(FMassProcessorExecutionOrder),
	alignof(FMassProcessorExecutionOrder),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassProcessorExecutionOrder()
{
	if (!Z_Registration_Info_UScriptStruct_MassProcessorExecutionOrder.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassProcessorExecutionOrder.InnerSingleton, Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassProcessorExecutionOrder.InnerSingleton;
}
// End ScriptStruct FMassProcessorExecutionOrder

// Begin Class UMassProcessor
void UMassProcessor::StaticRegisterNativesUMassProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassProcessor);
UClass* Z_Construct_UClass_UMassProcessor_NoRegister()
{
	return UMassProcessor::StaticClass();
}
struct Z_Construct_UClass_UMassProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassProcessor.h" },
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionOrder_MetaData[] = {
		{ "Category", "Processor" },
		{ "Comment", "/** Configures when this given processor can be executed in relation to other processors and processing groups, within its processing phase. */" },
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
		{ "ToolTip", "Configures when this given processor can be executed in relation to other processors and processing groups, within its processing phase." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProcessingPhase_MetaData[] = {
		{ "Category", "Processor" },
		{ "Comment", "/** Processing phase this processor will be automatically run as part of. Needs to be set before the processor gets\n\x09 *  registered with MassProcessingPhaseManager, otherwise it will have no effect. This property is usually read via\n\x09 *  a given class's CDO, so it's recommended to set it in the constructor. */" },
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
		{ "ToolTip", "Processing phase this processor will be automatically run as part of. Needs to be set before the processor gets\nregistered with MassProcessingPhaseManager, otherwise it will have no effect. This property is usually read via\na given class's CDO, so it's recommended to set it in the constructor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionFlags_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/MassEntity.EProcessorExecutionFlags" },
		{ "Category", "Pipeline" },
		{ "Comment", "/** Whether this processor should be executed on StandAlone or Server or Client */" },
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
		{ "ToolTip", "Whether this processor should be executed on StandAlone or Server or Client" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRegisterWithProcessingPhases_MetaData[] = {
		{ "Category", "Processor" },
		{ "Comment", "/** Configures whether this processor should be automatically included in the global list of processors executed every tick (see ProcessingPhase and ExecutionOrder). */" },
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
		{ "ToolTip", "Configures whether this processor should be automatically included in the global list of processors executed every tick (see ProcessingPhase and ExecutionOrder)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresGameThreadExecution_MetaData[] = {
		{ "Category", "Processor" },
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanShowUpInSettings_MetaData[] = {
		{ "Comment", "/** Used to permanently remove a given processor class from PipeSetting's listing. Used primarily for test-time \n\x09 *  processor classes, but can also be used by project-specific code to prune the processor list. */" },
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
		{ "ToolTip", "Used to permanently remove a given processor class from PipeSetting's listing. Used primarily for test-time\nprocessor classes, but can also be used by project-specific code to prune the processor list." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionOrder;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProcessingPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ProcessingPhase;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecutionFlags;
	static void NewProp_bAutoRegisterWithProcessingPhases_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRegisterWithProcessingPhases;
	static void NewProp_bRequiresGameThreadExecution_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresGameThreadExecution;
#if WITH_EDITORONLY_DATA
	static void NewProp_bCanShowUpInSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanShowUpInSettings;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassProcessor_Statics::NewProp_ExecutionOrder = { "ExecutionOrder", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassProcessor, ExecutionOrder), Z_Construct_UScriptStruct_FMassProcessorExecutionOrder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionOrder_MetaData), NewProp_ExecutionOrder_MetaData) }; // 928357777
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMassProcessor_Statics::NewProp_ProcessingPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMassProcessor_Statics::NewProp_ProcessingPhase = { "ProcessingPhase", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassProcessor, ProcessingPhase), Z_Construct_UEnum_MassEntity_EMassProcessingPhase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProcessingPhase_MetaData), NewProp_ProcessingPhase_MetaData) }; // 367891264
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMassProcessor_Statics::NewProp_ExecutionFlags = { "ExecutionFlags", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassProcessor, ExecutionFlags), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionFlags_MetaData), NewProp_ExecutionFlags_MetaData) };
void Z_Construct_UClass_UMassProcessor_Statics::NewProp_bAutoRegisterWithProcessingPhases_SetBit(void* Obj)
{
	((UMassProcessor*)Obj)->bAutoRegisterWithProcessingPhases = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassProcessor_Statics::NewProp_bAutoRegisterWithProcessingPhases = { "bAutoRegisterWithProcessingPhases", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMassProcessor), &Z_Construct_UClass_UMassProcessor_Statics::NewProp_bAutoRegisterWithProcessingPhases_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoRegisterWithProcessingPhases_MetaData), NewProp_bAutoRegisterWithProcessingPhases_MetaData) };
void Z_Construct_UClass_UMassProcessor_Statics::NewProp_bRequiresGameThreadExecution_SetBit(void* Obj)
{
	((UMassProcessor*)Obj)->bRequiresGameThreadExecution = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassProcessor_Statics::NewProp_bRequiresGameThreadExecution = { "bRequiresGameThreadExecution", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMassProcessor), &Z_Construct_UClass_UMassProcessor_Statics::NewProp_bRequiresGameThreadExecution_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresGameThreadExecution_MetaData), NewProp_bRequiresGameThreadExecution_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UMassProcessor_Statics::NewProp_bCanShowUpInSettings_SetBit(void* Obj)
{
	((UMassProcessor*)Obj)->bCanShowUpInSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassProcessor_Statics::NewProp_bCanShowUpInSettings = { "bCanShowUpInSettings", nullptr, (EPropertyFlags)0x0020080800004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMassProcessor), &Z_Construct_UClass_UMassProcessor_Statics::NewProp_bCanShowUpInSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanShowUpInSettings_MetaData), NewProp_bCanShowUpInSettings_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassProcessor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassProcessor_Statics::NewProp_ExecutionOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassProcessor_Statics::NewProp_ProcessingPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassProcessor_Statics::NewProp_ProcessingPhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassProcessor_Statics::NewProp_ExecutionFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassProcessor_Statics::NewProp_bAutoRegisterWithProcessingPhases,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassProcessor_Statics::NewProp_bRequiresGameThreadExecution,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassProcessor_Statics::NewProp_bCanShowUpInSettings,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassProcessor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMassProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassProcessor_Statics::ClassParams = {
	&UMassProcessor::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassProcessor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassProcessor_Statics::PropPointers),
	0,
	0x401030A7u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassProcessor()
{
	if (!Z_Registration_Info_UClass_UMassProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassProcessor.OuterSingleton, Z_Construct_UClass_UMassProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassProcessor.OuterSingleton;
}
template<> MASSENTITY_API UClass* StaticClass<UMassProcessor>()
{
	return UMassProcessor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassProcessor);
UMassProcessor::~UMassProcessor() {}
// End Class UMassProcessor

// Begin Class UMassCompositeProcessor
void UMassCompositeProcessor::StaticRegisterNativesUMassCompositeProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCompositeProcessor);
UClass* Z_Construct_UClass_UMassCompositeProcessor_NoRegister()
{
	return UMassCompositeProcessor::StaticClass();
}
struct Z_Construct_UClass_UMassCompositeProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassProcessor.h" },
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildPipeline_MetaData[] = {
		{ "Category", "Mass" },
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[] = {
		{ "Comment", "/** Group name that will be used when resolving processor dependencies and grouping */" },
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
		{ "ToolTip", "Group name that will be used when resolving processor dependencies and grouping" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildPipeline;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCompositeProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassCompositeProcessor_Statics::NewProp_ChildPipeline = { "ChildPipeline", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassCompositeProcessor, ChildPipeline), Z_Construct_UScriptStruct_FMassRuntimePipeline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildPipeline_MetaData), NewProp_ChildPipeline_MetaData) }; // 150184207
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMassCompositeProcessor_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassCompositeProcessor, GroupName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupName_MetaData), NewProp_GroupName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassCompositeProcessor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCompositeProcessor_Statics::NewProp_ChildPipeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCompositeProcessor_Statics::NewProp_GroupName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassCompositeProcessor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMassCompositeProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassCompositeProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCompositeProcessor_Statics::ClassParams = {
	&UMassCompositeProcessor::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassCompositeProcessor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassCompositeProcessor_Statics::PropPointers),
	0,
	0x401030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassCompositeProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassCompositeProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassCompositeProcessor()
{
	if (!Z_Registration_Info_UClass_UMassCompositeProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCompositeProcessor.OuterSingleton, Z_Construct_UClass_UMassCompositeProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassCompositeProcessor.OuterSingleton;
}
template<> MASSENTITY_API UClass* StaticClass<UMassCompositeProcessor>()
{
	return UMassCompositeProcessor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCompositeProcessor);
UMassCompositeProcessor::~UMassCompositeProcessor() {}
// End Class UMassCompositeProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassProcessorExecutionOrder::StaticStruct, Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewStructOps, TEXT("MassProcessorExecutionOrder"), &Z_Registration_Info_UScriptStruct_MassProcessorExecutionOrder, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassProcessorExecutionOrder), 928357777U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassProcessor, UMassProcessor::StaticClass, TEXT("UMassProcessor"), &Z_Registration_Info_UClass_UMassProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassProcessor), 2314938839U) },
		{ Z_Construct_UClass_UMassCompositeProcessor, UMassCompositeProcessor::StaticClass, TEXT("UMassCompositeProcessor"), &Z_Registration_Info_UClass_UMassCompositeProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCompositeProcessor), 4249964872U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_405226880(TEXT("/Script/MassEntity"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
