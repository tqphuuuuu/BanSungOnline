// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/ToolMenus/Public/ToolMenuWidgetCollectionContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolMenuWidgetCollectionContext() {}

// Begin Cross Module References
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuContextBase();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuWidgetCollectionContext();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuWidgetCollectionContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToolMenus();
// End Cross Module References

// Begin Class UToolMenuWidgetCollectionContext
void UToolMenuWidgetCollectionContext::StaticRegisterNativesUToolMenuWidgetCollectionContext()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolMenuWidgetCollectionContext);
UClass* Z_Construct_UClass_UToolMenuWidgetCollectionContext_NoRegister()
{
	return UToolMenuWidgetCollectionContext::StaticClass();
}
struct Z_Construct_UClass_UToolMenuWidgetCollectionContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Context class containing a collection of widgets that can be added for later retrieval.\n * @see FToolMenuContext\n */" },
		{ "IncludePath", "ToolMenuWidgetCollectionContext.h" },
		{ "ModuleRelativePath", "Public/ToolMenuWidgetCollectionContext.h" },
		{ "ToolTip", "Context class containing a collection of widgets that can be added for later retrieval.\n@see FToolMenuContext" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolMenuWidgetCollectionContext>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UToolMenuWidgetCollectionContext_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UToolMenuContextBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuWidgetCollectionContext_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolMenuWidgetCollectionContext_Statics::ClassParams = {
	&UToolMenuWidgetCollectionContext::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuWidgetCollectionContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UToolMenuWidgetCollectionContext_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToolMenuWidgetCollectionContext()
{
	if (!Z_Registration_Info_UClass_UToolMenuWidgetCollectionContext.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolMenuWidgetCollectionContext.OuterSingleton, Z_Construct_UClass_UToolMenuWidgetCollectionContext_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToolMenuWidgetCollectionContext.OuterSingleton;
}
template<> TOOLMENUS_API UClass* StaticClass<UToolMenuWidgetCollectionContext>()
{
	return UToolMenuWidgetCollectionContext::StaticClass();
}
UToolMenuWidgetCollectionContext::UToolMenuWidgetCollectionContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToolMenuWidgetCollectionContext);
UToolMenuWidgetCollectionContext::~UToolMenuWidgetCollectionContext() {}
// End Class UToolMenuWidgetCollectionContext

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuWidgetCollectionContext_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UToolMenuWidgetCollectionContext, UToolMenuWidgetCollectionContext::StaticClass, TEXT("UToolMenuWidgetCollectionContext"), &Z_Registration_Info_UClass_UToolMenuWidgetCollectionContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolMenuWidgetCollectionContext), 3063662630U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuWidgetCollectionContext_h_2321044760(TEXT("/Script/ToolMenus"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuWidgetCollectionContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuWidgetCollectionContext_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
