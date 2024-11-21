// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Public/StateTreePropertyRef.h"
#include "StateTreeModule/Public/StateTreeIndexTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreePropertyRef() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreePropertyRefType();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeIndex16();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyRef();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin ScriptStruct FStateTreePropertyRef
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertyRef;
class UScriptStruct* FStateTreePropertyRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertyRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyRef, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropertyRef"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyRef.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropertyRef>()
{
	return FStateTreePropertyRef::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreePropertyRef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Property ref allows to get a pointer to selected property in StateTree.\n * The expected type of the reference should be set in \"RefType\" meta specifier.\n *\n * Meta specifiers for the type:\n *  - RefType = \"<type>\"\n *\x09\x09- Specifies a comma separated list of type of property to reference\n *\x09\x09- Supported types are: bool, byte, int32, int64, float, double, Name, String, Text, UObject pointers, and structs\n *\x09\x09- Structs and Objects must use full path name\n *\x09\x09- If multiple types are specified, GetMutablePtrTuple can be used to access the correct type\n *  - IsRefToArray\n *\x09\x09- If specified, the reference is to an TArray<RefType>\n *\x09- CanRefToArray\n *\x09\x09- If specified, the reference can bind to a Reftype or TArray<RefType>\n *  - Optional\n *\x09\x09- If specified, the reference can be left unbound, otherwise the compiler report error if the reference is not bound\n *\n * Example:\n *\n *  // Reference to float\n *\x09UPROPERTY(EditAnywhere, meta = (RefType = \"float\"))\n *\x09""FStateTreePropertyRef RefToFloat;\n *\n *  // Reference to FTestStructBase\n *\x09UPROPERTY(EditAnywhere, meta = (RefType = \"/Script/ModuleName.TestStructBase\"))\n *\x09""FStateTreePropertyRef RefToTest;\n *\n *  // Reference to TArray<FTestStructBase>\n *\x09UPROPERTY(EditAnywhere, meta = (RefType = \"/Script/ModuleName.TestStructBase\", IsRefToArray))\n *\x09""FStateTreePropertyRef RefToArrayOfTests;\n *\n *  // Reference to Vector, TArray<FVector>, AActor*, TArray<AActor*>\n *\x09UPROPERTY(EditAnywhere, meta = (RefType = \"/Script/CoreUObject.Vector, /Script/Engine.Actor\", CanRefToArray))\n *\x09""FStateTreePropertyRef RefToLocationLikeTypes;\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyRef.h" },
		{ "ToolTip", "Property ref allows to get a pointer to selected property in StateTree.\nThe expected type of the reference should be set in \"RefType\" meta specifier.\n\nMeta specifiers for the type:\n - RefType = \"<type>\"\n            - Specifies a comma separated list of type of property to reference\n            - Supported types are: bool, byte, int32, int64, float, double, Name, String, Text, UObject pointers, and structs\n            - Structs and Objects must use full path name\n            - If multiple types are specified, GetMutablePtrTuple can be used to access the correct type\n - IsRefToArray\n            - If specified, the reference is to an TArray<RefType>\n    - CanRefToArray\n            - If specified, the reference can bind to a Reftype or TArray<RefType>\n - Optional\n            - If specified, the reference can be left unbound, otherwise the compiler report error if the reference is not bound\n\nExample:\n\n // Reference to float\n    UPROPERTY(EditAnywhere, meta = (RefType = \"float\"))\n    FStateTreePropertyRef RefToFloat;\n\n // Reference to FTestStructBase\n    UPROPERTY(EditAnywhere, meta = (RefType = \"/Script/ModuleName.TestStructBase\"))\n    FStateTreePropertyRef RefToTest;\n\n // Reference to TArray<FTestStructBase>\n    UPROPERTY(EditAnywhere, meta = (RefType = \"/Script/ModuleName.TestStructBase\", IsRefToArray))\n    FStateTreePropertyRef RefToArrayOfTests;\n\n // Reference to Vector, TArray<FVector>, AActor*, TArray<AActor*>\n    UPROPERTY(EditAnywhere, meta = (RefType = \"/Script/CoreUObject.Vector, /Script/Engine.Actor\", CanRefToArray))\n    FStateTreePropertyRef RefToLocationLikeTypes;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefAccessIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreePropertyRef.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RefAccessIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertyRef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyRef_Statics::NewProp_RefAccessIndex = { "RefAccessIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyRef, RefAccessIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefAccessIndex_MetaData), NewProp_RefAccessIndex_MetaData) }; // 2905844030
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropertyRef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyRef_Statics::NewProp_RefAccessIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyRef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertyRef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreePropertyRef",
	Z_Construct_UScriptStruct_FStateTreePropertyRef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyRef_Statics::PropPointers),
	sizeof(FStateTreePropertyRef),
	alignof(FStateTreePropertyRef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyRef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreePropertyRef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyRef()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyRef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertyRef.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertyRef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyRef.InnerSingleton;
}
// End ScriptStruct FStateTreePropertyRef

// Begin Enum EStateTreePropertyRefType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreePropertyRefType;
static UEnum* EStateTreePropertyRefType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStateTreePropertyRefType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStateTreePropertyRefType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyRefType, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreePropertyRefType"));
	}
	return Z_Registration_Info_UEnum_EStateTreePropertyRefType.OuterSingleton;
}
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreePropertyRefType>()
{
	return EStateTreePropertyRefType_StaticEnum();
}
struct Z_Construct_UEnum_StateTreeModule_EStateTreePropertyRefType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bool.Name", "EStateTreePropertyRefType::Bool" },
		{ "Byte.Name", "EStateTreePropertyRefType::Byte" },
		{ "Class.Name", "EStateTreePropertyRefType::Class" },
		{ "Double.Name", "EStateTreePropertyRefType::Double" },
		{ "Enum.Name", "EStateTreePropertyRefType::Enum" },
		{ "Float.Name", "EStateTreePropertyRefType::Float" },
		{ "Int32.Name", "EStateTreePropertyRefType::Int32" },
		{ "Int64.Name", "EStateTreePropertyRefType::Int64" },
		{ "ModuleRelativePath", "Public/StateTreePropertyRef.h" },
		{ "Name.Name", "EStateTreePropertyRefType::Name" },
		{ "None.Name", "EStateTreePropertyRefType::None" },
		{ "Object.Name", "EStateTreePropertyRefType::Object" },
		{ "SoftClass.Name", "EStateTreePropertyRefType::SoftClass" },
		{ "SoftObject.Name", "EStateTreePropertyRefType::SoftObject" },
		{ "String.Name", "EStateTreePropertyRefType::String" },
		{ "Struct.Name", "EStateTreePropertyRefType::Struct" },
		{ "Text.Name", "EStateTreePropertyRefType::Text" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStateTreePropertyRefType::None", (int64)EStateTreePropertyRefType::None },
		{ "EStateTreePropertyRefType::Bool", (int64)EStateTreePropertyRefType::Bool },
		{ "EStateTreePropertyRefType::Byte", (int64)EStateTreePropertyRefType::Byte },
		{ "EStateTreePropertyRefType::Int32", (int64)EStateTreePropertyRefType::Int32 },
		{ "EStateTreePropertyRefType::Int64", (int64)EStateTreePropertyRefType::Int64 },
		{ "EStateTreePropertyRefType::Float", (int64)EStateTreePropertyRefType::Float },
		{ "EStateTreePropertyRefType::Double", (int64)EStateTreePropertyRefType::Double },
		{ "EStateTreePropertyRefType::Name", (int64)EStateTreePropertyRefType::Name },
		{ "EStateTreePropertyRefType::String", (int64)EStateTreePropertyRefType::String },
		{ "EStateTreePropertyRefType::Text", (int64)EStateTreePropertyRefType::Text },
		{ "EStateTreePropertyRefType::Enum", (int64)EStateTreePropertyRefType::Enum },
		{ "EStateTreePropertyRefType::Struct", (int64)EStateTreePropertyRefType::Struct },
		{ "EStateTreePropertyRefType::Object", (int64)EStateTreePropertyRefType::Object },
		{ "EStateTreePropertyRefType::SoftObject", (int64)EStateTreePropertyRefType::SoftObject },
		{ "EStateTreePropertyRefType::Class", (int64)EStateTreePropertyRefType::Class },
		{ "EStateTreePropertyRefType::SoftClass", (int64)EStateTreePropertyRefType::SoftClass },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreePropertyRefType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	"EStateTreePropertyRefType",
	"EStateTreePropertyRefType",
	Z_Construct_UEnum_StateTreeModule_EStateTreePropertyRefType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyRefType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyRefType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreePropertyRefType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreePropertyRefType()
{
	if (!Z_Registration_Info_UEnum_EStateTreePropertyRefType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreePropertyRefType.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreePropertyRefType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStateTreePropertyRefType.InnerSingleton;
}
// End Enum EStateTreePropertyRefType

// Begin ScriptStruct FStateTreeBlueprintPropertyRef
static_assert(std::is_polymorphic<FStateTreeBlueprintPropertyRef>() == std::is_polymorphic<FStateTreePropertyRef>(), "USTRUCT FStateTreeBlueprintPropertyRef cannot be polymorphic unless super FStateTreePropertyRef is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeBlueprintPropertyRef;
class UScriptStruct* FStateTreeBlueprintPropertyRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeBlueprintPropertyRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeBlueprintPropertyRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeBlueprintPropertyRef"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeBlueprintPropertyRef.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeBlueprintPropertyRef>()
{
	return FStateTreeBlueprintPropertyRef::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FStateTreeBlueprintPropertyRef is a PropertyRef intended to be used in State Tree Blueprint nodes like tasks, conditions or evaluators, but also as a StateTree parameter.\n */" },
		{ "DisplayName", "State Tree Property Ref" },
		{ "ModuleRelativePath", "Public/StateTreePropertyRef.h" },
		{ "ToolTip", "FStateTreeBlueprintPropertyRef is a PropertyRef intended to be used in State Tree Blueprint nodes like tasks, conditions or evaluators, but also as a StateTree parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefType_MetaData[] = {
		{ "Category", "InternalType" },
		{ "Comment", "/** Specifies the type of property to reference */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyRef.h" },
		{ "ToolTip", "Specifies the type of property to reference" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRefToArray_MetaData[] = {
		{ "Category", "InternalType" },
		{ "Comment", "/** If specified, the reference is to an TArray<RefType> */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyRef.h" },
		{ "ToolTip", "If specified, the reference is to an TArray<RefType>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOptional_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** If specified, the reference can be left unbound, otherwise the State Tree compiler report error if the reference is not bound. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyRef.h" },
		{ "ToolTip", "If specified, the reference can be left unbound, otherwise the State Tree compiler report error if the reference is not bound." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeObject_MetaData[] = {
		{ "Category", "InternalType" },
		{ "Comment", "/** Specifies the type of property to reference together with RefType, used for Enums, Structs, Objects and Classes. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyRef.h" },
		{ "ToolTip", "Specifies the type of property to reference together with RefType, used for Enums, Structs, Objects and Classes." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_RefType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RefType;
	static void NewProp_bIsRefToArray_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRefToArray;
	static void NewProp_bIsOptional_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOptional;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TypeObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeBlueprintPropertyRef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef_Statics::NewProp_RefType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef_Statics::NewProp_RefType = { "RefType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeBlueprintPropertyRef, RefType), Z_Construct_UEnum_StateTreeModule_EStateTreePropertyRefType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefType_MetaData), NewProp_RefType_MetaData) }; // 741771858
void Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef_Statics::NewProp_bIsRefToArray_SetBit(void* Obj)
{
	((FStateTreeBlueprintPropertyRef*)Obj)->bIsRefToArray = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef_Statics::NewProp_bIsRefToArray = { "bIsRefToArray", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FStateTreeBlueprintPropertyRef), &Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef_Statics::NewProp_bIsRefToArray_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRefToArray_MetaData), NewProp_bIsRefToArray_MetaData) };
void Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef_Statics::NewProp_bIsOptional_SetBit(void* Obj)
{
	((FStateTreeBlueprintPropertyRef*)Obj)->bIsOptional = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef_Statics::NewProp_bIsOptional = { "bIsOptional", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FStateTreeBlueprintPropertyRef), &Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef_Statics::NewProp_bIsOptional_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOptional_MetaData), NewProp_bIsOptional_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef_Statics::NewProp_TypeObject = { "TypeObject", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeBlueprintPropertyRef, TypeObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeObject_MetaData), NewProp_TypeObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef_Statics::NewProp_RefType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef_Statics::NewProp_RefType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef_Statics::NewProp_bIsRefToArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef_Statics::NewProp_bIsOptional,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef_Statics::NewProp_TypeObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreePropertyRef,
	&NewStructOps,
	"StateTreeBlueprintPropertyRef",
	Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef_Statics::PropPointers),
	sizeof(FStateTreeBlueprintPropertyRef),
	alignof(FStateTreeBlueprintPropertyRef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeBlueprintPropertyRef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeBlueprintPropertyRef.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeBlueprintPropertyRef.InnerSingleton;
}
// End ScriptStruct FStateTreeBlueprintPropertyRef

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyRef_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStateTreePropertyRefType_StaticEnum, TEXT("EStateTreePropertyRefType"), &Z_Registration_Info_UEnum_EStateTreePropertyRefType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 741771858U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreePropertyRef::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertyRef_Statics::NewStructOps, TEXT("StateTreePropertyRef"), &Z_Registration_Info_UScriptStruct_StateTreePropertyRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertyRef), 293669288U) },
		{ FStateTreeBlueprintPropertyRef::StaticStruct, Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef_Statics::NewStructOps, TEXT("StateTreeBlueprintPropertyRef"), &Z_Registration_Info_UScriptStruct_StateTreeBlueprintPropertyRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeBlueprintPropertyRef), 1605173553U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyRef_h_4213101744(TEXT("/Script/StateTreeModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyRef_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyRef_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyRef_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyRef_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
