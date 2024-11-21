// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionArccosineFast.h"
#include "Runtime/Engine/Public/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionArccosineFast() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionArccosineFast();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionArccosineFast_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionArccosineFast
void UMaterialExpressionArccosineFast::StaticRegisterNativesUMaterialExpressionArccosineFast()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionArccosineFast);
UClass* Z_Construct_UClass_UMaterialExpressionArccosineFast_NoRegister()
{
	return UMaterialExpressionArccosineFast::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionArccosineFast_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionArccosineFast.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionArccosineFast.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionArccosineFast.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionArccosineFast>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionArccosineFast_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionArccosineFast, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionArccosineFast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionArccosineFast_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionArccosineFast_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionArccosineFast_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionArccosineFast_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionArccosineFast_Statics::ClassParams = {
	&UMaterialExpressionArccosineFast::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionArccosineFast_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionArccosineFast_Statics::PropPointers),
	0,
	0x000020B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionArccosineFast_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionArccosineFast_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionArccosineFast()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionArccosineFast.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionArccosineFast.OuterSingleton, Z_Construct_UClass_UMaterialExpressionArccosineFast_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionArccosineFast.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionArccosineFast>()
{
	return UMaterialExpressionArccosineFast::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionArccosineFast);
UMaterialExpressionArccosineFast::~UMaterialExpressionArccosineFast() {}
// End Class UMaterialExpressionArccosineFast

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArccosineFast_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionArccosineFast, UMaterialExpressionArccosineFast::StaticClass, TEXT("UMaterialExpressionArccosineFast"), &Z_Registration_Info_UClass_UMaterialExpressionArccosineFast, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionArccosineFast), 2493436284U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArccosineFast_h_2325751230(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArccosineFast_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArccosineFast_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
