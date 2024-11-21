// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkInterface/Public/Roles/LiveLinkLightTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkLightTypes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkLightFrameData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkLightStaticData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformFrameData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformStaticData();
UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References

// Begin ScriptStruct FLiveLinkLightStaticData
static_assert(std::is_polymorphic<FLiveLinkLightStaticData>() == std::is_polymorphic<FLiveLinkTransformStaticData>(), "USTRUCT FLiveLinkLightStaticData cannot be polymorphic unless super FLiveLinkTransformStaticData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkLightStaticData;
class UScriptStruct* FLiveLinkLightStaticData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkLightStaticData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkLightStaticData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkLightStaticData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkLightStaticData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkLightStaticData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkLightStaticData>()
{
	return FLiveLinkLightStaticData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Static data for Light data. \n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Static data for Light data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTemperatureSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether Temperature can be used in the frame data\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Whether Temperature can be used in the frame data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsIntensitySupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether Intensity can be used in the frame data\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Whether Intensity can be used in the frame data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLightColorSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether LightColor can be used in the frame data\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Whether LightColor can be used in the frame data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInnerConeAngleSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether InnerConeAngle can be used in the frame data. Only used for spot lights\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Whether InnerConeAngle can be used in the frame data. Only used for spot lights" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOuterConeAngleSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether OuterConeAngle can be used in the frame data. Only used for spot lights\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Whether OuterConeAngle can be used in the frame data. Only used for spot lights" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttenuationRadiusSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether AttenuationRadius can be used in the frame data. Only used for spot lights\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Whether AttenuationRadius can be used in the frame data. Only used for spot lights" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSourceLenghtSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether SourceLength can be used in the frame data. Only used for spot lights\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Whether SourceLength can be used in the frame data. Only used for spot lights" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSourceRadiusSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether SourceRadius can be used in the frame data. Only used for spot lights\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Whether SourceRadius can be used in the frame data. Only used for spot lights" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSoftSourceRadiusSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether SoftSourceRadius can be used in the frame data. Only used for spot lights\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Whether SoftSourceRadius can be used in the frame data. Only used for spot lights" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsTemperatureSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTemperatureSupported;
	static void NewProp_bIsIntensitySupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsIntensitySupported;
	static void NewProp_bIsLightColorSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLightColorSupported;
	static void NewProp_bIsInnerConeAngleSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInnerConeAngleSupported;
	static void NewProp_bIsOuterConeAngleSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOuterConeAngleSupported;
	static void NewProp_bIsAttenuationRadiusSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttenuationRadiusSupported;
	static void NewProp_bIsSourceLenghtSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSourceLenghtSupported;
	static void NewProp_bIsSourceRadiusSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSourceRadiusSupported;
	static void NewProp_bIsSoftSourceRadiusSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSoftSourceRadiusSupported;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkLightStaticData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsTemperatureSupported_SetBit(void* Obj)
{
	((FLiveLinkLightStaticData*)Obj)->bIsTemperatureSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsTemperatureSupported = { "bIsTemperatureSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkLightStaticData), &Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsTemperatureSupported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTemperatureSupported_MetaData), NewProp_bIsTemperatureSupported_MetaData) };
void Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsIntensitySupported_SetBit(void* Obj)
{
	((FLiveLinkLightStaticData*)Obj)->bIsIntensitySupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsIntensitySupported = { "bIsIntensitySupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkLightStaticData), &Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsIntensitySupported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsIntensitySupported_MetaData), NewProp_bIsIntensitySupported_MetaData) };
void Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsLightColorSupported_SetBit(void* Obj)
{
	((FLiveLinkLightStaticData*)Obj)->bIsLightColorSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsLightColorSupported = { "bIsLightColorSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkLightStaticData), &Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsLightColorSupported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLightColorSupported_MetaData), NewProp_bIsLightColorSupported_MetaData) };
void Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsInnerConeAngleSupported_SetBit(void* Obj)
{
	((FLiveLinkLightStaticData*)Obj)->bIsInnerConeAngleSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsInnerConeAngleSupported = { "bIsInnerConeAngleSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkLightStaticData), &Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsInnerConeAngleSupported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInnerConeAngleSupported_MetaData), NewProp_bIsInnerConeAngleSupported_MetaData) };
void Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsOuterConeAngleSupported_SetBit(void* Obj)
{
	((FLiveLinkLightStaticData*)Obj)->bIsOuterConeAngleSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsOuterConeAngleSupported = { "bIsOuterConeAngleSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkLightStaticData), &Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsOuterConeAngleSupported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOuterConeAngleSupported_MetaData), NewProp_bIsOuterConeAngleSupported_MetaData) };
void Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsAttenuationRadiusSupported_SetBit(void* Obj)
{
	((FLiveLinkLightStaticData*)Obj)->bIsAttenuationRadiusSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsAttenuationRadiusSupported = { "bIsAttenuationRadiusSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkLightStaticData), &Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsAttenuationRadiusSupported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAttenuationRadiusSupported_MetaData), NewProp_bIsAttenuationRadiusSupported_MetaData) };
void Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSourceLenghtSupported_SetBit(void* Obj)
{
	((FLiveLinkLightStaticData*)Obj)->bIsSourceLenghtSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSourceLenghtSupported = { "bIsSourceLenghtSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkLightStaticData), &Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSourceLenghtSupported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSourceLenghtSupported_MetaData), NewProp_bIsSourceLenghtSupported_MetaData) };
void Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSourceRadiusSupported_SetBit(void* Obj)
{
	((FLiveLinkLightStaticData*)Obj)->bIsSourceRadiusSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSourceRadiusSupported = { "bIsSourceRadiusSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkLightStaticData), &Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSourceRadiusSupported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSourceRadiusSupported_MetaData), NewProp_bIsSourceRadiusSupported_MetaData) };
void Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSoftSourceRadiusSupported_SetBit(void* Obj)
{
	((FLiveLinkLightStaticData*)Obj)->bIsSoftSourceRadiusSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSoftSourceRadiusSupported = { "bIsSoftSourceRadiusSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkLightStaticData), &Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSoftSourceRadiusSupported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSoftSourceRadiusSupported_MetaData), NewProp_bIsSoftSourceRadiusSupported_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsTemperatureSupported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsIntensitySupported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsLightColorSupported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsInnerConeAngleSupported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsOuterConeAngleSupported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsAttenuationRadiusSupported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSourceLenghtSupported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSourceRadiusSupported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSoftSourceRadiusSupported,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	Z_Construct_UScriptStruct_FLiveLinkTransformStaticData,
	&NewStructOps,
	"LiveLinkLightStaticData",
	Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::PropPointers),
	sizeof(FLiveLinkLightStaticData),
	alignof(FLiveLinkLightStaticData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkLightStaticData()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkLightStaticData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkLightStaticData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkLightStaticData.InnerSingleton;
}
// End ScriptStruct FLiveLinkLightStaticData

// Begin ScriptStruct FLiveLinkLightFrameData
static_assert(std::is_polymorphic<FLiveLinkLightFrameData>() == std::is_polymorphic<FLiveLinkTransformFrameData>(), "USTRUCT FLiveLinkLightFrameData cannot be polymorphic unless super FLiveLinkTransformFrameData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkLightFrameData;
class UScriptStruct* FLiveLinkLightFrameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkLightFrameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkLightFrameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkLightFrameData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkLightFrameData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkLightFrameData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkLightFrameData>()
{
	return FLiveLinkLightFrameData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Dynamic data for light. \n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Dynamic data for light." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Color temperature in Kelvin of the blackbody illuminant\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Color temperature in Kelvin of the blackbody illuminant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Total energy that the light emits in lux.  \n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Total energy that the light emits in lux." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Filter color of the light.\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Filter color of the light." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerConeAngle_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Inner cone angle in degrees for a Spotlight.\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Inner cone angle in degrees for a Spotlight." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterConeAngle_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Outer cone angle in degrees for a Spotlight.\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Outer cone angle in degrees for a Spotlight." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationRadius_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Light visible influence. Works for Pointlight and Spotlight.\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Light visible influence. Works for Pointlight and Spotlight." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceRadius_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Radius of light source shape. Works for Pointlight and Spotlight.\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Radius of light source shape. Works for Pointlight and Spotlight." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftSourceRadius_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Soft radius of light source shape. Works for Pointlight and Spotlight.\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Soft radius of light source shape. Works for Pointlight and Spotlight." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceLength_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Length of light source shape. Works for Pointlight and Spotlight.\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Length of light source shape. Works for Pointlight and Spotlight." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerConeAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterConeAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttenuationRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SoftSourceRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkLightFrameData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkLightFrameData, Temperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Temperature_MetaData), NewProp_Temperature_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkLightFrameData, Intensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intensity_MetaData), NewProp_Intensity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkLightFrameData, LightColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightColor_MetaData), NewProp_LightColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_InnerConeAngle = { "InnerConeAngle", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkLightFrameData, InnerConeAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerConeAngle_MetaData), NewProp_InnerConeAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_OuterConeAngle = { "OuterConeAngle", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkLightFrameData, OuterConeAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterConeAngle_MetaData), NewProp_OuterConeAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_AttenuationRadius = { "AttenuationRadius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkLightFrameData, AttenuationRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationRadius_MetaData), NewProp_AttenuationRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_SourceRadius = { "SourceRadius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkLightFrameData, SourceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceRadius_MetaData), NewProp_SourceRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_SoftSourceRadius = { "SoftSourceRadius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkLightFrameData, SoftSourceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftSourceRadius_MetaData), NewProp_SoftSourceRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_SourceLength = { "SourceLength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkLightFrameData, SourceLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceLength_MetaData), NewProp_SourceLength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_Temperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_Intensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_LightColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_InnerConeAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_OuterConeAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_AttenuationRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_SourceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_SoftSourceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_SourceLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	Z_Construct_UScriptStruct_FLiveLinkTransformFrameData,
	&NewStructOps,
	"LiveLinkLightFrameData",
	Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::PropPointers),
	sizeof(FLiveLinkLightFrameData),
	alignof(FLiveLinkLightFrameData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkLightFrameData()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkLightFrameData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkLightFrameData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkLightFrameData.InnerSingleton;
}
// End ScriptStruct FLiveLinkLightFrameData

// Begin ScriptStruct FLiveLinkLightBlueprintData
static_assert(std::is_polymorphic<FLiveLinkLightBlueprintData>() == std::is_polymorphic<FLiveLinkBaseBlueprintData>(), "USTRUCT FLiveLinkLightBlueprintData cannot be polymorphic unless super FLiveLinkBaseBlueprintData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkLightBlueprintData;
class UScriptStruct* FLiveLinkLightBlueprintData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkLightBlueprintData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkLightBlueprintData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkLightBlueprintData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkLightBlueprintData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkLightBlueprintData>()
{
	return FLiveLinkLightBlueprintData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Facility structure to handle light data in blueprint\n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Facility structure to handle light data in blueprint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticData_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Static data that should not change every frame\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Static data that should not change every frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameData_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Dynamic data that can change every frame\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Dynamic data that can change every frame" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkLightBlueprintData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::NewProp_StaticData = { "StaticData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkLightBlueprintData, StaticData), Z_Construct_UScriptStruct_FLiveLinkLightStaticData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticData_MetaData), NewProp_StaticData_MetaData) }; // 3380629320
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkLightBlueprintData, FrameData), Z_Construct_UScriptStruct_FLiveLinkLightFrameData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameData_MetaData), NewProp_FrameData_MetaData) }; // 51364901
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::NewProp_StaticData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::NewProp_FrameData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData,
	&NewStructOps,
	"LiveLinkLightBlueprintData",
	Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::PropPointers),
	sizeof(FLiveLinkLightBlueprintData),
	alignof(FLiveLinkLightBlueprintData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkLightBlueprintData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkLightBlueprintData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkLightBlueprintData.InnerSingleton;
}
// End ScriptStruct FLiveLinkLightBlueprintData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLightTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLiveLinkLightStaticData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewStructOps, TEXT("LiveLinkLightStaticData"), &Z_Registration_Info_UScriptStruct_LiveLinkLightStaticData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkLightStaticData), 3380629320U) },
		{ FLiveLinkLightFrameData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewStructOps, TEXT("LiveLinkLightFrameData"), &Z_Registration_Info_UScriptStruct_LiveLinkLightFrameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkLightFrameData), 51364901U) },
		{ FLiveLinkLightBlueprintData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::NewStructOps, TEXT("LiveLinkLightBlueprintData"), &Z_Registration_Info_UScriptStruct_LiveLinkLightBlueprintData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkLightBlueprintData), 1035344742U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLightTypes_h_2894891560(TEXT("/Script/LiveLinkInterface"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLightTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLightTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
