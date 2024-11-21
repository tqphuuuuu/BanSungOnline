// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Variants/MovieSceneTimeWarpVariant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceTransform() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneBreadcrumbMode();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneInverseNestedSequenceTransform();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneInverseSequenceTransform();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceTransform();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeTransform();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneWarpCounter();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Enum EMovieSceneBreadcrumbMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieSceneBreadcrumbMode;
static UEnum* EMovieSceneBreadcrumbMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneBreadcrumbMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovieSceneBreadcrumbMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneBreadcrumbMode, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneBreadcrumbMode"));
	}
	return Z_Registration_Info_UEnum_EMovieSceneBreadcrumbMode.OuterSingleton;
}
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneBreadcrumbMode>()
{
	return EMovieSceneBreadcrumbMode_StaticEnum();
}
struct Z_Construct_UEnum_MovieScene_EMovieSceneBreadcrumbMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enumeration defining how to store breadcrumb trails\n */" },
		{ "Dense.Comment", "/** Store breadcrumbs for every nested time transformation */" },
		{ "Dense.Name", "EMovieSceneBreadcrumbMode::Dense" },
		{ "Dense.ToolTip", "Store breadcrumbs for every nested time transformation" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "Sparse.Comment", "/** Default: Only store breadcrumbs for non-linear transformations */" },
		{ "Sparse.Name", "EMovieSceneBreadcrumbMode::Sparse" },
		{ "Sparse.ToolTip", "Default: Only store breadcrumbs for non-linear transformations" },
		{ "ToolTip", "Enumeration defining how to store breadcrumb trails" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovieSceneBreadcrumbMode::Sparse", (int64)EMovieSceneBreadcrumbMode::Sparse },
		{ "EMovieSceneBreadcrumbMode::Dense", (int64)EMovieSceneBreadcrumbMode::Dense },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieScene_EMovieSceneBreadcrumbMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	"EMovieSceneBreadcrumbMode",
	"EMovieSceneBreadcrumbMode",
	Z_Construct_UEnum_MovieScene_EMovieSceneBreadcrumbMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneBreadcrumbMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneBreadcrumbMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MovieScene_EMovieSceneBreadcrumbMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneBreadcrumbMode()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneBreadcrumbMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieSceneBreadcrumbMode.InnerSingleton, Z_Construct_UEnum_MovieScene_EMovieSceneBreadcrumbMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovieSceneBreadcrumbMode.InnerSingleton;
}
// End Enum EMovieSceneBreadcrumbMode

// Begin ScriptStruct FMovieSceneTransformBreadcrumbs
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTransformBreadcrumbs;
class UScriptStruct* FMovieSceneTransformBreadcrumbs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTransformBreadcrumbs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTransformBreadcrumbs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTransformBreadcrumbs"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTransformBreadcrumbs.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTransformBreadcrumbs>()
{
	return FMovieSceneTransformBreadcrumbs::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct that tracks a breadcumb trail when transformiung a time through FMovieSceneSequenceTransform\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "Struct that tracks a breadcumb trail when transformiung a time through FMovieSceneSequenceTransform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Breadcrumbs_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Breadcrumbs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Breadcrumbs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTransformBreadcrumbs>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs_Statics::NewProp_Breadcrumbs_Inner = { "Breadcrumbs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs_Statics::NewProp_Breadcrumbs = { "Breadcrumbs", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTransformBreadcrumbs, Breadcrumbs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Breadcrumbs_MetaData), NewProp_Breadcrumbs_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTransformBreadcrumbs, Mode), Z_Construct_UEnum_MovieScene_EMovieSceneBreadcrumbMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 2124492724
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs_Statics::NewProp_Breadcrumbs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs_Statics::NewProp_Breadcrumbs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs_Statics::NewProp_Mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneTransformBreadcrumbs",
	Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs_Statics::PropPointers),
	sizeof(FMovieSceneTransformBreadcrumbs),
	alignof(FMovieSceneTransformBreadcrumbs),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTransformBreadcrumbs.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTransformBreadcrumbs.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTransformBreadcrumbs.InnerSingleton;
}
// End ScriptStruct FMovieSceneTransformBreadcrumbs

// Begin ScriptStruct FMovieSceneWarpCounter
static_assert(std::is_polymorphic<FMovieSceneWarpCounter>() == std::is_polymorphic<FMovieSceneTransformBreadcrumbs>(), "USTRUCT FMovieSceneWarpCounter cannot be polymorphic unless super FMovieSceneTransformBreadcrumbs is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneWarpCounter;
class UScriptStruct* FMovieSceneWarpCounter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneWarpCounter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneWarpCounter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneWarpCounter, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneWarpCounter"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneWarpCounter.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneWarpCounter>()
{
	return FMovieSceneWarpCounter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneWarpCounter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs,
	&NewStructOps,
	"MovieSceneWarpCounter",
	nullptr,
	0,
	sizeof(FMovieSceneWarpCounter),
	alignof(FMovieSceneWarpCounter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneWarpCounter()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneWarpCounter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneWarpCounter.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneWarpCounter.InnerSingleton;
}
// End ScriptStruct FMovieSceneWarpCounter

// Begin ScriptStruct FMovieSceneInverseNestedSequenceTransform
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneInverseNestedSequenceTransform;
class UScriptStruct* FMovieSceneInverseNestedSequenceTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneInverseNestedSequenceTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneInverseNestedSequenceTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneInverseNestedSequenceTransform, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneInverseNestedSequenceTransform"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneInverseNestedSequenceTransform.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneInverseNestedSequenceTransform>()
{
	return FMovieSceneInverseNestedSequenceTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneInverseNestedSequenceTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure used to represent a specific inverse transformation (ie from transformed to untransformed space) that cannot be combined with another.\n * Stored as a stack inside FMovieSceneInverseSequenceTransform to represent a complete transformation\n * from inner time-space to outer time-space.\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "Structure used to represent a specific inverse transformation (ie from transformed to untransformed space) that cannot be combined with another.\nStored as a stack inside FMovieSceneInverseSequenceTransform to represent a complete transformation\nfrom inner time-space to outer time-space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[] = {
		{ "Comment", "/** Time scale as either a fixed play rate, or as an external implementation */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "Time scale as either a fixed play rate, or as an external implementation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Comment", "/** Constant time offset. Offset is applied differently for different internal implementations of TimeScale. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "Constant time offset. Offset is applied differently for different internal implementations of TimeScale." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneInverseNestedSequenceTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneInverseNestedSequenceTransform_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneInverseNestedSequenceTransform, TimeScale), Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeScale_MetaData), NewProp_TimeScale_MetaData) }; // 2379539647
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneInverseNestedSequenceTransform_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneInverseNestedSequenceTransform, Offset), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneInverseNestedSequenceTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneInverseNestedSequenceTransform_Statics::NewProp_TimeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneInverseNestedSequenceTransform_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneInverseNestedSequenceTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneInverseNestedSequenceTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneInverseNestedSequenceTransform",
	Z_Construct_UScriptStruct_FMovieSceneInverseNestedSequenceTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneInverseNestedSequenceTransform_Statics::PropPointers),
	sizeof(FMovieSceneInverseNestedSequenceTransform),
	alignof(FMovieSceneInverseNestedSequenceTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneInverseNestedSequenceTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneInverseNestedSequenceTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneInverseNestedSequenceTransform()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneInverseNestedSequenceTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneInverseNestedSequenceTransform.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneInverseNestedSequenceTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneInverseNestedSequenceTransform.InnerSingleton;
}
// End ScriptStruct FMovieSceneInverseNestedSequenceTransform

// Begin ScriptStruct FMovieSceneNestedSequenceTransform
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneNestedSequenceTransform;
class UScriptStruct* FMovieSceneNestedSequenceTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneNestedSequenceTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneNestedSequenceTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneNestedSequenceTransform"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneNestedSequenceTransform.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneNestedSequenceTransform>()
{
	return FMovieSceneNestedSequenceTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure used to represent a specific transformation (ie from untransformed to transformed space) that cannot be combined with another.\n *\n * Stored as a stack inside FMovieSceneSequenceTransform to represent a complete transformation from inner time-space to outer time-space.\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "Structure used to represent a specific transformation (ie from untransformed to transformed space) that cannot be combined with another.\n\nStored as a stack inside FMovieSceneSequenceTransform to represent a complete transformation from inner time-space to outer time-space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[] = {
		{ "Comment", "/**\n\x09 * Time scale implemented as an optionally-warping variant\n\x09 */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "Time scale implemented as an optionally-warping variant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Comment", "/**\n\x09 * Linear time transform for this sub-sequence.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "Linear time transform for this sub-sequence." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneNestedSequenceTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneNestedSequenceTransform, TimeScale), Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeScale_MetaData), NewProp_TimeScale_MetaData) }; // 2379539647
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneNestedSequenceTransform, Offset), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_TimeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneNestedSequenceTransform",
	Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::PropPointers),
	sizeof(FMovieSceneNestedSequenceTransform),
	alignof(FMovieSceneNestedSequenceTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneNestedSequenceTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneNestedSequenceTransform.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneNestedSequenceTransform.InnerSingleton;
}
// End ScriptStruct FMovieSceneNestedSequenceTransform

// Begin ScriptStruct FMovieSceneSequenceTransform
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSequenceTransform;
class UScriptStruct* FMovieSceneSequenceTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSequenceTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceTransform, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceTransform"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceTransform.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequenceTransform>()
{
	return FMovieSceneSequenceTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Movie scene sequence transform class that transforms from one time-space to another, represented as\n * a linear transformation plus zero or more complex, non-linear transformations.\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "Movie scene sequence transform class that transforms from one time-space to another, represented as\na linear transformation plus zero or more complex, non-linear transformations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearTransform_MetaData[] = {
		{ "Comment", "/**\n\x09 * The initial linear transformation represented as a 2D matrix. Always applied first.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "The initial linear transformation represented as a 2D matrix. Always applied first." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NestedTransforms_MetaData[] = {
		{ "Comment", "/**\n\x09 * Additional transformations that should be applied after LinearTransform.\n\x09 * This array is populated whenever a non-linear transform is encountered.\n\x09 * */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "Additional transformations that should be applied after LinearTransform.\nThis array is populated whenever a non-linear transform is encountered." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NestedTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NestedTransforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_LinearTransform = { "LinearTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSequenceTransform, LinearTransform), Z_Construct_UScriptStruct_FMovieSceneTimeTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearTransform_MetaData), NewProp_LinearTransform_MetaData) }; // 3098440038
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_NestedTransforms_Inner = { "NestedTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform, METADATA_PARAMS(0, nullptr) }; // 907210591
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_NestedTransforms = { "NestedTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSequenceTransform, NestedTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NestedTransforms_MetaData), NewProp_NestedTransforms_MetaData) }; // 907210591
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_LinearTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_NestedTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_NestedTransforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneSequenceTransform",
	Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::PropPointers),
	sizeof(FMovieSceneSequenceTransform),
	alignof(FMovieSceneSequenceTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceTransform()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSequenceTransform.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceTransform.InnerSingleton;
}
// End ScriptStruct FMovieSceneSequenceTransform

// Begin ScriptStruct FMovieSceneInverseSequenceTransform
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneInverseSequenceTransform;
class UScriptStruct* FMovieSceneInverseSequenceTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneInverseSequenceTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneInverseSequenceTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneInverseSequenceTransform, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneInverseSequenceTransform"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneInverseSequenceTransform.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneInverseSequenceTransform>()
{
	return FMovieSceneInverseSequenceTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneInverseSequenceTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The inverse of a FMovieSceneSequenceTransform representing a transformation from transformed, to untransformed space.\n * This uses a different class and API because the algorithms for computing the inverse of non-linear are different,\n * often more complex, and can fail. Whereas an FMovieSceneSequenceTransform can only represent a 1:1 mapping from outer\n * to inner space, its inverse is a (sometimes empty) many:many mapping.\n * \n * Consider a looping transform with a duration of 10 frames: [0, 10). Every time in the outer space maps to a time in the\n * inner space, but the opposite is not true. Only frames 0-10 exist in the inner space, and each frame in that time maps\n * to an infinite number of solutions in the outer space. Conversely, any inner time outside the loop range, ie, [-inf, 0)..(10, +inf]\n * cannot be transformed into the outer space.\n * \n * For this reason, the API only has functions for attempting such computations (TryTransformTime), and iterating the solutions\n * for any given time within a range.\n * \n * The inverse of an inverse transform is the original transform such that T*(1/T)=I theoretically holds true, although transform\n * multiplication is not actually supported by the API.\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "The inverse of a FMovieSceneSequenceTransform representing a transformation from transformed, to untransformed space.\nThis uses a different class and API because the algorithms for computing the inverse of non-linear are different,\noften more complex, and can fail. Whereas an FMovieSceneSequenceTransform can only represent a 1:1 mapping from outer\nto inner space, its inverse is a (sometimes empty) many:many mapping.\n\nConsider a looping transform with a duration of 10 frames: [0, 10). Every time in the outer space maps to a time in the\ninner space, but the opposite is not true. Only frames 0-10 exist in the inner space, and each frame in that time maps\nto an infinite number of solutions in the outer space. Conversely, any inner time outside the loop range, ie, [-inf, 0)..(10, +inf]\ncannot be transformed into the outer space.\n\nFor this reason, the API only has functions for attempting such computations (TryTransformTime), and iterating the solutions\nfor any given time within a range.\n\nThe inverse of an inverse transform is the original transform such that T*(1/T)=I theoretically holds true, although transform\nmultiplication is not actually supported by the API." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearTransform_MetaData[] = {
		{ "Comment", "/**\n\x09 * The final linear transformation represented as a 2D matrix. Always applied last.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "The final linear transformation represented as a 2D matrix. Always applied last." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NestedTransforms_MetaData[] = {
		{ "Comment", "/**\n\x09 * Additional transformations that should be applied before LinearTransform.\n\x09 * This array is populated whenever a non-linear transform is encountered.\n\x09 * */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "Additional transformations that should be applied before LinearTransform.\nThis array is populated whenever a non-linear transform is encountered." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NestedTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NestedTransforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneInverseSequenceTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneInverseSequenceTransform_Statics::NewProp_LinearTransform = { "LinearTransform", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneInverseSequenceTransform, LinearTransform), Z_Construct_UScriptStruct_FMovieSceneTimeTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearTransform_MetaData), NewProp_LinearTransform_MetaData) }; // 3098440038
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneInverseSequenceTransform_Statics::NewProp_NestedTransforms_Inner = { "NestedTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneInverseNestedSequenceTransform, METADATA_PARAMS(0, nullptr) }; // 2980874210
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneInverseSequenceTransform_Statics::NewProp_NestedTransforms = { "NestedTransforms", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneInverseSequenceTransform, NestedTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NestedTransforms_MetaData), NewProp_NestedTransforms_MetaData) }; // 2980874210
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneInverseSequenceTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneInverseSequenceTransform_Statics::NewProp_LinearTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneInverseSequenceTransform_Statics::NewProp_NestedTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneInverseSequenceTransform_Statics::NewProp_NestedTransforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneInverseSequenceTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneInverseSequenceTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneInverseSequenceTransform",
	Z_Construct_UScriptStruct_FMovieSceneInverseSequenceTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneInverseSequenceTransform_Statics::PropPointers),
	sizeof(FMovieSceneInverseSequenceTransform),
	alignof(FMovieSceneInverseSequenceTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneInverseSequenceTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneInverseSequenceTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneInverseSequenceTransform()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneInverseSequenceTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneInverseSequenceTransform.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneInverseSequenceTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneInverseSequenceTransform.InnerSingleton;
}
// End ScriptStruct FMovieSceneInverseSequenceTransform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMovieSceneBreadcrumbMode_StaticEnum, TEXT("EMovieSceneBreadcrumbMode"), &Z_Registration_Info_UEnum_EMovieSceneBreadcrumbMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2124492724U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneTransformBreadcrumbs::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs_Statics::NewStructOps, TEXT("MovieSceneTransformBreadcrumbs"), &Z_Registration_Info_UScriptStruct_MovieSceneTransformBreadcrumbs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTransformBreadcrumbs), 1240504818U) },
		{ FMovieSceneWarpCounter::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::NewStructOps, TEXT("MovieSceneWarpCounter"), &Z_Registration_Info_UScriptStruct_MovieSceneWarpCounter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneWarpCounter), 3509932906U) },
		{ FMovieSceneInverseNestedSequenceTransform::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneInverseNestedSequenceTransform_Statics::NewStructOps, TEXT("MovieSceneInverseNestedSequenceTransform"), &Z_Registration_Info_UScriptStruct_MovieSceneInverseNestedSequenceTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneInverseNestedSequenceTransform), 2980874210U) },
		{ FMovieSceneNestedSequenceTransform::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewStructOps, TEXT("MovieSceneNestedSequenceTransform"), &Z_Registration_Info_UScriptStruct_MovieSceneNestedSequenceTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneNestedSequenceTransform), 907210591U) },
		{ FMovieSceneSequenceTransform::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewStructOps, TEXT("MovieSceneSequenceTransform"), &Z_Registration_Info_UScriptStruct_MovieSceneSequenceTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSequenceTransform), 3482992164U) },
		{ FMovieSceneInverseSequenceTransform::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneInverseSequenceTransform_Statics::NewStructOps, TEXT("MovieSceneInverseSequenceTransform"), &Z_Registration_Info_UScriptStruct_MovieSceneInverseSequenceTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneInverseSequenceTransform), 2379376428U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h_224157096(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
