// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Slate/Public/Framework/Application/SlateApplication.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateApplication() {}

// Begin Cross Module References
SLATE_API UEnum* Z_Construct_UEnum_Slate_EInputPreProcessorType();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputPreprocessorRegistrationKey();
UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References

// Begin Enum EInputPreProcessorType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputPreProcessorType;
static UEnum* EInputPreProcessorType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInputPreProcessorType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInputPreProcessorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Slate_EInputPreProcessorType, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("EInputPreProcessorType"));
	}
	return Z_Registration_Info_UEnum_EInputPreProcessorType.OuterSingleton;
}
template<> SLATE_API UEnum* StaticEnum<EInputPreProcessorType>()
{
	return EInputPreProcessorType_StaticEnum();
}
struct Z_Construct_UEnum_Slate_EInputPreProcessorType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Priority bucket type for Input Pre-Processors. They will be evaluated in ascending order and may block input from later buckets. */" },
		{ "Count.Comment", "/** Current total number of types. Not to be used by processors, only for storage purposes */" },
		{ "Count.Name", "EInputPreProcessorType::Count" },
		{ "Count.ToolTip", "Current total number of types. Not to be used by processors, only for storage purposes" },
		{ "Editor.Comment", "/** Editor - related input events, can be used as a middle point between Engine and Game */" },
		{ "Editor.Name", "EInputPreProcessorType::Editor" },
		{ "Editor.ToolTip", "Editor - related input events, can be used as a middle point between Engine and Game" },
		{ "Engine.Comment", "/** Engine-related input events */" },
		{ "Engine.Name", "EInputPreProcessorType::Engine" },
		{ "Engine.ToolTip", "Engine-related input events" },
		{ "Game.Comment", "/** Game-related input events. This is the default and lowest priority */" },
		{ "Game.Name", "EInputPreProcessorType::Game" },
		{ "Game.ToolTip", "Game-related input events. This is the default and lowest priority" },
		{ "ModuleRelativePath", "Public/Framework/Application/SlateApplication.h" },
		{ "Overlay.Comment", "/** Input from platform overlay events */" },
		{ "Overlay.Name", "EInputPreProcessorType::Overlay" },
		{ "Overlay.ToolTip", "Input from platform overlay events" },
		{ "PreEditor.Comment", "/** Higher priority editor-related input events, can be used as a middle point between Engine and Game */" },
		{ "PreEditor.Name", "EInputPreProcessorType::PreEditor" },
		{ "PreEditor.ToolTip", "Higher priority editor-related input events, can be used as a middle point between Engine and Game" },
		{ "PreEngine.Comment", "/** Higher priority engine-related input events */" },
		{ "PreEngine.Name", "EInputPreProcessorType::PreEngine" },
		{ "PreEngine.ToolTip", "Higher priority engine-related input events" },
		{ "PreGame.Comment", "/** Higher priority game-related input events */" },
		{ "PreGame.Name", "EInputPreProcessorType::PreGame" },
		{ "PreGame.ToolTip", "Higher priority game-related input events" },
		{ "ToolTip", "Priority bucket type for Input Pre-Processors. They will be evaluated in ascending order and may block input from later buckets." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInputPreProcessorType::Overlay", (int64)EInputPreProcessorType::Overlay },
		{ "EInputPreProcessorType::PreEngine", (int64)EInputPreProcessorType::PreEngine },
		{ "EInputPreProcessorType::Engine", (int64)EInputPreProcessorType::Engine },
		{ "EInputPreProcessorType::PreEditor", (int64)EInputPreProcessorType::PreEditor },
		{ "EInputPreProcessorType::Editor", (int64)EInputPreProcessorType::Editor },
		{ "EInputPreProcessorType::PreGame", (int64)EInputPreProcessorType::PreGame },
		{ "EInputPreProcessorType::Game", (int64)EInputPreProcessorType::Game },
		{ "EInputPreProcessorType::Count", (int64)EInputPreProcessorType::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Slate_EInputPreProcessorType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Slate,
	nullptr,
	"EInputPreProcessorType",
	"EInputPreProcessorType",
	Z_Construct_UEnum_Slate_EInputPreProcessorType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EInputPreProcessorType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EInputPreProcessorType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Slate_EInputPreProcessorType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Slate_EInputPreProcessorType()
{
	if (!Z_Registration_Info_UEnum_EInputPreProcessorType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputPreProcessorType.InnerSingleton, Z_Construct_UEnum_Slate_EInputPreProcessorType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInputPreProcessorType.InnerSingleton;
}
// End Enum EInputPreProcessorType

// Begin ScriptStruct FInputPreprocessorRegistrationKey
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputPreprocessorRegistrationKey;
class UScriptStruct* FInputPreprocessorRegistrationKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputPreprocessorRegistrationKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputPreprocessorRegistrationKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputPreprocessorRegistrationKey, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("InputPreprocessorRegistrationKey"));
	}
	return Z_Registration_Info_UScriptStruct_InputPreprocessorRegistrationKey.OuterSingleton;
}
template<> SLATE_API UScriptStruct* StaticStruct<FInputPreprocessorRegistrationKey>()
{
	return FInputPreprocessorRegistrationKey::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputPreprocessorRegistrationKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Framework/Application/SlateApplication.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/Application/SlateApplication.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/Application/SlateApplication.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputPreprocessorRegistrationKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInputPreprocessorRegistrationKey_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInputPreprocessorRegistrationKey_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputPreprocessorRegistrationKey, Type), Z_Construct_UEnum_Slate_EInputPreProcessorType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 4200537770
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInputPreprocessorRegistrationKey_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputPreprocessorRegistrationKey, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputPreprocessorRegistrationKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputPreprocessorRegistrationKey_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputPreprocessorRegistrationKey_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputPreprocessorRegistrationKey_Statics::NewProp_Priority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputPreprocessorRegistrationKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputPreprocessorRegistrationKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	nullptr,
	&NewStructOps,
	"InputPreprocessorRegistrationKey",
	Z_Construct_UScriptStruct_FInputPreprocessorRegistrationKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputPreprocessorRegistrationKey_Statics::PropPointers),
	sizeof(FInputPreprocessorRegistrationKey),
	alignof(FInputPreprocessorRegistrationKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputPreprocessorRegistrationKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputPreprocessorRegistrationKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputPreprocessorRegistrationKey()
{
	if (!Z_Registration_Info_UScriptStruct_InputPreprocessorRegistrationKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputPreprocessorRegistrationKey.InnerSingleton, Z_Construct_UScriptStruct_FInputPreprocessorRegistrationKey_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputPreprocessorRegistrationKey.InnerSingleton;
}
// End ScriptStruct FInputPreprocessorRegistrationKey

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Application_SlateApplication_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInputPreProcessorType_StaticEnum, TEXT("EInputPreProcessorType"), &Z_Registration_Info_UEnum_EInputPreProcessorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4200537770U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInputPreprocessorRegistrationKey::StaticStruct, Z_Construct_UScriptStruct_FInputPreprocessorRegistrationKey_Statics::NewStructOps, TEXT("InputPreprocessorRegistrationKey"), &Z_Registration_Info_UScriptStruct_InputPreprocessorRegistrationKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputPreprocessorRegistrationKey), 3427159332U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Application_SlateApplication_h_638800821(TEXT("/Script/Slate"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Application_SlateApplication_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Application_SlateApplication_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Application_SlateApplication_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Application_SlateApplication_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
