// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionRotator.h"
#include "Runtime/Engine/Public/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionRotator() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRotator();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRotator_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionRotator
void UMaterialExpressionRotator::StaticRegisterNativesUMaterialExpressionRotator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionRotator);
UClass* Z_Construct_UClass_UMaterialExpressionRotator_NoRegister()
{
	return UMaterialExpressionRotator::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionRotator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionRotator.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionRotator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coordinate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionRotator.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstCoordinate' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionRotator.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to Game Time if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterX_MetaData[] = {
		{ "Category", "MaterialExpressionRotator" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionRotator.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterY_MetaData[] = {
		{ "Category", "MaterialExpressionRotator" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionRotator.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "MaterialExpressionRotator" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionRotator.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstCoordinate_MetaData[] = {
		{ "Category", "MaterialExpressionRotator" },
		{ "Comment", "/** only used if Coordinate is not hooked up */" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionRotator.h" },
		{ "OverridingInputProperty", "Coordinate" },
		{ "ToolTip", "only used if Coordinate is not hooked up" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CenterX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CenterY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ConstCoordinate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionRotator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Coordinate = { "Coordinate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRotator, Coordinate), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coordinate_MetaData), NewProp_Coordinate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRotator, Time), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_CenterX = { "CenterX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRotator, CenterX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterX_MetaData), NewProp_CenterX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_CenterY = { "CenterY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRotator, CenterY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterY_MetaData), NewProp_CenterY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRotator, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_ConstCoordinate = { "ConstCoordinate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRotator, ConstCoordinate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstCoordinate_MetaData), NewProp_ConstCoordinate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Coordinate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_CenterX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_CenterY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_ConstCoordinate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionRotator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionRotator_Statics::ClassParams = {
	&UMaterialExpressionRotator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionRotator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotator_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotator_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionRotator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionRotator()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionRotator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionRotator.OuterSingleton, Z_Construct_UClass_UMaterialExpressionRotator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionRotator.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionRotator>()
{
	return UMaterialExpressionRotator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionRotator);
UMaterialExpressionRotator::~UMaterialExpressionRotator() {}
// End Class UMaterialExpressionRotator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRotator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionRotator, UMaterialExpressionRotator::StaticClass, TEXT("UMaterialExpressionRotator"), &Z_Registration_Info_UClass_UMaterialExpressionRotator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionRotator), 2986950625U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRotator_h_2468538991(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRotator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRotator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
