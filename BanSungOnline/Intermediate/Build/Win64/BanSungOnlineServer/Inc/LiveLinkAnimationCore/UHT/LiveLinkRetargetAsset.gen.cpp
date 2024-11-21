// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkAnimationCore/Public/LiveLinkRetargetAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkRetargetAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset();
LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_LiveLinkAnimationCore();
// End Cross Module References

// Begin Class ULiveLinkRetargetAsset
void ULiveLinkRetargetAsset::StaticRegisterNativesULiveLinkRetargetAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkRetargetAsset);
UClass* Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister()
{
	return ULiveLinkRetargetAsset::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkRetargetAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Base class for retargeting live link data. \n" },
		{ "IncludePath", "LiveLinkRetargetAsset.h" },
		{ "ModuleRelativePath", "Public/LiveLinkRetargetAsset.h" },
		{ "ToolTip", "Base class for retargeting live link data." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkRetargetAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULiveLinkRetargetAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkAnimationCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkRetargetAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkRetargetAsset_Statics::ClassParams = {
	&ULiveLinkRetargetAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkRetargetAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkRetargetAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkRetargetAsset()
{
	if (!Z_Registration_Info_UClass_ULiveLinkRetargetAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkRetargetAsset.OuterSingleton, Z_Construct_UClass_ULiveLinkRetargetAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkRetargetAsset.OuterSingleton;
}
template<> LIVELINKANIMATIONCORE_API UClass* StaticClass<ULiveLinkRetargetAsset>()
{
	return ULiveLinkRetargetAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkRetargetAsset);
ULiveLinkRetargetAsset::~ULiveLinkRetargetAsset() {}
// End Class ULiveLinkRetargetAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRetargetAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkRetargetAsset, ULiveLinkRetargetAsset::StaticClass, TEXT("ULiveLinkRetargetAsset"), &Z_Registration_Info_UClass_ULiveLinkRetargetAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkRetargetAsset), 3337505794U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRetargetAsset_h_4041538440(TEXT("/Script/LiveLinkAnimationCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRetargetAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRetargetAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
