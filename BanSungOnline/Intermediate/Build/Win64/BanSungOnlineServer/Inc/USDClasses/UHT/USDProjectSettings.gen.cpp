// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDClasses/Public/USDProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDProjectSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
UPackage* Z_Construct_UPackage__Script_USDClasses();
USDCLASSES_API UClass* Z_Construct_UClass_UUsdProjectSettings();
USDCLASSES_API UClass* Z_Construct_UClass_UUsdProjectSettings_NoRegister();
USDCLASSES_API UEnum* Z_Construct_UEnum_USDClasses_EUsdEditInInstanceBehavior();
USDCLASSES_API UEnum* Z_Construct_UEnum_USDClasses_EUsdSaveDialogBehavior();
// End Cross Module References

// Begin Enum EUsdSaveDialogBehavior
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUsdSaveDialogBehavior;
static UEnum* EUsdSaveDialogBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUsdSaveDialogBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUsdSaveDialogBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_USDClasses_EUsdSaveDialogBehavior, (UObject*)Z_Construct_UPackage__Script_USDClasses(), TEXT("EUsdSaveDialogBehavior"));
	}
	return Z_Registration_Info_UEnum_EUsdSaveDialogBehavior.OuterSingleton;
}
template<> USDCLASSES_API UEnum* StaticEnum<EUsdSaveDialogBehavior>()
{
	return EUsdSaveDialogBehavior_StaticEnum();
}
struct Z_Construct_UEnum_USDClasses_EUsdSaveDialogBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AlwaysSave.Name", "EUsdSaveDialogBehavior::AlwaysSave" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "NeverSave.Name", "EUsdSaveDialogBehavior::NeverSave" },
		{ "ShowPrompt.Name", "EUsdSaveDialogBehavior::ShowPrompt" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUsdSaveDialogBehavior::NeverSave", (int64)EUsdSaveDialogBehavior::NeverSave },
		{ "EUsdSaveDialogBehavior::AlwaysSave", (int64)EUsdSaveDialogBehavior::AlwaysSave },
		{ "EUsdSaveDialogBehavior::ShowPrompt", (int64)EUsdSaveDialogBehavior::ShowPrompt },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_USDClasses_EUsdSaveDialogBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_USDClasses,
	nullptr,
	"EUsdSaveDialogBehavior",
	"EUsdSaveDialogBehavior",
	Z_Construct_UEnum_USDClasses_EUsdSaveDialogBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_USDClasses_EUsdSaveDialogBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_USDClasses_EUsdSaveDialogBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_USDClasses_EUsdSaveDialogBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_USDClasses_EUsdSaveDialogBehavior()
{
	if (!Z_Registration_Info_UEnum_EUsdSaveDialogBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUsdSaveDialogBehavior.InnerSingleton, Z_Construct_UEnum_USDClasses_EUsdSaveDialogBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUsdSaveDialogBehavior.InnerSingleton;
}
// End Enum EUsdSaveDialogBehavior

// Begin Enum EUsdEditInInstanceBehavior
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUsdEditInInstanceBehavior;
static UEnum* EUsdEditInInstanceBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUsdEditInInstanceBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUsdEditInInstanceBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_USDClasses_EUsdEditInInstanceBehavior, (UObject*)Z_Construct_UPackage__Script_USDClasses(), TEXT("EUsdEditInInstanceBehavior"));
	}
	return Z_Registration_Info_UEnum_EUsdEditInInstanceBehavior.OuterSingleton;
}
template<> USDCLASSES_API UEnum* StaticEnum<EUsdEditInInstanceBehavior>()
{
	return EUsdEditInInstanceBehavior_StaticEnum();
}
struct Z_Construct_UEnum_USDClasses_EUsdEditInInstanceBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Ignore.Name", "EUsdEditInInstanceBehavior::Ignore" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "RemoveInstanceable.Name", "EUsdEditInInstanceBehavior::RemoveInstanceable" },
		{ "ShowPrompt.Name", "EUsdEditInInstanceBehavior::ShowPrompt" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUsdEditInInstanceBehavior::Ignore", (int64)EUsdEditInInstanceBehavior::Ignore },
		{ "EUsdEditInInstanceBehavior::RemoveInstanceable", (int64)EUsdEditInInstanceBehavior::RemoveInstanceable },
		{ "EUsdEditInInstanceBehavior::ShowPrompt", (int64)EUsdEditInInstanceBehavior::ShowPrompt },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_USDClasses_EUsdEditInInstanceBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_USDClasses,
	nullptr,
	"EUsdEditInInstanceBehavior",
	"EUsdEditInInstanceBehavior",
	Z_Construct_UEnum_USDClasses_EUsdEditInInstanceBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_USDClasses_EUsdEditInInstanceBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_USDClasses_EUsdEditInInstanceBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_USDClasses_EUsdEditInInstanceBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_USDClasses_EUsdEditInInstanceBehavior()
{
	if (!Z_Registration_Info_UEnum_EUsdEditInInstanceBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUsdEditInInstanceBehavior.InnerSingleton, Z_Construct_UEnum_USDClasses_EUsdEditInInstanceBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUsdEditInInstanceBehavior.InnerSingleton;
}
// End Enum EUsdEditInInstanceBehavior

// Begin Class UUsdProjectSettings
void UUsdProjectSettings::StaticRegisterNativesUUsdProjectSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdProjectSettings);
UClass* Z_Construct_UClass_UUsdProjectSettings_NoRegister()
{
	return UUsdProjectSettings::StaticClass();
}
struct Z_Construct_UClass_UUsdProjectSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// USDCore and defaultconfig here so this ends up at DefaultUSDCore.ini in the editor, and is sent to the\n// packaged game as well\n" },
		{ "DisplayName", "USDCore" },
		{ "IncludePath", "USDProjectSettings.h" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "USDCore and defaultconfig here so this ends up at DefaultUSDCore.ini in the editor, and is sent to the\npackaged game as well" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalPluginDirectories_MetaData[] = {
		{ "Category", "USD" },
		{ "Comment", "// Additional paths to check for USD plugins.\n//\n// If you want the USD plugins to be included in a packaged game, you must use a relative\n// path to a location within your project directory, and you must also add that same path\n// to the \"Additional Non-Asset Directories To Copy\" Project Packaging setting.\n//\n// For example, this relative path could be used to locate USD plugins in a directory at\n// the root of your project:\n//     ../USD_Plugins\n//\n// The packaging process cannot use an absolute path and will raise an error if given one\n// when it tries to concatenate the game content directory path with an absolute path.\n" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "Additional paths to check for USD plugins.\n\nIf you want the USD plugins to be included in a packaged game, you must use a relative\npath to a location within your project directory, and you must also add that same path\nto the \"Additional Non-Asset Directories To Copy\" Project Packaging setting.\n\nFor example, this relative path could be used to locate USD plugins in a directory at\nthe root of your project:\n    ../USD_Plugins\n\nThe packaging process cannot use an absolute path and will raise an error if given one\nwhen it tries to concatenate the game content directory path with an absolute path." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultResolverSearchPath_MetaData[] = {
		{ "Category", "USD" },
		{ "Comment", "// The directories that will be used as the default search path by USD's default resolver\n// during asset resolution.\n//\n// Each directory in the search path should be an absolute path. If it is not, it will be\n// anchored to the current working directory.\n//\n// Note that the default search path must be set before the first invocation of USD's\n// resolver system, so changing this setting will require a restart of the engine in order\n// for the new setting to take effect.\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "The directories that will be used as the default search path by USD's default resolver\nduring asset resolution.\n\nEach directory in the search path should be an absolute path. If it is not, it will be\nanchored to the current working directory.\n\nNote that the default search path must be set before the first invocation of USD's\nresolver system, so changing this setting will require a restart of the engine in order\nfor the new setting to take effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalMaterialPurposes_MetaData[] = {
		{ "Category", "USD" },
		{ "Comment", "// Material purposes to show on drop-downs in addition to the standard \"preview\" and \"full\"\n" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "Material purposes to show on drop-downs in addition to the standard \"preview\" and \"full\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLogUsdSdkErrors_MetaData[] = {
		{ "Category", "USD" },
		{ "Comment", "// Whether to show on the output log messages, warnings and errors reported directly by the USD SDK\n" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "Whether to show on the output log messages, warnings and errors reported directly by the USD SDK" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAssetCache_MetaData[] = {
		{ "AllowedClasses", "/Script/USDClasses.UsdAssetCache3" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * USD Asset Cache to use for USD Stage Actors that don't have any asset cache specified.\n\x09 * Leave this empty to have each stage actor generate it's on transient cache instead.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "USD Asset Cache to use for USD Stage Actors that don't have any asset cache specified.\nLeave this empty to have each stage actor generate it's on transient cache instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowCreateDefaultAssetCacheDialog_MetaData[] = {
		{ "Category", "USD|Dialogs" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowConfirmationWhenClearingLayers_MetaData[] = {
		{ "Category", "USD|Dialogs" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowConfirmationWhenMutingDirtyLayers_MetaData[] = {
		{ "Category", "USD|Dialogs" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowConfirmationWhenReloadingDirtyLayers_MetaData[] = {
		{ "Category", "USD|Dialogs" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowOverriddenOpinionsWarning_MetaData[] = {
		{ "Category", "USD|Dialogs" },
		{ "Comment", "// Whether to show the warning dialog when authoring opinions that could have no effect on the composed stage\n" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "Whether to show the warning dialog when authoring opinions that could have no effect on the composed stage" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditInInstanceableBehavior_MetaData[] = {
		{ "Category", "USD|Dialogs" },
		{ "Comment", "// Whether to show the warning dialog when authoring opinions inside an instance or instance proxy\n" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "Whether to show the warning dialog when authoring opinions inside an instance or instance proxy" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowWarningOnIncompleteDuplication_MetaData[] = {
		{ "Category", "USD|Dialogs" },
		{ "Comment", "// Whether to show a warning whenever the \"Duplicate All Local Layer Specs\" option is picked, and the duplicated\n// prim has some specs outside the local layer stack that will not be duplicated.\n" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "Whether to show a warning whenever the \"Duplicate All Local Layer Specs\" option is picked, and the duplicated\nprim has some specs outside the local layer stack that will not be duplicated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowTransformOnCameraComponentWarning_MetaData[] = {
		{ "Category", "USD|Dialogs" },
		{ "Comment", "// Whether to show the warning dialog when authoring a transforms directly to a camera component\n" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "Whether to show the warning dialog when authoring a transforms directly to a camera component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowTransformTrackOnCameraComponentWarning_MetaData[] = {
		{ "Category", "USD|Dialogs" },
		{ "Comment", "// Whether to show the warning dialog when authoring a transform track directly to a camera component\n" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "Whether to show the warning dialog when authoring a transform track directly to a camera component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowInheritedVisibilityWarning_MetaData[] = {
		{ "Category", "USD|Dialogs" },
		{ "Comment", "// Whether to show the warning dialog when authoring new visibility tracks from Unreal\n" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "Whether to show the warning dialog when authoring new visibility tracks from Unreal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowSaveLayersDialogWhenSaving_MetaData[] = {
		{ "Category", "USD|Dialogs" },
		{ "Comment", "// Whether to display the pop up dialog asking what to do about dirty USD layers when saving the UE level\n" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "Whether to display the pop up dialog asking what to do about dirty USD layers when saving the UE level" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowSaveLayersDialogWhenClosing_MetaData[] = {
		{ "Category", "USD|Dialogs" },
		{ "Comment", "// Whether to display the pop up dialog asking what to do about dirty USD layers when closing USD stages\n" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "Whether to display the pop up dialog asking what to do about dirty USD layers when closing USD stages" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSoundAttenuation_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundAttenuation" },
		{ "Category", "USD" },
		{ "Comment", "// Note that the below properties being FSoftObjectPath ensure that these assets are cooked into packaged games\n" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "Note that the below properties being FSoftObjectPath ensure that these assets are cooked into packaged games" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceDefaultSVTMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "USD|Reference Materials" },
		{ "Comment", "/**\n\x09 * Material to use when handling .vdb files as Sparse Volume Textures. An instance of this material will be\n\x09 * added to the AHeterogeneousVolume, and will use the parsed SparseVolumeTexture as a texture parameter.\n\x09 * Note that alternatively Volume prims can have material bindings to Unreal materials, and the importer\n\x09 * will prioritize trying to use those as the volumetric materials for the Sparse Volume Textures instead.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "Material to use when handling .vdb files as Sparse Volume Textures. An instance of this material will be\nadded to the AHeterogeneousVolume, and will use the parsed SparseVolumeTexture as a texture parameter.\nNote that alternatively Volume prims can have material bindings to Unreal materials, and the importer\nwill prioritize trying to use those as the volumetric materials for the Sparse Volume Textures instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceModelCardTextureMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "USD|Reference Materials" },
		{ "Comment", "/**\n\x09 * What material to use for UUsdDrawModeComponents with \"Cards\" draw mode and provided textures (corresponding to\n\x09 * UsdGeomModelAPI with the \"cards\" drawMode).\n\x09 * Each face of the card geometry will use a separate texture material instance, and the UTexture2D will be set\n\x09 * as a material parameter named \"Texture\".\n\x09 * You can swap this with your own material, but make sure the replacement material has a \"Texture\" parameter\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "What material to use for UUsdDrawModeComponents with \"Cards\" draw mode and provided textures (corresponding to\nUsdGeomModelAPI with the \"cards\" drawMode).\nEach face of the card geometry will use a separate texture material instance, and the UTexture2D will be set\nas a material parameter named \"Texture\".\nYou can swap this with your own material, but make sure the replacement material has a \"Texture\" parameter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencePreviewSurfaceMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "USD|Reference Materials|UsdPreviewSurface" },
		{ "Comment", "/**\n\x09 * What material to use as reference material when creating material instances from USD materials.\n\x09 * You can swap these with your own materials, but make sure that the replacement materials have parameters with\n\x09 * the same names and types as the ones provided by the default material, otherwise the instances will not have\n\x09 * the parameters filled with values extracted from the USD material when parsing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "What material to use as reference material when creating material instances from USD materials.\nYou can swap these with your own materials, but make sure that the replacement materials have parameters with\nthe same names and types as the ones provided by the default material, otherwise the instances will not have\nthe parameters filled with values extracted from the USD material when parsing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencePreviewSurfaceTranslucentMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "USD|Reference Materials|UsdPreviewSurface" },
		{ "Comment", "/**\n\x09 * What material to use as reference material when creating material instances from USD materials.\n\x09 * You can swap these with your own materials, but make sure that the replacement materials have parameters with\n\x09 * the same names and types as the ones provided by the default material, otherwise the instances will not have\n\x09 * the parameters filled with values extracted from the USD material when parsing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "What material to use as reference material when creating material instances from USD materials.\nYou can swap these with your own materials, but make sure that the replacement materials have parameters with\nthe same names and types as the ones provided by the default material, otherwise the instances will not have\nthe parameters filled with values extracted from the USD material when parsing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencePreviewSurfaceTwoSidedMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "USD|Reference Materials|UsdPreviewSurface" },
		{ "Comment", "/**\n\x09 * What material to use as reference material when creating material instances from USD materials.\n\x09 * You can swap these with your own materials, but make sure that the replacement materials have parameters with\n\x09 * the same names and types as the ones provided by the default material, otherwise the instances will not have\n\x09 * the parameters filled with values extracted from the USD material when parsing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "What material to use as reference material when creating material instances from USD materials.\nYou can swap these with your own materials, but make sure that the replacement materials have parameters with\nthe same names and types as the ones provided by the default material, otherwise the instances will not have\nthe parameters filled with values extracted from the USD material when parsing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencePreviewSurfaceTranslucentTwoSidedMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "USD|Reference Materials|UsdPreviewSurface" },
		{ "Comment", "/**\n\x09 * What material to use as reference material when creating material instances from USD materials.\n\x09 * You can swap these with your own materials, but make sure that the replacement materials have parameters with\n\x09 * the same names and types as the ones provided by the default material, otherwise the instances will not have\n\x09 * the parameters filled with values extracted from the USD material when parsing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "What material to use as reference material when creating material instances from USD materials.\nYou can swap these with your own materials, but make sure that the replacement materials have parameters with\nthe same names and types as the ones provided by the default material, otherwise the instances will not have\nthe parameters filled with values extracted from the USD material when parsing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencePreviewSurfaceVTMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "USD|Reference Materials|UsdPreviewSurface with Virtual Textures" },
		{ "Comment", "/**\n\x09 * What material to use as reference material when creating material instances from USD materials.\n\x09 * You can swap these with your own materials, but make sure that the replacement materials have parameters with\n\x09 * the same names and types as the ones provided by the default material, otherwise the instances will not have\n\x09 * the parameters filled with values extracted from the USD material when parsing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "What material to use as reference material when creating material instances from USD materials.\nYou can swap these with your own materials, but make sure that the replacement materials have parameters with\nthe same names and types as the ones provided by the default material, otherwise the instances will not have\nthe parameters filled with values extracted from the USD material when parsing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencePreviewSurfaceTranslucentVTMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "USD|Reference Materials|UsdPreviewSurface with Virtual Textures" },
		{ "Comment", "/**\n\x09 * What material to use as reference material when creating material instances from USD materials.\n\x09 * You can swap these with your own materials, but make sure that the replacement materials have parameters with\n\x09 * the same names and types as the ones provided by the default material, otherwise the instances will not have\n\x09 * the parameters filled with values extracted from the USD material when parsing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "What material to use as reference material when creating material instances from USD materials.\nYou can swap these with your own materials, but make sure that the replacement materials have parameters with\nthe same names and types as the ones provided by the default material, otherwise the instances will not have\nthe parameters filled with values extracted from the USD material when parsing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencePreviewSurfaceTwoSidedVTMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "USD|Reference Materials|UsdPreviewSurface with Virtual Textures" },
		{ "Comment", "/**\n\x09 * What material to use as reference material when creating material instances from USD materials.\n\x09 * You can swap these with your own materials, but make sure that the replacement materials have parameters with\n\x09 * the same names and types as the ones provided by the default material, otherwise the instances will not have\n\x09 * the parameters filled with values extracted from the USD material when parsing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "What material to use as reference material when creating material instances from USD materials.\nYou can swap these with your own materials, but make sure that the replacement materials have parameters with\nthe same names and types as the ones provided by the default material, otherwise the instances will not have\nthe parameters filled with values extracted from the USD material when parsing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "USD|Reference Materials|UsdPreviewSurface with Virtual Textures" },
		{ "Comment", "/**\n\x09 * What material to use as reference material when creating material instances from USD materials.\n\x09 * You can swap these with your own materials, but make sure that the replacement materials have parameters with\n\x09 * the same names and types as the ones provided by the default material, otherwise the instances will not have\n\x09 * the parameters filled with values extracted from the USD material when parsing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "What material to use as reference material when creating material instances from USD materials.\nYou can swap these with your own materials, but make sure that the replacement materials have parameters with\nthe same names and types as the ones provided by the default material, otherwise the instances will not have\nthe parameters filled with values extracted from the USD material when parsing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceDisplayColorMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "USD|Reference Materials|DisplayColor" },
		{ "Comment", "/**\n\x09 * What material to use as reference material when creating material instances from USD materials.\n\x09 * You can swap these with your own materials, but make sure that the replacement materials have parameters with\n\x09 * the same names and types as the ones provided by the default material, otherwise the instances will not have\n\x09 * the parameters filled with values extracted from the USD material when parsing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "What material to use as reference material when creating material instances from USD materials.\nYou can swap these with your own materials, but make sure that the replacement materials have parameters with\nthe same names and types as the ones provided by the default material, otherwise the instances will not have\nthe parameters filled with values extracted from the USD material when parsing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceDisplayColorAndOpacityMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "USD|Reference Materials|DisplayColor" },
		{ "Comment", "/**\n\x09 * What material to use as reference material when creating material instances from USD materials.\n\x09 * You can swap these with your own materials, but make sure that the replacement materials have parameters with\n\x09 * the same names and types as the ones provided by the default material, otherwise the instances will not have\n\x09 * the parameters filled with values extracted from the USD material when parsing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "What material to use as reference material when creating material instances from USD materials.\nYou can swap these with your own materials, but make sure that the replacement materials have parameters with\nthe same names and types as the ones provided by the default material, otherwise the instances will not have\nthe parameters filled with values extracted from the USD material when parsing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceDisplayColorTwoSidedMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "USD|Reference Materials|DisplayColor" },
		{ "Comment", "/**\n\x09 * What material to use as reference material when creating material instances from USD materials.\n\x09 * You can swap these with your own materials, but make sure that the replacement materials have parameters with\n\x09 * the same names and types as the ones provided by the default material, otherwise the instances will not have\n\x09 * the parameters filled with values extracted from the USD material when parsing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "What material to use as reference material when creating material instances from USD materials.\nYou can swap these with your own materials, but make sure that the replacement materials have parameters with\nthe same names and types as the ones provided by the default material, otherwise the instances will not have\nthe parameters filled with values extracted from the USD material when parsing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceDisplayColorAndOpacityTwoSidedMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "USD|Reference Materials|DisplayColor" },
		{ "Comment", "/**\n\x09 * What material to use as reference material when creating material instances from USD materials.\n\x09 * You can swap these with your own materials, but make sure that the replacement materials have parameters with\n\x09 * the same names and types as the ones provided by the default material, otherwise the instances will not have\n\x09 * the parameters filled with values extracted from the USD material when parsing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "What material to use as reference material when creating material instances from USD materials.\nYou can swap these with your own materials, but make sure that the replacement materials have parameters with\nthe same names and types as the ones provided by the default material, otherwise the instances will not have\nthe parameters filled with values extracted from the USD material when parsing." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalPluginDirectories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalPluginDirectories;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultResolverSearchPath_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultResolverSearchPath;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AdditionalMaterialPurposes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalMaterialPurposes;
	static void NewProp_bLogUsdSdkErrors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogUsdSdkErrors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultAssetCache;
	static void NewProp_bShowCreateDefaultAssetCacheDialog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCreateDefaultAssetCacheDialog;
	static void NewProp_bShowConfirmationWhenClearingLayers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowConfirmationWhenClearingLayers;
	static void NewProp_bShowConfirmationWhenMutingDirtyLayers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowConfirmationWhenMutingDirtyLayers;
	static void NewProp_bShowConfirmationWhenReloadingDirtyLayers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowConfirmationWhenReloadingDirtyLayers;
	static void NewProp_bShowOverriddenOpinionsWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOverriddenOpinionsWarning;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EditInInstanceableBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EditInInstanceableBehavior;
	static void NewProp_bShowWarningOnIncompleteDuplication_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWarningOnIncompleteDuplication;
	static void NewProp_bShowTransformOnCameraComponentWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTransformOnCameraComponentWarning;
	static void NewProp_bShowTransformTrackOnCameraComponentWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTransformTrackOnCameraComponentWarning;
	static void NewProp_bShowInheritedVisibilityWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowInheritedVisibilityWarning;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShowSaveLayersDialogWhenSaving_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ShowSaveLayersDialogWhenSaving;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShowSaveLayersDialogWhenClosing_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ShowSaveLayersDialogWhenClosing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSoundAttenuation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceDefaultSVTMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceModelCardTextureMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencePreviewSurfaceMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencePreviewSurfaceTranslucentMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencePreviewSurfaceTwoSidedMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencePreviewSurfaceTranslucentTwoSidedMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencePreviewSurfaceVTMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencePreviewSurfaceTranslucentVTMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencePreviewSurfaceTwoSidedVTMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceDisplayColorMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceDisplayColorAndOpacityMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceDisplayColorTwoSidedMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceDisplayColorAndOpacityTwoSidedMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdProjectSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_AdditionalPluginDirectories_Inner = { "AdditionalPluginDirectories", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_AdditionalPluginDirectories = { "AdditionalPluginDirectories", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdProjectSettings, AdditionalPluginDirectories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalPluginDirectories_MetaData), NewProp_AdditionalPluginDirectories_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_DefaultResolverSearchPath_Inner = { "DefaultResolverSearchPath", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_DefaultResolverSearchPath = { "DefaultResolverSearchPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdProjectSettings, DefaultResolverSearchPath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultResolverSearchPath_MetaData), NewProp_DefaultResolverSearchPath_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_AdditionalMaterialPurposes_Inner = { "AdditionalMaterialPurposes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_AdditionalMaterialPurposes = { "AdditionalMaterialPurposes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdProjectSettings, AdditionalMaterialPurposes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalMaterialPurposes_MetaData), NewProp_AdditionalMaterialPurposes_MetaData) };
void Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bLogUsdSdkErrors_SetBit(void* Obj)
{
	((UUsdProjectSettings*)Obj)->bLogUsdSdkErrors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bLogUsdSdkErrors = { "bLogUsdSdkErrors", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUsdProjectSettings), &Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bLogUsdSdkErrors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLogUsdSdkErrors_MetaData), NewProp_bLogUsdSdkErrors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_DefaultAssetCache = { "DefaultAssetCache", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdProjectSettings, DefaultAssetCache), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAssetCache_MetaData), NewProp_DefaultAssetCache_MetaData) };
void Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowCreateDefaultAssetCacheDialog_SetBit(void* Obj)
{
	((UUsdProjectSettings*)Obj)->bShowCreateDefaultAssetCacheDialog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowCreateDefaultAssetCacheDialog = { "bShowCreateDefaultAssetCacheDialog", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUsdProjectSettings), &Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowCreateDefaultAssetCacheDialog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowCreateDefaultAssetCacheDialog_MetaData), NewProp_bShowCreateDefaultAssetCacheDialog_MetaData) };
void Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowConfirmationWhenClearingLayers_SetBit(void* Obj)
{
	((UUsdProjectSettings*)Obj)->bShowConfirmationWhenClearingLayers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowConfirmationWhenClearingLayers = { "bShowConfirmationWhenClearingLayers", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUsdProjectSettings), &Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowConfirmationWhenClearingLayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowConfirmationWhenClearingLayers_MetaData), NewProp_bShowConfirmationWhenClearingLayers_MetaData) };
void Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowConfirmationWhenMutingDirtyLayers_SetBit(void* Obj)
{
	((UUsdProjectSettings*)Obj)->bShowConfirmationWhenMutingDirtyLayers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowConfirmationWhenMutingDirtyLayers = { "bShowConfirmationWhenMutingDirtyLayers", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUsdProjectSettings), &Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowConfirmationWhenMutingDirtyLayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowConfirmationWhenMutingDirtyLayers_MetaData), NewProp_bShowConfirmationWhenMutingDirtyLayers_MetaData) };
void Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowConfirmationWhenReloadingDirtyLayers_SetBit(void* Obj)
{
	((UUsdProjectSettings*)Obj)->bShowConfirmationWhenReloadingDirtyLayers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowConfirmationWhenReloadingDirtyLayers = { "bShowConfirmationWhenReloadingDirtyLayers", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUsdProjectSettings), &Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowConfirmationWhenReloadingDirtyLayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowConfirmationWhenReloadingDirtyLayers_MetaData), NewProp_bShowConfirmationWhenReloadingDirtyLayers_MetaData) };
void Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowOverriddenOpinionsWarning_SetBit(void* Obj)
{
	((UUsdProjectSettings*)Obj)->bShowOverriddenOpinionsWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowOverriddenOpinionsWarning = { "bShowOverriddenOpinionsWarning", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUsdProjectSettings), &Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowOverriddenOpinionsWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowOverriddenOpinionsWarning_MetaData), NewProp_bShowOverriddenOpinionsWarning_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_EditInInstanceableBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_EditInInstanceableBehavior = { "EditInInstanceableBehavior", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdProjectSettings, EditInInstanceableBehavior), Z_Construct_UEnum_USDClasses_EUsdEditInInstanceBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditInInstanceableBehavior_MetaData), NewProp_EditInInstanceableBehavior_MetaData) }; // 442996741
void Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowWarningOnIncompleteDuplication_SetBit(void* Obj)
{
	((UUsdProjectSettings*)Obj)->bShowWarningOnIncompleteDuplication = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowWarningOnIncompleteDuplication = { "bShowWarningOnIncompleteDuplication", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUsdProjectSettings), &Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowWarningOnIncompleteDuplication_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowWarningOnIncompleteDuplication_MetaData), NewProp_bShowWarningOnIncompleteDuplication_MetaData) };
void Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowTransformOnCameraComponentWarning_SetBit(void* Obj)
{
	((UUsdProjectSettings*)Obj)->bShowTransformOnCameraComponentWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowTransformOnCameraComponentWarning = { "bShowTransformOnCameraComponentWarning", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUsdProjectSettings), &Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowTransformOnCameraComponentWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowTransformOnCameraComponentWarning_MetaData), NewProp_bShowTransformOnCameraComponentWarning_MetaData) };
void Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowTransformTrackOnCameraComponentWarning_SetBit(void* Obj)
{
	((UUsdProjectSettings*)Obj)->bShowTransformTrackOnCameraComponentWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowTransformTrackOnCameraComponentWarning = { "bShowTransformTrackOnCameraComponentWarning", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUsdProjectSettings), &Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowTransformTrackOnCameraComponentWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowTransformTrackOnCameraComponentWarning_MetaData), NewProp_bShowTransformTrackOnCameraComponentWarning_MetaData) };
void Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowInheritedVisibilityWarning_SetBit(void* Obj)
{
	((UUsdProjectSettings*)Obj)->bShowInheritedVisibilityWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowInheritedVisibilityWarning = { "bShowInheritedVisibilityWarning", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUsdProjectSettings), &Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowInheritedVisibilityWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowInheritedVisibilityWarning_MetaData), NewProp_bShowInheritedVisibilityWarning_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ShowSaveLayersDialogWhenSaving_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ShowSaveLayersDialogWhenSaving = { "ShowSaveLayersDialogWhenSaving", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdProjectSettings, ShowSaveLayersDialogWhenSaving), Z_Construct_UEnum_USDClasses_EUsdSaveDialogBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowSaveLayersDialogWhenSaving_MetaData), NewProp_ShowSaveLayersDialogWhenSaving_MetaData) }; // 2301070738
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ShowSaveLayersDialogWhenClosing_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ShowSaveLayersDialogWhenClosing = { "ShowSaveLayersDialogWhenClosing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdProjectSettings, ShowSaveLayersDialogWhenClosing), Z_Construct_UEnum_USDClasses_EUsdSaveDialogBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowSaveLayersDialogWhenClosing_MetaData), NewProp_ShowSaveLayersDialogWhenClosing_MetaData) }; // 2301070738
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_DefaultSoundAttenuation = { "DefaultSoundAttenuation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdProjectSettings, DefaultSoundAttenuation), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSoundAttenuation_MetaData), NewProp_DefaultSoundAttenuation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDefaultSVTMaterial = { "ReferenceDefaultSVTMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdProjectSettings, ReferenceDefaultSVTMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceDefaultSVTMaterial_MetaData), NewProp_ReferenceDefaultSVTMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceModelCardTextureMaterial = { "ReferenceModelCardTextureMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdProjectSettings, ReferenceModelCardTextureMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceModelCardTextureMaterial_MetaData), NewProp_ReferenceModelCardTextureMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceMaterial = { "ReferencePreviewSurfaceMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdProjectSettings, ReferencePreviewSurfaceMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencePreviewSurfaceMaterial_MetaData), NewProp_ReferencePreviewSurfaceMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentMaterial = { "ReferencePreviewSurfaceTranslucentMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdProjectSettings, ReferencePreviewSurfaceTranslucentMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencePreviewSurfaceTranslucentMaterial_MetaData), NewProp_ReferencePreviewSurfaceTranslucentMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTwoSidedMaterial = { "ReferencePreviewSurfaceTwoSidedMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdProjectSettings, ReferencePreviewSurfaceTwoSidedMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencePreviewSurfaceTwoSidedMaterial_MetaData), NewProp_ReferencePreviewSurfaceTwoSidedMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentTwoSidedMaterial = { "ReferencePreviewSurfaceTranslucentTwoSidedMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdProjectSettings, ReferencePreviewSurfaceTranslucentTwoSidedMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencePreviewSurfaceTranslucentTwoSidedMaterial_MetaData), NewProp_ReferencePreviewSurfaceTranslucentTwoSidedMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceVTMaterial = { "ReferencePreviewSurfaceVTMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdProjectSettings, ReferencePreviewSurfaceVTMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencePreviewSurfaceVTMaterial_MetaData), NewProp_ReferencePreviewSurfaceVTMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentVTMaterial = { "ReferencePreviewSurfaceTranslucentVTMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdProjectSettings, ReferencePreviewSurfaceTranslucentVTMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencePreviewSurfaceTranslucentVTMaterial_MetaData), NewProp_ReferencePreviewSurfaceTranslucentVTMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTwoSidedVTMaterial = { "ReferencePreviewSurfaceTwoSidedVTMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdProjectSettings, ReferencePreviewSurfaceTwoSidedVTMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencePreviewSurfaceTwoSidedVTMaterial_MetaData), NewProp_ReferencePreviewSurfaceTwoSidedVTMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial = { "ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdProjectSettings, ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial_MetaData), NewProp_ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorMaterial = { "ReferenceDisplayColorMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdProjectSettings, ReferenceDisplayColorMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceDisplayColorMaterial_MetaData), NewProp_ReferenceDisplayColorMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorAndOpacityMaterial = { "ReferenceDisplayColorAndOpacityMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdProjectSettings, ReferenceDisplayColorAndOpacityMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceDisplayColorAndOpacityMaterial_MetaData), NewProp_ReferenceDisplayColorAndOpacityMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorTwoSidedMaterial = { "ReferenceDisplayColorTwoSidedMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdProjectSettings, ReferenceDisplayColorTwoSidedMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceDisplayColorTwoSidedMaterial_MetaData), NewProp_ReferenceDisplayColorTwoSidedMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorAndOpacityTwoSidedMaterial = { "ReferenceDisplayColorAndOpacityTwoSidedMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdProjectSettings, ReferenceDisplayColorAndOpacityTwoSidedMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceDisplayColorAndOpacityTwoSidedMaterial_MetaData), NewProp_ReferenceDisplayColorAndOpacityTwoSidedMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUsdProjectSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_AdditionalPluginDirectories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_AdditionalPluginDirectories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_DefaultResolverSearchPath_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_DefaultResolverSearchPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_AdditionalMaterialPurposes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_AdditionalMaterialPurposes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bLogUsdSdkErrors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_DefaultAssetCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowCreateDefaultAssetCacheDialog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowConfirmationWhenClearingLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowConfirmationWhenMutingDirtyLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowConfirmationWhenReloadingDirtyLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowOverriddenOpinionsWarning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_EditInInstanceableBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_EditInInstanceableBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowWarningOnIncompleteDuplication,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowTransformOnCameraComponentWarning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowTransformTrackOnCameraComponentWarning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowInheritedVisibilityWarning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ShowSaveLayersDialogWhenSaving_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ShowSaveLayersDialogWhenSaving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ShowSaveLayersDialogWhenClosing_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ShowSaveLayersDialogWhenClosing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_DefaultSoundAttenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDefaultSVTMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceModelCardTextureMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTwoSidedMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentTwoSidedMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceVTMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentVTMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTwoSidedVTMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorAndOpacityMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorTwoSidedMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorAndOpacityTwoSidedMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUsdProjectSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdProjectSettings_Statics::ClassParams = {
	&UUsdProjectSettings::StaticClass,
	"USDCore",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUsdProjectSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UUsdProjectSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUsdProjectSettings()
{
	if (!Z_Registration_Info_UClass_UUsdProjectSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdProjectSettings.OuterSingleton, Z_Construct_UClass_UUsdProjectSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUsdProjectSettings.OuterSingleton;
}
template<> USDCLASSES_API UClass* StaticClass<UUsdProjectSettings>()
{
	return UUsdProjectSettings::StaticClass();
}
UUsdProjectSettings::UUsdProjectSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdProjectSettings);
UUsdProjectSettings::~UUsdProjectSettings() {}
// End Class UUsdProjectSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDProjectSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EUsdSaveDialogBehavior_StaticEnum, TEXT("EUsdSaveDialogBehavior"), &Z_Registration_Info_UEnum_EUsdSaveDialogBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2301070738U) },
		{ EUsdEditInInstanceBehavior_StaticEnum, TEXT("EUsdEditInInstanceBehavior"), &Z_Registration_Info_UEnum_EUsdEditInInstanceBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 442996741U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUsdProjectSettings, UUsdProjectSettings::StaticClass, TEXT("UUsdProjectSettings"), &Z_Registration_Info_UClass_UUsdProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdProjectSettings), 3207405803U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDProjectSettings_h_3154368101(TEXT("/Script/USDClasses"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDProjectSettings_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDProjectSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDProjectSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
