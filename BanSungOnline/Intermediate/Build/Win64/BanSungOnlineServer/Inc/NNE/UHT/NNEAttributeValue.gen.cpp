// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NNE/Internal/NNEAttributeValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNEAttributeValue() {}

// Begin Cross Module References
NNE_API UEnum* Z_Construct_UEnum_NNE_ENNEAttributeDataType();
NNE_API UScriptStruct* Z_Construct_UScriptStruct_FNNEAttributeValue();
UPackage* Z_Construct_UPackage__Script_NNE();
// End Cross Module References

// Begin ScriptStruct FNNEAttributeValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NNEAttributeValue;
class UScriptStruct* FNNEAttributeValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NNEAttributeValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NNEAttributeValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNNEAttributeValue, (UObject*)Z_Construct_UPackage__Script_NNE(), TEXT("NNEAttributeValue"));
	}
	return Z_Registration_Info_UScriptStruct_NNEAttributeValue.OuterSingleton;
}
template<> NNE_API UScriptStruct* StaticStruct<FNNEAttributeValue>()
{
	return FNNEAttributeValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNNEAttributeValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/NNEAttributeValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/NNEAttributeValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/NNEAttributeValue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNNEAttributeValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNNEAttributeValue_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNNEAttributeValue_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNNEAttributeValue, Type), Z_Construct_UEnum_NNE_ENNEAttributeDataType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1151655636
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNNEAttributeValue_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNNEAttributeValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNNEAttributeValue, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNNEAttributeValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEAttributeValue_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEAttributeValue_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEAttributeValue_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEAttributeValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEAttributeValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNNEAttributeValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NNE,
	nullptr,
	&NewStructOps,
	"NNEAttributeValue",
	Z_Construct_UScriptStruct_FNNEAttributeValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEAttributeValue_Statics::PropPointers),
	sizeof(FNNEAttributeValue),
	alignof(FNNEAttributeValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEAttributeValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNNEAttributeValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNNEAttributeValue()
{
	if (!Z_Registration_Info_UScriptStruct_NNEAttributeValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NNEAttributeValue.InnerSingleton, Z_Construct_UScriptStruct_FNNEAttributeValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NNEAttributeValue.InnerSingleton;
}
// End ScriptStruct FNNEAttributeValue

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Internal_NNEAttributeValue_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNNEAttributeValue::StaticStruct, Z_Construct_UScriptStruct_FNNEAttributeValue_Statics::NewStructOps, TEXT("NNEAttributeValue"), &Z_Registration_Info_UScriptStruct_NNEAttributeValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNNEAttributeValue), 1421384106U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Internal_NNEAttributeValue_h_1944903026(TEXT("/Script/NNE"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Internal_NNEAttributeValue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Internal_NNEAttributeValue_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
