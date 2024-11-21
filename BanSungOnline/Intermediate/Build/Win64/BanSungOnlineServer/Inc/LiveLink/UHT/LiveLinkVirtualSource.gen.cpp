// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Private/LiveLinkVirtualSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkVirtualSource() {}

// Begin Cross Module References
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings();
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References

// Begin Class ULiveLinkVirtualSubjectSourceSettings
void ULiveLinkVirtualSubjectSourceSettings::StaticRegisterNativesULiveLinkVirtualSubjectSourceSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkVirtualSubjectSourceSettings);
UClass* Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_NoRegister()
{
	return ULiveLinkVirtualSubjectSourceSettings::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** VirtualSubjectSource Settings to be able to differentiate from live sources and keep a name associated to the source */" },
		{ "IncludePath", "LiveLinkVirtualSource.h" },
		{ "ModuleRelativePath", "Private/LiveLinkVirtualSource.h" },
		{ "ToolTip", "VirtualSubjectSource Settings to be able to differentiate from live sources and keep a name associated to the source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[] = {
		{ "ModuleRelativePath", "Private/LiveLinkVirtualSource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkVirtualSubjectSourceSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkVirtualSubjectSourceSettings, SourceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceName_MetaData), NewProp_SourceName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::NewProp_SourceName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::ClassParams = {
	&ULiveLinkVirtualSubjectSourceSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings()
{
	if (!Z_Registration_Info_UClass_ULiveLinkVirtualSubjectSourceSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkVirtualSubjectSourceSettings.OuterSingleton, Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkVirtualSubjectSourceSettings.OuterSingleton;
}
template<> LIVELINK_API UClass* StaticClass<ULiveLinkVirtualSubjectSourceSettings>()
{
	return ULiveLinkVirtualSubjectSourceSettings::StaticClass();
}
ULiveLinkVirtualSubjectSourceSettings::ULiveLinkVirtualSubjectSourceSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkVirtualSubjectSourceSettings);
ULiveLinkVirtualSubjectSourceSettings::~ULiveLinkVirtualSubjectSourceSettings() {}
// End Class ULiveLinkVirtualSubjectSourceSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkVirtualSource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings, ULiveLinkVirtualSubjectSourceSettings::StaticClass, TEXT("ULiveLinkVirtualSubjectSourceSettings"), &Z_Registration_Info_UClass_ULiveLinkVirtualSubjectSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkVirtualSubjectSourceSettings), 1518949298U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkVirtualSource_h_214159032(TEXT("/Script/LiveLink"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkVirtualSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkVirtualSource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
