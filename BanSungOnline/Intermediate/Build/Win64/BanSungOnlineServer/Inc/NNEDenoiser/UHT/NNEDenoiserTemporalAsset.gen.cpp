// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NNEDenoiser/Public/NNEDenoiserTemporalAsset.h"
#include "NNEDenoiser/Public/NNEDenoiserTilingConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNEDenoiserTemporalAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
NNE_API UClass* Z_Construct_UClass_UNNEModelData_NoRegister();
NNEDENOISER_API UClass* Z_Construct_UClass_UNNEDenoiserTemporalAsset();
NNEDENOISER_API UClass* Z_Construct_UClass_UNNEDenoiserTemporalAsset_NoRegister();
NNEDENOISER_API UScriptStruct* Z_Construct_UScriptStruct_FTilingConfig();
UPackage* Z_Construct_UPackage__Script_NNEDenoiser();
// End Cross Module References

// Begin Class UNNEDenoiserTemporalAsset
void UNNEDenoiserTemporalAsset::StaticRegisterNativesUNNEDenoiserTemporalAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNNEDenoiserTemporalAsset);
UClass* Z_Construct_UClass_UNNEDenoiserTemporalAsset_NoRegister()
{
	return UNNEDenoiserTemporalAsset::StaticClass();
}
struct Z_Construct_UClass_UNNEDenoiserTemporalAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Denoiser model data asset */" },
		{ "IncludePath", "NNEDenoiserTemporalAsset.h" },
		{ "ModuleRelativePath", "Public/NNEDenoiserTemporalAsset.h" },
		{ "ToolTip", "Denoiser model data asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelData_MetaData[] = {
		{ "Category", "NNEDenoiser" },
		{ "Comment", "/** NNE model data */" },
		{ "ModuleRelativePath", "Public/NNEDenoiserTemporalAsset.h" },
		{ "ToolTip", "NNE model data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[] = {
		{ "Category", "NNEDenoiser" },
		{ "Comment", "/** Input mapping table */" },
		{ "ModuleRelativePath", "Public/NNEDenoiserTemporalAsset.h" },
		{ "RequiredAssetDataTags", "RowStructure=/Script/NNEDenoiser.NNEDenoiserTemporalInputMappingData" },
		{ "ToolTip", "Input mapping table" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputMapping_MetaData[] = {
		{ "Category", "NNEDenoiser" },
		{ "Comment", "/** Output mapping table */" },
		{ "ModuleRelativePath", "Public/NNEDenoiserTemporalAsset.h" },
		{ "RequiredAssetDataTags", "RowStructure=/Script/NNEDenoiser.NNEDenoiserTemporalOutputMappingData" },
		{ "ToolTip", "Output mapping table" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TilingConfig_MetaData[] = {
		{ "Category", "NNEDenoiser" },
		{ "Comment", "/** Tiling configuration */" },
		{ "ModuleRelativePath", "Public/NNEDenoiserTemporalAsset.h" },
		{ "ToolTip", "Tiling configuration" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ModelData;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InputMapping;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OutputMapping;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TilingConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNNEDenoiserTemporalAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNNEDenoiserTemporalAsset_Statics::NewProp_ModelData = { "ModelData", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNNEDenoiserTemporalAsset, ModelData), Z_Construct_UClass_UNNEModelData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelData_MetaData), NewProp_ModelData_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNNEDenoiserTemporalAsset_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNNEDenoiserTemporalAsset, InputMapping), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMapping_MetaData), NewProp_InputMapping_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNNEDenoiserTemporalAsset_Statics::NewProp_OutputMapping = { "OutputMapping", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNNEDenoiserTemporalAsset, OutputMapping), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputMapping_MetaData), NewProp_OutputMapping_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNNEDenoiserTemporalAsset_Statics::NewProp_TilingConfig = { "TilingConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNNEDenoiserTemporalAsset, TilingConfig), Z_Construct_UScriptStruct_FTilingConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TilingConfig_MetaData), NewProp_TilingConfig_MetaData) }; // 3662843288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNNEDenoiserTemporalAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNNEDenoiserTemporalAsset_Statics::NewProp_ModelData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNNEDenoiserTemporalAsset_Statics::NewProp_InputMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNNEDenoiserTemporalAsset_Statics::NewProp_OutputMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNNEDenoiserTemporalAsset_Statics::NewProp_TilingConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNNEDenoiserTemporalAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNNEDenoiserTemporalAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NNEDenoiser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNNEDenoiserTemporalAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNNEDenoiserTemporalAsset_Statics::ClassParams = {
	&UNNEDenoiserTemporalAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNNEDenoiserTemporalAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNNEDenoiserTemporalAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNNEDenoiserTemporalAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UNNEDenoiserTemporalAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNNEDenoiserTemporalAsset()
{
	if (!Z_Registration_Info_UClass_UNNEDenoiserTemporalAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNNEDenoiserTemporalAsset.OuterSingleton, Z_Construct_UClass_UNNEDenoiserTemporalAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNNEDenoiserTemporalAsset.OuterSingleton;
}
template<> NNEDENOISER_API UClass* StaticClass<UNNEDenoiserTemporalAsset>()
{
	return UNNEDenoiserTemporalAsset::StaticClass();
}
UNNEDenoiserTemporalAsset::UNNEDenoiserTemporalAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNNEDenoiserTemporalAsset);
UNNEDenoiserTemporalAsset::~UNNEDenoiserTemporalAsset() {}
// End Class UNNEDenoiserTemporalAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserTemporalAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNNEDenoiserTemporalAsset, UNNEDenoiserTemporalAsset::StaticClass, TEXT("UNNEDenoiserTemporalAsset"), &Z_Registration_Info_UClass_UNNEDenoiserTemporalAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNNEDenoiserTemporalAsset), 2948834670U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserTemporalAsset_h_1352764665(TEXT("/Script/NNEDenoiser"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserTemporalAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserTemporalAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
