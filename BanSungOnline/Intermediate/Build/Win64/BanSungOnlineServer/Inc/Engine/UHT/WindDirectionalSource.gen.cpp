// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/WindDirectionalSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindDirectionalSource() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AInfo();
ENGINE_API UClass* Z_Construct_UClass_AWindDirectionalSource();
ENGINE_API UClass* Z_Construct_UClass_AWindDirectionalSource_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWindDirectionalSourceComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class AWindDirectionalSource
void AWindDirectionalSource::StaticRegisterNativesAWindDirectionalSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWindDirectionalSource);
UClass* Z_Construct_UClass_AWindDirectionalSource_NoRegister()
{
	return AWindDirectionalSource::StaticClass();
}
struct Z_Construct_UClass_AWindDirectionalSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Wind" },
		{ "Comment", "/** Actor that provides a directional wind source. Only affects SpeedTree assets. */" },
		{ "HideCategories", "Input Movement Collision WorldPartition HLOD" },
		{ "IncludePath", "Engine/WindDirectionalSource.h" },
		{ "ModuleRelativePath", "Classes/Engine/WindDirectionalSource.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Actor that provides a directional wind source. Only affects SpeedTree assets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "WindDirectionalSource" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/WindDirectionalSource.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/WindDirectionalSource.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWindDirectionalSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWindDirectionalSource_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWindDirectionalSource, Component), Z_Construct_UClass_UWindDirectionalSourceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWindDirectionalSource_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0144000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWindDirectionalSource, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowComponent_MetaData), NewProp_ArrowComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWindDirectionalSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindDirectionalSource_Statics::NewProp_Component,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindDirectionalSource_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWindDirectionalSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWindDirectionalSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWindDirectionalSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWindDirectionalSource_Statics::ClassParams = {
	&AWindDirectionalSource::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWindDirectionalSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWindDirectionalSource_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWindDirectionalSource_Statics::Class_MetaDataParams), Z_Construct_UClass_AWindDirectionalSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWindDirectionalSource()
{
	if (!Z_Registration_Info_UClass_AWindDirectionalSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWindDirectionalSource.OuterSingleton, Z_Construct_UClass_AWindDirectionalSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWindDirectionalSource.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AWindDirectionalSource>()
{
	return AWindDirectionalSource::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWindDirectionalSource);
AWindDirectionalSource::~AWindDirectionalSource() {}
// End Class AWindDirectionalSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWindDirectionalSource, AWindDirectionalSource::StaticClass, TEXT("AWindDirectionalSource"), &Z_Registration_Info_UClass_AWindDirectionalSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWindDirectionalSource), 1510110681U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_1898427525(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
