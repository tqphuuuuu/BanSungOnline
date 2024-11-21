// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_DebugPrimitives() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugArc();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugBoxNoSpace();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMFunction_DebugRectangle
static_assert(std::is_polymorphic<FRigVMFunction_DebugRectangle>() == std::is_polymorphic<FRigVMFunction_DebugBaseMutable>(), "USTRUCT FRigVMFunction_DebugRectangle cannot be polymorphic unless super FRigVMFunction_DebugBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangle;
class UScriptStruct* FRigVMFunction_DebugRectangle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DebugRectangle"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_DebugRectangle_Execute;
		Arguments_FRigVMFunction_DebugRectangle_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugRectangle_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_DebugRectangle_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigVMFunction_DebugRectangle_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_DebugRectangle_Execute.Emplace(TEXT("Space"), TEXT("FName"));
		Arguments_FRigVMFunction_DebugRectangle_Execute.Emplace(TEXT("WorldOffset"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugRectangle_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_DebugRectangle::Execute"), &FRigVMFunction_DebugRectangle::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangle.OuterSingleton, Arguments_FRigVMFunction_DebugRectangle_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangle.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DebugRectangle>()
{
	return FRigVMFunction_DebugRectangle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Draw Rectangle" },
		{ "Keywords", "Draw Square" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DebugRectangle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugRectangle, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugRectangle, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugRectangle, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugRectangle, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugRectangle, Space), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugRectangle, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldOffset_MetaData), NewProp_WorldOffset_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRigVMFunction_DebugRectangle*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_DebugRectangle), &Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_WorldOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable,
	&NewStructOps,
	"RigVMFunction_DebugRectangle",
	Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::PropPointers),
	sizeof(FRigVMFunction_DebugRectangle),
	alignof(FRigVMFunction_DebugRectangle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangle.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangle.InnerSingleton;
}
void FRigVMFunction_DebugRectangle::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_DebugRectangle::Execute(FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Transform,
		Color,
		Scale,
		Thickness,
		Space,
		WorldOffset,
		bEnabled
	);
}
// End ScriptStruct FRigVMFunction_DebugRectangle

// Begin ScriptStruct FRigVMFunction_DebugRectangleNoSpace
static_assert(std::is_polymorphic<FRigVMFunction_DebugRectangleNoSpace>() == std::is_polymorphic<FRigVMFunction_DebugBaseMutable>(), "USTRUCT FRigVMFunction_DebugRectangleNoSpace cannot be polymorphic unless super FRigVMFunction_DebugBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangleNoSpace;
class UScriptStruct* FRigVMFunction_DebugRectangleNoSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangleNoSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangleNoSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DebugRectangleNoSpace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_DebugRectangleNoSpace_Execute;
		Arguments_FRigVMFunction_DebugRectangleNoSpace_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugRectangleNoSpace_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_DebugRectangleNoSpace_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigVMFunction_DebugRectangleNoSpace_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_DebugRectangleNoSpace_Execute.Emplace(TEXT("WorldOffset"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugRectangleNoSpace_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_DebugRectangleNoSpace::Execute"), &FRigVMFunction_DebugRectangleNoSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangleNoSpace.OuterSingleton, Arguments_FRigVMFunction_DebugRectangleNoSpace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangleNoSpace.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DebugRectangleNoSpace>()
{
	return FRigVMFunction_DebugRectangleNoSpace::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Draws a rectangle in the viewport given a transform\n */" },
		{ "DisplayName", "Draw Rectangle" },
		{ "Keywords", "Draw Square" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
		{ "ToolTip", "Draws a rectangle in the viewport given a transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DebugRectangleNoSpace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugRectangleNoSpace, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugRectangleNoSpace, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugRectangleNoSpace, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugRectangleNoSpace, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugRectangleNoSpace, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldOffset_MetaData), NewProp_WorldOffset_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRigVMFunction_DebugRectangleNoSpace*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_DebugRectangleNoSpace), &Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_WorldOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable,
	&NewStructOps,
	"RigVMFunction_DebugRectangleNoSpace",
	Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::PropPointers),
	sizeof(FRigVMFunction_DebugRectangleNoSpace),
	alignof(FRigVMFunction_DebugRectangleNoSpace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangleNoSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangleNoSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangleNoSpace.InnerSingleton;
}
void FRigVMFunction_DebugRectangleNoSpace::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_DebugRectangleNoSpace::Execute(FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Transform,
		Color,
		Scale,
		Thickness,
		WorldOffset,
		bEnabled
	);
}
// End ScriptStruct FRigVMFunction_DebugRectangleNoSpace

// Begin ScriptStruct FRigVMFunction_DebugArc
static_assert(std::is_polymorphic<FRigVMFunction_DebugArc>() == std::is_polymorphic<FRigVMFunction_DebugBaseMutable>(), "USTRUCT FRigVMFunction_DebugArc cannot be polymorphic unless super FRigVMFunction_DebugBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArc;
class UScriptStruct* FRigVMFunction_DebugArc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DebugArc"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_DebugArc_Execute;
		Arguments_FRigVMFunction_DebugArc_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugArc_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_DebugArc_Execute.Emplace(TEXT("Radius"), TEXT("float"));
		Arguments_FRigVMFunction_DebugArc_Execute.Emplace(TEXT("MinimumDegrees"), TEXT("float"));
		Arguments_FRigVMFunction_DebugArc_Execute.Emplace(TEXT("MaximumDegrees"), TEXT("float"));
		Arguments_FRigVMFunction_DebugArc_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_DebugArc_Execute.Emplace(TEXT("Detail"), TEXT("int32"));
		Arguments_FRigVMFunction_DebugArc_Execute.Emplace(TEXT("Space"), TEXT("FName"));
		Arguments_FRigVMFunction_DebugArc_Execute.Emplace(TEXT("WorldOffset"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugArc_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_DebugArc::Execute"), &FRigVMFunction_DebugArc::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArc.OuterSingleton, Arguments_FRigVMFunction_DebugArc_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArc.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DebugArc>()
{
	return FRigVMFunction_DebugArc::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Draw Arc" },
		{ "Keywords", "Draw Ellipse, Draw Circle" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumDegrees_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumDegrees_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Detail_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Detail;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DebugArc>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugArc, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugArc, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugArc, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_MinimumDegrees = { "MinimumDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugArc, MinimumDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumDegrees_MetaData), NewProp_MinimumDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_MaximumDegrees = { "MaximumDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugArc, MaximumDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumDegrees_MetaData), NewProp_MaximumDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugArc, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Detail = { "Detail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugArc, Detail), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Detail_MetaData), NewProp_Detail_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugArc, Space), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugArc, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldOffset_MetaData), NewProp_WorldOffset_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRigVMFunction_DebugArc*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_DebugArc), &Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_MinimumDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_MaximumDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Detail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_WorldOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable,
	&NewStructOps,
	"RigVMFunction_DebugArc",
	Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::PropPointers),
	sizeof(FRigVMFunction_DebugArc),
	alignof(FRigVMFunction_DebugArc),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugArc()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArc.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArc.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArc.InnerSingleton;
}
void FRigVMFunction_DebugArc::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_DebugArc::Execute(FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Transform,
		Color,
		Radius,
		MinimumDegrees,
		MaximumDegrees,
		Thickness,
		Detail,
		Space,
		WorldOffset,
		bEnabled
	);
}
// End ScriptStruct FRigVMFunction_DebugArc

// Begin ScriptStruct FRigVMFunction_DebugArcNoSpace
static_assert(std::is_polymorphic<FRigVMFunction_DebugArcNoSpace>() == std::is_polymorphic<FRigVMFunction_DebugBaseMutable>(), "USTRUCT FRigVMFunction_DebugArcNoSpace cannot be polymorphic unless super FRigVMFunction_DebugBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArcNoSpace;
class UScriptStruct* FRigVMFunction_DebugArcNoSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArcNoSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArcNoSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DebugArcNoSpace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_DebugArcNoSpace_Execute;
		Arguments_FRigVMFunction_DebugArcNoSpace_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugArcNoSpace_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_DebugArcNoSpace_Execute.Emplace(TEXT("Radius"), TEXT("float"));
		Arguments_FRigVMFunction_DebugArcNoSpace_Execute.Emplace(TEXT("MinimumDegrees"), TEXT("float"));
		Arguments_FRigVMFunction_DebugArcNoSpace_Execute.Emplace(TEXT("MaximumDegrees"), TEXT("float"));
		Arguments_FRigVMFunction_DebugArcNoSpace_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_DebugArcNoSpace_Execute.Emplace(TEXT("Detail"), TEXT("int32"));
		Arguments_FRigVMFunction_DebugArcNoSpace_Execute.Emplace(TEXT("WorldOffset"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugArcNoSpace_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_DebugArcNoSpace::Execute"), &FRigVMFunction_DebugArcNoSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArcNoSpace.OuterSingleton, Arguments_FRigVMFunction_DebugArcNoSpace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArcNoSpace.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DebugArcNoSpace>()
{
	return FRigVMFunction_DebugArcNoSpace::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Draws an arc in the viewport, can take in different min and max degrees\n */" },
		{ "DisplayName", "Draw Arc" },
		{ "Keywords", "Draw Ellipse, Draw Circle" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
		{ "ToolTip", "Draws an arc in the viewport, can take in different min and max degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumDegrees_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumDegrees_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Detail_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Detail;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DebugArcNoSpace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugArcNoSpace, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugArcNoSpace, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugArcNoSpace, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_MinimumDegrees = { "MinimumDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugArcNoSpace, MinimumDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumDegrees_MetaData), NewProp_MinimumDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_MaximumDegrees = { "MaximumDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugArcNoSpace, MaximumDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumDegrees_MetaData), NewProp_MaximumDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugArcNoSpace, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Detail = { "Detail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugArcNoSpace, Detail), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Detail_MetaData), NewProp_Detail_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugArcNoSpace, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldOffset_MetaData), NewProp_WorldOffset_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRigVMFunction_DebugArcNoSpace*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_DebugArcNoSpace), &Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_MinimumDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_MaximumDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_Detail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_WorldOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable,
	&NewStructOps,
	"RigVMFunction_DebugArcNoSpace",
	Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::PropPointers),
	sizeof(FRigVMFunction_DebugArcNoSpace),
	alignof(FRigVMFunction_DebugArcNoSpace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArcNoSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArcNoSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArcNoSpace.InnerSingleton;
}
void FRigVMFunction_DebugArcNoSpace::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_DebugArcNoSpace::Execute(FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Transform,
		Color,
		Radius,
		MinimumDegrees,
		MaximumDegrees,
		Thickness,
		Detail,
		WorldOffset,
		bEnabled
	);
}
// End ScriptStruct FRigVMFunction_DebugArcNoSpace

// Begin ScriptStruct FRigVMFunction_DebugBoxNoSpace
static_assert(std::is_polymorphic<FRigVMFunction_DebugBoxNoSpace>() == std::is_polymorphic<FRigVMFunction_DebugBaseMutable>(), "USTRUCT FRigVMFunction_DebugBoxNoSpace cannot be polymorphic unless super FRigVMFunction_DebugBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBoxNoSpace;
class UScriptStruct* FRigVMFunction_DebugBoxNoSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBoxNoSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBoxNoSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DebugBoxNoSpace, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DebugBoxNoSpace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_DebugBoxNoSpace_Execute;
		Arguments_FRigVMFunction_DebugBoxNoSpace_Execute.Emplace(TEXT("Box"), TEXT("FBox"));
		Arguments_FRigVMFunction_DebugBoxNoSpace_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_DebugBoxNoSpace_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_DebugBoxNoSpace_Execute.Emplace(TEXT("WorldOffset"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugBoxNoSpace_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_DebugBoxNoSpace::Execute"), &FRigVMFunction_DebugBoxNoSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBoxNoSpace.OuterSingleton, Arguments_FRigVMFunction_DebugBoxNoSpace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBoxNoSpace.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DebugBoxNoSpace>()
{
	return FRigVMFunction_DebugBoxNoSpace::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_DebugBoxNoSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Draws a box in the viewport\n */" },
		{ "DisplayName", "Draw Box" },
		{ "Keywords", "BoundingBox,Bbox" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
		{ "ToolTip", "Draws a box in the viewport" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DebugBoxNoSpace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugBoxNoSpace_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugBoxNoSpace, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugBoxNoSpace_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugBoxNoSpace, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugBoxNoSpace_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugBoxNoSpace, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugBoxNoSpace_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugBoxNoSpace, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldOffset_MetaData), NewProp_WorldOffset_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_DebugBoxNoSpace_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRigVMFunction_DebugBoxNoSpace*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugBoxNoSpace_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_DebugBoxNoSpace), &Z_Construct_UScriptStruct_FRigVMFunction_DebugBoxNoSpace_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_DebugBoxNoSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugBoxNoSpace_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugBoxNoSpace_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugBoxNoSpace_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugBoxNoSpace_Statics::NewProp_WorldOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugBoxNoSpace_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugBoxNoSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DebugBoxNoSpace_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable,
	&NewStructOps,
	"RigVMFunction_DebugBoxNoSpace",
	Z_Construct_UScriptStruct_FRigVMFunction_DebugBoxNoSpace_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugBoxNoSpace_Statics::PropPointers),
	sizeof(FRigVMFunction_DebugBoxNoSpace),
	alignof(FRigVMFunction_DebugBoxNoSpace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugBoxNoSpace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_DebugBoxNoSpace_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugBoxNoSpace()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBoxNoSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBoxNoSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DebugBoxNoSpace_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBoxNoSpace.InnerSingleton;
}
void FRigVMFunction_DebugBoxNoSpace::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_DebugBoxNoSpace::Execute(FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Box,
		Color,
		Thickness,
		WorldOffset,
		bEnabled
	);
}
// End ScriptStruct FRigVMFunction_DebugBoxNoSpace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugPrimitives_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMFunction_DebugRectangle::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics::NewStructOps, TEXT("RigVMFunction_DebugRectangle"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DebugRectangle), 3215620346U) },
		{ FRigVMFunction_DebugRectangleNoSpace::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics::NewStructOps, TEXT("RigVMFunction_DebugRectangleNoSpace"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DebugRectangleNoSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DebugRectangleNoSpace), 3930963612U) },
		{ FRigVMFunction_DebugArc::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics::NewStructOps, TEXT("RigVMFunction_DebugArc"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DebugArc), 3837411545U) },
		{ FRigVMFunction_DebugArcNoSpace::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics::NewStructOps, TEXT("RigVMFunction_DebugArcNoSpace"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DebugArcNoSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DebugArcNoSpace), 1943014714U) },
		{ FRigVMFunction_DebugBoxNoSpace::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DebugBoxNoSpace_Statics::NewStructOps, TEXT("RigVMFunction_DebugBoxNoSpace"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBoxNoSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DebugBoxNoSpace), 3711496774U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugPrimitives_h_3779612042(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugPrimitives_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugPrimitives_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
