// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkComponents/Public/Controllers/LiveLinkLightController.h"
#include "LiveLinkComponents/Public/Controllers/LiveLinkTransformController.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkLightController() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkControllerBase();
LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkLightController();
LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkLightController_NoRegister();
LIVELINKCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformControllerData();
UPackage* Z_Construct_UPackage__Script_LiveLinkComponents();
// End Cross Module References

// Begin Class ULiveLinkLightController
void ULiveLinkLightController::StaticRegisterNativesULiveLinkLightController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkLightController);
UClass* Z_Construct_UClass_ULiveLinkLightController_NoRegister()
{
	return ULiveLinkLightController::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkLightController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Controller that uses LiveLink light data to drive a light component. \n * UPointLightComponent and USpotLightComponent are supported for specific properties\n */" },
		{ "IncludePath", "Controllers/LiveLinkLightController.h" },
		{ "ModuleRelativePath", "Public/Controllers/LiveLinkLightController.h" },
		{ "ToolTip", "Controller that uses LiveLink light data to drive a light component.\nUPointLightComponent and USpotLightComponent are supported for specific properties" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentToControl_MetaData[] = {
		{ "ModuleRelativePath", "Public/Controllers/LiveLinkLightController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Controllers/LiveLinkLightController.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentToControl;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkLightController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkLightController_Statics::NewProp_ComponentToControl = { "ComponentToControl", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkLightController, ComponentToControl_DEPRECATED), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentToControl_MetaData), NewProp_ComponentToControl_MetaData) }; // 3869904073
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkLightController_Statics::NewProp_TransformData = { "TransformData", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkLightController, TransformData_DEPRECATED), Z_Construct_UScriptStruct_FLiveLinkTransformControllerData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformData_MetaData), NewProp_TransformData_MetaData) }; // 970997666
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkLightController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkLightController_Statics::NewProp_ComponentToControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkLightController_Statics::NewProp_TransformData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkLightController_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_ULiveLinkLightController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkControllerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkLightController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkLightController_Statics::ClassParams = {
	&ULiveLinkLightController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ULiveLinkLightController_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkLightController_Statics::PropPointers), 0),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkLightController_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkLightController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkLightController()
{
	if (!Z_Registration_Info_UClass_ULiveLinkLightController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkLightController.OuterSingleton, Z_Construct_UClass_ULiveLinkLightController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkLightController.OuterSingleton;
}
template<> LIVELINKCOMPONENTS_API UClass* StaticClass<ULiveLinkLightController>()
{
	return ULiveLinkLightController::StaticClass();
}
ULiveLinkLightController::ULiveLinkLightController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkLightController);
ULiveLinkLightController::~ULiveLinkLightController() {}
// End Class ULiveLinkLightController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkLightController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkLightController, ULiveLinkLightController::StaticClass, TEXT("ULiveLinkLightController"), &Z_Registration_Info_UClass_ULiveLinkLightController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkLightController), 952522229U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkLightController_h_2087647111(TEXT("/Script/LiveLinkComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkLightController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkLightController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
