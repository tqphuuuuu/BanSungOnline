// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/LiveLinkCustomTimeStep.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkCustomTimeStep() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkCustomTimeStep();
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkCustomTimeStep_NoRegister();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectKey();
TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedCustomTimeStep();
UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References

// Begin Class ULiveLinkCustomTimeStep
void ULiveLinkCustomTimeStep::StaticRegisterNativesULiveLinkCustomTimeStep()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkCustomTimeStep);
UClass* Z_Construct_UClass_ULiveLinkCustomTimeStep_NoRegister()
{
	return ULiveLinkCustomTimeStep::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkCustomTimeStep_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Control the Engine TimeStep via a live link source\n * \n * Philosophy:\n * \n *   * Quantized time steps based on live link expected data rate.\n *   * Made for Live Link sources can receive data asynchronously, and therefore trigger the waiting game thread.\n * \n *   * FApp::GetDeltaTime \n *       - Forced to a multiple of the desired FrameTime.\n *       - This multiple will depend on Frame Id increment and user settings.\n * \n *   * FApp::GetCurrentTime\n *       - Incremented in multiples of the desired FrameTime.\n * \n */" },
		{ "IncludePath", "LiveLinkCustomTimeStep.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkCustomTimeStep.h" },
		{ "ToolTip", "Control the Engine TimeStep via a live link source\n\nPhilosophy:\n\n  * Quantized time steps based on live link expected data rate.\n  * Made for Live Link sources can receive data asynchronously, and therefore trigger the waiting game thread.\n\n  * FApp::GetDeltaTime\n      - Forced to a multiple of the desired FrameTime.\n      - This multiple will depend on Frame Id increment and user settings.\n\n  * FApp::GetCurrentTime\n      - Incremented in multiples of the desired FrameTime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LiveLinkDataRate_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/** Expected Live Link data rate. If real rate differs, then delta times will contract/expand with respect to real time */" },
		{ "ModuleRelativePath", "Public/LiveLinkCustomTimeStep.h" },
		{ "ToolTip", "Expected Live Link data rate. If real rate differs, then delta times will contract/expand with respect to real time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubjectKey_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/** The specific subject that we listen to. */" },
		{ "ModuleRelativePath", "Public/LiveLinkCustomTimeStep.h" },
		{ "ToolTip", "The specific subject that we listen to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockStepMode_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/** \n\x09 * Lockstep mode means that we only allow FrameRateDivider data frames of the selected subject per engine loop. \n\x09 * The idea here is to process all packets and avoid Live Link evaluation to skip frames when the engine hitches, \n\x09 * and the live link transport will serve as implicit FIFO buffer. However if the Engine cannot keep up with the data rate,\n\x09 * a large delay will be introduced and the transport buffer will eventually start dropping data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LiveLinkCustomTimeStep.h" },
		{ "ToolTip", "Lockstep mode means that we only allow FrameRateDivider data frames of the selected subject per engine loop.\nThe idea here is to process all packets and avoid Live Link evaluation to skip frames when the engine hitches,\nand the live link transport will serve as implicit FIFO buffer. However if the Engine cannot keep up with the data rate,\na large delay will be introduced and the transport buffer will eventually start dropping data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRateDivider_MetaData[] = {
		{ "Category", "Timing" },
		{ "ClampMax", "256" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Allows genlock to period to be a multiple of the live link data period. For example a value of 2 will run at half the live link data rate */" },
		{ "ModuleRelativePath", "Public/LiveLinkCustomTimeStep.h" },
		{ "ToolTip", "Allows genlock to period to be a multiple of the live link data period. For example a value of 2 will run at half the live link data rate" },
		{ "UIMax", "256" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeoutInSeconds_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** Determines how long it should wait for live link data before deciding that it is not in synchronized state anymore */" },
		{ "ModuleRelativePath", "Public/LiveLinkCustomTimeStep.h" },
		{ "ToolTip", "Determines how long it should wait for live link data before deciding that it is not in synchronized state anymore" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LiveLinkDataRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubjectKey;
	static void NewProp_bLockStepMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockStepMode;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_FrameRateDivider;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TimeoutInSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkCustomTimeStep>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkCustomTimeStep_Statics::NewProp_LiveLinkDataRate = { "LiveLinkDataRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkCustomTimeStep, LiveLinkDataRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LiveLinkDataRate_MetaData), NewProp_LiveLinkDataRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkCustomTimeStep_Statics::NewProp_SubjectKey = { "SubjectKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkCustomTimeStep, SubjectKey), Z_Construct_UScriptStruct_FLiveLinkSubjectKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubjectKey_MetaData), NewProp_SubjectKey_MetaData) }; // 896940852
void Z_Construct_UClass_ULiveLinkCustomTimeStep_Statics::NewProp_bLockStepMode_SetBit(void* Obj)
{
	((ULiveLinkCustomTimeStep*)Obj)->bLockStepMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkCustomTimeStep_Statics::NewProp_bLockStepMode = { "bLockStepMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULiveLinkCustomTimeStep), &Z_Construct_UClass_ULiveLinkCustomTimeStep_Statics::NewProp_bLockStepMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockStepMode_MetaData), NewProp_bLockStepMode_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ULiveLinkCustomTimeStep_Statics::NewProp_FrameRateDivider = { "FrameRateDivider", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkCustomTimeStep, FrameRateDivider), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRateDivider_MetaData), NewProp_FrameRateDivider_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ULiveLinkCustomTimeStep_Statics::NewProp_TimeoutInSeconds = { "TimeoutInSeconds", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkCustomTimeStep, TimeoutInSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeoutInSeconds_MetaData), NewProp_TimeoutInSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkCustomTimeStep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkCustomTimeStep_Statics::NewProp_LiveLinkDataRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkCustomTimeStep_Statics::NewProp_SubjectKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkCustomTimeStep_Statics::NewProp_bLockStepMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkCustomTimeStep_Statics::NewProp_FrameRateDivider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkCustomTimeStep_Statics::NewProp_TimeoutInSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCustomTimeStep_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkCustomTimeStep_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGenlockedCustomTimeStep,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCustomTimeStep_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkCustomTimeStep_Statics::ClassParams = {
	&ULiveLinkCustomTimeStep::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULiveLinkCustomTimeStep_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCustomTimeStep_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCustomTimeStep_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkCustomTimeStep_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkCustomTimeStep()
{
	if (!Z_Registration_Info_UClass_ULiveLinkCustomTimeStep.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkCustomTimeStep.OuterSingleton, Z_Construct_UClass_ULiveLinkCustomTimeStep_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkCustomTimeStep.OuterSingleton;
}
template<> LIVELINK_API UClass* StaticClass<ULiveLinkCustomTimeStep>()
{
	return ULiveLinkCustomTimeStep::StaticClass();
}
ULiveLinkCustomTimeStep::ULiveLinkCustomTimeStep(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkCustomTimeStep);
ULiveLinkCustomTimeStep::~ULiveLinkCustomTimeStep() {}
// End Class ULiveLinkCustomTimeStep

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkCustomTimeStep_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkCustomTimeStep, ULiveLinkCustomTimeStep::StaticClass, TEXT("ULiveLinkCustomTimeStep"), &Z_Registration_Info_UClass_ULiveLinkCustomTimeStep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkCustomTimeStep), 4242267025U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkCustomTimeStep_h_1849241018(TEXT("/Script/LiveLink"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkCustomTimeStep_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkCustomTimeStep_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
