// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionLightmapUVs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLightmapUVs() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLightmapUVs();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLightmapUVs_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionLightmapUVs
void UMaterialExpressionLightmapUVs::StaticRegisterNativesUMaterialExpressionLightmapUVs()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionLightmapUVs);
UClass* Z_Construct_UClass_UMaterialExpressionLightmapUVs_NoRegister()
{
	return UMaterialExpressionLightmapUVs::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionLightmapUVs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionLightmapUVs.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionLightmapUVs.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionLightmapUVs>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionLightmapUVs_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLightmapUVs_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionLightmapUVs_Statics::ClassParams = {
	&UMaterialExpressionLightmapUVs::StaticClass,
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
	0x000020B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLightmapUVs_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionLightmapUVs_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionLightmapUVs()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionLightmapUVs.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionLightmapUVs.OuterSingleton, Z_Construct_UClass_UMaterialExpressionLightmapUVs_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionLightmapUVs.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionLightmapUVs>()
{
	return UMaterialExpressionLightmapUVs::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLightmapUVs);
UMaterialExpressionLightmapUVs::~UMaterialExpressionLightmapUVs() {}
// End Class UMaterialExpressionLightmapUVs

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLightmapUVs_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionLightmapUVs, UMaterialExpressionLightmapUVs::StaticClass, TEXT("UMaterialExpressionLightmapUVs"), &Z_Registration_Info_UClass_UMaterialExpressionLightmapUVs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionLightmapUVs), 3238894165U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLightmapUVs_h_653716037(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLightmapUVs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLightmapUVs_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
