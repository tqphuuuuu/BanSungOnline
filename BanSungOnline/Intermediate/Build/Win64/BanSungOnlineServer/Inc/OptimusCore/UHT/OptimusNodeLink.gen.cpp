// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/OptimusNodeLink.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNodeLink() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeLink();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeLink_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodePin_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusNodeLink
void UOptimusNodeLink::StaticRegisterNativesUOptimusNodeLink()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNodeLink);
UClass* Z_Construct_UClass_UOptimusNodeLink_NoRegister()
{
	return UOptimusNodeLink::StaticClass();
}
struct Z_Construct_UClass_UOptimusNodeLink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OptimusNodeLink.h" },
		{ "ModuleRelativePath", "Public/OptimusNodeLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeOutputPin_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusNodeLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeInputPin_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusNodeLink.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOutputPin;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeInputPin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNodeLink>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusNodeLink_Statics::NewProp_NodeOutputPin = { "NodeOutputPin", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNodeLink, NodeOutputPin), Z_Construct_UClass_UOptimusNodePin_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeOutputPin_MetaData), NewProp_NodeOutputPin_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusNodeLink_Statics::NewProp_NodeInputPin = { "NodeInputPin", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNodeLink, NodeInputPin), Z_Construct_UClass_UOptimusNodePin_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeInputPin_MetaData), NewProp_NodeInputPin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNodeLink_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeLink_Statics::NewProp_NodeOutputPin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeLink_Statics::NewProp_NodeInputPin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeLink_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusNodeLink_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeLink_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNodeLink_Statics::ClassParams = {
	&UOptimusNodeLink::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusNodeLink_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeLink_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeLink_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNodeLink_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusNodeLink()
{
	if (!Z_Registration_Info_UClass_UOptimusNodeLink.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNodeLink.OuterSingleton, Z_Construct_UClass_UOptimusNodeLink_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusNodeLink.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNodeLink>()
{
	return UOptimusNodeLink::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNodeLink);
UOptimusNodeLink::~UOptimusNodeLink() {}
// End Class UOptimusNodeLink

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeLink_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNodeLink, UOptimusNodeLink::StaticClass, TEXT("UOptimusNodeLink"), &Z_Registration_Info_UClass_UOptimusNodeLink, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNodeLink), 4018186640U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeLink_h_1074892648(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeLink_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeLink_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
