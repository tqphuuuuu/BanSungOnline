// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigLogicModule/Private/DNAIndexMappingDeprecated.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDNAIndexMappingDeprecated() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
RIGLOGICMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_DNAIndexMapping();
RIGLOGICMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_DNAIndexMapping_NoRegister();
UPackage* Z_Construct_UPackage__Script_RigLogicModule();
// End Cross Module References

// Begin Class UDEPRECATED_DNAIndexMapping
void UDEPRECATED_DNAIndexMapping::StaticRegisterNativesUDEPRECATED_DNAIndexMapping()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_DNAIndexMapping);
UClass* Z_Construct_UClass_UDEPRECATED_DNAIndexMapping_NoRegister()
{
	return UDEPRECATED_DNAIndexMapping::StaticClass();
}
struct Z_Construct_UClass_UDEPRECATED_DNAIndexMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Used and needed for previously serialized skeletal mesh assets\n// that contain the DNA index mapping as part of their user data.\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "DNAIndexMappingDeprecated.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/DNAIndexMappingDeprecated.h" },
		{ "ToolTip", "Used and needed for previously serialized skeletal mesh assets\nthat contain the DNA index mapping as part of their user data." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_DNAIndexMapping>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDEPRECATED_DNAIndexMapping_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetUserData,
	(UObject* (*)())Z_Construct_UPackage__Script_RigLogicModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_DNAIndexMapping_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_DNAIndexMapping_Statics::ClassParams = {
	&UDEPRECATED_DNAIndexMapping::StaticClass,
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
	0x022012A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_DNAIndexMapping_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_DNAIndexMapping_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDEPRECATED_DNAIndexMapping()
{
	if (!Z_Registration_Info_UClass_UDEPRECATED_DNAIndexMapping.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_DNAIndexMapping.OuterSingleton, Z_Construct_UClass_UDEPRECATED_DNAIndexMapping_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDEPRECATED_DNAIndexMapping.OuterSingleton;
}
template<> RIGLOGICMODULE_API UClass* StaticClass<UDEPRECATED_DNAIndexMapping>()
{
	return UDEPRECATED_DNAIndexMapping::StaticClass();
}
UDEPRECATED_DNAIndexMapping::UDEPRECATED_DNAIndexMapping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_DNAIndexMapping);
UDEPRECATED_DNAIndexMapping::~UDEPRECATED_DNAIndexMapping() {}
// End Class UDEPRECATED_DNAIndexMapping

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Private_DNAIndexMappingDeprecated_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_DNAIndexMapping, UDEPRECATED_DNAIndexMapping::StaticClass, TEXT("UDEPRECATED_DNAIndexMapping"), &Z_Registration_Info_UClass_UDEPRECATED_DNAIndexMapping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_DNAIndexMapping), 2096597413U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Private_DNAIndexMappingDeprecated_h_1605684334(TEXT("/Script/RigLogicModule"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Private_DNAIndexMappingDeprecated_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Private_DNAIndexMappingDeprecated_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
