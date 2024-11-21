// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/VectorField/VectorFieldVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVectorFieldVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AVectorFieldVolume();
ENGINE_API UClass* Z_Construct_UClass_AVectorFieldVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UVectorFieldComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class AVectorFieldVolume
void AVectorFieldVolume::StaticRegisterNativesAVectorFieldVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVectorFieldVolume);
UClass* Z_Construct_UClass_AVectorFieldVolume_NoRegister()
{
	return AVectorFieldVolume::StaticClass();
}
struct Z_Construct_UClass_AVectorFieldVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Advanced Collision" },
		{ "IncludePath", "VectorField/VectorFieldVolume.h" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorFieldComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VectorFieldVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldVolume.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldVolume.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VectorFieldComponent;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVectorFieldVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVectorFieldVolume_Statics::NewProp_VectorFieldComponent = { "VectorFieldComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVectorFieldVolume, VectorFieldComponent), Z_Construct_UClass_UVectorFieldComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorFieldComponent_MetaData), NewProp_VectorFieldComponent_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVectorFieldVolume_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0144000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVectorFieldVolume, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComponent_MetaData), NewProp_SpriteComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVectorFieldVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVectorFieldVolume_Statics::NewProp_VectorFieldComponent,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVectorFieldVolume_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVectorFieldVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVectorFieldVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVectorFieldVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVectorFieldVolume_Statics::ClassParams = {
	&AVectorFieldVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVectorFieldVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVectorFieldVolume_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVectorFieldVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AVectorFieldVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVectorFieldVolume()
{
	if (!Z_Registration_Info_UClass_AVectorFieldVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVectorFieldVolume.OuterSingleton, Z_Construct_UClass_AVectorFieldVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVectorFieldVolume.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AVectorFieldVolume>()
{
	return AVectorFieldVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVectorFieldVolume);
AVectorFieldVolume::~AVectorFieldVolume() {}
// End Class AVectorFieldVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVectorFieldVolume, AVectorFieldVolume::StaticClass, TEXT("AVectorFieldVolume"), &Z_Registration_Info_UClass_AVectorFieldVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVectorFieldVolume), 1963048413U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h_412493811(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
