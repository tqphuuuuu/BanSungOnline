// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetaHumanSDKRuntime/Public/MetaHumanComponentUE.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetaHumanComponentUE() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
METAHUMANSDKRUNTIME_API UClass* Z_Construct_UClass_UMetaHumanComponentBase();
METAHUMANSDKRUNTIME_API UClass* Z_Construct_UClass_UMetaHumanComponentUE();
METAHUMANSDKRUNTIME_API UClass* Z_Construct_UClass_UMetaHumanComponentUE_NoRegister();
UPackage* Z_Construct_UPackage__Script_MetaHumanSDKRuntime();
// End Cross Module References

// Begin Class UMetaHumanComponentUE
void UMetaHumanComponentUE::StaticRegisterNativesUMetaHumanComponentUE()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaHumanComponentUE);
UClass* Z_Construct_UClass_UMetaHumanComponentUE_NoRegister()
{
	return UMetaHumanComponentUE::StaticClass();
}
struct Z_Construct_UClass_UMetaHumanComponentUE_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Animation" },
		{ "DisplayName", "MetaHuman Component" },
		{ "HideCategories", "Navigation Variable Sockets Tags Activation Cooking Events ComponentTick ComponentReplication AssetUserData Replication" },
		{ "IncludePath", "MetaHumanComponentUE.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MetaHumanComponentUE.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessAnimBP_MetaData[] = {
		{ "Category", "BodyParts" },
		{ "Comment", "/**\n\x09 * The post-processing AnimBP to use for the body parts when either the physics asset or the control rig are set.\n\x09 * Use the ABP_Clothing_PostProcess shipped along with MetaHumans. The MetaHuman component will control given variables\n\x09 * to e.g. set the LOD thresholds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MetaHumanComponentUE.h" },
		{ "ToolTip", "The post-processing AnimBP to use for the body parts when either the physics asset or the control rig are set.\nUse the ABP_Clothing_PostProcess shipped along with MetaHumans. The MetaHuman component will control given variables\nto e.g. set the LOD thresholds." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PostProcessAnimBP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaHumanComponentUE>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UMetaHumanComponentUE_Statics::NewProp_PostProcessAnimBP = { "PostProcessAnimBP", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaHumanComponentUE, PostProcessAnimBP), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessAnimBP_MetaData), NewProp_PostProcessAnimBP_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetaHumanComponentUE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaHumanComponentUE_Statics::NewProp_PostProcessAnimBP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaHumanComponentUE_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMetaHumanComponentUE_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMetaHumanComponentBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MetaHumanSDKRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaHumanComponentUE_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaHumanComponentUE_Statics::ClassParams = {
	&UMetaHumanComponentUE::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMetaHumanComponentUE_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMetaHumanComponentUE_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaHumanComponentUE_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetaHumanComponentUE_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetaHumanComponentUE()
{
	if (!Z_Registration_Info_UClass_UMetaHumanComponentUE.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaHumanComponentUE.OuterSingleton, Z_Construct_UClass_UMetaHumanComponentUE_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetaHumanComponentUE.OuterSingleton;
}
template<> METAHUMANSDKRUNTIME_API UClass* StaticClass<UMetaHumanComponentUE>()
{
	return UMetaHumanComponentUE::StaticClass();
}
UMetaHumanComponentUE::UMetaHumanComponentUE() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaHumanComponentUE);
UMetaHumanComponentUE::~UMetaHumanComponentUE() {}
// End Class UMetaHumanComponentUE

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanComponentUE_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMetaHumanComponentUE, UMetaHumanComponentUE::StaticClass, TEXT("UMetaHumanComponentUE"), &Z_Registration_Info_UClass_UMetaHumanComponentUE, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaHumanComponentUE), 4268940236U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanComponentUE_h_141093934(TEXT("/Script/MetaHumanSDKRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanComponentUE_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanComponentUE_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
