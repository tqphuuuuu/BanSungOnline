// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkComponents/Public/LiveLinkControllerBase.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkControllerBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkControllerBase();
LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkControllerBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_LiveLinkComponents();
// End Cross Module References

// Begin Class ULiveLinkControllerBase
void ULiveLinkControllerBase::StaticRegisterNativesULiveLinkControllerBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkControllerBase);
UClass* Z_Construct_UClass_ULiveLinkControllerBase_NoRegister()
{
	return ULiveLinkControllerBase::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkControllerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "LiveLink" },
		{ "Comment", "/**\n */" },
		{ "IncludePath", "LiveLinkControllerBase.h" },
		{ "ModuleRelativePath", "Public/LiveLinkControllerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentPicker_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.ActorComponent" },
		{ "Category", "ComponentToControl" },
		{ "Comment", "/**\n\x09 * A component reference (customized) that allows the user to specify a component that this controller should control\n\x09 */" },
		{ "DisallowedClasses", "/Script/LiveLinkComponents.LiveLinkComponentController" },
		{ "ModuleRelativePath", "Public/LiveLinkControllerBase.h" },
		{ "ToolTip", "A component reference (customized) that allows the user to specify a component that this controller should control" },
		{ "UseComponentPicker", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentPicker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkControllerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkControllerBase_Statics::NewProp_ComponentPicker = { "ComponentPicker", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkControllerBase, ComponentPicker), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentPicker_MetaData), NewProp_ComponentPicker_MetaData) }; // 3869904073
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkControllerBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkControllerBase_Statics::NewProp_ComponentPicker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkControllerBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkControllerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkControllerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkControllerBase_Statics::ClassParams = {
	&ULiveLinkControllerBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULiveLinkControllerBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkControllerBase_Statics::PropPointers),
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkControllerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkControllerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkControllerBase()
{
	if (!Z_Registration_Info_UClass_ULiveLinkControllerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkControllerBase.OuterSingleton, Z_Construct_UClass_ULiveLinkControllerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkControllerBase.OuterSingleton;
}
template<> LIVELINKCOMPONENTS_API UClass* StaticClass<ULiveLinkControllerBase>()
{
	return ULiveLinkControllerBase::StaticClass();
}
ULiveLinkControllerBase::ULiveLinkControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkControllerBase);
ULiveLinkControllerBase::~ULiveLinkControllerBase() {}
// End Class ULiveLinkControllerBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkControllerBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkControllerBase, ULiveLinkControllerBase::StaticClass, TEXT("ULiveLinkControllerBase"), &Z_Registration_Info_UClass_ULiveLinkControllerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkControllerBase), 2399332117U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkControllerBase_h_420183768(TEXT("/Script/LiveLinkComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkControllerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkControllerBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
