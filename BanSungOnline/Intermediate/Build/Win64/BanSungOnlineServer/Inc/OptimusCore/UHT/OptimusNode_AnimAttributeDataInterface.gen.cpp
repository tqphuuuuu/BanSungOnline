// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/Nodes/OptimusNode_AnimAttributeDataInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode_AnimAttributeDataInterface() {}

// Begin Cross Module References
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_AnimAttributeDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_AnimAttributeDataInterface_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_DataInterface();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusNode_AnimAttributeDataInterface
void UOptimusNode_AnimAttributeDataInterface::StaticRegisterNativesUOptimusNode_AnimAttributeDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_AnimAttributeDataInterface);
UClass* Z_Construct_UClass_UOptimusNode_AnimAttributeDataInterface_NoRegister()
{
	return UOptimusNode_AnimAttributeDataInterface::StaticClass();
}
struct Z_Construct_UClass_UOptimusNode_AnimAttributeDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Deprecated\n" },
		{ "IncludePath", "Nodes/OptimusNode_AnimAttributeDataInterface.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_AnimAttributeDataInterface.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_AnimAttributeDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusNode_AnimAttributeDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusNode_DataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_AnimAttributeDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_AnimAttributeDataInterface_Statics::ClassParams = {
	&UOptimusNode_AnimAttributeDataInterface::StaticClass,
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
	0x018000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_AnimAttributeDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNode_AnimAttributeDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusNode_AnimAttributeDataInterface()
{
	if (!Z_Registration_Info_UClass_UOptimusNode_AnimAttributeDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_AnimAttributeDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusNode_AnimAttributeDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusNode_AnimAttributeDataInterface.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_AnimAttributeDataInterface>()
{
	return UOptimusNode_AnimAttributeDataInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_AnimAttributeDataInterface);
UOptimusNode_AnimAttributeDataInterface::~UOptimusNode_AnimAttributeDataInterface() {}
// End Class UOptimusNode_AnimAttributeDataInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_AnimAttributeDataInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode_AnimAttributeDataInterface, UOptimusNode_AnimAttributeDataInterface::StaticClass, TEXT("UOptimusNode_AnimAttributeDataInterface"), &Z_Registration_Info_UClass_UOptimusNode_AnimAttributeDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_AnimAttributeDataInterface), 2554001354U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_AnimAttributeDataInterface_h_1296962543(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_AnimAttributeDataInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_AnimAttributeDataInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
