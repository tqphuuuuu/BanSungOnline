// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/TargetInterfaces/PrimitiveComponentBackedTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrimitiveComponentBackedTarget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UPrimitiveComponentBackedTarget();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UPrimitiveComponentBackedTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Interface UPrimitiveComponentBackedTarget
void UPrimitiveComponentBackedTarget::StaticRegisterNativesUPrimitiveComponentBackedTarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPrimitiveComponentBackedTarget);
UClass* Z_Construct_UClass_UPrimitiveComponentBackedTarget_NoRegister()
{
	return UPrimitiveComponentBackedTarget::StaticClass();
}
struct Z_Construct_UClass_UPrimitiveComponentBackedTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetInterfaces/PrimitiveComponentBackedTarget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPrimitiveComponentBackedTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPrimitiveComponentBackedTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveComponentBackedTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPrimitiveComponentBackedTarget_Statics::ClassParams = {
	&UPrimitiveComponentBackedTarget::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveComponentBackedTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPrimitiveComponentBackedTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPrimitiveComponentBackedTarget()
{
	if (!Z_Registration_Info_UClass_UPrimitiveComponentBackedTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPrimitiveComponentBackedTarget.OuterSingleton, Z_Construct_UClass_UPrimitiveComponentBackedTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPrimitiveComponentBackedTarget.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UPrimitiveComponentBackedTarget>()
{
	return UPrimitiveComponentBackedTarget::StaticClass();
}
UPrimitiveComponentBackedTarget::UPrimitiveComponentBackedTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPrimitiveComponentBackedTarget);
UPrimitiveComponentBackedTarget::~UPrimitiveComponentBackedTarget() {}
// End Interface UPrimitiveComponentBackedTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_PrimitiveComponentBackedTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPrimitiveComponentBackedTarget, UPrimitiveComponentBackedTarget::StaticClass, TEXT("UPrimitiveComponentBackedTarget"), &Z_Registration_Info_UClass_UPrimitiveComponentBackedTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPrimitiveComponentBackedTarget), 391698828U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_PrimitiveComponentBackedTarget_h_3486819678(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_PrimitiveComponentBackedTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_PrimitiveComponentBackedTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
