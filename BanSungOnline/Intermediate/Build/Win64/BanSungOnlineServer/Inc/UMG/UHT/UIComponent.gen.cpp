// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Extensions/UIComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UMG_API UClass* Z_Construct_UClass_UUIComponent();
UMG_API UClass* Z_Construct_UClass_UUIComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UUIComponent
void UUIComponent::StaticRegisterNativesUUIComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIComponent);
UClass* Z_Construct_UClass_UUIComponent_NoRegister()
{
	return UUIComponent::StaticClass();
}
struct Z_Construct_UClass_UUIComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * This is the base class to for UI Components that can be added to any UMG Widgets\n * in UMG Designer.When initialized, it will pass the widget it's attached to.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Extensions/UIComponent.h" },
		{ "ModuleRelativePath", "Public/Extensions/UIComponent.h" },
		{ "ToolTip", "This is the base class to for UI Components that can be added to any UMG Widgets\nin UMG Designer.When initialized, it will pass the widget it's attached to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Extensions/UIComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UUIComponent_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0044000000282008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIComponent, Owner), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIComponent_Statics::NewProp_Owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUIComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIComponent_Statics::ClassParams = {
	&UUIComponent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUIComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUIComponent_Statics::PropPointers),
	0,
	0x008800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUIComponent()
{
	if (!Z_Registration_Info_UClass_UUIComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIComponent.OuterSingleton, Z_Construct_UClass_UUIComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIComponent.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UUIComponent>()
{
	return UUIComponent::StaticClass();
}
UUIComponent::UUIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUIComponent);
UUIComponent::~UUIComponent() {}
// End Class UUIComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUIComponent, UUIComponent::StaticClass, TEXT("UUIComponent"), &Z_Registration_Info_UClass_UUIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIComponent), 2293430611U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponent_h_312372617(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
