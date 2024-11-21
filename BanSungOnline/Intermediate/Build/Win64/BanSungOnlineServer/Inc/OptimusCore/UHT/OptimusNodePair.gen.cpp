// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/OptimusNodePair.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNodePair() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodePair();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodePair_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusNodePair
void UOptimusNodePair::StaticRegisterNativesUOptimusNodePair()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNodePair);
UClass* Z_Construct_UClass_UOptimusNodePair_NoRegister()
{
	return UOptimusNodePair::StaticClass();
}
struct Z_Construct_UClass_UOptimusNodePair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OptimusNodePair.h" },
		{ "ModuleRelativePath", "Public/OptimusNodePair.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_First_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusNodePair.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Second_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusNodePair.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_First;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Second;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNodePair>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusNodePair_Statics::NewProp_First = { "First", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNodePair, First), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_First_MetaData), NewProp_First_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusNodePair_Statics::NewProp_Second = { "Second", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNodePair, Second), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Second_MetaData), NewProp_Second_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNodePair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodePair_Statics::NewProp_First,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodePair_Statics::NewProp_Second,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodePair_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusNodePair_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodePair_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNodePair_Statics::ClassParams = {
	&UOptimusNodePair::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusNodePair_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodePair_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodePair_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNodePair_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusNodePair()
{
	if (!Z_Registration_Info_UClass_UOptimusNodePair.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNodePair.OuterSingleton, Z_Construct_UClass_UOptimusNodePair_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusNodePair.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNodePair>()
{
	return UOptimusNodePair::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNodePair);
UOptimusNodePair::~UOptimusNodePair() {}
// End Class UOptimusNodePair

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodePair_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNodePair, UOptimusNodePair::StaticClass, TEXT("UOptimusNodePair"), &Z_Registration_Info_UClass_UOptimusNodePair, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNodePair), 2193547584U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodePair_h_1602477408(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodePair_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodePair_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
