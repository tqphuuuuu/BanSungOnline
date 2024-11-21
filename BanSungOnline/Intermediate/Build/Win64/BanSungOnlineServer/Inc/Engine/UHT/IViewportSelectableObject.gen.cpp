// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/IViewportSelectableObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIViewportSelectableObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UViewportSelectableObject();
ENGINE_API UClass* Z_Construct_UClass_UViewportSelectableObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UViewportSelectableObject
void UViewportSelectableObject::StaticRegisterNativesUViewportSelectableObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewportSelectableObject);
UClass* Z_Construct_UClass_UViewportSelectableObject_NoRegister()
{
	return UViewportSelectableObject::StaticClass();
}
struct Z_Construct_UClass_UViewportSelectableObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/IViewportSelectableObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IViewportSelectableObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UViewportSelectableObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportSelectableObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewportSelectableObject_Statics::ClassParams = {
	&UViewportSelectableObject::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportSelectableObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewportSelectableObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UViewportSelectableObject()
{
	if (!Z_Registration_Info_UClass_UViewportSelectableObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewportSelectableObject.OuterSingleton, Z_Construct_UClass_UViewportSelectableObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UViewportSelectableObject.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UViewportSelectableObject>()
{
	return UViewportSelectableObject::StaticClass();
}
UViewportSelectableObject::UViewportSelectableObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UViewportSelectableObject);
UViewportSelectableObject::~UViewportSelectableObject() {}
// End Interface UViewportSelectableObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_IViewportSelectableObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UViewportSelectableObject, UViewportSelectableObject::StaticClass, TEXT("UViewportSelectableObject"), &Z_Registration_Info_UClass_UViewportSelectableObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewportSelectableObject), 2725234979U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_IViewportSelectableObject_h_2580560081(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_IViewportSelectableObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_IViewportSelectableObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
