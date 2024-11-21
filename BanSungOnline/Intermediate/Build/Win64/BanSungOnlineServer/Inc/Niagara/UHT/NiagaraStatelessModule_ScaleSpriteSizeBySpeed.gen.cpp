// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/Modules/NiagaraStatelessModule_ScaleSpriteSizeBySpeed.h"
#include "Niagara/Internal/Stateless/NiagaraStatelessDistribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_ScaleSpriteSizeBySpeed() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionFloat();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraStatelessModule_ScaleSpriteSizeBySpeed
void UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::StaticRegisterNativesUNiagaraStatelessModule_ScaleSpriteSizeBySpeed()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessModule_ScaleSpriteSizeBySpeed);
UClass* Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_NoRegister()
{
	return UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Applies a modifier to sprite size based on the velocity of the particle\n" },
		{ "DisplayName", "Scale Sprite Size By Speed" },
		{ "IncludePath", "Stateless/Modules/NiagaraStatelessModule_ScaleSpriteSizeBySpeed.h" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ScaleSpriteSizeBySpeed.h" },
		{ "ToolTip", "Applies a modifier to sprite size based on the velocity of the particle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityThreshold_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ClampMin", "0.01" },
		{ "DisableRangeDistribution", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ScaleSpriteSizeBySpeed.h" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinScaleFactor_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ClampMin", "0.01" },
		{ "DisableRangeDistribution", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ScaleSpriteSizeBySpeed.h" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxScaleFactor_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ClampMin", "0.01" },
		{ "DisableRangeDistribution", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ScaleSpriteSizeBySpeed.h" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSampleScaleFactorByCurve_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ScaleSpriteSizeBySpeed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleFactorCurve_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisableBindingDistribution", "" },
		{ "DisableRangeDistribution", "" },
		{ "EditCondition", "bSampleScaleFactorByCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ScaleSpriteSizeBySpeed.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinScaleFactor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxScaleFactor;
	static void NewProp_bSampleScaleFactorByCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSampleScaleFactorByCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SampleFactorCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessModule_ScaleSpriteSizeBySpeed>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::NewProp_VelocityThreshold = { "VelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ScaleSpriteSizeBySpeed, VelocityThreshold), Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityThreshold_MetaData), NewProp_VelocityThreshold_MetaData) }; // 1814083401
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::NewProp_MinScaleFactor = { "MinScaleFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ScaleSpriteSizeBySpeed, MinScaleFactor), Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinScaleFactor_MetaData), NewProp_MinScaleFactor_MetaData) }; // 1029937019
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::NewProp_MaxScaleFactor = { "MaxScaleFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ScaleSpriteSizeBySpeed, MaxScaleFactor), Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxScaleFactor_MetaData), NewProp_MaxScaleFactor_MetaData) }; // 1029937019
void Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::NewProp_bSampleScaleFactorByCurve_SetBit(void* Obj)
{
	((UNiagaraStatelessModule_ScaleSpriteSizeBySpeed*)Obj)->bSampleScaleFactorByCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::NewProp_bSampleScaleFactorByCurve = { "bSampleScaleFactorByCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraStatelessModule_ScaleSpriteSizeBySpeed), &Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::NewProp_bSampleScaleFactorByCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSampleScaleFactorByCurve_MetaData), NewProp_bSampleScaleFactorByCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::NewProp_SampleFactorCurve = { "SampleFactorCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ScaleSpriteSizeBySpeed, SampleFactorCurve), Z_Construct_UScriptStruct_FNiagaraDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleFactorCurve_MetaData), NewProp_SampleFactorCurve_MetaData) }; // 3828066781
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::NewProp_VelocityThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::NewProp_MinScaleFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::NewProp_MaxScaleFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::NewProp_bSampleScaleFactorByCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::NewProp_SampleFactorCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraStatelessModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::ClassParams = {
	&UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessModule_ScaleSpriteSizeBySpeed>()
{
	return UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::StaticClass();
}
UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::UNiagaraStatelessModule_ScaleSpriteSizeBySpeed() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessModule_ScaleSpriteSizeBySpeed);
UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::~UNiagaraStatelessModule_ScaleSpriteSizeBySpeed() {}
// End Class UNiagaraStatelessModule_ScaleSpriteSizeBySpeed

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleSpriteSizeBySpeed_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed, UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::StaticClass, TEXT("UNiagaraStatelessModule_ScaleSpriteSizeBySpeed"), &Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessModule_ScaleSpriteSizeBySpeed), 388377991U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleSpriteSizeBySpeed_h_3363202956(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleSpriteSizeBySpeed_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleSpriteSizeBySpeed_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
