// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NNEDenoiser/Public/NNEDenoiserResourceName.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNEDenoiserResourceName() {}

// Begin Cross Module References
NNEDENOISER_API UEnum* Z_Construct_UEnum_NNEDenoiser_EResourceName();
UPackage* Z_Construct_UPackage__Script_NNEDenoiser();
// End Cross Module References

// Begin Enum EResourceName
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EResourceName;
static UEnum* EResourceName_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EResourceName.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EResourceName.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NNEDenoiser_EResourceName, (UObject*)Z_Construct_UPackage__Script_NNEDenoiser(), TEXT("EResourceName"));
	}
	return Z_Registration_Info_UEnum_EResourceName.OuterSingleton;
}
template<> NNEDENOISER_API UEnum* StaticEnum<EResourceName>()
{
	return EResourceName_StaticEnum();
}
struct Z_Construct_UEnum_NNEDenoiser_EResourceName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Albedo.Name", "EResourceName::Albedo" },
		{ "Color.Name", "EResourceName::Color" },
		{ "Comment", "/** An enum to represent resource names used for input and output mapping */" },
		{ "Flow.Name", "EResourceName::Flow" },
		{ "ModuleRelativePath", "Public/NNEDenoiserResourceName.h" },
		{ "Normal.Name", "EResourceName::Normal" },
		{ "Output.Name", "EResourceName::Output" },
		{ "ToolTip", "An enum to represent resource names used for input and output mapping" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EResourceName::Color", (int64)EResourceName::Color },
		{ "EResourceName::Albedo", (int64)EResourceName::Albedo },
		{ "EResourceName::Normal", (int64)EResourceName::Normal },
		{ "EResourceName::Flow", (int64)EResourceName::Flow },
		{ "EResourceName::Output", (int64)EResourceName::Output },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NNEDenoiser_EResourceName_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NNEDenoiser,
	nullptr,
	"EResourceName",
	"EResourceName",
	Z_Construct_UEnum_NNEDenoiser_EResourceName_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NNEDenoiser_EResourceName_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NNEDenoiser_EResourceName_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NNEDenoiser_EResourceName_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NNEDenoiser_EResourceName()
{
	if (!Z_Registration_Info_UEnum_EResourceName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EResourceName.InnerSingleton, Z_Construct_UEnum_NNEDenoiser_EResourceName_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EResourceName.InnerSingleton;
}
// End Enum EResourceName

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserResourceName_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EResourceName_StaticEnum, TEXT("EResourceName"), &Z_Registration_Info_UEnum_EResourceName, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4221102090U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserResourceName_h_1904117571(TEXT("/Script/NNEDenoiser"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserResourceName_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserResourceName_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
