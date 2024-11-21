// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/Translator/LiveLinkTransformRoleToAnimation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkTransformRoleToAnimation() {}

// Begin Cross Module References
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkTransformRoleToAnimation();
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkTransformRoleToAnimation_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameTranslator();
UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References

// Begin Class ULiveLinkTransformRoleToAnimation
void ULiveLinkTransformRoleToAnimation::StaticRegisterNativesULiveLinkTransformRoleToAnimation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkTransformRoleToAnimation);
UClass* Z_Construct_UClass_ULiveLinkTransformRoleToAnimation_NoRegister()
{
	return ULiveLinkTransformRoleToAnimation::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkTransformRoleToAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * LiveLink Translator used to convert Transform frame data to Animation (Skeletal) frame data.\n */" },
		{ "DisplayName", "Transform to Animation" },
		{ "IncludePath", "Translator/LiveLinkTransformRoleToAnimation.h" },
		{ "ModuleRelativePath", "Public/Translator/LiveLinkTransformRoleToAnimation.h" },
		{ "ToolTip", "LiveLink Translator used to convert Transform frame data to Animation (Skeletal) frame data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputBoneName_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Name of the resulting bone. Defaults to \"Root\" */" },
		{ "ModuleRelativePath", "Public/Translator/LiveLinkTransformRoleToAnimation.h" },
		{ "ToolTip", "Name of the resulting bone. Defaults to \"Root\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputBoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkTransformRoleToAnimation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULiveLinkTransformRoleToAnimation_Statics::NewProp_OutputBoneName = { "OutputBoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkTransformRoleToAnimation, OutputBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputBoneName_MetaData), NewProp_OutputBoneName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkTransformRoleToAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformRoleToAnimation_Statics::NewProp_OutputBoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformRoleToAnimation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkTransformRoleToAnimation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkFrameTranslator,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformRoleToAnimation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkTransformRoleToAnimation_Statics::ClassParams = {
	&ULiveLinkTransformRoleToAnimation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULiveLinkTransformRoleToAnimation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformRoleToAnimation_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformRoleToAnimation_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkTransformRoleToAnimation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkTransformRoleToAnimation()
{
	if (!Z_Registration_Info_UClass_ULiveLinkTransformRoleToAnimation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkTransformRoleToAnimation.OuterSingleton, Z_Construct_UClass_ULiveLinkTransformRoleToAnimation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkTransformRoleToAnimation.OuterSingleton;
}
template<> LIVELINK_API UClass* StaticClass<ULiveLinkTransformRoleToAnimation>()
{
	return ULiveLinkTransformRoleToAnimation::StaticClass();
}
ULiveLinkTransformRoleToAnimation::ULiveLinkTransformRoleToAnimation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkTransformRoleToAnimation);
ULiveLinkTransformRoleToAnimation::~ULiveLinkTransformRoleToAnimation() {}
// End Class ULiveLinkTransformRoleToAnimation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Translator_LiveLinkTransformRoleToAnimation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkTransformRoleToAnimation, ULiveLinkTransformRoleToAnimation::StaticClass, TEXT("ULiveLinkTransformRoleToAnimation"), &Z_Registration_Info_UClass_ULiveLinkTransformRoleToAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkTransformRoleToAnimation), 159119622U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Translator_LiveLinkTransformRoleToAnimation_h_1797602144(TEXT("/Script/LiveLink"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Translator_LiveLinkTransformRoleToAnimation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Translator_LiveLinkTransformRoleToAnimation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
