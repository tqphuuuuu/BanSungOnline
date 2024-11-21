// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Drawing/RigUnit_DrawContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_DrawContainer() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DrawContainerGetInstruction();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetColor();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetThickness();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetTransform();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_DrawContainerGetInstruction
static_assert(std::is_polymorphic<FRigUnit_DrawContainerGetInstruction>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_DrawContainerGetInstruction cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerGetInstruction;
class UScriptStruct* FRigUnit_DrawContainerGetInstruction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerGetInstruction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerGetInstruction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DrawContainerGetInstruction, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DrawContainerGetInstruction"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_DrawContainerGetInstruction_Execute;
		Arguments_FRigUnit_DrawContainerGetInstruction_Execute.Emplace(TEXT("InstructionName"), TEXT("FName"));
		Arguments_FRigUnit_DrawContainerGetInstruction_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigUnit_DrawContainerGetInstruction_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_DrawContainerGetInstruction::Execute"), &FRigUnit_DrawContainerGetInstruction::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerGetInstruction.OuterSingleton, Arguments_FRigUnit_DrawContainerGetInstruction_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerGetInstruction.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DrawContainerGetInstruction>()
{
	return FRigUnit_DrawContainerGetInstruction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_DrawContainerGetInstruction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Drawing" },
		{ "Comment", "/**\n * Get Imported Draw Container curve transform and color\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Get Draw Instruction" },
		{ "Keywords", "Curve,Shape" },
		{ "ModuleRelativePath", "Public/Units/Drawing/RigUnit_DrawContainer.h" },
		{ "NodeColor", "0.83077 0.846873 0.049707" },
		{ "ToolTip", "Get Imported Draw Container curve transform and color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstructionName_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "CustomWidget", "DrawingName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Drawing/RigUnit_DrawContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Drawing/RigUnit_DrawContainer.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Drawing/RigUnit_DrawContainer.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InstructionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DrawContainerGetInstruction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_DrawContainerGetInstruction_Statics::NewProp_InstructionName = { "InstructionName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DrawContainerGetInstruction, InstructionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstructionName_MetaData), NewProp_InstructionName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DrawContainerGetInstruction_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DrawContainerGetInstruction, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DrawContainerGetInstruction_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DrawContainerGetInstruction, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DrawContainerGetInstruction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DrawContainerGetInstruction_Statics::NewProp_InstructionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DrawContainerGetInstruction_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DrawContainerGetInstruction_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DrawContainerGetInstruction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DrawContainerGetInstruction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_DrawContainerGetInstruction",
	Z_Construct_UScriptStruct_FRigUnit_DrawContainerGetInstruction_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DrawContainerGetInstruction_Statics::PropPointers),
	sizeof(FRigUnit_DrawContainerGetInstruction),
	alignof(FRigUnit_DrawContainerGetInstruction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DrawContainerGetInstruction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_DrawContainerGetInstruction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DrawContainerGetInstruction()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerGetInstruction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerGetInstruction.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DrawContainerGetInstruction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerGetInstruction.InnerSingleton;
}
void FRigUnit_DrawContainerGetInstruction::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_DrawContainerGetInstruction::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		InstructionName,
		Color,
		Transform
	);
}
// End ScriptStruct FRigUnit_DrawContainerGetInstruction

// Begin ScriptStruct FRigUnit_DrawContainerSetColor
static_assert(std::is_polymorphic<FRigUnit_DrawContainerSetColor>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_DrawContainerSetColor cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerSetColor;
class UScriptStruct* FRigUnit_DrawContainerSetColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerSetColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerSetColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetColor, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DrawContainerSetColor"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_DrawContainerSetColor_Execute;
		Arguments_FRigUnit_DrawContainerSetColor_Execute.Emplace(TEXT("InstructionName"), TEXT("FName"));
		Arguments_FRigUnit_DrawContainerSetColor_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_DrawContainerSetColor::Execute"), &FRigUnit_DrawContainerSetColor::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerSetColor.OuterSingleton, Arguments_FRigUnit_DrawContainerSetColor_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerSetColor.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DrawContainerSetColor>()
{
	return FRigUnit_DrawContainerSetColor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Drawing" },
		{ "Comment", "/**\n * Set Imported Draw Container curve color\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Set Draw Color" },
		{ "Keywords", "Curve,Shape" },
		{ "ModuleRelativePath", "Public/Units/Drawing/RigUnit_DrawContainer.h" },
		{ "NodeColor", "0.83077 0.846873 0.049707" },
		{ "ToolTip", "Set Imported Draw Container curve color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstructionName_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "CustomWidget", "DrawingName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Drawing/RigUnit_DrawContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Drawing/RigUnit_DrawContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InstructionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DrawContainerSetColor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetColor_Statics::NewProp_InstructionName = { "InstructionName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DrawContainerSetColor, InstructionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstructionName_MetaData), NewProp_InstructionName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DrawContainerSetColor, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetColor_Statics::NewProp_InstructionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetColor_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetColor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_DrawContainerSetColor",
	Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetColor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetColor_Statics::PropPointers),
	sizeof(FRigUnit_DrawContainerSetColor),
	alignof(FRigUnit_DrawContainerSetColor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetColor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetColor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetColor()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerSetColor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerSetColor.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetColor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerSetColor.InnerSingleton;
}
void FRigUnit_DrawContainerSetColor::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_DrawContainerSetColor::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		InstructionName,
		Color
	);
}
// End ScriptStruct FRigUnit_DrawContainerSetColor

// Begin ScriptStruct FRigUnit_DrawContainerSetThickness
static_assert(std::is_polymorphic<FRigUnit_DrawContainerSetThickness>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_DrawContainerSetThickness cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerSetThickness;
class UScriptStruct* FRigUnit_DrawContainerSetThickness::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerSetThickness.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerSetThickness.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetThickness, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DrawContainerSetThickness"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_DrawContainerSetThickness_Execute;
		Arguments_FRigUnit_DrawContainerSetThickness_Execute.Emplace(TEXT("InstructionName"), TEXT("FName"));
		Arguments_FRigUnit_DrawContainerSetThickness_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_DrawContainerSetThickness::Execute"), &FRigUnit_DrawContainerSetThickness::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerSetThickness.OuterSingleton, Arguments_FRigUnit_DrawContainerSetThickness_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerSetThickness.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DrawContainerSetThickness>()
{
	return FRigUnit_DrawContainerSetThickness::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetThickness_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Drawing" },
		{ "Comment", "/**\n * Set Imported Draw Container curve thickness\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Set Draw Thickness" },
		{ "Keywords", "Curve,Shape" },
		{ "ModuleRelativePath", "Public/Units/Drawing/RigUnit_DrawContainer.h" },
		{ "NodeColor", "0.83077 0.846873 0.049707" },
		{ "ToolTip", "Set Imported Draw Container curve thickness" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstructionName_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "CustomWidget", "DrawingName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Drawing/RigUnit_DrawContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Drawing/RigUnit_DrawContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InstructionName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DrawContainerSetThickness>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetThickness_Statics::NewProp_InstructionName = { "InstructionName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DrawContainerSetThickness, InstructionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstructionName_MetaData), NewProp_InstructionName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetThickness_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DrawContainerSetThickness, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetThickness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetThickness_Statics::NewProp_InstructionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetThickness_Statics::NewProp_Thickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetThickness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetThickness_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_DrawContainerSetThickness",
	Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetThickness_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetThickness_Statics::PropPointers),
	sizeof(FRigUnit_DrawContainerSetThickness),
	alignof(FRigUnit_DrawContainerSetThickness),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetThickness_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetThickness_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetThickness()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerSetThickness.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerSetThickness.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetThickness_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerSetThickness.InnerSingleton;
}
void FRigUnit_DrawContainerSetThickness::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_DrawContainerSetThickness::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		InstructionName,
		Thickness
	);
}
// End ScriptStruct FRigUnit_DrawContainerSetThickness

// Begin ScriptStruct FRigUnit_DrawContainerSetTransform
static_assert(std::is_polymorphic<FRigUnit_DrawContainerSetTransform>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_DrawContainerSetTransform cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerSetTransform;
class UScriptStruct* FRigUnit_DrawContainerSetTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerSetTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerSetTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DrawContainerSetTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_DrawContainerSetTransform_Execute;
		Arguments_FRigUnit_DrawContainerSetTransform_Execute.Emplace(TEXT("InstructionName"), TEXT("FName"));
		Arguments_FRigUnit_DrawContainerSetTransform_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_DrawContainerSetTransform::Execute"), &FRigUnit_DrawContainerSetTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerSetTransform.OuterSingleton, Arguments_FRigUnit_DrawContainerSetTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerSetTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DrawContainerSetTransform>()
{
	return FRigUnit_DrawContainerSetTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Drawing" },
		{ "Comment", "/**\n * Set Imported Draw Container curve transform\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Set Draw Transform" },
		{ "Keywords", "Curve,Shape" },
		{ "ModuleRelativePath", "Public/Units/Drawing/RigUnit_DrawContainer.h" },
		{ "NodeColor", "0.83077 0.846873 0.049707" },
		{ "ToolTip", "Set Imported Draw Container curve transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstructionName_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "CustomWidget", "DrawingName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Drawing/RigUnit_DrawContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Drawing/RigUnit_DrawContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InstructionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DrawContainerSetTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetTransform_Statics::NewProp_InstructionName = { "InstructionName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DrawContainerSetTransform, InstructionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstructionName_MetaData), NewProp_InstructionName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DrawContainerSetTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetTransform_Statics::NewProp_InstructionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetTransform_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_DrawContainerSetTransform",
	Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetTransform_Statics::PropPointers),
	sizeof(FRigUnit_DrawContainerSetTransform),
	alignof(FRigUnit_DrawContainerSetTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetTransform()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerSetTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerSetTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerSetTransform.InnerSingleton;
}
void FRigUnit_DrawContainerSetTransform::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_DrawContainerSetTransform::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		InstructionName,
		Transform
	);
}
// End ScriptStruct FRigUnit_DrawContainerSetTransform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Drawing_RigUnit_DrawContainer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_DrawContainerGetInstruction::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DrawContainerGetInstruction_Statics::NewStructOps, TEXT("RigUnit_DrawContainerGetInstruction"), &Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerGetInstruction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DrawContainerGetInstruction), 588213756U) },
		{ FRigUnit_DrawContainerSetColor::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetColor_Statics::NewStructOps, TEXT("RigUnit_DrawContainerSetColor"), &Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerSetColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DrawContainerSetColor), 2366484683U) },
		{ FRigUnit_DrawContainerSetThickness::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetThickness_Statics::NewStructOps, TEXT("RigUnit_DrawContainerSetThickness"), &Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerSetThickness, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DrawContainerSetThickness), 2927690684U) },
		{ FRigUnit_DrawContainerSetTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetTransform_Statics::NewStructOps, TEXT("RigUnit_DrawContainerSetTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_DrawContainerSetTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DrawContainerSetTransform), 4220539862U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Drawing_RigUnit_DrawContainer_h_940101845(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Drawing_RigUnit_DrawContainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Drawing_RigUnit_DrawContainer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
