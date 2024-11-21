// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/Modules/NiagaraStatelessModule_ScaleColor.h"
#include "Niagara/Internal/Stateless/NiagaraStatelessDistribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_ScaleColor() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_ScaleColor();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_ScaleColor_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionColor();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraStatelessModule_ScaleColor
void UNiagaraStatelessModule_ScaleColor::StaticRegisterNativesUNiagaraStatelessModule_ScaleColor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessModule_ScaleColor);
UClass* Z_Construct_UClass_UNiagaraStatelessModule_ScaleColor_NoRegister()
{
	return UNiagaraStatelessModule_ScaleColor::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessModule_ScaleColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Scales the color of the particle\n" },
		{ "DisplayName", "Scale Color" },
		{ "IncludePath", "Stateless/Modules/NiagaraStatelessModule_ScaleColor.h" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ScaleColor.h" },
		{ "ToolTip", "Scales the color of the particle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisplayName", "Scale" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ScaleColor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleDistribution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessModule_ScaleColor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ScaleColor_Statics::NewProp_ScaleDistribution = { "ScaleDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ScaleColor, ScaleDistribution), Z_Construct_UScriptStruct_FNiagaraDistributionColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleDistribution_MetaData), NewProp_ScaleDistribution_MetaData) }; // 3673554679
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStatelessModule_ScaleColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ScaleColor_Statics::NewProp_ScaleDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ScaleColor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraStatelessModule_ScaleColor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraStatelessModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ScaleColor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessModule_ScaleColor_Statics::ClassParams = {
	&UNiagaraStatelessModule_ScaleColor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraStatelessModule_ScaleColor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ScaleColor_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ScaleColor_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessModule_ScaleColor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessModule_ScaleColor()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleColor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleColor.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessModule_ScaleColor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleColor.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessModule_ScaleColor>()
{
	return UNiagaraStatelessModule_ScaleColor::StaticClass();
}
UNiagaraStatelessModule_ScaleColor::UNiagaraStatelessModule_ScaleColor() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessModule_ScaleColor);
UNiagaraStatelessModule_ScaleColor::~UNiagaraStatelessModule_ScaleColor() {}
// End Class UNiagaraStatelessModule_ScaleColor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleColor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStatelessModule_ScaleColor, UNiagaraStatelessModule_ScaleColor::StaticClass, TEXT("UNiagaraStatelessModule_ScaleColor"), &Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessModule_ScaleColor), 2438237927U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleColor_h_1946912241(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleColor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleColor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
