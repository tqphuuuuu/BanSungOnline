// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/TranslationEditor/Private/TranslationPickerEditWindow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTranslationPickerEditWindow() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
TRANSLATIONEDITOR_API UClass* Z_Construct_UClass_UTranslationPickerSettings();
TRANSLATIONEDITOR_API UClass* Z_Construct_UClass_UTranslationPickerSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_TranslationEditor();
// End Cross Module References

// Begin Class UTranslationPickerSettings
void UTranslationPickerSettings::StaticRegisterNativesUTranslationPickerSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTranslationPickerSettings);
UClass* Z_Construct_UClass_UTranslationPickerSettings_NoRegister()
{
	return UTranslationPickerSettings::StaticClass();
}
struct Z_Construct_UClass_UTranslationPickerSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TranslationPickerEditWindow.h" },
		{ "ModuleRelativePath", "Private/TranslationPickerEditWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSubmitTranslationPickerChangesToLocalizationService_MetaData[] = {
		{ "Comment", "/** Bool submit translation picker changes to Localization Service */" },
		{ "ModuleRelativePath", "Private/TranslationPickerEditWindow.h" },
		{ "ToolTip", "Bool submit translation picker changes to Localization Service" },
	};
#endif // WITH_METADATA
	static void NewProp_bSubmitTranslationPickerChangesToLocalizationService_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubmitTranslationPickerChangesToLocalizationService;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTranslationPickerSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UTranslationPickerSettings_Statics::NewProp_bSubmitTranslationPickerChangesToLocalizationService_SetBit(void* Obj)
{
	((UTranslationPickerSettings*)Obj)->bSubmitTranslationPickerChangesToLocalizationService = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTranslationPickerSettings_Statics::NewProp_bSubmitTranslationPickerChangesToLocalizationService = { "bSubmitTranslationPickerChangesToLocalizationService", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTranslationPickerSettings), &Z_Construct_UClass_UTranslationPickerSettings_Statics::NewProp_bSubmitTranslationPickerChangesToLocalizationService_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSubmitTranslationPickerChangesToLocalizationService_MetaData), NewProp_bSubmitTranslationPickerChangesToLocalizationService_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTranslationPickerSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTranslationPickerSettings_Statics::NewProp_bSubmitTranslationPickerChangesToLocalizationService,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTranslationPickerSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTranslationPickerSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TranslationEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTranslationPickerSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTranslationPickerSettings_Statics::ClassParams = {
	&UTranslationPickerSettings::StaticClass,
	"TranslationPickerSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTranslationPickerSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTranslationPickerSettings_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTranslationPickerSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UTranslationPickerSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTranslationPickerSettings()
{
	if (!Z_Registration_Info_UClass_UTranslationPickerSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTranslationPickerSettings.OuterSingleton, Z_Construct_UClass_UTranslationPickerSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTranslationPickerSettings.OuterSingleton;
}
template<> TRANSLATIONEDITOR_API UClass* StaticClass<UTranslationPickerSettings>()
{
	return UTranslationPickerSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTranslationPickerSettings);
UTranslationPickerSettings::~UTranslationPickerSettings() {}
// End Class UTranslationPickerSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_TranslationEditor_Private_TranslationPickerEditWindow_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTranslationPickerSettings, UTranslationPickerSettings::StaticClass, TEXT("UTranslationPickerSettings"), &Z_Registration_Info_UClass_UTranslationPickerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTranslationPickerSettings), 193124510U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_TranslationEditor_Private_TranslationPickerEditWindow_h_2943170123(TEXT("/Script/TranslationEditor"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_TranslationEditor_Private_TranslationPickerEditWindow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_TranslationEditor_Private_TranslationPickerEditWindow_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
