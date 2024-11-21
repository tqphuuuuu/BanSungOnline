// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Public/StateTreePropertyBindings.h"
#include "Runtime/CoreUObject/Public/StructUtils/InstancedStruct.h"
#include "StateTreeModule/Public/StateTreeIndexTypes.h"
#include "StateTreeModule/Public/StateTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreePropertyBindings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBindableStructDesc();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeDataHandle();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeIndex16();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyAccess();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyBinding();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyBindings();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyCopy();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyIndirection();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyPath();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyPathBinding();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyPathSegment();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyRefPath();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertySegment();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin Enum EStateTreeBindableStructSource
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeBindableStructSource;
static UEnum* EStateTreeBindableStructSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStateTreeBindableStructSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStateTreeBindableStructSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeBindableStructSource"));
	}
	return Z_Registration_Info_UEnum_EStateTreeBindableStructSource.OuterSingleton;
}
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeBindableStructSource>()
{
	return EStateTreeBindableStructSource_StaticEnum();
}
struct Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Condition.Comment", "/** Source is State condition */" },
		{ "Condition.Name", "EStateTreeBindableStructSource::Condition" },
		{ "Condition.ToolTip", "Source is State condition" },
		{ "Consideration.Comment", "/** Source is State utility consideration */" },
		{ "Consideration.Name", "EStateTreeBindableStructSource::Consideration" },
		{ "Consideration.ToolTip", "Source is State utility consideration" },
		{ "Context.Comment", "/** Source is StateTree context object */" },
		{ "Context.Name", "EStateTreeBindableStructSource::Context" },
		{ "Context.ToolTip", "Source is StateTree context object" },
		{ "Evaluator.Comment", "/** Source is StateTree evaluator */" },
		{ "Evaluator.Name", "EStateTreeBindableStructSource::Evaluator" },
		{ "Evaluator.ToolTip", "Source is StateTree evaluator" },
		{ "GlobalTask.Comment", "/** Source is StateTree global task */" },
		{ "GlobalTask.Name", "EStateTreeBindableStructSource::GlobalTask" },
		{ "GlobalTask.ToolTip", "Source is StateTree global task" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "Parameter.Comment", "/** Source is StateTree parameter */" },
		{ "Parameter.Name", "EStateTreeBindableStructSource::Parameter" },
		{ "Parameter.ToolTip", "Source is StateTree parameter" },
		{ "PropertyFunction.Comment", "/** Source is Property Function */" },
		{ "PropertyFunction.Name", "EStateTreeBindableStructSource::PropertyFunction" },
		{ "PropertyFunction.ToolTip", "Source is Property Function" },
		{ "StateEvent.Comment", "/** Source is StateTree event used by state selection */" },
		{ "StateEvent.Name", "EStateTreeBindableStructSource::StateEvent" },
		{ "StateEvent.ToolTip", "Source is StateTree event used by state selection" },
		{ "StateParameter.Comment", "/** Source is State parameter */" },
		{ "StateParameter.Name", "EStateTreeBindableStructSource::StateParameter" },
		{ "StateParameter.ToolTip", "Source is State parameter" },
		{ "Task.Comment", "/** Source is State task */" },
		{ "Task.Name", "EStateTreeBindableStructSource::Task" },
		{ "Task.ToolTip", "Source is State task" },
		{ "TransitionEvent.Comment", "/** Source is StateTree event used by transition */" },
		{ "TransitionEvent.Name", "EStateTreeBindableStructSource::TransitionEvent" },
		{ "TransitionEvent.ToolTip", "Source is StateTree event used by transition" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStateTreeBindableStructSource::Context", (int64)EStateTreeBindableStructSource::Context },
		{ "EStateTreeBindableStructSource::Parameter", (int64)EStateTreeBindableStructSource::Parameter },
		{ "EStateTreeBindableStructSource::Evaluator", (int64)EStateTreeBindableStructSource::Evaluator },
		{ "EStateTreeBindableStructSource::GlobalTask", (int64)EStateTreeBindableStructSource::GlobalTask },
		{ "EStateTreeBindableStructSource::StateParameter", (int64)EStateTreeBindableStructSource::StateParameter },
		{ "EStateTreeBindableStructSource::Task", (int64)EStateTreeBindableStructSource::Task },
		{ "EStateTreeBindableStructSource::Condition", (int64)EStateTreeBindableStructSource::Condition },
		{ "EStateTreeBindableStructSource::Consideration", (int64)EStateTreeBindableStructSource::Consideration },
		{ "EStateTreeBindableStructSource::TransitionEvent", (int64)EStateTreeBindableStructSource::TransitionEvent },
		{ "EStateTreeBindableStructSource::StateEvent", (int64)EStateTreeBindableStructSource::StateEvent },
		{ "EStateTreeBindableStructSource::PropertyFunction", (int64)EStateTreeBindableStructSource::PropertyFunction },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	"EStateTreeBindableStructSource",
	"EStateTreeBindableStructSource",
	Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource()
{
	if (!Z_Registration_Info_UEnum_EStateTreeBindableStructSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeBindableStructSource.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStateTreeBindableStructSource.InnerSingleton;
}
// End Enum EStateTreeBindableStructSource

// Begin Enum EStateTreePropertyAccessType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreePropertyAccessType;
static UEnum* EStateTreePropertyAccessType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStateTreePropertyAccessType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStateTreePropertyAccessType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreePropertyAccessType"));
	}
	return Z_Registration_Info_UEnum_EStateTreePropertyAccessType.OuterSingleton;
}
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreePropertyAccessType>()
{
	return EStateTreePropertyAccessType_StaticEnum();
}
struct Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * The type of access a property path describes.\n */" },
		{ "IndexArray.Comment", "// Access node needs to dereference an instanced struct of specific type at its current address\n" },
		{ "IndexArray.Name", "EStateTreePropertyAccessType::IndexArray" },
		{ "IndexArray.ToolTip", "Access node needs to dereference an instanced struct of specific type at its current address" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "Object.Comment", "// Access node is a simple basePtr + offset\n" },
		{ "Object.Name", "EStateTreePropertyAccessType::Object" },
		{ "Object.ToolTip", "Access node is a simple basePtr + offset" },
		{ "ObjectInstance.Comment", "// Access is a soft object\n" },
		{ "ObjectInstance.Name", "EStateTreePropertyAccessType::ObjectInstance" },
		{ "ObjectInstance.ToolTip", "Access is a soft object" },
		{ "Offset.Name", "EStateTreePropertyAccessType::Offset" },
		{ "SoftObject.Comment", "// Access is a weak object\n" },
		{ "SoftObject.Name", "EStateTreePropertyAccessType::SoftObject" },
		{ "SoftObject.ToolTip", "Access is a weak object" },
		{ "StructInstance.Comment", "// Access node needs to dereference an object of specific type at its current address\n" },
		{ "StructInstance.Name", "EStateTreePropertyAccessType::StructInstance" },
		{ "StructInstance.ToolTip", "Access node needs to dereference an object of specific type at its current address" },
		{ "ToolTip", "The type of access a property path describes." },
		{ "WeakObject.Comment", "// Access node needs to dereference an object at its current address\n" },
		{ "WeakObject.Name", "EStateTreePropertyAccessType::WeakObject" },
		{ "WeakObject.ToolTip", "Access node needs to dereference an object at its current address" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStateTreePropertyAccessType::Offset", (int64)EStateTreePropertyAccessType::Offset },
		{ "EStateTreePropertyAccessType::Object", (int64)EStateTreePropertyAccessType::Object },
		{ "EStateTreePropertyAccessType::WeakObject", (int64)EStateTreePropertyAccessType::WeakObject },
		{ "EStateTreePropertyAccessType::SoftObject", (int64)EStateTreePropertyAccessType::SoftObject },
		{ "EStateTreePropertyAccessType::ObjectInstance", (int64)EStateTreePropertyAccessType::ObjectInstance },
		{ "EStateTreePropertyAccessType::StructInstance", (int64)EStateTreePropertyAccessType::StructInstance },
		{ "EStateTreePropertyAccessType::IndexArray", (int64)EStateTreePropertyAccessType::IndexArray },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	"EStateTreePropertyAccessType",
	"EStateTreePropertyAccessType",
	Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType()
{
	if (!Z_Registration_Info_UEnum_EStateTreePropertyAccessType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreePropertyAccessType.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStateTreePropertyAccessType.InnerSingleton;
}
// End Enum EStateTreePropertyAccessType

// Begin Enum EStateTreePropertyCopyType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreePropertyCopyType;
static UEnum* EStateTreePropertyCopyType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStateTreePropertyCopyType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStateTreePropertyCopyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreePropertyCopyType"));
	}
	return Z_Registration_Info_UEnum_EStateTreePropertyCopyType.OuterSingleton;
}
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreePropertyCopyType>()
{
	return EStateTreePropertyCopyType_StaticEnum();
}
struct Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Describes how the copy should be performed.\n */" },
		{ "CopyBool.Comment", "// For more complex data types, we need to call the properties copy function\n" },
		{ "CopyBool.Name", "EStateTreePropertyCopyType::CopyBool" },
		{ "CopyBool.ToolTip", "For more complex data types, we need to call the properties copy function" },
		{ "CopyComplex.Comment", "// For plain old data types, we do a simple memcpy.\n" },
		{ "CopyComplex.Name", "EStateTreePropertyCopyType::CopyComplex" },
		{ "CopyComplex.ToolTip", "For plain old data types, we do a simple memcpy." },
		{ "CopyFixedArray.Comment", "// FName needs special case because its size changes between editor/compiler and runtime.\n" },
		{ "CopyFixedArray.Name", "EStateTreePropertyCopyType::CopyFixedArray" },
		{ "CopyFixedArray.ToolTip", "FName needs special case because its size changes between editor/compiler and runtime." },
		{ "CopyName.Comment", "// Read and write properties using object property helpers, as source/dest could be regular/weak/soft etc.\n" },
		{ "CopyName.Name", "EStateTreePropertyCopyType::CopyName" },
		{ "CopyName.ToolTip", "Read and write properties using object property helpers, as source/dest could be regular/weak/soft etc." },
		{ "CopyObject.Comment", "// Use struct copy operation, as this needs to correctly handle CPP struct ops\n" },
		{ "CopyObject.Name", "EStateTreePropertyCopyType::CopyObject" },
		{ "CopyObject.ToolTip", "Use struct copy operation, as this needs to correctly handle CPP struct ops" },
		{ "CopyPlain.Comment", "// No copying\n" },
		{ "CopyPlain.Name", "EStateTreePropertyCopyType::CopyPlain" },
		{ "CopyPlain.ToolTip", "No copying" },
		{ "CopyStruct.Comment", "// Read and write properties using bool property helpers, as source/dest could be bitfield or boolean\n" },
		{ "CopyStruct.Name", "EStateTreePropertyCopyType::CopyStruct" },
		{ "CopyStruct.ToolTip", "Read and write properties using bool property helpers, as source/dest could be bitfield or boolean" },
		{ "DemoteDoubleToFloat.Name", "EStateTreePropertyCopyType::DemoteDoubleToFloat" },
		{ "DemoteDoubleToInt32.Comment", "/* Double promotions */" },
		{ "DemoteDoubleToInt32.Name", "EStateTreePropertyCopyType::DemoteDoubleToInt32" },
		{ "DemoteDoubleToInt32.ToolTip", "Double promotions" },
		{ "DemoteDoubleToInt64.Name", "EStateTreePropertyCopyType::DemoteDoubleToInt64" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "None.Name", "EStateTreePropertyCopyType::None" },
		{ "PromoteBoolToByte.Comment", "/* Bool promotions */" },
		{ "PromoteBoolToByte.Name", "EStateTreePropertyCopyType::PromoteBoolToByte" },
		{ "PromoteBoolToByte.ToolTip", "Bool promotions" },
		{ "PromoteBoolToDouble.Name", "EStateTreePropertyCopyType::PromoteBoolToDouble" },
		{ "PromoteBoolToFloat.Name", "EStateTreePropertyCopyType::PromoteBoolToFloat" },
		{ "PromoteBoolToInt32.Name", "EStateTreePropertyCopyType::PromoteBoolToInt32" },
		{ "PromoteBoolToInt64.Name", "EStateTreePropertyCopyType::PromoteBoolToInt64" },
		{ "PromoteBoolToUInt32.Name", "EStateTreePropertyCopyType::PromoteBoolToUInt32" },
		{ "PromoteByteToDouble.Name", "EStateTreePropertyCopyType::PromoteByteToDouble" },
		{ "PromoteByteToFloat.Name", "EStateTreePropertyCopyType::PromoteByteToFloat" },
		{ "PromoteByteToInt32.Comment", "/* Byte promotions */" },
		{ "PromoteByteToInt32.Name", "EStateTreePropertyCopyType::PromoteByteToInt32" },
		{ "PromoteByteToInt32.ToolTip", "Byte promotions" },
		{ "PromoteByteToInt64.Name", "EStateTreePropertyCopyType::PromoteByteToInt64" },
		{ "PromoteByteToUInt32.Name", "EStateTreePropertyCopyType::PromoteByteToUInt32" },
		{ "PromoteFloatToDouble.Name", "EStateTreePropertyCopyType::PromoteFloatToDouble" },
		{ "PromoteFloatToInt32.Comment", "/* Float promotions */" },
		{ "PromoteFloatToInt32.Name", "EStateTreePropertyCopyType::PromoteFloatToInt32" },
		{ "PromoteFloatToInt32.ToolTip", "Float promotions" },
		{ "PromoteFloatToInt64.Name", "EStateTreePropertyCopyType::PromoteFloatToInt64" },
		{ "PromoteInt32ToDouble.Comment", "// This is strictly sketchy because of potential data loss, but it is usually OK in the general case\n" },
		{ "PromoteInt32ToDouble.Name", "EStateTreePropertyCopyType::PromoteInt32ToDouble" },
		{ "PromoteInt32ToDouble.ToolTip", "This is strictly sketchy because of potential data loss, but it is usually OK in the general case" },
		{ "PromoteInt32ToFloat.Name", "EStateTreePropertyCopyType::PromoteInt32ToFloat" },
		{ "PromoteInt32ToInt64.Comment", "/* Int32 promotions */" },
		{ "PromoteInt32ToInt64.Name", "EStateTreePropertyCopyType::PromoteInt32ToInt64" },
		{ "PromoteInt32ToInt64.ToolTip", "Int32 promotions" },
		{ "PromoteUInt32ToDouble.Comment", "// This is strictly sketchy because of potential data loss, but it is usually OK in the general case\n" },
		{ "PromoteUInt32ToDouble.Name", "EStateTreePropertyCopyType::PromoteUInt32ToDouble" },
		{ "PromoteUInt32ToDouble.ToolTip", "This is strictly sketchy because of potential data loss, but it is usually OK in the general case" },
		{ "PromoteUInt32ToFloat.Name", "EStateTreePropertyCopyType::PromoteUInt32ToFloat" },
		{ "PromoteUInt32ToInt64.Comment", "/* UInt32 promotions */" },
		{ "PromoteUInt32ToInt64.Name", "EStateTreePropertyCopyType::PromoteUInt32ToInt64" },
		{ "PromoteUInt32ToInt64.ToolTip", "UInt32 promotions" },
		{ "StructReference.Comment", "// Array needs special handling for fixed size TArrays\n" },
		{ "StructReference.Name", "EStateTreePropertyCopyType::StructReference" },
		{ "StructReference.ToolTip", "Array needs special handling for fixed size TArrays" },
		{ "ToolTip", "Describes how the copy should be performed." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStateTreePropertyCopyType::None", (int64)EStateTreePropertyCopyType::None },
		{ "EStateTreePropertyCopyType::CopyPlain", (int64)EStateTreePropertyCopyType::CopyPlain },
		{ "EStateTreePropertyCopyType::CopyComplex", (int64)EStateTreePropertyCopyType::CopyComplex },
		{ "EStateTreePropertyCopyType::CopyBool", (int64)EStateTreePropertyCopyType::CopyBool },
		{ "EStateTreePropertyCopyType::CopyStruct", (int64)EStateTreePropertyCopyType::CopyStruct },
		{ "EStateTreePropertyCopyType::CopyObject", (int64)EStateTreePropertyCopyType::CopyObject },
		{ "EStateTreePropertyCopyType::CopyName", (int64)EStateTreePropertyCopyType::CopyName },
		{ "EStateTreePropertyCopyType::CopyFixedArray", (int64)EStateTreePropertyCopyType::CopyFixedArray },
		{ "EStateTreePropertyCopyType::StructReference", (int64)EStateTreePropertyCopyType::StructReference },
		{ "EStateTreePropertyCopyType::PromoteBoolToByte", (int64)EStateTreePropertyCopyType::PromoteBoolToByte },
		{ "EStateTreePropertyCopyType::PromoteBoolToInt32", (int64)EStateTreePropertyCopyType::PromoteBoolToInt32 },
		{ "EStateTreePropertyCopyType::PromoteBoolToUInt32", (int64)EStateTreePropertyCopyType::PromoteBoolToUInt32 },
		{ "EStateTreePropertyCopyType::PromoteBoolToInt64", (int64)EStateTreePropertyCopyType::PromoteBoolToInt64 },
		{ "EStateTreePropertyCopyType::PromoteBoolToFloat", (int64)EStateTreePropertyCopyType::PromoteBoolToFloat },
		{ "EStateTreePropertyCopyType::PromoteBoolToDouble", (int64)EStateTreePropertyCopyType::PromoteBoolToDouble },
		{ "EStateTreePropertyCopyType::PromoteByteToInt32", (int64)EStateTreePropertyCopyType::PromoteByteToInt32 },
		{ "EStateTreePropertyCopyType::PromoteByteToUInt32", (int64)EStateTreePropertyCopyType::PromoteByteToUInt32 },
		{ "EStateTreePropertyCopyType::PromoteByteToInt64", (int64)EStateTreePropertyCopyType::PromoteByteToInt64 },
		{ "EStateTreePropertyCopyType::PromoteByteToFloat", (int64)EStateTreePropertyCopyType::PromoteByteToFloat },
		{ "EStateTreePropertyCopyType::PromoteByteToDouble", (int64)EStateTreePropertyCopyType::PromoteByteToDouble },
		{ "EStateTreePropertyCopyType::PromoteInt32ToInt64", (int64)EStateTreePropertyCopyType::PromoteInt32ToInt64 },
		{ "EStateTreePropertyCopyType::PromoteInt32ToFloat", (int64)EStateTreePropertyCopyType::PromoteInt32ToFloat },
		{ "EStateTreePropertyCopyType::PromoteInt32ToDouble", (int64)EStateTreePropertyCopyType::PromoteInt32ToDouble },
		{ "EStateTreePropertyCopyType::PromoteUInt32ToInt64", (int64)EStateTreePropertyCopyType::PromoteUInt32ToInt64 },
		{ "EStateTreePropertyCopyType::PromoteUInt32ToFloat", (int64)EStateTreePropertyCopyType::PromoteUInt32ToFloat },
		{ "EStateTreePropertyCopyType::PromoteUInt32ToDouble", (int64)EStateTreePropertyCopyType::PromoteUInt32ToDouble },
		{ "EStateTreePropertyCopyType::PromoteFloatToInt32", (int64)EStateTreePropertyCopyType::PromoteFloatToInt32 },
		{ "EStateTreePropertyCopyType::PromoteFloatToInt64", (int64)EStateTreePropertyCopyType::PromoteFloatToInt64 },
		{ "EStateTreePropertyCopyType::PromoteFloatToDouble", (int64)EStateTreePropertyCopyType::PromoteFloatToDouble },
		{ "EStateTreePropertyCopyType::DemoteDoubleToInt32", (int64)EStateTreePropertyCopyType::DemoteDoubleToInt32 },
		{ "EStateTreePropertyCopyType::DemoteDoubleToInt64", (int64)EStateTreePropertyCopyType::DemoteDoubleToInt64 },
		{ "EStateTreePropertyCopyType::DemoteDoubleToFloat", (int64)EStateTreePropertyCopyType::DemoteDoubleToFloat },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	"EStateTreePropertyCopyType",
	"EStateTreePropertyCopyType",
	Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType()
{
	if (!Z_Registration_Info_UEnum_EStateTreePropertyCopyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreePropertyCopyType.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStateTreePropertyCopyType.InnerSingleton;
}
// End Enum EStateTreePropertyCopyType

// Begin ScriptStruct FStateTreeBindableStructDesc
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeBindableStructDesc;
class UScriptStruct* FStateTreeBindableStructDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeBindableStructDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeBindableStructDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeBindableStructDesc, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeBindableStructDesc"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeBindableStructDesc.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeBindableStructDesc>()
{
	return FStateTreeBindableStructDesc::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Descriptor for a struct or class that can be a binding source or target.\n * Each struct has unique identifier, which is used to distinguish them, and name that is mostly for debugging and UI.\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Descriptor for a struct or class that can be a binding source or target.\nEach struct has unique identifier, which is used to distinguish them, and name that is mostly for debugging and UI." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[] = {
		{ "Comment", "/** The type of the struct or class. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The type of the struct or class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name of the container (cosmetic). */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Name of the container (cosmetic)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataHandle_MetaData[] = {
		{ "Comment", "/** Runtime data the struct represents. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Runtime data the struct represents." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataSource_MetaData[] = {
		{ "Comment", "/** Type of the source. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Type of the source." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Comment", "/** Unique identifier of the struct. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Unique identifier of the struct." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatePath_MetaData[] = {
		{ "Comment", "/** In Editor path to State containting the data. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "In Editor path to State containting the data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Comment", "/** Category of the bindable struct. Can be used to display the category in a menu. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Category of the bindable struct. Can be used to display the category in a menu." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Struct;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DataSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DataSource;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeBindableStructDesc>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeBindableStructDesc, Struct), Z_Construct_UClass_UStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Struct_MetaData), NewProp_Struct_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeBindableStructDesc, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_DataHandle = { "DataHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeBindableStructDesc, DataHandle), Z_Construct_UScriptStruct_FStateTreeDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataHandle_MetaData), NewProp_DataHandle_MetaData) }; // 3876109322
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_DataSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_DataSource = { "DataSource", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeBindableStructDesc, DataSource), Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataSource_MetaData), NewProp_DataSource_MetaData) }; // 3697659146
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeBindableStructDesc, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_StatePath = { "StatePath", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeBindableStructDesc, StatePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatePath_MetaData), NewProp_StatePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeBindableStructDesc, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_Struct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_DataHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_DataSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_DataSource,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_StatePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_Category,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeBindableStructDesc",
	Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::PropPointers),
	sizeof(FStateTreeBindableStructDesc),
	alignof(FStateTreeBindableStructDesc),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBindableStructDesc()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeBindableStructDesc.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeBindableStructDesc.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeBindableStructDesc.InnerSingleton;
}
// End ScriptStruct FStateTreeBindableStructDesc

// Begin ScriptStruct FStateTreePropertyPathSegment
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertyPathSegment;
class UScriptStruct* FStateTreePropertyPathSegment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyPathSegment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertyPathSegment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyPathSegment, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropertyPathSegment"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyPathSegment.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropertyPathSegment>()
{
	return FStateTreePropertyPathSegment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct describing a path segment in FStateTreePropertyPath. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Struct describing a path segment in FStateTreePropertyPath." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name of the property */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Name of the property" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrayIndex_MetaData[] = {
		{ "Comment", "/** Array index if the property is dynamic or static array. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Array index if the property is dynamic or static array." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceStruct_MetaData[] = {
		{ "Comment", "/** Type of the instanced struct or object reference by the property at the segment. This allows the path to be resolved when it points to a specific instance. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Type of the instanced struct or object reference by the property at the segment. This allows the path to be resolved when it points to a specific instance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstanceStruct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertyPathSegment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyPathSegment, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::NewProp_ArrayIndex = { "ArrayIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyPathSegment, ArrayIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrayIndex_MetaData), NewProp_ArrayIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::NewProp_InstanceStruct = { "InstanceStruct", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyPathSegment, InstanceStruct), Z_Construct_UClass_UStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceStruct_MetaData), NewProp_InstanceStruct_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::NewProp_ArrayIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::NewProp_InstanceStruct,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreePropertyPathSegment",
	Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::PropPointers),
	sizeof(FStateTreePropertyPathSegment),
	alignof(FStateTreePropertyPathSegment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyPathSegment()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyPathSegment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertyPathSegment.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyPathSegment.InnerSingleton;
}
// End ScriptStruct FStateTreePropertyPathSegment

// Begin ScriptStruct FStateTreePropertyPath
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertyPath;
class UScriptStruct* FStateTreePropertyPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertyPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyPath, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropertyPath"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyPath.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropertyPath>()
{
	return FStateTreePropertyPath::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Representation of a property path used for property binding in StateTree.\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Representation of a property path used for property binding in StateTree." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructID_MetaData[] = {
		{ "Comment", "/** ID of the struct this property path is relative to. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "ID of the struct this property path is relative to." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[] = {
		{ "Comment", "/** Path segments pointing to a specific property on the path. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Path segments pointing to a specific property on the path." },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StructID;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Segments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Segments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertyPath>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::NewProp_StructID = { "StructID", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyPath, StructID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructID_MetaData), NewProp_StructID_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::NewProp_Segments_Inner = { "Segments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreePropertyPathSegment, METADATA_PARAMS(0, nullptr) }; // 3500771647
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyPath, Segments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Segments_MetaData), NewProp_Segments_MetaData) }; // 3500771647
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::NewProp_StructID,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::NewProp_Segments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::NewProp_Segments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreePropertyPath",
	Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::PropPointers),
	sizeof(FStateTreePropertyPath),
	alignof(FStateTreePropertyPath),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyPath()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyPath.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertyPath.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyPath.InnerSingleton;
}
// End ScriptStruct FStateTreePropertyPath

// Begin ScriptStruct FStateTreeEditorPropertyPath
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyPath;
class UScriptStruct* FStateTreeEditorPropertyPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeEditorPropertyPath"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyPath.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeEditorPropertyPath>()
{
	return FStateTreeEditorPropertyPath::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructID_MetaData[] = {
		{ "Comment", "/** Handle of the struct this property path is relative to. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Handle of the struct this property path is relative to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "Comment", "/** Property path segments */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Property path segments" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StructID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeEditorPropertyPath>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_StructID = { "StructID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeEditorPropertyPath, StructID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructID_MetaData), NewProp_StructID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeEditorPropertyPath, Path), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_StructID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_Path_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_Path,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeEditorPropertyPath",
	Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::PropPointers),
	sizeof(FStateTreeEditorPropertyPath),
	alignof(FStateTreeEditorPropertyPath),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyPath.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyPath.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyPath.InnerSingleton;
}
// End ScriptStruct FStateTreeEditorPropertyPath

// Begin ScriptStruct FStateTreePropertyPathBinding
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertyPathBinding;
class UScriptStruct* FStateTreePropertyPathBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyPathBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertyPathBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyPathBinding, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropertyPathBinding"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyPathBinding.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropertyPathBinding>()
{
	return FStateTreePropertyPathBinding::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Representation of a property binding in StateTree\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Representation of a property binding in StateTree" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePropertyPath_MetaData[] = {
		{ "Comment", "/** Source property path of the binding */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Source property path of the binding" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPropertyPath_MetaData[] = {
		{ "Comment", "/** Target property path of the binding */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Target property path of the binding" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceDataHandle_MetaData[] = {
		{ "Comment", "/** Describes how to get the source data pointer for the binding. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Describes how to get the source data pointer for the binding." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyFunctionNode_MetaData[] = {
		{ "Comment", "/**\x09Instance of bound PropertyFunction. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Instance of bound PropertyFunction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePropertyPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPropertyPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceDataHandle;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyFunctionNode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPath;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertyPathBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_SourcePropertyPath = { "SourcePropertyPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyPathBinding, SourcePropertyPath), Z_Construct_UScriptStruct_FStateTreePropertyPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePropertyPath_MetaData), NewProp_SourcePropertyPath_MetaData) }; // 1524499963
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_TargetPropertyPath = { "TargetPropertyPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyPathBinding, TargetPropertyPath), Z_Construct_UScriptStruct_FStateTreePropertyPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPropertyPath_MetaData), NewProp_TargetPropertyPath_MetaData) }; // 1524499963
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_SourceDataHandle = { "SourceDataHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyPathBinding, SourceDataHandle), Z_Construct_UScriptStruct_FStateTreeDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceDataHandle_MetaData), NewProp_SourceDataHandle_MetaData) }; // 3876109322
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_PropertyFunctionNode = { "PropertyFunctionNode", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyPathBinding, PropertyFunctionNode), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyFunctionNode_MetaData), NewProp_PropertyFunctionNode_MetaData) }; // 111383296
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyPathBinding, SourcePath_DEPRECATED), Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePath_MetaData), NewProp_SourcePath_MetaData) }; // 1884564581
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_TargetPath = { "TargetPath", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyPathBinding, TargetPath_DEPRECATED), Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPath_MetaData), NewProp_TargetPath_MetaData) }; // 1884564581
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_SourcePropertyPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_TargetPropertyPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_SourceDataHandle,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_PropertyFunctionNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_SourcePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_TargetPath,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreePropertyPathBinding",
	Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::PropPointers),
	sizeof(FStateTreePropertyPathBinding),
	alignof(FStateTreePropertyPathBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyPathBinding()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyPathBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertyPathBinding.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyPathBinding.InnerSingleton;
}
// End ScriptStruct FStateTreePropertyPathBinding

// Begin ScriptStruct FStateTreePropertyRefPath
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertyRefPath;
class UScriptStruct* FStateTreePropertyRefPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyRefPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertyRefPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyRefPath, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropertyRefPath"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyRefPath.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropertyRefPath>()
{
	return FStateTreePropertyRefPath::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreePropertyRefPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Representation of a property reference binding in StateTree.\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Representation of a property reference binding in StateTree." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePropertyPath_MetaData[] = {
		{ "Comment", "/** Source property path of the reference */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Source property path of the reference" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceDataHandle_MetaData[] = {
		{ "Comment", "/** Describes how to get the source data pointer */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Describes how to get the source data pointer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePropertyPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceDataHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertyRefPath>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyRefPath_Statics::NewProp_SourcePropertyPath = { "SourcePropertyPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyRefPath, SourcePropertyPath), Z_Construct_UScriptStruct_FStateTreePropertyPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePropertyPath_MetaData), NewProp_SourcePropertyPath_MetaData) }; // 1524499963
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyRefPath_Statics::NewProp_SourceDataHandle = { "SourceDataHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyRefPath, SourceDataHandle), Z_Construct_UScriptStruct_FStateTreeDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceDataHandle_MetaData), NewProp_SourceDataHandle_MetaData) }; // 3876109322
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropertyRefPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyRefPath_Statics::NewProp_SourcePropertyPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyRefPath_Statics::NewProp_SourceDataHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyRefPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertyRefPath_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreePropertyRefPath",
	Z_Construct_UScriptStruct_FStateTreePropertyRefPath_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyRefPath_Statics::PropPointers),
	sizeof(FStateTreePropertyRefPath),
	alignof(FStateTreePropertyRefPath),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyRefPath_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreePropertyRefPath_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyRefPath()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyRefPath.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertyRefPath.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertyRefPath_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyRefPath.InnerSingleton;
}
// End ScriptStruct FStateTreePropertyRefPath

// Begin ScriptStruct FStateTreePropertySegment
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertySegment;
class UScriptStruct* FStateTreePropertySegment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertySegment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertySegment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertySegment, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropertySegment"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertySegment.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropertySegment>()
{
	return FStateTreePropertySegment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Deprecated. Describes a segment of a property path. Used for storage only.\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Deprecated. Describes a segment of a property path. Used for storage only." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Comment", "/** Property name. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Property name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrayIndex_MetaData[] = {
		{ "Comment", "/** Index in the array the property points at. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Index in the array the property points at." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextIndex_MetaData[] = {
		{ "Comment", "/** Index to next segment. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Index to next segment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Comment", "/** Type of access/indirection. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Type of access/indirection." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NextIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertySegment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertySegment, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_ArrayIndex = { "ArrayIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertySegment, ArrayIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrayIndex_MetaData), NewProp_ArrayIndex_MetaData) }; // 2905844030
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_NextIndex = { "NextIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertySegment, NextIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextIndex_MetaData), NewProp_NextIndex_MetaData) }; // 2905844030
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertySegment, Type), Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 3355974266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_ArrayIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_NextIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreePropertySegment",
	Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::PropPointers),
	sizeof(FStateTreePropertySegment),
	alignof(FStateTreePropertySegment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertySegment()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertySegment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertySegment.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertySegment.InnerSingleton;
}
// End ScriptStruct FStateTreePropertySegment

// Begin ScriptStruct FStateTreePropertyBinding
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertyBinding;
class UScriptStruct* FStateTreePropertyBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertyBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyBinding, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropertyBinding"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyBinding.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropertyBinding>()
{
	return FStateTreePropertyBinding::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Deprecated. Describes property binding, the property from source path is copied into the property at the target path.\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Deprecated. Describes property binding, the property from source path is copied into the property at the target path." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[] = {
		{ "Comment", "/** Source property path. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Source property path." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPath_MetaData[] = {
		{ "Comment", "/** Target property path. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Target property path." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceStructIndex_MetaData[] = {
		{ "Comment", "/** Index to the source struct the source path refers to, sources are stored in FStateTreePropertyBindings. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Index to the source struct the source path refers to, sources are stored in FStateTreePropertyBindings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CopyType_MetaData[] = {
		{ "Comment", "/** The type of copy to use between the properties. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "The type of copy to use between the properties." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceStructIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CopyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CopyType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertyBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyBinding, SourcePath), Z_Construct_UScriptStruct_FStateTreePropertySegment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePath_MetaData), NewProp_SourcePath_MetaData) }; // 201986959
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_TargetPath = { "TargetPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyBinding, TargetPath), Z_Construct_UScriptStruct_FStateTreePropertySegment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPath_MetaData), NewProp_TargetPath_MetaData) }; // 201986959
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_SourceStructIndex = { "SourceStructIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyBinding, SourceStructIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceStructIndex_MetaData), NewProp_SourceStructIndex_MetaData) }; // 2905844030
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_CopyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_CopyType = { "CopyType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyBinding, CopyType), Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CopyType_MetaData), NewProp_CopyType_MetaData) }; // 2990429169
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_SourcePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_TargetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_SourceStructIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_CopyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_CopyType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreePropertyBinding",
	Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::PropPointers),
	sizeof(FStateTreePropertyBinding),
	alignof(FStateTreePropertyBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyBinding()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertyBinding.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyBinding.InnerSingleton;
}
// End ScriptStruct FStateTreePropertyBinding

// Begin ScriptStruct FStateTreePropertyIndirection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertyIndirection;
class UScriptStruct* FStateTreePropertyIndirection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyIndirection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertyIndirection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyIndirection, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropertyIndirection"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyIndirection.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropertyIndirection>()
{
	return FStateTreePropertyIndirection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Used internally.\n * Property indirection is a resolved property path segment, used for accessing properties in structs.\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Used internally.\nProperty indirection is a resolved property path segment, used for accessing properties in structs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrayIndex_MetaData[] = {
		{ "Comment", "/** Index in the array the property points at. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Index in the array the property points at." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Comment", "/** Cached offset of the property */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Cached offset of the property" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextIndex_MetaData[] = {
		{ "Comment", "/** Cached offset of the property */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Cached offset of the property" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Comment", "/** Type of access/indirection. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Type of access/indirection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceStruct_MetaData[] = {
		{ "Comment", "/** Type of the struct or object instance in case the segment is pointing into an instanced data. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Type of the struct or object instance in case the segment is pointing into an instanced data." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayIndex;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_Offset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NextIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstanceStruct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertyIndirection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_ArrayIndex = { "ArrayIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyIndirection, ArrayIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrayIndex_MetaData), NewProp_ArrayIndex_MetaData) }; // 2905844030
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyIndirection, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_NextIndex = { "NextIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyIndirection, NextIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextIndex_MetaData), NewProp_NextIndex_MetaData) }; // 2905844030
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyIndirection, Type), Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 3355974266
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_InstanceStruct = { "InstanceStruct", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyIndirection, InstanceStruct), Z_Construct_UClass_UStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceStruct_MetaData), NewProp_InstanceStruct_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_ArrayIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_NextIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_InstanceStruct,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreePropertyIndirection",
	Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::PropPointers),
	sizeof(FStateTreePropertyIndirection),
	alignof(FStateTreePropertyIndirection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyIndirection()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyIndirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertyIndirection.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyIndirection.InnerSingleton;
}
// End ScriptStruct FStateTreePropertyIndirection

// Begin ScriptStruct FStateTreePropertyCopy
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertyCopy;
class UScriptStruct* FStateTreePropertyCopy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyCopy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertyCopy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyCopy, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropertyCopy"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyCopy.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropertyCopy>()
{
	return FStateTreePropertyCopy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Used internally.\n * Describes property copy, the property from source is copied into the property at the target.\n * Copy target struct is described in the property copy batch.\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Used internally.\nDescribes property copy, the property from source is copied into the property at the target.\nCopy target struct is described in the property copy batch." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceIndirection_MetaData[] = {
		{ "Comment", "/** Source property access. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Source property access." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetIndirection_MetaData[] = {
		{ "Comment", "/** Target property access. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Target property access." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceStructType_MetaData[] = {
		{ "Comment", "/** Type of the source data, used for validation. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Type of the source data, used for validation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CopySize_MetaData[] = {
		{ "Comment", "/** Cached property element size * dim. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Cached property element size * dim." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceDataHandle_MetaData[] = {
		{ "Comment", "/** Describes how to get the source data pointer for the copy. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Describes how to get the source data pointer for the copy." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Comment", "/** Type of the copy */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Type of the copy" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceStructIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceIndirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetIndirection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceStructType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CopySize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceDataHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceStructIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertyCopy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_SourceIndirection = { "SourceIndirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyCopy, SourceIndirection), Z_Construct_UScriptStruct_FStateTreePropertyIndirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceIndirection_MetaData), NewProp_SourceIndirection_MetaData) }; // 1845782941
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_TargetIndirection = { "TargetIndirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyCopy, TargetIndirection), Z_Construct_UScriptStruct_FStateTreePropertyIndirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetIndirection_MetaData), NewProp_TargetIndirection_MetaData) }; // 1845782941
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_SourceStructType = { "SourceStructType", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyCopy, SourceStructType), Z_Construct_UClass_UStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceStructType_MetaData), NewProp_SourceStructType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_CopySize = { "CopySize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyCopy, CopySize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CopySize_MetaData), NewProp_CopySize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_SourceDataHandle = { "SourceDataHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyCopy, SourceDataHandle), Z_Construct_UScriptStruct_FStateTreeDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceDataHandle_MetaData), NewProp_SourceDataHandle_MetaData) }; // 3876109322
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyCopy, Type), Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2990429169
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_SourceStructIndex = { "SourceStructIndex", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyCopy, SourceStructIndex_DEPRECATED), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceStructIndex_MetaData), NewProp_SourceStructIndex_MetaData) }; // 2905844030
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_SourceIndirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_TargetIndirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_SourceStructType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_CopySize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_SourceDataHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_SourceStructIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreePropertyCopy",
	Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::PropPointers),
	sizeof(FStateTreePropertyCopy),
	alignof(FStateTreePropertyCopy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyCopy()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyCopy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertyCopy.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyCopy.InnerSingleton;
}
// End ScriptStruct FStateTreePropertyCopy

// Begin ScriptStruct FStateTreePropertyCopyBatch
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertyCopyBatch;
class UScriptStruct* FStateTreePropertyCopyBatch::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyCopyBatch.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertyCopyBatch.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropertyCopyBatch"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyCopyBatch.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropertyCopyBatch>()
{
	return FStateTreePropertyCopyBatch::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Describes a batch of property copies from many sources to one target struct.\n * Note: The batch is used to reference both bindings and copies (a binding turns into copy when resolved).\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Describes a batch of property copies from many sources to one target struct.\nNote: The batch is used to reference both bindings and copies (a binding turns into copy when resolved)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetStruct_MetaData[] = {
		{ "Comment", "/** Expected target struct */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Expected target struct" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindingsBegin_MetaData[] = {
		{ "Comment", "/** Index to first binding/copy. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Index to first binding/copy." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindingsEnd_MetaData[] = {
		{ "Comment", "/** Index to one past the last binding/copy. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Index to one past the last binding/copy." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyFunctionsBegin_MetaData[] = {
		{ "Comment", "/** Index to first property function. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Index to first property function." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyFunctionsEnd_MetaData[] = {
		{ "Comment", "/** Index to one past the last property function. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Index to one past the last property function." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetStruct;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BindingsBegin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BindingsEnd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyFunctionsBegin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyFunctionsEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertyCopyBatch>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewProp_TargetStruct = { "TargetStruct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyCopyBatch, TargetStruct), Z_Construct_UScriptStruct_FStateTreeBindableStructDesc, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetStruct_MetaData), NewProp_TargetStruct_MetaData) }; // 11821290
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewProp_BindingsBegin = { "BindingsBegin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyCopyBatch, BindingsBegin), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindingsBegin_MetaData), NewProp_BindingsBegin_MetaData) }; // 2905844030
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewProp_BindingsEnd = { "BindingsEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyCopyBatch, BindingsEnd), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindingsEnd_MetaData), NewProp_BindingsEnd_MetaData) }; // 2905844030
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewProp_PropertyFunctionsBegin = { "PropertyFunctionsBegin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyCopyBatch, PropertyFunctionsBegin), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyFunctionsBegin_MetaData), NewProp_PropertyFunctionsBegin_MetaData) }; // 2905844030
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewProp_PropertyFunctionsEnd = { "PropertyFunctionsEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyCopyBatch, PropertyFunctionsEnd), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyFunctionsEnd_MetaData), NewProp_PropertyFunctionsEnd_MetaData) }; // 2905844030
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewProp_TargetStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewProp_BindingsBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewProp_BindingsEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewProp_PropertyFunctionsBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewProp_PropertyFunctionsEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreePropertyCopyBatch",
	Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::PropPointers),
	sizeof(FStateTreePropertyCopyBatch),
	alignof(FStateTreePropertyCopyBatch),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyCopyBatch.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertyCopyBatch.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyCopyBatch.InnerSingleton;
}
// End ScriptStruct FStateTreePropertyCopyBatch

// Begin ScriptStruct FStateTreePropertyAccess
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertyAccess;
class UScriptStruct* FStateTreePropertyAccess::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyAccess.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertyAccess.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyAccess, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropertyAccess"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyAccess.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropertyAccess>()
{
	return FStateTreePropertyAccess::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreePropertyAccess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Describes access to referenced property.\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Describes access to referenced property." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceIndirection_MetaData[] = {
		{ "Comment", "/** Source property access. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Source property access." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceStructType_MetaData[] = {
		{ "Comment", "/** Type of the source data, used for validation. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Type of the source data, used for validation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceDataHandle_MetaData[] = {
		{ "Comment", "/** Describes how to get the source data pointer. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Describes how to get the source data pointer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceIndirection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceStructType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceDataHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertyAccess>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyAccess_Statics::NewProp_SourceIndirection = { "SourceIndirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyAccess, SourceIndirection), Z_Construct_UScriptStruct_FStateTreePropertyIndirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceIndirection_MetaData), NewProp_SourceIndirection_MetaData) }; // 1845782941
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyAccess_Statics::NewProp_SourceStructType = { "SourceStructType", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyAccess, SourceStructType), Z_Construct_UClass_UStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceStructType_MetaData), NewProp_SourceStructType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyAccess_Statics::NewProp_SourceDataHandle = { "SourceDataHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyAccess, SourceDataHandle), Z_Construct_UScriptStruct_FStateTreeDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceDataHandle_MetaData), NewProp_SourceDataHandle_MetaData) }; // 3876109322
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropertyAccess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyAccess_Statics::NewProp_SourceIndirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyAccess_Statics::NewProp_SourceStructType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyAccess_Statics::NewProp_SourceDataHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyAccess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertyAccess_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreePropertyAccess",
	Z_Construct_UScriptStruct_FStateTreePropertyAccess_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyAccess_Statics::PropPointers),
	sizeof(FStateTreePropertyAccess),
	alignof(FStateTreePropertyAccess),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyAccess_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreePropertyAccess_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyAccess()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyAccess.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertyAccess.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertyAccess_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyAccess.InnerSingleton;
}
// End ScriptStruct FStateTreePropertyAccess

// Begin ScriptStruct FStateTreePropertyBindings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertyBindings;
class UScriptStruct* FStateTreePropertyBindings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyBindings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertyBindings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyBindings, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropertyBindings"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyBindings.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropertyBindings>()
{
	return FStateTreePropertyBindings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Runtime storage and execution of property bindings.\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Runtime storage and execution of property bindings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceStructs_MetaData[] = {
		{ "Comment", "/** Array of expected source structs. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Array of expected source structs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CopyBatches_MetaData[] = {
		{ "Comment", "/** Array of copy batches. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Array of copy batches." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyPathBindings_MetaData[] = {
		{ "Comment", "/** Array of property bindings, resolved into arrays of copies before use. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Array of property bindings, resolved into arrays of copies before use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyCopies_MetaData[] = {
		{ "Comment", "/** Array of property copies */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Array of property copies" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyReferencePaths_MetaData[] = {
		{ "Comment", "/** Array of referenced property paths */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Array of referenced property paths" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyAccesses_MetaData[] = {
		{ "Comment", "/** Array of individually accessed properties */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Array of individually accessed properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyIndirections_MetaData[] = {
		{ "Comment", "/** Array of property indirections, indexed by accesses*/" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Array of property indirections, indexed by accesses" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyBindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertySegments_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceStructs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceStructs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CopyBatches_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CopyBatches;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyPathBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyPathBindings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyCopies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyCopies;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyReferencePaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyReferencePaths;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyAccesses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyAccesses;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyIndirections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyIndirections;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyBindings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertySegments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertySegments;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertyBindings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_SourceStructs_Inner = { "SourceStructs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreeBindableStructDesc, METADATA_PARAMS(0, nullptr) }; // 11821290
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_SourceStructs = { "SourceStructs", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyBindings, SourceStructs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceStructs_MetaData), NewProp_SourceStructs_MetaData) }; // 11821290
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_CopyBatches_Inner = { "CopyBatches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch, METADATA_PARAMS(0, nullptr) }; // 1864027694
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_CopyBatches = { "CopyBatches", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyBindings, CopyBatches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CopyBatches_MetaData), NewProp_CopyBatches_MetaData) }; // 1864027694
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyPathBindings_Inner = { "PropertyPathBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreePropertyPathBinding, METADATA_PARAMS(0, nullptr) }; // 467465245
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyPathBindings = { "PropertyPathBindings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyBindings, PropertyPathBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyPathBindings_MetaData), NewProp_PropertyPathBindings_MetaData) }; // 467465245
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyCopies_Inner = { "PropertyCopies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreePropertyCopy, METADATA_PARAMS(0, nullptr) }; // 3197118113
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyCopies = { "PropertyCopies", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyBindings, PropertyCopies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyCopies_MetaData), NewProp_PropertyCopies_MetaData) }; // 3197118113
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyReferencePaths_Inner = { "PropertyReferencePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreePropertyRefPath, METADATA_PARAMS(0, nullptr) }; // 668025981
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyReferencePaths = { "PropertyReferencePaths", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyBindings, PropertyReferencePaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyReferencePaths_MetaData), NewProp_PropertyReferencePaths_MetaData) }; // 668025981
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyAccesses_Inner = { "PropertyAccesses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreePropertyAccess, METADATA_PARAMS(0, nullptr) }; // 2132562146
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyAccesses = { "PropertyAccesses", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyBindings, PropertyAccesses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyAccesses_MetaData), NewProp_PropertyAccesses_MetaData) }; // 2132562146
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyIndirections_Inner = { "PropertyIndirections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreePropertyIndirection, METADATA_PARAMS(0, nullptr) }; // 1845782941
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyIndirections = { "PropertyIndirections", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyBindings, PropertyIndirections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyIndirections_MetaData), NewProp_PropertyIndirections_MetaData) }; // 1845782941
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyBindings_Inner = { "PropertyBindings", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreePropertyBinding, METADATA_PARAMS(0, nullptr) }; // 2077819022
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyBindings = { "PropertyBindings", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyBindings, PropertyBindings_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyBindings_MetaData), NewProp_PropertyBindings_MetaData) }; // 2077819022
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertySegments_Inner = { "PropertySegments", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreePropertySegment, METADATA_PARAMS(0, nullptr) }; // 201986959
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertySegments = { "PropertySegments", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyBindings, PropertySegments_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertySegments_MetaData), NewProp_PropertySegments_MetaData) }; // 201986959
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_SourceStructs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_SourceStructs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_CopyBatches_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_CopyBatches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyPathBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyPathBindings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyCopies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyCopies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyReferencePaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyReferencePaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyAccesses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyAccesses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyIndirections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyIndirections,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyBindings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertySegments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertySegments,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreePropertyBindings",
	Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::PropPointers),
	sizeof(FStateTreePropertyBindings),
	alignof(FStateTreePropertyBindings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyBindings()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyBindings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertyBindings.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyBindings.InnerSingleton;
}
// End ScriptStruct FStateTreePropertyBindings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStateTreeBindableStructSource_StaticEnum, TEXT("EStateTreeBindableStructSource"), &Z_Registration_Info_UEnum_EStateTreeBindableStructSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3697659146U) },
		{ EStateTreePropertyAccessType_StaticEnum, TEXT("EStateTreePropertyAccessType"), &Z_Registration_Info_UEnum_EStateTreePropertyAccessType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3355974266U) },
		{ EStateTreePropertyCopyType_StaticEnum, TEXT("EStateTreePropertyCopyType"), &Z_Registration_Info_UEnum_EStateTreePropertyCopyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2990429169U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreeBindableStructDesc::StaticStruct, Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewStructOps, TEXT("StateTreeBindableStructDesc"), &Z_Registration_Info_UScriptStruct_StateTreeBindableStructDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeBindableStructDesc), 11821290U) },
		{ FStateTreePropertyPathSegment::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::NewStructOps, TEXT("StateTreePropertyPathSegment"), &Z_Registration_Info_UScriptStruct_StateTreePropertyPathSegment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertyPathSegment), 3500771647U) },
		{ FStateTreePropertyPath::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::NewStructOps, TEXT("StateTreePropertyPath"), &Z_Registration_Info_UScriptStruct_StateTreePropertyPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertyPath), 1524499963U) },
		{ FStateTreeEditorPropertyPath::StaticStruct, Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewStructOps, TEXT("StateTreeEditorPropertyPath"), &Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeEditorPropertyPath), 1884564581U) },
		{ FStateTreePropertyPathBinding::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewStructOps, TEXT("StateTreePropertyPathBinding"), &Z_Registration_Info_UScriptStruct_StateTreePropertyPathBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertyPathBinding), 467465245U) },
		{ FStateTreePropertyRefPath::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertyRefPath_Statics::NewStructOps, TEXT("StateTreePropertyRefPath"), &Z_Registration_Info_UScriptStruct_StateTreePropertyRefPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertyRefPath), 668025981U) },
		{ FStateTreePropertySegment::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewStructOps, TEXT("StateTreePropertySegment"), &Z_Registration_Info_UScriptStruct_StateTreePropertySegment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertySegment), 201986959U) },
		{ FStateTreePropertyBinding::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewStructOps, TEXT("StateTreePropertyBinding"), &Z_Registration_Info_UScriptStruct_StateTreePropertyBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertyBinding), 2077819022U) },
		{ FStateTreePropertyIndirection::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewStructOps, TEXT("StateTreePropertyIndirection"), &Z_Registration_Info_UScriptStruct_StateTreePropertyIndirection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertyIndirection), 1845782941U) },
		{ FStateTreePropertyCopy::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewStructOps, TEXT("StateTreePropertyCopy"), &Z_Registration_Info_UScriptStruct_StateTreePropertyCopy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertyCopy), 3197118113U) },
		{ FStateTreePropertyCopyBatch::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewStructOps, TEXT("StateTreePropertyCopyBatch"), &Z_Registration_Info_UScriptStruct_StateTreePropertyCopyBatch, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertyCopyBatch), 1864027694U) },
		{ FStateTreePropertyAccess::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertyAccess_Statics::NewStructOps, TEXT("StateTreePropertyAccess"), &Z_Registration_Info_UScriptStruct_StateTreePropertyAccess, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertyAccess), 2132562146U) },
		{ FStateTreePropertyBindings::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewStructOps, TEXT("StateTreePropertyBindings"), &Z_Registration_Info_UScriptStruct_StateTreePropertyBindings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertyBindings), 2320100137U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_3610376933(TEXT("/Script/StateTreeModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
