// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MediaAssets/Public/MediaSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaSource() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References

// Begin Class UMediaSource Function GetUrl
struct Z_Construct_UFunction_UMediaSource_GetUrl_Statics
{
	struct MediaSource_eventGetUrl_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSource" },
		{ "Comment", "/**\n\x09 * Get the media source's URL string (must be implemented in child classes).\n\x09 *\n\x09 * @return The media URL.\n\x09 * @see GetProxies\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Get the media source's URL string (must be implemented in child classes).\n\n@return The media URL.\n@see GetProxies" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMediaSource_GetUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaSource_eventGetUrl_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSource_GetUrl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_GetUrl_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_GetUrl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSource_GetUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSource, nullptr, "GetUrl", nullptr, nullptr, Z_Construct_UFunction_UMediaSource_GetUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_GetUrl_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaSource_GetUrl_Statics::MediaSource_eventGetUrl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_GetUrl_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaSource_GetUrl_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaSource_GetUrl_Statics::MediaSource_eventGetUrl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaSource_GetUrl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaSource_GetUrl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaSource::execGetUrl)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetUrl();
	P_NATIVE_END;
}
// End Class UMediaSource Function GetUrl

// Begin Class UMediaSource Function SetMediaOptionBool
struct Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics
{
	struct MediaSource_eventSetMediaOptionBool_Parms
	{
		FName Key;
		bool Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSource" },
		{ "Comment", "/** Set a boolean parameter to pass to the player. */" },
		{ "DisplayName", "SetMediaOption (boolean)" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Set a boolean parameter to pass to the player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaSource_eventSetMediaOptionBool_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
void Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::NewProp_Value_SetBit(void* Obj)
{
	((MediaSource_eventSetMediaOptionBool_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaSource_eventSetMediaOptionBool_Parms), &Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSource, nullptr, "SetMediaOptionBool", nullptr, nullptr, Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::MediaSource_eventSetMediaOptionBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::MediaSource_eventSetMediaOptionBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaSource_SetMediaOptionBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaSource::execSetMediaOptionBool)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Key);
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMediaOptionBool(Z_Param_Out_Key,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMediaSource Function SetMediaOptionBool

// Begin Class UMediaSource Function SetMediaOptionFloat
struct Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics
{
	struct MediaSource_eventSetMediaOptionFloat_Parms
	{
		FName Key;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSource" },
		{ "Comment", "/** Set a float parameter to pass to the player. */" },
		{ "DisplayName", "SetMediaOption (float)" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Set a float parameter to pass to the player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaSource_eventSetMediaOptionFloat_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaSource_eventSetMediaOptionFloat_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSource, nullptr, "SetMediaOptionFloat", nullptr, nullptr, Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::MediaSource_eventSetMediaOptionFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::MediaSource_eventSetMediaOptionFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaSource::execSetMediaOptionFloat)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Key);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMediaOptionFloat(Z_Param_Out_Key,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMediaSource Function SetMediaOptionFloat

// Begin Class UMediaSource Function SetMediaOptionInt64
struct Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics
{
	struct MediaSource_eventSetMediaOptionInt64_Parms
	{
		FName Key;
		int64 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSource" },
		{ "Comment", "/** Set an integer64 parameter to pass to the player. */" },
		{ "DisplayName", "SetMediaOption (integer64)" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Set an integer64 parameter to pass to the player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaSource_eventSetMediaOptionInt64_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaSource_eventSetMediaOptionInt64_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSource, nullptr, "SetMediaOptionInt64", nullptr, nullptr, Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::MediaSource_eventSetMediaOptionInt64_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::MediaSource_eventSetMediaOptionInt64_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaSource::execSetMediaOptionInt64)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Key);
	P_GET_PROPERTY(FInt64Property,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMediaOptionInt64(Z_Param_Out_Key,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMediaSource Function SetMediaOptionInt64

// Begin Class UMediaSource Function SetMediaOptionString
struct Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics
{
	struct MediaSource_eventSetMediaOptionString_Parms
	{
		FName Key;
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSource" },
		{ "Comment", "/** Set a string parameter to pass to the player. */" },
		{ "DisplayName", "SetMediaOption (string)" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Set a string parameter to pass to the player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaSource_eventSetMediaOptionString_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaSource_eventSetMediaOptionString_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSource, nullptr, "SetMediaOptionString", nullptr, nullptr, Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::MediaSource_eventSetMediaOptionString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::MediaSource_eventSetMediaOptionString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaSource_SetMediaOptionString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaSource::execSetMediaOptionString)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMediaOptionString(Z_Param_Out_Key,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMediaSource Function SetMediaOptionString

// Begin Class UMediaSource Function Validate
struct Z_Construct_UFunction_UMediaSource_Validate_Statics
{
	struct MediaSource_eventValidate_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSource" },
		{ "Comment", "/**\n\x09 * Validate the media source settings (must be implemented in child classes).\n\x09 *\n\x09 * @return true if validation passed, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Validate the media source settings (must be implemented in child classes).\n\n@return true if validation passed, false otherwise." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaSource_Validate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaSource_eventValidate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaSource_Validate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaSource_eventValidate_Parms), &Z_Construct_UFunction_UMediaSource_Validate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSource_Validate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_Validate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_Validate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSource_Validate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSource, nullptr, "Validate", nullptr, nullptr, Z_Construct_UFunction_UMediaSource_Validate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_Validate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaSource_Validate_Statics::MediaSource_eventValidate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_Validate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaSource_Validate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaSource_Validate_Statics::MediaSource_eventValidate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaSource_Validate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaSource_Validate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaSource::execValidate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Validate();
	P_NATIVE_END;
}
// End Class UMediaSource Function Validate

// Begin Class UMediaSource
void UMediaSource::StaticRegisterNativesUMediaSource()
{
	UClass* Class = UMediaSource::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetUrl", &UMediaSource::execGetUrl },
		{ "SetMediaOptionBool", &UMediaSource::execSetMediaOptionBool },
		{ "SetMediaOptionFloat", &UMediaSource::execSetMediaOptionFloat },
		{ "SetMediaOptionInt64", &UMediaSource::execSetMediaOptionInt64 },
		{ "SetMediaOptionString", &UMediaSource::execSetMediaOptionString },
		{ "Validate", &UMediaSource::execValidate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaSource);
UClass* Z_Construct_UClass_UMediaSource_NoRegister()
{
	return UMediaSource::StaticClass();
}
struct Z_Construct_UClass_UMediaSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Abstract base class for media sources.\n *\n * Media sources describe the location and/or settings of media objects that can\n * be played in a media player, such as a video file on disk, a video stream on\n * the internet, or a web cam attached to or built into the target device. The\n * location is encoded as a media URL string, whose URI scheme and optional file\n * extension will be used to locate a suitable media player.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MediaSource.h" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Abstract base class for media sources.\n\nMedia sources describe the location and/or settings of media objects that can\nbe played in a media player, such as a video file on disk, a video stream on\nthe internet, or a web cam attached to or built into the target device. The\nlocation is encoded as a media URL string, whose URI scheme and optional file\nextension will be used to locate a suitable media player." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailImage_MetaData[] = {
		{ "Comment", "/** The thumbnail image.*/" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "The thumbnail image." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaSourceRenderer_MetaData[] = {
		{ "Comment", "/** Renders thumnbnails for us. */" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Renders thumnbnails for us." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThumbnailImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaSourceRenderer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaSource_GetUrl, "GetUrl" }, // 1630378750
		{ &Z_Construct_UFunction_UMediaSource_SetMediaOptionBool, "SetMediaOptionBool" }, // 3802170423
		{ &Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat, "SetMediaOptionFloat" }, // 1324912445
		{ &Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64, "SetMediaOptionInt64" }, // 2674407752
		{ &Z_Construct_UFunction_UMediaSource_SetMediaOptionString, "SetMediaOptionString" }, // 1909253525
		{ &Z_Construct_UFunction_UMediaSource_Validate, "Validate" }, // 3987350880
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMediaSource_Statics::NewProp_ThumbnailImage = { "ThumbnailImage", nullptr, (EPropertyFlags)0x0144000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaSource, ThumbnailImage), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbnailImage_MetaData), NewProp_ThumbnailImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMediaSource_Statics::NewProp_MediaSourceRenderer = { "MediaSourceRenderer", nullptr, (EPropertyFlags)0x0144000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaSource, MediaSourceRenderer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaSourceRenderer_MetaData), NewProp_MediaSourceRenderer_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaSource_Statics::NewProp_ThumbnailImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaSource_Statics::NewProp_MediaSourceRenderer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSource_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UMediaSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaSource_Statics::ClassParams = {
	&UMediaSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UMediaSource_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSource_Statics::PropPointers), 0),
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UMediaSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMediaSource()
{
	if (!Z_Registration_Info_UClass_UMediaSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaSource.OuterSingleton, Z_Construct_UClass_UMediaSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMediaSource.OuterSingleton;
}
template<> MEDIAASSETS_API UClass* StaticClass<UMediaSource>()
{
	return UMediaSource::StaticClass();
}
UMediaSource::UMediaSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaSource);
UMediaSource::~UMediaSource() {}
// End Class UMediaSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMediaSource, UMediaSource::StaticClass, TEXT("UMediaSource"), &Z_Registration_Info_UClass_UMediaSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaSource), 2769906018U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_1151908966(TEXT("/Script/MediaAssets"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
