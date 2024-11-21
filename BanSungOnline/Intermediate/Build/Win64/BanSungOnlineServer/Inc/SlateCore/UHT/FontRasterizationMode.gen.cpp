// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/SlateCore/Public/Fonts/FontRasterizationMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFontRasterizationMode() {}

// Begin Cross Module References
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFontRasterizationMode();
UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References

// Begin Enum EFontRasterizationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFontRasterizationMode;
static UEnum* EFontRasterizationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFontRasterizationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFontRasterizationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EFontRasterizationMode, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EFontRasterizationMode"));
	}
	return Z_Registration_Info_UEnum_EFontRasterizationMode.OuterSingleton;
}
template<> SLATECORE_API UEnum* StaticEnum<EFontRasterizationMode>()
{
	return EFontRasterizationMode_StaticEnum();
}
struct Z_Construct_UEnum_SlateCore_EFontRasterizationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitmap.Comment", "/** Glyphs are rasterized directly into alpha mask bitmaps per size and skew. */" },
		{ "Bitmap.Name", "EFontRasterizationMode::Bitmap" },
		{ "Bitmap.ToolTip", "Glyphs are rasterized directly into alpha mask bitmaps per size and skew." },
		{ "Comment", "/** Enumerates supported font rasterization modes. */" },
		{ "ModuleRelativePath", "Public/Fonts/FontRasterizationMode.h" },
		{ "Msdf.Comment", "/** Glyphs are rasterized into multi-channel signed distance fields, which are size and skew agnostic. */" },
		{ "Msdf.DisplayName", "Multi-Channel Distance Field" },
		{ "Msdf.Name", "EFontRasterizationMode::Msdf" },
		{ "Msdf.ToolTip", "Glyphs are rasterized into multi-channel signed distance fields, which are size and skew agnostic." },
		{ "Sdf.Comment", "/** Glyphs are rasterized into single-channel signed distance fields, which are size and skew agnostic. More memory efficient but corners may appear rounded. */" },
		{ "Sdf.DisplayName", "Signed Distance Field" },
		{ "Sdf.Name", "EFontRasterizationMode::Sdf" },
		{ "Sdf.ToolTip", "Glyphs are rasterized into single-channel signed distance fields, which are size and skew agnostic. More memory efficient but corners may appear rounded." },
		{ "SdfApproximation.Comment", "/** Glyphs are rasterized into approximate distance fields, which are size and skew agnostic. More memory and computationally efficient but lower quality. */" },
		{ "SdfApproximation.DisplayName", "Approximate Signed Distance Field (fast)" },
		{ "SdfApproximation.Name", "EFontRasterizationMode::SdfApproximation" },
		{ "SdfApproximation.ToolTip", "Glyphs are rasterized into approximate distance fields, which are size and skew agnostic. More memory and computationally efficient but lower quality." },
		{ "ToolTip", "Enumerates supported font rasterization modes." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFontRasterizationMode::Bitmap", (int64)EFontRasterizationMode::Bitmap },
		{ "EFontRasterizationMode::Msdf", (int64)EFontRasterizationMode::Msdf },
		{ "EFontRasterizationMode::Sdf", (int64)EFontRasterizationMode::Sdf },
		{ "EFontRasterizationMode::SdfApproximation", (int64)EFontRasterizationMode::SdfApproximation },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_EFontRasterizationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
	nullptr,
	"EFontRasterizationMode",
	"EFontRasterizationMode",
	Z_Construct_UEnum_SlateCore_EFontRasterizationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EFontRasterizationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EFontRasterizationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SlateCore_EFontRasterizationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SlateCore_EFontRasterizationMode()
{
	if (!Z_Registration_Info_UEnum_EFontRasterizationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFontRasterizationMode.InnerSingleton, Z_Construct_UEnum_SlateCore_EFontRasterizationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFontRasterizationMode.InnerSingleton;
}
// End Enum EFontRasterizationMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontRasterizationMode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFontRasterizationMode_StaticEnum, TEXT("EFontRasterizationMode"), &Z_Registration_Info_UEnum_EFontRasterizationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2700192895U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontRasterizationMode_h_953954989(TEXT("/Script/SlateCore"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontRasterizationMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontRasterizationMode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
