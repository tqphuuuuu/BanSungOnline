// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionDeriveNormalZ.h"
#include "Runtime/Engine/Public/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDeriveNormalZ() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDeriveNormalZ();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDeriveNormalZ_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionDeriveNormalZ
void UMaterialExpressionDeriveNormalZ::StaticRegisterNativesUMaterialExpressionDeriveNormalZ()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDeriveNormalZ);
UClass* Z_Construct_UClass_UMaterialExpressionDeriveNormalZ_NoRegister()
{
	return UMaterialExpressionDeriveNormalZ::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionDeriveNormalZ_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDeriveNormalZ.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionDeriveNormalZ.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InXY_MetaData[] = {
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionDeriveNormalZ.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InXY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDeriveNormalZ>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDeriveNormalZ_Statics::NewProp_InXY = { "InXY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDeriveNormalZ, InXY), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InXY_MetaData), NewProp_InXY_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionDeriveNormalZ_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDeriveNormalZ_Statics::NewProp_InXY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDeriveNormalZ_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionDeriveNormalZ_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDeriveNormalZ_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDeriveNormalZ_Statics::ClassParams = {
	&UMaterialExpressionDeriveNormalZ::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionDeriveNormalZ_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDeriveNormalZ_Statics::PropPointers),
	0,
	0x000020B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDeriveNormalZ_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionDeriveNormalZ_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionDeriveNormalZ()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionDeriveNormalZ.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDeriveNormalZ.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDeriveNormalZ_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionDeriveNormalZ.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDeriveNormalZ>()
{
	return UMaterialExpressionDeriveNormalZ::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDeriveNormalZ);
UMaterialExpressionDeriveNormalZ::~UMaterialExpressionDeriveNormalZ() {}
// End Class UMaterialExpressionDeriveNormalZ

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDeriveNormalZ_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDeriveNormalZ, UMaterialExpressionDeriveNormalZ::StaticClass, TEXT("UMaterialExpressionDeriveNormalZ"), &Z_Registration_Info_UClass_UMaterialExpressionDeriveNormalZ, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDeriveNormalZ), 3047809745U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDeriveNormalZ_h_2570933645(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDeriveNormalZ_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDeriveNormalZ_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
