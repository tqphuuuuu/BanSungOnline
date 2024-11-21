// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Variants/MovieSceneNumericVariant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNumericVariant() {}

// Begin Cross Module References
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNumericVariant();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneNumericVariant
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneNumericVariant;
class UScriptStruct* FMovieSceneNumericVariant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneNumericVariant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneNumericVariant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNumericVariant, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneNumericVariant"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneNumericVariant.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneNumericVariant>()
{
	return FMovieSceneNumericVariant::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneNumericVariant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A variant type that masquerades as a numeric (double) value.\n * \n * This type is 8 bytes (sizeof(double)) and uses a technique called NaN-boxing to encode variants into those 8-bytes,\n * while a literal double value maintains the exact same bits in-memory as a double. By default this variant can only\n * represent a double, or a UMovieSceneNumericVariantGetter*, but additional variant types can be encoded by deriving\n * from this type and associating type 'IDs' to typed-data (upto 48 bit in size), where the type bits are encoded into\n * the nan bits of the double.\n * \n * Extensive reading around NaN-boxing techniques can be found elsewhere.\n * \n * UMovieSceneNumericVariantGetter may be used to assign an external, dynamic value to this variant.\n * \n * The benefit of using this technique is that this type can be used as a drop-in replacement for any double member\n * variable to provide it with dynamic getter functionality without inflating the size of the class, and with barely any\n * runtime overhead whatsoever. Automatic UPROPERTY upgrade exists for all numeric property types that make sense:\n * int64 and uint64 are not supported in this variant due to loss of precision (doubles only have 52 bits of mantissa)\n */" },
		{ "ModuleRelativePath", "Public/Variants/MovieSceneNumericVariant.h" },
		{ "ToolTip", "A variant type that masquerades as a numeric (double) value.\n\nThis type is 8 bytes (sizeof(double)) and uses a technique called NaN-boxing to encode variants into those 8-bytes,\nwhile a literal double value maintains the exact same bits in-memory as a double. By default this variant can only\nrepresent a double, or a UMovieSceneNumericVariantGetter*, but additional variant types can be encoded by deriving\nfrom this type and associating type 'IDs' to typed-data (upto 48 bit in size), where the type bits are encoded into\nthe nan bits of the double.\n\nExtensive reading around NaN-boxing techniques can be found elsewhere.\n\nUMovieSceneNumericVariantGetter may be used to assign an external, dynamic value to this variant.\n\nThe benefit of using this technique is that this type can be used as a drop-in replacement for any double member\nvariable to provide it with dynamic getter functionality without inflating the size of the class, and with barely any\nruntime overhead whatsoever. Automatic UPROPERTY upgrade exists for all numeric property types that make sense:\nint64 and uint64 are not supported in this variant due to loss of precision (doubles only have 52 bits of mantissa)" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneNumericVariant>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneNumericVariant_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneNumericVariant",
	nullptr,
	0,
	sizeof(FMovieSceneNumericVariant),
	alignof(FMovieSceneNumericVariant),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNumericVariant_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneNumericVariant_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNumericVariant()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneNumericVariant.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneNumericVariant.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneNumericVariant_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneNumericVariant.InnerSingleton;
}
// End ScriptStruct FMovieSceneNumericVariant

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneNumericVariant_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneNumericVariant::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneNumericVariant_Statics::NewStructOps, TEXT("MovieSceneNumericVariant"), &Z_Registration_Info_UScriptStruct_MovieSceneNumericVariant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneNumericVariant), 1219497573U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneNumericVariant_h_2086554325(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneNumericVariant_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneNumericVariant_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
