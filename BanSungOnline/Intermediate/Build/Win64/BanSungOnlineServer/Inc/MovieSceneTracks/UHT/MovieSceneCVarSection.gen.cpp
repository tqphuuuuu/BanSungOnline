// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneCVarSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCVarSection() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCVarSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCVarSection_NoRegister();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneConsoleVariableCollection();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCVarOverrides();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin ScriptStruct FMovieSceneConsoleVariableCollection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneConsoleVariableCollection;
class UScriptStruct* FMovieSceneConsoleVariableCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneConsoleVariableCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneConsoleVariableCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneConsoleVariableCollection, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneConsoleVariableCollection"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneConsoleVariableCollection.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneConsoleVariableCollection>()
{
	return FMovieSceneConsoleVariableCollection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneConsoleVariableCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCVarSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interface_MetaData[] = {
		{ "Category", "Collection" },
		{ "Comment", "/** Array of console variable preset assets that this track should operate on */" },
		{ "DisplayName", "Collection Asset" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCVarSection.h" },
		{ "ToolTip", "Array of console variable preset assets that this track should operate on" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyIncludeChecked_MetaData[] = {
		{ "Category", "Collection" },
		{ "Comment", "/** Whether to include checked consolve variables or not */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCVarSection.h" },
		{ "ToolTip", "Whether to include checked consolve variables or not" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Interface;
	static void NewProp_bOnlyIncludeChecked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyIncludeChecked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneConsoleVariableCollection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FMovieSceneConsoleVariableCollection_Statics::NewProp_Interface = { "Interface", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneConsoleVariableCollection, Interface), Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interface_MetaData), NewProp_Interface_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneConsoleVariableCollection_Statics::NewProp_bOnlyIncludeChecked_SetBit(void* Obj)
{
	((FMovieSceneConsoleVariableCollection*)Obj)->bOnlyIncludeChecked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneConsoleVariableCollection_Statics::NewProp_bOnlyIncludeChecked = { "bOnlyIncludeChecked", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneConsoleVariableCollection), &Z_Construct_UScriptStruct_FMovieSceneConsoleVariableCollection_Statics::NewProp_bOnlyIncludeChecked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyIncludeChecked_MetaData), NewProp_bOnlyIncludeChecked_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneConsoleVariableCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneConsoleVariableCollection_Statics::NewProp_Interface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneConsoleVariableCollection_Statics::NewProp_bOnlyIncludeChecked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneConsoleVariableCollection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneConsoleVariableCollection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	&NewStructOps,
	"MovieSceneConsoleVariableCollection",
	Z_Construct_UScriptStruct_FMovieSceneConsoleVariableCollection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneConsoleVariableCollection_Statics::PropPointers),
	sizeof(FMovieSceneConsoleVariableCollection),
	alignof(FMovieSceneConsoleVariableCollection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneConsoleVariableCollection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneConsoleVariableCollection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneConsoleVariableCollection()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneConsoleVariableCollection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneConsoleVariableCollection.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneConsoleVariableCollection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneConsoleVariableCollection.InnerSingleton;
}
// End ScriptStruct FMovieSceneConsoleVariableCollection

// Begin ScriptStruct FMovieSceneCVarOverrides
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneCVarOverrides;
class UScriptStruct* FMovieSceneCVarOverrides::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneCVarOverrides.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneCVarOverrides.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCVarOverrides, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneCVarOverrides"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneCVarOverrides.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneCVarOverrides>()
{
	return FMovieSceneCVarOverrides::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCVarSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValuesByCVar_MetaData[] = {
		{ "Category", "Console Variables" },
		{ "Comment", "/** The name of the console variable and the value, separated by ' ' or '=', ie: \"foo.bar=1\" or \"foo.bar 1\". */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCVarSection.h" },
		{ "ToolTip", "The name of the console variable and the value, separated by ' ' or '=', ie: \"foo.bar=1\" or \"foo.bar 1\"." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValuesByCVar_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValuesByCVar_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ValuesByCVar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCVarOverrides>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::NewProp_ValuesByCVar_ValueProp = { "ValuesByCVar", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::NewProp_ValuesByCVar_Key_KeyProp = { "ValuesByCVar_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::NewProp_ValuesByCVar = { "ValuesByCVar", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneCVarOverrides, ValuesByCVar), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValuesByCVar_MetaData), NewProp_ValuesByCVar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::NewProp_ValuesByCVar_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::NewProp_ValuesByCVar_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::NewProp_ValuesByCVar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	&NewStructOps,
	"MovieSceneCVarOverrides",
	Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::PropPointers),
	sizeof(FMovieSceneCVarOverrides),
	alignof(FMovieSceneCVarOverrides),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCVarOverrides()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneCVarOverrides.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneCVarOverrides.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneCVarOverrides.InnerSingleton;
}
// End ScriptStruct FMovieSceneCVarOverrides

// Begin Class UMovieSceneCVarSection Function GetString
struct Z_Construct_UFunction_UMovieSceneCVarSection_GetString_Statics
{
	struct MovieSceneCVarSection_eventGetString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CVars" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCVarSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneCVarSection_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneCVarSection_eventGetString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCVarSection_GetString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCVarSection_GetString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCVarSection_GetString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCVarSection_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCVarSection, nullptr, "GetString", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneCVarSection_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCVarSection_GetString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneCVarSection_GetString_Statics::MovieSceneCVarSection_eventGetString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCVarSection_GetString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneCVarSection_GetString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneCVarSection_GetString_Statics::MovieSceneCVarSection_eventGetString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneCVarSection_GetString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCVarSection_GetString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneCVarSection::execGetString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetString();
	P_NATIVE_END;
}
// End Class UMovieSceneCVarSection Function GetString

// Begin Class UMovieSceneCVarSection Function SetFromString
struct Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics
{
	struct MovieSceneCVarSection_eventSetFromString_Parms
	{
		FString InString;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CVars" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCVarSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneCVarSection_eventSetFromString_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InString_MetaData), NewProp_InString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics::NewProp_InString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCVarSection, nullptr, "SetFromString", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics::MovieSceneCVarSection_eventSetFromString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics::MovieSceneCVarSection_eventSetFromString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneCVarSection::execSetFromString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFromString(Z_Param_InString);
	P_NATIVE_END;
}
// End Class UMovieSceneCVarSection Function SetFromString

// Begin Class UMovieSceneCVarSection
void UMovieSceneCVarSection::StaticRegisterNativesUMovieSceneCVarSection()
{
	UClass* Class = UMovieSceneCVarSection::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetString", &UMovieSceneCVarSection::execGetString },
		{ "SetFromString", &UMovieSceneCVarSection::execSetFromString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCVarSection);
UClass* Z_Construct_UClass_UMovieSceneCVarSection_NoRegister()
{
	return UMovieSceneCVarSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneCVarSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A CVar section is responsible for applying a user-supplied value to the specified cvar, and then restoring the previous value after the section ends.\n */" },
		{ "IncludePath", "Sections/MovieSceneCVarSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCVarSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A CVar section is responsible for applying a user-supplied value to the specified cvar, and then restoring the previous value after the section ends." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConsoleVariableCollections_MetaData[] = {
		{ "Category", "Console Variable Collections" },
		{ "Comment", "/** Array of console variable preset assets that this track should operate on */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCVarSection.h" },
		{ "ToolTip", "Array of console variable preset assets that this track should operate on" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConsoleVariables_MetaData[] = {
		{ "Category", "Console Variables" },
		{ "Comment", "/** The name of the console variable and the value, separated by ' ' or '=', ie: \"foo.bar=1\" or \"foo.bar 1\". */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCVarSection.h" },
		{ "ToolTip", "The name of the console variable and the value, separated by ' ' or '=', ie: \"foo.bar=1\" or \"foo.bar 1\"." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConsoleVariableCollections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConsoleVariableCollections;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConsoleVariables;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneCVarSection_GetString, "GetString" }, // 2967182071
		{ &Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString, "SetFromString" }, // 2628283819
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCVarSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCVarSection_Statics::NewProp_ConsoleVariableCollections_Inner = { "ConsoleVariableCollections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneConsoleVariableCollection, METADATA_PARAMS(0, nullptr) }; // 2865227723
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneCVarSection_Statics::NewProp_ConsoleVariableCollections = { "ConsoleVariableCollections", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneCVarSection, ConsoleVariableCollections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsoleVariableCollections_MetaData), NewProp_ConsoleVariableCollections_MetaData) }; // 2865227723
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCVarSection_Statics::NewProp_ConsoleVariables = { "ConsoleVariables", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneCVarSection, ConsoleVariables), Z_Construct_UScriptStruct_FMovieSceneCVarOverrides, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsoleVariables_MetaData), NewProp_ConsoleVariables_MetaData) }; // 1666751943
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCVarSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCVarSection_Statics::NewProp_ConsoleVariableCollections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCVarSection_Statics::NewProp_ConsoleVariableCollections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCVarSection_Statics::NewProp_ConsoleVariables,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCVarSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneCVarSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCVarSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneCVarSection_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneCVarSection, IMovieSceneEntityProvider), false },  // 1280352339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCVarSection_Statics::ClassParams = {
	&UMovieSceneCVarSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMovieSceneCVarSection_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCVarSection_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCVarSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneCVarSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneCVarSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneCVarSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCVarSection.OuterSingleton, Z_Construct_UClass_UMovieSceneCVarSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneCVarSection.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCVarSection>()
{
	return UMovieSceneCVarSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCVarSection);
UMovieSceneCVarSection::~UMovieSceneCVarSection() {}
// End Class UMovieSceneCVarSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneConsoleVariableCollection::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneConsoleVariableCollection_Statics::NewStructOps, TEXT("MovieSceneConsoleVariableCollection"), &Z_Registration_Info_UScriptStruct_MovieSceneConsoleVariableCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneConsoleVariableCollection), 2865227723U) },
		{ FMovieSceneCVarOverrides::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::NewStructOps, TEXT("MovieSceneCVarOverrides"), &Z_Registration_Info_UScriptStruct_MovieSceneCVarOverrides, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneCVarOverrides), 1666751943U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCVarSection, UMovieSceneCVarSection::StaticClass, TEXT("UMovieSceneCVarSection"), &Z_Registration_Info_UClass_UMovieSceneCVarSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCVarSection), 1737075885U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_1143172190(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
