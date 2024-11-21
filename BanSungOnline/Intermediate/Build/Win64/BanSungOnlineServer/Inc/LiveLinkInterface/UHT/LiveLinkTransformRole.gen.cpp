// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkInterface/Public/Roles/LiveLinkTransformRole.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkTransformRole() {}

// Begin Cross Module References
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkBasicRole();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkTransformRole();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkTransformRole_NoRegister();
UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References

// Begin Class ULiveLinkTransformRole
void ULiveLinkTransformRole::StaticRegisterNativesULiveLinkTransformRole()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkTransformRole);
UClass* Z_Construct_UClass_ULiveLinkTransformRole_NoRegister()
{
	return ULiveLinkTransformRole::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkTransformRole_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Role associated for Camera data.\n */" },
		{ "DisplayName", "Transform Role" },
		{ "IncludePath", "Roles/LiveLinkTransformRole.h" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformRole.h" },
		{ "ToolTip", "Role associated for Camera data." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkTransformRole>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULiveLinkTransformRole_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkBasicRole,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformRole_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkTransformRole_Statics::ClassParams = {
	&ULiveLinkTransformRole::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformRole_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkTransformRole_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkTransformRole()
{
	if (!Z_Registration_Info_UClass_ULiveLinkTransformRole.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkTransformRole.OuterSingleton, Z_Construct_UClass_ULiveLinkTransformRole_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkTransformRole.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkTransformRole>()
{
	return ULiveLinkTransformRole::StaticClass();
}
ULiveLinkTransformRole::ULiveLinkTransformRole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkTransformRole);
ULiveLinkTransformRole::~ULiveLinkTransformRole() {}
// End Class ULiveLinkTransformRole

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkTransformRole_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkTransformRole, ULiveLinkTransformRole::StaticClass, TEXT("ULiveLinkTransformRole"), &Z_Registration_Info_UClass_ULiveLinkTransformRole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkTransformRole), 4061160383U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkTransformRole_h_893834865(TEXT("/Script/LiveLinkInterface"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkTransformRole_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkTransformRole_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
