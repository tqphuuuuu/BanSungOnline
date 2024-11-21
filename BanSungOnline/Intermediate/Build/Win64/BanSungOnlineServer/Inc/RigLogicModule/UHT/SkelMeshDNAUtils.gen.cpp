// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigLogicModule/Public/SkelMeshDNAUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkelMeshDNAUtils() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
RIGLOGICMODULE_API UClass* Z_Construct_UClass_USkelMeshDNAUtils();
RIGLOGICMODULE_API UClass* Z_Construct_UClass_USkelMeshDNAUtils_NoRegister();
RIGLOGICMODULE_API UEnum* Z_Construct_UEnum_RigLogicModule_ELodUpdateOption();
UPackage* Z_Construct_UPackage__Script_RigLogicModule();
// End Cross Module References

// Begin Enum ELodUpdateOption
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELodUpdateOption;
static UEnum* ELodUpdateOption_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELodUpdateOption.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELodUpdateOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ELodUpdateOption, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("ELodUpdateOption"));
	}
	return Z_Registration_Info_UEnum_ELodUpdateOption.OuterSingleton;
}
template<> RIGLOGICMODULE_API UEnum* StaticEnum<ELodUpdateOption>()
{
	return ELodUpdateOption_StaticEnum();
}
struct Z_Construct_UEnum_RigLogicModule_ELodUpdateOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.Comment", "// LOD1 and higher\n" },
		{ "All.Name", "ELodUpdateOption::All" },
		{ "All.ToolTip", "LOD1 and higher" },
		{ "LOD0Only.Name", "ELodUpdateOption::LOD0Only" },
		{ "LOD1AndHigher.Comment", "// LOD0 Only\n" },
		{ "LOD1AndHigher.Name", "ELodUpdateOption::LOD1AndHigher" },
		{ "LOD1AndHigher.ToolTip", "LOD0 Only" },
		{ "ModuleRelativePath", "Public/SkelMeshDNAUtils.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELodUpdateOption::LOD0Only", (int64)ELodUpdateOption::LOD0Only },
		{ "ELodUpdateOption::LOD1AndHigher", (int64)ELodUpdateOption::LOD1AndHigher },
		{ "ELodUpdateOption::All", (int64)ELodUpdateOption::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigLogicModule_ELodUpdateOption_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigLogicModule,
	nullptr,
	"ELodUpdateOption",
	"ELodUpdateOption",
	Z_Construct_UEnum_RigLogicModule_ELodUpdateOption_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ELodUpdateOption_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ELodUpdateOption_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigLogicModule_ELodUpdateOption_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigLogicModule_ELodUpdateOption()
{
	if (!Z_Registration_Info_UEnum_ELodUpdateOption.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELodUpdateOption.InnerSingleton, Z_Construct_UEnum_RigLogicModule_ELodUpdateOption_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELodUpdateOption.InnerSingleton;
}
// End Enum ELodUpdateOption

// Begin Class USkelMeshDNAUtils
void USkelMeshDNAUtils::StaticRegisterNativesUSkelMeshDNAUtils()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkelMeshDNAUtils);
UClass* Z_Construct_UClass_USkelMeshDNAUtils_NoRegister()
{
	return USkelMeshDNAUtils::StaticClass();
}
struct Z_Construct_UClass_USkelMeshDNAUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** A utility class for updating SkeletalMesh joints, base mesh, morph targets and skin weights according to DNA data.\n  * After the update, the render data is re-chunked.\n **/" },
		{ "IncludePath", "SkelMeshDNAUtils.h" },
		{ "ModuleRelativePath", "Public/SkelMeshDNAUtils.h" },
		{ "ToolTip", "A utility class for updating SkeletalMesh joints, base mesh, morph targets and skin weights according to DNA data.\nAfter the update, the render data is re-chunked." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkelMeshDNAUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USkelMeshDNAUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RigLogicModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkelMeshDNAUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkelMeshDNAUtils_Statics::ClassParams = {
	&USkelMeshDNAUtils::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkelMeshDNAUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_USkelMeshDNAUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USkelMeshDNAUtils()
{
	if (!Z_Registration_Info_UClass_USkelMeshDNAUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkelMeshDNAUtils.OuterSingleton, Z_Construct_UClass_USkelMeshDNAUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkelMeshDNAUtils.OuterSingleton;
}
template<> RIGLOGICMODULE_API UClass* StaticClass<USkelMeshDNAUtils>()
{
	return USkelMeshDNAUtils::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USkelMeshDNAUtils);
USkelMeshDNAUtils::~USkelMeshDNAUtils() {}
// End Class USkelMeshDNAUtils

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_SkelMeshDNAUtils_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELodUpdateOption_StaticEnum, TEXT("ELodUpdateOption"), &Z_Registration_Info_UEnum_ELodUpdateOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4259775529U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkelMeshDNAUtils, USkelMeshDNAUtils::StaticClass, TEXT("USkelMeshDNAUtils"), &Z_Registration_Info_UClass_USkelMeshDNAUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkelMeshDNAUtils), 2773090551U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_SkelMeshDNAUtils_h_1905606560(TEXT("/Script/RigLogicModule"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_SkelMeshDNAUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_SkelMeshDNAUtils_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_SkelMeshDNAUtils_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_SkelMeshDNAUtils_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
