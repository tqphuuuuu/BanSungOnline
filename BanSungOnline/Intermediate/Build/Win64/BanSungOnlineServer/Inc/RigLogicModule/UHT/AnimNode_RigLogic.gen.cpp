// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigLogicModule/Public/AnimNode_RigLogic.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RigLogic() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
RIGLOGICMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RigLogic();
UPackage* Z_Construct_UPackage__Script_RigLogicModule();
// End Cross Module References

// Begin ScriptStruct FAnimNode_RigLogic
static_assert(std::is_polymorphic<FAnimNode_RigLogic>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_RigLogic cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_RigLogic;
class UScriptStruct* FAnimNode_RigLogic::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_RigLogic.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_RigLogic.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RigLogic, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("AnimNode_RigLogic"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_RigLogic.OuterSingleton;
}
template<> RIGLOGICMODULE_API UScriptStruct* StaticStruct<FAnimNode_RigLogic>()
{
	return FAnimNode_RigLogic::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_RigLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNode_RigLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "Comment", "/*\n\x09 * Max LOD level that post-process AnimBPs are evaluated.\n\x09 * For example if you have the threshold set to 2, it will evaluate until including LOD 2 (based on 0 index). In case the LOD level gets set to 3, it will stop evaluating the post-process AnimBP.\n\x09 * Setting it to -1 will always evaluate it and disable LODing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNode_RigLogic.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Max LOD level that post-process AnimBPs are evaluated.\n* For example if you have the threshold set to 2, it will evaluate until including LOD 2 (based on 0 index). In case the LOD level gets set to 3, it will stop evaluating the post-process AnimBP.\n* Setting it to -1 will always evaluate it and disable LODing." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimSequence;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RigLogic>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RigLogic, AnimSequence), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimSequence_MetaData), NewProp_AnimSequence_MetaData) }; // 1074011079
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RigLogic, LODThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODThreshold_MetaData), NewProp_LODThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::NewProp_AnimSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::NewProp_LODThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigLogicModule,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_RigLogic",
	Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::PropPointers),
	sizeof(FAnimNode_RigLogic),
	alignof(FAnimNode_RigLogic),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RigLogic()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_RigLogic.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_RigLogic.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_RigLogic.InnerSingleton;
}
// End ScriptStruct FAnimNode_RigLogic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_AnimNode_RigLogic_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_RigLogic::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::NewStructOps, TEXT("AnimNode_RigLogic"), &Z_Registration_Info_UScriptStruct_AnimNode_RigLogic, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_RigLogic), 809607010U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_AnimNode_RigLogic_h_3968338351(TEXT("/Script/RigLogicModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_AnimNode_RigLogic_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_AnimNode_RigLogic_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
