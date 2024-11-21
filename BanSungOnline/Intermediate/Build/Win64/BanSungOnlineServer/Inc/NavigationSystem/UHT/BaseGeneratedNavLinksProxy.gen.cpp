// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/BaseGeneratedNavLinksProxy.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGeneratedNavLinksProxy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavLinkId();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UBaseGeneratedNavLinksProxy();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UBaseGeneratedNavLinksProxy_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkCustomInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Class UBaseGeneratedNavLinksProxy
void UBaseGeneratedNavLinksProxy::StaticRegisterNativesUBaseGeneratedNavLinksProxy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseGeneratedNavLinksProxy);
UClass* Z_Construct_UClass_UBaseGeneratedNavLinksProxy_NoRegister()
{
	return UBaseGeneratedNavLinksProxy::StaticClass();
}
struct Z_Construct_UClass_UBaseGeneratedNavLinksProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Experimental\n * Base class used to create generated navlinks proxy.\n * The proxy id is used to represent multiple links generated from the same configuration.\n */" },
		{ "IncludePath", "BaseGeneratedNavLinksProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BaseGeneratedNavLinksProxy.h" },
		{ "ToolTip", "Experimental\nBase class used to create generated navlinks proxy.\nThe proxy id is used to represent multiple links generated from the same configuration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkProxyId_MetaData[] = {
		{ "Comment", "/** The LinkID will be the same for all navlinks using the proxy. */" },
		{ "ModuleRelativePath", "Public/BaseGeneratedNavLinksProxy.h" },
		{ "ToolTip", "The LinkID will be the same for all navlinks using the proxy." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "Comment", "/** Proxy owner. */" },
		{ "ModuleRelativePath", "Public/BaseGeneratedNavLinksProxy.h" },
		{ "ToolTip", "Proxy owner." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinkProxyId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseGeneratedNavLinksProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseGeneratedNavLinksProxy_Statics::NewProp_LinkProxyId = { "LinkProxyId", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseGeneratedNavLinksProxy, LinkProxyId), Z_Construct_UScriptStruct_FNavLinkId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkProxyId_MetaData), NewProp_LinkProxyId_MetaData) }; // 828782268
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseGeneratedNavLinksProxy_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseGeneratedNavLinksProxy, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseGeneratedNavLinksProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGeneratedNavLinksProxy_Statics::NewProp_LinkProxyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGeneratedNavLinksProxy_Statics::NewProp_Owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGeneratedNavLinksProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseGeneratedNavLinksProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGeneratedNavLinksProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBaseGeneratedNavLinksProxy_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNavLinkCustomInterface_NoRegister, (int32)VTABLE_OFFSET(UBaseGeneratedNavLinksProxy, INavLinkCustomInterface), false },  // 1067698356
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseGeneratedNavLinksProxy_Statics::ClassParams = {
	&UBaseGeneratedNavLinksProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseGeneratedNavLinksProxy_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGeneratedNavLinksProxy_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGeneratedNavLinksProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseGeneratedNavLinksProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseGeneratedNavLinksProxy()
{
	if (!Z_Registration_Info_UClass_UBaseGeneratedNavLinksProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseGeneratedNavLinksProxy.OuterSingleton, Z_Construct_UClass_UBaseGeneratedNavLinksProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseGeneratedNavLinksProxy.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UBaseGeneratedNavLinksProxy>()
{
	return UBaseGeneratedNavLinksProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseGeneratedNavLinksProxy);
UBaseGeneratedNavLinksProxy::~UBaseGeneratedNavLinksProxy() {}
// End Class UBaseGeneratedNavLinksProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_BaseGeneratedNavLinksProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseGeneratedNavLinksProxy, UBaseGeneratedNavLinksProxy::StaticClass, TEXT("UBaseGeneratedNavLinksProxy"), &Z_Registration_Info_UClass_UBaseGeneratedNavLinksProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseGeneratedNavLinksProxy), 896260368U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_BaseGeneratedNavLinksProxy_h_2453776992(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_BaseGeneratedNavLinksProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_BaseGeneratedNavLinksProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
