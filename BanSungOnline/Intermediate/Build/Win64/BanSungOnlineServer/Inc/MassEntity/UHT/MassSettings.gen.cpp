// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MassEntity/Public/MassSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
MASSENTITY_API UClass* Z_Construct_UClass_UMassModuleSettings();
MASSENTITY_API UClass* Z_Construct_UClass_UMassModuleSettings_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassSettings();
MASSENTITY_API UClass* Z_Construct_UClass_UMassSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassEntity();
// End Cross Module References

// Begin Class UMassModuleSettings
void UMassModuleSettings::StaticRegisterNativesUMassModuleSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassModuleSettings);
UClass* Z_Construct_UClass_UMassModuleSettings_NoRegister()
{
	return UMassModuleSettings::StaticClass();
}
struct Z_Construct_UClass_UMassModuleSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * A common parrent for Mass's per-module settings. Classes extending this class will automatically get registered \n * with- and show under Mass settings in Project Settings.\n */" },
		{ "IncludePath", "MassSettings.h" },
		{ "ModuleRelativePath", "Public/MassSettings.h" },
		{ "ToolTip", "A common parrent for Mass's per-module settings. Classes extending this class will automatically get registered\nwith- and show under Mass settings in Project Settings." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassModuleSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassModuleSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassModuleSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassModuleSettings_Statics::ClassParams = {
	&UMassModuleSettings::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001020A3u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassModuleSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassModuleSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassModuleSettings()
{
	if (!Z_Registration_Info_UClass_UMassModuleSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassModuleSettings.OuterSingleton, Z_Construct_UClass_UMassModuleSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassModuleSettings.OuterSingleton;
}
template<> MASSENTITY_API UClass* StaticClass<UMassModuleSettings>()
{
	return UMassModuleSettings::StaticClass();
}
UMassModuleSettings::UMassModuleSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassModuleSettings);
UMassModuleSettings::~UMassModuleSettings() {}
// End Class UMassModuleSettings

// Begin Class UMassSettings
void UMassSettings::StaticRegisterNativesUMassSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassSettings);
UClass* Z_Construct_UClass_UMassSettings_NoRegister()
{
	return UMassSettings::StaticClass();
}
struct Z_Construct_UClass_UMassSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mass" },
		{ "DisplayName", "Mass" },
		{ "IncludePath", "MassSettings.h" },
		{ "ModuleRelativePath", "Public/MassSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleSettings_MetaData[] = {
		{ "Category", "Mass" },
		{ "EditInline", "" },
		{ "ModuleRelativePath", "Public/MassSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModuleSettings_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ModuleSettings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ModuleSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassSettings_Statics::NewProp_ModuleSettings_ValueProp = { "ModuleSettings", nullptr, (EPropertyFlags)0x0104000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMassModuleSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMassSettings_Statics::NewProp_ModuleSettings_Key_KeyProp = { "ModuleSettings_Key", nullptr, (EPropertyFlags)0x0100000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMassSettings_Statics::NewProp_ModuleSettings = { "ModuleSettings", nullptr, (EPropertyFlags)0x0114000002020041, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassSettings, ModuleSettings), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleSettings_MetaData), NewProp_ModuleSettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassSettings_Statics::NewProp_ModuleSettings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassSettings_Statics::NewProp_ModuleSettings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassSettings_Statics::NewProp_ModuleSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMassSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassSettings_Statics::ClassParams = {
	&UMassSettings::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassSettings_Statics::PropPointers),
	0,
	0x001000A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassSettings()
{
	if (!Z_Registration_Info_UClass_UMassSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassSettings.OuterSingleton, Z_Construct_UClass_UMassSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassSettings.OuterSingleton;
}
template<> MASSENTITY_API UClass* StaticClass<UMassSettings>()
{
	return UMassSettings::StaticClass();
}
UMassSettings::UMassSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassSettings);
UMassSettings::~UMassSettings() {}
// End Class UMassSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassModuleSettings, UMassModuleSettings::StaticClass, TEXT("UMassModuleSettings"), &Z_Registration_Info_UClass_UMassModuleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassModuleSettings), 3644081826U) },
		{ Z_Construct_UClass_UMassSettings, UMassSettings::StaticClass, TEXT("UMassSettings"), &Z_Registration_Info_UClass_UMassSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassSettings), 1379818045U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_4028235365(TEXT("/Script/MassEntity"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
