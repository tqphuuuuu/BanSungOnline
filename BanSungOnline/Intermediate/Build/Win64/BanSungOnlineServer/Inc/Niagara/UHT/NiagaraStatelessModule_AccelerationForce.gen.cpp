// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/Modules/NiagaraStatelessModule_AccelerationForce.h"
#include "Niagara/Internal/Stateless/NiagaraStatelessDistribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_AccelerationForce() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraStatelessModule_AccelerationForce
void UNiagaraStatelessModule_AccelerationForce::StaticRegisterNativesUNiagaraStatelessModule_AccelerationForce()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessModule_AccelerationForce);
UClass* Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce_NoRegister()
{
	return UNiagaraStatelessModule_AccelerationForce::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Apply acceleration which accumulates per frame\n" },
		{ "DisplayName", "Acceleration Force" },
		{ "IncludePath", "Stateless/Modules/NiagaraStatelessModule_AccelerationForce.h" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_AccelerationForce.h" },
		{ "ToolTip", "Apply acceleration which accumulates per frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisableBindingDistribution", "" },
		{ "DisableUniformDistribution", "" },
		{ "DisplayName", "Acceleration" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_AccelerationForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoordinateSpace_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_AccelerationForce.h" },
		{ "SegmentedDisplay", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccelerationDistribution;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_CoordinateSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CoordinateSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessModule_AccelerationForce>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce_Statics::NewProp_AccelerationDistribution = { "AccelerationDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_AccelerationForce, AccelerationDistribution), Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelerationDistribution_MetaData), NewProp_AccelerationDistribution_MetaData) }; // 196473061
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce_Statics::NewProp_CoordinateSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_AccelerationForce, CoordinateSpace), Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoordinateSpace_MetaData), NewProp_CoordinateSpace_MetaData) }; // 1588285965
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce_Statics::NewProp_AccelerationDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce_Statics::NewProp_CoordinateSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce_Statics::NewProp_CoordinateSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraStatelessModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce_Statics::ClassParams = {
	&UNiagaraStatelessModule_AccelerationForce::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessModule_AccelerationForce.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessModule_AccelerationForce.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessModule_AccelerationForce.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessModule_AccelerationForce>()
{
	return UNiagaraStatelessModule_AccelerationForce::StaticClass();
}
UNiagaraStatelessModule_AccelerationForce::UNiagaraStatelessModule_AccelerationForce() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessModule_AccelerationForce);
UNiagaraStatelessModule_AccelerationForce::~UNiagaraStatelessModule_AccelerationForce() {}
// End Class UNiagaraStatelessModule_AccelerationForce

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_AccelerationForce_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce, UNiagaraStatelessModule_AccelerationForce::StaticClass, TEXT("UNiagaraStatelessModule_AccelerationForce"), &Z_Registration_Info_UClass_UNiagaraStatelessModule_AccelerationForce, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessModule_AccelerationForce), 853642448U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_AccelerationForce_h_2343395959(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_AccelerationForce_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_AccelerationForce_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
