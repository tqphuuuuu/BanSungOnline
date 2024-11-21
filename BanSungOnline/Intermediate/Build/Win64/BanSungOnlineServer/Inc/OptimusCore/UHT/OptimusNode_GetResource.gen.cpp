// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/Nodes/OptimusNode_GetResource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode_GetResource() {}

// Begin Cross Module References
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_GetResource();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_GetResource_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ResourceAccessorBase();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusNode_GetResource
void UOptimusNode_GetResource::StaticRegisterNativesUOptimusNode_GetResource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_GetResource);
UClass* Z_Construct_UClass_UOptimusNode_GetResource_NoRegister()
{
	return UOptimusNode_GetResource::StaticClass();
}
struct Z_Construct_UClass_UOptimusNode_GetResource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/OptimusNode_GetResource.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_GetResource.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_GetResource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusNode_GetResource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusNode_ResourceAccessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_GetResource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_GetResource_Statics::ClassParams = {
	&UOptimusNode_GetResource::StaticClass,
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
	0x010000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_GetResource_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNode_GetResource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusNode_GetResource()
{
	if (!Z_Registration_Info_UClass_UOptimusNode_GetResource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_GetResource.OuterSingleton, Z_Construct_UClass_UOptimusNode_GetResource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusNode_GetResource.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_GetResource>()
{
	return UOptimusNode_GetResource::StaticClass();
}
UOptimusNode_GetResource::UOptimusNode_GetResource() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_GetResource);
UOptimusNode_GetResource::~UOptimusNode_GetResource() {}
// End Class UOptimusNode_GetResource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GetResource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode_GetResource, UOptimusNode_GetResource::StaticClass, TEXT("UOptimusNode_GetResource"), &Z_Registration_Info_UClass_UOptimusNode_GetResource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_GetResource), 1259024319U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GetResource_h_2033116026(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GetResource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GetResource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
