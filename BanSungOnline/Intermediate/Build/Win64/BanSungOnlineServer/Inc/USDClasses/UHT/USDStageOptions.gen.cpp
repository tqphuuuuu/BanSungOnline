// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDClasses/Public/USDStageOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDStageOptions() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_USDClasses();
USDCLASSES_API UEnum* Z_Construct_UEnum_USDClasses_EUsdUpAxis();
USDCLASSES_API UScriptStruct* Z_Construct_UScriptStruct_FUsdStageOptions();
// End Cross Module References

// Begin Enum EUsdUpAxis
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUsdUpAxis;
static UEnum* EUsdUpAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUsdUpAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUsdUpAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_USDClasses_EUsdUpAxis, (UObject*)Z_Construct_UPackage__Script_USDClasses(), TEXT("EUsdUpAxis"));
	}
	return Z_Registration_Info_UEnum_EUsdUpAxis.OuterSingleton;
}
template<> USDCLASSES_API UEnum* StaticEnum<EUsdUpAxis>()
{
	return EUsdUpAxis_StaticEnum();
}
struct Z_Construct_UEnum_USDClasses_EUsdUpAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/USDStageOptions.h" },
		{ "YAxis.Name", "EUsdUpAxis::YAxis" },
		{ "ZAxis.Name", "EUsdUpAxis::ZAxis" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUsdUpAxis::YAxis", (int64)EUsdUpAxis::YAxis },
		{ "EUsdUpAxis::ZAxis", (int64)EUsdUpAxis::ZAxis },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_USDClasses_EUsdUpAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_USDClasses,
	nullptr,
	"EUsdUpAxis",
	"EUsdUpAxis",
	Z_Construct_UEnum_USDClasses_EUsdUpAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_USDClasses_EUsdUpAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_USDClasses_EUsdUpAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_USDClasses_EUsdUpAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_USDClasses_EUsdUpAxis()
{
	if (!Z_Registration_Info_UEnum_EUsdUpAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUsdUpAxis.InnerSingleton, Z_Construct_UEnum_USDClasses_EUsdUpAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUsdUpAxis.InnerSingleton;
}
// End Enum EUsdUpAxis

// Begin ScriptStruct FUsdStageOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UsdStageOptions;
class UScriptStruct* FUsdStageOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UsdStageOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UsdStageOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUsdStageOptions, (UObject*)Z_Construct_UPackage__Script_USDClasses(), TEXT("UsdStageOptions"));
	}
	return Z_Registration_Info_UScriptStruct_UsdStageOptions.OuterSingleton;
}
template<> USDCLASSES_API UScriptStruct* StaticStruct<FUsdStageOptions>()
{
	return FUsdStageOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUsdStageOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/USDStageOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetersPerUnit_MetaData[] = {
		{ "Category", "Stage options" },
		{ "Comment", "/** MetersPerUnit to use for the stage. Defaults to 0.01 (i.e. 1cm per unit, which equals UE units) */" },
		{ "ModuleRelativePath", "Public/USDStageOptions.h" },
		{ "ToolTip", "MetersPerUnit to use for the stage. Defaults to 0.01 (i.e. 1cm per unit, which equals UE units)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpAxis_MetaData[] = {
		{ "Category", "Stage options" },
		{ "Comment", "/** UpAxis to use for the stage. Defaults to ZAxis, which equals the UE convention */" },
		{ "ModuleRelativePath", "Public/USDStageOptions.h" },
		{ "ToolTip", "UpAxis to use for the stage. Defaults to ZAxis, which equals the UE convention" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MetersPerUnit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUsdStageOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUsdStageOptions_Statics::NewProp_MetersPerUnit = { "MetersPerUnit", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUsdStageOptions, MetersPerUnit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetersPerUnit_MetaData), NewProp_MetersPerUnit_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUsdStageOptions_Statics::NewProp_UpAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUsdStageOptions_Statics::NewProp_UpAxis = { "UpAxis", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUsdStageOptions, UpAxis), Z_Construct_UEnum_USDClasses_EUsdUpAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpAxis_MetaData), NewProp_UpAxis_MetaData) }; // 1670887100
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUsdStageOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdStageOptions_Statics::NewProp_MetersPerUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdStageOptions_Statics::NewProp_UpAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdStageOptions_Statics::NewProp_UpAxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdStageOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUsdStageOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
	nullptr,
	&NewStructOps,
	"UsdStageOptions",
	Z_Construct_UScriptStruct_FUsdStageOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdStageOptions_Statics::PropPointers),
	sizeof(FUsdStageOptions),
	alignof(FUsdStageOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdStageOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUsdStageOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUsdStageOptions()
{
	if (!Z_Registration_Info_UScriptStruct_UsdStageOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UsdStageOptions.InnerSingleton, Z_Construct_UScriptStruct_FUsdStageOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UsdStageOptions.InnerSingleton;
}
// End ScriptStruct FUsdStageOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDStageOptions_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EUsdUpAxis_StaticEnum, TEXT("EUsdUpAxis"), &Z_Registration_Info_UEnum_EUsdUpAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1670887100U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUsdStageOptions::StaticStruct, Z_Construct_UScriptStruct_FUsdStageOptions_Statics::NewStructOps, TEXT("UsdStageOptions"), &Z_Registration_Info_UScriptStruct_UsdStageOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUsdStageOptions), 4013887880U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDStageOptions_h_560607236(TEXT("/Script/USDClasses"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDStageOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDStageOptions_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDStageOptions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDStageOptions_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
