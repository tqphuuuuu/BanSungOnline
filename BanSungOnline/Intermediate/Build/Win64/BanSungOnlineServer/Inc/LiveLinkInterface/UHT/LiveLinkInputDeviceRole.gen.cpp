// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkInterface/Public/Roles/LiveLinkInputDeviceRole.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkInputDeviceRole() {}

// Begin Cross Module References
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkBasicRole();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkInputDeviceRole();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkInputDeviceRole_NoRegister();
UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References

// Begin Class ULiveLinkInputDeviceRole
void ULiveLinkInputDeviceRole::StaticRegisterNativesULiveLinkInputDeviceRole()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkInputDeviceRole);
UClass* Z_Construct_UClass_ULiveLinkInputDeviceRole_NoRegister()
{
	return ULiveLinkInputDeviceRole::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkInputDeviceRole_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Role associated with Input Device data.\n */" },
		{ "DisplayName", "Input Device Role" },
		{ "IncludePath", "Roles/LiveLinkInputDeviceRole.h" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceRole.h" },
		{ "ToolTip", "Role associated with Input Device data." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkInputDeviceRole>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULiveLinkInputDeviceRole_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkBasicRole,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkInputDeviceRole_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkInputDeviceRole_Statics::ClassParams = {
	&ULiveLinkInputDeviceRole::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkInputDeviceRole_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkInputDeviceRole_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkInputDeviceRole()
{
	if (!Z_Registration_Info_UClass_ULiveLinkInputDeviceRole.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkInputDeviceRole.OuterSingleton, Z_Construct_UClass_ULiveLinkInputDeviceRole_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkInputDeviceRole.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkInputDeviceRole>()
{
	return ULiveLinkInputDeviceRole::StaticClass();
}
ULiveLinkInputDeviceRole::ULiveLinkInputDeviceRole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkInputDeviceRole);
ULiveLinkInputDeviceRole::~ULiveLinkInputDeviceRole() {}
// End Class ULiveLinkInputDeviceRole

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceRole_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkInputDeviceRole, ULiveLinkInputDeviceRole::StaticClass, TEXT("ULiveLinkInputDeviceRole"), &Z_Registration_Info_UClass_ULiveLinkInputDeviceRole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkInputDeviceRole), 1605569205U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceRole_h_3938882887(TEXT("/Script/LiveLinkInterface"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceRole_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceRole_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
