// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/Nodes/OptimusNode_ConstantValue.h"
#include "OptimusCore/Public/OptimusDataType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode_ConstantValue() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusGeneratedClassDefiner_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ConstantValue();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ConstantValue_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPinMutabilityDefiner_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusValueProvider_NoRegister();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataTypeRef();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusNode_ConstantValueGeneratorClass
void UOptimusNode_ConstantValueGeneratorClass::StaticRegisterNativesUOptimusNode_ConstantValueGeneratorClass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_ConstantValueGeneratorClass);
UClass* Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_NoRegister()
{
	return UOptimusNode_ConstantValueGeneratorClass::StaticClass();
}
struct Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/OptimusNode_ConstantValue.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ConstantValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ConstantValue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_ConstantValueGeneratorClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_ConstantValueGeneratorClass, DataType), Z_Construct_UScriptStruct_FOptimusDataTypeRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataType_MetaData), NewProp_DataType_MetaData) }; // 1626052194
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics::NewProp_DataType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UClass,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics::ClassParams = {
	&UOptimusNode_ConstantValueGeneratorClass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass()
{
	if (!Z_Registration_Info_UClass_UOptimusNode_ConstantValueGeneratorClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_ConstantValueGeneratorClass.OuterSingleton, Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusNode_ConstantValueGeneratorClass.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_ConstantValueGeneratorClass>()
{
	return UOptimusNode_ConstantValueGeneratorClass::StaticClass();
}
UOptimusNode_ConstantValueGeneratorClass::UOptimusNode_ConstantValueGeneratorClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_ConstantValueGeneratorClass);
UOptimusNode_ConstantValueGeneratorClass::~UOptimusNode_ConstantValueGeneratorClass() {}
// End Class UOptimusNode_ConstantValueGeneratorClass

// Begin Class UOptimusNode_ConstantValue
void UOptimusNode_ConstantValue::StaticRegisterNativesUOptimusNode_ConstantValue()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_ConstantValue);
UClass* Z_Construct_UClass_UOptimusNode_ConstantValue_NoRegister()
{
	return UOptimusNode_ConstantValue::StaticClass();
}
struct Z_Construct_UClass_UOptimusNode_ConstantValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/OptimusNode_ConstantValue.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ConstantValue.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_ConstantValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusNode_ConstantValue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusNode,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ConstantValue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusNode_ConstantValue_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UOptimusValueProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_ConstantValue, IOptimusValueProvider), false },  // 2907783890
	{ Z_Construct_UClass_UOptimusGeneratedClassDefiner_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_ConstantValue, IOptimusGeneratedClassDefiner), false },  // 1269702570
	{ Z_Construct_UClass_UOptimusPinMutabilityDefiner_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_ConstantValue, IOptimusPinMutabilityDefiner), false },  // 3934412691
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_ConstantValue_Statics::ClassParams = {
	&UOptimusNode_ConstantValue::StaticClass,
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
	0x010000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ConstantValue_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNode_ConstantValue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusNode_ConstantValue()
{
	if (!Z_Registration_Info_UClass_UOptimusNode_ConstantValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_ConstantValue.OuterSingleton, Z_Construct_UClass_UOptimusNode_ConstantValue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusNode_ConstantValue.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_ConstantValue>()
{
	return UOptimusNode_ConstantValue::StaticClass();
}
UOptimusNode_ConstantValue::UOptimusNode_ConstantValue() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_ConstantValue);
UOptimusNode_ConstantValue::~UOptimusNode_ConstantValue() {}
// End Class UOptimusNode_ConstantValue

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ConstantValue_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass, UOptimusNode_ConstantValueGeneratorClass::StaticClass, TEXT("UOptimusNode_ConstantValueGeneratorClass"), &Z_Registration_Info_UClass_UOptimusNode_ConstantValueGeneratorClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_ConstantValueGeneratorClass), 3708424263U) },
		{ Z_Construct_UClass_UOptimusNode_ConstantValue, UOptimusNode_ConstantValue::StaticClass, TEXT("UOptimusNode_ConstantValue"), &Z_Registration_Info_UClass_UOptimusNode_ConstantValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_ConstantValue), 2366375994U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ConstantValue_h_3572882546(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ConstantValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ConstantValue_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
