// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/IOptimusPinMutabilityDefiner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusPinMutabilityDefiner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPinMutabilityDefiner();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPinMutabilityDefiner_NoRegister();
OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusPinMutability();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Enum EOptimusPinMutability
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptimusPinMutability;
static UEnum* EOptimusPinMutability_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOptimusPinMutability.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOptimusPinMutability.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OptimusCore_EOptimusPinMutability, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("EOptimusPinMutability"));
	}
	return Z_Registration_Info_UEnum_EOptimusPinMutability.OuterSingleton;
}
template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusPinMutability>()
{
	return EOptimusPinMutability_StaticEnum();
}
struct Z_Construct_UEnum_OptimusCore_EOptimusPinMutability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Immutable.Name", "EOptimusPinMutability::Immutable" },
		{ "ModuleRelativePath", "Public/IOptimusPinMutabilityDefiner.h" },
		{ "Mutable.Name", "EOptimusPinMutability::Mutable" },
		{ "Undefined.Name", "EOptimusPinMutability::Undefined" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOptimusPinMutability::Undefined", (int64)EOptimusPinMutability::Undefined },
		{ "EOptimusPinMutability::Immutable", (int64)EOptimusPinMutability::Immutable },
		{ "EOptimusPinMutability::Mutable", (int64)EOptimusPinMutability::Mutable },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OptimusCore_EOptimusPinMutability_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	"EOptimusPinMutability",
	"EOptimusPinMutability",
	Z_Construct_UEnum_OptimusCore_EOptimusPinMutability_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusPinMutability_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusPinMutability_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OptimusCore_EOptimusPinMutability_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OptimusCore_EOptimusPinMutability()
{
	if (!Z_Registration_Info_UEnum_EOptimusPinMutability.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptimusPinMutability.InnerSingleton, Z_Construct_UEnum_OptimusCore_EOptimusPinMutability_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOptimusPinMutability.InnerSingleton;
}
// End Enum EOptimusPinMutability

// Begin Interface UOptimusPinMutabilityDefiner
void UOptimusPinMutabilityDefiner::StaticRegisterNativesUOptimusPinMutabilityDefiner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusPinMutabilityDefiner);
UClass* Z_Construct_UClass_UOptimusPinMutabilityDefiner_NoRegister()
{
	return UOptimusPinMutabilityDefiner::StaticClass();
}
struct Z_Construct_UClass_UOptimusPinMutabilityDefiner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusPinMutabilityDefiner.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusPinMutabilityDefiner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusPinMutabilityDefiner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusPinMutabilityDefiner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusPinMutabilityDefiner_Statics::ClassParams = {
	&UOptimusPinMutabilityDefiner::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusPinMutabilityDefiner_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusPinMutabilityDefiner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusPinMutabilityDefiner()
{
	if (!Z_Registration_Info_UClass_UOptimusPinMutabilityDefiner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusPinMutabilityDefiner.OuterSingleton, Z_Construct_UClass_UOptimusPinMutabilityDefiner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusPinMutabilityDefiner.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusPinMutabilityDefiner>()
{
	return UOptimusPinMutabilityDefiner::StaticClass();
}
UOptimusPinMutabilityDefiner::UOptimusPinMutabilityDefiner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusPinMutabilityDefiner);
UOptimusPinMutabilityDefiner::~UOptimusPinMutabilityDefiner() {}
// End Interface UOptimusPinMutabilityDefiner

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPinMutabilityDefiner_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOptimusPinMutability_StaticEnum, TEXT("EOptimusPinMutability"), &Z_Registration_Info_UEnum_EOptimusPinMutability, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 607222362U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusPinMutabilityDefiner, UOptimusPinMutabilityDefiner::StaticClass, TEXT("UOptimusPinMutabilityDefiner"), &Z_Registration_Info_UClass_UOptimusPinMutabilityDefiner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusPinMutabilityDefiner), 3934412691U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPinMutabilityDefiner_h_2065184091(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPinMutabilityDefiner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPinMutabilityDefiner_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPinMutabilityDefiner_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPinMutabilityDefiner_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
