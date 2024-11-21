// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkInterface/Public/Roles/LiveLinkCameraRole.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkCameraRole() {}

// Begin Cross Module References
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkCameraRole();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkCameraRole_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkTransformRole();
UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References

// Begin Class ULiveLinkCameraRole
void ULiveLinkCameraRole::StaticRegisterNativesULiveLinkCameraRole()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkCameraRole);
UClass* Z_Construct_UClass_ULiveLinkCameraRole_NoRegister()
{
	return ULiveLinkCameraRole::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkCameraRole_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Role associated for Camera data.\n */" },
		{ "DisplayName", "Camera Role" },
		{ "IncludePath", "Roles/LiveLinkCameraRole.h" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraRole.h" },
		{ "ToolTip", "Role associated for Camera data." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkCameraRole>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULiveLinkCameraRole_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkTransformRole,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCameraRole_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkCameraRole_Statics::ClassParams = {
	&ULiveLinkCameraRole::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCameraRole_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkCameraRole_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkCameraRole()
{
	if (!Z_Registration_Info_UClass_ULiveLinkCameraRole.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkCameraRole.OuterSingleton, Z_Construct_UClass_ULiveLinkCameraRole_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkCameraRole.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkCameraRole>()
{
	return ULiveLinkCameraRole::StaticClass();
}
ULiveLinkCameraRole::ULiveLinkCameraRole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkCameraRole);
ULiveLinkCameraRole::~ULiveLinkCameraRole() {}
// End Class ULiveLinkCameraRole

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraRole_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkCameraRole, ULiveLinkCameraRole::StaticClass, TEXT("ULiveLinkCameraRole"), &Z_Registration_Info_UClass_ULiveLinkCameraRole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkCameraRole), 2171540584U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraRole_h_1658844926(TEXT("/Script/LiveLinkInterface"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraRole_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraRole_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
