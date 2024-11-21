// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/OptimusVariableDescription.h"
#include "ComputeFramework/Public/ComputeFramework/ShaderParamTypeDefinition.h"
#include "OptimusCore/Public/OptimusDataType.h"
#include "OptimusCore/Public/OptimusValueContainerStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusVariableDescription() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FShaderValueContainer();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusValueContainer_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusVariableDescription();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusVariableDescription_NoRegister();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataTypeRef();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusValueContainerStruct();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin ScriptStruct FOptimusVariableMetaDataEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusVariableMetaDataEntry;
class UScriptStruct* FOptimusVariableMetaDataEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusVariableMetaDataEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusVariableMetaDataEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusVariableMetaDataEntry"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusVariableMetaDataEntry.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusVariableMetaDataEntry>()
{
	return FOptimusVariableMetaDataEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptimusVariableDescription.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "VariableMetaDataEntry" },
		{ "Comment", "/** Name of metadata key */" },
		{ "ModuleRelativePath", "Public/OptimusVariableDescription.h" },
		{ "ToolTip", "Name of metadata key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "VariableMetaDataEntry" },
		{ "Comment", "/** Name of metadata value */" },
		{ "ModuleRelativePath", "Public/OptimusVariableDescription.h" },
		{ "ToolTip", "Name of metadata value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusVariableMetaDataEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusVariableMetaDataEntry, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusVariableMetaDataEntry, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusVariableMetaDataEntry",
	Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::PropPointers),
	sizeof(FOptimusVariableMetaDataEntry),
	alignof(FOptimusVariableMetaDataEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusVariableMetaDataEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusVariableMetaDataEntry.InnerSingleton, Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusVariableMetaDataEntry.InnerSingleton;
}
// End ScriptStruct FOptimusVariableMetaDataEntry

// Begin Class UOptimusVariableDescription
void UOptimusVariableDescription::StaticRegisterNativesUOptimusVariableDescription()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusVariableDescription);
UClass* Z_Construct_UClass_UOptimusVariableDescription_NoRegister()
{
	return UOptimusVariableDescription::StaticClass();
}
struct Z_Construct_UClass_UOptimusVariableDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OptimusVariableDescription.h" },
		{ "ModuleRelativePath", "Public/OptimusVariableDescription.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "Comment", "/** An identifier that uniquely identifies this variable */" },
		{ "ModuleRelativePath", "Public/OptimusVariableDescription.h" },
		{ "ToolTip", "An identifier that uniquely identifies this variable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[] = {
		{ "Category", "VariableDefinition" },
		{ "Comment", "/** Name of the variable */" },
		{ "ModuleRelativePath", "Public/OptimusVariableDescription.h" },
		{ "ToolTip", "Name of the variable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[] = {
		{ "Category", "VariableDefinition" },
		{ "Comment", "/** The data type of the variable */" },
		{ "ModuleRelativePath", "Public/OptimusVariableDescription.h" },
		{ "ToolTip", "The data type of the variable" },
		{ "UseInProperty", "" },
		{ "UseInVariable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValueStruct_MetaData[] = {
		{ "Category", "VariableDefinition" },
		{ "Comment", "/** The default value for the variable. */" },
		{ "ModuleRelativePath", "Public/OptimusVariableDescription.h" },
		{ "ToolTip", "The default value for the variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedShaderValue_MetaData[] = {
		{ "Comment", "/**\x09Runtime container for variable values in a deformer instance*/" },
		{ "ModuleRelativePath", "Public/OptimusVariableDescription.h" },
		{ "ToolTip", "Runtime container for variable values in a deformer instance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueData_MetaData[] = {
		{ "Comment", "// Deprecated \n" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use CachedShaderValue instead" },
		{ "ModuleRelativePath", "Public/OptimusVariableDescription.h" },
		{ "ToolTip", "Deprecated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Comment", "// Deprecated \n" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "use DefaultValueStruct instead" },
		{ "ModuleRelativePath", "Public/OptimusVariableDescription.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValueStruct;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedShaderValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ValueData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ValueData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusVariableDescription>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusVariableDescription, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusVariableDescription, VariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableName_MetaData), NewProp_VariableName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusVariableDescription, DataType), Z_Construct_UScriptStruct_FOptimusDataTypeRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataType_MetaData), NewProp_DataType_MetaData) }; // 1626052194
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_DefaultValueStruct = { "DefaultValueStruct", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusVariableDescription, DefaultValueStruct), Z_Construct_UScriptStruct_FOptimusValueContainerStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValueStruct_MetaData), NewProp_DefaultValueStruct_MetaData) }; // 2317148538
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_CachedShaderValue = { "CachedShaderValue", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusVariableDescription, CachedShaderValue), Z_Construct_UScriptStruct_FShaderValueContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedShaderValue_MetaData), NewProp_CachedShaderValue_MetaData) }; // 1837131788
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_ValueData_Inner = { "ValueData", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_ValueData = { "ValueData", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusVariableDescription, ValueData_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueData_MetaData), NewProp_ValueData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0144000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusVariableDescription, DefaultValue_DEPRECATED), Z_Construct_UClass_UOptimusValueContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusVariableDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_Guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_DefaultValueStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_CachedShaderValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_ValueData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_ValueData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusVariableDescription_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusVariableDescription_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusVariableDescription_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusVariableDescription_Statics::ClassParams = {
	&UOptimusVariableDescription::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusVariableDescription_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusVariableDescription_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusVariableDescription_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusVariableDescription_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusVariableDescription()
{
	if (!Z_Registration_Info_UClass_UOptimusVariableDescription.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusVariableDescription.OuterSingleton, Z_Construct_UClass_UOptimusVariableDescription_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusVariableDescription.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusVariableDescription>()
{
	return UOptimusVariableDescription::StaticClass();
}
UOptimusVariableDescription::UOptimusVariableDescription(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusVariableDescription);
UOptimusVariableDescription::~UOptimusVariableDescription() {}
// End Class UOptimusVariableDescription

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOptimusVariableMetaDataEntry::StaticStruct, Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::NewStructOps, TEXT("OptimusVariableMetaDataEntry"), &Z_Registration_Info_UScriptStruct_OptimusVariableMetaDataEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusVariableMetaDataEntry), 4213292675U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusVariableDescription, UOptimusVariableDescription::StaticClass, TEXT("UOptimusVariableDescription"), &Z_Registration_Info_UClass_UOptimusVariableDescription, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusVariableDescription), 2157157254U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_886469739(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
