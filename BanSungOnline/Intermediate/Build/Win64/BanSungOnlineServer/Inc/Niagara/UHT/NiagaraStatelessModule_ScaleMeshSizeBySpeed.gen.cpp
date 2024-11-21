// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/Modules/NiagaraStatelessModule_ScaleMeshSizeBySpeed.h"
#include "Niagara/Internal/Stateless/NiagaraStatelessDistribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_ScaleMeshSizeBySpeed() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionFloat();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraStatelessModule_ScaleMeshSizeBySpeed
void UNiagaraStatelessModule_ScaleMeshSizeBySpeed::StaticRegisterNativesUNiagaraStatelessModule_ScaleMeshSizeBySpeed()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessModule_ScaleMeshSizeBySpeed);
UClass* Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_NoRegister()
{
	return UNiagaraStatelessModule_ScaleMeshSizeBySpeed::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Applies a modifier to mesh scale based on the velocity of the particle\n" },
		{ "DisplayName", "Scale Mesh Size By Speed" },
		{ "IncludePath", "Stateless/Modules/NiagaraStatelessModule_ScaleMeshSizeBySpeed.h" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ScaleMeshSizeBySpeed.h" },
		{ "ToolTip", "Applies a modifier to mesh scale based on the velocity of the particle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityThreshold_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ClampMin", "0.01" },
		{ "DisableRangeDistribution", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ScaleMeshSizeBySpeed.h" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinScaleFactor_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ClampMin", "0.01" },
		{ "DisableRangeDistribution", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ScaleMeshSizeBySpeed.h" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxScaleFactor_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ClampMin", "0.01" },
		{ "DisableRangeDistribution", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ScaleMeshSizeBySpeed.h" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSampleScaleFactorByCurve_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ScaleMeshSizeBySpeed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleFactorCurve_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisableBindingDistribution", "" },
		{ "DisableRangeDistribution", "" },
		{ "EditCondition", "bSampleScaleFactorByCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ScaleMeshSizeBySpeed.h" },
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
		TCppClassTypeTraits<UNiagaraStatelessModule_ScaleMeshSizeBySpeed>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::NewProp_VelocityThreshold = { "VelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ScaleMeshSizeBySpeed, VelocityThreshold), Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityThreshold_MetaData), NewProp_VelocityThreshold_MetaData) }; // 1814083401
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::NewProp_MinScaleFactor = { "MinScaleFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ScaleMeshSizeBySpeed, MinScaleFactor), Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinScaleFactor_MetaData), NewProp_MinScaleFactor_MetaData) }; // 196473061
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::NewProp_MaxScaleFactor = { "MaxScaleFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ScaleMeshSizeBySpeed, MaxScaleFactor), Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxScaleFactor_MetaData), NewProp_MaxScaleFactor_MetaData) }; // 196473061
void Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::NewProp_bSampleScaleFactorByCurve_SetBit(void* Obj)
{
	((UNiagaraStatelessModule_ScaleMeshSizeBySpeed*)Obj)->bSampleScaleFactorByCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::NewProp_bSampleScaleFactorByCurve = { "bSampleScaleFactorByCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraStatelessModule_ScaleMeshSizeBySpeed), &Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::NewProp_bSampleScaleFactorByCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSampleScaleFactorByCurve_MetaData), NewProp_bSampleScaleFactorByCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::NewProp_SampleFactorCurve = { "SampleFactorCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ScaleMeshSizeBySpeed, SampleFactorCurve), Z_Construct_UScriptStruct_FNiagaraDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleFactorCurve_MetaData), NewProp_SampleFactorCurve_MetaData) }; // 3828066781
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::NewProp_VelocityThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::NewProp_MinScaleFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::NewProp_MaxScaleFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::NewProp_bSampleScaleFactorByCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::NewProp_SampleFactorCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraStatelessModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::ClassParams = {
	&UNiagaraStatelessModule_ScaleMeshSizeBySpeed::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessModule_ScaleMeshSizeBySpeed>()
{
	return UNiagaraStatelessModule_ScaleMeshSizeBySpeed::StaticClass();
}
UNiagaraStatelessModule_ScaleMeshSizeBySpeed::UNiagaraStatelessModule_ScaleMeshSizeBySpeed() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessModule_ScaleMeshSizeBySpeed);
UNiagaraStatelessModule_ScaleMeshSizeBySpeed::~UNiagaraStatelessModule_ScaleMeshSizeBySpeed() {}
// End Class UNiagaraStatelessModule_ScaleMeshSizeBySpeed

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleMeshSizeBySpeed_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed, UNiagaraStatelessModule_ScaleMeshSizeBySpeed::StaticClass, TEXT("UNiagaraStatelessModule_ScaleMeshSizeBySpeed"), &Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessModule_ScaleMeshSizeBySpeed), 2216133942U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleMeshSizeBySpeed_h_2140233853(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleMeshSizeBySpeed_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleMeshSizeBySpeed_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
