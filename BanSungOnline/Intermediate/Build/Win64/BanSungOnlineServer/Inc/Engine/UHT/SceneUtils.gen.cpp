// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/SceneUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneUtils() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAntiAliasingMethod();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EAntiAliasingMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAntiAliasingMethod;
static UEnum* EAntiAliasingMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAntiAliasingMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAntiAliasingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAntiAliasingMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAntiAliasingMethod"));
	}
	return Z_Registration_Info_UEnum_EAntiAliasingMethod.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EAntiAliasingMethod>()
{
	return EAntiAliasingMethod_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EAntiAliasingMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AAM_FXAA.DisplayName", "Fast Approximate Anti-Aliasing (FXAA)" },
		{ "AAM_FXAA.Name", "AAM_FXAA" },
		{ "AAM_MAX.Name", "AAM_MAX" },
		{ "AAM_MSAA.Comment", "/** Only supported with forward shading.  MSAA sample count is controlled by r.MSAACount. */" },
		{ "AAM_MSAA.DisplayName", "Multisample Anti-Aliasing (MSAA)" },
		{ "AAM_MSAA.Name", "AAM_MSAA" },
		{ "AAM_MSAA.ToolTip", "Only supported with forward shading.  MSAA sample count is controlled by r.MSAACount." },
		{ "AAM_None.DisplayName", "None" },
		{ "AAM_None.Name", "AAM_None" },
		{ "AAM_TemporalAA.DisplayName", "Temporal Anti-Aliasing (TAA)" },
		{ "AAM_TemporalAA.Name", "AAM_TemporalAA" },
		{ "AAM_TSR.DisplayName", "Temporal Super-Resolution (TSR)" },
		{ "AAM_TSR.Name", "AAM_TSR" },
		{ "Comment", "/** Used by rendering project settings. */" },
		{ "ModuleRelativePath", "Public/SceneUtils.h" },
		{ "ToolTip", "Used by rendering project settings." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AAM_None", (int64)AAM_None },
		{ "AAM_FXAA", (int64)AAM_FXAA },
		{ "AAM_TemporalAA", (int64)AAM_TemporalAA },
		{ "AAM_MSAA", (int64)AAM_MSAA },
		{ "AAM_TSR", (int64)AAM_TSR },
		{ "AAM_MAX", (int64)AAM_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAntiAliasingMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EAntiAliasingMethod",
	"EAntiAliasingMethod",
	Z_Construct_UEnum_Engine_EAntiAliasingMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAntiAliasingMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAntiAliasingMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EAntiAliasingMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EAntiAliasingMethod()
{
	if (!Z_Registration_Info_UEnum_EAntiAliasingMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAntiAliasingMethod.InnerSingleton, Z_Construct_UEnum_Engine_EAntiAliasingMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAntiAliasingMethod.InnerSingleton;
}
// End Enum EAntiAliasingMethod

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SceneUtils_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAntiAliasingMethod_StaticEnum, TEXT("EAntiAliasingMethod"), &Z_Registration_Info_UEnum_EAntiAliasingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1912678732U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SceneUtils_h_435890431(TEXT("/Script/Engine"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SceneUtils_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SceneUtils_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
