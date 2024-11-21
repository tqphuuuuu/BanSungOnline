// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkInterface/Public/Roles/LiveLinkLightRole.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkLightRole() {}

// Begin Cross Module References
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkLightRole();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkLightRole_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkTransformRole();
UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References

// Begin Class ULiveLinkLightRole
void ULiveLinkLightRole::StaticRegisterNativesULiveLinkLightRole()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkLightRole);
UClass* Z_Construct_UClass_ULiveLinkLightRole_NoRegister()
{
	return ULiveLinkLightRole::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkLightRole_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Role associated for Light data.\n */" },
		{ "DisplayName", "Light Role" },
		{ "IncludePath", "Roles/LiveLinkLightRole.h" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightRole.h" },
		{ "ToolTip", "Role associated for Light data." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkLightRole>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULiveLinkLightRole_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkTransformRole,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkLightRole_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkLightRole_Statics::ClassParams = {
	&ULiveLinkLightRole::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkLightRole_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkLightRole_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkLightRole()
{
	if (!Z_Registration_Info_UClass_ULiveLinkLightRole.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkLightRole.OuterSingleton, Z_Construct_UClass_ULiveLinkLightRole_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkLightRole.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkLightRole>()
{
	return ULiveLinkLightRole::StaticClass();
}
ULiveLinkLightRole::ULiveLinkLightRole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkLightRole);
ULiveLinkLightRole::~ULiveLinkLightRole() {}
// End Class ULiveLinkLightRole

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLightRole_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkLightRole, ULiveLinkLightRole::StaticClass, TEXT("ULiveLinkLightRole"), &Z_Registration_Info_UClass_ULiveLinkLightRole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkLightRole), 3096556889U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLightRole_h_4092405655(TEXT("/Script/LiveLinkInterface"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLightRole_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLightRole_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
