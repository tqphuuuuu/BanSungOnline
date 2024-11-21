// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/DataInterfaces/OptimusDataInterfaceLoopTerminal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataInterfaceLoopTerminal() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusLoopTerminalDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusLoopTerminalDataInterface_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusLoopTerminalDataProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusLoopTerminalDataProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusLoopTerminalDataInterface
void UOptimusLoopTerminalDataInterface::StaticRegisterNativesUOptimusLoopTerminalDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusLoopTerminalDataInterface);
UClass* Z_Construct_UClass_UOptimusLoopTerminalDataInterface_NoRegister()
{
	return UOptimusLoopTerminalDataInterface::StaticClass();
}
struct Z_Construct_UClass_UOptimusLoopTerminalDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for reading loop data. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceLoopTerminal.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceLoopTerminal.h" },
		{ "ToolTip", "Compute Framework Data Interface for reading loop data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceLoopTerminal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceLoopTerminal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Index;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusLoopTerminalDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UOptimusLoopTerminalDataInterface_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0040000000000010, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusLoopTerminalDataInterface, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UOptimusLoopTerminalDataInterface_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0040000000000010, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusLoopTerminalDataInterface, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusLoopTerminalDataInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusLoopTerminalDataInterface_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusLoopTerminalDataInterface_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusLoopTerminalDataInterface_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusLoopTerminalDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusLoopTerminalDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusLoopTerminalDataInterface_Statics::ClassParams = {
	&UOptimusLoopTerminalDataInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusLoopTerminalDataInterface_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusLoopTerminalDataInterface_Statics::PropPointers),
	0,
	0x000100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusLoopTerminalDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusLoopTerminalDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusLoopTerminalDataInterface()
{
	if (!Z_Registration_Info_UClass_UOptimusLoopTerminalDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusLoopTerminalDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusLoopTerminalDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusLoopTerminalDataInterface.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusLoopTerminalDataInterface>()
{
	return UOptimusLoopTerminalDataInterface::StaticClass();
}
UOptimusLoopTerminalDataInterface::UOptimusLoopTerminalDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusLoopTerminalDataInterface);
UOptimusLoopTerminalDataInterface::~UOptimusLoopTerminalDataInterface() {}
// End Class UOptimusLoopTerminalDataInterface

// Begin Class UOptimusLoopTerminalDataProvider
void UOptimusLoopTerminalDataProvider::StaticRegisterNativesUOptimusLoopTerminalDataProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusLoopTerminalDataProvider);
UClass* Z_Construct_UClass_UOptimusLoopTerminalDataProvider_NoRegister()
{
	return UOptimusLoopTerminalDataProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusLoopTerminalDataProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for reading loop data. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceLoopTerminal.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceLoopTerminal.h" },
		{ "ToolTip", "Compute Framework Data Provider for reading loop data." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusLoopTerminalDataProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusLoopTerminalDataProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusLoopTerminalDataProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusLoopTerminalDataProvider_Statics::ClassParams = {
	&UOptimusLoopTerminalDataProvider::StaticClass,
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
	0x000010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusLoopTerminalDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusLoopTerminalDataProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusLoopTerminalDataProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusLoopTerminalDataProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusLoopTerminalDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusLoopTerminalDataProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusLoopTerminalDataProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusLoopTerminalDataProvider>()
{
	return UOptimusLoopTerminalDataProvider::StaticClass();
}
UOptimusLoopTerminalDataProvider::UOptimusLoopTerminalDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusLoopTerminalDataProvider);
UOptimusLoopTerminalDataProvider::~UOptimusLoopTerminalDataProvider() {}
// End Class UOptimusLoopTerminalDataProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceLoopTerminal_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusLoopTerminalDataInterface, UOptimusLoopTerminalDataInterface::StaticClass, TEXT("UOptimusLoopTerminalDataInterface"), &Z_Registration_Info_UClass_UOptimusLoopTerminalDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusLoopTerminalDataInterface), 1127331710U) },
		{ Z_Construct_UClass_UOptimusLoopTerminalDataProvider, UOptimusLoopTerminalDataProvider::StaticClass, TEXT("UOptimusLoopTerminalDataProvider"), &Z_Registration_Info_UClass_UOptimusLoopTerminalDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusLoopTerminalDataProvider), 1916644633U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceLoopTerminal_h_2201853958(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceLoopTerminal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceLoopTerminal_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
