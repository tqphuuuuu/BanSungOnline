// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/InterpolationProcessor/LiveLinkBasicFrameInterpolateProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkBasicFrameInterpolateProcessor() {}

// Begin Cross Module References
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor();
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor();
UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References

// Begin Class ULiveLinkBasicFrameInterpolationProcessor
void ULiveLinkBasicFrameInterpolationProcessor::StaticRegisterNativesULiveLinkBasicFrameInterpolationProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkBasicFrameInterpolationProcessor);
UClass* Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_NoRegister()
{
	return ULiveLinkBasicFrameInterpolationProcessor::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default blending method for any type of frames.\n * It will interpolate numerical properties that are mark with \"Interp\".\n */" },
		{ "DisplayName", "Base Interpolation" },
		{ "IncludePath", "InterpolationProcessor/LiveLinkBasicFrameInterpolateProcessor.h" },
		{ "ModuleRelativePath", "Public/InterpolationProcessor/LiveLinkBasicFrameInterpolateProcessor.h" },
		{ "ToolTip", "Default blending method for any type of frames.\nIt will interpolate numerical properties that are mark with \"Interp\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInterpolatePropertyValues_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/InterpolationProcessor/LiveLinkBasicFrameInterpolateProcessor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInterpolatePropertyValues_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpolatePropertyValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkBasicFrameInterpolationProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::NewProp_bInterpolatePropertyValues_SetBit(void* Obj)
{
	((ULiveLinkBasicFrameInterpolationProcessor*)Obj)->bInterpolatePropertyValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::NewProp_bInterpolatePropertyValues = { "bInterpolatePropertyValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULiveLinkBasicFrameInterpolationProcessor), &Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::NewProp_bInterpolatePropertyValues_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInterpolatePropertyValues_MetaData), NewProp_bInterpolatePropertyValues_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::NewProp_bInterpolatePropertyValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::ClassParams = {
	&ULiveLinkBasicFrameInterpolationProcessor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor()
{
	if (!Z_Registration_Info_UClass_ULiveLinkBasicFrameInterpolationProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkBasicFrameInterpolationProcessor.OuterSingleton, Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkBasicFrameInterpolationProcessor.OuterSingleton;
}
template<> LIVELINK_API UClass* StaticClass<ULiveLinkBasicFrameInterpolationProcessor>()
{
	return ULiveLinkBasicFrameInterpolationProcessor::StaticClass();
}
ULiveLinkBasicFrameInterpolationProcessor::ULiveLinkBasicFrameInterpolationProcessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkBasicFrameInterpolationProcessor);
ULiveLinkBasicFrameInterpolationProcessor::~ULiveLinkBasicFrameInterpolationProcessor() {}
// End Class ULiveLinkBasicFrameInterpolationProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkBasicFrameInterpolateProcessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor, ULiveLinkBasicFrameInterpolationProcessor::StaticClass, TEXT("ULiveLinkBasicFrameInterpolationProcessor"), &Z_Registration_Info_UClass_ULiveLinkBasicFrameInterpolationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkBasicFrameInterpolationProcessor), 2695292351U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkBasicFrameInterpolateProcessor_h_236276073(TEXT("/Script/LiveLink"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkBasicFrameInterpolateProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkBasicFrameInterpolateProcessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
