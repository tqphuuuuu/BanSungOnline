// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkComponents/Public/LiveLinkComponentSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkComponentSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkComponentSettings();
LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkComponentSettings_NoRegister();
LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkControllerBase_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister();
UPackage* Z_Construct_UPackage__Script_LiveLinkComponents();
// End Cross Module References

// Begin Class ULiveLinkComponentSettings
void ULiveLinkComponentSettings::StaticRegisterNativesULiveLinkComponentSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkComponentSettings);
UClass* Z_Construct_UClass_ULiveLinkComponentSettings_NoRegister()
{
	return ULiveLinkComponentSettings::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkComponentSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for LiveLink.\n */" },
		{ "IncludePath", "LiveLinkComponentSettings.h" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentSettings.h" },
		{ "ToolTip", "Settings for LiveLink." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultControllerForRole_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "LiveLink" },
		{ "Comment", "/** Default Controller class to use for the specified role */" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentSettings.h" },
		{ "ToolTip", "Default Controller class to use for the specified role" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateSubjectsImmediatelyInPIE_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** If true, all LiveLink subjects with pending frame data will be updated immediately before the LiveLink components execute (only applies to PIE) */" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentSettings.h" },
		{ "ToolTip", "If true, all LiveLink subjects with pending frame data will be updated immediately before the LiveLink components execute (only applies to PIE)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultControllerForRole_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultControllerForRole_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DefaultControllerForRole;
	static void NewProp_bUpdateSubjectsImmediatelyInPIE_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateSubjectsImmediatelyInPIE;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkComponentSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_DefaultControllerForRole_ValueProp = { "DefaultControllerForRole", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkControllerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_DefaultControllerForRole_Key_KeyProp = { "DefaultControllerForRole_Key", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRole_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_DefaultControllerForRole = { "DefaultControllerForRole", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkComponentSettings, DefaultControllerForRole), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultControllerForRole_MetaData), NewProp_DefaultControllerForRole_MetaData) };
void Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_bUpdateSubjectsImmediatelyInPIE_SetBit(void* Obj)
{
	((ULiveLinkComponentSettings*)Obj)->bUpdateSubjectsImmediatelyInPIE = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_bUpdateSubjectsImmediatelyInPIE = { "bUpdateSubjectsImmediatelyInPIE", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULiveLinkComponentSettings), &Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_bUpdateSubjectsImmediatelyInPIE_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateSubjectsImmediatelyInPIE_MetaData), NewProp_bUpdateSubjectsImmediatelyInPIE_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkComponentSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_DefaultControllerForRole_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_DefaultControllerForRole_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_DefaultControllerForRole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_bUpdateSubjectsImmediatelyInPIE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkComponentSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkComponentSettings_Statics::ClassParams = {
	&ULiveLinkComponentSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULiveLinkComponentSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkComponentSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkComponentSettings()
{
	if (!Z_Registration_Info_UClass_ULiveLinkComponentSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkComponentSettings.OuterSingleton, Z_Construct_UClass_ULiveLinkComponentSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkComponentSettings.OuterSingleton;
}
template<> LIVELINKCOMPONENTS_API UClass* StaticClass<ULiveLinkComponentSettings>()
{
	return ULiveLinkComponentSettings::StaticClass();
}
ULiveLinkComponentSettings::ULiveLinkComponentSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkComponentSettings);
ULiveLinkComponentSettings::~ULiveLinkComponentSettings() {}
// End Class ULiveLinkComponentSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkComponentSettings, ULiveLinkComponentSettings::StaticClass, TEXT("ULiveLinkComponentSettings"), &Z_Registration_Info_UClass_ULiveLinkComponentSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkComponentSettings), 3437307319U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentSettings_h_1202430519(TEXT("/Script/LiveLinkComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
