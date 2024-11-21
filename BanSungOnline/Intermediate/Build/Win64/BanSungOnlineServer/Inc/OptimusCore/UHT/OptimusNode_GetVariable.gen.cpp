// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/Nodes/OptimusNode_GetVariable.h"
#include "OptimusCore/Public/OptimusDataType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode_GetVariable() {}

// Begin Cross Module References
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_GetVariable();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_GetVariable_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNonCollapsibleNode_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPinMutabilityDefiner_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusValueProvider_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusVariableDescription_NoRegister();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataTypeRef();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin ScriptStruct FOptimusNode_GetVariable_DuplicationInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNode_GetVariable_DuplicationInfo;
class UScriptStruct* FOptimusNode_GetVariable_DuplicationInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNode_GetVariable_DuplicationInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNode_GetVariable_DuplicationInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNode_GetVariable_DuplicationInfo"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNode_GetVariable_DuplicationInfo.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNode_GetVariable_DuplicationInfo>()
{
	return FOptimusNode_GetVariable_DuplicationInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Information to hold data on the variable definition that persists over node duplication.\n// FIXME: This could be generalized in a better fashion.\n" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_GetVariable.h" },
		{ "ToolTip", "Information to hold data on the variable definition that persists over node duplication.\nFIXME: This could be generalized in a better fashion." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_GetVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_GetVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_GetVariable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNode_GetVariable_DuplicationInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusNode_GetVariable_DuplicationInfo, VariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableName_MetaData), NewProp_VariableName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusNode_GetVariable_DuplicationInfo, DataType), Z_Construct_UScriptStruct_FOptimusDataTypeRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataType_MetaData), NewProp_DataType_MetaData) }; // 1626052194
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusNode_GetVariable_DuplicationInfo, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusNode_GetVariable_DuplicationInfo",
	Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::PropPointers),
	sizeof(FOptimusNode_GetVariable_DuplicationInfo),
	alignof(FOptimusNode_GetVariable_DuplicationInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNode_GetVariable_DuplicationInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNode_GetVariable_DuplicationInfo.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusNode_GetVariable_DuplicationInfo.InnerSingleton;
}
// End ScriptStruct FOptimusNode_GetVariable_DuplicationInfo

// Begin Class UOptimusNode_GetVariable
void UOptimusNode_GetVariable::StaticRegisterNativesUOptimusNode_GetVariable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_GetVariable);
UClass* Z_Construct_UClass_UOptimusNode_GetVariable_NoRegister()
{
	return UOptimusNode_GetVariable::StaticClass();
}
struct Z_Construct_UClass_UOptimusNode_GetVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/OptimusNode_GetVariable.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_GetVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableDesc_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_GetVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DuplicationInfo_MetaData[] = {
		{ "Comment", "// Duplication data across graphs\n" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_GetVariable.h" },
		{ "ToolTip", "Duplication data across graphs" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_VariableDesc;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DuplicationInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_GetVariable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOptimusNode_GetVariable_Statics::NewProp_VariableDesc = { "VariableDesc", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_GetVariable, VariableDesc), Z_Construct_UClass_UOptimusVariableDescription_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableDesc_MetaData), NewProp_VariableDesc_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_GetVariable_Statics::NewProp_DuplicationInfo = { "DuplicationInfo", nullptr, (EPropertyFlags)0x0040000000200000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_GetVariable, DuplicationInfo), Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DuplicationInfo_MetaData), NewProp_DuplicationInfo_MetaData) }; // 1241805104
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNode_GetVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_GetVariable_Statics::NewProp_VariableDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_GetVariable_Statics::NewProp_DuplicationInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_GetVariable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusNode_GetVariable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusNode,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_GetVariable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusNode_GetVariable_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UOptimusValueProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_GetVariable, IOptimusValueProvider), false },  // 2907783890
	{ Z_Construct_UClass_UOptimusPinMutabilityDefiner_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_GetVariable, IOptimusPinMutabilityDefiner), false },  // 3934412691
	{ Z_Construct_UClass_UOptimusNonCollapsibleNode_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_GetVariable, IOptimusNonCollapsibleNode), false },  // 335131968
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_GetVariable_Statics::ClassParams = {
	&UOptimusNode_GetVariable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusNode_GetVariable_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_GetVariable_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x010000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_GetVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNode_GetVariable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusNode_GetVariable()
{
	if (!Z_Registration_Info_UClass_UOptimusNode_GetVariable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_GetVariable.OuterSingleton, Z_Construct_UClass_UOptimusNode_GetVariable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusNode_GetVariable.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_GetVariable>()
{
	return UOptimusNode_GetVariable::StaticClass();
}
UOptimusNode_GetVariable::UOptimusNode_GetVariable() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_GetVariable);
UOptimusNode_GetVariable::~UOptimusNode_GetVariable() {}
// End Class UOptimusNode_GetVariable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GetVariable_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOptimusNode_GetVariable_DuplicationInfo::StaticStruct, Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::NewStructOps, TEXT("OptimusNode_GetVariable_DuplicationInfo"), &Z_Registration_Info_UScriptStruct_OptimusNode_GetVariable_DuplicationInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNode_GetVariable_DuplicationInfo), 1241805104U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode_GetVariable, UOptimusNode_GetVariable::StaticClass, TEXT("UOptimusNode_GetVariable"), &Z_Registration_Info_UClass_UOptimusNode_GetVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_GetVariable), 1358044499U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GetVariable_h_3011939961(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GetVariable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GetVariable_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GetVariable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GetVariable_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
