// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/OptimusValueContainer.h"
#include "OptimusCore/Public/OptimusDataType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusValueContainer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusValueContainer();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusValueContainer_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusValueContainerGeneratorClass();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusValueContainerGeneratorClass_NoRegister();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataTypeRef();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusValueContainerGeneratorClass
void UOptimusValueContainerGeneratorClass::StaticRegisterNativesUOptimusValueContainerGeneratorClass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusValueContainerGeneratorClass);
UClass* Z_Construct_UClass_UOptimusValueContainerGeneratorClass_NoRegister()
{
	return UOptimusValueContainerGeneratorClass::StaticClass();
}
struct Z_Construct_UClass_UOptimusValueContainerGeneratorClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Deprecated\n" },
		{ "IncludePath", "OptimusValueContainer.h" },
		{ "ModuleRelativePath", "Public/OptimusValueContainer.h" },
		{ "ToolTip", "Deprecated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusValueContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusValueContainerGeneratorClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusValueContainerGeneratorClass_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusValueContainerGeneratorClass, DataType), Z_Construct_UScriptStruct_FOptimusDataTypeRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataType_MetaData), NewProp_DataType_MetaData) }; // 1626052194
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusValueContainerGeneratorClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusValueContainerGeneratorClass_Statics::NewProp_DataType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusValueContainerGeneratorClass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusValueContainerGeneratorClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UClass,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusValueContainerGeneratorClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusValueContainerGeneratorClass_Statics::ClassParams = {
	&UOptimusValueContainerGeneratorClass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusValueContainerGeneratorClass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusValueContainerGeneratorClass_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusValueContainerGeneratorClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusValueContainerGeneratorClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusValueContainerGeneratorClass()
{
	if (!Z_Registration_Info_UClass_UOptimusValueContainerGeneratorClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusValueContainerGeneratorClass.OuterSingleton, Z_Construct_UClass_UOptimusValueContainerGeneratorClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusValueContainerGeneratorClass.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusValueContainerGeneratorClass>()
{
	return UOptimusValueContainerGeneratorClass::StaticClass();
}
UOptimusValueContainerGeneratorClass::UOptimusValueContainerGeneratorClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusValueContainerGeneratorClass);
UOptimusValueContainerGeneratorClass::~UOptimusValueContainerGeneratorClass() {}
// End Class UOptimusValueContainerGeneratorClass

// Begin Class UOptimusValueContainer
void UOptimusValueContainer::StaticRegisterNativesUOptimusValueContainer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusValueContainer);
UClass* Z_Construct_UClass_UOptimusValueContainer_NoRegister()
{
	return UOptimusValueContainer::StaticClass();
}
struct Z_Construct_UClass_UOptimusValueContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Deprecated\n" },
		{ "IncludePath", "OptimusValueContainer.h" },
		{ "ModuleRelativePath", "Public/OptimusValueContainer.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusValueContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusValueContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusValueContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusValueContainer_Statics::ClassParams = {
	&UOptimusValueContainer::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusValueContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusValueContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusValueContainer()
{
	if (!Z_Registration_Info_UClass_UOptimusValueContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusValueContainer.OuterSingleton, Z_Construct_UClass_UOptimusValueContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusValueContainer.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusValueContainer>()
{
	return UOptimusValueContainer::StaticClass();
}
UOptimusValueContainer::UOptimusValueContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusValueContainer);
UOptimusValueContainer::~UOptimusValueContainer() {}
// End Class UOptimusValueContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusValueContainer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusValueContainerGeneratorClass, UOptimusValueContainerGeneratorClass::StaticClass, TEXT("UOptimusValueContainerGeneratorClass"), &Z_Registration_Info_UClass_UOptimusValueContainerGeneratorClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusValueContainerGeneratorClass), 189997069U) },
		{ Z_Construct_UClass_UOptimusValueContainer, UOptimusValueContainer::StaticClass, TEXT("UOptimusValueContainer"), &Z_Registration_Info_UClass_UOptimusValueContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusValueContainer), 2192000681U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusValueContainer_h_2394165492(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusValueContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusValueContainer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
