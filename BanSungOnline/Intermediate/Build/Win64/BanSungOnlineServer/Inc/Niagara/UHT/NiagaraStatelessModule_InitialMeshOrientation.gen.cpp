// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/Modules/NiagaraStatelessModule_InitialMeshOrientation.h"
#include "Niagara/Internal/Stateless/NiagaraStatelessDistribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_InitialMeshOrientation() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENSMInitialMeshOrientationMode();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENSMInitialMeshOrientationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENSMInitialMeshOrientationMode;
static UEnum* ENSMInitialMeshOrientationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENSMInitialMeshOrientationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENSMInitialMeshOrientationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENSMInitialMeshOrientationMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENSMInitialMeshOrientationMode"));
	}
	return Z_Registration_Info_UEnum_ENSMInitialMeshOrientationMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENSMInitialMeshOrientationMode>()
{
	return ENSMInitialMeshOrientationMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENSMInitialMeshOrientationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_InitialMeshOrientation.h" },
		{ "None.Name", "ENSMInitialMeshOrientationMode::None" },
		{ "OrientToAxis.Comment", "//System,\n" },
		{ "OrientToAxis.Name", "ENSMInitialMeshOrientationMode::OrientToAxis" },
		{ "OrientToAxis.ToolTip", "System," },
		{ "Random.Name", "ENSMInitialMeshOrientationMode::Random" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENSMInitialMeshOrientationMode::None", (int64)ENSMInitialMeshOrientationMode::None },
		{ "ENSMInitialMeshOrientationMode::Random", (int64)ENSMInitialMeshOrientationMode::Random },
		{ "ENSMInitialMeshOrientationMode::OrientToAxis", (int64)ENSMInitialMeshOrientationMode::OrientToAxis },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENSMInitialMeshOrientationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENSMInitialMeshOrientationMode",
	"ENSMInitialMeshOrientationMode",
	Z_Construct_UEnum_Niagara_ENSMInitialMeshOrientationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENSMInitialMeshOrientationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENSMInitialMeshOrientationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENSMInitialMeshOrientationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENSMInitialMeshOrientationMode()
{
	if (!Z_Registration_Info_UEnum_ENSMInitialMeshOrientationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENSMInitialMeshOrientationMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENSMInitialMeshOrientationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENSMInitialMeshOrientationMode.InnerSingleton;
}
// End Enum ENSMInitialMeshOrientationMode

// Begin Class UNiagaraStatelessModule_InitialMeshOrientation
void UNiagaraStatelessModule_InitialMeshOrientation::StaticRegisterNativesUNiagaraStatelessModule_InitialMeshOrientation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessModule_InitialMeshOrientation);
UClass* Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_NoRegister()
{
	return UNiagaraStatelessModule_InitialMeshOrientation::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Set the initial mesh orientation, directly, randomly or by orienting by axis\n" },
		{ "DisplayName", "Initial Mesh Orientation" },
		{ "IncludePath", "Stateless/Modules/NiagaraStatelessModule_InitialMeshOrientation.h" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_InitialMeshOrientation.h" },
		{ "ToolTip", "Set the initial mesh orientation, directly, randomly or by orienting by axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshOrientationMode_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_InitialMeshOrientation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrientationVector_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "// Establish an initial orientation around which to yaw, pitch, or roll. Can be overriden with any vector, for instance the normalized velocity vector, to accomplish more elaborate behavior.\n" },
		{ "DisableRangeDistribution", "" },
		{ "DisableUniformDistribution", "" },
		{ "EditCondition", "MeshOrientationMode == ENSMInitialMeshOrientationMode::OrientToAxis" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_InitialMeshOrientation.h" },
		{ "ToolTip", "Establish an initial orientation around which to yaw, pitch, or roll. Can be overriden with any vector, for instance the normalized velocity vector, to accomplish more elaborate behavior." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshAxisToOrient_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "// This represents the Axis on which the model was first imported from your DCC package.\n// This vector is then rotated in the direction of the Orientation Vector input.\n// If your mesh was imported on a different axis than X forward, you can change it here.\n" },
		{ "DisableRangeDistribution", "" },
		{ "DisableUniformDistribution", "" },
		{ "EditCondition", "MeshOrientationMode == ENSMInitialMeshOrientationMode::OrientToAxis" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_InitialMeshOrientation.h" },
		{ "ToolTip", "This represents the Axis on which the model was first imported from your DCC package.\nThis vector is then rotated in the direction of the Orientation Vector input.\nIf your mesh was imported on a different axis than X forward, you can change it here." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "// Rotation in Degrees, this is applied after any other orientation is calculated and in the space of that orientation\n" },
		{ "DisableUniformDistribution", "" },
		{ "EditCondition", "MeshOrientationMode != ENSMInitialMeshOrientationMode::Random" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_InitialMeshOrientation.h" },
		{ "ToolTip", "Rotation in Degrees, this is applied after any other orientation is calculated and in the space of that orientation" },
		{ "Units", "deg" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomRotationRange_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_InitialMeshOrientation.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MeshOrientationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshOrientationMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrientationVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshAxisToOrient;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomRotationRange;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessModule_InitialMeshOrientation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_Statics::NewProp_MeshOrientationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_Statics::NewProp_MeshOrientationMode = { "MeshOrientationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_InitialMeshOrientation, MeshOrientationMode), Z_Construct_UEnum_Niagara_ENSMInitialMeshOrientationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshOrientationMode_MetaData), NewProp_MeshOrientationMode_MetaData) }; // 1324906301
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_Statics::NewProp_OrientationVector = { "OrientationVector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_InitialMeshOrientation, OrientationVector), Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrientationVector_MetaData), NewProp_OrientationVector_MetaData) }; // 196473061
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_Statics::NewProp_MeshAxisToOrient = { "MeshAxisToOrient", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_InitialMeshOrientation, MeshAxisToOrient), Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshAxisToOrient_MetaData), NewProp_MeshAxisToOrient_MetaData) }; // 196473061
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_InitialMeshOrientation, Rotation), Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) }; // 196473061
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_Statics::NewProp_RandomRotationRange = { "RandomRotationRange", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_InitialMeshOrientation, RandomRotationRange_DEPRECATED), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomRotationRange_MetaData), NewProp_RandomRotationRange_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_Statics::NewProp_MeshOrientationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_Statics::NewProp_MeshOrientationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_Statics::NewProp_OrientationVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_Statics::NewProp_MeshAxisToOrient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_Statics::NewProp_Rotation,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_Statics::NewProp_RandomRotationRange,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraStatelessModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_Statics::ClassParams = {
	&UNiagaraStatelessModule_InitialMeshOrientation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessModule_InitialMeshOrientation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessModule_InitialMeshOrientation.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessModule_InitialMeshOrientation.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessModule_InitialMeshOrientation>()
{
	return UNiagaraStatelessModule_InitialMeshOrientation::StaticClass();
}
UNiagaraStatelessModule_InitialMeshOrientation::UNiagaraStatelessModule_InitialMeshOrientation() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessModule_InitialMeshOrientation);
UNiagaraStatelessModule_InitialMeshOrientation::~UNiagaraStatelessModule_InitialMeshOrientation() {}
// End Class UNiagaraStatelessModule_InitialMeshOrientation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_InitialMeshOrientation_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENSMInitialMeshOrientationMode_StaticEnum, TEXT("ENSMInitialMeshOrientationMode"), &Z_Registration_Info_UEnum_ENSMInitialMeshOrientationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1324906301U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation, UNiagaraStatelessModule_InitialMeshOrientation::StaticClass, TEXT("UNiagaraStatelessModule_InitialMeshOrientation"), &Z_Registration_Info_UClass_UNiagaraStatelessModule_InitialMeshOrientation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessModule_InitialMeshOrientation), 368572056U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_InitialMeshOrientation_h_1021262784(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_InitialMeshOrientation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_InitialMeshOrientation_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_InitialMeshOrientation_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_InitialMeshOrientation_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
