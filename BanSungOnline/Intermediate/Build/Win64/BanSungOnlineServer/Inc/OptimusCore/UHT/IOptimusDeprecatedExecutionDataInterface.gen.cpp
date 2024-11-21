// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/IOptimusDeprecatedExecutionDataInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusDeprecatedExecutionDataInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Interface UOptimusDeprecatedExecutionDataInterface
void UOptimusDeprecatedExecutionDataInterface::StaticRegisterNativesUOptimusDeprecatedExecutionDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusDeprecatedExecutionDataInterface);
UClass* Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_NoRegister()
{
	return UOptimusDeprecatedExecutionDataInterface::StaticClass();
}
struct Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusDeprecatedExecutionDataInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusDeprecatedExecutionDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_Statics::ClassParams = {
	&UOptimusDeprecatedExecutionDataInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface()
{
	if (!Z_Registration_Info_UClass_UOptimusDeprecatedExecutionDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusDeprecatedExecutionDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusDeprecatedExecutionDataInterface.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusDeprecatedExecutionDataInterface>()
{
	return UOptimusDeprecatedExecutionDataInterface::StaticClass();
}
UOptimusDeprecatedExecutionDataInterface::UOptimusDeprecatedExecutionDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusDeprecatedExecutionDataInterface);
UOptimusDeprecatedExecutionDataInterface::~UOptimusDeprecatedExecutionDataInterface() {}
// End Interface UOptimusDeprecatedExecutionDataInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeprecatedExecutionDataInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface, UOptimusDeprecatedExecutionDataInterface::StaticClass, TEXT("UOptimusDeprecatedExecutionDataInterface"), &Z_Registration_Info_UClass_UOptimusDeprecatedExecutionDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusDeprecatedExecutionDataInterface), 241850139U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeprecatedExecutionDataInterface_h_2013333723(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeprecatedExecutionDataInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeprecatedExecutionDataInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
