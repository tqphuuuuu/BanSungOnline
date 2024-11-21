// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/Math/RigVMFunction_MathBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_MathBox() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBase();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoxBase();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoxExpand();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetCenter();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetSize();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetVolume();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsInside();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsValid();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoxMoveTo();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoxShift();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoxTransform();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMFunction_MathBoxBase
static_assert(std::is_polymorphic<FRigVMFunction_MathBoxBase>() == std::is_polymorphic<FRigVMFunction_MathBase>(), "USTRUCT FRigVMFunction_MathBoxBase cannot be polymorphic unless super FRigVMFunction_MathBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxBase;
class UScriptStruct* FRigVMFunction_MathBoxBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxBase, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoxBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxBase.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoxBase>()
{
	return FRigVMFunction_MathBoxBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Math|Box" },
		{ "MenuDescSuffix", "(Box)" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoxBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathBase,
	&NewStructOps,
	"RigVMFunction_MathBoxBase",
	nullptr,
	0,
	sizeof(FRigVMFunction_MathBoxBase),
	alignof(FRigVMFunction_MathBoxBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathBoxBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoxBase()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxBase.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoxBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxBase.InnerSingleton;
}
// End ScriptStruct FRigVMFunction_MathBoxBase

// Begin ScriptStruct FRigVMFunction_MathBoxFromArray
static_assert(std::is_polymorphic<FRigVMFunction_MathBoxFromArray>() == std::is_polymorphic<FRigVMFunction_MathBoxBase>(), "USTRUCT FRigVMFunction_MathBoxFromArray cannot be polymorphic unless super FRigVMFunction_MathBoxBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxFromArray;
class UScriptStruct* FRigVMFunction_MathBoxFromArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxFromArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxFromArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoxFromArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathBoxFromArray_Execute;
		Arguments_FRigVMFunction_MathBoxFromArray_Execute.Emplace(TEXT("Array"), TEXT("TArray<FVector>"));
		Arguments_FRigVMFunction_MathBoxFromArray_Execute.Emplace(TEXT("Box"), TEXT("FBox"));
		Arguments_FRigVMFunction_MathBoxFromArray_Execute.Emplace(TEXT("Minimum"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathBoxFromArray_Execute.Emplace(TEXT("Maximum"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathBoxFromArray_Execute.Emplace(TEXT("Center"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathBoxFromArray_Execute.Emplace(TEXT("Size"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathBoxFromArray::Execute"), &FRigVMFunction_MathBoxFromArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxFromArray.OuterSingleton, Arguments_FRigVMFunction_MathBoxFromArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxFromArray.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoxFromArray>()
{
	return FRigVMFunction_MathBoxFromArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns bounding box of the given array of positions\n */" },
		{ "DisplayName", "Box from Array" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "TemplateName", "ArrayBounds,CreateBox,CreateBoundingBox,NewBox,NewBoundingBoxMakeBox,MakeBoundingBox,BoundingBox,Bbox,Bounds" },
		{ "ToolTip", "Returns bounding box of the given array of positions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Array_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Minimum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Maximum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoxFromArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxFromArray, Array), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Array_MetaData), NewProp_Array_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxFromArray, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxFromArray, Minimum), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minimum_MetaData), NewProp_Minimum_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxFromArray, Maximum), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Maximum_MetaData), NewProp_Maximum_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxFromArray, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxFromArray, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics::NewProp_Array_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics::NewProp_Array,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics::NewProp_Minimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics::NewProp_Maximum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathBoxBase,
	&NewStructOps,
	"RigVMFunction_MathBoxFromArray",
	Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics::PropPointers),
	sizeof(FRigVMFunction_MathBoxFromArray),
	alignof(FRigVMFunction_MathBoxFromArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxFromArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxFromArray.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxFromArray.InnerSingleton;
}
void FRigVMFunction_MathBoxFromArray::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathBoxFromArray::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	TArrayView<const FVector> Array_0_Array(Array);
	StaticExecute(
		InExecuteContext,
		Array_0_Array,
		Box,
		Minimum,
		Maximum,
		Center,
		Size
	);
}
// End ScriptStruct FRigVMFunction_MathBoxFromArray

// Begin ScriptStruct FRigVMFunction_MathBoxIsValid
static_assert(std::is_polymorphic<FRigVMFunction_MathBoxIsValid>() == std::is_polymorphic<FRigVMFunction_MathBoxBase>(), "USTRUCT FRigVMFunction_MathBoxIsValid cannot be polymorphic unless super FRigVMFunction_MathBoxBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxIsValid;
class UScriptStruct* FRigVMFunction_MathBoxIsValid::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxIsValid.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxIsValid.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsValid, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoxIsValid"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathBoxIsValid_Execute;
		Arguments_FRigVMFunction_MathBoxIsValid_Execute.Emplace(TEXT("Box"), TEXT("FBox"));
		Arguments_FRigVMFunction_MathBoxIsValid_Execute.Emplace(TEXT("Valid"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathBoxIsValid::Execute"), &FRigVMFunction_MathBoxIsValid::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxIsValid.OuterSingleton, Arguments_FRigVMFunction_MathBoxIsValid_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxIsValid.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoxIsValid>()
{
	return FRigVMFunction_MathBoxIsValid::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsValid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns true if the box has any content / is valid\n */" },
		{ "DisplayName", "Is Box Valid" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "TemplateName", "IsValid,HasVolume,ContainsPoints,Bounds,BoundingBox,Bbox" },
		{ "ToolTip", "Returns true if the box has any content / is valid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Valid_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static void NewProp_Valid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Valid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoxIsValid>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsValid_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxIsValid, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsValid_Statics::NewProp_Valid_SetBit(void* Obj)
{
	((FRigVMFunction_MathBoxIsValid*)Obj)->Valid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsValid_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_MathBoxIsValid), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsValid_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Valid_MetaData), NewProp_Valid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsValid_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsValid_Statics::NewProp_Valid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsValid_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathBoxBase,
	&NewStructOps,
	"RigVMFunction_MathBoxIsValid",
	Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsValid_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsValid_Statics::PropPointers),
	sizeof(FRigVMFunction_MathBoxIsValid),
	alignof(FRigVMFunction_MathBoxIsValid),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsValid_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsValid_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsValid()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxIsValid.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxIsValid.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsValid_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxIsValid.InnerSingleton;
}
void FRigVMFunction_MathBoxIsValid::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathBoxIsValid::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Box,
		Valid
	);
}
// End ScriptStruct FRigVMFunction_MathBoxIsValid

// Begin ScriptStruct FRigVMFunction_MathBoxGetCenter
static_assert(std::is_polymorphic<FRigVMFunction_MathBoxGetCenter>() == std::is_polymorphic<FRigVMFunction_MathBoxBase>(), "USTRUCT FRigVMFunction_MathBoxGetCenter cannot be polymorphic unless super FRigVMFunction_MathBoxBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetCenter;
class UScriptStruct* FRigVMFunction_MathBoxGetCenter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetCenter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetCenter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetCenter, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoxGetCenter"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathBoxGetCenter_Execute;
		Arguments_FRigVMFunction_MathBoxGetCenter_Execute.Emplace(TEXT("Box"), TEXT("FBox"));
		Arguments_FRigVMFunction_MathBoxGetCenter_Execute.Emplace(TEXT("Center"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathBoxGetCenter::Execute"), &FRigVMFunction_MathBoxGetCenter::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetCenter.OuterSingleton, Arguments_FRigVMFunction_MathBoxGetCenter_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetCenter.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoxGetCenter>()
{
	return FRigVMFunction_MathBoxGetCenter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetCenter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the center of a bounding box\n */" },
		{ "DisplayName", "Get Box Center" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "TemplateName", "Middle,Origin,Bounds,BoundingBox,Bbox" },
		{ "ToolTip", "Returns the center of a bounding box" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoxGetCenter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetCenter_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxGetCenter, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetCenter_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxGetCenter, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetCenter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetCenter_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetCenter_Statics::NewProp_Center,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetCenter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetCenter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathBoxBase,
	&NewStructOps,
	"RigVMFunction_MathBoxGetCenter",
	Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetCenter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetCenter_Statics::PropPointers),
	sizeof(FRigVMFunction_MathBoxGetCenter),
	alignof(FRigVMFunction_MathBoxGetCenter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetCenter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetCenter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetCenter()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetCenter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetCenter.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetCenter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetCenter.InnerSingleton;
}
void FRigVMFunction_MathBoxGetCenter::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathBoxGetCenter::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Box,
		Center
	);
}
// End ScriptStruct FRigVMFunction_MathBoxGetCenter

// Begin ScriptStruct FRigVMFunction_MathBoxGetSize
static_assert(std::is_polymorphic<FRigVMFunction_MathBoxGetSize>() == std::is_polymorphic<FRigVMFunction_MathBoxBase>(), "USTRUCT FRigVMFunction_MathBoxGetSize cannot be polymorphic unless super FRigVMFunction_MathBoxBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetSize;
class UScriptStruct* FRigVMFunction_MathBoxGetSize::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetSize.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetSize.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetSize, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoxGetSize"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathBoxGetSize_Execute;
		Arguments_FRigVMFunction_MathBoxGetSize_Execute.Emplace(TEXT("Box"), TEXT("FBox"));
		Arguments_FRigVMFunction_MathBoxGetSize_Execute.Emplace(TEXT("Size"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathBoxGetSize_Execute.Emplace(TEXT("Extent"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathBoxGetSize::Execute"), &FRigVMFunction_MathBoxGetSize::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetSize.OuterSingleton, Arguments_FRigVMFunction_MathBoxGetSize_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetSize.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoxGetSize>()
{
	return FRigVMFunction_MathBoxGetSize::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the size of a bounding box\n */" },
		{ "DisplayName", "Get Box Size" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "TemplateName", "Middle,Origin,Bounds,BoundingBox,Bbox" },
		{ "ToolTip", "Returns the size of a bounding box" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// the overall size of the box\n" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "Output", "" },
		{ "ToolTip", "the overall size of the box" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// the half size of the box\n" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "Output", "" },
		{ "ToolTip", "the half size of the box" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoxGetSize>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetSize_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxGetSize, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxGetSize, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetSize_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxGetSize, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extent_MetaData), NewProp_Extent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetSize_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetSize_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetSize_Statics::NewProp_Extent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetSize_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathBoxBase,
	&NewStructOps,
	"RigVMFunction_MathBoxGetSize",
	Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetSize_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetSize_Statics::PropPointers),
	sizeof(FRigVMFunction_MathBoxGetSize),
	alignof(FRigVMFunction_MathBoxGetSize),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetSize_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetSize_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetSize()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetSize.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetSize_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetSize.InnerSingleton;
}
void FRigVMFunction_MathBoxGetSize::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathBoxGetSize::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Box,
		Size,
		Extent
	);
}
// End ScriptStruct FRigVMFunction_MathBoxGetSize

// Begin ScriptStruct FRigVMFunction_MathBoxShift
static_assert(std::is_polymorphic<FRigVMFunction_MathBoxShift>() == std::is_polymorphic<FRigVMFunction_MathBoxBase>(), "USTRUCT FRigVMFunction_MathBoxShift cannot be polymorphic unless super FRigVMFunction_MathBoxBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxShift;
class UScriptStruct* FRigVMFunction_MathBoxShift::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxShift.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxShift.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxShift, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoxShift"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathBoxShift_Execute;
		Arguments_FRigVMFunction_MathBoxShift_Execute.Emplace(TEXT("Box"), TEXT("FBox"));
		Arguments_FRigVMFunction_MathBoxShift_Execute.Emplace(TEXT("Amount"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathBoxShift_Execute.Emplace(TEXT("Result"), TEXT("FBox"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathBoxShift::Execute"), &FRigVMFunction_MathBoxShift::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxShift.OuterSingleton, Arguments_FRigVMFunction_MathBoxShift_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxShift.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoxShift>()
{
	return FRigVMFunction_MathBoxShift::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxShift_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Move the box by a certain amount \n */" },
		{ "DisplayName", "Shift Box" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "TemplateName", "Bbox,Translate,Move,BoundingBox" },
		{ "ToolTip", "Move the box by a certain amount" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// the amount / vector to shift the box by\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "ToolTip", "the amount / vector to shift the box by" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoxShift>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxShift_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxShift, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxShift_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxShift, Amount), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxShift_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxShift, Result), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathBoxShift_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxShift_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxShift_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxShift_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxShift_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxShift_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathBoxBase,
	&NewStructOps,
	"RigVMFunction_MathBoxShift",
	Z_Construct_UScriptStruct_FRigVMFunction_MathBoxShift_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxShift_Statics::PropPointers),
	sizeof(FRigVMFunction_MathBoxShift),
	alignof(FRigVMFunction_MathBoxShift),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxShift_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathBoxShift_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoxShift()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxShift.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxShift.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoxShift_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxShift.InnerSingleton;
}
void FRigVMFunction_MathBoxShift::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathBoxShift::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Box,
		Amount,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathBoxShift

// Begin ScriptStruct FRigVMFunction_MathBoxMoveTo
static_assert(std::is_polymorphic<FRigVMFunction_MathBoxMoveTo>() == std::is_polymorphic<FRigVMFunction_MathBoxBase>(), "USTRUCT FRigVMFunction_MathBoxMoveTo cannot be polymorphic unless super FRigVMFunction_MathBoxBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxMoveTo;
class UScriptStruct* FRigVMFunction_MathBoxMoveTo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxMoveTo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxMoveTo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxMoveTo, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoxMoveTo"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathBoxMoveTo_Execute;
		Arguments_FRigVMFunction_MathBoxMoveTo_Execute.Emplace(TEXT("Box"), TEXT("FBox"));
		Arguments_FRigVMFunction_MathBoxMoveTo_Execute.Emplace(TEXT("Center"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathBoxMoveTo_Execute.Emplace(TEXT("Result"), TEXT("FBox"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathBoxMoveTo::Execute"), &FRigVMFunction_MathBoxMoveTo::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxMoveTo.OuterSingleton, Arguments_FRigVMFunction_MathBoxMoveTo_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxMoveTo.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoxMoveTo>()
{
	return FRigVMFunction_MathBoxMoveTo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxMoveTo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Moves the center of the box to a new location\n */" },
		{ "DisplayName", "Move Box To" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "TemplateName", "Bbox,Translate,Move,BoundingBox" },
		{ "ToolTip", "Moves the center of the box to a new location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// the new center for the box\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "ToolTip", "the new center for the box" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoxMoveTo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxMoveTo_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxMoveTo, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxMoveTo_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxMoveTo, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxMoveTo_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxMoveTo, Result), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathBoxMoveTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxMoveTo_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxMoveTo_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxMoveTo_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxMoveTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxMoveTo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathBoxBase,
	&NewStructOps,
	"RigVMFunction_MathBoxMoveTo",
	Z_Construct_UScriptStruct_FRigVMFunction_MathBoxMoveTo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxMoveTo_Statics::PropPointers),
	sizeof(FRigVMFunction_MathBoxMoveTo),
	alignof(FRigVMFunction_MathBoxMoveTo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxMoveTo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathBoxMoveTo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoxMoveTo()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxMoveTo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxMoveTo.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoxMoveTo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxMoveTo.InnerSingleton;
}
void FRigVMFunction_MathBoxMoveTo::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathBoxMoveTo::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Box,
		Center,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathBoxMoveTo

// Begin ScriptStruct FRigVMFunction_MathBoxExpand
static_assert(std::is_polymorphic<FRigVMFunction_MathBoxExpand>() == std::is_polymorphic<FRigVMFunction_MathBoxBase>(), "USTRUCT FRigVMFunction_MathBoxExpand cannot be polymorphic unless super FRigVMFunction_MathBoxBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxExpand;
class UScriptStruct* FRigVMFunction_MathBoxExpand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxExpand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxExpand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxExpand, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoxExpand"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathBoxExpand_Execute;
		Arguments_FRigVMFunction_MathBoxExpand_Execute.Emplace(TEXT("Box"), TEXT("FBox"));
		Arguments_FRigVMFunction_MathBoxExpand_Execute.Emplace(TEXT("Amount"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathBoxExpand_Execute.Emplace(TEXT("Result"), TEXT("FBox"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathBoxExpand::Execute"), &FRigVMFunction_MathBoxExpand::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxExpand.OuterSingleton, Arguments_FRigVMFunction_MathBoxExpand_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxExpand.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoxExpand>()
{
	return FRigVMFunction_MathBoxExpand::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxExpand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Expands the size of the box by a given amount\n */" },
		{ "DisplayName", "Expand Box" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "TemplateName", "Bbox,Scale,Grow,Shrink,BoundingBox" },
		{ "ToolTip", "Expands the size of the box by a given amount" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// the amount to grow / shrink the box by\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "ToolTip", "the amount to grow / shrink the box by" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoxExpand>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxExpand_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxExpand, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxExpand_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxExpand, Amount), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxExpand_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxExpand, Result), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathBoxExpand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxExpand_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxExpand_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxExpand_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxExpand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxExpand_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathBoxBase,
	&NewStructOps,
	"RigVMFunction_MathBoxExpand",
	Z_Construct_UScriptStruct_FRigVMFunction_MathBoxExpand_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxExpand_Statics::PropPointers),
	sizeof(FRigVMFunction_MathBoxExpand),
	alignof(FRigVMFunction_MathBoxExpand),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxExpand_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathBoxExpand_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoxExpand()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxExpand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxExpand.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoxExpand_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxExpand.InnerSingleton;
}
void FRigVMFunction_MathBoxExpand::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathBoxExpand::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Box,
		Amount,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathBoxExpand

// Begin ScriptStruct FRigVMFunction_MathBoxTransform
static_assert(std::is_polymorphic<FRigVMFunction_MathBoxTransform>() == std::is_polymorphic<FRigVMFunction_MathBoxBase>(), "USTRUCT FRigVMFunction_MathBoxTransform cannot be polymorphic unless super FRigVMFunction_MathBoxBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxTransform;
class UScriptStruct* FRigVMFunction_MathBoxTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxTransform, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoxTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathBoxTransform_Execute;
		Arguments_FRigVMFunction_MathBoxTransform_Execute.Emplace(TEXT("Box"), TEXT("FBox"));
		Arguments_FRigVMFunction_MathBoxTransform_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathBoxTransform_Execute.Emplace(TEXT("Result"), TEXT("FBox"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathBoxTransform::Execute"), &FRigVMFunction_MathBoxTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxTransform.OuterSingleton, Arguments_FRigVMFunction_MathBoxTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxTransform.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoxTransform>()
{
	return FRigVMFunction_MathBoxTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Transforms the box by a given transform\n */" },
		{ "DisplayName", "Transform Box" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "TemplateName", "Bbox,BoundingBox" },
		{ "ToolTip", "Transforms the box by a given transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoxTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxTransform_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxTransform, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxTransform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxTransform, Result), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathBoxTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxTransform_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxTransform_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxTransform_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathBoxBase,
	&NewStructOps,
	"RigVMFunction_MathBoxTransform",
	Z_Construct_UScriptStruct_FRigVMFunction_MathBoxTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxTransform_Statics::PropPointers),
	sizeof(FRigVMFunction_MathBoxTransform),
	alignof(FRigVMFunction_MathBoxTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathBoxTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoxTransform()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoxTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxTransform.InnerSingleton;
}
void FRigVMFunction_MathBoxTransform::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathBoxTransform::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Box,
		Transform,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathBoxTransform

// Begin ScriptStruct FRigVMFunction_MathBoxGetDistance
static_assert(std::is_polymorphic<FRigVMFunction_MathBoxGetDistance>() == std::is_polymorphic<FRigVMFunction_MathBoxBase>(), "USTRUCT FRigVMFunction_MathBoxGetDistance cannot be polymorphic unless super FRigVMFunction_MathBoxBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetDistance;
class UScriptStruct* FRigVMFunction_MathBoxGetDistance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetDistance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetDistance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoxGetDistance"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathBoxGetDistance_Execute;
		Arguments_FRigVMFunction_MathBoxGetDistance_Execute.Emplace(TEXT("Box"), TEXT("FBox"));
		Arguments_FRigVMFunction_MathBoxGetDistance_Execute.Emplace(TEXT("Position"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathBoxGetDistance_Execute.Emplace(TEXT("Square"), TEXT("bool"));
		Arguments_FRigVMFunction_MathBoxGetDistance_Execute.Emplace(TEXT("Valid"), TEXT("bool"));
		Arguments_FRigVMFunction_MathBoxGetDistance_Execute.Emplace(TEXT("Distance"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathBoxGetDistance::Execute"), &FRigVMFunction_MathBoxGetDistance::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetDistance.OuterSingleton, Arguments_FRigVMFunction_MathBoxGetDistance_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetDistance.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoxGetDistance>()
{
	return FRigVMFunction_MathBoxGetDistance::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the distance to a given box\n */" },
		{ "DisplayName", "Get Distance to Box" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "TemplateName", "Bbox,Closest,BoundingBox" },
		{ "ToolTip", "Returns the distance to a given box" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Square_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// if true the distance will be returned square\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "ToolTip", "if true the distance will be returned square" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Valid_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static void NewProp_Square_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Square;
	static void NewProp_Valid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Valid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoxGetDistance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxGetDistance, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxGetDistance, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance_Statics::NewProp_Square_SetBit(void* Obj)
{
	((FRigVMFunction_MathBoxGetDistance*)Obj)->Square = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance_Statics::NewProp_Square = { "Square", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_MathBoxGetDistance), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance_Statics::NewProp_Square_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Square_MetaData), NewProp_Square_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance_Statics::NewProp_Valid_SetBit(void* Obj)
{
	((FRigVMFunction_MathBoxGetDistance*)Obj)->Valid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_MathBoxGetDistance), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Valid_MetaData), NewProp_Valid_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxGetDistance, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance_Statics::NewProp_Square,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance_Statics::NewProp_Valid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance_Statics::NewProp_Distance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathBoxBase,
	&NewStructOps,
	"RigVMFunction_MathBoxGetDistance",
	Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance_Statics::PropPointers),
	sizeof(FRigVMFunction_MathBoxGetDistance),
	alignof(FRigVMFunction_MathBoxGetDistance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetDistance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetDistance.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetDistance.InnerSingleton;
}
void FRigVMFunction_MathBoxGetDistance::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathBoxGetDistance::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Box,
		Position,
		Square,
		Valid,
		Distance
	);
}
// End ScriptStruct FRigVMFunction_MathBoxGetDistance

// Begin ScriptStruct FRigVMFunction_MathBoxIsInside
static_assert(std::is_polymorphic<FRigVMFunction_MathBoxIsInside>() == std::is_polymorphic<FRigVMFunction_MathBoxBase>(), "USTRUCT FRigVMFunction_MathBoxIsInside cannot be polymorphic unless super FRigVMFunction_MathBoxBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxIsInside;
class UScriptStruct* FRigVMFunction_MathBoxIsInside::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxIsInside.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxIsInside.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsInside, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoxIsInside"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathBoxIsInside_Execute;
		Arguments_FRigVMFunction_MathBoxIsInside_Execute.Emplace(TEXT("Box"), TEXT("FBox"));
		Arguments_FRigVMFunction_MathBoxIsInside_Execute.Emplace(TEXT("Position"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathBoxIsInside_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathBoxIsInside::Execute"), &FRigVMFunction_MathBoxIsInside::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxIsInside.OuterSingleton, Arguments_FRigVMFunction_MathBoxIsInside_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxIsInside.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoxIsInside>()
{
	return FRigVMFunction_MathBoxIsInside::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsInside_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns true if a point is inside a given box\n */" },
		{ "DisplayName", "Is Inside Box" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "TemplateName", "Bbox,Contains,Encompasses,BoundingBox" },
		{ "ToolTip", "Returns true if a point is inside a given box" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoxIsInside>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsInside_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxIsInside, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsInside_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxIsInside, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsInside_Statics::NewProp_Result_SetBit(void* Obj)
{
	((FRigVMFunction_MathBoxIsInside*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsInside_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_MathBoxIsInside), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsInside_Statics::NewProp_Result_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsInside_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsInside_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsInside_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsInside_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsInside_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsInside_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathBoxBase,
	&NewStructOps,
	"RigVMFunction_MathBoxIsInside",
	Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsInside_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsInside_Statics::PropPointers),
	sizeof(FRigVMFunction_MathBoxIsInside),
	alignof(FRigVMFunction_MathBoxIsInside),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsInside_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsInside_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsInside()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxIsInside.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxIsInside.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsInside_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxIsInside.InnerSingleton;
}
void FRigVMFunction_MathBoxIsInside::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathBoxIsInside::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Box,
		Position,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathBoxIsInside

// Begin ScriptStruct FRigVMFunction_MathBoxGetVolume
static_assert(std::is_polymorphic<FRigVMFunction_MathBoxGetVolume>() == std::is_polymorphic<FRigVMFunction_MathBoxBase>(), "USTRUCT FRigVMFunction_MathBoxGetVolume cannot be polymorphic unless super FRigVMFunction_MathBoxBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetVolume;
class UScriptStruct* FRigVMFunction_MathBoxGetVolume::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetVolume.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetVolume.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetVolume, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoxGetVolume"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathBoxGetVolume_Execute;
		Arguments_FRigVMFunction_MathBoxGetVolume_Execute.Emplace(TEXT("Box"), TEXT("FBox"));
		Arguments_FRigVMFunction_MathBoxGetVolume_Execute.Emplace(TEXT("Volume"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathBoxGetVolume::Execute"), &FRigVMFunction_MathBoxGetVolume::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetVolume.OuterSingleton, Arguments_FRigVMFunction_MathBoxGetVolume_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetVolume.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoxGetVolume>()
{
	return FRigVMFunction_MathBoxGetVolume::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the volume of a given box\n */" },
		{ "DisplayName", "Get Box Volume" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "TemplateName", "Bbox,BoundingBox" },
		{ "ToolTip", "Returns the volume of a given box" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBox.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoxGetVolume>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetVolume_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxGetVolume, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathBoxGetVolume, Volume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Volume_MetaData), NewProp_Volume_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetVolume_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetVolume_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetVolume_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathBoxBase,
	&NewStructOps,
	"RigVMFunction_MathBoxGetVolume",
	Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetVolume_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetVolume_Statics::PropPointers),
	sizeof(FRigVMFunction_MathBoxGetVolume),
	alignof(FRigVMFunction_MathBoxGetVolume),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetVolume_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetVolume_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetVolume()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetVolume.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetVolume.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetVolume_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetVolume.InnerSingleton;
}
void FRigVMFunction_MathBoxGetVolume::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathBoxGetVolume::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Box,
		Volume
	);
}
// End ScriptStruct FRigVMFunction_MathBoxGetVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMFunction_MathBoxBase::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoxBase_Statics::NewStructOps, TEXT("RigVMFunction_MathBoxBase"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoxBase), 1503676666U) },
		{ FRigVMFunction_MathBoxFromArray::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics::NewStructOps, TEXT("RigVMFunction_MathBoxFromArray"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxFromArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoxFromArray), 357872512U) },
		{ FRigVMFunction_MathBoxIsValid::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsValid_Statics::NewStructOps, TEXT("RigVMFunction_MathBoxIsValid"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxIsValid, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoxIsValid), 224489521U) },
		{ FRigVMFunction_MathBoxGetCenter::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetCenter_Statics::NewStructOps, TEXT("RigVMFunction_MathBoxGetCenter"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetCenter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoxGetCenter), 3907032468U) },
		{ FRigVMFunction_MathBoxGetSize::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetSize_Statics::NewStructOps, TEXT("RigVMFunction_MathBoxGetSize"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetSize, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoxGetSize), 3787456099U) },
		{ FRigVMFunction_MathBoxShift::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoxShift_Statics::NewStructOps, TEXT("RigVMFunction_MathBoxShift"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxShift, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoxShift), 3475978725U) },
		{ FRigVMFunction_MathBoxMoveTo::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoxMoveTo_Statics::NewStructOps, TEXT("RigVMFunction_MathBoxMoveTo"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxMoveTo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoxMoveTo), 3100743206U) },
		{ FRigVMFunction_MathBoxExpand::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoxExpand_Statics::NewStructOps, TEXT("RigVMFunction_MathBoxExpand"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxExpand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoxExpand), 822745079U) },
		{ FRigVMFunction_MathBoxTransform::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoxTransform_Statics::NewStructOps, TEXT("RigVMFunction_MathBoxTransform"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoxTransform), 2044547664U) },
		{ FRigVMFunction_MathBoxGetDistance::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance_Statics::NewStructOps, TEXT("RigVMFunction_MathBoxGetDistance"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetDistance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoxGetDistance), 828516676U) },
		{ FRigVMFunction_MathBoxIsInside::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsInside_Statics::NewStructOps, TEXT("RigVMFunction_MathBoxIsInside"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxIsInside, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoxIsInside), 1473416326U) },
		{ FRigVMFunction_MathBoxGetVolume::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetVolume_Statics::NewStructOps, TEXT("RigVMFunction_MathBoxGetVolume"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoxGetVolume, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoxGetVolume), 3001820030U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_2893853248(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
