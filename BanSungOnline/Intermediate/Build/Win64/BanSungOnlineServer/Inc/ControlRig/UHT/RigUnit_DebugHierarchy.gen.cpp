// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Debug/RigUnit_DebugHierarchy.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
#include "ControlRig/Public/Rigs/RigHierarchyPose.h"
#include "ControlRig/Public/Units/RigUnitContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_DebugHierarchy() {}

// Begin Cross Module References
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigExecuteContext();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigPose();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugPose();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugBase();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin Enum EControlRigDrawHierarchyMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControlRigDrawHierarchyMode;
static UEnum* EControlRigDrawHierarchyMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EControlRigDrawHierarchyMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EControlRigDrawHierarchyMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("EControlRigDrawHierarchyMode"));
	}
	return Z_Registration_Info_UEnum_EControlRigDrawHierarchyMode.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigDrawHierarchyMode::Type>()
{
	return EControlRigDrawHierarchyMode_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Axes.Comment", "/** Draw as axes */" },
		{ "Axes.Name", "EControlRigDrawHierarchyMode::Axes" },
		{ "Axes.ToolTip", "Draw as axes" },
		{ "Max.Comment", "/** MAX - invalid */" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "EControlRigDrawHierarchyMode::Max" },
		{ "Max.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugHierarchy.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EControlRigDrawHierarchyMode::Axes", (int64)EControlRigDrawHierarchyMode::Axes },
		{ "EControlRigDrawHierarchyMode::Max", (int64)EControlRigDrawHierarchyMode::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"EControlRigDrawHierarchyMode",
	"EControlRigDrawHierarchyMode::Type",
	Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode()
{
	if (!Z_Registration_Info_UEnum_EControlRigDrawHierarchyMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControlRigDrawHierarchyMode.InnerSingleton, Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EControlRigDrawHierarchyMode.InnerSingleton;
}
// End Enum EControlRigDrawHierarchyMode

// Begin ScriptStruct FRigUnit_DebugHierarchy
static_assert(std::is_polymorphic<FRigUnit_DebugHierarchy>() == std::is_polymorphic<FRigVMFunction_DebugBase>(), "USTRUCT FRigUnit_DebugHierarchy cannot be polymorphic unless super FRigVMFunction_DebugBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DebugHierarchy;
class UScriptStruct* FRigUnit_DebugHierarchy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DebugHierarchy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DebugHierarchy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DebugHierarchy"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_DebugHierarchy_Execute;
		Arguments_FRigUnit_DebugHierarchy_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_DebugHierarchy_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigUnit_DebugHierarchy_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigUnit_DebugHierarchy_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigUnit_DebugHierarchy_Execute.Emplace(TEXT("WorldOffset"), TEXT("FTransform"));
		Arguments_FRigUnit_DebugHierarchy_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_DebugHierarchy::Execute"), &FRigUnit_DebugHierarchy::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_DebugHierarchy.OuterSingleton, Arguments_FRigUnit_DebugHierarchy_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DebugHierarchy.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DebugHierarchy>()
{
	return FRigUnit_DebugHierarchy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Draws vectors on each bone in the viewport across the entire hierarchy\n */" },
		{ "DisplayName", "Draw Hierarchy" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugHierarchy.h" },
		{ "ToolTip", "Draws vectors on each bone in the viewport across the entire hierarchy" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "Pins" },
		{ "DisplayName", "Execute" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugHierarchy.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// the items to draw the pose for.\n// if this is empty we'll draw the whole hierarchy\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugHierarchy.h" },
		{ "ToolTip", "the items to draw the pose for.\nif this is empty we'll draw the whole hierarchy" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugHierarchy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecuteContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DebugHierarchy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugHierarchy, ExecuteContext), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecuteContext_MetaData), NewProp_ExecuteContext_MetaData) }; // 2294738602
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugHierarchy, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1315948141
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugHierarchy, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugHierarchy, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugHierarchy, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugHierarchy, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldOffset_MetaData), NewProp_WorldOffset_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRigUnit_DebugHierarchy*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_DebugHierarchy), &Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_ExecuteContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_WorldOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigVMFunction_DebugBase,
	&NewStructOps,
	"RigUnit_DebugHierarchy",
	Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::PropPointers),
	sizeof(FRigUnit_DebugHierarchy),
	alignof(FRigUnit_DebugHierarchy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DebugHierarchy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DebugHierarchy.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DebugHierarchy.InnerSingleton;
}
void FRigUnit_DebugHierarchy::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_DebugHierarchy::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> Items_0_Array(Items);
	StaticExecute(
		InExecuteContext,
		Items_0_Array,
		Scale,
		Color,
		Thickness,
		WorldOffset,
		bEnabled
	);
}
// End ScriptStruct FRigUnit_DebugHierarchy

// Begin ScriptStruct FRigUnit_DebugPose
static_assert(std::is_polymorphic<FRigUnit_DebugPose>() == std::is_polymorphic<FRigVMFunction_DebugBase>(), "USTRUCT FRigUnit_DebugPose cannot be polymorphic unless super FRigVMFunction_DebugBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DebugPose;
class UScriptStruct* FRigUnit_DebugPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DebugPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DebugPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugPose, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DebugPose"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_DebugPose_Execute;
		Arguments_FRigUnit_DebugPose_Execute.Emplace(TEXT("Pose"), TEXT("FRigPose"));
		Arguments_FRigUnit_DebugPose_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_DebugPose_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigUnit_DebugPose_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigUnit_DebugPose_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigUnit_DebugPose_Execute.Emplace(TEXT("WorldOffset"), TEXT("FTransform"));
		Arguments_FRigUnit_DebugPose_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_DebugPose::Execute"), &FRigUnit_DebugPose::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_DebugPose.OuterSingleton, Arguments_FRigUnit_DebugPose_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DebugPose.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DebugPose>()
{
	return FRigUnit_DebugPose::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Draws vectors on each bone in the viewport across the entire pose\n*/" },
		{ "DisplayName", "Draw Pose Cache" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugHierarchy.h" },
		{ "ToolTip", "Draws vectors on each bone in the viewport across the entire pose" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "Pins" },
		{ "DisplayName", "Execute" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugHierarchy.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// the items to draw the pose cache for.\n// if this is empty we'll draw the whole pose cache\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugHierarchy.h" },
		{ "ToolTip", "the items to draw the pose cache for.\nif this is empty we'll draw the whole pose cache" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugHierarchy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecuteContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DebugPose>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugPose, ExecuteContext), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecuteContext_MetaData), NewProp_ExecuteContext_MetaData) }; // 2294738602
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugPose, Pose), Z_Construct_UScriptStruct_FRigPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pose_MetaData), NewProp_Pose_MetaData) }; // 3436685557
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugPose, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1315948141
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugPose, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugPose, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugPose, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugPose, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldOffset_MetaData), NewProp_WorldOffset_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRigUnit_DebugPose*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_DebugPose), &Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_ExecuteContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Pose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_WorldOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigVMFunction_DebugBase,
	&NewStructOps,
	"RigUnit_DebugPose",
	Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::PropPointers),
	sizeof(FRigUnit_DebugPose),
	alignof(FRigUnit_DebugPose),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugPose()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DebugPose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DebugPose.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DebugPose.InnerSingleton;
}
void FRigUnit_DebugPose::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_DebugPose::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> Items_1_Array(Items);
	StaticExecute(
		InExecuteContext,
		Pose,
		Items_1_Array,
		Scale,
		Color,
		Thickness,
		WorldOffset,
		bEnabled
	);
}
// End ScriptStruct FRigUnit_DebugPose

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugHierarchy_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EControlRigDrawHierarchyMode_StaticEnum, TEXT("EControlRigDrawHierarchyMode"), &Z_Registration_Info_UEnum_EControlRigDrawHierarchyMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2415206611U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_DebugHierarchy::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewStructOps, TEXT("RigUnit_DebugHierarchy"), &Z_Registration_Info_UScriptStruct_RigUnit_DebugHierarchy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DebugHierarchy), 3593183414U) },
		{ FRigUnit_DebugPose::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewStructOps, TEXT("RigUnit_DebugPose"), &Z_Registration_Info_UScriptStruct_RigUnit_DebugPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DebugPose), 3434017606U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugHierarchy_h_3836317486(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugHierarchy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugHierarchy_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugHierarchy_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugHierarchy_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
