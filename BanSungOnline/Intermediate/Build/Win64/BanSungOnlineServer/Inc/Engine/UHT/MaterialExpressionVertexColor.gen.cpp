// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionVertexColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionVertexColor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVertexColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVertexColor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionVertexColor
void UMaterialExpressionVertexColor::StaticRegisterNativesUMaterialExpressionVertexColor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionVertexColor);
UClass* Z_Construct_UClass_UMaterialExpressionVertexColor_NoRegister()
{
	return UMaterialExpressionVertexColor::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionVertexColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionVertexColor.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionVertexColor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionVertexColor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionVertexColor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVertexColor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionVertexColor_Statics::ClassParams = {
	&UMaterialExpressionVertexColor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVertexColor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionVertexColor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionVertexColor()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionVertexColor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionVertexColor.OuterSingleton, Z_Construct_UClass_UMaterialExpressionVertexColor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionVertexColor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionVertexColor>()
{
	return UMaterialExpressionVertexColor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionVertexColor);
UMaterialExpressionVertexColor::~UMaterialExpressionVertexColor() {}
// End Class UMaterialExpressionVertexColor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVertexColor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionVertexColor, UMaterialExpressionVertexColor::StaticClass, TEXT("UMaterialExpressionVertexColor"), &Z_Registration_Info_UClass_UMaterialExpressionVertexColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionVertexColor), 466816789U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVertexColor_h_4286132788(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVertexColor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVertexColor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
