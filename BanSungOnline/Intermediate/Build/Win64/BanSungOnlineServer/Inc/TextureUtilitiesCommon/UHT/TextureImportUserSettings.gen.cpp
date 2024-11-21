// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TextureUtilitiesCommon/Public/TextureImportUserSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureImportUserSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
TEXTUREUTILITIESCOMMON_API UClass* Z_Construct_UClass_UTextureImportUserSettings();
TEXTUREUTILITIESCOMMON_API UClass* Z_Construct_UClass_UTextureImportUserSettings_NoRegister();
TEXTUREUTILITIESCOMMON_API UEnum* Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportPNGInfill();
UPackage* Z_Construct_UPackage__Script_TextureUtilitiesCommon();
// End Cross Module References

// Begin Class UTextureImportUserSettings
void UTextureImportUserSettings::StaticRegisterNativesUTextureImportUserSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureImportUserSettings);
UClass* Z_Construct_UClass_UTextureImportUserSettings_NoRegister()
{
	return UTextureImportUserSettings::StaticClass();
}
struct Z_Construct_UClass_UTextureImportUserSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Texture Import" },
		{ "IncludePath", "TextureImportUserSettings.h" },
		{ "ModuleRelativePath", "Public/TextureImportUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PNGInfill_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "DisplayName", "When to infill RGB in transparent white PNG" },
		{ "ModuleRelativePath", "Public/TextureImportUserSettings.h" },
		{ "ToolTip", "Whether to perform infill only for binary transparency, always, or never. If set to 'default', uses global project setting." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PNGInfill_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PNGInfill;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureImportUserSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureImportUserSettings_Statics::NewProp_PNGInfill_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextureImportUserSettings_Statics::NewProp_PNGInfill = { "PNGInfill", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureImportUserSettings, PNGInfill), Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportPNGInfill, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PNGInfill_MetaData), NewProp_PNGInfill_MetaData) }; // 2405453873
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureImportUserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureImportUserSettings_Statics::NewProp_PNGInfill_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureImportUserSettings_Statics::NewProp_PNGInfill,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureImportUserSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTextureImportUserSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_TextureUtilitiesCommon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureImportUserSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureImportUserSettings_Statics::ClassParams = {
	&UTextureImportUserSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTextureImportUserSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTextureImportUserSettings_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureImportUserSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextureImportUserSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTextureImportUserSettings()
{
	if (!Z_Registration_Info_UClass_UTextureImportUserSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureImportUserSettings.OuterSingleton, Z_Construct_UClass_UTextureImportUserSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextureImportUserSettings.OuterSingleton;
}
template<> TEXTUREUTILITIESCOMMON_API UClass* StaticClass<UTextureImportUserSettings>()
{
	return UTextureImportUserSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureImportUserSettings);
UTextureImportUserSettings::~UTextureImportUserSettings() {}
// End Class UTextureImportUserSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportUserSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTextureImportUserSettings, UTextureImportUserSettings::StaticClass, TEXT("UTextureImportUserSettings"), &Z_Registration_Info_UClass_UTextureImportUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureImportUserSettings), 2775678910U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportUserSettings_h_71899972(TEXT("/Script/TextureUtilitiesCommon"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportUserSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportUserSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
