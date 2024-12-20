// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioWidgets/Public/SAudioRadialSlider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAudioRadialSlider() {}

// Begin Cross Module References
AUDIOWIDGETS_API UEnum* Z_Construct_UEnum_AudioWidgets_EAudioRadialSliderLayout();
UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

// Begin Enum EAudioRadialSliderLayout
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioRadialSliderLayout;
static UEnum* EAudioRadialSliderLayout_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAudioRadialSliderLayout.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAudioRadialSliderLayout.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioRadialSliderLayout, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("EAudioRadialSliderLayout"));
	}
	return Z_Registration_Info_UEnum_EAudioRadialSliderLayout.OuterSingleton;
}
template<> AUDIOWIDGETS_API UEnum* StaticEnum<EAudioRadialSliderLayout>()
{
	return EAudioRadialSliderLayout_StaticEnum();
}
struct Z_Construct_UEnum_AudioWidgets_EAudioRadialSliderLayout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Layout_LabelBottom.Comment", "/** Label below radial slider. */" },
		{ "Layout_LabelBottom.DisplayName", "Label Bottom" },
		{ "Layout_LabelBottom.Name", "Layout_LabelBottom" },
		{ "Layout_LabelBottom.ToolTip", "Label below radial slider." },
		{ "Layout_LabelCenter.Comment", "/** Label in the center of the radial slider. */" },
		{ "Layout_LabelCenter.DisplayName", "Label Center" },
		{ "Layout_LabelCenter.Name", "Layout_LabelCenter" },
		{ "Layout_LabelCenter.ToolTip", "Label in the center of the radial slider." },
		{ "Layout_LabelTop.Comment", "/** Label above radial slider. */" },
		{ "Layout_LabelTop.DisplayName", "Label Top" },
		{ "Layout_LabelTop.Name", "Layout_LabelTop" },
		{ "Layout_LabelTop.ToolTip", "Label above radial slider." },
		{ "ModuleRelativePath", "Public/SAudioRadialSlider.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Layout_LabelTop", (int64)Layout_LabelTop },
		{ "Layout_LabelCenter", (int64)Layout_LabelCenter },
		{ "Layout_LabelBottom", (int64)Layout_LabelBottom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioWidgets_EAudioRadialSliderLayout_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AudioWidgets,
	nullptr,
	"EAudioRadialSliderLayout",
	"EAudioRadialSliderLayout",
	Z_Construct_UEnum_AudioWidgets_EAudioRadialSliderLayout_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EAudioRadialSliderLayout_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EAudioRadialSliderLayout_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AudioWidgets_EAudioRadialSliderLayout_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AudioWidgets_EAudioRadialSliderLayout()
{
	if (!Z_Registration_Info_UEnum_EAudioRadialSliderLayout.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioRadialSliderLayout.InnerSingleton, Z_Construct_UEnum_AudioWidgets_EAudioRadialSliderLayout_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAudioRadialSliderLayout.InnerSingleton;
}
// End Enum EAudioRadialSliderLayout

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SAudioRadialSlider_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAudioRadialSliderLayout_StaticEnum, TEXT("EAudioRadialSliderLayout"), &Z_Registration_Info_UEnum_EAudioRadialSliderLayout, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1061551621U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SAudioRadialSlider_h_2828917187(TEXT("/Script/AudioWidgets"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SAudioRadialSlider_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SAudioRadialSlider_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
