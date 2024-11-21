// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NNE/Public/NNERuntimeCPU.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNERuntimeCPU() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NNE_API UClass* Z_Construct_UClass_UNNERuntimeCPU();
NNE_API UClass* Z_Construct_UClass_UNNERuntimeCPU_NoRegister();
UPackage* Z_Construct_UPackage__Script_NNE();
// End Cross Module References

// Begin Interface UNNERuntimeCPU
void UNNERuntimeCPU::StaticRegisterNativesUNNERuntimeCPU()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNNERuntimeCPU);
UClass* Z_Construct_UClass_UNNERuntimeCPU_NoRegister()
{
	return UNNERuntimeCPU::StaticClass();
}
struct Z_Construct_UClass_UNNERuntimeCPU_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NNERuntimeCPU.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INNERuntimeCPU>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNNERuntimeCPU_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NNE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNNERuntimeCPU_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNNERuntimeCPU_Statics::ClassParams = {
	&UNNERuntimeCPU::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNNERuntimeCPU_Statics::Class_MetaDataParams), Z_Construct_UClass_UNNERuntimeCPU_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNNERuntimeCPU()
{
	if (!Z_Registration_Info_UClass_UNNERuntimeCPU.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNNERuntimeCPU.OuterSingleton, Z_Construct_UClass_UNNERuntimeCPU_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNNERuntimeCPU.OuterSingleton;
}
template<> NNE_API UClass* StaticClass<UNNERuntimeCPU>()
{
	return UNNERuntimeCPU::StaticClass();
}
UNNERuntimeCPU::UNNERuntimeCPU(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNNERuntimeCPU);
UNNERuntimeCPU::~UNNERuntimeCPU() {}
// End Interface UNNERuntimeCPU

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeCPU_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNNERuntimeCPU, UNNERuntimeCPU::StaticClass, TEXT("UNNERuntimeCPU"), &Z_Registration_Info_UClass_UNNERuntimeCPU, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNNERuntimeCPU), 4077194045U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeCPU_h_3443458652(TEXT("/Script/NNE"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeCPU_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeCPU_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
