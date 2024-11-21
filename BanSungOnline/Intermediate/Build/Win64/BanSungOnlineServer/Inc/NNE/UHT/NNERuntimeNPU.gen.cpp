// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NNE/Public/NNERuntimeNPU.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNERuntimeNPU() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NNE_API UClass* Z_Construct_UClass_UNNERuntimeNPU();
NNE_API UClass* Z_Construct_UClass_UNNERuntimeNPU_NoRegister();
UPackage* Z_Construct_UPackage__Script_NNE();
// End Cross Module References

// Begin Interface UNNERuntimeNPU
void UNNERuntimeNPU::StaticRegisterNativesUNNERuntimeNPU()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNNERuntimeNPU);
UClass* Z_Construct_UClass_UNNERuntimeNPU_NoRegister()
{
	return UNNERuntimeNPU::StaticClass();
}
struct Z_Construct_UClass_UNNERuntimeNPU_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NNERuntimeNPU.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INNERuntimeNPU>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNNERuntimeNPU_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NNE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNNERuntimeNPU_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNNERuntimeNPU_Statics::ClassParams = {
	&UNNERuntimeNPU::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNNERuntimeNPU_Statics::Class_MetaDataParams), Z_Construct_UClass_UNNERuntimeNPU_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNNERuntimeNPU()
{
	if (!Z_Registration_Info_UClass_UNNERuntimeNPU.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNNERuntimeNPU.OuterSingleton, Z_Construct_UClass_UNNERuntimeNPU_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNNERuntimeNPU.OuterSingleton;
}
template<> NNE_API UClass* StaticClass<UNNERuntimeNPU>()
{
	return UNNERuntimeNPU::StaticClass();
}
UNNERuntimeNPU::UNNERuntimeNPU(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNNERuntimeNPU);
UNNERuntimeNPU::~UNNERuntimeNPU() {}
// End Interface UNNERuntimeNPU

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeNPU_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNNERuntimeNPU, UNNERuntimeNPU::StaticClass, TEXT("UNNERuntimeNPU"), &Z_Registration_Info_UClass_UNNERuntimeNPU, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNNERuntimeNPU), 4197439992U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeNPU_h_1385226328(TEXT("/Script/NNE"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeNPU_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeNPU_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
