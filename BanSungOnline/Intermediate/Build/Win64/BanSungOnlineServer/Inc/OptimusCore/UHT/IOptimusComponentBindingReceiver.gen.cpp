// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/IOptimusComponentBindingReceiver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusComponentBindingReceiver() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentBindingReceiver();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentBindingReceiver_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Interface UOptimusComponentBindingReceiver
void UOptimusComponentBindingReceiver::StaticRegisterNativesUOptimusComponentBindingReceiver()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusComponentBindingReceiver);
UClass* Z_Construct_UClass_UOptimusComponentBindingReceiver_NoRegister()
{
	return UOptimusComponentBindingReceiver::StaticClass();
}
struct Z_Construct_UClass_UOptimusComponentBindingReceiver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusComponentBindingReceiver.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusComponentBindingReceiver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusComponentBindingReceiver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComponentBindingReceiver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusComponentBindingReceiver_Statics::ClassParams = {
	&UOptimusComponentBindingReceiver::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComponentBindingReceiver_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusComponentBindingReceiver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusComponentBindingReceiver()
{
	if (!Z_Registration_Info_UClass_UOptimusComponentBindingReceiver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusComponentBindingReceiver.OuterSingleton, Z_Construct_UClass_UOptimusComponentBindingReceiver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusComponentBindingReceiver.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusComponentBindingReceiver>()
{
	return UOptimusComponentBindingReceiver::StaticClass();
}
UOptimusComponentBindingReceiver::UOptimusComponentBindingReceiver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusComponentBindingReceiver);
UOptimusComponentBindingReceiver::~UOptimusComponentBindingReceiver() {}
// End Interface UOptimusComponentBindingReceiver

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingReceiver_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusComponentBindingReceiver, UOptimusComponentBindingReceiver::StaticClass, TEXT("UOptimusComponentBindingReceiver"), &Z_Registration_Info_UClass_UOptimusComponentBindingReceiver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusComponentBindingReceiver), 1637315596U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingReceiver_h_31174510(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingReceiver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingReceiver_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
