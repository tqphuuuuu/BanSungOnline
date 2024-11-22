// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Streaming/StreamingWorldSubsystemInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamingWorldSubsystemInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UStreamingWorldSubsystemInterface();
ENGINE_API UClass* Z_Construct_UClass_UStreamingWorldSubsystemInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UStreamingWorldSubsystemInterface
void UStreamingWorldSubsystemInterface::StaticRegisterNativesUStreamingWorldSubsystemInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStreamingWorldSubsystemInterface);
UClass* Z_Construct_UClass_UStreamingWorldSubsystemInterface_NoRegister()
{
	return UStreamingWorldSubsystemInterface::StaticClass();
}
struct Z_Construct_UClass_UStreamingWorldSubsystemInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Streaming/StreamingWorldSubsystemInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStreamingWorldSubsystemInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStreamingWorldSubsystemInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingWorldSubsystemInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStreamingWorldSubsystemInterface_Statics::ClassParams = {
	&UStreamingWorldSubsystemInterface::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingWorldSubsystemInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UStreamingWorldSubsystemInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStreamingWorldSubsystemInterface()
{
	if (!Z_Registration_Info_UClass_UStreamingWorldSubsystemInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStreamingWorldSubsystemInterface.OuterSingleton, Z_Construct_UClass_UStreamingWorldSubsystemInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStreamingWorldSubsystemInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UStreamingWorldSubsystemInterface>()
{
	return UStreamingWorldSubsystemInterface::StaticClass();
}
UStreamingWorldSubsystemInterface::UStreamingWorldSubsystemInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamingWorldSubsystemInterface);
UStreamingWorldSubsystemInterface::~UStreamingWorldSubsystemInterface() {}
// End Interface UStreamingWorldSubsystemInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_StreamingWorldSubsystemInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStreamingWorldSubsystemInterface, UStreamingWorldSubsystemInterface::StaticClass, TEXT("UStreamingWorldSubsystemInterface"), &Z_Registration_Info_UClass_UStreamingWorldSubsystemInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStreamingWorldSubsystemInterface), 1282396456U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_StreamingWorldSubsystemInterface_h_604217187(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_StreamingWorldSubsystemInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_StreamingWorldSubsystemInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS