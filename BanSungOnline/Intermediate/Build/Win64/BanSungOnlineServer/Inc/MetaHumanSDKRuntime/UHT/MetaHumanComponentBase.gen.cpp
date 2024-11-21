// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetaHumanSDKRuntime/Public/MetaHumanComponentBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetaHumanComponentBase() {}

// Begin Cross Module References
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
METAHUMANSDKRUNTIME_API UClass* Z_Construct_UClass_UMetaHumanComponentBase();
METAHUMANSDKRUNTIME_API UClass* Z_Construct_UClass_UMetaHumanComponentBase_NoRegister();
METAHUMANSDKRUNTIME_API UEnum* Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyType();
METAHUMANSDKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart();
UPackage* Z_Construct_UPackage__Script_MetaHumanSDKRuntime();
// End Cross Module References

// Begin ScriptStruct FMetaHumanCustomizableBodyPart
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetaHumanCustomizableBodyPart;
class UScriptStruct* FMetaHumanCustomizableBodyPart::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetaHumanCustomizableBodyPart.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetaHumanCustomizableBodyPart.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart, (UObject*)Z_Construct_UPackage__Script_MetaHumanSDKRuntime(), TEXT("MetaHumanCustomizableBodyPart"));
	}
	return Z_Registration_Info_UScriptStruct_MetaHumanCustomizableBodyPart.OuterSingleton;
}
template<> METAHUMANSDKRUNTIME_API UScriptStruct* StaticStruct<FMetaHumanCustomizableBodyPart>()
{
	return FMetaHumanCustomizableBodyPart::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MetaHumanComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MetaHumanComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlRigClass_MetaData[] = {
		{ "Category", "BodyParts" },
		{ "Comment", "/** Control rig to run on the body part. Evaluation happens after the base skeleton. */" },
		{ "ModuleRelativePath", "Public/MetaHumanComponentBase.h" },
		{ "ToolTip", "Control rig to run on the body part. Evaluation happens after the base skeleton." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlRigLODThreshold_MetaData[] = {
		{ "Category", "BodyParts" },
		{ "Comment", "/*\n\x09 * Max LOD level to evaluate the assigned control rig for the body part.\n\x09 * For example if you have the threshold set to 2, the control rig will be evaluated for LOD 0, 1, and 2. Setting it to -1 will always evaluate it and disable LODing.\n\x09 */" },
		{ "EditCondition", "ControlRigClass != nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MetaHumanComponentBase.h" },
		{ "ToolTip", "* Max LOD level to evaluate the assigned control rig for the body part.\n* For example if you have the threshold set to 2, the control rig will be evaluated for LOD 0, 1, and 2. Setting it to -1 will always evaluate it and disable LODing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[] = {
		{ "Category", "BodyParts" },
		{ "Comment", "/** Physics asset used for rigid body simulation on the body part. Evaluation happens after the base skeleton. */" },
		{ "ModuleRelativePath", "Public/MetaHumanComponentBase.h" },
		{ "ToolTip", "Physics asset used for rigid body simulation on the body part. Evaluation happens after the base skeleton." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RigidBodyLODThreshold_MetaData[] = {
		{ "Category", "BodyParts" },
		{ "Comment", "/*\n\x09 * Max LOD level to simulate the rigid bodies of the assigned physics asset.\n\x09 * For example if you have the threshold set to 2, simulation will be enabled for LOD 0, 1, and 2. Setting it to -1 will make it simulate always and disable LODing.\n\x09 */" },
		{ "EditCondition", "PhysicsAsset != nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MetaHumanComponentBase.h" },
		{ "ToolTip", "* Max LOD level to simulate the rigid bodies of the assigned physics asset.\n* For example if you have the threshold set to 2, simulation will be enabled for LOD 0, 1, and 2. Setting it to -1 will make it simulate always and disable LODing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[] = {
		{ "Category", "BodyParts" },
		{ "ModuleRelativePath", "Public/MetaHumanComponentBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ControlRigClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControlRigLODThreshold;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsAsset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RigidBodyLODThreshold;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ComponentName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaHumanCustomizableBodyPart>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0114000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaHumanCustomizableBodyPart, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComponent_MetaData), NewProp_SkeletalMeshComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart_Statics::NewProp_ControlRigClass = { "ControlRigClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaHumanCustomizableBodyPart, ControlRigClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlRigClass_MetaData), NewProp_ControlRigClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart_Statics::NewProp_ControlRigLODThreshold = { "ControlRigLODThreshold", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaHumanCustomizableBodyPart, ControlRigLODThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlRigLODThreshold_MetaData), NewProp_ControlRigLODThreshold_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0114000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaHumanCustomizableBodyPart, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsAsset_MetaData), NewProp_PhysicsAsset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart_Statics::NewProp_RigidBodyLODThreshold = { "RigidBodyLODThreshold", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaHumanCustomizableBodyPart, RigidBodyLODThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RigidBodyLODThreshold_MetaData), NewProp_RigidBodyLODThreshold_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaHumanCustomizableBodyPart, ComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentName_MetaData), NewProp_ComponentName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart_Statics::NewProp_SkeletalMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart_Statics::NewProp_ControlRigClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart_Statics::NewProp_ControlRigLODThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart_Statics::NewProp_PhysicsAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart_Statics::NewProp_RigidBodyLODThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart_Statics::NewProp_ComponentName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetaHumanSDKRuntime,
	nullptr,
	&NewStructOps,
	"MetaHumanCustomizableBodyPart",
	Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart_Statics::PropPointers),
	sizeof(FMetaHumanCustomizableBodyPart),
	alignof(FMetaHumanCustomizableBodyPart),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart()
{
	if (!Z_Registration_Info_UScriptStruct_MetaHumanCustomizableBodyPart.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetaHumanCustomizableBodyPart.InnerSingleton, Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetaHumanCustomizableBodyPart.InnerSingleton;
}
// End ScriptStruct FMetaHumanCustomizableBodyPart

// Begin Class UMetaHumanComponentBase
void UMetaHumanComponentBase::StaticRegisterNativesUMetaHumanComponentBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaHumanComponentBase);
UClass* Z_Construct_UClass_UMetaHumanComponentBase_NoRegister()
{
	return UMetaHumanComponentBase::StaticClass();
}
struct Z_Construct_UClass_UMetaHumanComponentBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MetaHumanComponentBase.h" },
		{ "ModuleRelativePath", "Public/MetaHumanComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MetaHumanComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyComponentName_MetaData[] = {
		{ "Category", "Body" },
		{ "ModuleRelativePath", "Public/MetaHumanComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyType_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetaHumanComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBodyCorrectives_MetaData[] = {
		{ "Category", "Body" },
		{ "Comment", "/*\n\x09 * Enable evaluation of the body procedural control rig, the head movement IK control rig and the arm and finger pose drivers.\n\x09 * When enabled, evaluation for LODs can still be controlled via the Body LOD threshold.\n\x09 * When disabled, the body procedural control rig, the head movement IK control rig and the arm and finger pose drivers will not be evaluated which will result in higher performance but decreases mesh deformation quality.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MetaHumanComponentBase.h" },
		{ "ToolTip", "* Enable evaluation of the body procedural control rig, the head movement IK control rig and the arm and finger pose drivers.\n* When enabled, evaluation for LODs can still be controlled via the Body LOD threshold.\n* When disabled, the body procedural control rig, the head movement IK control rig and the arm and finger pose drivers will not be evaluated which will result in higher performance but decreases mesh deformation quality." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Face_MetaData[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////\n// Face\n//////////////////////////////////////////////////////////////////////////////\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MetaHumanComponentBase.h" },
		{ "ToolTip", "Face" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceComponentName_MetaData[] = {
		{ "Category", "Face" },
		{ "ModuleRelativePath", "Public/MetaHumanComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RigLogicLODThreshold_MetaData[] = {
		{ "Category", "Face" },
		{ "Comment", "/*\n\x09 * Max LOD level where Rig Logic is evaluated.\n\x09 * For example if you have the threshold set to 2, it will evaluate until including LOD 2 (based on 0 index). In case the LOD level gets set to 3, it will stop evaluating Rig Logic.\n\x09 * Setting it to -1 will always evaluate it and disable LODing.\n\x09 */" },
		{ "DisplayName", "Facial Animation LOD Threshold" },
		{ "ModuleRelativePath", "Public/MetaHumanComponentBase.h" },
		{ "ToolTip", "* Max LOD level where Rig Logic is evaluated.\n* For example if you have the threshold set to 2, it will evaluate until including LOD 2 (based on 0 index). In case the LOD level gets set to 3, it will stop evaluating Rig Logic.\n* Setting it to -1 will always evaluate it and disable LODing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNeckCorrectives_MetaData[] = {
		{ "Category", "Face" },
		{ "Comment", "/*\n\x09 * Enable evaluation of neck correctives.\n\x09 * When enabled, evaluation for LODs can still be controlled via the LOD threshold.\n\x09 * When disabled, neck correctives will not be evaluated which will result in higher performance but decreases mesh deformation quality.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MetaHumanComponentBase.h" },
		{ "ToolTip", "* Enable evaluation of neck correctives.\n* When enabled, evaluation for LODs can still be controlled via the LOD threshold.\n* When disabled, neck correctives will not be evaluated which will result in higher performance but decreases mesh deformation quality." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeckCorrectivesLODThreshold_MetaData[] = {
		{ "Category", "Face" },
		{ "Comment", "/*\n\x09 * Max LOD level where neck correctives (pose drivers) are evaluated.\n\x09 * For example if you have the threshold set to 2, it will evaluate until including LOD 2 (based on 0 index). In case the LOD level gets set to 3, it will stop evaluating neck correctives.\n\x09 * Setting it to -1 will always evaluate it and disable LODing.\n\x09 */" },
		{ "EditCondition", "bEnableNeckCorrectives==true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MetaHumanComponentBase.h" },
		{ "ToolTip", "* Max LOD level where neck correctives (pose drivers) are evaluated.\n* For example if you have the threshold set to 2, it will evaluate until including LOD 2 (based on 0 index). In case the LOD level gets set to 3, it will stop evaluating neck correctives.\n* Setting it to -1 will always evaluate it and disable LODing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNeckProcControlRig_MetaData[] = {
		{ "Category", "Face" },
		{ "Comment", "/*\n\x09 * Enable evaluation of the neck procedural control rig.\n\x09 * When enabled, evaluation for LODs can still be controlled via the LOD threshold.\n\x09 * When disabled, the neck procedural control rig will not be evaluated which will result in higher performance but decreases mesh deformation quality.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MetaHumanComponentBase.h" },
		{ "ToolTip", "* Enable evaluation of the neck procedural control rig.\n* When enabled, evaluation for LODs can still be controlled via the LOD threshold.\n* When disabled, the neck procedural control rig will not be evaluated which will result in higher performance but decreases mesh deformation quality." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeckProcControlRigLODThreshold_MetaData[] = {
		{ "Category", "Face" },
		{ "Comment", "/*\n\x09 * Max LOD level where the neck procedural control rig is evaluated.\n\x09 * For example if you have the threshold set to 2, it will evaluate until including LOD 2 (based on 0 index). In case the LOD level gets set to 3, it will stop evaluating the neck procedural control rig.\n\x09 * Setting it to -1 will always evaluate it and disable LODing.\n\x09 */" },
		{ "EditCondition", "bEnableNeckProcControlRig==true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MetaHumanComponentBase.h" },
		{ "ToolTip", "* Max LOD level where the neck procedural control rig is evaluated.\n* For example if you have the threshold set to 2, it will evaluate until including LOD 2 (based on 0 index). In case the LOD level gets set to 3, it will stop evaluating the neck procedural control rig.\n* Setting it to -1 will always evaluate it and disable LODing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Torso_MetaData[] = {
		{ "Category", "BodyParts" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////\n// Body Parts\n//////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/MetaHumanComponentBase.h" },
		{ "ToolTip", "Body Parts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Legs_MetaData[] = {
		{ "Category", "BodyParts" },
		{ "ModuleRelativePath", "Public/MetaHumanComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Feet_MetaData[] = {
		{ "Category", "BodyParts" },
		{ "ModuleRelativePath", "Public/MetaHumanComponentBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Body;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BodyComponentName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BodyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BodyType;
	static void NewProp_bEnableBodyCorrectives_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBodyCorrectives;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Face;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FaceComponentName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RigLogicLODThreshold;
	static void NewProp_bEnableNeckCorrectives_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNeckCorrectives;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NeckCorrectivesLODThreshold;
	static void NewProp_bEnableNeckProcControlRig_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNeckProcControlRig;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NeckProcControlRigLODThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Torso;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Legs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Feet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaHumanComponentBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0124080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaHumanComponentBase, Body), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Body_MetaData), NewProp_Body_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_BodyComponentName = { "BodyComponentName", nullptr, (EPropertyFlags)0x00200c0000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaHumanComponentBase, BodyComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyComponentName_MetaData), NewProp_BodyComponentName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_BodyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_BodyType = { "BodyType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaHumanComponentBase, BodyType), Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyType_MetaData), NewProp_BodyType_MetaData) }; // 2910665538
void Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_bEnableBodyCorrectives_SetBit(void* Obj)
{
	((UMetaHumanComponentBase*)Obj)->bEnableBodyCorrectives = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_bEnableBodyCorrectives = { "bEnableBodyCorrectives", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMetaHumanComponentBase), &Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_bEnableBodyCorrectives_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableBodyCorrectives_MetaData), NewProp_bEnableBodyCorrectives_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_Face = { "Face", nullptr, (EPropertyFlags)0x0124080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaHumanComponentBase, Face), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Face_MetaData), NewProp_Face_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_FaceComponentName = { "FaceComponentName", nullptr, (EPropertyFlags)0x00200c0000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaHumanComponentBase, FaceComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceComponentName_MetaData), NewProp_FaceComponentName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_RigLogicLODThreshold = { "RigLogicLODThreshold", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaHumanComponentBase, RigLogicLODThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RigLogicLODThreshold_MetaData), NewProp_RigLogicLODThreshold_MetaData) };
void Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_bEnableNeckCorrectives_SetBit(void* Obj)
{
	((UMetaHumanComponentBase*)Obj)->bEnableNeckCorrectives = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_bEnableNeckCorrectives = { "bEnableNeckCorrectives", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMetaHumanComponentBase), &Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_bEnableNeckCorrectives_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableNeckCorrectives_MetaData), NewProp_bEnableNeckCorrectives_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_NeckCorrectivesLODThreshold = { "NeckCorrectivesLODThreshold", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaHumanComponentBase, NeckCorrectivesLODThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeckCorrectivesLODThreshold_MetaData), NewProp_NeckCorrectivesLODThreshold_MetaData) };
void Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_bEnableNeckProcControlRig_SetBit(void* Obj)
{
	((UMetaHumanComponentBase*)Obj)->bEnableNeckProcControlRig = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_bEnableNeckProcControlRig = { "bEnableNeckProcControlRig", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMetaHumanComponentBase), &Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_bEnableNeckProcControlRig_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableNeckProcControlRig_MetaData), NewProp_bEnableNeckProcControlRig_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_NeckProcControlRigLODThreshold = { "NeckProcControlRigLODThreshold", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaHumanComponentBase, NeckProcControlRigLODThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeckProcControlRigLODThreshold_MetaData), NewProp_NeckProcControlRigLODThreshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_Torso = { "Torso", nullptr, (EPropertyFlags)0x0020088000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaHumanComponentBase, Torso), Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Torso_MetaData), NewProp_Torso_MetaData) }; // 3066078223
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_Legs = { "Legs", nullptr, (EPropertyFlags)0x0020088000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaHumanComponentBase, Legs), Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Legs_MetaData), NewProp_Legs_MetaData) }; // 3066078223
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_Feet = { "Feet", nullptr, (EPropertyFlags)0x0020088000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaHumanComponentBase, Feet), Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Feet_MetaData), NewProp_Feet_MetaData) }; // 3066078223
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetaHumanComponentBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_Body,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_BodyComponentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_BodyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_BodyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_bEnableBodyCorrectives,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_Face,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_FaceComponentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_RigLogicLODThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_bEnableNeckCorrectives,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_NeckCorrectivesLODThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_bEnableNeckProcControlRig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_NeckProcControlRigLODThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_Torso,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_Legs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaHumanComponentBase_Statics::NewProp_Feet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaHumanComponentBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMetaHumanComponentBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MetaHumanSDKRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaHumanComponentBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaHumanComponentBase_Statics::ClassParams = {
	&UMetaHumanComponentBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMetaHumanComponentBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMetaHumanComponentBase_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaHumanComponentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetaHumanComponentBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetaHumanComponentBase()
{
	if (!Z_Registration_Info_UClass_UMetaHumanComponentBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaHumanComponentBase.OuterSingleton, Z_Construct_UClass_UMetaHumanComponentBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetaHumanComponentBase.OuterSingleton;
}
template<> METAHUMANSDKRUNTIME_API UClass* StaticClass<UMetaHumanComponentBase>()
{
	return UMetaHumanComponentBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaHumanComponentBase);
UMetaHumanComponentBase::~UMetaHumanComponentBase() {}
// End Class UMetaHumanComponentBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanComponentBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMetaHumanCustomizableBodyPart::StaticStruct, Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart_Statics::NewStructOps, TEXT("MetaHumanCustomizableBodyPart"), &Z_Registration_Info_UScriptStruct_MetaHumanCustomizableBodyPart, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetaHumanCustomizableBodyPart), 3066078223U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMetaHumanComponentBase, UMetaHumanComponentBase::StaticClass, TEXT("UMetaHumanComponentBase"), &Z_Registration_Info_UClass_UMetaHumanComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaHumanComponentBase), 1447805951U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanComponentBase_h_3832347705(TEXT("/Script/MetaHumanSDKRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanComponentBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanComponentBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanComponentBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanComponentBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
