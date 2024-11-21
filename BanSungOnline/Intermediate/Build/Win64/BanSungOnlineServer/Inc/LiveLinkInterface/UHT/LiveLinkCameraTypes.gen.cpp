// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkInterface/Public/Roles/LiveLinkCameraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkCameraTypes() {}

// Begin Cross Module References
LIVELINKINTERFACE_API UEnum* Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCameraFrameData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCameraStaticData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformFrameData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformStaticData();
UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References

// Begin Enum ELiveLinkCameraProjectionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELiveLinkCameraProjectionMode;
static UEnum* ELiveLinkCameraProjectionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELiveLinkCameraProjectionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELiveLinkCameraProjectionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("ELiveLinkCameraProjectionMode"));
	}
	return Z_Registration_Info_UEnum_ELiveLinkCameraProjectionMode.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UEnum* StaticEnum<ELiveLinkCameraProjectionMode>()
{
	return ELiveLinkCameraProjectionMode_StaticEnum();
}
struct Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "Orthographic.Name", "ELiveLinkCameraProjectionMode::Orthographic" },
		{ "Perspective.Name", "ELiveLinkCameraProjectionMode::Perspective" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELiveLinkCameraProjectionMode::Perspective", (int64)ELiveLinkCameraProjectionMode::Perspective },
		{ "ELiveLinkCameraProjectionMode::Orthographic", (int64)ELiveLinkCameraProjectionMode::Orthographic },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	nullptr,
	"ELiveLinkCameraProjectionMode",
	"ELiveLinkCameraProjectionMode",
	Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode()
{
	if (!Z_Registration_Info_UEnum_ELiveLinkCameraProjectionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELiveLinkCameraProjectionMode.InnerSingleton, Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELiveLinkCameraProjectionMode.InnerSingleton;
}
// End Enum ELiveLinkCameraProjectionMode

// Begin ScriptStruct FLiveLinkCameraStaticData
static_assert(std::is_polymorphic<FLiveLinkCameraStaticData>() == std::is_polymorphic<FLiveLinkTransformStaticData>(), "USTRUCT FLiveLinkCameraStaticData cannot be polymorphic unless super FLiveLinkTransformStaticData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkCameraStaticData;
class UScriptStruct* FLiveLinkCameraStaticData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkCameraStaticData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkCameraStaticData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkCameraStaticData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkCameraStaticData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkCameraStaticData>()
{
	return FLiveLinkCameraStaticData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Static data for Camera data. \n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Static data for Camera data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFieldOfViewSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether FieldOfView in frame data can be used\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Whether FieldOfView in frame data can be used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAspectRatioSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether AspectRatio in frame data can be used\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Whether AspectRatio in frame data can be used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFocalLengthSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether FocalLength in frame data can be used\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Whether FocalLength in frame data can be used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsProjectionModeSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether ProjectionMode in frame data can be used\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Whether ProjectionMode in frame data can be used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilmBackWidth_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Used with CinematicCamera. Values greater than 0 will be applied\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Used with CinematicCamera. Values greater than 0 will be applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilmBackHeight_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Used with CinematicCamera. Values greater than 0 will be applied\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Used with CinematicCamera. Values greater than 0 will be applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsApertureSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether Aperture in frame data can be used\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Whether Aperture in frame data can be used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFocusDistanceSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether FocusDistance in frame data can be used\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Whether FocusDistance in frame data can be used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDepthOfFieldSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Set to false to force the camera to disable depth of field\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Set to false to force the camera to disable depth of field" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsFieldOfViewSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFieldOfViewSupported;
	static void NewProp_bIsAspectRatioSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAspectRatioSupported;
	static void NewProp_bIsFocalLengthSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFocalLengthSupported;
	static void NewProp_bIsProjectionModeSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsProjectionModeSupported;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmBackWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmBackHeight;
	static void NewProp_bIsApertureSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsApertureSupported;
	static void NewProp_bIsFocusDistanceSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFocusDistanceSupported;
	static void NewProp_bIsDepthOfFieldSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDepthOfFieldSupported;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkCameraStaticData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFieldOfViewSupported_SetBit(void* Obj)
{
	((FLiveLinkCameraStaticData*)Obj)->bIsFieldOfViewSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFieldOfViewSupported = { "bIsFieldOfViewSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkCameraStaticData), &Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFieldOfViewSupported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFieldOfViewSupported_MetaData), NewProp_bIsFieldOfViewSupported_MetaData) };
void Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsAspectRatioSupported_SetBit(void* Obj)
{
	((FLiveLinkCameraStaticData*)Obj)->bIsAspectRatioSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsAspectRatioSupported = { "bIsAspectRatioSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkCameraStaticData), &Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsAspectRatioSupported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAspectRatioSupported_MetaData), NewProp_bIsAspectRatioSupported_MetaData) };
void Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocalLengthSupported_SetBit(void* Obj)
{
	((FLiveLinkCameraStaticData*)Obj)->bIsFocalLengthSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocalLengthSupported = { "bIsFocalLengthSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkCameraStaticData), &Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocalLengthSupported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFocalLengthSupported_MetaData), NewProp_bIsFocalLengthSupported_MetaData) };
void Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsProjectionModeSupported_SetBit(void* Obj)
{
	((FLiveLinkCameraStaticData*)Obj)->bIsProjectionModeSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsProjectionModeSupported = { "bIsProjectionModeSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkCameraStaticData), &Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsProjectionModeSupported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsProjectionModeSupported_MetaData), NewProp_bIsProjectionModeSupported_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_FilmBackWidth = { "FilmBackWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkCameraStaticData, FilmBackWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilmBackWidth_MetaData), NewProp_FilmBackWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_FilmBackHeight = { "FilmBackHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkCameraStaticData, FilmBackHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilmBackHeight_MetaData), NewProp_FilmBackHeight_MetaData) };
void Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsApertureSupported_SetBit(void* Obj)
{
	((FLiveLinkCameraStaticData*)Obj)->bIsApertureSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsApertureSupported = { "bIsApertureSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkCameraStaticData), &Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsApertureSupported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsApertureSupported_MetaData), NewProp_bIsApertureSupported_MetaData) };
void Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocusDistanceSupported_SetBit(void* Obj)
{
	((FLiveLinkCameraStaticData*)Obj)->bIsFocusDistanceSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocusDistanceSupported = { "bIsFocusDistanceSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkCameraStaticData), &Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocusDistanceSupported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFocusDistanceSupported_MetaData), NewProp_bIsFocusDistanceSupported_MetaData) };
void Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsDepthOfFieldSupported_SetBit(void* Obj)
{
	((FLiveLinkCameraStaticData*)Obj)->bIsDepthOfFieldSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsDepthOfFieldSupported = { "bIsDepthOfFieldSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkCameraStaticData), &Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsDepthOfFieldSupported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDepthOfFieldSupported_MetaData), NewProp_bIsDepthOfFieldSupported_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFieldOfViewSupported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsAspectRatioSupported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocalLengthSupported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsProjectionModeSupported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_FilmBackWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_FilmBackHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsApertureSupported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocusDistanceSupported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsDepthOfFieldSupported,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	Z_Construct_UScriptStruct_FLiveLinkTransformStaticData,
	&NewStructOps,
	"LiveLinkCameraStaticData",
	Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::PropPointers),
	sizeof(FLiveLinkCameraStaticData),
	alignof(FLiveLinkCameraStaticData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCameraStaticData()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkCameraStaticData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkCameraStaticData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkCameraStaticData.InnerSingleton;
}
// End ScriptStruct FLiveLinkCameraStaticData

// Begin ScriptStruct FLiveLinkCameraFrameData
static_assert(std::is_polymorphic<FLiveLinkCameraFrameData>() == std::is_polymorphic<FLiveLinkTransformFrameData>(), "USTRUCT FLiveLinkCameraFrameData cannot be polymorphic unless super FLiveLinkTransformFrameData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkCameraFrameData;
class UScriptStruct* FLiveLinkCameraFrameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkCameraFrameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkCameraFrameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkCameraFrameData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkCameraFrameData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkCameraFrameData>()
{
	return FLiveLinkCameraFrameData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Dynamic data for camera \n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Dynamic data for camera" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Field of View of the camera in degrees\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Field of View of the camera in degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Aspect Ratio of the camera (Width / Heigth)\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Aspect Ratio of the camera (Width / Heigth)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocalLength_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Focal length of the camera\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Focal length of the camera" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Aperture_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Aperture of the camera in terms of f-stop\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Aperture of the camera in terms of f-stop" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusDistance_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Focus distance of the camera in cm. Works only in manual focus method\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Focus distance of the camera in cm. Works only in manual focus method" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionMode_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// ProjectionMode of the camera (Perspective, Orthographic, etc...)\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "ProjectionMode of the camera (Perspective, Orthographic, etc...)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocalLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Aperture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ProjectionMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkCameraFrameData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkCameraFrameData, FieldOfView), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldOfView_MetaData), NewProp_FieldOfView_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkCameraFrameData, AspectRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AspectRatio_MetaData), NewProp_AspectRatio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FocalLength = { "FocalLength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkCameraFrameData, FocalLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocalLength_MetaData), NewProp_FocalLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_Aperture = { "Aperture", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkCameraFrameData, Aperture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Aperture_MetaData), NewProp_Aperture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FocusDistance = { "FocusDistance", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkCameraFrameData, FocusDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusDistance_MetaData), NewProp_FocusDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_ProjectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_ProjectionMode = { "ProjectionMode", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkCameraFrameData, ProjectionMode), Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionMode_MetaData), NewProp_ProjectionMode_MetaData) }; // 582133986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FieldOfView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_AspectRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FocalLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_Aperture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FocusDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_ProjectionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_ProjectionMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	Z_Construct_UScriptStruct_FLiveLinkTransformFrameData,
	&NewStructOps,
	"LiveLinkCameraFrameData",
	Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::PropPointers),
	sizeof(FLiveLinkCameraFrameData),
	alignof(FLiveLinkCameraFrameData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCameraFrameData()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkCameraFrameData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkCameraFrameData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkCameraFrameData.InnerSingleton;
}
// End ScriptStruct FLiveLinkCameraFrameData

// Begin ScriptStruct FLiveLinkCameraBlueprintData
static_assert(std::is_polymorphic<FLiveLinkCameraBlueprintData>() == std::is_polymorphic<FLiveLinkBaseBlueprintData>(), "USTRUCT FLiveLinkCameraBlueprintData cannot be polymorphic unless super FLiveLinkBaseBlueprintData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkCameraBlueprintData;
class UScriptStruct* FLiveLinkCameraBlueprintData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkCameraBlueprintData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkCameraBlueprintData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkCameraBlueprintData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkCameraBlueprintData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkCameraBlueprintData>()
{
	return FLiveLinkCameraBlueprintData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Facility structure to handle camera data in blueprint\n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Facility structure to handle camera data in blueprint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticData_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Static data that should not change every frame\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Static data that should not change every frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameData_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Dynamic data that can change every frame\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Dynamic data that can change every frame" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkCameraBlueprintData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewProp_StaticData = { "StaticData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkCameraBlueprintData, StaticData), Z_Construct_UScriptStruct_FLiveLinkCameraStaticData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticData_MetaData), NewProp_StaticData_MetaData) }; // 1519200107
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkCameraBlueprintData, FrameData), Z_Construct_UScriptStruct_FLiveLinkCameraFrameData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameData_MetaData), NewProp_FrameData_MetaData) }; // 954282052
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewProp_StaticData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewProp_FrameData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData,
	&NewStructOps,
	"LiveLinkCameraBlueprintData",
	Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::PropPointers),
	sizeof(FLiveLinkCameraBlueprintData),
	alignof(FLiveLinkCameraBlueprintData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkCameraBlueprintData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkCameraBlueprintData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkCameraBlueprintData.InnerSingleton;
}
// End ScriptStruct FLiveLinkCameraBlueprintData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELiveLinkCameraProjectionMode_StaticEnum, TEXT("ELiveLinkCameraProjectionMode"), &Z_Registration_Info_UEnum_ELiveLinkCameraProjectionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 582133986U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLiveLinkCameraStaticData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewStructOps, TEXT("LiveLinkCameraStaticData"), &Z_Registration_Info_UScriptStruct_LiveLinkCameraStaticData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkCameraStaticData), 1519200107U) },
		{ FLiveLinkCameraFrameData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewStructOps, TEXT("LiveLinkCameraFrameData"), &Z_Registration_Info_UScriptStruct_LiveLinkCameraFrameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkCameraFrameData), 954282052U) },
		{ FLiveLinkCameraBlueprintData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewStructOps, TEXT("LiveLinkCameraBlueprintData"), &Z_Registration_Info_UScriptStruct_LiveLinkCameraBlueprintData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkCameraBlueprintData), 1495520748U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h_2739027594(TEXT("/Script/LiveLinkInterface"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
