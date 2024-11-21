// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkAnimationCore/Public/AnimNode_LiveLinkPose.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LiveLinkPose() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister();
LIVELINKANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
UPackage* Z_Construct_UPackage__Script_LiveLinkAnimationCore();
// End Cross Module References

// Begin ScriptStruct FAnimNode_LiveLinkPose
static_assert(std::is_polymorphic<FAnimNode_LiveLinkPose>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_LiveLinkPose cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_LiveLinkPose;
class UScriptStruct* FAnimNode_LiveLinkPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_LiveLinkPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_LiveLinkPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose, (UObject*)Z_Construct_UPackage__Script_LiveLinkAnimationCore(), TEXT("AnimNode_LiveLinkPose"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_LiveLinkPose.OuterSingleton;
}
template<> LIVELINKANIMATIONCORE_API UScriptStruct* StaticStruct<FAnimNode_LiveLinkPose>()
{
	return FAnimNode_LiveLinkPose::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_LiveLinkPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputPose_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AnimNode_LiveLinkPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LiveLinkSubjectName_MetaData[] = {
		{ "Category", "SourceData" },
		{ "ModuleRelativePath", "Public/AnimNode_LiveLinkPose.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoLiveLinkEvaluation_MetaData[] = {
		{ "Category", "SourceData" },
		{ "ModuleRelativePath", "Public/AnimNode_LiveLinkPose.h" },
		{ "PinShownByDefault", "" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_LiveLinkPose.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetargetAsset_MetaData[] = {
		{ "Category", "Retarget" },
		{ "ModuleRelativePath", "Public/AnimNode_LiveLinkPose.h" },
		{ "NeverAsPin", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRetargetAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_LiveLinkPose.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputPose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LiveLinkSubjectName;
	static void NewProp_bDoLiveLinkEvaluation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoLiveLinkEvaluation;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubjectName;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RetargetAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentRetargetAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LiveLinkPose>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_InputPose = { "InputPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LiveLinkPose, InputPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputPose_MetaData), NewProp_InputPose_MetaData) }; // 1074011079
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_LiveLinkSubjectName = { "LiveLinkSubjectName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LiveLinkPose, LiveLinkSubjectName), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LiveLinkSubjectName_MetaData), NewProp_LiveLinkSubjectName_MetaData) }; // 463217522
void Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_bDoLiveLinkEvaluation_SetBit(void* Obj)
{
	((FAnimNode_LiveLinkPose*)Obj)->bDoLiveLinkEvaluation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_bDoLiveLinkEvaluation = { "bDoLiveLinkEvaluation", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_LiveLinkPose), &Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_bDoLiveLinkEvaluation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoLiveLinkEvaluation_MetaData), NewProp_bDoLiveLinkEvaluation_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LiveLinkPose, SubjectName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubjectName_MetaData), NewProp_SubjectName_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_RetargetAsset = { "RetargetAsset", nullptr, (EPropertyFlags)0x0014000002000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LiveLinkPose, RetargetAsset), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetargetAsset_MetaData), NewProp_RetargetAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_CurrentRetargetAsset = { "CurrentRetargetAsset", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LiveLinkPose, CurrentRetargetAsset), Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRetargetAsset_MetaData), NewProp_CurrentRetargetAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_InputPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_LiveLinkSubjectName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_bDoLiveLinkEvaluation,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_SubjectName,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_RetargetAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_CurrentRetargetAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkAnimationCore,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_LiveLinkPose",
	Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::PropPointers),
	sizeof(FAnimNode_LiveLinkPose),
	alignof(FAnimNode_LiveLinkPose),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_LiveLinkPose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_LiveLinkPose.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_LiveLinkPose.InnerSingleton;
}
// End ScriptStruct FAnimNode_LiveLinkPose

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_AnimNode_LiveLinkPose_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_LiveLinkPose::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewStructOps, TEXT("AnimNode_LiveLinkPose"), &Z_Registration_Info_UScriptStruct_AnimNode_LiveLinkPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_LiveLinkPose), 3358103791U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_AnimNode_LiveLinkPose_h_2232062977(TEXT("/Script/LiveLinkAnimationCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_AnimNode_LiveLinkPose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_AnimNode_LiveLinkPose_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
