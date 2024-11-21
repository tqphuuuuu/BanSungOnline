// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/PreProcessor/LiveLinkDeadbandPreProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkDeadbandPreProcessor() {}

// Begin Cross Module References
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor();
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFramePreProcessor();
UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References

// Begin Class ULiveLinkTransformDeadbandPreProcessor
void ULiveLinkTransformDeadbandPreProcessor::StaticRegisterNativesULiveLinkTransformDeadbandPreProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkTransformDeadbandPreProcessor);
UClass* Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_NoRegister()
{
	return ULiveLinkTransformDeadbandPreProcessor::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a deadband filter that gets applied to the transform, with independent thresholds\n * for rotation and translation.\n */" },
		{ "DisplayName", "Transform Deadband" },
		{ "IncludePath", "PreProcessor/LiveLinkDeadbandPreProcessor.h" },
		{ "ModuleRelativePath", "Public/PreProcessor/LiveLinkDeadbandPreProcessor.h" },
		{ "ToolTip", "Implements a deadband filter that gets applied to the transform, with independent thresholds\nfor rotation and translation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDeadband_MetaData[] = {
		{ "Category", "Deadband" },
		{ "Comment", "/** If false, transform is left untouched */" },
		{ "ModuleRelativePath", "Public/PreProcessor/LiveLinkDeadbandPreProcessor.h" },
		{ "ToolTip", "If false, transform is left untouched" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationDeadband_MetaData[] = {
		{ "Category", "Deadband" },
		{ "Comment", "/** Translation is updated only if the change is larger than this threshold */" },
		{ "ModuleRelativePath", "Public/PreProcessor/LiveLinkDeadbandPreProcessor.h" },
		{ "ToolTip", "Translation is updated only if the change is larger than this threshold" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationDeadbandInDegrees_MetaData[] = {
		{ "Category", "Deadband" },
		{ "Comment", "/** Rotation is updated only if the change is larger than this threshold */" },
		{ "ModuleRelativePath", "Public/PreProcessor/LiveLinkDeadbandPreProcessor.h" },
		{ "ToolTip", "Rotation is updated only if the change is larger than this threshold" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableDeadband_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDeadband;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslationDeadband;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationDeadbandInDegrees;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkTransformDeadbandPreProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_Statics::NewProp_bEnableDeadband_SetBit(void* Obj)
{
	((ULiveLinkTransformDeadbandPreProcessor*)Obj)->bEnableDeadband = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_Statics::NewProp_bEnableDeadband = { "bEnableDeadband", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULiveLinkTransformDeadbandPreProcessor), &Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_Statics::NewProp_bEnableDeadband_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDeadband_MetaData), NewProp_bEnableDeadband_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_Statics::NewProp_TranslationDeadband = { "TranslationDeadband", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkTransformDeadbandPreProcessor, TranslationDeadband), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationDeadband_MetaData), NewProp_TranslationDeadband_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_Statics::NewProp_RotationDeadbandInDegrees = { "RotationDeadbandInDegrees", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkTransformDeadbandPreProcessor, RotationDeadbandInDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationDeadbandInDegrees_MetaData), NewProp_RotationDeadbandInDegrees_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_Statics::NewProp_bEnableDeadband,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_Statics::NewProp_TranslationDeadband,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_Statics::NewProp_RotationDeadbandInDegrees,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkFramePreProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_Statics::ClassParams = {
	&ULiveLinkTransformDeadbandPreProcessor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor()
{
	if (!Z_Registration_Info_UClass_ULiveLinkTransformDeadbandPreProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkTransformDeadbandPreProcessor.OuterSingleton, Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkTransformDeadbandPreProcessor.OuterSingleton;
}
template<> LIVELINK_API UClass* StaticClass<ULiveLinkTransformDeadbandPreProcessor>()
{
	return ULiveLinkTransformDeadbandPreProcessor::StaticClass();
}
ULiveLinkTransformDeadbandPreProcessor::ULiveLinkTransformDeadbandPreProcessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkTransformDeadbandPreProcessor);
ULiveLinkTransformDeadbandPreProcessor::~ULiveLinkTransformDeadbandPreProcessor() {}
// End Class ULiveLinkTransformDeadbandPreProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_PreProcessor_LiveLinkDeadbandPreProcessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor, ULiveLinkTransformDeadbandPreProcessor::StaticClass, TEXT("ULiveLinkTransformDeadbandPreProcessor"), &Z_Registration_Info_UClass_ULiveLinkTransformDeadbandPreProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkTransformDeadbandPreProcessor), 3852454573U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_PreProcessor_LiveLinkDeadbandPreProcessor_h_527812806(TEXT("/Script/LiveLink"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_PreProcessor_LiveLinkDeadbandPreProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_PreProcessor_LiveLinkDeadbandPreProcessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
