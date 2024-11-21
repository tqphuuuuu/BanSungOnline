// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/ToolWidgets/Private/Sidebar/SidebarButtonMenuContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSidebarButtonMenuContext() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
TOOLWIDGETS_API UClass* Z_Construct_UClass_USidebarButtonMenuContext();
TOOLWIDGETS_API UClass* Z_Construct_UClass_USidebarButtonMenuContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToolWidgets();
// End Cross Module References

// Begin Class USidebarButtonMenuContext
void USidebarButtonMenuContext::StaticRegisterNativesUSidebarButtonMenuContext()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USidebarButtonMenuContext);
UClass* Z_Construct_UClass_USidebarButtonMenuContext_NoRegister()
{
	return USidebarButtonMenuContext::StaticClass();
}
struct Z_Construct_UClass_USidebarButtonMenuContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Sidebar/SidebarButtonMenuContext.h" },
		{ "ModuleRelativePath", "Private/Sidebar/SidebarButtonMenuContext.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USidebarButtonMenuContext>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USidebarButtonMenuContext_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USidebarButtonMenuContext_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USidebarButtonMenuContext_Statics::ClassParams = {
	&USidebarButtonMenuContext::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USidebarButtonMenuContext_Statics::Class_MetaDataParams), Z_Construct_UClass_USidebarButtonMenuContext_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USidebarButtonMenuContext()
{
	if (!Z_Registration_Info_UClass_USidebarButtonMenuContext.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USidebarButtonMenuContext.OuterSingleton, Z_Construct_UClass_USidebarButtonMenuContext_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USidebarButtonMenuContext.OuterSingleton;
}
template<> TOOLWIDGETS_API UClass* StaticClass<USidebarButtonMenuContext>()
{
	return USidebarButtonMenuContext::StaticClass();
}
USidebarButtonMenuContext::USidebarButtonMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USidebarButtonMenuContext);
USidebarButtonMenuContext::~USidebarButtonMenuContext() {}
// End Class USidebarButtonMenuContext

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Private_Sidebar_SidebarButtonMenuContext_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USidebarButtonMenuContext, USidebarButtonMenuContext::StaticClass, TEXT("USidebarButtonMenuContext"), &Z_Registration_Info_UClass_USidebarButtonMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USidebarButtonMenuContext), 180447539U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Private_Sidebar_SidebarButtonMenuContext_h_3084051500(TEXT("/Script/ToolWidgets"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Private_Sidebar_SidebarButtonMenuContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Private_Sidebar_SidebarButtonMenuContext_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
