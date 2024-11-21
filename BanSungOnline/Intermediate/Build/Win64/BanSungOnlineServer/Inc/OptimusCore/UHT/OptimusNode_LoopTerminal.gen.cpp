// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/Nodes/OptimusNode_LoopTerminal.h"
#include "OptimusCore/Public/OptimusBindingTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode_LoopTerminal() {}

// Begin Cross Module References
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_LoopTerminal();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_LoopTerminal_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeAdderPinProvider_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodePairProvider_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodePin_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusParameterBindingProvider_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPinMutabilityDefiner_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusUnnamedNodePinProvider_NoRegister();
OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusTerminalType();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusLoopTerminalInfo();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusParameterBindingArray();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusPinPairInfo();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin ScriptStruct FOptimusPinPairInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusPinPairInfo;
class UScriptStruct* FOptimusPinPairInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusPinPairInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusPinPairInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusPinPairInfo, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusPinPairInfo"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusPinPairInfo.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusPinPairInfo>()
{
	return FOptimusPinPairInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusPinPairInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_LoopTerminal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputPinPath_MetaData[] = {
		{ "Comment", "// Using PinNamePath here such that it plays well with default UObject undo/redo\n" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_LoopTerminal.h" },
		{ "ToolTip", "Using PinNamePath here such that it plays well with default UObject undo/redo" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputPinPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_LoopTerminal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputPinPath_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputPinPath;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputPinPath_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputPinPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusPinPairInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusPinPairInfo_Statics::NewProp_InputPinPath_Inner = { "InputPinPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOptimusPinPairInfo_Statics::NewProp_InputPinPath = { "InputPinPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusPinPairInfo, InputPinPath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputPinPath_MetaData), NewProp_InputPinPath_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusPinPairInfo_Statics::NewProp_OutputPinPath_Inner = { "OutputPinPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOptimusPinPairInfo_Statics::NewProp_OutputPinPath = { "OutputPinPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusPinPairInfo, OutputPinPath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputPinPath_MetaData), NewProp_OutputPinPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusPinPairInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusPinPairInfo_Statics::NewProp_InputPinPath_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusPinPairInfo_Statics::NewProp_InputPinPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusPinPairInfo_Statics::NewProp_OutputPinPath_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusPinPairInfo_Statics::NewProp_OutputPinPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusPinPairInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusPinPairInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusPinPairInfo",
	Z_Construct_UScriptStruct_FOptimusPinPairInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusPinPairInfo_Statics::PropPointers),
	sizeof(FOptimusPinPairInfo),
	alignof(FOptimusPinPairInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusPinPairInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusPinPairInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusPinPairInfo()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusPinPairInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusPinPairInfo.InnerSingleton, Z_Construct_UScriptStruct_FOptimusPinPairInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusPinPairInfo.InnerSingleton;
}
// End ScriptStruct FOptimusPinPairInfo

// Begin ScriptStruct FOptimusLoopTerminalInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusLoopTerminalInfo;
class UScriptStruct* FOptimusLoopTerminalInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusLoopTerminalInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusLoopTerminalInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusLoopTerminalInfo, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusLoopTerminalInfo"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusLoopTerminalInfo.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusLoopTerminalInfo>()
{
	return FOptimusLoopTerminalInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusLoopTerminalInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_LoopTerminal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "Loop Terminal" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_LoopTerminal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[] = {
		{ "Category", "Loop Terminal" },
		{ "FullyExpand", "true" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_LoopTerminal.h" },
		{ "NoResetToDefault", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusLoopTerminalInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOptimusLoopTerminalInfo_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusLoopTerminalInfo, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusLoopTerminalInfo_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusLoopTerminalInfo, Bindings), Z_Construct_UScriptStruct_FOptimusParameterBindingArray, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bindings_MetaData), NewProp_Bindings_MetaData) }; // 380112210
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusLoopTerminalInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusLoopTerminalInfo_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusLoopTerminalInfo_Statics::NewProp_Bindings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusLoopTerminalInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusLoopTerminalInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusLoopTerminalInfo",
	Z_Construct_UScriptStruct_FOptimusLoopTerminalInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusLoopTerminalInfo_Statics::PropPointers),
	sizeof(FOptimusLoopTerminalInfo),
	alignof(FOptimusLoopTerminalInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusLoopTerminalInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusLoopTerminalInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusLoopTerminalInfo()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusLoopTerminalInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusLoopTerminalInfo.InnerSingleton, Z_Construct_UScriptStruct_FOptimusLoopTerminalInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusLoopTerminalInfo.InnerSingleton;
}
// End ScriptStruct FOptimusLoopTerminalInfo

// Begin Class UOptimusNode_LoopTerminal
void UOptimusNode_LoopTerminal::StaticRegisterNativesUOptimusNode_LoopTerminal()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_LoopTerminal);
UClass* Z_Construct_UClass_UOptimusNode_LoopTerminal_NoRegister()
{
	return UOptimusNode_LoopTerminal::StaticClass();
}
struct Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/OptimusNode_LoopTerminal.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_LoopTerminal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TerminalType_MetaData[] = {
		{ "Category", "Loop Terminal" },
		{ "Comment", "/** Indicates whether this is an entry or a return terminal node */" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_LoopTerminal.h" },
		{ "ToolTip", "Indicates whether this is an entry or a return terminal node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopInfo_MetaData[] = {
		{ "Category", "Loop Terminal" },
		{ "DisplayName", "Settings" },
		{ "EditCondition", "TerminalType==EOptimusTerminalType::Entry" },
		{ "EditConditionHides", "" },
		{ "FullyExpand", "true" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_LoopTerminal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexPin_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_LoopTerminal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountPin_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_LoopTerminal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinPairInfos_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_LoopTerminal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TerminalType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TerminalType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoopInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IndexPin;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CountPin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PinPairInfos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PinPairInfos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_LoopTerminal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics::NewProp_TerminalType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics::NewProp_TerminalType = { "TerminalType", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_LoopTerminal, TerminalType), Z_Construct_UEnum_OptimusCore_EOptimusTerminalType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TerminalType_MetaData), NewProp_TerminalType_MetaData) }; // 4162058696
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics::NewProp_LoopInfo = { "LoopInfo", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_LoopTerminal, LoopInfo), Z_Construct_UScriptStruct_FOptimusLoopTerminalInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopInfo_MetaData), NewProp_LoopInfo_MetaData) }; // 3713389919
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics::NewProp_IndexPin = { "IndexPin", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_LoopTerminal, IndexPin), Z_Construct_UClass_UOptimusNodePin_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexPin_MetaData), NewProp_IndexPin_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics::NewProp_CountPin = { "CountPin", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_LoopTerminal, CountPin), Z_Construct_UClass_UOptimusNodePin_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountPin_MetaData), NewProp_CountPin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics::NewProp_PinPairInfos_Inner = { "PinPairInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOptimusPinPairInfo, METADATA_PARAMS(0, nullptr) }; // 1951862452
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics::NewProp_PinPairInfos = { "PinPairInfos", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_LoopTerminal, PinPairInfos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinPairInfos_MetaData), NewProp_PinPairInfos_MetaData) }; // 1951862452
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics::NewProp_TerminalType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics::NewProp_TerminalType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics::NewProp_LoopInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics::NewProp_IndexPin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics::NewProp_CountPin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics::NewProp_PinPairInfos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics::NewProp_PinPairInfos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusNode,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UOptimusNodeAdderPinProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_LoopTerminal, IOptimusNodeAdderPinProvider), false },  // 3861201956
	{ Z_Construct_UClass_UOptimusUnnamedNodePinProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_LoopTerminal, IOptimusUnnamedNodePinProvider), false },  // 2099196189
	{ Z_Construct_UClass_UOptimusNodePairProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_LoopTerminal, IOptimusNodePairProvider), false },  // 2876123610
	{ Z_Construct_UClass_UOptimusPinMutabilityDefiner_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_LoopTerminal, IOptimusPinMutabilityDefiner), false },  // 3934412691
	{ Z_Construct_UClass_UOptimusParameterBindingProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_LoopTerminal, IOptimusParameterBindingProvider), false },  // 658361310
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics::ClassParams = {
	&UOptimusNode_LoopTerminal::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x011000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusNode_LoopTerminal()
{
	if (!Z_Registration_Info_UClass_UOptimusNode_LoopTerminal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_LoopTerminal.OuterSingleton, Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusNode_LoopTerminal.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_LoopTerminal>()
{
	return UOptimusNode_LoopTerminal::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_LoopTerminal);
UOptimusNode_LoopTerminal::~UOptimusNode_LoopTerminal() {}
// End Class UOptimusNode_LoopTerminal

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_LoopTerminal_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOptimusPinPairInfo::StaticStruct, Z_Construct_UScriptStruct_FOptimusPinPairInfo_Statics::NewStructOps, TEXT("OptimusPinPairInfo"), &Z_Registration_Info_UScriptStruct_OptimusPinPairInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusPinPairInfo), 1951862452U) },
		{ FOptimusLoopTerminalInfo::StaticStruct, Z_Construct_UScriptStruct_FOptimusLoopTerminalInfo_Statics::NewStructOps, TEXT("OptimusLoopTerminalInfo"), &Z_Registration_Info_UScriptStruct_OptimusLoopTerminalInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusLoopTerminalInfo), 3713389919U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode_LoopTerminal, UOptimusNode_LoopTerminal::StaticClass, TEXT("UOptimusNode_LoopTerminal"), &Z_Registration_Info_UClass_UOptimusNode_LoopTerminal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_LoopTerminal), 2832556565U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_LoopTerminal_h_3228219766(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_LoopTerminal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_LoopTerminal_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_LoopTerminal_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_LoopTerminal_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
