// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NNERuntimeORT/Private/NNERuntimeORT.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNERuntimeORT() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NNE_API UClass* Z_Construct_UClass_UNNERuntime_NoRegister();
NNE_API UClass* Z_Construct_UClass_UNNERuntimeCPU_NoRegister();
NNE_API UClass* Z_Construct_UClass_UNNERuntimeGPU_NoRegister();
NNE_API UClass* Z_Construct_UClass_UNNERuntimeNPU_NoRegister();
NNE_API UClass* Z_Construct_UClass_UNNERuntimeRDG_NoRegister();
NNERUNTIMEORT_API UClass* Z_Construct_UClass_UNNERuntimeORTCpu();
NNERUNTIMEORT_API UClass* Z_Construct_UClass_UNNERuntimeORTCpu_NoRegister();
NNERUNTIMEORT_API UClass* Z_Construct_UClass_UNNERuntimeORTDml();
NNERUNTIMEORT_API UClass* Z_Construct_UClass_UNNERuntimeORTDml_NoRegister();
UPackage* Z_Construct_UPackage__Script_NNERuntimeORT();
// End Cross Module References

// Begin Class UNNERuntimeORTCpu
void UNNERuntimeORTCpu::StaticRegisterNativesUNNERuntimeORTCpu()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNNERuntimeORTCpu);
UClass* Z_Construct_UClass_UNNERuntimeORTCpu_NoRegister()
{
	return UNNERuntimeORTCpu::StaticClass();
}
struct Z_Construct_UClass_UNNERuntimeORTCpu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NNERuntimeORT.h" },
		{ "ModuleRelativePath", "Private/NNERuntimeORT.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNNERuntimeORTCpu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNNERuntimeORTCpu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NNERuntimeORT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNNERuntimeORTCpu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNNERuntimeORTCpu_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNNERuntime_NoRegister, (int32)VTABLE_OFFSET(UNNERuntimeORTCpu, INNERuntime), false },  // 2996562048
	{ Z_Construct_UClass_UNNERuntimeCPU_NoRegister, (int32)VTABLE_OFFSET(UNNERuntimeORTCpu, INNERuntimeCPU), false },  // 4077194045
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNNERuntimeORTCpu_Statics::ClassParams = {
	&UNNERuntimeORTCpu::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNNERuntimeORTCpu_Statics::Class_MetaDataParams), Z_Construct_UClass_UNNERuntimeORTCpu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNNERuntimeORTCpu()
{
	if (!Z_Registration_Info_UClass_UNNERuntimeORTCpu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNNERuntimeORTCpu.OuterSingleton, Z_Construct_UClass_UNNERuntimeORTCpu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNNERuntimeORTCpu.OuterSingleton;
}
template<> NNERUNTIMEORT_API UClass* StaticClass<UNNERuntimeORTCpu>()
{
	return UNNERuntimeORTCpu::StaticClass();
}
UNNERuntimeORTCpu::UNNERuntimeORTCpu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNNERuntimeORTCpu);
// End Class UNNERuntimeORTCpu

// Begin Class UNNERuntimeORTDml
void UNNERuntimeORTDml::StaticRegisterNativesUNNERuntimeORTDml()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNNERuntimeORTDml);
UClass* Z_Construct_UClass_UNNERuntimeORTDml_NoRegister()
{
	return UNNERuntimeORTDml::StaticClass();
}
struct Z_Construct_UClass_UNNERuntimeORTDml_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NNERuntimeORT.h" },
		{ "ModuleRelativePath", "Private/NNERuntimeORT.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNNERuntimeORTDml>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNNERuntimeORTDml_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NNERuntimeORT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNNERuntimeORTDml_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNNERuntimeORTDml_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNNERuntime_NoRegister, (int32)VTABLE_OFFSET(UNNERuntimeORTDml, INNERuntime), false },  // 2996562048
	{ Z_Construct_UClass_UNNERuntimeGPU_NoRegister, (int32)VTABLE_OFFSET(UNNERuntimeORTDml, INNERuntimeGPU), false },  // 2912915513
	{ Z_Construct_UClass_UNNERuntimeRDG_NoRegister, (int32)VTABLE_OFFSET(UNNERuntimeORTDml, INNERuntimeRDG), false },  // 809491233
	{ Z_Construct_UClass_UNNERuntimeNPU_NoRegister, (int32)VTABLE_OFFSET(UNNERuntimeORTDml, INNERuntimeNPU), false },  // 4197439992
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNNERuntimeORTDml_Statics::ClassParams = {
	&UNNERuntimeORTDml::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNNERuntimeORTDml_Statics::Class_MetaDataParams), Z_Construct_UClass_UNNERuntimeORTDml_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNNERuntimeORTDml()
{
	if (!Z_Registration_Info_UClass_UNNERuntimeORTDml.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNNERuntimeORTDml.OuterSingleton, Z_Construct_UClass_UNNERuntimeORTDml_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNNERuntimeORTDml.OuterSingleton;
}
template<> NNERUNTIMEORT_API UClass* StaticClass<UNNERuntimeORTDml>()
{
	return UNNERuntimeORTDml::StaticClass();
}
UNNERuntimeORTDml::UNNERuntimeORTDml(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNNERuntimeORTDml);
// End Class UNNERuntimeORTDml

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORT_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNNERuntimeORTCpu, UNNERuntimeORTCpu::StaticClass, TEXT("UNNERuntimeORTCpu"), &Z_Registration_Info_UClass_UNNERuntimeORTCpu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNNERuntimeORTCpu), 3020384228U) },
		{ Z_Construct_UClass_UNNERuntimeORTDml, UNNERuntimeORTDml::StaticClass, TEXT("UNNERuntimeORTDml"), &Z_Registration_Info_UClass_UNNERuntimeORTDml, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNNERuntimeORTDml), 1620435734U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORT_h_1026779328(TEXT("/Script/NNERuntimeORT"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORT_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORT_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
