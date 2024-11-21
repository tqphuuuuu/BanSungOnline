// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealUSDWrapper/Public/UnrealUSDWrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealUSDWrapper() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
UNREALUSDWRAPPER_API UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EGeometryCacheImport();
UNREALUSDWRAPPER_API UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdDefaultKind();
UNREALUSDWRAPPER_API UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdInitialLoadSet();
UNREALUSDWRAPPER_API UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdInterpolationType();
UNREALUSDWRAPPER_API UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdListPosition();
UNREALUSDWRAPPER_API UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdLoadPolicy();
UNREALUSDWRAPPER_API UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdPurpose();
UNREALUSDWRAPPER_API UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdRootMotionHandling();
UNREALUSDWRAPPER_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix2D();
UNREALUSDWRAPPER_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix3D();
UPackage* Z_Construct_UPackage__Script_UnrealUSDWrapper();
// End Cross Module References

// Begin Enum EUsdPurpose
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUsdPurpose;
static UEnum* EUsdPurpose_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUsdPurpose.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUsdPurpose.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealUSDWrapper_EUsdPurpose, (UObject*)Z_Construct_UPackage__Script_UnrealUSDWrapper(), TEXT("EUsdPurpose"));
	}
	return Z_Registration_Info_UEnum_EUsdPurpose.OuterSingleton;
}
template<> UNREALUSDWRAPPER_API UEnum* StaticEnum<EUsdPurpose>()
{
	return EUsdPurpose_StaticEnum();
}
struct Z_Construct_UEnum_UnrealUSDWrapper_EUsdPurpose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "Default.Hidden", "" },
		{ "Default.Name", "EUsdPurpose::Default" },
		{ "Guide.Name", "EUsdPurpose::Guide" },
		{ "ModuleRelativePath", "Public/UnrealUSDWrapper.h" },
		{ "Proxy.Name", "EUsdPurpose::Proxy" },
		{ "Render.Name", "EUsdPurpose::Render" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUsdPurpose::Default", (int64)EUsdPurpose::Default },
		{ "EUsdPurpose::Proxy", (int64)EUsdPurpose::Proxy },
		{ "EUsdPurpose::Render", (int64)EUsdPurpose::Render },
		{ "EUsdPurpose::Guide", (int64)EUsdPurpose::Guide },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealUSDWrapper_EUsdPurpose_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UnrealUSDWrapper,
	nullptr,
	"EUsdPurpose",
	"EUsdPurpose",
	Z_Construct_UEnum_UnrealUSDWrapper_EUsdPurpose_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdPurpose_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdPurpose_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UnrealUSDWrapper_EUsdPurpose_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdPurpose()
{
	if (!Z_Registration_Info_UEnum_EUsdPurpose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUsdPurpose.InnerSingleton, Z_Construct_UEnum_UnrealUSDWrapper_EUsdPurpose_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUsdPurpose.InnerSingleton;
}
// End Enum EUsdPurpose

// Begin Enum EUsdDefaultKind
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUsdDefaultKind;
static UEnum* EUsdDefaultKind_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUsdDefaultKind.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUsdDefaultKind.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealUSDWrapper_EUsdDefaultKind, (UObject*)Z_Construct_UPackage__Script_UnrealUSDWrapper(), TEXT("EUsdDefaultKind"));
	}
	return Z_Registration_Info_UEnum_EUsdDefaultKind.OuterSingleton;
}
template<> UNREALUSDWRAPPER_API UEnum* StaticEnum<EUsdDefaultKind>()
{
	return EUsdDefaultKind_StaticEnum();
}
struct Z_Construct_UEnum_UnrealUSDWrapper_EUsdDefaultKind_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Assembly.Name", "EUsdDefaultKind::Assembly" },
		{ "Bitflags", "" },
		{ "Component.Name", "EUsdDefaultKind::Component" },
		{ "Group.Name", "EUsdDefaultKind::Group" },
		{ "Model.Name", "EUsdDefaultKind::Model" },
		{ "ModuleRelativePath", "Public/UnrealUSDWrapper.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EUsdDefaultKind::None" },
		{ "Subcomponent.Name", "EUsdDefaultKind::Subcomponent" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUsdDefaultKind::None", (int64)EUsdDefaultKind::None },
		{ "EUsdDefaultKind::Model", (int64)EUsdDefaultKind::Model },
		{ "EUsdDefaultKind::Component", (int64)EUsdDefaultKind::Component },
		{ "EUsdDefaultKind::Group", (int64)EUsdDefaultKind::Group },
		{ "EUsdDefaultKind::Assembly", (int64)EUsdDefaultKind::Assembly },
		{ "EUsdDefaultKind::Subcomponent", (int64)EUsdDefaultKind::Subcomponent },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealUSDWrapper_EUsdDefaultKind_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UnrealUSDWrapper,
	nullptr,
	"EUsdDefaultKind",
	"EUsdDefaultKind",
	Z_Construct_UEnum_UnrealUSDWrapper_EUsdDefaultKind_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdDefaultKind_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdDefaultKind_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UnrealUSDWrapper_EUsdDefaultKind_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdDefaultKind()
{
	if (!Z_Registration_Info_UEnum_EUsdDefaultKind.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUsdDefaultKind.InnerSingleton, Z_Construct_UEnum_UnrealUSDWrapper_EUsdDefaultKind_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUsdDefaultKind.InnerSingleton;
}
// End Enum EUsdDefaultKind

// Begin Enum EUsdLoadPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUsdLoadPolicy;
static UEnum* EUsdLoadPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUsdLoadPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUsdLoadPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealUSDWrapper_EUsdLoadPolicy, (UObject*)Z_Construct_UPackage__Script_UnrealUSDWrapper(), TEXT("EUsdLoadPolicy"));
	}
	return Z_Registration_Info_UEnum_EUsdLoadPolicy.OuterSingleton;
}
template<> UNREALUSDWRAPPER_API UEnum* StaticEnum<EUsdLoadPolicy>()
{
	return EUsdLoadPolicy_StaticEnum();
}
struct Z_Construct_UEnum_UnrealUSDWrapper_EUsdLoadPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Corresponds to pxr::UsdLoadPolicy, refer to the USD SDK documentation */" },
		{ "ModuleRelativePath", "Public/UnrealUSDWrapper.h" },
		{ "ToolTip", "Corresponds to pxr::UsdLoadPolicy, refer to the USD SDK documentation" },
		{ "UsdLoadWithDescendants.Name", "EUsdLoadPolicy::UsdLoadWithDescendants" },
		{ "UsdLoadWithoutDescendants.Comment", "// Load a prim plus all its descendants.\n" },
		{ "UsdLoadWithoutDescendants.Name", "EUsdLoadPolicy::UsdLoadWithoutDescendants" },
		{ "UsdLoadWithoutDescendants.ToolTip", "Load a prim plus all its descendants." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUsdLoadPolicy::UsdLoadWithDescendants", (int64)EUsdLoadPolicy::UsdLoadWithDescendants },
		{ "EUsdLoadPolicy::UsdLoadWithoutDescendants", (int64)EUsdLoadPolicy::UsdLoadWithoutDescendants },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealUSDWrapper_EUsdLoadPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UnrealUSDWrapper,
	nullptr,
	"EUsdLoadPolicy",
	"EUsdLoadPolicy",
	Z_Construct_UEnum_UnrealUSDWrapper_EUsdLoadPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdLoadPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdLoadPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UnrealUSDWrapper_EUsdLoadPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdLoadPolicy()
{
	if (!Z_Registration_Info_UEnum_EUsdLoadPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUsdLoadPolicy.InnerSingleton, Z_Construct_UEnum_UnrealUSDWrapper_EUsdLoadPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUsdLoadPolicy.InnerSingleton;
}
// End Enum EUsdLoadPolicy

// Begin Enum EUsdInitialLoadSet
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUsdInitialLoadSet;
static UEnum* EUsdInitialLoadSet_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUsdInitialLoadSet.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUsdInitialLoadSet.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealUSDWrapper_EUsdInitialLoadSet, (UObject*)Z_Construct_UPackage__Script_UnrealUSDWrapper(), TEXT("EUsdInitialLoadSet"));
	}
	return Z_Registration_Info_UEnum_EUsdInitialLoadSet.OuterSingleton;
}
template<> UNREALUSDWRAPPER_API UEnum* StaticEnum<EUsdInitialLoadSet>()
{
	return EUsdInitialLoadSet_StaticEnum();
}
struct Z_Construct_UEnum_UnrealUSDWrapper_EUsdInitialLoadSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "LoadAll.Name", "EUsdInitialLoadSet::LoadAll" },
		{ "LoadNone.Name", "EUsdInitialLoadSet::LoadNone" },
		{ "ModuleRelativePath", "Public/UnrealUSDWrapper.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUsdInitialLoadSet::LoadAll", (int64)EUsdInitialLoadSet::LoadAll },
		{ "EUsdInitialLoadSet::LoadNone", (int64)EUsdInitialLoadSet::LoadNone },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealUSDWrapper_EUsdInitialLoadSet_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UnrealUSDWrapper,
	nullptr,
	"EUsdInitialLoadSet",
	"EUsdInitialLoadSet",
	Z_Construct_UEnum_UnrealUSDWrapper_EUsdInitialLoadSet_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdInitialLoadSet_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdInitialLoadSet_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UnrealUSDWrapper_EUsdInitialLoadSet_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdInitialLoadSet()
{
	if (!Z_Registration_Info_UEnum_EUsdInitialLoadSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUsdInitialLoadSet.InnerSingleton, Z_Construct_UEnum_UnrealUSDWrapper_EUsdInitialLoadSet_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUsdInitialLoadSet.InnerSingleton;
}
// End Enum EUsdInitialLoadSet

// Begin Enum EUsdInterpolationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUsdInterpolationType;
static UEnum* EUsdInterpolationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUsdInterpolationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUsdInterpolationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealUSDWrapper_EUsdInterpolationType, (UObject*)Z_Construct_UPackage__Script_UnrealUSDWrapper(), TEXT("EUsdInterpolationType"));
	}
	return Z_Registration_Info_UEnum_EUsdInterpolationType.OuterSingleton;
}
template<> UNREALUSDWRAPPER_API UEnum* StaticEnum<EUsdInterpolationType>()
{
	return EUsdInterpolationType_StaticEnum();
}
struct Z_Construct_UEnum_UnrealUSDWrapper_EUsdInterpolationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Held.Name", "EUsdInterpolationType::Held" },
		{ "Linear.Name", "EUsdInterpolationType::Linear" },
		{ "ModuleRelativePath", "Public/UnrealUSDWrapper.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUsdInterpolationType::Held", (int64)EUsdInterpolationType::Held },
		{ "EUsdInterpolationType::Linear", (int64)EUsdInterpolationType::Linear },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealUSDWrapper_EUsdInterpolationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UnrealUSDWrapper,
	nullptr,
	"EUsdInterpolationType",
	"EUsdInterpolationType",
	Z_Construct_UEnum_UnrealUSDWrapper_EUsdInterpolationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdInterpolationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdInterpolationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UnrealUSDWrapper_EUsdInterpolationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdInterpolationType()
{
	if (!Z_Registration_Info_UEnum_EUsdInterpolationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUsdInterpolationType.InnerSingleton, Z_Construct_UEnum_UnrealUSDWrapper_EUsdInterpolationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUsdInterpolationType.InnerSingleton;
}
// End Enum EUsdInterpolationType

// Begin Enum EUsdRootMotionHandling
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUsdRootMotionHandling;
static UEnum* EUsdRootMotionHandling_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUsdRootMotionHandling.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUsdRootMotionHandling.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealUSDWrapper_EUsdRootMotionHandling, (UObject*)Z_Construct_UPackage__Script_UnrealUSDWrapper(), TEXT("EUsdRootMotionHandling"));
	}
	return Z_Registration_Info_UEnum_EUsdRootMotionHandling.OuterSingleton;
}
template<> UNREALUSDWRAPPER_API UEnum* StaticEnum<EUsdRootMotionHandling>()
{
	return EUsdRootMotionHandling_StaticEnum();
}
struct Z_Construct_UEnum_UnrealUSDWrapper_EUsdRootMotionHandling_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealUSDWrapper.h" },
		{ "NoAdditionalRootMotion.Comment", "// Use for the root bone just its regular joint animation as described on the SkelAnimation prim.\n" },
		{ "NoAdditionalRootMotion.Name", "EUsdRootMotionHandling::NoAdditionalRootMotion" },
		{ "NoAdditionalRootMotion.ToolTip", "Use for the root bone just its regular joint animation as described on the SkelAnimation prim." },
		{ "UseMotionFromSkeleton.Comment", "// Use the transform animation from the Skeleton prim in addition to the root bone joint animation as\n// described on the SkelAnimation prim.\n" },
		{ "UseMotionFromSkeleton.Name", "EUsdRootMotionHandling::UseMotionFromSkeleton" },
		{ "UseMotionFromSkeleton.ToolTip", "Use the transform animation from the Skeleton prim in addition to the root bone joint animation as\ndescribed on the SkelAnimation prim." },
		{ "UseMotionFromSkelRoot.Comment", "// Use the transform animation from the SkelRoot prim in addition to the root bone joint animation as\n// described on the SkelAnimation prim. Note that the SkelRoot prim's Sequencer transform track will no longer\n// contain the transform animation data used in this manner, so as to not apply the animation twice.\n" },
		{ "UseMotionFromSkelRoot.Name", "EUsdRootMotionHandling::UseMotionFromSkelRoot" },
		{ "UseMotionFromSkelRoot.ToolTip", "Use the transform animation from the SkelRoot prim in addition to the root bone joint animation as\ndescribed on the SkelAnimation prim. Note that the SkelRoot prim's Sequencer transform track will no longer\ncontain the transform animation data used in this manner, so as to not apply the animation twice." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUsdRootMotionHandling::NoAdditionalRootMotion", (int64)EUsdRootMotionHandling::NoAdditionalRootMotion },
		{ "EUsdRootMotionHandling::UseMotionFromSkelRoot", (int64)EUsdRootMotionHandling::UseMotionFromSkelRoot },
		{ "EUsdRootMotionHandling::UseMotionFromSkeleton", (int64)EUsdRootMotionHandling::UseMotionFromSkeleton },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealUSDWrapper_EUsdRootMotionHandling_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UnrealUSDWrapper,
	nullptr,
	"EUsdRootMotionHandling",
	"EUsdRootMotionHandling",
	Z_Construct_UEnum_UnrealUSDWrapper_EUsdRootMotionHandling_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdRootMotionHandling_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdRootMotionHandling_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UnrealUSDWrapper_EUsdRootMotionHandling_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdRootMotionHandling()
{
	if (!Z_Registration_Info_UEnum_EUsdRootMotionHandling.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUsdRootMotionHandling.InnerSingleton, Z_Construct_UEnum_UnrealUSDWrapper_EUsdRootMotionHandling_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUsdRootMotionHandling.InnerSingleton;
}
// End Enum EUsdRootMotionHandling

// Begin Enum EGeometryCacheImport
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryCacheImport;
static UEnum* EGeometryCacheImport_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGeometryCacheImport.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGeometryCacheImport.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealUSDWrapper_EGeometryCacheImport, (UObject*)Z_Construct_UPackage__Script_UnrealUSDWrapper(), TEXT("EGeometryCacheImport"));
	}
	return Z_Registration_Info_UEnum_EGeometryCacheImport.OuterSingleton;
}
template<> UNREALUSDWRAPPER_API UEnum* StaticEnum<EGeometryCacheImport>()
{
	return EGeometryCacheImport_StaticEnum();
}
struct Z_Construct_UEnum_UnrealUSDWrapper_EGeometryCacheImport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Stage option on how to handle geometry caches in stage workflow */" },
		{ "ModuleRelativePath", "Public/UnrealUSDWrapper.h" },
		{ "Never.Comment", "// Never imported (no persistent assets); always streamed from the USD stage\n" },
		{ "Never.Name", "EGeometryCacheImport::Never" },
		{ "Never.ToolTip", "Never imported (no persistent assets); always streamed from the USD stage" },
		{ "OnLoad.Comment", "// Imported on stage load; played back from the persistent assets\n" },
		{ "OnLoad.Name", "EGeometryCacheImport::OnLoad" },
		{ "OnLoad.ToolTip", "Imported on stage load; played back from the persistent assets" },
		{ "OnSave.Comment", "// Imported on save; geometry caches are streamed from the stage until they are saved.\n// Afterwards they are played back from the persistent assets\n" },
		{ "OnSave.Name", "EGeometryCacheImport::OnSave" },
		{ "OnSave.ToolTip", "Imported on save; geometry caches are streamed from the stage until they are saved.\nAfterwards they are played back from the persistent assets" },
		{ "ToolTip", "Stage option on how to handle geometry caches in stage workflow" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGeometryCacheImport::Never", (int64)EGeometryCacheImport::Never },
		{ "EGeometryCacheImport::OnLoad", (int64)EGeometryCacheImport::OnLoad },
		{ "EGeometryCacheImport::OnSave", (int64)EGeometryCacheImport::OnSave },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealUSDWrapper_EGeometryCacheImport_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UnrealUSDWrapper,
	nullptr,
	"EGeometryCacheImport",
	"EGeometryCacheImport",
	Z_Construct_UEnum_UnrealUSDWrapper_EGeometryCacheImport_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EGeometryCacheImport_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EGeometryCacheImport_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UnrealUSDWrapper_EGeometryCacheImport_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EGeometryCacheImport()
{
	if (!Z_Registration_Info_UEnum_EGeometryCacheImport.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryCacheImport.InnerSingleton, Z_Construct_UEnum_UnrealUSDWrapper_EGeometryCacheImport_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGeometryCacheImport.InnerSingleton;
}
// End Enum EGeometryCacheImport

// Begin Enum EUsdListPosition
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUsdListPosition;
static UEnum* EUsdListPosition_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUsdListPosition.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUsdListPosition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealUSDWrapper_EUsdListPosition, (UObject*)Z_Construct_UPackage__Script_UnrealUSDWrapper(), TEXT("EUsdListPosition"));
	}
	return Z_Registration_Info_UEnum_EUsdListPosition.OuterSingleton;
}
template<> UNREALUSDWRAPPER_API UEnum* StaticEnum<EUsdListPosition>()
{
	return EUsdListPosition_StaticEnum();
}
struct Z_Construct_UEnum_UnrealUSDWrapper_EUsdListPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BackOfAppendList.Comment", "// The position at the back of the append list.\n// An item added at this position will, after composition is applied,\n// be weaker than other items appended in this layer, but stronger\n// than items added by weaker layers.\n" },
		{ "BackOfAppendList.Name", "EUsdListPosition::BackOfAppendList" },
		{ "BackOfAppendList.ToolTip", "The position at the back of the append list.\nAn item added at this position will, after composition is applied,\nbe weaker than other items appended in this layer, but stronger\nthan items added by weaker layers." },
		{ "BackOfPrependList.Comment", "// The position at the back of the prepend list.\n// An item added at this position will, after composition is applied,\n// be weaker than other items prepended in this layer, but stronger\n// than items added by weaker layers.\n" },
		{ "BackOfPrependList.Name", "EUsdListPosition::BackOfPrependList" },
		{ "BackOfPrependList.ToolTip", "The position at the back of the prepend list.\nAn item added at this position will, after composition is applied,\nbe weaker than other items prepended in this layer, but stronger\nthan items added by weaker layers." },
		{ "Comment", "/** Corresponds to pxr::UsdListPosition, refer to the USD SDK documentation */" },
		{ "FrontOfAppendList.Comment", "// The position at the front of the append list.\n// An item added at this position will, after composition is applied,\n// be stronger than other items appended in this layer, and stronger\n// than items added by weaker layers.\n" },
		{ "FrontOfAppendList.Name", "EUsdListPosition::FrontOfAppendList" },
		{ "FrontOfAppendList.ToolTip", "The position at the front of the append list.\nAn item added at this position will, after composition is applied,\nbe stronger than other items appended in this layer, and stronger\nthan items added by weaker layers." },
		{ "FrontOfPrependList.Comment", "// The position at the front of the prepend list.\n// An item added at this position will, after composition is applied,\n// be stronger than other items prepended in this layer, and stronger\n// than items added by weaker layers.\n" },
		{ "FrontOfPrependList.Name", "EUsdListPosition::FrontOfPrependList" },
		{ "FrontOfPrependList.ToolTip", "The position at the front of the prepend list.\nAn item added at this position will, after composition is applied,\nbe stronger than other items prepended in this layer, and stronger\nthan items added by weaker layers." },
		{ "ModuleRelativePath", "Public/UnrealUSDWrapper.h" },
		{ "ToolTip", "Corresponds to pxr::UsdListPosition, refer to the USD SDK documentation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUsdListPosition::FrontOfPrependList", (int64)EUsdListPosition::FrontOfPrependList },
		{ "EUsdListPosition::BackOfPrependList", (int64)EUsdListPosition::BackOfPrependList },
		{ "EUsdListPosition::FrontOfAppendList", (int64)EUsdListPosition::FrontOfAppendList },
		{ "EUsdListPosition::BackOfAppendList", (int64)EUsdListPosition::BackOfAppendList },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealUSDWrapper_EUsdListPosition_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UnrealUSDWrapper,
	nullptr,
	"EUsdListPosition",
	"EUsdListPosition",
	Z_Construct_UEnum_UnrealUSDWrapper_EUsdListPosition_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdListPosition_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdListPosition_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UnrealUSDWrapper_EUsdListPosition_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdListPosition()
{
	if (!Z_Registration_Info_UEnum_EUsdListPosition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUsdListPosition.InnerSingleton, Z_Construct_UEnum_UnrealUSDWrapper_EUsdListPosition_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUsdListPosition.InnerSingleton;
}
// End Enum EUsdListPosition

// Begin ScriptStruct FMatrix2D
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Matrix2D;
class UScriptStruct* FMatrix2D::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Matrix2D.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Matrix2D.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatrix2D, (UObject*)Z_Construct_UPackage__Script_UnrealUSDWrapper(), TEXT("Matrix2D"));
	}
	return Z_Registration_Info_UScriptStruct_Matrix2D.OuterSingleton;
}
template<> UNREALUSDWRAPPER_API UScriptStruct* StaticStruct<FMatrix2D>()
{
	return FMatrix2D::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMatrix2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Corresponds to pxr::GfMatrix2d. We don't expose any methods though, this is just to facilitate reading/writing\n * these types from USD.\n */" },
		{ "ModuleRelativePath", "Public/UnrealUSDWrapper.h" },
		{ "ToolTip", "Corresponds to pxr::GfMatrix2d. We don't expose any methods though, this is just to facilitate reading/writing\nthese types from USD." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row0_MetaData[] = {
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/UnrealUSDWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row1_MetaData[] = {
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/UnrealUSDWrapper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row1;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatrix2D>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatrix2D_Statics::NewProp_Row0 = { "Row0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatrix2D, Row0), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row0_MetaData), NewProp_Row0_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatrix2D_Statics::NewProp_Row1 = { "Row1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatrix2D, Row1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row1_MetaData), NewProp_Row1_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatrix2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatrix2D_Statics::NewProp_Row0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatrix2D_Statics::NewProp_Row1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatrix2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatrix2D_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealUSDWrapper,
	nullptr,
	&NewStructOps,
	"Matrix2D",
	Z_Construct_UScriptStruct_FMatrix2D_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatrix2D_Statics::PropPointers),
	sizeof(FMatrix2D),
	alignof(FMatrix2D),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatrix2D_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMatrix2D_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMatrix2D()
{
	if (!Z_Registration_Info_UScriptStruct_Matrix2D.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Matrix2D.InnerSingleton, Z_Construct_UScriptStruct_FMatrix2D_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Matrix2D.InnerSingleton;
}
// End ScriptStruct FMatrix2D

// Begin ScriptStruct FMatrix3D
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Matrix3D;
class UScriptStruct* FMatrix3D::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Matrix3D.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Matrix3D.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatrix3D, (UObject*)Z_Construct_UPackage__Script_UnrealUSDWrapper(), TEXT("Matrix3D"));
	}
	return Z_Registration_Info_UScriptStruct_Matrix3D.OuterSingleton;
}
template<> UNREALUSDWRAPPER_API UScriptStruct* StaticStruct<FMatrix3D>()
{
	return FMatrix3D::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMatrix3D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Corresponds to pxr::GfMatrix3d. We don't expose any methods though, this is just to facilitate reading/writing\n * these types from USD.\n */" },
		{ "ModuleRelativePath", "Public/UnrealUSDWrapper.h" },
		{ "ToolTip", "Corresponds to pxr::GfMatrix3d. We don't expose any methods though, this is just to facilitate reading/writing\nthese types from USD." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row0_MetaData[] = {
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/UnrealUSDWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row1_MetaData[] = {
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/UnrealUSDWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row2_MetaData[] = {
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/UnrealUSDWrapper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatrix3D>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatrix3D_Statics::NewProp_Row0 = { "Row0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatrix3D, Row0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row0_MetaData), NewProp_Row0_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatrix3D_Statics::NewProp_Row1 = { "Row1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatrix3D, Row1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row1_MetaData), NewProp_Row1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatrix3D_Statics::NewProp_Row2 = { "Row2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatrix3D, Row2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row2_MetaData), NewProp_Row2_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatrix3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatrix3D_Statics::NewProp_Row0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatrix3D_Statics::NewProp_Row1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatrix3D_Statics::NewProp_Row2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatrix3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatrix3D_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealUSDWrapper,
	nullptr,
	&NewStructOps,
	"Matrix3D",
	Z_Construct_UScriptStruct_FMatrix3D_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatrix3D_Statics::PropPointers),
	sizeof(FMatrix3D),
	alignof(FMatrix3D),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatrix3D_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMatrix3D_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMatrix3D()
{
	if (!Z_Registration_Info_UScriptStruct_Matrix3D.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Matrix3D.InnerSingleton, Z_Construct_UScriptStruct_FMatrix3D_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Matrix3D.InnerSingleton;
}
// End ScriptStruct FMatrix3D

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_UnrealUSDWrapper_Public_UnrealUSDWrapper_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EUsdPurpose_StaticEnum, TEXT("EUsdPurpose"), &Z_Registration_Info_UEnum_EUsdPurpose, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2568113845U) },
		{ EUsdDefaultKind_StaticEnum, TEXT("EUsdDefaultKind"), &Z_Registration_Info_UEnum_EUsdDefaultKind, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 423496070U) },
		{ EUsdLoadPolicy_StaticEnum, TEXT("EUsdLoadPolicy"), &Z_Registration_Info_UEnum_EUsdLoadPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1241163139U) },
		{ EUsdInitialLoadSet_StaticEnum, TEXT("EUsdInitialLoadSet"), &Z_Registration_Info_UEnum_EUsdInitialLoadSet, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 379730532U) },
		{ EUsdInterpolationType_StaticEnum, TEXT("EUsdInterpolationType"), &Z_Registration_Info_UEnum_EUsdInterpolationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4073327177U) },
		{ EUsdRootMotionHandling_StaticEnum, TEXT("EUsdRootMotionHandling"), &Z_Registration_Info_UEnum_EUsdRootMotionHandling, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 643203920U) },
		{ EGeometryCacheImport_StaticEnum, TEXT("EGeometryCacheImport"), &Z_Registration_Info_UEnum_EGeometryCacheImport, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 305726122U) },
		{ EUsdListPosition_StaticEnum, TEXT("EUsdListPosition"), &Z_Registration_Info_UEnum_EUsdListPosition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2151534994U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMatrix2D::StaticStruct, Z_Construct_UScriptStruct_FMatrix2D_Statics::NewStructOps, TEXT("Matrix2D"), &Z_Registration_Info_UScriptStruct_Matrix2D, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatrix2D), 903148123U) },
		{ FMatrix3D::StaticStruct, Z_Construct_UScriptStruct_FMatrix3D_Statics::NewStructOps, TEXT("Matrix3D"), &Z_Registration_Info_UScriptStruct_Matrix3D, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatrix3D), 1426352120U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_UnrealUSDWrapper_Public_UnrealUSDWrapper_h_2040565887(TEXT("/Script/UnrealUSDWrapper"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_UnrealUSDWrapper_Public_UnrealUSDWrapper_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_UnrealUSDWrapper_Public_UnrealUSDWrapper_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_UnrealUSDWrapper_Public_UnrealUSDWrapper_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_UnrealUSDWrapper_Public_UnrealUSDWrapper_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
