// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionViewSize.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionViewSize() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionViewSize();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionViewSize_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionViewSize
void UMaterialExpressionViewSize::StaticRegisterNativesUMaterialExpressionViewSize()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionViewSize);
UClass* Z_Construct_UClass_UMaterialExpressionViewSize_NoRegister()
{
	return UMaterialExpressionViewSize::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionViewSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionViewSize.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionViewSize.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionViewSize>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionViewSize_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionViewSize_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionViewSize_Statics::ClassParams = {
	&UMaterialExpressionViewSize::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionViewSize_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionViewSize_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionViewSize()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionViewSize.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionViewSize.OuterSingleton, Z_Construct_UClass_UMaterialExpressionViewSize_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionViewSize.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionViewSize>()
{
	return UMaterialExpressionViewSize::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionViewSize);
UMaterialExpressionViewSize::~UMaterialExpressionViewSize() {}
// End Class UMaterialExpressionViewSize

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionViewSize_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionViewSize, UMaterialExpressionViewSize::StaticClass, TEXT("UMaterialExpressionViewSize"), &Z_Registration_Info_UClass_UMaterialExpressionViewSize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionViewSize), 3442479137U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionViewSize_h_1708305545(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionViewSize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionViewSize_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
