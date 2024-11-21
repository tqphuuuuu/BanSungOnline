// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/Drawing/LineSetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLineSetComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULineSetComponent();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULineSetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class ULineSetComponent Function AddLines
struct Z_Construct_UFunction_ULineSetComponent_AddLines_Statics
{
	struct LineSetComponent_eventAddLines_Parms
	{
		TArray<FVector> InStart;
		TArray<FVector> InEnd;
		FColor InColor;
		float InThickness;
		float InDepthBias;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Line Set" },
		{ "Comment", "/** Add lines to be rendered using the component. */" },
		{ "CPP_Default_InDepthBias", "0.000000" },
		{ "ModuleRelativePath", "Public/Drawing/LineSetComponent.h" },
		{ "ToolTip", "Add lines to be rendered using the component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStart_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InColor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InThickness_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDepthBias_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InStart_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InEnd_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InEnd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDepthBias;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULineSetComponent_AddLines_Statics::NewProp_InStart_Inner = { "InStart", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULineSetComponent_AddLines_Statics::NewProp_InStart = { "InStart", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineSetComponent_eventAddLines_Parms, InStart), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStart_MetaData), NewProp_InStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULineSetComponent_AddLines_Statics::NewProp_InEnd_Inner = { "InEnd", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULineSetComponent_AddLines_Statics::NewProp_InEnd = { "InEnd", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineSetComponent_eventAddLines_Parms, InEnd), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEnd_MetaData), NewProp_InEnd_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULineSetComponent_AddLines_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineSetComponent_eventAddLines_Parms, InColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InColor_MetaData), NewProp_InColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineSetComponent_AddLines_Statics::NewProp_InThickness = { "InThickness", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineSetComponent_eventAddLines_Parms, InThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InThickness_MetaData), NewProp_InThickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULineSetComponent_AddLines_Statics::NewProp_InDepthBias = { "InDepthBias", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineSetComponent_eventAddLines_Parms, InDepthBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDepthBias_MetaData), NewProp_InDepthBias_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULineSetComponent_AddLines_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineSetComponent_eventAddLines_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineSetComponent_AddLines_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineSetComponent_AddLines_Statics::NewProp_InStart_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineSetComponent_AddLines_Statics::NewProp_InStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineSetComponent_AddLines_Statics::NewProp_InEnd_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineSetComponent_AddLines_Statics::NewProp_InEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineSetComponent_AddLines_Statics::NewProp_InColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineSetComponent_AddLines_Statics::NewProp_InThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineSetComponent_AddLines_Statics::NewProp_InDepthBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineSetComponent_AddLines_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineSetComponent_AddLines_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineSetComponent_AddLines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineSetComponent, nullptr, "AddLines", nullptr, nullptr, Z_Construct_UFunction_ULineSetComponent_AddLines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineSetComponent_AddLines_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineSetComponent_AddLines_Statics::LineSetComponent_eventAddLines_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineSetComponent_AddLines_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineSetComponent_AddLines_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULineSetComponent_AddLines_Statics::LineSetComponent_eventAddLines_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULineSetComponent_AddLines()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineSetComponent_AddLines_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULineSetComponent::execAddLines)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_InStart);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_InEnd);
	P_GET_STRUCT_REF(FColor,Z_Param_Out_InColor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InThickness);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDepthBias);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddLines(Z_Param_Out_InStart,Z_Param_Out_InEnd,Z_Param_Out_InColor,Z_Param_InThickness,Z_Param_InDepthBias);
	P_NATIVE_END;
}
// End Class ULineSetComponent Function AddLines

// Begin Class ULineSetComponent Function Clear
struct Z_Construct_UFunction_ULineSetComponent_Clear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Line Set" },
		{ "Comment", "/** Clear the line set */" },
		{ "ModuleRelativePath", "Public/Drawing/LineSetComponent.h" },
		{ "ToolTip", "Clear the line set" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineSetComponent_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineSetComponent, nullptr, "Clear", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineSetComponent_Clear_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineSetComponent_Clear_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULineSetComponent_Clear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineSetComponent_Clear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULineSetComponent::execClear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Clear();
	P_NATIVE_END;
}
// End Class ULineSetComponent Function Clear

// Begin Class ULineSetComponent Function SetLineMaterial
struct Z_Construct_UFunction_ULineSetComponent_SetLineMaterial_Statics
{
	struct LineSetComponent_eventSetLineMaterial_Parms
	{
		UMaterialInterface* InLineMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Line Set" },
		{ "Comment", "/** Specify material which handles lines */" },
		{ "ModuleRelativePath", "Public/Drawing/LineSetComponent.h" },
		{ "ToolTip", "Specify material which handles lines" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InLineMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULineSetComponent_SetLineMaterial_Statics::NewProp_InLineMaterial = { "InLineMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LineSetComponent_eventSetLineMaterial_Parms, InLineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULineSetComponent_SetLineMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULineSetComponent_SetLineMaterial_Statics::NewProp_InLineMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineSetComponent_SetLineMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULineSetComponent_SetLineMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULineSetComponent, nullptr, "SetLineMaterial", nullptr, nullptr, Z_Construct_UFunction_ULineSetComponent_SetLineMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULineSetComponent_SetLineMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULineSetComponent_SetLineMaterial_Statics::LineSetComponent_eventSetLineMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULineSetComponent_SetLineMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULineSetComponent_SetLineMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULineSetComponent_SetLineMaterial_Statics::LineSetComponent_eventSetLineMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULineSetComponent_SetLineMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULineSetComponent_SetLineMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULineSetComponent::execSetLineMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_InLineMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLineMaterial(Z_Param_InLineMaterial);
	P_NATIVE_END;
}
// End Class ULineSetComponent Function SetLineMaterial

// Begin Class ULineSetComponent
void ULineSetComponent::StaticRegisterNativesULineSetComponent()
{
	UClass* Class = ULineSetComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddLines", &ULineSetComponent::execAddLines },
		{ "Clear", &ULineSetComponent::execClear },
		{ "SetLineMaterial", &ULineSetComponent::execSetLineMaterial },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULineSetComponent);
UClass* Z_Construct_UClass_ULineSetComponent_NoRegister()
{
	return ULineSetComponent::StaticClass();
}
struct Z_Construct_UClass_ULineSetComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Drawing/LineSetComponent.h" },
		{ "ModuleRelativePath", "Public/Drawing/LineSetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineMaterial_MetaData[] = {
		{ "Comment", "//~ End USceneComponent Interface.\n" },
		{ "ModuleRelativePath", "Public/Drawing/LineSetComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/LineSetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBoundsDirty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/LineSetComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static void NewProp_bBoundsDirty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoundsDirty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULineSetComponent_AddLines, "AddLines" }, // 3453951312
		{ &Z_Construct_UFunction_ULineSetComponent_Clear, "Clear" }, // 1812124058
		{ &Z_Construct_UFunction_ULineSetComponent_SetLineMaterial, "SetLineMaterial" }, // 4285915274
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULineSetComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULineSetComponent_Statics::NewProp_LineMaterial = { "LineMaterial", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULineSetComponent, LineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineMaterial_MetaData), NewProp_LineMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULineSetComponent_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULineSetComponent, Bounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) };
void Z_Construct_UClass_ULineSetComponent_Statics::NewProp_bBoundsDirty_SetBit(void* Obj)
{
	((ULineSetComponent*)Obj)->bBoundsDirty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULineSetComponent_Statics::NewProp_bBoundsDirty = { "bBoundsDirty", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULineSetComponent), &Z_Construct_UClass_ULineSetComponent_Statics::NewProp_bBoundsDirty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBoundsDirty_MetaData), NewProp_bBoundsDirty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULineSetComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineSetComponent_Statics::NewProp_LineMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineSetComponent_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineSetComponent_Statics::NewProp_bBoundsDirty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULineSetComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULineSetComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULineSetComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULineSetComponent_Statics::ClassParams = {
	&ULineSetComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULineSetComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULineSetComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineSetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULineSetComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULineSetComponent()
{
	if (!Z_Registration_Info_UClass_ULineSetComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULineSetComponent.OuterSingleton, Z_Construct_UClass_ULineSetComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULineSetComponent.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<ULineSetComponent>()
{
	return ULineSetComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULineSetComponent);
ULineSetComponent::~ULineSetComponent() {}
// End Class ULineSetComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_LineSetComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULineSetComponent, ULineSetComponent::StaticClass, TEXT("ULineSetComponent"), &Z_Registration_Info_UClass_ULineSetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULineSetComponent), 2724505875U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_LineSetComponent_h_533369887(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_LineSetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_LineSetComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
