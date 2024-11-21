// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetaHumanSDKRuntime/Public/MetaHumanBodyType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetaHumanBodyType() {}

// Begin Cross Module References
METAHUMANSDKRUNTIME_API UEnum* Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyBodyPartIndex();
METAHUMANSDKRUNTIME_API UEnum* Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyType();
UPackage* Z_Construct_UPackage__Script_MetaHumanSDKRuntime();
// End Cross Module References

// Begin Enum EMetaHumanBodyType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMetaHumanBodyType;
static UEnum* EMetaHumanBodyType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMetaHumanBodyType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMetaHumanBodyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyType, (UObject*)Z_Construct_UPackage__Script_MetaHumanSDKRuntime(), TEXT("EMetaHumanBodyType"));
	}
	return Z_Registration_Info_UEnum_EMetaHumanBodyType.OuterSingleton;
}
template<> METAHUMANSDKRUNTIME_API UEnum* StaticEnum<EMetaHumanBodyType>()
{
	return EMetaHumanBodyType_StaticEnum();
}
struct Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Count.Hidden", "" },
		{ "Count.Name", "EMetaHumanBodyType::Count" },
		{ "f_med_nrw.Name", "EMetaHumanBodyType::f_med_nrw" },
		{ "f_med_ovw.Name", "EMetaHumanBodyType::f_med_ovw" },
		{ "f_med_unw.Name", "EMetaHumanBodyType::f_med_unw" },
		{ "f_srt_nrw.Name", "EMetaHumanBodyType::f_srt_nrw" },
		{ "f_srt_ovw.Name", "EMetaHumanBodyType::f_srt_ovw" },
		{ "f_srt_unw.Name", "EMetaHumanBodyType::f_srt_unw" },
		{ "f_tal_nrw.Name", "EMetaHumanBodyType::f_tal_nrw" },
		{ "f_tal_ovw.Name", "EMetaHumanBodyType::f_tal_ovw" },
		{ "f_tal_unw.Name", "EMetaHumanBodyType::f_tal_unw" },
		{ "m_med_nrw.Name", "EMetaHumanBodyType::m_med_nrw" },
		{ "m_med_ovw.Name", "EMetaHumanBodyType::m_med_ovw" },
		{ "m_med_unw.Name", "EMetaHumanBodyType::m_med_unw" },
		{ "m_srt_nrw.Name", "EMetaHumanBodyType::m_srt_nrw" },
		{ "m_srt_ovw.Name", "EMetaHumanBodyType::m_srt_ovw" },
		{ "m_srt_unw.Name", "EMetaHumanBodyType::m_srt_unw" },
		{ "m_tal_nrw.Name", "EMetaHumanBodyType::m_tal_nrw" },
		{ "m_tal_ovw.Name", "EMetaHumanBodyType::m_tal_ovw" },
		{ "m_tal_unw.Name", "EMetaHumanBodyType::m_tal_unw" },
		{ "ModuleRelativePath", "Public/MetaHumanBodyType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMetaHumanBodyType::f_med_nrw", (int64)EMetaHumanBodyType::f_med_nrw },
		{ "EMetaHumanBodyType::f_med_ovw", (int64)EMetaHumanBodyType::f_med_ovw },
		{ "EMetaHumanBodyType::f_med_unw", (int64)EMetaHumanBodyType::f_med_unw },
		{ "EMetaHumanBodyType::f_srt_nrw", (int64)EMetaHumanBodyType::f_srt_nrw },
		{ "EMetaHumanBodyType::f_srt_ovw", (int64)EMetaHumanBodyType::f_srt_ovw },
		{ "EMetaHumanBodyType::f_srt_unw", (int64)EMetaHumanBodyType::f_srt_unw },
		{ "EMetaHumanBodyType::f_tal_nrw", (int64)EMetaHumanBodyType::f_tal_nrw },
		{ "EMetaHumanBodyType::f_tal_ovw", (int64)EMetaHumanBodyType::f_tal_ovw },
		{ "EMetaHumanBodyType::f_tal_unw", (int64)EMetaHumanBodyType::f_tal_unw },
		{ "EMetaHumanBodyType::m_med_nrw", (int64)EMetaHumanBodyType::m_med_nrw },
		{ "EMetaHumanBodyType::m_med_ovw", (int64)EMetaHumanBodyType::m_med_ovw },
		{ "EMetaHumanBodyType::m_med_unw", (int64)EMetaHumanBodyType::m_med_unw },
		{ "EMetaHumanBodyType::m_srt_nrw", (int64)EMetaHumanBodyType::m_srt_nrw },
		{ "EMetaHumanBodyType::m_srt_ovw", (int64)EMetaHumanBodyType::m_srt_ovw },
		{ "EMetaHumanBodyType::m_srt_unw", (int64)EMetaHumanBodyType::m_srt_unw },
		{ "EMetaHumanBodyType::m_tal_nrw", (int64)EMetaHumanBodyType::m_tal_nrw },
		{ "EMetaHumanBodyType::m_tal_ovw", (int64)EMetaHumanBodyType::m_tal_ovw },
		{ "EMetaHumanBodyType::m_tal_unw", (int64)EMetaHumanBodyType::m_tal_unw },
		{ "EMetaHumanBodyType::Count", (int64)EMetaHumanBodyType::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MetaHumanSDKRuntime,
	nullptr,
	"EMetaHumanBodyType",
	"EMetaHumanBodyType",
	Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyType()
{
	if (!Z_Registration_Info_UEnum_EMetaHumanBodyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMetaHumanBodyType.InnerSingleton, Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMetaHumanBodyType.InnerSingleton;
}
// End Enum EMetaHumanBodyType

// Begin Enum EMetaHumanBodyBodyPartIndex
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMetaHumanBodyBodyPartIndex;
static UEnum* EMetaHumanBodyBodyPartIndex_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMetaHumanBodyBodyPartIndex.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMetaHumanBodyBodyPartIndex.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyBodyPartIndex, (UObject*)Z_Construct_UPackage__Script_MetaHumanSDKRuntime(), TEXT("EMetaHumanBodyBodyPartIndex"));
	}
	return Z_Registration_Info_UEnum_EMetaHumanBodyBodyPartIndex.OuterSingleton;
}
template<> METAHUMANSDKRUNTIME_API UEnum* StaticEnum<EMetaHumanBodyBodyPartIndex>()
{
	return EMetaHumanBodyBodyPartIndex_StaticEnum();
}
struct Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyBodyPartIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Body.Name", "EMetaHumanBodyBodyPartIndex::Body" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EMetaHumanBodyBodyPartIndex::Count" },
		{ "Face.Name", "EMetaHumanBodyBodyPartIndex::Face" },
		{ "Feet.Name", "EMetaHumanBodyBodyPartIndex::Feet" },
		{ "Legs.Name", "EMetaHumanBodyBodyPartIndex::Legs" },
		{ "ModuleRelativePath", "Public/MetaHumanBodyType.h" },
		{ "Torso.Name", "EMetaHumanBodyBodyPartIndex::Torso" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMetaHumanBodyBodyPartIndex::Body", (int64)EMetaHumanBodyBodyPartIndex::Body },
		{ "EMetaHumanBodyBodyPartIndex::Face", (int64)EMetaHumanBodyBodyPartIndex::Face },
		{ "EMetaHumanBodyBodyPartIndex::Torso", (int64)EMetaHumanBodyBodyPartIndex::Torso },
		{ "EMetaHumanBodyBodyPartIndex::Legs", (int64)EMetaHumanBodyBodyPartIndex::Legs },
		{ "EMetaHumanBodyBodyPartIndex::Feet", (int64)EMetaHumanBodyBodyPartIndex::Feet },
		{ "EMetaHumanBodyBodyPartIndex::Count", (int64)EMetaHumanBodyBodyPartIndex::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyBodyPartIndex_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MetaHumanSDKRuntime,
	nullptr,
	"EMetaHumanBodyBodyPartIndex",
	"EMetaHumanBodyBodyPartIndex",
	Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyBodyPartIndex_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyBodyPartIndex_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyBodyPartIndex_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyBodyPartIndex_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyBodyPartIndex()
{
	if (!Z_Registration_Info_UEnum_EMetaHumanBodyBodyPartIndex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMetaHumanBodyBodyPartIndex.InnerSingleton, Z_Construct_UEnum_MetaHumanSDKRuntime_EMetaHumanBodyBodyPartIndex_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMetaHumanBodyBodyPartIndex.InnerSingleton;
}
// End Enum EMetaHumanBodyBodyPartIndex

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanBodyType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMetaHumanBodyType_StaticEnum, TEXT("EMetaHumanBodyType"), &Z_Registration_Info_UEnum_EMetaHumanBodyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2910665538U) },
		{ EMetaHumanBodyBodyPartIndex_StaticEnum, TEXT("EMetaHumanBodyBodyPartIndex"), &Z_Registration_Info_UEnum_EMetaHumanBodyBodyPartIndex, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1890200977U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanBodyType_h_3731890830(TEXT("/Script/MetaHumanSDKRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanBodyType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanBodyType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
