// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkInterface/Public/Roles/LiveLinkInputDeviceTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkInputDeviceTypes() {}

// Begin Cross Module References
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseFrameData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseStaticData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData();
UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References

// Begin ScriptStruct FLiveLinkGamepadInputDeviceStaticData
static_assert(std::is_polymorphic<FLiveLinkGamepadInputDeviceStaticData>() == std::is_polymorphic<FLiveLinkBaseStaticData>(), "USTRUCT FLiveLinkGamepadInputDeviceStaticData cannot be polymorphic unless super FLiveLinkBaseStaticData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkGamepadInputDeviceStaticData;
class UScriptStruct* FLiveLinkGamepadInputDeviceStaticData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkGamepadInputDeviceStaticData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkGamepadInputDeviceStaticData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkGamepadInputDeviceStaticData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkGamepadInputDeviceStaticData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkGamepadInputDeviceStaticData>()
{
	return FLiveLinkGamepadInputDeviceStaticData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Struct for static Gamepad Input Device data\n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
		{ "ToolTip", "Struct for static Gamepad Input Device data" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkGamepadInputDeviceStaticData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	Z_Construct_UScriptStruct_FLiveLinkBaseStaticData,
	&NewStructOps,
	"LiveLinkGamepadInputDeviceStaticData",
	nullptr,
	0,
	sizeof(FLiveLinkGamepadInputDeviceStaticData),
	alignof(FLiveLinkGamepadInputDeviceStaticData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkGamepadInputDeviceStaticData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkGamepadInputDeviceStaticData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkGamepadInputDeviceStaticData.InnerSingleton;
}
// End ScriptStruct FLiveLinkGamepadInputDeviceStaticData

// Begin ScriptStruct FLiveLinkGamepadInputDeviceFrameData
static_assert(std::is_polymorphic<FLiveLinkGamepadInputDeviceFrameData>() == std::is_polymorphic<FLiveLinkBaseFrameData>(), "USTRUCT FLiveLinkGamepadInputDeviceFrameData cannot be polymorphic unless super FLiveLinkBaseFrameData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkGamepadInputDeviceFrameData;
class UScriptStruct* FLiveLinkGamepadInputDeviceFrameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkGamepadInputDeviceFrameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkGamepadInputDeviceFrameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkGamepadInputDeviceFrameData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkGamepadInputDeviceFrameData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkGamepadInputDeviceFrameData>()
{
	return FLiveLinkGamepadInputDeviceFrameData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Struct for dynamic (per-frame) Gampead Input Device data\n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
		{ "ToolTip", "Struct for dynamic (per-frame) Gampead Input Device data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftAnalogX_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftAnalogY_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightAnalogX_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightAnalogY_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftTriggerAnalog_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightTriggerAnalog_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftThumb_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightThumb_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecialLeft_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecialLeft_X_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecialLeft_Y_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecialRight_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceButtonBottom_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceButtonRight_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceButtonLeft_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceButtonTop_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftShoulder_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightShoulder_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftTriggerThreshold_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightTriggerThreshold_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DPadUp_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DPadDown_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DPadRight_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DPadLeft_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftStickUp_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftStickDown_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftStickRight_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftStickLeft_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightStickUp_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightStickDown_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightStickRight_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightStickLeft_MetaData[] = {
		{ "Category", "Gamepad Input Device" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftAnalogX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftAnalogY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightAnalogX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightAnalogY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftTriggerAnalog;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightTriggerAnalog;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftThumb;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightThumb;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpecialLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpecialLeft_X;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpecialLeft_Y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpecialRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FaceButtonBottom;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FaceButtonRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FaceButtonLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FaceButtonTop;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftShoulder;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightShoulder;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftTriggerThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightTriggerThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DPadUp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DPadDown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DPadRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DPadLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftStickUp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftStickDown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftStickRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftStickLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightStickUp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightStickDown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightStickRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightStickLeft;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkGamepadInputDeviceFrameData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_LeftAnalogX = { "LeftAnalogX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, LeftAnalogX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftAnalogX_MetaData), NewProp_LeftAnalogX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_LeftAnalogY = { "LeftAnalogY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, LeftAnalogY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftAnalogY_MetaData), NewProp_LeftAnalogY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_RightAnalogX = { "RightAnalogX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, RightAnalogX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightAnalogX_MetaData), NewProp_RightAnalogX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_RightAnalogY = { "RightAnalogY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, RightAnalogY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightAnalogY_MetaData), NewProp_RightAnalogY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_LeftTriggerAnalog = { "LeftTriggerAnalog", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, LeftTriggerAnalog), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftTriggerAnalog_MetaData), NewProp_LeftTriggerAnalog_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_RightTriggerAnalog = { "RightTriggerAnalog", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, RightTriggerAnalog), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightTriggerAnalog_MetaData), NewProp_RightTriggerAnalog_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_LeftThumb = { "LeftThumb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, LeftThumb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftThumb_MetaData), NewProp_LeftThumb_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_RightThumb = { "RightThumb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, RightThumb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightThumb_MetaData), NewProp_RightThumb_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_SpecialLeft = { "SpecialLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, SpecialLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecialLeft_MetaData), NewProp_SpecialLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_SpecialLeft_X = { "SpecialLeft_X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, SpecialLeft_X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecialLeft_X_MetaData), NewProp_SpecialLeft_X_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_SpecialLeft_Y = { "SpecialLeft_Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, SpecialLeft_Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecialLeft_Y_MetaData), NewProp_SpecialLeft_Y_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_SpecialRight = { "SpecialRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, SpecialRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecialRight_MetaData), NewProp_SpecialRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_FaceButtonBottom = { "FaceButtonBottom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, FaceButtonBottom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceButtonBottom_MetaData), NewProp_FaceButtonBottom_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_FaceButtonRight = { "FaceButtonRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, FaceButtonRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceButtonRight_MetaData), NewProp_FaceButtonRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_FaceButtonLeft = { "FaceButtonLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, FaceButtonLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceButtonLeft_MetaData), NewProp_FaceButtonLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_FaceButtonTop = { "FaceButtonTop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, FaceButtonTop), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceButtonTop_MetaData), NewProp_FaceButtonTop_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_LeftShoulder = { "LeftShoulder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, LeftShoulder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftShoulder_MetaData), NewProp_LeftShoulder_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_RightShoulder = { "RightShoulder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, RightShoulder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightShoulder_MetaData), NewProp_RightShoulder_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_LeftTriggerThreshold = { "LeftTriggerThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, LeftTriggerThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftTriggerThreshold_MetaData), NewProp_LeftTriggerThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_RightTriggerThreshold = { "RightTriggerThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, RightTriggerThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightTriggerThreshold_MetaData), NewProp_RightTriggerThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_DPadUp = { "DPadUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, DPadUp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DPadUp_MetaData), NewProp_DPadUp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_DPadDown = { "DPadDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, DPadDown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DPadDown_MetaData), NewProp_DPadDown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_DPadRight = { "DPadRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, DPadRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DPadRight_MetaData), NewProp_DPadRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_DPadLeft = { "DPadLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, DPadLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DPadLeft_MetaData), NewProp_DPadLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_LeftStickUp = { "LeftStickUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, LeftStickUp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftStickUp_MetaData), NewProp_LeftStickUp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_LeftStickDown = { "LeftStickDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, LeftStickDown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftStickDown_MetaData), NewProp_LeftStickDown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_LeftStickRight = { "LeftStickRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, LeftStickRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftStickRight_MetaData), NewProp_LeftStickRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_LeftStickLeft = { "LeftStickLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, LeftStickLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftStickLeft_MetaData), NewProp_LeftStickLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_RightStickUp = { "RightStickUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, RightStickUp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightStickUp_MetaData), NewProp_RightStickUp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_RightStickDown = { "RightStickDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, RightStickDown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightStickDown_MetaData), NewProp_RightStickDown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_RightStickRight = { "RightStickRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, RightStickRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightStickRight_MetaData), NewProp_RightStickRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_RightStickLeft = { "RightStickLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceFrameData, RightStickLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightStickLeft_MetaData), NewProp_RightStickLeft_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_LeftAnalogX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_LeftAnalogY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_RightAnalogX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_RightAnalogY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_LeftTriggerAnalog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_RightTriggerAnalog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_LeftThumb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_RightThumb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_SpecialLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_SpecialLeft_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_SpecialLeft_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_SpecialRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_FaceButtonBottom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_FaceButtonRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_FaceButtonLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_FaceButtonTop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_LeftShoulder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_RightShoulder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_LeftTriggerThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_RightTriggerThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_DPadUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_DPadDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_DPadRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_DPadLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_LeftStickUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_LeftStickDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_LeftStickRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_LeftStickLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_RightStickUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_RightStickDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_RightStickRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewProp_RightStickLeft,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	Z_Construct_UScriptStruct_FLiveLinkBaseFrameData,
	&NewStructOps,
	"LiveLinkGamepadInputDeviceFrameData",
	Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::PropPointers),
	sizeof(FLiveLinkGamepadInputDeviceFrameData),
	alignof(FLiveLinkGamepadInputDeviceFrameData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkGamepadInputDeviceFrameData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkGamepadInputDeviceFrameData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkGamepadInputDeviceFrameData.InnerSingleton;
}
// End ScriptStruct FLiveLinkGamepadInputDeviceFrameData

// Begin ScriptStruct FLiveLinkGamepadInputDeviceBlueprintData
static_assert(std::is_polymorphic<FLiveLinkGamepadInputDeviceBlueprintData>() == std::is_polymorphic<FLiveLinkBaseBlueprintData>(), "USTRUCT FLiveLinkGamepadInputDeviceBlueprintData cannot be polymorphic unless super FLiveLinkBaseBlueprintData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkGamepadInputDeviceBlueprintData;
class UScriptStruct* FLiveLinkGamepadInputDeviceBlueprintData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkGamepadInputDeviceBlueprintData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkGamepadInputDeviceBlueprintData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkGamepadInputDeviceBlueprintData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkGamepadInputDeviceBlueprintData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkGamepadInputDeviceBlueprintData>()
{
	return FLiveLinkGamepadInputDeviceBlueprintData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Facility structure to handle Preston MDR data in blueprint\n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
		{ "ToolTip", "Facility structure to handle Preston MDR data in blueprint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticData_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Static data that should not change every frame */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
		{ "ToolTip", "Static data that should not change every frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameData_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Dynamic data that can change every frame  */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkInputDeviceTypes.h" },
		{ "ToolTip", "Dynamic data that can change every frame" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkGamepadInputDeviceBlueprintData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData_Statics::NewProp_StaticData = { "StaticData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceBlueprintData, StaticData), Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticData_MetaData), NewProp_StaticData_MetaData) }; // 2238817332
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkGamepadInputDeviceBlueprintData, FrameData), Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameData_MetaData), NewProp_FrameData_MetaData) }; // 1143793263
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData_Statics::NewProp_StaticData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData_Statics::NewProp_FrameData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData,
	&NewStructOps,
	"LiveLinkGamepadInputDeviceBlueprintData",
	Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData_Statics::PropPointers),
	sizeof(FLiveLinkGamepadInputDeviceBlueprintData),
	alignof(FLiveLinkGamepadInputDeviceBlueprintData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkGamepadInputDeviceBlueprintData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkGamepadInputDeviceBlueprintData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkGamepadInputDeviceBlueprintData.InnerSingleton;
}
// End ScriptStruct FLiveLinkGamepadInputDeviceBlueprintData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLiveLinkGamepadInputDeviceStaticData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData_Statics::NewStructOps, TEXT("LiveLinkGamepadInputDeviceStaticData"), &Z_Registration_Info_UScriptStruct_LiveLinkGamepadInputDeviceStaticData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkGamepadInputDeviceStaticData), 2238817332U) },
		{ FLiveLinkGamepadInputDeviceFrameData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewStructOps, TEXT("LiveLinkGamepadInputDeviceFrameData"), &Z_Registration_Info_UScriptStruct_LiveLinkGamepadInputDeviceFrameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkGamepadInputDeviceFrameData), 1143793263U) },
		{ FLiveLinkGamepadInputDeviceBlueprintData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData_Statics::NewStructOps, TEXT("LiveLinkGamepadInputDeviceBlueprintData"), &Z_Registration_Info_UScriptStruct_LiveLinkGamepadInputDeviceBlueprintData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkGamepadInputDeviceBlueprintData), 2882947184U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceTypes_h_2859957502(TEXT("/Script/LiveLinkInterface"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
