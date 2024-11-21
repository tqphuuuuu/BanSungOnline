// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCache/Classes/GeometryCacheCodecBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheCodecBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheCodecBase();
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheCodecBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_GeometryCache();
// End Cross Module References

// Begin Class UGeometryCacheCodecBase
void UGeometryCacheCodecBase::StaticRegisterNativesUGeometryCacheCodecBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCacheCodecBase);
UClass* Z_Construct_UClass_UGeometryCacheCodecBase_NoRegister()
{
	return UGeometryCacheCodecBase::StaticClass();
}
struct Z_Construct_UClass_UGeometryCacheCodecBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Interface for assets/objects that can own UserData **/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "GeometryCacheCodecBase.h" },
		{ "ModuleRelativePath", "Classes/GeometryCacheCodecBase.h" },
		{ "ToolTip", "Interface for assets/objects that can own UserData *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopologyRanges_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "// Frames at which the topology of the decoded frames changes sorted in increasing order\n// this allows fast topology queries between arbitrary frames.\n// each codec has to fill this\n" },
		{ "ModuleRelativePath", "Classes/GeometryCacheCodecBase.h" },
		{ "ToolTip", "Frames at which the topology of the decoded frames changes sorted in increasing order\nthis allows fast topology queries between arbitrary frames.\neach codec has to fill this" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TopologyRanges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TopologyRanges;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCacheCodecBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCacheCodecBase_Statics::NewProp_TopologyRanges_Inner = { "TopologyRanges", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCacheCodecBase_Statics::NewProp_TopologyRanges = { "TopologyRanges", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCacheCodecBase, TopologyRanges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopologyRanges_MetaData), NewProp_TopologyRanges_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCacheCodecBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheCodecBase_Statics::NewProp_TopologyRanges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheCodecBase_Statics::NewProp_TopologyRanges,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheCodecBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGeometryCacheCodecBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheCodecBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCacheCodecBase_Statics::ClassParams = {
	&UGeometryCacheCodecBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGeometryCacheCodecBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheCodecBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheCodecBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometryCacheCodecBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGeometryCacheCodecBase()
{
	if (!Z_Registration_Info_UClass_UGeometryCacheCodecBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCacheCodecBase.OuterSingleton, Z_Construct_UClass_UGeometryCacheCodecBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeometryCacheCodecBase.OuterSingleton;
}
template<> GEOMETRYCACHE_API UClass* StaticClass<UGeometryCacheCodecBase>()
{
	return UGeometryCacheCodecBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCacheCodecBase);
// End Class UGeometryCacheCodecBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCacheCodecBase, UGeometryCacheCodecBase::StaticClass, TEXT("UGeometryCacheCodecBase"), &Z_Registration_Info_UClass_UGeometryCacheCodecBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCacheCodecBase), 4002288877U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecBase_h_2837033347(TEXT("/Script/GeometryCache"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
