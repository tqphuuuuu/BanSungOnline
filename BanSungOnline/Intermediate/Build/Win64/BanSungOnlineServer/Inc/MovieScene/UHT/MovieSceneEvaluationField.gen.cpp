// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationField() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCondition_NoRegister();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEntityComponentField();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationField();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationKey();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFrameRange();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceID();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneEvaluationFieldEntityKey
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntityKey;
class UScriptStruct* FMovieSceneEvaluationFieldEntityKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntityKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntityKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationFieldEntityKey"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntityKey.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationFieldEntityKey>()
{
	return FMovieSceneEvaluationFieldEntityKey::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A key that uniquely identifies an entity by its owner and ID\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "A key that uniquely identifies an entity by its owner and ID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityOwner_MetaData[] = {
		{ "Comment", "/** The entity owner - either a UMovieSceneSection or perhaps a UMovieSceneTrack. Must implement the IMovieSceneEntityProvider interface */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "The entity owner - either a UMovieSceneSection or perhaps a UMovieSceneTrack. Must implement the IMovieSceneEntityProvider interface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityID_MetaData[] = {
		{ "Comment", "/** The identifer for the entity within the owner. Normally this will be irrelevant (and 0), but may be used to identifier unique entities by index, or flags */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "The identifer for the entity within the owner. Normally this will be irrelevant (and 0), but may be used to identifier unique entities by index, or flags" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_EntityOwner;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_EntityID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldEntityKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::NewProp_EntityOwner = { "EntityOwner", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationFieldEntityKey, EntityOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityOwner_MetaData), NewProp_EntityOwner_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::NewProp_EntityID = { "EntityID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationFieldEntityKey, EntityID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityID_MetaData), NewProp_EntityID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::NewProp_EntityOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::NewProp_EntityID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneEvaluationFieldEntityKey",
	Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::PropPointers),
	sizeof(FMovieSceneEvaluationFieldEntityKey),
	alignof(FMovieSceneEvaluationFieldEntityKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntityKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntityKey.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntityKey.InnerSingleton;
}
// End ScriptStruct FMovieSceneEvaluationFieldEntityKey

// Begin ScriptStruct FMovieSceneEvaluationFieldEntity
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntity;
class UScriptStruct* FMovieSceneEvaluationFieldEntity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationFieldEntity"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntity.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationFieldEntity>()
{
	return FMovieSceneEvaluationFieldEntity::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedMetaDataIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SharedMetaDataIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldEntity>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationFieldEntity, Key), Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 2318175819
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::NewProp_SharedMetaDataIndex = { "SharedMetaDataIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationFieldEntity, SharedMetaDataIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedMetaDataIndex_MetaData), NewProp_SharedMetaDataIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::NewProp_SharedMetaDataIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneEvaluationFieldEntity",
	Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::PropPointers),
	sizeof(FMovieSceneEvaluationFieldEntity),
	alignof(FMovieSceneEvaluationFieldEntity),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntity.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntity.InnerSingleton;
}
// End ScriptStruct FMovieSceneEvaluationFieldEntity

// Begin ScriptStruct FMovieSceneEvaluationFieldSharedEntityMetaData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldSharedEntityMetaData;
class UScriptStruct* FMovieSceneEvaluationFieldSharedEntityMetaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldSharedEntityMetaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldSharedEntityMetaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationFieldSharedEntityMetaData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldSharedEntityMetaData.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationFieldSharedEntityMetaData>()
{
	return FMovieSceneEvaluationFieldSharedEntityMetaData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBindingID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBindingID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldSharedEntityMetaData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics::NewProp_ObjectBindingID = { "ObjectBindingID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationFieldSharedEntityMetaData, ObjectBindingID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectBindingID_MetaData), NewProp_ObjectBindingID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics::NewProp_ObjectBindingID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneEvaluationFieldSharedEntityMetaData",
	Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics::PropPointers),
	sizeof(FMovieSceneEvaluationFieldSharedEntityMetaData),
	alignof(FMovieSceneEvaluationFieldSharedEntityMetaData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldSharedEntityMetaData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldSharedEntityMetaData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldSharedEntityMetaData.InnerSingleton;
}
// End ScriptStruct FMovieSceneEvaluationFieldSharedEntityMetaData

// Begin ScriptStruct FMovieSceneEvaluationFieldEntityMetaData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntityMetaData;
class UScriptStruct* FMovieSceneEvaluationFieldEntityMetaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntityMetaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntityMetaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationFieldEntityMetaData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntityMetaData.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationFieldEntityMetaData>()
{
	return FMovieSceneEvaluationFieldEntityMetaData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[] = {
		{ "Comment", "/* Optional condition that the entity can provide to be checked at runtime before import. If the condition fails, the entity will not be imported. \n\x09*/" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Optional condition that the entity can provide to be checked at runtime before import. If the condition fails, the entity will not be imported." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideBoundPropertyPath_MetaData[] = {
		{ "Comment", "/** Opt-in - when this value is set, the entity should use this property path instead of the one defined on its generating section */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Opt-in - when this value is set, the entity should use this property path instead of the one defined on its generating section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForcedTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluateInSequencePreRoll_MetaData[] = {
		{ "Comment", "/** Opt-in - when no meta-data is present, or this value is false, this entity cannot be evaluated as part of sub-sequence preroll */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Opt-in - when no meta-data is present, or this value is false, this entity cannot be evaluated as part of sub-sequence preroll" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluateInSequencePostRoll_MetaData[] = {
		{ "Comment", "/** Opt-in - when no meta-data is present, or this value is false, this entity cannot be evaluated as part of sub-sequence postroll */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Opt-in - when no meta-data is present, or this value is false, this entity cannot be evaluated as part of sub-sequence postroll" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Condition;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OverrideBoundPropertyPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForcedTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags;
	static void NewProp_bEvaluateInSequencePreRoll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluateInSequencePreRoll;
	static void NewProp_bEvaluateInSequencePostRoll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluateInSequencePostRoll;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldEntityMetaData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationFieldEntityMetaData, Condition), Z_Construct_UClass_UMovieSceneCondition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Condition_MetaData), NewProp_Condition_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_OverrideBoundPropertyPath = { "OverrideBoundPropertyPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationFieldEntityMetaData, OverrideBoundPropertyPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideBoundPropertyPath_MetaData), NewProp_OverrideBoundPropertyPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_ForcedTime = { "ForcedTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationFieldEntityMetaData, ForcedTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForcedTime_MetaData), NewProp_ForcedTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_Flags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationFieldEntityMetaData, Flags), Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) }; // 1683700086
void Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_bEvaluateInSequencePreRoll_SetBit(void* Obj)
{
	((FMovieSceneEvaluationFieldEntityMetaData*)Obj)->bEvaluateInSequencePreRoll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_bEvaluateInSequencePreRoll = { "bEvaluateInSequencePreRoll", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneEvaluationFieldEntityMetaData), &Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_bEvaluateInSequencePreRoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEvaluateInSequencePreRoll_MetaData), NewProp_bEvaluateInSequencePreRoll_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_bEvaluateInSequencePostRoll_SetBit(void* Obj)
{
	((FMovieSceneEvaluationFieldEntityMetaData*)Obj)->bEvaluateInSequencePostRoll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_bEvaluateInSequencePostRoll = { "bEvaluateInSequencePostRoll", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneEvaluationFieldEntityMetaData), &Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_bEvaluateInSequencePostRoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEvaluateInSequencePostRoll_MetaData), NewProp_bEvaluateInSequencePostRoll_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_Condition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_OverrideBoundPropertyPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_ForcedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_Flags_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_bEvaluateInSequencePreRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_bEvaluateInSequencePostRoll,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneEvaluationFieldEntityMetaData",
	Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::PropPointers),
	sizeof(FMovieSceneEvaluationFieldEntityMetaData),
	alignof(FMovieSceneEvaluationFieldEntityMetaData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntityMetaData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntityMetaData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntityMetaData.InnerSingleton;
}
// End ScriptStruct FMovieSceneEvaluationFieldEntityMetaData

// Begin ScriptStruct FMovieSceneEvaluationFieldEntityTree
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntityTree;
class UScriptStruct* FMovieSceneEvaluationFieldEntityTree::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntityTree.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntityTree.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationFieldEntityTree"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntityTree.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationFieldEntityTree>()
{
	return FMovieSceneEvaluationFieldEntityTree::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldEntityTree>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneEvaluationFieldEntityTree",
	nullptr,
	0,
	sizeof(FMovieSceneEvaluationFieldEntityTree),
	alignof(FMovieSceneEvaluationFieldEntityTree),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntityTree.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntityTree.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntityTree.InnerSingleton;
}
// End ScriptStruct FMovieSceneEvaluationFieldEntityTree

// Begin ScriptStruct FMovieSceneEntityComponentField
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEntityComponentField;
class UScriptStruct* FMovieSceneEntityComponentField::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEntityComponentField.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEntityComponentField.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEntityComponentField, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEntityComponentField"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEntityComponentField.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEntityComponentField>()
{
	return FMovieSceneEntityComponentField::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * High-level container which acts as a look-up-table for IMovieSceneEntityProviders and their entities and meta-data in a sequence\n *\n * Generally generated and accessed through UMovieSceneCompiledDataManager, but can also be used independently.\n * Entity fields are constructed using FMovieSceneEntityComponentFieldBuilder which ensures the invariants of this class are \n * maintained along with guaranteeing no redundant entries exist.\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "High-level container which acts as a look-up-table for IMovieSceneEntityProviders and their entities and meta-data in a sequence\n\nGenerally generated and accessed through UMovieSceneCompiledDataManager, but can also be used independently.\nEntity fields are constructed using FMovieSceneEntityComponentFieldBuilder which ensures the invariants of this class are\nmaintained along with guaranteeing no redundant entries exist." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistentEntityTree_MetaData[] = {
		{ "Comment", "/** A hierarchical tree specifiying indices into the Entities array for any given time such persistent entities are active */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "A hierarchical tree specifiying indices into the Entities array for any given time such persistent entities are active" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneShotEntityTree_MetaData[] = {
		{ "Comment", "/** A hierarchical tree specifiying indices into the Entities array for any given time such one-shot entities are active */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "A hierarchical tree specifiying indices into the Entities array for any given time such one-shot entities are active" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entities_MetaData[] = {
		{ "Comment", "/** 16 bytes - Flat array of unique entities. The 2 tree types specify indices into this array */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "16 bytes - Flat array of unique entities. The 2 tree types specify indices into this array" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityMetaData_MetaData[] = {
		{ "Comment", "/** 16 bytes - Optional meta-data for specific entities. Specified in FMovieSceneEvaluationFieldEntity::MetaDataIndex. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "16 bytes - Optional meta-data for specific entities. Specified in FMovieSceneEvaluationFieldEntity::MetaDataIndex." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedMetaData_MetaData[] = {
		{ "Comment", "/** 16 bytes - Optional shared meta-data for groups of entities. Specified in FMovieSceneEvaluationFieldEntity::SharedMetaDataIndex. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "16 bytes - Optional shared meta-data for groups of entities. Specified in FMovieSceneEvaluationFieldEntity::SharedMetaDataIndex." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PersistentEntityTree;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OneShotEntityTree;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntityMetaData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EntityMetaData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SharedMetaData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SharedMetaData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEntityComponentField>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_PersistentEntityTree = { "PersistentEntityTree", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEntityComponentField, PersistentEntityTree), Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistentEntityTree_MetaData), NewProp_PersistentEntityTree_MetaData) }; // 362626746
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_OneShotEntityTree = { "OneShotEntityTree", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEntityComponentField, OneShotEntityTree), Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneShotEntityTree_MetaData), NewProp_OneShotEntityTree_MetaData) }; // 362626746
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_Entities_Inner = { "Entities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity, METADATA_PARAMS(0, nullptr) }; // 4204275627
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_Entities = { "Entities", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEntityComponentField, Entities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entities_MetaData), NewProp_Entities_MetaData) }; // 4204275627
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_EntityMetaData_Inner = { "EntityMetaData", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData, METADATA_PARAMS(0, nullptr) }; // 571531167
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_EntityMetaData = { "EntityMetaData", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEntityComponentField, EntityMetaData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityMetaData_MetaData), NewProp_EntityMetaData_MetaData) }; // 571531167
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_SharedMetaData_Inner = { "SharedMetaData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData, METADATA_PARAMS(0, nullptr) }; // 223709091
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_SharedMetaData = { "SharedMetaData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEntityComponentField, SharedMetaData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedMetaData_MetaData), NewProp_SharedMetaData_MetaData) }; // 223709091
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_PersistentEntityTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_OneShotEntityTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_Entities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_Entities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_EntityMetaData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_EntityMetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_SharedMetaData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_SharedMetaData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneEntityComponentField",
	Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::PropPointers),
	sizeof(FMovieSceneEntityComponentField),
	alignof(FMovieSceneEntityComponentField),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEntityComponentField()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEntityComponentField.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEntityComponentField.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEntityComponentField.InnerSingleton;
}
// End ScriptStruct FMovieSceneEntityComponentField

// Begin ScriptStruct FMovieSceneEvaluationFieldTrackPtr
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldTrackPtr;
class UScriptStruct* FMovieSceneEvaluationFieldTrackPtr::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldTrackPtr.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldTrackPtr.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationFieldTrackPtr"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldTrackPtr.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationFieldTrackPtr>()
{
	return FMovieSceneEvaluationFieldTrackPtr::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** A pointer to a track held within an evaluation template */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "A pointer to a track held within an evaluation template" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceID_MetaData[] = {
		{ "Comment", "/** The sequence ID that identifies to which sequence the track belongs */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "The sequence ID that identifies to which sequence the track belongs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackIdentifier_MetaData[] = {
		{ "Comment", "/** The Identifier of the track inside the track map (see FMovieSceneEvaluationTemplate::Tracks) */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "The Identifier of the track inside the track map (see FMovieSceneEvaluationTemplate::Tracks)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackIdentifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldTrackPtr>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewProp_SequenceID = { "SequenceID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationFieldTrackPtr, SequenceID), Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceID_MetaData), NewProp_SequenceID_MetaData) }; // 3318969255
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewProp_TrackIdentifier = { "TrackIdentifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationFieldTrackPtr, TrackIdentifier), Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackIdentifier_MetaData), NewProp_TrackIdentifier_MetaData) }; // 3653032415
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewProp_SequenceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewProp_TrackIdentifier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneEvaluationFieldTrackPtr",
	Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::PropPointers),
	sizeof(FMovieSceneEvaluationFieldTrackPtr),
	alignof(FMovieSceneEvaluationFieldTrackPtr),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldTrackPtr.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldTrackPtr.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldTrackPtr.InnerSingleton;
}
// End ScriptStruct FMovieSceneEvaluationFieldTrackPtr

// Begin ScriptStruct FMovieSceneEvaluationFieldSegmentPtr
static_assert(std::is_polymorphic<FMovieSceneEvaluationFieldSegmentPtr>() == std::is_polymorphic<FMovieSceneEvaluationFieldTrackPtr>(), "USTRUCT FMovieSceneEvaluationFieldSegmentPtr cannot be polymorphic unless super FMovieSceneEvaluationFieldTrackPtr is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldSegmentPtr;
class UScriptStruct* FMovieSceneEvaluationFieldSegmentPtr::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldSegmentPtr.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldSegmentPtr.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationFieldSegmentPtr"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldSegmentPtr.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationFieldSegmentPtr>()
{
	return FMovieSceneEvaluationFieldSegmentPtr::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** A pointer to a particular segment of a track held within an evaluation template */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "A pointer to a particular segment of a track held within an evaluation template" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentID_MetaData[] = {
		{ "Comment", "/** The identifier of the segment within the track (see FMovieSceneEvaluationTrack::Segments) */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "The identifier of the segment within the track (see FMovieSceneEvaluationTrack::Segments)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldSegmentPtr>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::NewProp_SegmentID = { "SegmentID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationFieldSegmentPtr, SegmentID), Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentID_MetaData), NewProp_SegmentID_MetaData) }; // 1617653148
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::NewProp_SegmentID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr,
	&NewStructOps,
	"MovieSceneEvaluationFieldSegmentPtr",
	Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::PropPointers),
	sizeof(FMovieSceneEvaluationFieldSegmentPtr),
	alignof(FMovieSceneEvaluationFieldSegmentPtr),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldSegmentPtr.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldSegmentPtr.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldSegmentPtr.InnerSingleton;
}
// End ScriptStruct FMovieSceneEvaluationFieldSegmentPtr

// Begin ScriptStruct FMovieSceneFieldEntry_EvaluationTrack
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneFieldEntry_EvaluationTrack;
class UScriptStruct* FMovieSceneFieldEntry_EvaluationTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneFieldEntry_EvaluationTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneFieldEntry_EvaluationTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneFieldEntry_EvaluationTrack"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneFieldEntry_EvaluationTrack.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneFieldEntry_EvaluationTrack>()
{
	return FMovieSceneFieldEntry_EvaluationTrack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumChildren_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackPtr;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_NumChildren;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFieldEntry_EvaluationTrack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::NewProp_TrackPtr = { "TrackPtr", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneFieldEntry_EvaluationTrack, TrackPtr), Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackPtr_MetaData), NewProp_TrackPtr_MetaData) }; // 1457844843
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::NewProp_NumChildren = { "NumChildren", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneFieldEntry_EvaluationTrack, NumChildren), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumChildren_MetaData), NewProp_NumChildren_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::NewProp_TrackPtr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::NewProp_NumChildren,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneFieldEntry_EvaluationTrack",
	Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::PropPointers),
	sizeof(FMovieSceneFieldEntry_EvaluationTrack),
	alignof(FMovieSceneFieldEntry_EvaluationTrack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneFieldEntry_EvaluationTrack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneFieldEntry_EvaluationTrack.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneFieldEntry_EvaluationTrack.InnerSingleton;
}
// End ScriptStruct FMovieSceneFieldEntry_EvaluationTrack

// Begin ScriptStruct FMovieSceneFieldEntry_ChildTemplate
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneFieldEntry_ChildTemplate;
class UScriptStruct* FMovieSceneFieldEntry_ChildTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneFieldEntry_ChildTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneFieldEntry_ChildTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneFieldEntry_ChildTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneFieldEntry_ChildTemplate.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneFieldEntry_ChildTemplate>()
{
	return FMovieSceneFieldEntry_ChildTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForcedTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_ChildIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForcedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFieldEntry_ChildTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewProp_ChildIndex = { "ChildIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneFieldEntry_ChildTemplate, ChildIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildIndex_MetaData), NewProp_ChildIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewProp_Flags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneFieldEntry_ChildTemplate, Flags), Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) }; // 1683700086
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewProp_ForcedTime = { "ForcedTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneFieldEntry_ChildTemplate, ForcedTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForcedTime_MetaData), NewProp_ForcedTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewProp_ChildIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewProp_Flags_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewProp_ForcedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneFieldEntry_ChildTemplate",
	Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::PropPointers),
	sizeof(FMovieSceneFieldEntry_ChildTemplate),
	alignof(FMovieSceneFieldEntry_ChildTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneFieldEntry_ChildTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneFieldEntry_ChildTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneFieldEntry_ChildTemplate.InnerSingleton;
}
// End ScriptStruct FMovieSceneFieldEntry_ChildTemplate

// Begin ScriptStruct FMovieSceneEvaluationGroupLUTIndex
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvaluationGroupLUTIndex;
class UScriptStruct* FMovieSceneEvaluationGroupLUTIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationGroupLUTIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvaluationGroupLUTIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationGroupLUTIndex"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationGroupLUTIndex.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationGroupLUTIndex>()
{
	return FMovieSceneEvaluationGroupLUTIndex::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Lookup table index for a group of evaluation templates */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Lookup table index for a group of evaluation templates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumInitPtrs_MetaData[] = {
		{ "Comment", "/** The number of initialization pointers are stored after &FMovieSceneEvaluationGroup::SegmentPtrLUT[0] + LUTOffset. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "The number of initialization pointers are stored after &FMovieSceneEvaluationGroup::SegmentPtrLUT[0] + LUTOffset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumEvalPtrs_MetaData[] = {
		{ "Comment", "/** The number of evaluation pointers are stored after &FMovieSceneEvaluationGroup::SegmentPtrLUT[0] + LUTOffset + NumInitPtrs. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "The number of evaluation pointers are stored after &FMovieSceneEvaluationGroup::SegmentPtrLUT[0] + LUTOffset + NumInitPtrs." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumInitPtrs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumEvalPtrs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationGroupLUTIndex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_NumInitPtrs = { "NumInitPtrs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationGroupLUTIndex, NumInitPtrs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumInitPtrs_MetaData), NewProp_NumInitPtrs_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_NumEvalPtrs = { "NumEvalPtrs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationGroupLUTIndex, NumEvalPtrs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumEvalPtrs_MetaData), NewProp_NumEvalPtrs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_NumInitPtrs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_NumEvalPtrs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneEvaluationGroupLUTIndex",
	Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::PropPointers),
	sizeof(FMovieSceneEvaluationGroupLUTIndex),
	alignof(FMovieSceneEvaluationGroupLUTIndex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationGroupLUTIndex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvaluationGroupLUTIndex.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationGroupLUTIndex.InnerSingleton;
}
// End ScriptStruct FMovieSceneEvaluationGroupLUTIndex

// Begin ScriptStruct FMovieSceneEvaluationGroup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvaluationGroup;
class UScriptStruct* FMovieSceneEvaluationGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvaluationGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationGroup"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationGroup.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationGroup>()
{
	return FMovieSceneEvaluationGroup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds segment pointers for all segments that are active for a given range of the sequence */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Holds segment pointers for all segments that are active for a given range of the sequence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LUTIndices_MetaData[] = {
		{ "Comment", "/** Array of indices that define all the flush groups in the range. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Array of indices that define all the flush groups in the range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackLUT_MetaData[] = {
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionLUT_MetaData[] = {
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LUTIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LUTIndices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackLUT_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackLUT;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionLUT_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SectionLUT;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_LUTIndices_Inner = { "LUTIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex, METADATA_PARAMS(0, nullptr) }; // 3059447735
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_LUTIndices = { "LUTIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationGroup, LUTIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LUTIndices_MetaData), NewProp_LUTIndices_MetaData) }; // 3059447735
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_TrackLUT_Inner = { "TrackLUT", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack, METADATA_PARAMS(0, nullptr) }; // 3504562491
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_TrackLUT = { "TrackLUT", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationGroup, TrackLUT), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackLUT_MetaData), NewProp_TrackLUT_MetaData) }; // 3504562491
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_SectionLUT_Inner = { "SectionLUT", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate, METADATA_PARAMS(0, nullptr) }; // 2903640476
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_SectionLUT = { "SectionLUT", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationGroup, SectionLUT), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionLUT_MetaData), NewProp_SectionLUT_MetaData) }; // 2903640476
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_LUTIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_LUTIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_TrackLUT_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_TrackLUT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_SectionLUT_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_SectionLUT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneEvaluationGroup",
	Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::PropPointers),
	sizeof(FMovieSceneEvaluationGroup),
	alignof(FMovieSceneEvaluationGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvaluationGroup.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationGroup.InnerSingleton;
}
// End ScriptStruct FMovieSceneEvaluationGroup

// Begin ScriptStruct FMovieSceneOrderedEvaluationKey
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneOrderedEvaluationKey;
class UScriptStruct* FMovieSceneOrderedEvaluationKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneOrderedEvaluationKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneOrderedEvaluationKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneOrderedEvaluationKey"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneOrderedEvaluationKey.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneOrderedEvaluationKey>()
{
	return FMovieSceneOrderedEvaluationKey::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct that stores the key for an evaluated entity, and the index at which it was (or is to be) evaluated */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Struct that stores the key for an evaluated entity, and the index at which it was (or is to be) evaluated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetupIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TearDownIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_SetupIndex;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_TearDownIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneOrderedEvaluationKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneOrderedEvaluationKey, Key), Z_Construct_UScriptStruct_FMovieSceneEvaluationKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 96721660
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_SetupIndex = { "SetupIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneOrderedEvaluationKey, SetupIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetupIndex_MetaData), NewProp_SetupIndex_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_TearDownIndex = { "TearDownIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneOrderedEvaluationKey, TearDownIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TearDownIndex_MetaData), NewProp_TearDownIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_SetupIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_TearDownIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneOrderedEvaluationKey",
	Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::PropPointers),
	sizeof(FMovieSceneOrderedEvaluationKey),
	alignof(FMovieSceneOrderedEvaluationKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneOrderedEvaluationKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneOrderedEvaluationKey.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneOrderedEvaluationKey.InnerSingleton;
}
// End ScriptStruct FMovieSceneOrderedEvaluationKey

// Begin ScriptStruct FMovieSceneEvaluationMetaData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvaluationMetaData;
class UScriptStruct* FMovieSceneEvaluationMetaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationMetaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvaluationMetaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationMetaData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationMetaData.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationMetaData>()
{
	return FMovieSceneEvaluationMetaData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Informational meta-data that applies to a given time range */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Informational meta-data that applies to a given time range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSequences_MetaData[] = {
		{ "Comment", "/** Array of sequences that are active in this time range. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Array of sequences that are active in this time range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveEntities_MetaData[] = {
		{ "Comment", "/** Array of entities (tracks and/or sections) that are active in this time range. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Array of entities (tracks and/or sections) that are active in this time range." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveSequences_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveSequences;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveEntities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveEntities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationMetaData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveSequences_Inner = { "ActiveSequences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(0, nullptr) }; // 3318969255
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveSequences = { "ActiveSequences", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationMetaData, ActiveSequences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveSequences_MetaData), NewProp_ActiveSequences_MetaData) }; // 3318969255
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveEntities_Inner = { "ActiveEntities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey, METADATA_PARAMS(0, nullptr) }; // 3196107593
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveEntities = { "ActiveEntities", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationMetaData, ActiveEntities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveEntities_MetaData), NewProp_ActiveEntities_MetaData) }; // 3196107593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveSequences_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveSequences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveEntities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveEntities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneEvaluationMetaData",
	Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::PropPointers),
	sizeof(FMovieSceneEvaluationMetaData),
	alignof(FMovieSceneEvaluationMetaData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationMetaData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvaluationMetaData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationMetaData.InnerSingleton;
}
// End ScriptStruct FMovieSceneEvaluationMetaData

// Begin ScriptStruct FMovieSceneEvaluationField
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvaluationField;
class UScriptStruct* FMovieSceneEvaluationField::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationField.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvaluationField.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationField, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationField"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationField.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationField>()
{
	return FMovieSceneEvaluationField::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Memory layout optimized primarily for speed of searching the applicable ranges\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Memory layout optimized primarily for speed of searching the applicable ranges" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Signature_MetaData[] = {
		{ "Comment", "/** Signature that uniquely identifies any state this field can be in - regenerated on mutation */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Signature that uniquely identifies any state this field can be in - regenerated on mutation" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ranges_MetaData[] = {
		{ "Comment", "/** Ranges stored separately for fast (cache efficient) lookup. Each index has a corresponding entry in FMovieSceneEvaluationField::Groups. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Ranges stored separately for fast (cache efficient) lookup. Each index has a corresponding entry in FMovieSceneEvaluationField::Groups." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Groups_MetaData[] = {
		{ "Comment", "/** Groups that store segment pointers for each of the above ranges. Each index has a corresponding entry in FMovieSceneEvaluationField::Ranges. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Groups that store segment pointers for each of the above ranges. Each index has a corresponding entry in FMovieSceneEvaluationField::Ranges." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[] = {
		{ "Comment", "/** Meta data that maps to entries in the 'Ranges' array. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Meta data that maps to entries in the 'Ranges' array." },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Signature;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ranges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Ranges;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Groups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Groups;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MetaData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MetaData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationField>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Signature = { "Signature", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationField, Signature), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Signature_MetaData), NewProp_Signature_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Ranges_Inner = { "Ranges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(0, nullptr) }; // 83459642
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Ranges = { "Ranges", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationField, Ranges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ranges_MetaData), NewProp_Ranges_MetaData) }; // 83459642
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Groups_Inner = { "Groups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup, METADATA_PARAMS(0, nullptr) }; // 246859549
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Groups = { "Groups", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationField, Groups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Groups_MetaData), NewProp_Groups_MetaData) }; // 246859549
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_MetaData_Inner = { "MetaData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData, METADATA_PARAMS(0, nullptr) }; // 215201556
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationField, MetaData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaData_MetaData), NewProp_MetaData_MetaData) }; // 215201556
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Signature,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Ranges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Ranges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Groups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Groups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_MetaData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_MetaData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneEvaluationField",
	Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::PropPointers),
	sizeof(FMovieSceneEvaluationField),
	alignof(FMovieSceneEvaluationField),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationField()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationField.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvaluationField.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationField.InnerSingleton;
}
// End ScriptStruct FMovieSceneEvaluationField

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationField_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneEvaluationFieldEntityKey::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::NewStructOps, TEXT("MovieSceneEvaluationFieldEntityKey"), &Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntityKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvaluationFieldEntityKey), 2318175819U) },
		{ FMovieSceneEvaluationFieldEntity::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::NewStructOps, TEXT("MovieSceneEvaluationFieldEntity"), &Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvaluationFieldEntity), 4204275627U) },
		{ FMovieSceneEvaluationFieldSharedEntityMetaData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics::NewStructOps, TEXT("MovieSceneEvaluationFieldSharedEntityMetaData"), &Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldSharedEntityMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvaluationFieldSharedEntityMetaData), 223709091U) },
		{ FMovieSceneEvaluationFieldEntityMetaData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewStructOps, TEXT("MovieSceneEvaluationFieldEntityMetaData"), &Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntityMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvaluationFieldEntityMetaData), 571531167U) },
		{ FMovieSceneEvaluationFieldEntityTree::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree_Statics::NewStructOps, TEXT("MovieSceneEvaluationFieldEntityTree"), &Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldEntityTree, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvaluationFieldEntityTree), 362626746U) },
		{ FMovieSceneEntityComponentField::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewStructOps, TEXT("MovieSceneEntityComponentField"), &Z_Registration_Info_UScriptStruct_MovieSceneEntityComponentField, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEntityComponentField), 1846708454U) },
		{ FMovieSceneEvaluationFieldTrackPtr::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewStructOps, TEXT("MovieSceneEvaluationFieldTrackPtr"), &Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldTrackPtr, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvaluationFieldTrackPtr), 1457844843U) },
		{ FMovieSceneEvaluationFieldSegmentPtr::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::NewStructOps, TEXT("MovieSceneEvaluationFieldSegmentPtr"), &Z_Registration_Info_UScriptStruct_MovieSceneEvaluationFieldSegmentPtr, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvaluationFieldSegmentPtr), 576602288U) },
		{ FMovieSceneFieldEntry_EvaluationTrack::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::NewStructOps, TEXT("MovieSceneFieldEntry_EvaluationTrack"), &Z_Registration_Info_UScriptStruct_MovieSceneFieldEntry_EvaluationTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneFieldEntry_EvaluationTrack), 3504562491U) },
		{ FMovieSceneFieldEntry_ChildTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewStructOps, TEXT("MovieSceneFieldEntry_ChildTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneFieldEntry_ChildTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneFieldEntry_ChildTemplate), 2903640476U) },
		{ FMovieSceneEvaluationGroupLUTIndex::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewStructOps, TEXT("MovieSceneEvaluationGroupLUTIndex"), &Z_Registration_Info_UScriptStruct_MovieSceneEvaluationGroupLUTIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvaluationGroupLUTIndex), 3059447735U) },
		{ FMovieSceneEvaluationGroup::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewStructOps, TEXT("MovieSceneEvaluationGroup"), &Z_Registration_Info_UScriptStruct_MovieSceneEvaluationGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvaluationGroup), 246859549U) },
		{ FMovieSceneOrderedEvaluationKey::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewStructOps, TEXT("MovieSceneOrderedEvaluationKey"), &Z_Registration_Info_UScriptStruct_MovieSceneOrderedEvaluationKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneOrderedEvaluationKey), 3196107593U) },
		{ FMovieSceneEvaluationMetaData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewStructOps, TEXT("MovieSceneEvaluationMetaData"), &Z_Registration_Info_UScriptStruct_MovieSceneEvaluationMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvaluationMetaData), 215201556U) },
		{ FMovieSceneEvaluationField::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewStructOps, TEXT("MovieSceneEvaluationField"), &Z_Registration_Info_UScriptStruct_MovieSceneEvaluationField, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvaluationField), 1259474316U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationField_h_1630145104(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationField_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationField_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
