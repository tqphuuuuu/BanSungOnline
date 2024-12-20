// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieScene3DPathSection.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneFloatChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DPathSection() {}

// Begin Cross Module References
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DPathSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DPathSection_NoRegister();
MOVIESCENETRACKS_API UEnum* Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Enum MovieScene3DPathSection_Axis
static FEnumRegistrationInfo Z_Registration_Info_UEnum_MovieScene3DPathSection_Axis;
static UEnum* MovieScene3DPathSection_Axis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_MovieScene3DPathSection_Axis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_MovieScene3DPathSection_Axis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieScene3DPathSection_Axis"));
	}
	return Z_Registration_Info_UEnum_MovieScene3DPathSection_Axis.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UEnum* StaticEnum<MovieScene3DPathSection_Axis>()
{
	return MovieScene3DPathSection_Axis_StaticEnum();
}
struct Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DPathSection.h" },
		{ "NEG_X.DisplayName", "-X" },
		{ "NEG_X.Name", "MovieScene3DPathSection_Axis::NEG_X" },
		{ "NEG_Y.DisplayName", "-Y" },
		{ "NEG_Y.Name", "MovieScene3DPathSection_Axis::NEG_Y" },
		{ "NEG_Z.DisplayName", "-Z" },
		{ "NEG_Z.Name", "MovieScene3DPathSection_Axis::NEG_Z" },
		{ "X.DisplayName", "X" },
		{ "X.Name", "MovieScene3DPathSection_Axis::X" },
		{ "Y.DisplayName", "Y" },
		{ "Y.Name", "MovieScene3DPathSection_Axis::Y" },
		{ "Z.DisplayName", "Z" },
		{ "Z.Name", "MovieScene3DPathSection_Axis::Z" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "MovieScene3DPathSection_Axis::X", (int64)MovieScene3DPathSection_Axis::X },
		{ "MovieScene3DPathSection_Axis::Y", (int64)MovieScene3DPathSection_Axis::Y },
		{ "MovieScene3DPathSection_Axis::Z", (int64)MovieScene3DPathSection_Axis::Z },
		{ "MovieScene3DPathSection_Axis::NEG_X", (int64)MovieScene3DPathSection_Axis::NEG_X },
		{ "MovieScene3DPathSection_Axis::NEG_Y", (int64)MovieScene3DPathSection_Axis::NEG_Y },
		{ "MovieScene3DPathSection_Axis::NEG_Z", (int64)MovieScene3DPathSection_Axis::NEG_Z },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	"MovieScene3DPathSection_Axis",
	"MovieScene3DPathSection_Axis",
	Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis()
{
	if (!Z_Registration_Info_UEnum_MovieScene3DPathSection_Axis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_MovieScene3DPathSection_Axis.InnerSingleton, Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_MovieScene3DPathSection_Axis.InnerSingleton;
}
// End Enum MovieScene3DPathSection_Axis

// Begin Class UMovieScene3DPathSection
void UMovieScene3DPathSection::StaticRegisterNativesUMovieScene3DPathSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScene3DPathSection);
UClass* Z_Construct_UClass_UMovieScene3DPathSection_NoRegister()
{
	return UMovieScene3DPathSection::StaticClass();
}
struct Z_Construct_UClass_UMovieScene3DPathSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A 3D Path section\n */" },
		{ "IncludePath", "Sections/MovieScene3DPathSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DPathSection.h" },
		{ "ToolTip", "A 3D Path section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimingCurve_MetaData[] = {
		{ "Comment", "/** Timing Curve */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DPathSection.h" },
		{ "ToolTip", "Timing Curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontAxisEnum_MetaData[] = {
		{ "Category", "Path" },
		{ "Comment", "/** Front Axis */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DPathSection.h" },
		{ "ToolTip", "Front Axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpAxisEnum_MetaData[] = {
		{ "Category", "Path" },
		{ "Comment", "/** Up Axis */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DPathSection.h" },
		{ "ToolTip", "Up Axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFollow_MetaData[] = {
		{ "Category", "Path" },
		{ "Comment", "/** Follow Curve */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DPathSection.h" },
		{ "ToolTip", "Follow Curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[] = {
		{ "Category", "Path" },
		{ "Comment", "/** Reverse Timing */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DPathSection.h" },
		{ "ToolTip", "Reverse Timing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceUpright_MetaData[] = {
		{ "Category", "Path" },
		{ "Comment", "/** Force Upright */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DPathSection.h" },
		{ "ToolTip", "Force Upright" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimingCurve;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FrontAxisEnum_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FrontAxisEnum;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpAxisEnum_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpAxisEnum;
	static void NewProp_bFollow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollow;
	static void NewProp_bReverse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverse;
	static void NewProp_bForceUpright_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceUpright;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene3DPathSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_TimingCurve = { "TimingCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene3DPathSection, TimingCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimingCurve_MetaData), NewProp_TimingCurve_MetaData) }; // 139010471
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_FrontAxisEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_FrontAxisEnum = { "FrontAxisEnum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene3DPathSection, FrontAxisEnum), Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontAxisEnum_MetaData), NewProp_FrontAxisEnum_MetaData) }; // 1484932074
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_UpAxisEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_UpAxisEnum = { "UpAxisEnum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene3DPathSection, UpAxisEnum), Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpAxisEnum_MetaData), NewProp_UpAxisEnum_MetaData) }; // 1484932074
void Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bFollow_SetBit(void* Obj)
{
	((UMovieScene3DPathSection*)Obj)->bFollow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bFollow = { "bFollow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMovieScene3DPathSection), &Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bFollow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFollow_MetaData), NewProp_bFollow_MetaData) };
void Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bReverse_SetBit(void* Obj)
{
	((UMovieScene3DPathSection*)Obj)->bReverse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMovieScene3DPathSection), &Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReverse_MetaData), NewProp_bReverse_MetaData) };
void Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bForceUpright_SetBit(void* Obj)
{
	((UMovieScene3DPathSection*)Obj)->bForceUpright = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bForceUpright = { "bForceUpright", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMovieScene3DPathSection), &Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bForceUpright_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceUpright_MetaData), NewProp_bForceUpright_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScene3DPathSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_TimingCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_FrontAxisEnum_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_FrontAxisEnum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_UpAxisEnum_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_UpAxisEnum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bFollow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bReverse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bForceUpright,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DPathSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieScene3DPathSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScene3DConstraintSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DPathSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene3DPathSection_Statics::ClassParams = {
	&UMovieScene3DPathSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieScene3DPathSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DPathSection_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DPathSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScene3DPathSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScene3DPathSection()
{
	if (!Z_Registration_Info_UClass_UMovieScene3DPathSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScene3DPathSection.OuterSingleton, Z_Construct_UClass_UMovieScene3DPathSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScene3DPathSection.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScene3DPathSection>()
{
	return UMovieScene3DPathSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DPathSection);
UMovieScene3DPathSection::~UMovieScene3DPathSection() {}
// End Class UMovieScene3DPathSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ MovieScene3DPathSection_Axis_StaticEnum, TEXT("MovieScene3DPathSection_Axis"), &Z_Registration_Info_UEnum_MovieScene3DPathSection_Axis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1484932074U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScene3DPathSection, UMovieScene3DPathSection::StaticClass, TEXT("UMovieScene3DPathSection"), &Z_Registration_Info_UClass_UMovieScene3DPathSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScene3DPathSection), 996263170U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_2387330963(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
