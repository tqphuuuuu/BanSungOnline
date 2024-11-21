// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionArctangent2Fast.h"
#include "Runtime/Engine/Public/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionArctangent2Fast() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionArctangent2Fast();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionArctangent2Fast_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionArctangent2Fast
void UMaterialExpressionArctangent2Fast::StaticRegisterNativesUMaterialExpressionArctangent2Fast()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionArctangent2Fast);
UClass* Z_Construct_UClass_UMaterialExpressionArctangent2Fast_NoRegister()
{
	return UMaterialExpressionArctangent2Fast::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionArctangent2Fast_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionArctangent2Fast.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionArctangent2Fast.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionArctangent2Fast.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionArctangent2Fast.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Y;
	static const UECodeGen_Private::FStructPropertyParams NewProp_X;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionArctangent2Fast>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionArctangent2Fast_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionArctangent2Fast, Y), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionArctangent2Fast_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionArctangent2Fast, X), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionArctangent2Fast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionArctangent2Fast_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionArctangent2Fast_Statics::NewProp_X,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionArctangent2Fast_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionArctangent2Fast_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionArctangent2Fast_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionArctangent2Fast_Statics::ClassParams = {
	&UMaterialExpressionArctangent2Fast::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionArctangent2Fast_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionArctangent2Fast_Statics::PropPointers),
	0,
	0x000020B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionArctangent2Fast_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionArctangent2Fast_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionArctangent2Fast()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionArctangent2Fast.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionArctangent2Fast.OuterSingleton, Z_Construct_UClass_UMaterialExpressionArctangent2Fast_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionArctangent2Fast.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionArctangent2Fast>()
{
	return UMaterialExpressionArctangent2Fast::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionArctangent2Fast);
UMaterialExpressionArctangent2Fast::~UMaterialExpressionArctangent2Fast() {}
// End Class UMaterialExpressionArctangent2Fast

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArctangent2Fast_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionArctangent2Fast, UMaterialExpressionArctangent2Fast::StaticClass, TEXT("UMaterialExpressionArctangent2Fast"), &Z_Registration_Info_UClass_UMaterialExpressionArctangent2Fast, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionArctangent2Fast), 2303216689U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArctangent2Fast_h_1859706602(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArctangent2Fast_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArctangent2Fast_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
