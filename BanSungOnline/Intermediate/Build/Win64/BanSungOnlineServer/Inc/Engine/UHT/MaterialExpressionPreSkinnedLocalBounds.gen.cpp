// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionPreSkinnedLocalBounds.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPreSkinnedLocalBounds() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionPreSkinnedLocalBounds
void UMaterialExpressionPreSkinnedLocalBounds::StaticRegisterNativesUMaterialExpressionPreSkinnedLocalBounds()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPreSkinnedLocalBounds);
UClass* Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds_NoRegister()
{
	return UMaterialExpressionPreSkinnedLocalBounds::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionPreSkinnedLocalBounds.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionPreSkinnedLocalBounds.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPreSkinnedLocalBounds>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds_Statics::ClassParams = {
	&UMaterialExpressionPreSkinnedLocalBounds::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedLocalBounds.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedLocalBounds.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedLocalBounds.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPreSkinnedLocalBounds>()
{
	return UMaterialExpressionPreSkinnedLocalBounds::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPreSkinnedLocalBounds);
UMaterialExpressionPreSkinnedLocalBounds::~UMaterialExpressionPreSkinnedLocalBounds() {}
// End Class UMaterialExpressionPreSkinnedLocalBounds

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreSkinnedLocalBounds_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds, UMaterialExpressionPreSkinnedLocalBounds::StaticClass, TEXT("UMaterialExpressionPreSkinnedLocalBounds"), &Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedLocalBounds, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPreSkinnedLocalBounds), 4291760645U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreSkinnedLocalBounds_h_2071957530(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreSkinnedLocalBounds_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreSkinnedLocalBounds_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
