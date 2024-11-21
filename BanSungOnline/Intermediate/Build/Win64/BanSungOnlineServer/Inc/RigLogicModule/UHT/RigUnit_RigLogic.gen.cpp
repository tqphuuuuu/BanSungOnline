// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigLogicModule/Public/RigUnit_RigLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_RigLogic() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
RIGLOGICMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneIndexControlAttributeMapping();
RIGLOGICMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RigLogic();
RIGLOGICMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data();
RIGLOGICMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RigLogic_IntArray();
UPackage* Z_Construct_UPackage__Script_RigLogicModule();
// End Cross Module References

// Begin ScriptStruct FBoneIndexControlAttributeMapping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoneIndexControlAttributeMapping;
class UScriptStruct* FBoneIndexControlAttributeMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoneIndexControlAttributeMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoneIndexControlAttributeMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneIndexControlAttributeMapping, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("BoneIndexControlAttributeMapping"));
	}
	return Z_Registration_Info_UScriptStruct_BoneIndexControlAttributeMapping.OuterSingleton;
}
template<> RIGLOGICMODULE_API UScriptStruct* StaticStruct<FBoneIndexControlAttributeMapping>()
{
	return FBoneIndexControlAttributeMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBoneIndexControlAttributeMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/* A helper struct used inside of the RigUnit_RigLogic to map bone indices to DNA driver joint indices. */" },
		{ "DocumentationPolicy", "Strict" },
		{ "ModuleRelativePath", "Public/RigUnit_RigLogic.h" },
		{ "ToolTip", "A helper struct used inside of the RigUnit_RigLogic to map bone indices to DNA driver joint indices." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneIndexControlAttributeMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneIndexControlAttributeMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigLogicModule,
	nullptr,
	&NewStructOps,
	"BoneIndexControlAttributeMapping",
	nullptr,
	0,
	sizeof(FBoneIndexControlAttributeMapping),
	alignof(FBoneIndexControlAttributeMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneIndexControlAttributeMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoneIndexControlAttributeMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBoneIndexControlAttributeMapping()
{
	if (!Z_Registration_Info_UScriptStruct_BoneIndexControlAttributeMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoneIndexControlAttributeMapping.InnerSingleton, Z_Construct_UScriptStruct_FBoneIndexControlAttributeMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BoneIndexControlAttributeMapping.InnerSingleton;
}
// End ScriptStruct FBoneIndexControlAttributeMapping

// Begin ScriptStruct FRigUnit_RigLogic_IntArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_RigLogic_IntArray;
class UScriptStruct* FRigUnit_RigLogic_IntArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_RigLogic_IntArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_RigLogic_IntArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_RigLogic_IntArray, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("RigUnit_RigLogic_IntArray"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_RigLogic_IntArray.OuterSingleton;
}
template<> RIGLOGICMODULE_API UScriptStruct* StaticStruct<FRigUnit_RigLogic_IntArray>()
{
	return FRigUnit_RigLogic_IntArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_RigLogic_IntArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/* A helper struct used inside of the RigUnit_RigLogic to store arrays of arrays of integers. */" },
		{ "DocumentationPolicy", "Strict" },
		{ "ModuleRelativePath", "Public/RigUnit_RigLogic.h" },
		{ "ToolTip", "A helper struct used inside of the RigUnit_RigLogic to store arrays of arrays of integers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "Comment", "// The values stored within this array.\n" },
		{ "ModuleRelativePath", "Public/RigUnit_RigLogic.h" },
		{ "ToolTip", "The values stored within this array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_RigLogic_IntArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_RigLogic_IntArray_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_RigLogic_IntArray_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RigLogic_IntArray, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_RigLogic_IntArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RigLogic_IntArray_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RigLogic_IntArray_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RigLogic_IntArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_RigLogic_IntArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigLogicModule,
	nullptr,
	&NewStructOps,
	"RigUnit_RigLogic_IntArray",
	Z_Construct_UScriptStruct_FRigUnit_RigLogic_IntArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RigLogic_IntArray_Statics::PropPointers),
	sizeof(FRigUnit_RigLogic_IntArray),
	alignof(FRigUnit_RigLogic_IntArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RigLogic_IntArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_RigLogic_IntArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RigLogic_IntArray()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_RigLogic_IntArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_RigLogic_IntArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_RigLogic_IntArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_RigLogic_IntArray.InnerSingleton;
}
// End ScriptStruct FRigUnit_RigLogic_IntArray

// Begin ScriptStruct FRigUnit_RigLogic_Data
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_RigLogic_Data;
class UScriptStruct* FRigUnit_RigLogic_Data::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_RigLogic_Data.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_RigLogic_Data.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("RigUnit_RigLogic_Data"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_RigLogic_Data.OuterSingleton;
}
template<> RIGLOGICMODULE_API UScriptStruct* StaticStruct<FRigUnit_RigLogic_Data>()
{
	return FRigUnit_RigLogic_Data::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/* The work data used by the FRigUnit_RigLogic */" },
		{ "DocumentationPolicy", "Strict" },
		{ "ModuleRelativePath", "Public/RigUnit_RigLogic.h" },
		{ "ToolTip", "The work data used by the FRigUnit_RigLogic" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkelMeshComponent_MetaData[] = {
		{ "Comment", "/** Cached Skeletal Mesh Component **/" },
		{ "ModuleRelativePath", "Public/RigUnit_RigLogic.h" },
		{ "ToolTip", "Cached Skeletal Mesh Component *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputCurveIndices_MetaData[] = {
		{ "Comment", "/** RL input index to ControlRig's input curve index **/" },
		{ "ModuleRelativePath", "Public/RigUnit_RigLogic.h" },
		{ "ToolTip", "RL input index to ControlRig's input curve index *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeuralNetMaskCurveIndices_MetaData[] = {
		{ "Comment", "/** RL neural network mask index to ControlRig's input curve index **/" },
		{ "ModuleRelativePath", "Public/RigUnit_RigLogic.h" },
		{ "ToolTip", "RL neural network mask index to ControlRig's input curve index *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HierarchyBoneIndices_MetaData[] = {
		{ "Comment", "/** RL joint index to ControlRig's hierarchy bone index **/" },
		{ "ModuleRelativePath", "Public/RigUnit_RigLogic.h" },
		{ "ToolTip", "RL joint index to ControlRig's hierarchy bone index *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriverJointsToControlAttributesMap_MetaData[] = {
		{ "Comment", "/** RL driver joint index to ControlRig's hierarchy bone index and RigLogic control attribute mapping **/" },
		{ "ModuleRelativePath", "Public/RigUnit_RigLogic.h" },
		{ "ToolTip", "RL driver joint index to ControlRig's hierarchy bone index and RigLogic control attribute mapping *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetCurveIndices_MetaData[] = {
		{ "Comment", "/** RL mesh blend shape index to ControlRig's output blendshape curve index for each LOD **/" },
		{ "ModuleRelativePath", "Public/RigUnit_RigLogic.h" },
		{ "ToolTip", "RL mesh blend shape index to ControlRig's output blendshape curve index for each LOD *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendShapeIndices_MetaData[] = {
		{ "Comment", "/** RL mesh+blend shape array index to RL blend shape index for each LOD **/" },
		{ "ModuleRelativePath", "Public/RigUnit_RigLogic.h" },
		{ "ToolTip", "RL mesh+blend shape array index to RL blend shape index for each LOD *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveElementIndicesForAnimMaps_MetaData[] = {
		{ "Comment", "/** RL animated map index to ControlRig's output anim map curve index for each LOD **/" },
		{ "ModuleRelativePath", "Public/RigUnit_RigLogic.h" },
		{ "ToolTip", "RL animated map index to ControlRig's output anim map curve index for each LOD *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RigLogicIndicesForAnimMaps_MetaData[] = {
		{ "Comment", "/** RL animated map index to RL anim map curve index for each LOD **/" },
		{ "ModuleRelativePath", "Public/RigUnit_RigLogic.h" },
		{ "ToolTip", "RL animated map index to RL anim map curve index for each LOD *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLOD_MetaData[] = {
		{ "Comment", "/** LOD for which the model is rendered **/" },
		{ "ModuleRelativePath", "Public/RigUnit_RigLogic.h" },
		{ "ToolTip", "LOD for which the model is rendered *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SkelMeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputCurveIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputCurveIndices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NeuralNetMaskCurveIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NeuralNetMaskCurveIndices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HierarchyBoneIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HierarchyBoneIndices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DriverJointsToControlAttributesMap_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DriverJointsToControlAttributesMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MorphTargetCurveIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MorphTargetCurveIndices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendShapeIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendShapeIndices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveElementIndicesForAnimMaps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveElementIndicesForAnimMaps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RigLogicIndicesForAnimMaps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RigLogicIndicesForAnimMaps;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_CurrentLOD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_RigLogic_Data>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_SkelMeshComponent = { "SkelMeshComponent", nullptr, (EPropertyFlags)0x0014000000082008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RigLogic_Data, SkelMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkelMeshComponent_MetaData), NewProp_SkelMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_InputCurveIndices_Inner = { "InputCurveIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_InputCurveIndices = { "InputCurveIndices", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RigLogic_Data, InputCurveIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputCurveIndices_MetaData), NewProp_InputCurveIndices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_NeuralNetMaskCurveIndices_Inner = { "NeuralNetMaskCurveIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_NeuralNetMaskCurveIndices = { "NeuralNetMaskCurveIndices", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RigLogic_Data, NeuralNetMaskCurveIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeuralNetMaskCurveIndices_MetaData), NewProp_NeuralNetMaskCurveIndices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_HierarchyBoneIndices_Inner = { "HierarchyBoneIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_HierarchyBoneIndices = { "HierarchyBoneIndices", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RigLogic_Data, HierarchyBoneIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HierarchyBoneIndices_MetaData), NewProp_HierarchyBoneIndices_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_DriverJointsToControlAttributesMap_Inner = { "DriverJointsToControlAttributesMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneIndexControlAttributeMapping, METADATA_PARAMS(0, nullptr) }; // 2031131047
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_DriverJointsToControlAttributesMap = { "DriverJointsToControlAttributesMap", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RigLogic_Data, DriverJointsToControlAttributesMap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriverJointsToControlAttributesMap_MetaData), NewProp_DriverJointsToControlAttributesMap_MetaData) }; // 2031131047
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_MorphTargetCurveIndices_Inner = { "MorphTargetCurveIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigUnit_RigLogic_IntArray, METADATA_PARAMS(0, nullptr) }; // 1324165921
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_MorphTargetCurveIndices = { "MorphTargetCurveIndices", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RigLogic_Data, MorphTargetCurveIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MorphTargetCurveIndices_MetaData), NewProp_MorphTargetCurveIndices_MetaData) }; // 1324165921
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_BlendShapeIndices_Inner = { "BlendShapeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigUnit_RigLogic_IntArray, METADATA_PARAMS(0, nullptr) }; // 1324165921
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_BlendShapeIndices = { "BlendShapeIndices", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RigLogic_Data, BlendShapeIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendShapeIndices_MetaData), NewProp_BlendShapeIndices_MetaData) }; // 1324165921
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_CurveElementIndicesForAnimMaps_Inner = { "CurveElementIndicesForAnimMaps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigUnit_RigLogic_IntArray, METADATA_PARAMS(0, nullptr) }; // 1324165921
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_CurveElementIndicesForAnimMaps = { "CurveElementIndicesForAnimMaps", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RigLogic_Data, CurveElementIndicesForAnimMaps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveElementIndicesForAnimMaps_MetaData), NewProp_CurveElementIndicesForAnimMaps_MetaData) }; // 1324165921
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_RigLogicIndicesForAnimMaps_Inner = { "RigLogicIndicesForAnimMaps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigUnit_RigLogic_IntArray, METADATA_PARAMS(0, nullptr) }; // 1324165921
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_RigLogicIndicesForAnimMaps = { "RigLogicIndicesForAnimMaps", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RigLogic_Data, RigLogicIndicesForAnimMaps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RigLogicIndicesForAnimMaps_MetaData), NewProp_RigLogicIndicesForAnimMaps_MetaData) }; // 1324165921
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_CurrentLOD = { "CurrentLOD", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RigLogic_Data, CurrentLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLOD_MetaData), NewProp_CurrentLOD_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_SkelMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_InputCurveIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_InputCurveIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_NeuralNetMaskCurveIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_NeuralNetMaskCurveIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_HierarchyBoneIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_HierarchyBoneIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_DriverJointsToControlAttributesMap_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_DriverJointsToControlAttributesMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_MorphTargetCurveIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_MorphTargetCurveIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_BlendShapeIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_BlendShapeIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_CurveElementIndicesForAnimMaps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_CurveElementIndicesForAnimMaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_RigLogicIndicesForAnimMaps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_RigLogicIndicesForAnimMaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewProp_CurrentLOD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigLogicModule,
	nullptr,
	&NewStructOps,
	"RigUnit_RigLogic_Data",
	Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::PropPointers),
	sizeof(FRigUnit_RigLogic_Data),
	alignof(FRigUnit_RigLogic_Data),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_RigLogic_Data.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_RigLogic_Data.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_RigLogic_Data.InnerSingleton;
}
// End ScriptStruct FRigUnit_RigLogic_Data

// Begin ScriptStruct FRigUnit_RigLogic
static_assert(std::is_polymorphic<FRigUnit_RigLogic>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_RigLogic cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_RigLogic;
class UScriptStruct* FRigUnit_RigLogic::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_RigLogic.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_RigLogic.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_RigLogic, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("RigUnit_RigLogic"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_RigLogic_Execute;
		Arguments_FRigUnit_RigLogic_Execute.Emplace(TEXT("Data"), TEXT("FRigUnit_RigLogic_Data"));
		Arguments_FRigUnit_RigLogic_Execute.Emplace(TEXT("bIsInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_RigLogic::Execute"), &FRigUnit_RigLogic::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_RigLogic.OuterSingleton, Arguments_FRigUnit_RigLogic_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_RigLogic.OuterSingleton;
}
template<> RIGLOGICMODULE_API UScriptStruct* StaticStruct<FRigUnit_RigLogic>()
{
	return FRigUnit_RigLogic::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_RigLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "RigLogic" },
		{ "Comment", "/** RigLogic is used to translate control input curves into bone transforms and values for blend shape and\n  *  animated map multiplier curves */" },
		{ "DisplayName", "RigLogic" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "Rig,RigLogic" },
		{ "ModuleRelativePath", "Public/RigUnit_RigLogic.h" },
		{ "ToolTip", "RigLogic is used to translate control input curves into bone transforms and values for blend shape and\nanimated map multiplier curves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Comment", "// internal work data for the unit\n" },
		{ "ModuleRelativePath", "Public/RigUnit_RigLogic.h" },
		{ "ToolTip", "internal work data for the unit" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[] = {
		{ "Comment", "// flag to determine if the node has been initialized\n" },
		{ "ModuleRelativePath", "Public/RigUnit_RigLogic.h" },
		{ "ToolTip", "flag to determine if the node has been initialized" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bIsInitialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_RigLogic>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RigLogic_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RigLogic, Data), Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 662797784
void Z_Construct_UScriptStruct_FRigUnit_RigLogic_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
{
	((FRigUnit_RigLogic*)Obj)->bIsInitialized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_RigLogic_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_RigLogic), &Z_Construct_UScriptStruct_FRigUnit_RigLogic_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInitialized_MetaData), NewProp_bIsInitialized_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_RigLogic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RigLogic_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RigLogic_Statics::NewProp_bIsInitialized,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RigLogic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_RigLogic_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigLogicModule,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_RigLogic",
	Z_Construct_UScriptStruct_FRigUnit_RigLogic_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RigLogic_Statics::PropPointers),
	sizeof(FRigUnit_RigLogic),
	alignof(FRigUnit_RigLogic),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RigLogic_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_RigLogic_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RigLogic()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_RigLogic.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_RigLogic.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_RigLogic_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_RigLogic.InnerSingleton;
}
void FRigUnit_RigLogic::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_RigLogic::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Data,
		bIsInitialized
	);
}
// End ScriptStruct FRigUnit_RigLogic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigUnit_RigLogic_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBoneIndexControlAttributeMapping::StaticStruct, Z_Construct_UScriptStruct_FBoneIndexControlAttributeMapping_Statics::NewStructOps, TEXT("BoneIndexControlAttributeMapping"), &Z_Registration_Info_UScriptStruct_BoneIndexControlAttributeMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoneIndexControlAttributeMapping), 2031131047U) },
		{ FRigUnit_RigLogic_IntArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_RigLogic_IntArray_Statics::NewStructOps, TEXT("RigUnit_RigLogic_IntArray"), &Z_Registration_Info_UScriptStruct_RigUnit_RigLogic_IntArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_RigLogic_IntArray), 1324165921U) },
		{ FRigUnit_RigLogic_Data::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics::NewStructOps, TEXT("RigUnit_RigLogic_Data"), &Z_Registration_Info_UScriptStruct_RigUnit_RigLogic_Data, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_RigLogic_Data), 662797784U) },
		{ FRigUnit_RigLogic::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_RigLogic_Statics::NewStructOps, TEXT("RigUnit_RigLogic"), &Z_Registration_Info_UScriptStruct_RigUnit_RigLogic, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_RigLogic), 574327451U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigUnit_RigLogic_h_718025869(TEXT("/Script/RigLogicModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigUnit_RigLogic_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigUnit_RigLogic_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
