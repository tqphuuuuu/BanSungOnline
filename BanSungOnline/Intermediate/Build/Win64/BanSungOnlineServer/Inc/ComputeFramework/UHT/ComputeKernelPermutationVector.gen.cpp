// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComputeFramework/Public/ComputeFramework/ComputeKernelPermutationVector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComputeKernelPermutationVector() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FComputeKernelPermutationVector();
UPackage* Z_Construct_UPackage__Script_ComputeFramework();
// End Cross Module References

// Begin ScriptStruct FComputeKernelPermutationVector
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComputeKernelPermutationVector;
class UScriptStruct* FComputeKernelPermutationVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComputeKernelPermutationVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComputeKernelPermutationVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComputeKernelPermutationVector, (UObject*)Z_Construct_UPackage__Script_ComputeFramework(), TEXT("ComputeKernelPermutationVector"));
	}
	return Z_Registration_Info_UScriptStruct_ComputeKernelPermutationVector.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UScriptStruct* StaticStruct<FComputeKernelPermutationVector>()
{
	return FComputeKernelPermutationVector::StaticStruct();
}
struct Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelPermutationVector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Permutations_MetaData[] = {
		{ "Comment", "/** Map from permutation define name to packed FPermutaionBits value. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelPermutationVector.h" },
		{ "ToolTip", "Map from permutation define name to packed FPermutaionBits value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[] = {
		{ "Comment", "/** Number of permutation bits allocated. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelPermutationVector.h" },
		{ "ToolTip", "Number of permutation bits allocated." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Permutations_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Permutations_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Permutations;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComputeKernelPermutationVector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::NewProp_Permutations_ValueProp = { "Permutations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::NewProp_Permutations_Key_KeyProp = { "Permutations_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::NewProp_Permutations = { "Permutations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeKernelPermutationVector, Permutations), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Permutations_MetaData), NewProp_Permutations_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeKernelPermutationVector, BitCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitCount_MetaData), NewProp_BitCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::NewProp_Permutations_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::NewProp_Permutations_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::NewProp_Permutations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::NewProp_BitCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
	nullptr,
	&NewStructOps,
	"ComputeKernelPermutationVector",
	Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::PropPointers),
	sizeof(FComputeKernelPermutationVector),
	alignof(FComputeKernelPermutationVector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FComputeKernelPermutationVector()
{
	if (!Z_Registration_Info_UScriptStruct_ComputeKernelPermutationVector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComputeKernelPermutationVector.InnerSingleton, Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ComputeKernelPermutationVector.InnerSingleton;
}
// End ScriptStruct FComputeKernelPermutationVector

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelPermutationVector_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FComputeKernelPermutationVector::StaticStruct, Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::NewStructOps, TEXT("ComputeKernelPermutationVector"), &Z_Registration_Info_UScriptStruct_ComputeKernelPermutationVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComputeKernelPermutationVector), 3111699079U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelPermutationVector_h_1063364522(TEXT("/Script/ComputeFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelPermutationVector_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelPermutationVector_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
