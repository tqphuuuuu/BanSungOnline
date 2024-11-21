// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/SplineNavModifierComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineNavModifierComponent() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavModifierComponent();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_USplineNavModifierComponent();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_USplineNavModifierComponent_NoRegister();
NAVIGATIONSYSTEM_API UEnum* Z_Construct_UEnum_NavigationSystem_ESubdivisionLOD();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Enum ESubdivisionLOD
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubdivisionLOD;
static UEnum* ESubdivisionLOD_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESubdivisionLOD.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESubdivisionLOD.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ESubdivisionLOD, (UObject*)Z_Construct_UPackage__Script_NavigationSystem(), TEXT("ESubdivisionLOD"));
	}
	return Z_Registration_Info_UEnum_ESubdivisionLOD.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UEnum* StaticEnum<ESubdivisionLOD>()
{
	return ESubdivisionLOD_StaticEnum();
}
struct Z_Construct_UEnum_NavigationSystem_ESubdivisionLOD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "High.Name", "ESubdivisionLOD::High" },
		{ "Low.Name", "ESubdivisionLOD::Low" },
		{ "Medium.Name", "ESubdivisionLOD::Medium" },
		{ "ModuleRelativePath", "Public/SplineNavModifierComponent.h" },
		{ "Ultra.Name", "ESubdivisionLOD::Ultra" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESubdivisionLOD::Low", (int64)ESubdivisionLOD::Low },
		{ "ESubdivisionLOD::Medium", (int64)ESubdivisionLOD::Medium },
		{ "ESubdivisionLOD::High", (int64)ESubdivisionLOD::High },
		{ "ESubdivisionLOD::Ultra", (int64)ESubdivisionLOD::Ultra },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NavigationSystem_ESubdivisionLOD_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NavigationSystem,
	nullptr,
	"ESubdivisionLOD",
	"ESubdivisionLOD",
	Z_Construct_UEnum_NavigationSystem_ESubdivisionLOD_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NavigationSystem_ESubdivisionLOD_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NavigationSystem_ESubdivisionLOD_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NavigationSystem_ESubdivisionLOD_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NavigationSystem_ESubdivisionLOD()
{
	if (!Z_Registration_Info_UEnum_ESubdivisionLOD.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubdivisionLOD.InnerSingleton, Z_Construct_UEnum_NavigationSystem_ESubdivisionLOD_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESubdivisionLOD.InnerSingleton;
}
// End Enum ESubdivisionLOD

// Begin Class USplineNavModifierComponent Function UpdateNavigationWithComponentData
struct Z_Construct_UFunction_USplineNavModifierComponent_UpdateNavigationWithComponentData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Navigation" },
		{ "Comment", "/**\n\x09 * Recalculates bounds, then re-computes the NavModifierVolumes and re-marks the nav mesh.\n\x09 * Disable UpdateNavDataOnSplineChange and use this to manually update when either the spline or nav mesh is too large to handle rapid updates.\n\x09 *\n\x09 * Does nothing in non-editor builds\n\x09 */" },
		{ "DisplayName", "UpdateNavigationData" },
		{ "ModuleRelativePath", "Public/SplineNavModifierComponent.h" },
		{ "ToolTip", "Recalculates bounds, then re-computes the NavModifierVolumes and re-marks the nav mesh.\nDisable UpdateNavDataOnSplineChange and use this to manually update when either the spline or nav mesh is too large to handle rapid updates.\n\nDoes nothing in non-editor builds" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineNavModifierComponent_UpdateNavigationWithComponentData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineNavModifierComponent, nullptr, "UpdateNavigationWithComponentData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplineNavModifierComponent_UpdateNavigationWithComponentData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplineNavModifierComponent_UpdateNavigationWithComponentData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USplineNavModifierComponent_UpdateNavigationWithComponentData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineNavModifierComponent_UpdateNavigationWithComponentData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USplineNavModifierComponent::execUpdateNavigationWithComponentData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateNavigationWithComponentData();
	P_NATIVE_END;
}
// End Class USplineNavModifierComponent Function UpdateNavigationWithComponentData

// Begin Class USplineNavModifierComponent
void USplineNavModifierComponent::StaticRegisterNativesUSplineNavModifierComponent()
{
	UClass* Class = USplineNavModifierComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateNavigationWithComponentData", &USplineNavModifierComponent::execUpdateNavigationWithComponentData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USplineNavModifierComponent);
UClass* Z_Construct_UClass_USplineNavModifierComponent_NoRegister()
{
	return USplineNavModifierComponent::StaticClass();
}
struct Z_Construct_UClass_USplineNavModifierComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Used to assign a chosen NavArea to the nav mesh in the vicinity of a chosen spline.\n *\x09""A tube is constructed around the spline and intersected with the nav mesh. Set its dimensions with StrokeWidth and StrokeHeight.\n */" },
		{ "HideCategories", "Variable Tags Cooking Collision Activation" },
		{ "IncludePath", "SplineNavModifierComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SplineNavModifierComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Used to assign a chosen NavArea to the nav mesh in the vicinity of a chosen spline.\nA tube is constructed around the spline and intersected with the nav mesh. Set its dimensions with StrokeWidth and StrokeHeight." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateNavDataOnSplineChange_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/**\n\x09 * If true, any changes to Spline Components on this actor will cause this component to update the nav mesh.\n\x09 * This will be slow if the spline has many points, or the nav mesh is sufficiently large.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SplineNavModifierComponent.h" },
		{ "ToolTip", "If true, any changes to Spline Components on this actor will cause this component to update the nav mesh.\nThis will be slow if the spline has many points, or the nav mesh is sufficiently large." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachedSpline_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SplineComponent" },
		{ "Category", "Navigation" },
		{ "Comment", "/** The SplineComponent which will modify the nav mesh; it must also be attached to this component's owner actor */" },
		{ "DisplayName", "Nav Modifier Spline" },
		{ "ModuleRelativePath", "Public/SplineNavModifierComponent.h" },
		{ "ToolTip", "The SplineComponent which will modify the nav mesh; it must also be attached to this component's owner actor" },
		{ "UseComponentPicker", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrokeWidth_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ClampMin", "10" },
		{ "Comment", "/** Cross-sectional width of the tube enclosing the spline */" },
		{ "ModuleRelativePath", "Public/SplineNavModifierComponent.h" },
		{ "ToolTip", "Cross-sectional width of the tube enclosing the spline" },
		{ "UIMin", "10" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrokeHeight_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ClampMin", "10" },
		{ "Comment", "/** Cross-sectional height of the tube enclosing the spline */" },
		{ "ModuleRelativePath", "Public/SplineNavModifierComponent.h" },
		{ "ToolTip", "Cross-sectional height of the tube enclosing the spline" },
		{ "UIMin", "10" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubdivisionLOD_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Higher LOD will capture finer details in the spline */" },
		{ "ModuleRelativePath", "Public/SplineNavModifierComponent.h" },
		{ "ToolTip", "Higher LOD will capture finer details in the spline" },
	};
#endif // WITH_METADATA
	static void NewProp_bUpdateNavDataOnSplineChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateNavDataOnSplineChange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttachedSpline;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StrokeWidth;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StrokeHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubdivisionLOD_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SubdivisionLOD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USplineNavModifierComponent_UpdateNavigationWithComponentData, "UpdateNavigationWithComponentData" }, // 3171797392
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplineNavModifierComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USplineNavModifierComponent_Statics::NewProp_bUpdateNavDataOnSplineChange_SetBit(void* Obj)
{
	((USplineNavModifierComponent*)Obj)->bUpdateNavDataOnSplineChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineNavModifierComponent_Statics::NewProp_bUpdateNavDataOnSplineChange = { "bUpdateNavDataOnSplineChange", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USplineNavModifierComponent), &Z_Construct_UClass_USplineNavModifierComponent_Statics::NewProp_bUpdateNavDataOnSplineChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateNavDataOnSplineChange_MetaData), NewProp_bUpdateNavDataOnSplineChange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineNavModifierComponent_Statics::NewProp_AttachedSpline = { "AttachedSpline", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USplineNavModifierComponent, AttachedSpline), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachedSpline_MetaData), NewProp_AttachedSpline_MetaData) }; // 3869904073
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_USplineNavModifierComponent_Statics::NewProp_StrokeWidth = { "StrokeWidth", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USplineNavModifierComponent, StrokeWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrokeWidth_MetaData), NewProp_StrokeWidth_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_USplineNavModifierComponent_Statics::NewProp_StrokeHeight = { "StrokeHeight", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USplineNavModifierComponent, StrokeHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrokeHeight_MetaData), NewProp_StrokeHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USplineNavModifierComponent_Statics::NewProp_SubdivisionLOD_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USplineNavModifierComponent_Statics::NewProp_SubdivisionLOD = { "SubdivisionLOD", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USplineNavModifierComponent, SubdivisionLOD), Z_Construct_UEnum_NavigationSystem_ESubdivisionLOD, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubdivisionLOD_MetaData), NewProp_SubdivisionLOD_MetaData) }; // 992560970
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USplineNavModifierComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineNavModifierComponent_Statics::NewProp_bUpdateNavDataOnSplineChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineNavModifierComponent_Statics::NewProp_AttachedSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineNavModifierComponent_Statics::NewProp_StrokeWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineNavModifierComponent_Statics::NewProp_StrokeHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineNavModifierComponent_Statics::NewProp_SubdivisionLOD_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineNavModifierComponent_Statics::NewProp_SubdivisionLOD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USplineNavModifierComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USplineNavModifierComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNavModifierComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USplineNavModifierComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USplineNavModifierComponent_Statics::ClassParams = {
	&USplineNavModifierComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USplineNavModifierComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USplineNavModifierComponent_Statics::PropPointers),
	0,
	0x00A800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USplineNavModifierComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USplineNavModifierComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USplineNavModifierComponent()
{
	if (!Z_Registration_Info_UClass_USplineNavModifierComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USplineNavModifierComponent.OuterSingleton, Z_Construct_UClass_USplineNavModifierComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USplineNavModifierComponent.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<USplineNavModifierComponent>()
{
	return USplineNavModifierComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USplineNavModifierComponent);
USplineNavModifierComponent::~USplineNavModifierComponent() {}
// End Class USplineNavModifierComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_SplineNavModifierComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESubdivisionLOD_StaticEnum, TEXT("ESubdivisionLOD"), &Z_Registration_Info_UEnum_ESubdivisionLOD, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 992560970U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USplineNavModifierComponent, USplineNavModifierComponent::StaticClass, TEXT("USplineNavModifierComponent"), &Z_Registration_Info_UClass_USplineNavModifierComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USplineNavModifierComponent), 3895547783U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_SplineNavModifierComponent_h_4102136875(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_SplineNavModifierComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_SplineNavModifierComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_SplineNavModifierComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_SplineNavModifierComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
