// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceRasterizationGrid3D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceRasterizationGrid3D() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3D();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRasterizationGrid3D();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRasterizationGrid3D_NoRegister();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceRasterizationGrid3D
void UNiagaraDataInterfaceRasterizationGrid3D::StaticRegisterNativesUNiagaraDataInterfaceRasterizationGrid3D()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceRasterizationGrid3D);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceRasterizationGrid3D_NoRegister()
{
	return UNiagaraDataInterfaceRasterizationGrid3D::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceRasterizationGrid3D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "DisplayName", "Rasterization Grid3D" },
		{ "IncludePath", "NiagaraDataInterfaceRasterizationGrid3D.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRasterizationGrid3D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumAttributes_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// Number of attributes stored on the grid\n" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRasterizationGrid3D.h" },
		{ "ToolTip", "Number of attributes stored on the grid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRasterizationGrid3D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetValue_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRasterizationGrid3D.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumAttributes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Precision;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResetValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceRasterizationGrid3D>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRasterizationGrid3D_Statics::NewProp_NumAttributes = { "NumAttributes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceRasterizationGrid3D, NumAttributes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumAttributes_MetaData), NewProp_NumAttributes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRasterizationGrid3D_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceRasterizationGrid3D, Precision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Precision_MetaData), NewProp_Precision_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRasterizationGrid3D_Statics::NewProp_ResetValue = { "ResetValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceRasterizationGrid3D, ResetValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetValue_MetaData), NewProp_ResetValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceRasterizationGrid3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRasterizationGrid3D_Statics::NewProp_NumAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRasterizationGrid3D_Statics::NewProp_Precision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRasterizationGrid3D_Statics::NewProp_ResetValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRasterizationGrid3D_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceRasterizationGrid3D_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceGrid3D,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRasterizationGrid3D_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceRasterizationGrid3D_Statics::ClassParams = {
	&UNiagaraDataInterfaceRasterizationGrid3D::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceRasterizationGrid3D_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRasterizationGrid3D_Statics::PropPointers),
	0,
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRasterizationGrid3D_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceRasterizationGrid3D_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceRasterizationGrid3D()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceRasterizationGrid3D.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceRasterizationGrid3D.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceRasterizationGrid3D_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceRasterizationGrid3D.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceRasterizationGrid3D>()
{
	return UNiagaraDataInterfaceRasterizationGrid3D::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceRasterizationGrid3D);
UNiagaraDataInterfaceRasterizationGrid3D::~UNiagaraDataInterfaceRasterizationGrid3D() {}
// End Class UNiagaraDataInterfaceRasterizationGrid3D

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRasterizationGrid3D_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceRasterizationGrid3D, UNiagaraDataInterfaceRasterizationGrid3D::StaticClass, TEXT("UNiagaraDataInterfaceRasterizationGrid3D"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceRasterizationGrid3D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceRasterizationGrid3D), 1577240346U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRasterizationGrid3D_h_4002979499(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRasterizationGrid3D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRasterizationGrid3D_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
