// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDClasses/Public/USDAssetImportData.h"
#include "USDClasses/Public/USDAssetUserData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDAssetImportData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData();
UPackage* Z_Construct_UPackage__Script_USDClasses();
USDCLASSES_API UClass* Z_Construct_UClass_UUsdAnimSequenceAssetImportData();
USDCLASSES_API UClass* Z_Construct_UClass_UUsdAnimSequenceAssetImportData_NoRegister();
USDCLASSES_API UClass* Z_Construct_UClass_UUsdAssetImportData();
USDCLASSES_API UClass* Z_Construct_UClass_UUsdAssetImportData_NoRegister();
USDCLASSES_API UClass* Z_Construct_UClass_UUsdMeshAssetImportData();
USDCLASSES_API UClass* Z_Construct_UClass_UUsdMeshAssetImportData_NoRegister();
USDCLASSES_API UScriptStruct* Z_Construct_UScriptStruct_FUsdPrimPathList();
// End Cross Module References

// Begin Class UUsdAssetImportData
void UUsdAssetImportData::StaticRegisterNativesUUsdAssetImportData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdAssetImportData);
UClass* Z_Construct_UClass_UUsdAssetImportData_NoRegister()
{
	return UUsdAssetImportData::StaticClass();
}
struct Z_Construct_UClass_UUsdAssetImportData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "USDAssetImportData.h" },
		{ "ModuleRelativePath", "Public/USDAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/USDAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportOptions_MetaData[] = {
		{ "Comment", "// Likely a UUSDStageImportOptions, but we don't declare it here\n// to prevent an unnecessary module dependency on USDStageImporter\n" },
		{ "ModuleRelativePath", "Public/USDAssetImportData.h" },
		{ "ToolTip", "Likely a UUSDStageImportOptions, but we don't declare it here\nto prevent an unnecessary module dependency on USDStageImporter" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImportOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdAssetImportData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUsdAssetImportData_Statics::NewProp_PrimPath = { "PrimPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdAssetImportData, PrimPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimPath_MetaData), NewProp_PrimPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUsdAssetImportData_Statics::NewProp_ImportOptions = { "ImportOptions", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdAssetImportData, ImportOptions), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportOptions_MetaData), NewProp_ImportOptions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUsdAssetImportData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetImportData_Statics::NewProp_PrimPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetImportData_Statics::NewProp_ImportOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetImportData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUsdAssetImportData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetImportData,
	(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetImportData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdAssetImportData_Statics::ClassParams = {
	&UUsdAssetImportData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUsdAssetImportData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetImportData_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetImportData_Statics::Class_MetaDataParams), Z_Construct_UClass_UUsdAssetImportData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUsdAssetImportData()
{
	if (!Z_Registration_Info_UClass_UUsdAssetImportData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdAssetImportData.OuterSingleton, Z_Construct_UClass_UUsdAssetImportData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUsdAssetImportData.OuterSingleton;
}
template<> USDCLASSES_API UClass* StaticClass<UUsdAssetImportData>()
{
	return UUsdAssetImportData::StaticClass();
}
UUsdAssetImportData::UUsdAssetImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdAssetImportData);
UUsdAssetImportData::~UUsdAssetImportData() {}
// End Class UUsdAssetImportData

// Begin Class UUsdAnimSequenceAssetImportData
void UUsdAnimSequenceAssetImportData::StaticRegisterNativesUUsdAnimSequenceAssetImportData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdAnimSequenceAssetImportData);
UClass* Z_Construct_UClass_UUsdAnimSequenceAssetImportData_NoRegister()
{
	return UUsdAnimSequenceAssetImportData::StaticClass();
}
struct Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "USDAssetImportData.h" },
		{ "ModuleRelativePath", "Public/USDAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerStartOffsetSeconds_MetaData[] = {
		{ "Comment", "// Offset into the stage in seconds to when this AnimSequence should start\n// playing to match the skeletal animation in that stage. This is required\n// because UAnimSequences just range from the first skeletal timeSample to the\n// last, and the first sample is not necessarily the startTimeCode for the\n// stage. Note that this is wrt. the startTimeCode of the *layer*, and not the\n// composed stage. This is only used for animating USkeletalMeshComponents via\n// the AUsdStageActor, and it is in seconds since it will need to drive the\n// UAnimSequence with a time value in the [0, LenghtSeconds] range. This\n// should be applied *after* any offset/scale conversions on the time\n// coordinate.\n" },
		{ "ModuleRelativePath", "Public/USDAssetImportData.h" },
		{ "ToolTip", "Offset into the stage in seconds to when this AnimSequence should start\nplaying to match the skeletal animation in that stage. This is required\nbecause UAnimSequences just range from the first skeletal timeSample to the\nlast, and the first sample is not necessarily the startTimeCode for the\nstage. Note that this is wrt. the startTimeCode of the *layer*, and not the\ncomposed stage. This is only used for animating USkeletalMeshComponents via\nthe AUsdStageActor, and it is in seconds since it will need to drive the\nUAnimSequence with a time value in the [0, LenghtSeconds] range. This\nshould be applied *after* any offset/scale conversions on the time\ncoordinate." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LayerStartOffsetSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdAnimSequenceAssetImportData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics::NewProp_LayerStartOffsetSeconds = { "LayerStartOffsetSeconds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdAnimSequenceAssetImportData, LayerStartOffsetSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerStartOffsetSeconds_MetaData), NewProp_LayerStartOffsetSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics::NewProp_LayerStartOffsetSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUsdAssetImportData,
	(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics::ClassParams = {
	&UUsdAnimSequenceAssetImportData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics::Class_MetaDataParams), Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUsdAnimSequenceAssetImportData()
{
	if (!Z_Registration_Info_UClass_UUsdAnimSequenceAssetImportData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdAnimSequenceAssetImportData.OuterSingleton, Z_Construct_UClass_UUsdAnimSequenceAssetImportData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUsdAnimSequenceAssetImportData.OuterSingleton;
}
template<> USDCLASSES_API UClass* StaticClass<UUsdAnimSequenceAssetImportData>()
{
	return UUsdAnimSequenceAssetImportData::StaticClass();
}
UUsdAnimSequenceAssetImportData::UUsdAnimSequenceAssetImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdAnimSequenceAssetImportData);
UUsdAnimSequenceAssetImportData::~UUsdAnimSequenceAssetImportData() {}
// End Class UUsdAnimSequenceAssetImportData

// Begin Class UUsdMeshAssetImportData
void UUsdMeshAssetImportData::StaticRegisterNativesUUsdMeshAssetImportData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdMeshAssetImportData);
UClass* Z_Construct_UClass_UUsdMeshAssetImportData_NoRegister()
{
	return UUsdMeshAssetImportData::StaticClass();
}
struct Z_Construct_UClass_UUsdMeshAssetImportData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** We assign these to UStaticMeshes or USkeletalMeshes generated from USD */" },
		{ "IncludePath", "USDAssetImportData.h" },
		{ "ModuleRelativePath", "Public/USDAssetImportData.h" },
		{ "ToolTip", "We assign these to UStaticMeshes or USkeletalMeshes generated from USD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotToPrimPaths_MetaData[] = {
		{ "Comment", "/**\n\x09 * Maps from a material slot index of an UStaticMesh or USkeletalMesh to a\n\x09 * list of source prims that contain this assignment. It can contain multiple\n\x09 * prims in case we combine material slots and/or collapse prims (e.g. {0:\n\x09 * ['/Root/mesh', '/Root/othermesh/geomsubset0',\n\x09 * '/Root/othermesh/geomsubset1'] }).\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetImportData.h" },
		{ "ToolTip", "Maps from a material slot index of an UStaticMesh or USkeletalMesh to a\nlist of source prims that contain this assignment. It can contain multiple\nprims in case we combine material slots and/or collapse prims (e.g. {0:\n['/Root/mesh', '/Root/othermesh/geomsubset0',\n'/Root/othermesh/geomsubset1'] })." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialSlotToPrimPaths_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialSlotToPrimPaths_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialSlotToPrimPaths;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdMeshAssetImportData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdMeshAssetImportData_Statics::NewProp_MaterialSlotToPrimPaths_ValueProp = { "MaterialSlotToPrimPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FUsdPrimPathList, METADATA_PARAMS(0, nullptr) }; // 2983496673
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUsdMeshAssetImportData_Statics::NewProp_MaterialSlotToPrimPaths_Key_KeyProp = { "MaterialSlotToPrimPaths_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUsdMeshAssetImportData_Statics::NewProp_MaterialSlotToPrimPaths = { "MaterialSlotToPrimPaths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdMeshAssetImportData, MaterialSlotToPrimPaths), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSlotToPrimPaths_MetaData), NewProp_MaterialSlotToPrimPaths_MetaData) }; // 2983496673
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUsdMeshAssetImportData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdMeshAssetImportData_Statics::NewProp_MaterialSlotToPrimPaths_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdMeshAssetImportData_Statics::NewProp_MaterialSlotToPrimPaths_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdMeshAssetImportData_Statics::NewProp_MaterialSlotToPrimPaths,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdMeshAssetImportData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUsdMeshAssetImportData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUsdAssetImportData,
	(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdMeshAssetImportData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdMeshAssetImportData_Statics::ClassParams = {
	&UUsdMeshAssetImportData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUsdMeshAssetImportData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUsdMeshAssetImportData_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdMeshAssetImportData_Statics::Class_MetaDataParams), Z_Construct_UClass_UUsdMeshAssetImportData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUsdMeshAssetImportData()
{
	if (!Z_Registration_Info_UClass_UUsdMeshAssetImportData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdMeshAssetImportData.OuterSingleton, Z_Construct_UClass_UUsdMeshAssetImportData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUsdMeshAssetImportData.OuterSingleton;
}
template<> USDCLASSES_API UClass* StaticClass<UUsdMeshAssetImportData>()
{
	return UUsdMeshAssetImportData::StaticClass();
}
UUsdMeshAssetImportData::UUsdMeshAssetImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdMeshAssetImportData);
UUsdMeshAssetImportData::~UUsdMeshAssetImportData() {}
// End Class UUsdMeshAssetImportData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetImportData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUsdAssetImportData, UUsdAssetImportData::StaticClass, TEXT("UUsdAssetImportData"), &Z_Registration_Info_UClass_UUsdAssetImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdAssetImportData), 3073908419U) },
		{ Z_Construct_UClass_UUsdAnimSequenceAssetImportData, UUsdAnimSequenceAssetImportData::StaticClass, TEXT("UUsdAnimSequenceAssetImportData"), &Z_Registration_Info_UClass_UUsdAnimSequenceAssetImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdAnimSequenceAssetImportData), 1370073766U) },
		{ Z_Construct_UClass_UUsdMeshAssetImportData, UUsdMeshAssetImportData::StaticClass, TEXT("UUsdMeshAssetImportData"), &Z_Registration_Info_UClass_UUsdMeshAssetImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdMeshAssetImportData), 1504141238U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetImportData_h_1104227567(TEXT("/Script/USDClasses"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetImportData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetImportData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
