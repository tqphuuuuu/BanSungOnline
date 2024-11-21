// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Public/GlobalMergeLegacySupportUtil.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalMergeLegacySupportUtil() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport_NoRegister();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Interface ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport
void ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport::StaticRegisterNativesULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport);
UClass* Z_Construct_UClass_ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport_NoRegister()
{
	return ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport::StaticClass();
}
struct Z_Construct_UClass_ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GlobalMergeLegacySupportUtil.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport_Statics::ClassParams = {
	&ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport()
{
	if (!Z_Registration_Info_UClass_ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport.OuterSingleton, Z_Construct_UClass_ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport>()
{
	return ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport::StaticClass();
}
ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport::ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport);
ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport::~ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport() {}
// End Interface ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_GlobalMergeLegacySupportUtil_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport, ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport::StaticClass, TEXT("ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport"), &Z_Registration_Info_UClass_ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport), 3099608562U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_GlobalMergeLegacySupportUtil_h_3732853658(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_GlobalMergeLegacySupportUtil_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_GlobalMergeLegacySupportUtil_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
