// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingTools/Public/ToolActivities/PolyEditExtrudeActivity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolyEditExtrudeActivity() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditActivityContext_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditExtrudeActivity();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditExtrudeActivity_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditExtrudeProperties();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditExtrudeProperties_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditOffsetProperties();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditOffsetProperties_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditPushPullProperties();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditPushPullProperties_NoRegister();
MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDirection();
MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDistanceMode();
MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeModeOptions();
MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_EPolyEditOffsetModeOptions();
MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_EPolyEditPushPullModeOptions();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UInteractiveToolActivity();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPlaneDistanceFromHitMechanic_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References

// Begin Enum EPolyEditExtrudeDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPolyEditExtrudeDirection;
static UEnum* EPolyEditExtrudeDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPolyEditExtrudeDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPolyEditExtrudeDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDirection, (UObject*)Z_Construct_UPackage__Script_MeshModelingTools(), TEXT("EPolyEditExtrudeDirection"));
	}
	return Z_Registration_Info_UEnum_EPolyEditExtrudeDirection.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<EPolyEditExtrudeDirection>()
{
	return EPolyEditExtrudeDirection_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "LocalX.Name", "EPolyEditExtrudeDirection::LocalX" },
		{ "LocalY.Name", "EPolyEditExtrudeDirection::LocalY" },
		{ "LocalZ.Name", "EPolyEditExtrudeDirection::LocalZ" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
		{ "SelectionNormal.Name", "EPolyEditExtrudeDirection::SelectionNormal" },
		{ "WorldX.Name", "EPolyEditExtrudeDirection::WorldX" },
		{ "WorldY.Name", "EPolyEditExtrudeDirection::WorldY" },
		{ "WorldZ.Name", "EPolyEditExtrudeDirection::WorldZ" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPolyEditExtrudeDirection::SelectionNormal", (int64)EPolyEditExtrudeDirection::SelectionNormal },
		{ "EPolyEditExtrudeDirection::WorldX", (int64)EPolyEditExtrudeDirection::WorldX },
		{ "EPolyEditExtrudeDirection::WorldY", (int64)EPolyEditExtrudeDirection::WorldY },
		{ "EPolyEditExtrudeDirection::WorldZ", (int64)EPolyEditExtrudeDirection::WorldZ },
		{ "EPolyEditExtrudeDirection::LocalX", (int64)EPolyEditExtrudeDirection::LocalX },
		{ "EPolyEditExtrudeDirection::LocalY", (int64)EPolyEditExtrudeDirection::LocalY },
		{ "EPolyEditExtrudeDirection::LocalZ", (int64)EPolyEditExtrudeDirection::LocalZ },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingTools,
	nullptr,
	"EPolyEditExtrudeDirection",
	"EPolyEditExtrudeDirection",
	Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDirection()
{
	if (!Z_Registration_Info_UEnum_EPolyEditExtrudeDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPolyEditExtrudeDirection.InnerSingleton, Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPolyEditExtrudeDirection.InnerSingleton;
}
// End Enum EPolyEditExtrudeDirection

// Begin Enum EPolyEditExtrudeDistanceMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPolyEditExtrudeDistanceMode;
static UEnum* EPolyEditExtrudeDistanceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPolyEditExtrudeDistanceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPolyEditExtrudeDistanceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDistanceMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingTools(), TEXT("EPolyEditExtrudeDistanceMode"));
	}
	return Z_Registration_Info_UEnum_EPolyEditExtrudeDistanceMode.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<EPolyEditExtrudeDistanceMode>()
{
	return EPolyEditExtrudeDistanceMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDistanceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ClickInViewport.Comment", "/** Set distance by clicking in the viewport. */" },
		{ "ClickInViewport.Name", "EPolyEditExtrudeDistanceMode::ClickInViewport" },
		{ "ClickInViewport.ToolTip", "Set distance by clicking in the viewport." },
		{ "Fixed.Comment", "/** Set distance with an explicit numerical value, then explictly accept. */" },
		{ "Fixed.Name", "EPolyEditExtrudeDistanceMode::Fixed" },
		{ "Fixed.ToolTip", "Set distance with an explicit numerical value, then explictly accept." },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPolyEditExtrudeDistanceMode::ClickInViewport", (int64)EPolyEditExtrudeDistanceMode::ClickInViewport },
		{ "EPolyEditExtrudeDistanceMode::Fixed", (int64)EPolyEditExtrudeDistanceMode::Fixed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDistanceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingTools,
	nullptr,
	"EPolyEditExtrudeDistanceMode",
	"EPolyEditExtrudeDistanceMode",
	Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDistanceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDistanceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDistanceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDistanceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDistanceMode()
{
	if (!Z_Registration_Info_UEnum_EPolyEditExtrudeDistanceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPolyEditExtrudeDistanceMode.InnerSingleton, Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDistanceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPolyEditExtrudeDistanceMode.InnerSingleton;
}
// End Enum EPolyEditExtrudeDistanceMode

// Begin Enum EPolyEditExtrudeModeOptions
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPolyEditExtrudeModeOptions;
static UEnum* EPolyEditExtrudeModeOptions_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPolyEditExtrudeModeOptions.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPolyEditExtrudeModeOptions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeModeOptions, (UObject*)Z_Construct_UPackage__Script_MeshModelingTools(), TEXT("EPolyEditExtrudeModeOptions"));
	}
	return Z_Registration_Info_UEnum_EPolyEditExtrudeModeOptions.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<EPolyEditExtrudeModeOptions>()
{
	return EPolyEditExtrudeModeOptions_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeModeOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// We use different property set objects so that we can customize category names, etc, as well as\n// have different defaults and saved settings.\n" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
		{ "SelectedTriangleNormals.Comment", "// Take the angle-weighed average of the selected triangles around each\n// extruded vertex to determine vertex movement direction.\n" },
		{ "SelectedTriangleNormals.Name", "EPolyEditExtrudeModeOptions::SelectedTriangleNormals" },
		{ "SelectedTriangleNormals.ToolTip", "Take the angle-weighed average of the selected triangles around each\nextruded vertex to determine vertex movement direction." },
		{ "SelectedTriangleNormalsEven.Comment", "// Like Selected Triangle Normals, but also adjusts the distances moved in\n// an attempt to keep triangles parallel to their original facing.\n" },
		{ "SelectedTriangleNormalsEven.Name", "EPolyEditExtrudeModeOptions::SelectedTriangleNormalsEven" },
		{ "SelectedTriangleNormalsEven.ToolTip", "Like Selected Triangle Normals, but also adjusts the distances moved in\nan attempt to keep triangles parallel to their original facing." },
		{ "SingleDirection.Comment", "// Extrude all triangles in the same direction regardless of their facing.\n" },
		{ "SingleDirection.Name", "EPolyEditExtrudeModeOptions::SingleDirection" },
		{ "SingleDirection.ToolTip", "Extrude all triangles in the same direction regardless of their facing." },
		{ "ToolTip", "We use different property set objects so that we can customize category names, etc, as well as\nhave different defaults and saved settings." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPolyEditExtrudeModeOptions::SingleDirection", (int64)EPolyEditExtrudeModeOptions::SingleDirection },
		{ "EPolyEditExtrudeModeOptions::SelectedTriangleNormals", (int64)EPolyEditExtrudeModeOptions::SelectedTriangleNormals },
		{ "EPolyEditExtrudeModeOptions::SelectedTriangleNormalsEven", (int64)EPolyEditExtrudeModeOptions::SelectedTriangleNormalsEven },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeModeOptions_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingTools,
	nullptr,
	"EPolyEditExtrudeModeOptions",
	"EPolyEditExtrudeModeOptions",
	Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeModeOptions_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeModeOptions_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeModeOptions_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeModeOptions_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeModeOptions()
{
	if (!Z_Registration_Info_UEnum_EPolyEditExtrudeModeOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPolyEditExtrudeModeOptions.InnerSingleton, Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeModeOptions_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPolyEditExtrudeModeOptions.InnerSingleton;
}
// End Enum EPolyEditExtrudeModeOptions

// Begin Enum EPolyEditOffsetModeOptions
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPolyEditOffsetModeOptions;
static UEnum* EPolyEditOffsetModeOptions_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPolyEditOffsetModeOptions.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPolyEditOffsetModeOptions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EPolyEditOffsetModeOptions, (UObject*)Z_Construct_UPackage__Script_MeshModelingTools(), TEXT("EPolyEditOffsetModeOptions"));
	}
	return Z_Registration_Info_UEnum_EPolyEditOffsetModeOptions.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<EPolyEditOffsetModeOptions>()
{
	return EPolyEditOffsetModeOptions_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingTools_EPolyEditOffsetModeOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
		{ "SelectedTriangleNormals.Comment", "// Take the angle-weighed average of the selected triangles around\n// offset vertex to determine vertex movement direction.\n" },
		{ "SelectedTriangleNormals.Name", "EPolyEditOffsetModeOptions::SelectedTriangleNormals" },
		{ "SelectedTriangleNormals.ToolTip", "Take the angle-weighed average of the selected triangles around\noffset vertex to determine vertex movement direction." },
		{ "SelectedTriangleNormalsEven.Comment", "// Like Selected Triangle Normals, but also adjusts the distances moved in\n// an attempt to keep triangles parallel to their original facing.\n" },
		{ "SelectedTriangleNormalsEven.Name", "EPolyEditOffsetModeOptions::SelectedTriangleNormalsEven" },
		{ "SelectedTriangleNormalsEven.ToolTip", "Like Selected Triangle Normals, but also adjusts the distances moved in\nan attempt to keep triangles parallel to their original facing." },
		{ "VertexNormals.Comment", "// Vertex normals, regardless of selection.\n" },
		{ "VertexNormals.Name", "EPolyEditOffsetModeOptions::VertexNormals" },
		{ "VertexNormals.ToolTip", "Vertex normals, regardless of selection." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPolyEditOffsetModeOptions::VertexNormals", (int64)EPolyEditOffsetModeOptions::VertexNormals },
		{ "EPolyEditOffsetModeOptions::SelectedTriangleNormals", (int64)EPolyEditOffsetModeOptions::SelectedTriangleNormals },
		{ "EPolyEditOffsetModeOptions::SelectedTriangleNormalsEven", (int64)EPolyEditOffsetModeOptions::SelectedTriangleNormalsEven },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingTools_EPolyEditOffsetModeOptions_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingTools,
	nullptr,
	"EPolyEditOffsetModeOptions",
	"EPolyEditOffsetModeOptions",
	Z_Construct_UEnum_MeshModelingTools_EPolyEditOffsetModeOptions_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EPolyEditOffsetModeOptions_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EPolyEditOffsetModeOptions_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingTools_EPolyEditOffsetModeOptions_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingTools_EPolyEditOffsetModeOptions()
{
	if (!Z_Registration_Info_UEnum_EPolyEditOffsetModeOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPolyEditOffsetModeOptions.InnerSingleton, Z_Construct_UEnum_MeshModelingTools_EPolyEditOffsetModeOptions_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPolyEditOffsetModeOptions.InnerSingleton;
}
// End Enum EPolyEditOffsetModeOptions

// Begin Enum EPolyEditPushPullModeOptions
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPolyEditPushPullModeOptions;
static UEnum* EPolyEditPushPullModeOptions_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPolyEditPushPullModeOptions.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPolyEditPushPullModeOptions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EPolyEditPushPullModeOptions, (UObject*)Z_Construct_UPackage__Script_MeshModelingTools(), TEXT("EPolyEditPushPullModeOptions"));
	}
	return Z_Registration_Info_UEnum_EPolyEditPushPullModeOptions.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<EPolyEditPushPullModeOptions>()
{
	return EPolyEditPushPullModeOptions_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingTools_EPolyEditPushPullModeOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
		{ "SelectedTriangleNormals.Comment", "// Take the angle-weighed average of the selected triangles around\n// offset vertex to determine vertex movement direction.\n" },
		{ "SelectedTriangleNormals.Name", "EPolyEditPushPullModeOptions::SelectedTriangleNormals" },
		{ "SelectedTriangleNormals.ToolTip", "Take the angle-weighed average of the selected triangles around\noffset vertex to determine vertex movement direction." },
		{ "SelectedTriangleNormalsEven.Comment", "// Like Selected Triangle Normals, but also adjusts the distances moved in\n// an attempt to keep triangles parallel to their original facing.\n" },
		{ "SelectedTriangleNormalsEven.Name", "EPolyEditPushPullModeOptions::SelectedTriangleNormalsEven" },
		{ "SelectedTriangleNormalsEven.ToolTip", "Like Selected Triangle Normals, but also adjusts the distances moved in\nan attempt to keep triangles parallel to their original facing." },
		{ "SingleDirection.Comment", "// Move all triangles in the same direction regardless of their facing.\n" },
		{ "SingleDirection.Name", "EPolyEditPushPullModeOptions::SingleDirection" },
		{ "SingleDirection.ToolTip", "Move all triangles in the same direction regardless of their facing." },
		{ "VertexNormals.Comment", "// Vertex normals, regardless of selection.\n" },
		{ "VertexNormals.Name", "EPolyEditPushPullModeOptions::VertexNormals" },
		{ "VertexNormals.ToolTip", "Vertex normals, regardless of selection." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPolyEditPushPullModeOptions::SelectedTriangleNormals", (int64)EPolyEditPushPullModeOptions::SelectedTriangleNormals },
		{ "EPolyEditPushPullModeOptions::SelectedTriangleNormalsEven", (int64)EPolyEditPushPullModeOptions::SelectedTriangleNormalsEven },
		{ "EPolyEditPushPullModeOptions::SingleDirection", (int64)EPolyEditPushPullModeOptions::SingleDirection },
		{ "EPolyEditPushPullModeOptions::VertexNormals", (int64)EPolyEditPushPullModeOptions::VertexNormals },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingTools_EPolyEditPushPullModeOptions_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingTools,
	nullptr,
	"EPolyEditPushPullModeOptions",
	"EPolyEditPushPullModeOptions",
	Z_Construct_UEnum_MeshModelingTools_EPolyEditPushPullModeOptions_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EPolyEditPushPullModeOptions_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EPolyEditPushPullModeOptions_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingTools_EPolyEditPushPullModeOptions_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingTools_EPolyEditPushPullModeOptions()
{
	if (!Z_Registration_Info_UEnum_EPolyEditPushPullModeOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPolyEditPushPullModeOptions.InnerSingleton, Z_Construct_UEnum_MeshModelingTools_EPolyEditPushPullModeOptions_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPolyEditPushPullModeOptions.InnerSingleton;
}
// End Enum EPolyEditPushPullModeOptions

// Begin Class UPolyEditExtrudeProperties
void UPolyEditExtrudeProperties::StaticRegisterNativesUPolyEditExtrudeProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyEditExtrudeProperties);
UClass* Z_Construct_UClass_UPolyEditExtrudeProperties_NoRegister()
{
	return UPolyEditExtrudeProperties::StaticClass();
}
struct Z_Construct_UClass_UPolyEditExtrudeProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ToolActivities/PolyEditExtrudeActivity.h" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceMode_MetaData[] = {
		{ "Category", "Extrude" },
		{ "Comment", "/** How the extrude distance is set. */" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
		{ "ToolTip", "How the extrude distance is set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Extrude" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "-10000" },
		{ "Comment", "/** Distance to extrude. */" },
		{ "EditCondition", "DistanceMode == EPolyEditExtrudeDistanceMode::Fixed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
		{ "ToolTip", "Distance to extrude." },
		{ "UIMax", "1000" },
		{ "UIMin", "-1000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionMode_MetaData[] = {
		{ "Category", "Extrude" },
		{ "Comment", "/** How to move the vertices during the extrude */" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
		{ "ToolTip", "How to move the vertices during the extrude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Extrude" },
		{ "Comment", "/** Direction in which to extrude. */" },
		{ "EditCondition", "DirectionMode == EPolyEditExtrudeModeOptions::SingleDirection" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
		{ "ToolTip", "Direction in which to extrude." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceScaleFactor_MetaData[] = {
		{ "Category", "Extrude" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Controls the maximum distance vertices can move from the target distance in order to stay parallel with their source triangles. */" },
		{ "EditCondition", "DirectionMode == EPolyEditExtrudeModeOptions::SelectedTriangleNormalsEven" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
		{ "ToolTip", "Controls the maximum distance vertices can move from the target distance in order to stay parallel with their source triangles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShellsToSolids_MetaData[] = {
		{ "Category", "Extrude" },
		{ "Comment", "/** Controls whether extruding an entire open-border patch should create a solid or an open shell */" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
		{ "ToolTip", "Controls whether extruding an entire open-border patch should create a solid or an open shell" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeasureDirection_MetaData[] = {
		{ "Category", "Extrude" },
		{ "Comment", "/** What axis to measure the extrusion distance along. */" },
		{ "EditCondition", "DirectionMode != EPolyEditExtrudeModeOptions::SingleDirection && DistanceMode == EPolyEditExtrudeDistanceMode::ClickInViewport" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
		{ "ToolTip", "What axis to measure the extrusion distance along." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseColinearityForSettingBorderGroups_MetaData[] = {
		{ "Category", "Extrude" },
		{ "Comment", "/** \n\x09 * When extruding regions that touch the mesh border, assign the side groups (groups on the \n\x09 * stitched side of the extrude) in a way that considers edge colinearity. For instance, when\n\x09 * true, extruding a flat rectangle will give four different groups on its sides rather than\n\x09 * one connected group.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
		{ "ToolTip", "When extruding regions that touch the mesh border, assign the side groups (groups on the\nstitched side of the extrude) in a way that considers edge colinearity. For instance, when\ntrue, extruding a flat rectangle will give four different groups on its sides rather than\none connected group." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DistanceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DistanceMode;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DirectionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DirectionMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxDistanceScaleFactor;
	static void NewProp_bShellsToSolids_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShellsToSolids;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MeasureDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MeasureDirection;
	static void NewProp_bUseColinearityForSettingBorderGroups_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseColinearityForSettingBorderGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyEditExtrudeProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_DistanceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_DistanceMode = { "DistanceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditExtrudeProperties, DistanceMode), Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDistanceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceMode_MetaData), NewProp_DistanceMode_MetaData) }; // 409501255
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditExtrudeProperties, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_DirectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_DirectionMode = { "DirectionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditExtrudeProperties, DirectionMode), Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeModeOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionMode_MetaData), NewProp_DirectionMode_MetaData) }; // 2547102993
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditExtrudeProperties, Direction), Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) }; // 2147383384
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_MaxDistanceScaleFactor = { "MaxDistanceScaleFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditExtrudeProperties, MaxDistanceScaleFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistanceScaleFactor_MetaData), NewProp_MaxDistanceScaleFactor_MetaData) };
void Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_bShellsToSolids_SetBit(void* Obj)
{
	((UPolyEditExtrudeProperties*)Obj)->bShellsToSolids = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_bShellsToSolids = { "bShellsToSolids", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPolyEditExtrudeProperties), &Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_bShellsToSolids_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShellsToSolids_MetaData), NewProp_bShellsToSolids_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_MeasureDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_MeasureDirection = { "MeasureDirection", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditExtrudeProperties, MeasureDirection), Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeasureDirection_MetaData), NewProp_MeasureDirection_MetaData) }; // 2147383384
void Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_bUseColinearityForSettingBorderGroups_SetBit(void* Obj)
{
	((UPolyEditExtrudeProperties*)Obj)->bUseColinearityForSettingBorderGroups = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_bUseColinearityForSettingBorderGroups = { "bUseColinearityForSettingBorderGroups", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPolyEditExtrudeProperties), &Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_bUseColinearityForSettingBorderGroups_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseColinearityForSettingBorderGroups_MetaData), NewProp_bUseColinearityForSettingBorderGroups_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_DistanceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_DistanceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_DirectionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_DirectionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_MaxDistanceScaleFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_bShellsToSolids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_MeasureDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_MeasureDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_bUseColinearityForSettingBorderGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::ClassParams = {
	&UPolyEditExtrudeProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPolyEditExtrudeProperties()
{
	if (!Z_Registration_Info_UClass_UPolyEditExtrudeProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyEditExtrudeProperties.OuterSingleton, Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPolyEditExtrudeProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UPolyEditExtrudeProperties>()
{
	return UPolyEditExtrudeProperties::StaticClass();
}
UPolyEditExtrudeProperties::UPolyEditExtrudeProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyEditExtrudeProperties);
UPolyEditExtrudeProperties::~UPolyEditExtrudeProperties() {}
// End Class UPolyEditExtrudeProperties

// Begin Class UPolyEditOffsetProperties
void UPolyEditOffsetProperties::StaticRegisterNativesUPolyEditOffsetProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyEditOffsetProperties);
UClass* Z_Construct_UClass_UPolyEditOffsetProperties_NoRegister()
{
	return UPolyEditOffsetProperties::StaticClass();
}
struct Z_Construct_UClass_UPolyEditOffsetProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ToolActivities/PolyEditExtrudeActivity.h" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceMode_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** How the offset distance is set. */" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
		{ "ToolTip", "How the offset distance is set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** Offset distance. */" },
		{ "EditCondition", "DistanceMode == EPolyEditExtrudeDistanceMode::Fixed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
		{ "ToolTip", "Offset distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionMode_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** Which way to move vertices during the offset */" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
		{ "ToolTip", "Which way to move vertices during the offset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceScaleFactor_MetaData[] = {
		{ "Category", "Offset" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Controls the maximum distance vertices can move from the target distance in order to stay parallel with their source triangles. */" },
		{ "EditCondition", "DirectionMode == EPolyEditOffsetModeOptions::SelectedTriangleNormalsEven" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
		{ "ToolTip", "Controls the maximum distance vertices can move from the target distance in order to stay parallel with their source triangles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShellsToSolids_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** Controls whether offsetting an entire open-border patch should create a solid or an open shell */" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
		{ "ToolTip", "Controls whether offsetting an entire open-border patch should create a solid or an open shell" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeasureDirection_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** What axis to measure the offset distance along. */" },
		{ "EditCondition", "DistanceMode == EPolyEditExtrudeDistanceMode::ClickInViewport" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
		{ "ToolTip", "What axis to measure the offset distance along." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseColinearityForSettingBorderGroups_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/**\n\x09 * When offsetting regions that touch the mesh border, assign the side groups (groups on the\n\x09 * stitched side of the offset) in a way that considers edge colinearity. For instance, when\n\x09 * true, extruding a flat rectangle will give four different groups on its sides rather than\n\x09 * one connected group.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
		{ "ToolTip", "When offsetting regions that touch the mesh border, assign the side groups (groups on the\nstitched side of the offset) in a way that considers edge colinearity. For instance, when\ntrue, extruding a flat rectangle will give four different groups on its sides rather than\none connected group." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DistanceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DistanceMode;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DirectionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DirectionMode;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxDistanceScaleFactor;
	static void NewProp_bShellsToSolids_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShellsToSolids;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MeasureDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MeasureDirection;
	static void NewProp_bUseColinearityForSettingBorderGroups_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseColinearityForSettingBorderGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyEditOffsetProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPolyEditOffsetProperties_Statics::NewProp_DistanceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPolyEditOffsetProperties_Statics::NewProp_DistanceMode = { "DistanceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditOffsetProperties, DistanceMode), Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDistanceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceMode_MetaData), NewProp_DistanceMode_MetaData) }; // 409501255
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPolyEditOffsetProperties_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditOffsetProperties, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPolyEditOffsetProperties_Statics::NewProp_DirectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPolyEditOffsetProperties_Statics::NewProp_DirectionMode = { "DirectionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditOffsetProperties, DirectionMode), Z_Construct_UEnum_MeshModelingTools_EPolyEditOffsetModeOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionMode_MetaData), NewProp_DirectionMode_MetaData) }; // 2396469356
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPolyEditOffsetProperties_Statics::NewProp_MaxDistanceScaleFactor = { "MaxDistanceScaleFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditOffsetProperties, MaxDistanceScaleFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistanceScaleFactor_MetaData), NewProp_MaxDistanceScaleFactor_MetaData) };
void Z_Construct_UClass_UPolyEditOffsetProperties_Statics::NewProp_bShellsToSolids_SetBit(void* Obj)
{
	((UPolyEditOffsetProperties*)Obj)->bShellsToSolids = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolyEditOffsetProperties_Statics::NewProp_bShellsToSolids = { "bShellsToSolids", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPolyEditOffsetProperties), &Z_Construct_UClass_UPolyEditOffsetProperties_Statics::NewProp_bShellsToSolids_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShellsToSolids_MetaData), NewProp_bShellsToSolids_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPolyEditOffsetProperties_Statics::NewProp_MeasureDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPolyEditOffsetProperties_Statics::NewProp_MeasureDirection = { "MeasureDirection", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditOffsetProperties, MeasureDirection), Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeasureDirection_MetaData), NewProp_MeasureDirection_MetaData) }; // 2147383384
void Z_Construct_UClass_UPolyEditOffsetProperties_Statics::NewProp_bUseColinearityForSettingBorderGroups_SetBit(void* Obj)
{
	((UPolyEditOffsetProperties*)Obj)->bUseColinearityForSettingBorderGroups = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolyEditOffsetProperties_Statics::NewProp_bUseColinearityForSettingBorderGroups = { "bUseColinearityForSettingBorderGroups", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPolyEditOffsetProperties), &Z_Construct_UClass_UPolyEditOffsetProperties_Statics::NewProp_bUseColinearityForSettingBorderGroups_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseColinearityForSettingBorderGroups_MetaData), NewProp_bUseColinearityForSettingBorderGroups_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolyEditOffsetProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditOffsetProperties_Statics::NewProp_DistanceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditOffsetProperties_Statics::NewProp_DistanceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditOffsetProperties_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditOffsetProperties_Statics::NewProp_DirectionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditOffsetProperties_Statics::NewProp_DirectionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditOffsetProperties_Statics::NewProp_MaxDistanceScaleFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditOffsetProperties_Statics::NewProp_bShellsToSolids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditOffsetProperties_Statics::NewProp_MeasureDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditOffsetProperties_Statics::NewProp_MeasureDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditOffsetProperties_Statics::NewProp_bUseColinearityForSettingBorderGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditOffsetProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPolyEditOffsetProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditOffsetProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyEditOffsetProperties_Statics::ClassParams = {
	&UPolyEditOffsetProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPolyEditOffsetProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditOffsetProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditOffsetProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UPolyEditOffsetProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPolyEditOffsetProperties()
{
	if (!Z_Registration_Info_UClass_UPolyEditOffsetProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyEditOffsetProperties.OuterSingleton, Z_Construct_UClass_UPolyEditOffsetProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPolyEditOffsetProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UPolyEditOffsetProperties>()
{
	return UPolyEditOffsetProperties::StaticClass();
}
UPolyEditOffsetProperties::UPolyEditOffsetProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyEditOffsetProperties);
UPolyEditOffsetProperties::~UPolyEditOffsetProperties() {}
// End Class UPolyEditOffsetProperties

// Begin Class UPolyEditPushPullProperties
void UPolyEditPushPullProperties::StaticRegisterNativesUPolyEditPushPullProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyEditPushPullProperties);
UClass* Z_Construct_UClass_UPolyEditPushPullProperties_NoRegister()
{
	return UPolyEditPushPullProperties::StaticClass();
}
struct Z_Construct_UClass_UPolyEditPushPullProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ToolActivities/PolyEditExtrudeActivity.h" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceMode_MetaData[] = {
		{ "Category", "ExtrusionOptions" },
		{ "Comment", "/** How the extrusion distance is set. */" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
		{ "ToolTip", "How the extrusion distance is set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "ExtrusionOptions" },
		{ "Comment", "/** Extrusion distance. */" },
		{ "EditCondition", "DistanceMode == EPolyEditExtrudeDistanceMode::Fixed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
		{ "ToolTip", "Extrusion distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionMode_MetaData[] = {
		{ "Category", "ExtrusionOptions" },
		{ "Comment", "/** Which way to move vertices while extruding. */" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
		{ "ToolTip", "Which way to move vertices while extruding." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SingleDirection_MetaData[] = {
		{ "Category", "ExtrusionOptions" },
		{ "Comment", "/** Direction in which to extrude. */" },
		{ "DisplayName", "Direction" },
		{ "EditCondition", "DirectionMode == EPolyEditPushPullModeOptions::SingleDirection" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
		{ "ToolTip", "Direction in which to extrude." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceScaleFactor_MetaData[] = {
		{ "Category", "ExtrusionOptions" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Controls the maximum distance vertices can move from the target distance in order to stay parallel with their source triangles. */" },
		{ "EditCondition", "DirectionMode == EPolyEditPushPullModeOptions::SelectedTriangleNormalsEven" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
		{ "ToolTip", "Controls the maximum distance vertices can move from the target distance in order to stay parallel with their source triangles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShellsToSolids_MetaData[] = {
		{ "Category", "ExtrusionOptions" },
		{ "Comment", "/** Controls whether offsetting an entire open-border patch should create a solid or an open shell */" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
		{ "ToolTip", "Controls whether offsetting an entire open-border patch should create a solid or an open shell" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeasureDirection_MetaData[] = {
		{ "Category", "ExtrusionOptions" },
		{ "Comment", "/** What axis to measure the extrusion distance along. */" },
		{ "EditCondition", "DirectionMode != EPolyEditPushPullModeOptions::SingleDirection && DistanceMode == EPolyEditExtrudeDistanceMode::ClickInViewport" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
		{ "ToolTip", "What axis to measure the extrusion distance along." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseColinearityForSettingBorderGroups_MetaData[] = {
		{ "Category", "ExtrusionOptions" },
		{ "Comment", "/**\n\x09 * When offsetting regions that touch the mesh border, assign the side groups (groups on the\n\x09 * stitched side of the extrude) in a way that considers edge colinearity. For instance, when\n\x09 * true, extruding a flat rectangle will give four different groups on its sides rather than\n\x09 * one connected group.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
		{ "ToolTip", "When offsetting regions that touch the mesh border, assign the side groups (groups on the\nstitched side of the extrude) in a way that considers edge colinearity. For instance, when\ntrue, extruding a flat rectangle will give four different groups on its sides rather than\none connected group." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DistanceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DistanceMode;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DirectionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DirectionMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SingleDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SingleDirection;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxDistanceScaleFactor;
	static void NewProp_bShellsToSolids_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShellsToSolids;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MeasureDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MeasureDirection;
	static void NewProp_bUseColinearityForSettingBorderGroups_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseColinearityForSettingBorderGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyEditPushPullProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_DistanceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_DistanceMode = { "DistanceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditPushPullProperties, DistanceMode), Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDistanceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceMode_MetaData), NewProp_DistanceMode_MetaData) }; // 409501255
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditPushPullProperties, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_DirectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_DirectionMode = { "DirectionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditPushPullProperties, DirectionMode), Z_Construct_UEnum_MeshModelingTools_EPolyEditPushPullModeOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionMode_MetaData), NewProp_DirectionMode_MetaData) }; // 1469316663
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_SingleDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_SingleDirection = { "SingleDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditPushPullProperties, SingleDirection), Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SingleDirection_MetaData), NewProp_SingleDirection_MetaData) }; // 2147383384
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_MaxDistanceScaleFactor = { "MaxDistanceScaleFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditPushPullProperties, MaxDistanceScaleFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistanceScaleFactor_MetaData), NewProp_MaxDistanceScaleFactor_MetaData) };
void Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_bShellsToSolids_SetBit(void* Obj)
{
	((UPolyEditPushPullProperties*)Obj)->bShellsToSolids = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_bShellsToSolids = { "bShellsToSolids", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPolyEditPushPullProperties), &Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_bShellsToSolids_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShellsToSolids_MetaData), NewProp_bShellsToSolids_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_MeasureDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_MeasureDirection = { "MeasureDirection", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditPushPullProperties, MeasureDirection), Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeasureDirection_MetaData), NewProp_MeasureDirection_MetaData) }; // 2147383384
void Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_bUseColinearityForSettingBorderGroups_SetBit(void* Obj)
{
	((UPolyEditPushPullProperties*)Obj)->bUseColinearityForSettingBorderGroups = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_bUseColinearityForSettingBorderGroups = { "bUseColinearityForSettingBorderGroups", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPolyEditPushPullProperties), &Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_bUseColinearityForSettingBorderGroups_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseColinearityForSettingBorderGroups_MetaData), NewProp_bUseColinearityForSettingBorderGroups_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolyEditPushPullProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_DistanceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_DistanceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_DirectionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_DirectionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_SingleDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_SingleDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_MaxDistanceScaleFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_bShellsToSolids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_MeasureDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_MeasureDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_bUseColinearityForSettingBorderGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditPushPullProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPolyEditPushPullProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditPushPullProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyEditPushPullProperties_Statics::ClassParams = {
	&UPolyEditPushPullProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPolyEditPushPullProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditPushPullProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditPushPullProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UPolyEditPushPullProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPolyEditPushPullProperties()
{
	if (!Z_Registration_Info_UClass_UPolyEditPushPullProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyEditPushPullProperties.OuterSingleton, Z_Construct_UClass_UPolyEditPushPullProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPolyEditPushPullProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UPolyEditPushPullProperties>()
{
	return UPolyEditPushPullProperties::StaticClass();
}
UPolyEditPushPullProperties::UPolyEditPushPullProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyEditPushPullProperties);
UPolyEditPushPullProperties::~UPolyEditPushPullProperties() {}
// End Class UPolyEditPushPullProperties

// Begin Class UPolyEditExtrudeActivity
void UPolyEditExtrudeActivity::StaticRegisterNativesUPolyEditExtrudeActivity()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyEditExtrudeActivity);
UClass* Z_Construct_UClass_UPolyEditExtrudeActivity_NoRegister()
{
	return UPolyEditExtrudeActivity::StaticClass();
}
struct Z_Construct_UClass_UPolyEditExtrudeActivity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ToolActivities/PolyEditExtrudeActivity.h" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtrudeProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PushPullProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtrudeHeightMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivityContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditExtrudeActivity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExtrudeProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OffsetProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PushPullProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExtrudeHeightMechanic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivityContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyEditExtrudeActivity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPolyEditExtrudeActivity_Statics::NewProp_ExtrudeProperties = { "ExtrudeProperties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditExtrudeActivity, ExtrudeProperties), Z_Construct_UClass_UPolyEditExtrudeProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtrudeProperties_MetaData), NewProp_ExtrudeProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPolyEditExtrudeActivity_Statics::NewProp_OffsetProperties = { "OffsetProperties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditExtrudeActivity, OffsetProperties), Z_Construct_UClass_UPolyEditOffsetProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetProperties_MetaData), NewProp_OffsetProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPolyEditExtrudeActivity_Statics::NewProp_PushPullProperties = { "PushPullProperties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditExtrudeActivity, PushPullProperties), Z_Construct_UClass_UPolyEditPushPullProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PushPullProperties_MetaData), NewProp_PushPullProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPolyEditExtrudeActivity_Statics::NewProp_ExtrudeHeightMechanic = { "ExtrudeHeightMechanic", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditExtrudeActivity, ExtrudeHeightMechanic), Z_Construct_UClass_UPlaneDistanceFromHitMechanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtrudeHeightMechanic_MetaData), NewProp_ExtrudeHeightMechanic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPolyEditExtrudeActivity_Statics::NewProp_ActivityContext = { "ActivityContext", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditExtrudeActivity, ActivityContext), Z_Construct_UClass_UPolyEditActivityContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivityContext_MetaData), NewProp_ActivityContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolyEditExtrudeActivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeActivity_Statics::NewProp_ExtrudeProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeActivity_Statics::NewProp_OffsetProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeActivity_Statics::NewProp_PushPullProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeActivity_Statics::NewProp_ExtrudeHeightMechanic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeActivity_Statics::NewProp_ActivityContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditExtrudeActivity_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPolyEditExtrudeActivity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolActivity,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditExtrudeActivity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyEditExtrudeActivity_Statics::ClassParams = {
	&UPolyEditExtrudeActivity::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPolyEditExtrudeActivity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditExtrudeActivity_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditExtrudeActivity_Statics::Class_MetaDataParams), Z_Construct_UClass_UPolyEditExtrudeActivity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPolyEditExtrudeActivity()
{
	if (!Z_Registration_Info_UClass_UPolyEditExtrudeActivity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyEditExtrudeActivity.OuterSingleton, Z_Construct_UClass_UPolyEditExtrudeActivity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPolyEditExtrudeActivity.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UPolyEditExtrudeActivity>()
{
	return UPolyEditExtrudeActivity::StaticClass();
}
UPolyEditExtrudeActivity::UPolyEditExtrudeActivity() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyEditExtrudeActivity);
UPolyEditExtrudeActivity::~UPolyEditExtrudeActivity() {}
// End Class UPolyEditExtrudeActivity

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditExtrudeActivity_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPolyEditExtrudeDirection_StaticEnum, TEXT("EPolyEditExtrudeDirection"), &Z_Registration_Info_UEnum_EPolyEditExtrudeDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2147383384U) },
		{ EPolyEditExtrudeDistanceMode_StaticEnum, TEXT("EPolyEditExtrudeDistanceMode"), &Z_Registration_Info_UEnum_EPolyEditExtrudeDistanceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 409501255U) },
		{ EPolyEditExtrudeModeOptions_StaticEnum, TEXT("EPolyEditExtrudeModeOptions"), &Z_Registration_Info_UEnum_EPolyEditExtrudeModeOptions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2547102993U) },
		{ EPolyEditOffsetModeOptions_StaticEnum, TEXT("EPolyEditOffsetModeOptions"), &Z_Registration_Info_UEnum_EPolyEditOffsetModeOptions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2396469356U) },
		{ EPolyEditPushPullModeOptions_StaticEnum, TEXT("EPolyEditPushPullModeOptions"), &Z_Registration_Info_UEnum_EPolyEditPushPullModeOptions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1469316663U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPolyEditExtrudeProperties, UPolyEditExtrudeProperties::StaticClass, TEXT("UPolyEditExtrudeProperties"), &Z_Registration_Info_UClass_UPolyEditExtrudeProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyEditExtrudeProperties), 1990449702U) },
		{ Z_Construct_UClass_UPolyEditOffsetProperties, UPolyEditOffsetProperties::StaticClass, TEXT("UPolyEditOffsetProperties"), &Z_Registration_Info_UClass_UPolyEditOffsetProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyEditOffsetProperties), 3911776602U) },
		{ Z_Construct_UClass_UPolyEditPushPullProperties, UPolyEditPushPullProperties::StaticClass, TEXT("UPolyEditPushPullProperties"), &Z_Registration_Info_UClass_UPolyEditPushPullProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyEditPushPullProperties), 1065629296U) },
		{ Z_Construct_UClass_UPolyEditExtrudeActivity, UPolyEditExtrudeActivity::StaticClass, TEXT("UPolyEditExtrudeActivity"), &Z_Registration_Info_UClass_UPolyEditExtrudeActivity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyEditExtrudeActivity), 1561072825U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditExtrudeActivity_h_1494970844(TEXT("/Script/MeshModelingTools"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditExtrudeActivity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditExtrudeActivity_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditExtrudeActivity_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditExtrudeActivity_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
