// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NNEDenoiser/Public/NNEDenoiserSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNEDenoiserSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
NNEDENOISER_API UClass* Z_Construct_UClass_UNNEDenoiserAsset_NoRegister();
NNEDENOISER_API UClass* Z_Construct_UClass_UNNEDenoiserSettings();
NNEDENOISER_API UClass* Z_Construct_UClass_UNNEDenoiserSettings_NoRegister();
NNEDENOISER_API UEnum* Z_Construct_UEnum_NNEDenoiser_EDenoiserRuntimeType();
UPackage* Z_Construct_UPackage__Script_NNEDenoiser();
// End Cross Module References

// Begin Enum EDenoiserRuntimeType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDenoiserRuntimeType;
static UEnum* EDenoiserRuntimeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDenoiserRuntimeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDenoiserRuntimeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NNEDenoiser_EDenoiserRuntimeType, (UObject*)Z_Construct_UPackage__Script_NNEDenoiser(), TEXT("EDenoiserRuntimeType"));
	}
	return Z_Registration_Info_UEnum_EDenoiserRuntimeType.OuterSingleton;
}
template<> NNEDENOISER_API UEnum* StaticEnum<EDenoiserRuntimeType>()
{
	return EDenoiserRuntimeType_StaticEnum();
}
struct Z_Construct_UEnum_NNEDenoiser_EDenoiserRuntimeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** An enum to represent denoiser NNE runtime type */" },
		{ "CPU.Name", "CPU" },
		{ "GPU.Name", "GPU" },
		{ "ModuleRelativePath", "Public/NNEDenoiserSettings.h" },
		{ "RDG.Name", "RDG" },
		{ "ToolTip", "An enum to represent denoiser NNE runtime type" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CPU", (int64)CPU },
		{ "GPU", (int64)GPU },
		{ "RDG", (int64)RDG },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NNEDenoiser_EDenoiserRuntimeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NNEDenoiser,
	nullptr,
	"EDenoiserRuntimeType",
	"EDenoiserRuntimeType",
	Z_Construct_UEnum_NNEDenoiser_EDenoiserRuntimeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NNEDenoiser_EDenoiserRuntimeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NNEDenoiser_EDenoiserRuntimeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NNEDenoiser_EDenoiserRuntimeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NNEDenoiser_EDenoiserRuntimeType()
{
	if (!Z_Registration_Info_UEnum_EDenoiserRuntimeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDenoiserRuntimeType.InnerSingleton, Z_Construct_UEnum_NNEDenoiser_EDenoiserRuntimeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDenoiserRuntimeType.InnerSingleton;
}
// End Enum EDenoiserRuntimeType

// Begin Class UNNEDenoiserSettings
void UNNEDenoiserSettings::StaticRegisterNativesUNNEDenoiserSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNNEDenoiserSettings);
UClass* Z_Construct_UClass_UNNEDenoiserSettings_NoRegister()
{
	return UNNEDenoiserSettings::StaticClass();
}
struct Z_Construct_UClass_UNNEDenoiserSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Settings to select a NNE Denoiser and its runtime */" },
		{ "DisplayName", "NNE Denoiser" },
		{ "IncludePath", "NNEDenoiserSettings.h" },
		{ "ModuleRelativePath", "Public/NNEDenoiserSettings.h" },
		{ "ToolTip", "Settings to select a NNE Denoiser and its runtime" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DenoiserAsset_MetaData[] = {
		{ "Category", "NNE Denoiser" },
		{ "DisplayName", "Denoiser Asset" },
		{ "ModuleRelativePath", "Public/NNEDenoiserSettings.h" },
		{ "ToolTip", "Select the denoiser asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeType_MetaData[] = {
		{ "Category", "NNE Denoiser" },
		{ "ConsoleVariable", "NNEDenoiser.Runtime.Type" },
		{ "DisplayName", "Runtime Type" },
		{ "ModuleRelativePath", "Public/NNEDenoiserSettings.h" },
		{ "ToolTip", "Select a Runtime type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeName_MetaData[] = {
		{ "Category", "NNE Denoiser" },
		{ "ConsoleVariable", "NNEDenoiser.Runtime.Name" },
		{ "DisplayName", "Runtime Name Override" },
		{ "ModuleRelativePath", "Public/NNEDenoiserSettings.h" },
		{ "ToolTip", "(Optional) Specify the Runtime name" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DenoiserAsset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RuntimeType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RuntimeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNNEDenoiserSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNNEDenoiserSettings_Statics::NewProp_DenoiserAsset = { "DenoiserAsset", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNNEDenoiserSettings, DenoiserAsset), Z_Construct_UClass_UNNEDenoiserAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DenoiserAsset_MetaData), NewProp_DenoiserAsset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNNEDenoiserSettings_Statics::NewProp_RuntimeType = { "RuntimeType", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNNEDenoiserSettings, RuntimeType), Z_Construct_UEnum_NNEDenoiser_EDenoiserRuntimeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeType_MetaData), NewProp_RuntimeType_MetaData) }; // 1155135593
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNNEDenoiserSettings_Statics::NewProp_RuntimeName = { "RuntimeName", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNNEDenoiserSettings, RuntimeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeName_MetaData), NewProp_RuntimeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNNEDenoiserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNNEDenoiserSettings_Statics::NewProp_DenoiserAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNNEDenoiserSettings_Statics::NewProp_RuntimeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNNEDenoiserSettings_Statics::NewProp_RuntimeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNNEDenoiserSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNNEDenoiserSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettingsBackedByCVars,
	(UObject* (*)())Z_Construct_UPackage__Script_NNEDenoiser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNNEDenoiserSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNNEDenoiserSettings_Statics::ClassParams = {
	&UNNEDenoiserSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNNEDenoiserSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNNEDenoiserSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNNEDenoiserSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UNNEDenoiserSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNNEDenoiserSettings()
{
	if (!Z_Registration_Info_UClass_UNNEDenoiserSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNNEDenoiserSettings.OuterSingleton, Z_Construct_UClass_UNNEDenoiserSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNNEDenoiserSettings.OuterSingleton;
}
template<> NNEDENOISER_API UClass* StaticClass<UNNEDenoiserSettings>()
{
	return UNNEDenoiserSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNNEDenoiserSettings);
UNNEDenoiserSettings::~UNNEDenoiserSettings() {}
// End Class UNNEDenoiserSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDenoiserRuntimeType_StaticEnum, TEXT("EDenoiserRuntimeType"), &Z_Registration_Info_UEnum_EDenoiserRuntimeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1155135593U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNNEDenoiserSettings, UNNEDenoiserSettings::StaticClass, TEXT("UNNEDenoiserSettings"), &Z_Registration_Info_UClass_UNNEDenoiserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNNEDenoiserSettings), 3169483964U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserSettings_h_2116063753(TEXT("/Script/NNEDenoiser"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserSettings_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
