// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionTextureSampleParameter2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureSampleParameter2D() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionTextureSampleParameter2D
void UMaterialExpressionTextureSampleParameter2D::StaticRegisterNativesUMaterialExpressionTextureSampleParameter2D()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionTextureSampleParameter2D);
UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D_NoRegister()
{
	return UMaterialExpressionTextureSampleParameter2D::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTextureSampleParameter2D.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionTextureSampleParameter2D.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTextureSampleParameter2D>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSampleParameter,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D_Statics::ClassParams = {
	&UMaterialExpressionTextureSampleParameter2D::StaticClass,
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
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter2D.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter2D.OuterSingleton, Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter2D.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTextureSampleParameter2D>()
{
	return UMaterialExpressionTextureSampleParameter2D::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureSampleParameter2D);
UMaterialExpressionTextureSampleParameter2D::~UMaterialExpressionTextureSampleParameter2D() {}
// End Class UMaterialExpressionTextureSampleParameter2D

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSampleParameter2D_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D, UMaterialExpressionTextureSampleParameter2D::StaticClass, TEXT("UMaterialExpressionTextureSampleParameter2D"), &Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionTextureSampleParameter2D), 264158254U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSampleParameter2D_h_1370303931(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSampleParameter2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSampleParameter2D_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
