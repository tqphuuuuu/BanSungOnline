// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraGPUSortInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraGPUSortInfo() {}

// Begin Cross Module References
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSortMode();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENiagaraSortMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraSortMode;
static UEnum* ENiagaraSortMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraSortMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraSortMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSortMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraSortMode"));
	}
	return Z_Registration_Info_UEnum_ENiagaraSortMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraSortMode>()
{
	return ENiagaraSortMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraSortMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CustomAscending.Comment", "/**\n\x09Sort according to particles CustomSortingBinding (defaults to Particles.NormalizedAge).\n\x09Lower values will be sorted before higher values, i.e. 1 would draw on top of 0.\n\x09*/" },
		{ "CustomAscending.Name", "ENiagaraSortMode::CustomAscending" },
		{ "CustomAscending.ToolTip", "Sort according to particles CustomSortingBinding (defaults to Particles.NormalizedAge).\nLower values will be sorted before higher values, i.e. 1 would draw on top of 0." },
		{ "CustomDecending.Comment", "/**\n\x09Sort according to particles CustomSortingBinding (defaults to Particles.NormalizedAge).\n\x09Higher values will be sorted before lower values, i.e. 0 would draw on top of 1.\n\x09*/" },
		{ "CustomDecending.Name", "ENiagaraSortMode::CustomDecending" },
		{ "CustomDecending.ToolTip", "Sort according to particles CustomSortingBinding (defaults to Particles.NormalizedAge).\nHigher values will be sorted before lower values, i.e. 0 would draw on top of 1." },
		{ "ModuleRelativePath", "Classes/NiagaraGPUSortInfo.h" },
		{ "None.Comment", "/** Perform no additional sorting prior to rendering.*/" },
		{ "None.Name", "ENiagaraSortMode::None" },
		{ "None.ToolTip", "Perform no additional sorting prior to rendering." },
		{ "ViewDepth.Comment", "/** Sort by depth to the camera's near plane.*/" },
		{ "ViewDepth.Name", "ENiagaraSortMode::ViewDepth" },
		{ "ViewDepth.ToolTip", "Sort by depth to the camera's near plane." },
		{ "ViewDistance.Comment", "/** Sort by distance to the camera's origin.*/" },
		{ "ViewDistance.Name", "ENiagaraSortMode::ViewDistance" },
		{ "ViewDistance.ToolTip", "Sort by distance to the camera's origin." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraSortMode::None", (int64)ENiagaraSortMode::None },
		{ "ENiagaraSortMode::ViewDepth", (int64)ENiagaraSortMode::ViewDepth },
		{ "ENiagaraSortMode::ViewDistance", (int64)ENiagaraSortMode::ViewDistance },
		{ "ENiagaraSortMode::CustomAscending", (int64)ENiagaraSortMode::CustomAscending },
		{ "ENiagaraSortMode::CustomDecending", (int64)ENiagaraSortMode::CustomDecending },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraSortMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraSortMode",
	"ENiagaraSortMode",
	Z_Construct_UEnum_Niagara_ENiagaraSortMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraSortMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraSortMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraSortMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraSortMode()
{
	if (!Z_Registration_Info_UEnum_ENiagaraSortMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraSortMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraSortMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraSortMode.InnerSingleton;
}
// End Enum ENiagaraSortMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraGPUSortInfo_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENiagaraSortMode_StaticEnum, TEXT("ENiagaraSortMode"), &Z_Registration_Info_UEnum_ENiagaraSortMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1350096376U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraGPUSortInfo_h_1522434206(TEXT("/Script/Niagara"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraGPUSortInfo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraGPUSortInfo_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
