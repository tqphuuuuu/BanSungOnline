// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Private/OnlinePIESettings.h"
#include "OnlineSubsystemUtils/Public/OnlineAccountStoredCredentials.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlinePIESettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlinePIESettings();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlinePIESettings_NoRegister();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Class UOnlinePIESettings
void UOnlinePIESettings::StaticRegisterNativesUOnlinePIESettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlinePIESettings);
UClass* Z_Construct_UClass_UOnlinePIESettings_NoRegister()
{
	return UOnlinePIESettings::StaticClass();
}
struct Z_Construct_UClass_UOnlinePIESettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Setup login credentials for the Play In Editor (PIE) feature\n */" },
		{ "DisplayName", "Play Credentials" },
		{ "IncludePath", "OnlinePIESettings.h" },
		{ "ModuleRelativePath", "Private/OnlinePIESettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Setup login credentials for the Play In Editor (PIE) feature" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlinePIEEnabled_MetaData[] = {
		{ "Category", "Logins" },
		{ "DisplayName", "Enable Logins" },
		{ "ModuleRelativePath", "Private/OnlinePIESettings.h" },
		{ "Tooltip", "Attempt to login with user credentials on a backend service before launching the PIE instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Logins_MetaData[] = {
		{ "Category", "Logins" },
		{ "DisplayName", "Credentials" },
		{ "ModuleRelativePath", "Private/OnlinePIESettings.h" },
		{ "Tooltip", "Login credentials, at least one for each instance of PIE that is intended to be run" },
	};
#endif // WITH_METADATA
	static void NewProp_bOnlinePIEEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlinePIEEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Logins_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Logins;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePIESettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_bOnlinePIEEnabled_SetBit(void* Obj)
{
	((UOnlinePIESettings*)Obj)->bOnlinePIEEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_bOnlinePIEEnabled = { "bOnlinePIEEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOnlinePIESettings), &Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_bOnlinePIEEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlinePIEEnabled_MetaData), NewProp_bOnlinePIEEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_Logins_Inner = { "Logins", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials, METADATA_PARAMS(0, nullptr) }; // 2915264944
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_Logins = { "Logins", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnlinePIESettings, Logins), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Logins_MetaData), NewProp_Logins_MetaData) }; // 2915264944
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlinePIESettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_bOnlinePIEEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_Logins_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_Logins,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePIESettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOnlinePIESettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePIESettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePIESettings_Statics::ClassParams = {
	&UOnlinePIESettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOnlinePIESettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePIESettings_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePIESettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnlinePIESettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOnlinePIESettings()
{
	if (!Z_Registration_Info_UClass_UOnlinePIESettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlinePIESettings.OuterSingleton, Z_Construct_UClass_UOnlinePIESettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOnlinePIESettings.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UOnlinePIESettings>()
{
	return UOnlinePIESettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePIESettings);
UOnlinePIESettings::~UOnlinePIESettings() {}
// End Class UOnlinePIESettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOnlinePIESettings, UOnlinePIESettings::StaticClass, TEXT("UOnlinePIESettings"), &Z_Registration_Info_UClass_UOnlinePIESettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlinePIESettings), 1056004116U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h_1230035134(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
