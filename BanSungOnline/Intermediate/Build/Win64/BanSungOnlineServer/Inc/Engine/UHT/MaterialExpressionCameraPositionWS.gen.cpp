// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionCameraPositionWS.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionCameraPositionWS() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCameraPositionWS();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCameraPositionWS_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionCameraPositionWS
void UMaterialExpressionCameraPositionWS::StaticRegisterNativesUMaterialExpressionCameraPositionWS()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionCameraPositionWS);
UClass* Z_Construct_UClass_UMaterialExpressionCameraPositionWS_NoRegister()
{
	return UMaterialExpressionCameraPositionWS::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionCameraPositionWS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionCameraPositionWS.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionCameraPositionWS.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionCameraPositionWS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionCameraPositionWS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCameraPositionWS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionCameraPositionWS_Statics::ClassParams = {
	&UMaterialExpressionCameraPositionWS::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCameraPositionWS_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionCameraPositionWS_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionCameraPositionWS()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionCameraPositionWS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionCameraPositionWS.OuterSingleton, Z_Construct_UClass_UMaterialExpressionCameraPositionWS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionCameraPositionWS.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionCameraPositionWS>()
{
	return UMaterialExpressionCameraPositionWS::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionCameraPositionWS);
UMaterialExpressionCameraPositionWS::~UMaterialExpressionCameraPositionWS() {}
// End Class UMaterialExpressionCameraPositionWS

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCameraPositionWS_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionCameraPositionWS, UMaterialExpressionCameraPositionWS::StaticClass, TEXT("UMaterialExpressionCameraPositionWS"), &Z_Registration_Info_UClass_UMaterialExpressionCameraPositionWS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionCameraPositionWS), 1393942196U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCameraPositionWS_h_468904949(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCameraPositionWS_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCameraPositionWS_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
