// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionExecBegin.h"
#include "Runtime/Engine/Public/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionExecBegin() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionExecBegin();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionExecBegin_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionExecOutput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionExecBegin
void UMaterialExpressionExecBegin::StaticRegisterNativesUMaterialExpressionExecBegin()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionExecBegin);
UClass* Z_Construct_UClass_UMaterialExpressionExecBegin_NoRegister()
{
	return UMaterialExpressionExecBegin::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionExecBegin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionExecBegin.h" },
		{ "MaterialControlFlow", "" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionExecBegin.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Exec_MetaData[] = {
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionExecBegin.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Exec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionExecBegin>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionExecBegin_Statics::NewProp_Exec = { "Exec", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionExecBegin, Exec), Z_Construct_UScriptStruct_FExpressionExecOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Exec_MetaData), NewProp_Exec_MetaData) }; // 2951550406
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionExecBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionExecBegin_Statics::NewProp_Exec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionExecBegin_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionExecBegin_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionExecBegin_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionExecBegin_Statics::ClassParams = {
	&UMaterialExpressionExecBegin::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionExecBegin_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionExecBegin_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionExecBegin_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionExecBegin_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionExecBegin()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionExecBegin.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionExecBegin.OuterSingleton, Z_Construct_UClass_UMaterialExpressionExecBegin_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionExecBegin.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionExecBegin>()
{
	return UMaterialExpressionExecBegin::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionExecBegin);
UMaterialExpressionExecBegin::~UMaterialExpressionExecBegin() {}
// End Class UMaterialExpressionExecBegin

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionExecBegin_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionExecBegin, UMaterialExpressionExecBegin::StaticClass, TEXT("UMaterialExpressionExecBegin"), &Z_Registration_Info_UClass_UMaterialExpressionExecBegin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionExecBegin), 4204445710U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionExecBegin_h_3351130784(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionExecBegin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionExecBegin_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
