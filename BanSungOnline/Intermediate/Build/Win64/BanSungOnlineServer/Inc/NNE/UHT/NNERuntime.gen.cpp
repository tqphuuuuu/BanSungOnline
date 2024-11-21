// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NNE/Public/NNERuntime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNERuntime() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NNE_API UClass* Z_Construct_UClass_UNNERuntime();
NNE_API UClass* Z_Construct_UClass_UNNERuntime_NoRegister();
UPackage* Z_Construct_UPackage__Script_NNE();
// End Cross Module References

// Begin Interface UNNERuntime
void UNNERuntime::StaticRegisterNativesUNNERuntime()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNNERuntime);
UClass* Z_Construct_UClass_UNNERuntime_NoRegister()
{
	return UNNERuntime::StaticClass();
}
struct Z_Construct_UClass_UNNERuntime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NNERuntime.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INNERuntime>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNNERuntime_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NNE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNNERuntime_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNNERuntime_Statics::ClassParams = {
	&UNNERuntime::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNNERuntime_Statics::Class_MetaDataParams), Z_Construct_UClass_UNNERuntime_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNNERuntime()
{
	if (!Z_Registration_Info_UClass_UNNERuntime.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNNERuntime.OuterSingleton, Z_Construct_UClass_UNNERuntime_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNNERuntime.OuterSingleton;
}
template<> NNE_API UClass* StaticClass<UNNERuntime>()
{
	return UNNERuntime::StaticClass();
}
UNNERuntime::UNNERuntime(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNNERuntime);
UNNERuntime::~UNNERuntime() {}
// End Interface UNNERuntime

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntime_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNNERuntime, UNNERuntime::StaticClass, TEXT("UNNERuntime"), &Z_Registration_Info_UClass_UNNERuntime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNNERuntime), 2996562048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntime_h_1827542900(TEXT("/Script/NNE"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntime_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
