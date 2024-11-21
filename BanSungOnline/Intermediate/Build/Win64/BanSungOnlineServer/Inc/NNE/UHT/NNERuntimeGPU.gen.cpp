// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NNE/Public/NNERuntimeGPU.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNERuntimeGPU() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NNE_API UClass* Z_Construct_UClass_UNNERuntimeGPU();
NNE_API UClass* Z_Construct_UClass_UNNERuntimeGPU_NoRegister();
UPackage* Z_Construct_UPackage__Script_NNE();
// End Cross Module References

// Begin Interface UNNERuntimeGPU
void UNNERuntimeGPU::StaticRegisterNativesUNNERuntimeGPU()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNNERuntimeGPU);
UClass* Z_Construct_UClass_UNNERuntimeGPU_NoRegister()
{
	return UNNERuntimeGPU::StaticClass();
}
struct Z_Construct_UClass_UNNERuntimeGPU_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NNERuntimeGPU.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INNERuntimeGPU>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNNERuntimeGPU_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NNE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNNERuntimeGPU_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNNERuntimeGPU_Statics::ClassParams = {
	&UNNERuntimeGPU::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNNERuntimeGPU_Statics::Class_MetaDataParams), Z_Construct_UClass_UNNERuntimeGPU_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNNERuntimeGPU()
{
	if (!Z_Registration_Info_UClass_UNNERuntimeGPU.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNNERuntimeGPU.OuterSingleton, Z_Construct_UClass_UNNERuntimeGPU_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNNERuntimeGPU.OuterSingleton;
}
template<> NNE_API UClass* StaticClass<UNNERuntimeGPU>()
{
	return UNNERuntimeGPU::StaticClass();
}
UNNERuntimeGPU::UNNERuntimeGPU(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNNERuntimeGPU);
UNNERuntimeGPU::~UNNERuntimeGPU() {}
// End Interface UNNERuntimeGPU

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeGPU_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNNERuntimeGPU, UNNERuntimeGPU::StaticClass, TEXT("UNNERuntimeGPU"), &Z_Registration_Info_UClass_UNNERuntimeGPU, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNNERuntimeGPU), 2912915513U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeGPU_h_972698343(TEXT("/Script/NNE"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeGPU_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeGPU_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
