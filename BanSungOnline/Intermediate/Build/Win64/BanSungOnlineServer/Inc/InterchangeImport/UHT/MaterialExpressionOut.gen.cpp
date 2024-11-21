// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Private/MaterialX/MaterialExpressions/MaterialExpressionOut.h"
#include "Runtime/Engine/Public/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionOut() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialXOut();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialXOut_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Class UMaterialExpressionMaterialXOut
void UMaterialExpressionMaterialXOut::StaticRegisterNativesUMaterialExpressionMaterialXOut()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionMaterialXOut);
UClass* Z_Construct_UClass_UMaterialExpressionMaterialXOut_NoRegister()
{
	return UMaterialExpressionMaterialXOut::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionMaterialXOut_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Merge nodes take two 4-channel (color4) inputs and use the built-in alpha channel(s) to control the\n * compositing of the A and B inputs. \"A\" and \"B\" refer to the non-alpha channels of the A and B inputs respectively,\n * and \"a\" and \"b\" refer to the alpha channels of the A and B inputs.\n * Merge nodes are only defined for float4 inputs\n * Merge nodes support an optional float input Alpha , which can be used to mix the\n * original B value with the result of the blend operation.\n *\n * Operation: A(1-b)\n * Result: Lerp(B, A(1-b), Alpha)\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialX/MaterialExpressions/MaterialExpressionOut.h" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionOut.h" },
		{ "Private", "" },
		{ "ToolTip", "Merge nodes take two 4-channel (color4) inputs and use the built-in alpha channel(s) to control the\ncompositing of the A and B inputs. \"A\" and \"B\" refer to the non-alpha channels of the A and B inputs respectively,\nand \"a\" and \"b\" refer to the alpha channels of the A and B inputs.\nMerge nodes are only defined for float4 inputs\nMerge nodes support an optional float input Alpha , which can be used to mix the\noriginal B value with the result of the blend operation.\n\nOperation: A(1-b)\nResult: Lerp(B, A(1-b), Alpha)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionOut.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionOut.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionOut.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstAlpha' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstAlpha_MetaData[] = {
		{ "Category", "MaterialExpressionLinearInterpolate" },
		{ "Comment", "/** only used if Alpha is not hooked up */" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionOut.h" },
		{ "OverridingInputProperty", "Alpha" },
		{ "ToolTip", "only used if Alpha is not hooked up" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstAlpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionMaterialXOut>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXOut_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXOut, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXOut_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXOut, B), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXOut_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXOut, Alpha), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXOut_Statics::NewProp_ConstAlpha = { "ConstAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXOut, ConstAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstAlpha_MetaData), NewProp_ConstAlpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionMaterialXOut_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXOut_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXOut_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXOut_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXOut_Statics::NewProp_ConstAlpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXOut_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionMaterialXOut_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXOut_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionMaterialXOut_Statics::ClassParams = {
	&UMaterialExpressionMaterialXOut::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionMaterialXOut_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXOut_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXOut_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionMaterialXOut_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionMaterialXOut()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionMaterialXOut.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionMaterialXOut.OuterSingleton, Z_Construct_UClass_UMaterialExpressionMaterialXOut_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionMaterialXOut.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UMaterialExpressionMaterialXOut>()
{
	return UMaterialExpressionMaterialXOut::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionMaterialXOut);
UMaterialExpressionMaterialXOut::~UMaterialExpressionMaterialXOut() {}
// End Class UMaterialExpressionMaterialXOut

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionOut_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionMaterialXOut, UMaterialExpressionMaterialXOut::StaticClass, TEXT("UMaterialExpressionMaterialXOut"), &Z_Registration_Info_UClass_UMaterialExpressionMaterialXOut, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionMaterialXOut), 2280151093U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionOut_h_1686453750(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionOut_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionOut_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
