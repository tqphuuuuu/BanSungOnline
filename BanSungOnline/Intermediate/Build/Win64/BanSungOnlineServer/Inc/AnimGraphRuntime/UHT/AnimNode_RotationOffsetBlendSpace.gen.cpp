// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_RotationOffsetBlendSpace.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/InputScaleBias.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RotationOffsetBlendSpace() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimAlphaInputType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAlphaBoolBlend();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FAnimNode_RotationOffsetBlendSpace
static_assert(std::is_polymorphic<FAnimNode_RotationOffsetBlendSpace>() == std::is_polymorphic<FAnimNode_BlendSpacePlayer>(), "USTRUCT FAnimNode_RotationOffsetBlendSpace cannot be polymorphic unless super FAnimNode_BlendSpacePlayer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_RotationOffsetBlendSpace;
class UScriptStruct* FAnimNode_RotationOffsetBlendSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_RotationOffsetBlendSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_RotationOffsetBlendSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_RotationOffsetBlendSpace"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_RotationOffsetBlendSpace.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_RotationOffsetBlendSpace>()
{
	return FAnimNode_RotationOffsetBlendSpace::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "//@TODO: Comment\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotationOffsetBlendSpace.h" },
		{ "ToolTip", "@TODO: Comment" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotationOffsetBlendSpace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/*\n\x09* Max LOD that this node is allowed to run\n\x09* For example if you have LODThreshold to be 2, it will run until LOD 2 (based on 0 index)\n\x09* when the component LOD becomes 3, it will stop update/evaluate\n\x09* currently transition would be issue and that has to be re-visited\n\x09*/" },
		{ "DisplayName", "LOD Threshold" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotationOffsetBlendSpace.h" },
		{ "ToolTip", "* Max LOD that this node is allowed to run\n* For example if you have LODThreshold to be 2, it will run until LOD 2 (based on 0 index)\n* when the component LOD becomes 3, it will stop update/evaluate\n* currently transition would be issue and that has to be re-visited" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "Category", "Alpha" },
		{ "Comment", "// Current strength of the AimOffset\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotationOffsetBlendSpace.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Current strength of the AimOffset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotationOffsetBlendSpace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaBoolBlend_MetaData[] = {
		{ "Category", "Alpha" },
		{ "DisplayName", "Blend Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotationOffsetBlendSpace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaCurveName_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotationOffsetBlendSpace.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBiasClamp_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotationOffsetBlendSpace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaInputType_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotationOffsetBlendSpace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlphaBoolEnabled_MetaData[] = {
		{ "Category", "Alpha" },
		{ "DisplayAfter", "AlphaScaleBias" },
		{ "DisplayName", "bEnabled" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotationOffsetBlendSpace.h" },
		{ "PinShownByDefault", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BasePose;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaBoolBlend;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AlphaCurveName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBiasClamp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AlphaInputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AlphaInputType;
	static void NewProp_bAlphaBoolEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlphaBoolEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RotationOffsetBlendSpace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewProp_BasePose = { "BasePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RotationOffsetBlendSpace, BasePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePose_MetaData), NewProp_BasePose_MetaData) }; // 1074011079
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RotationOffsetBlendSpace, LODThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODThreshold_MetaData), NewProp_LODThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RotationOffsetBlendSpace, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewProp_AlphaScaleBias = { "AlphaScaleBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RotationOffsetBlendSpace, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaScaleBias_MetaData), NewProp_AlphaScaleBias_MetaData) }; // 3603290969
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewProp_AlphaBoolBlend = { "AlphaBoolBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RotationOffsetBlendSpace, AlphaBoolBlend), Z_Construct_UScriptStruct_FInputAlphaBoolBlend, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaBoolBlend_MetaData), NewProp_AlphaBoolBlend_MetaData) }; // 2918835408
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewProp_AlphaCurveName = { "AlphaCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RotationOffsetBlendSpace, AlphaCurveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaCurveName_MetaData), NewProp_AlphaCurveName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewProp_AlphaScaleBiasClamp = { "AlphaScaleBiasClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RotationOffsetBlendSpace, AlphaScaleBiasClamp), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaScaleBiasClamp_MetaData), NewProp_AlphaScaleBiasClamp_MetaData) }; // 1905782755
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewProp_AlphaInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewProp_AlphaInputType = { "AlphaInputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RotationOffsetBlendSpace, AlphaInputType), Z_Construct_UEnum_Engine_EAnimAlphaInputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaInputType_MetaData), NewProp_AlphaInputType_MetaData) }; // 3333507802
void Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewProp_bAlphaBoolEnabled_SetBit(void* Obj)
{
	((FAnimNode_RotationOffsetBlendSpace*)Obj)->bAlphaBoolEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewProp_bAlphaBoolEnabled = { "bAlphaBoolEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_RotationOffsetBlendSpace), &Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewProp_bAlphaBoolEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlphaBoolEnabled_MetaData), NewProp_bAlphaBoolEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewProp_BasePose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewProp_LODThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewProp_AlphaScaleBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewProp_AlphaBoolBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewProp_AlphaCurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewProp_AlphaScaleBiasClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewProp_AlphaInputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewProp_AlphaInputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewProp_bAlphaBoolEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,
	&NewStructOps,
	"AnimNode_RotationOffsetBlendSpace",
	Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::PropPointers),
	sizeof(FAnimNode_RotationOffsetBlendSpace),
	alignof(FAnimNode_RotationOffsetBlendSpace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_RotationOffsetBlendSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_RotationOffsetBlendSpace.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_RotationOffsetBlendSpace.InnerSingleton;
}
// End ScriptStruct FAnimNode_RotationOffsetBlendSpace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RotationOffsetBlendSpace_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_RotationOffsetBlendSpace::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewStructOps, TEXT("AnimNode_RotationOffsetBlendSpace"), &Z_Registration_Info_UScriptStruct_AnimNode_RotationOffsetBlendSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_RotationOffsetBlendSpace), 1218468353U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RotationOffsetBlendSpace_h_1327452418(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RotationOffsetBlendSpace_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RotationOffsetBlendSpace_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
