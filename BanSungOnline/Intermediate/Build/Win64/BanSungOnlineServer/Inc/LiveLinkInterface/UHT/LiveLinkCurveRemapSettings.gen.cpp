// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkCurveRemapSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkCurveRemapSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkCurveRemapSettings();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkCurveRemapSettings_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings();
UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References

// Begin ScriptStruct FLiveLinkCurveConversionSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkCurveConversionSettings;
class UScriptStruct* FLiveLinkCurveConversionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkCurveConversionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkCurveConversionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkCurveConversionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkCurveConversionSettings.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkCurveConversionSettings>()
{
	return FLiveLinkCurveConversionSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkCurveRemapSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveConversionAssetMap_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.PoseAsset" },
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LiveLinkCurveRemapSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveConversionAssetMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurveConversionAssetMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CurveConversionAssetMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkCurveConversionSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::NewProp_CurveConversionAssetMap_ValueProp = { "CurveConversionAssetMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::NewProp_CurveConversionAssetMap_Key_KeyProp = { "CurveConversionAssetMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::NewProp_CurveConversionAssetMap = { "CurveConversionAssetMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkCurveConversionSettings, CurveConversionAssetMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveConversionAssetMap_MetaData), NewProp_CurveConversionAssetMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::NewProp_CurveConversionAssetMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::NewProp_CurveConversionAssetMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::NewProp_CurveConversionAssetMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	nullptr,
	&NewStructOps,
	"LiveLinkCurveConversionSettings",
	Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::PropPointers),
	sizeof(FLiveLinkCurveConversionSettings),
	alignof(FLiveLinkCurveConversionSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkCurveConversionSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkCurveConversionSettings.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkCurveConversionSettings.InnerSingleton;
}
// End ScriptStruct FLiveLinkCurveConversionSettings

// Begin Class ULiveLinkCurveRemapSettings
void ULiveLinkCurveRemapSettings::StaticRegisterNativesULiveLinkCurveRemapSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkCurveRemapSettings);
UClass* Z_Construct_UClass_ULiveLinkCurveRemapSettings_NoRegister()
{
	return ULiveLinkCurveRemapSettings::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "LiveLink" },
		{ "IncludePath", "LiveLinkCurveRemapSettings.h" },
		{ "ModuleRelativePath", "Public/LiveLinkCurveRemapSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveConversionSettings_MetaData[] = {
		{ "Category", "Curve Conversion Settings" },
		{ "ModuleRelativePath", "Public/LiveLinkCurveRemapSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveConversionSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkCurveRemapSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::NewProp_CurveConversionSettings = { "CurveConversionSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkCurveRemapSettings, CurveConversionSettings), Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveConversionSettings_MetaData), NewProp_CurveConversionSettings_MetaData) }; // 493932430
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::NewProp_CurveConversionSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::ClassParams = {
	&ULiveLinkCurveRemapSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkCurveRemapSettings()
{
	if (!Z_Registration_Info_UClass_ULiveLinkCurveRemapSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkCurveRemapSettings.OuterSingleton, Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkCurveRemapSettings.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkCurveRemapSettings>()
{
	return ULiveLinkCurveRemapSettings::StaticClass();
}
ULiveLinkCurveRemapSettings::ULiveLinkCurveRemapSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkCurveRemapSettings);
ULiveLinkCurveRemapSettings::~ULiveLinkCurveRemapSettings() {}
// End Class ULiveLinkCurveRemapSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLiveLinkCurveConversionSettings::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::NewStructOps, TEXT("LiveLinkCurveConversionSettings"), &Z_Registration_Info_UScriptStruct_LiveLinkCurveConversionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkCurveConversionSettings), 493932430U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkCurveRemapSettings, ULiveLinkCurveRemapSettings::StaticClass, TEXT("ULiveLinkCurveRemapSettings"), &Z_Registration_Info_UClass_ULiveLinkCurveRemapSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkCurveRemapSettings), 730672631U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_2724948307(TEXT("/Script/LiveLinkInterface"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
