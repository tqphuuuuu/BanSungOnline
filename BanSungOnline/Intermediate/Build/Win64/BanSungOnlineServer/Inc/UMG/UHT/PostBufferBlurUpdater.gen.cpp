// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/PostBufferBlurUpdater.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostBufferBlurUpdater() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UPostBufferBlurUpdater();
UMG_API UClass* Z_Construct_UClass_UPostBufferBlurUpdater_NoRegister();
UMG_API UClass* Z_Construct_UClass_USlatePostBufferProcessorUpdater();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UPostBufferBlurUpdater
void UPostBufferBlurUpdater::StaticRegisterNativesUPostBufferBlurUpdater()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPostBufferBlurUpdater);
UClass* Z_Construct_UClass_UPostBufferBlurUpdater_NoRegister()
{
	return UPostBufferBlurUpdater::StaticClass();
}
struct Z_Construct_UClass_UPostBufferBlurUpdater_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Processor updater that sets the blur strength for a blur processor intra-frame on the renderthread\n */" },
		{ "IncludePath", "Components/PostBufferBlurUpdater.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Components/PostBufferBlurUpdater.h" },
		{ "ToolTip", "Processor updater that sets the blur strength for a blur processor intra-frame on the renderthread" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GaussianBlurStrength_MetaData[] = {
		{ "Category", "GaussianBlur" },
		{ "ModuleRelativePath", "Public/Components/PostBufferBlurUpdater.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GaussianBlurStrength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPostBufferBlurUpdater>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPostBufferBlurUpdater_Statics::NewProp_GaussianBlurStrength = { "GaussianBlurStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPostBufferBlurUpdater, GaussianBlurStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GaussianBlurStrength_MetaData), NewProp_GaussianBlurStrength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPostBufferBlurUpdater_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostBufferBlurUpdater_Statics::NewProp_GaussianBlurStrength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPostBufferBlurUpdater_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPostBufferBlurUpdater_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USlatePostBufferProcessorUpdater,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPostBufferBlurUpdater_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPostBufferBlurUpdater_Statics::ClassParams = {
	&UPostBufferBlurUpdater::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPostBufferBlurUpdater_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPostBufferBlurUpdater_Statics::PropPointers),
	0,
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPostBufferBlurUpdater_Statics::Class_MetaDataParams), Z_Construct_UClass_UPostBufferBlurUpdater_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPostBufferBlurUpdater()
{
	if (!Z_Registration_Info_UClass_UPostBufferBlurUpdater.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPostBufferBlurUpdater.OuterSingleton, Z_Construct_UClass_UPostBufferBlurUpdater_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPostBufferBlurUpdater.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UPostBufferBlurUpdater>()
{
	return UPostBufferBlurUpdater::StaticClass();
}
UPostBufferBlurUpdater::UPostBufferBlurUpdater(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPostBufferBlurUpdater);
UPostBufferBlurUpdater::~UPostBufferBlurUpdater() {}
// End Class UPostBufferBlurUpdater

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferBlurUpdater_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPostBufferBlurUpdater, UPostBufferBlurUpdater::StaticClass, TEXT("UPostBufferBlurUpdater"), &Z_Registration_Info_UClass_UPostBufferBlurUpdater, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPostBufferBlurUpdater), 1159901067U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferBlurUpdater_h_3143868255(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferBlurUpdater_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferBlurUpdater_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
