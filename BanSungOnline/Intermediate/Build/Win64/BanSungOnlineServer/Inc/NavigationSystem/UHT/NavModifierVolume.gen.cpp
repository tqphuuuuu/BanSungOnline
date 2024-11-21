// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavModifierVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavModifierVolume() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AVolume();
ENGINE_API UClass* Z_Construct_UClass_UNavRelevantInterface_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavigationDataResolution();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavModifierVolume();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavModifierVolume_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Class ANavModifierVolume Function SetAreaClass
struct Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics
{
	struct NavModifierVolume_eventSetAreaClass_Parms
	{
		TSubclassOf<UNavArea> NewAreaClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_NewAreaClass", "None" },
		{ "ModuleRelativePath", "Public/NavModifierVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewAreaClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::NewProp_NewAreaClass = { "NewAreaClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavModifierVolume_eventSetAreaClass_Parms, NewAreaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavArea_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::NewProp_NewAreaClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavModifierVolume, nullptr, "SetAreaClass", nullptr, nullptr, Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::NavModifierVolume_eventSetAreaClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::NavModifierVolume_eventSetAreaClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANavModifierVolume_SetAreaClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANavModifierVolume::execSetAreaClass)
{
	P_GET_OBJECT(UClass,Z_Param_NewAreaClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAreaClass(Z_Param_NewAreaClass);
	P_NATIVE_END;
}
// End Class ANavModifierVolume Function SetAreaClass

// Begin Class ANavModifierVolume Function SetAreaClassToReplace
struct Z_Construct_UFunction_ANavModifierVolume_SetAreaClassToReplace_Statics
{
	struct NavModifierVolume_eventSetAreaClassToReplace_Parms
	{
		TSubclassOf<UNavArea> NewAreaClassToReplace;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_NewAreaClassToReplace", "None" },
		{ "ModuleRelativePath", "Public/NavModifierVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewAreaClassToReplace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ANavModifierVolume_SetAreaClassToReplace_Statics::NewProp_NewAreaClassToReplace = { "NewAreaClassToReplace", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavModifierVolume_eventSetAreaClassToReplace_Parms, NewAreaClassToReplace), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavArea_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavModifierVolume_SetAreaClassToReplace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavModifierVolume_SetAreaClassToReplace_Statics::NewProp_NewAreaClassToReplace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavModifierVolume_SetAreaClassToReplace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavModifierVolume_SetAreaClassToReplace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavModifierVolume, nullptr, "SetAreaClassToReplace", nullptr, nullptr, Z_Construct_UFunction_ANavModifierVolume_SetAreaClassToReplace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavModifierVolume_SetAreaClassToReplace_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANavModifierVolume_SetAreaClassToReplace_Statics::NavModifierVolume_eventSetAreaClassToReplace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavModifierVolume_SetAreaClassToReplace_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANavModifierVolume_SetAreaClassToReplace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANavModifierVolume_SetAreaClassToReplace_Statics::NavModifierVolume_eventSetAreaClassToReplace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANavModifierVolume_SetAreaClassToReplace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavModifierVolume_SetAreaClassToReplace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANavModifierVolume::execSetAreaClassToReplace)
{
	P_GET_OBJECT(UClass,Z_Param_NewAreaClassToReplace);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAreaClassToReplace(Z_Param_NewAreaClassToReplace);
	P_NATIVE_END;
}
// End Class ANavModifierVolume Function SetAreaClassToReplace

// Begin Class ANavModifierVolume
void ANavModifierVolume::StaticRegisterNativesANavModifierVolume()
{
	UClass* Class = ANavModifierVolume::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetAreaClass", &ANavModifierVolume::execSetAreaClass },
		{ "SetAreaClassToReplace", &ANavModifierVolume::execSetAreaClassToReplace },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavModifierVolume);
UClass* Z_Construct_UClass_ANavModifierVolume_NoRegister()
{
	return ANavModifierVolume::StaticClass();
}
struct Z_Construct_UClass_ANavModifierVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n *\x09""Allows applying selected AreaClass to navmesh, using Volume's shape\n */" },
		{ "HideCategories", "Navigation Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "NavModifierVolume.h" },
		{ "ModuleRelativePath", "Public/NavModifierVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Allows applying selected AreaClass to navmesh, using Volume's shape" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** NavArea to apply inside the defined volume. */" },
		{ "ModuleRelativePath", "Public/NavModifierVolume.h" },
		{ "ToolTip", "NavArea to apply inside the defined volume." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaClassToReplace_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** When setting this value, the modifier volume behavior changes : it will now replace any surface marked by AreaClassToReplace in the volume and replace it with AreaClass. */" },
		{ "ModuleRelativePath", "Public/NavModifierVolume.h" },
		{ "ToolTip", "When setting this value, the modifier volume behavior changes : it will now replace any surface marked by AreaClassToReplace in the volume and replace it with AreaClass." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaskFillCollisionUnderneathForNavmesh_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Experimental: if set, the 2D space occupied by the volume box will ignore FillCollisionUnderneathForNavmesh */" },
		{ "ModuleRelativePath", "Public/NavModifierVolume.h" },
		{ "ToolTip", "Experimental: if set, the 2D space occupied by the volume box will ignore FillCollisionUnderneathForNavmesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavMeshResolution_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Experimental: When not set to None, the navmesh tiles touched by the navigation modifier volume will be built\n\x09 * using the highest resolution found. */" },
		{ "ModuleRelativePath", "Public/NavModifierVolume.h" },
		{ "ToolTip", "Experimental: When not set to None, the navmesh tiles touched by the navigation modifier volume will be built\nusing the highest resolution found." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AreaClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AreaClassToReplace;
	static void NewProp_bMaskFillCollisionUnderneathForNavmesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaskFillCollisionUnderneathForNavmesh;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NavMeshResolution_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NavMeshResolution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANavModifierVolume_SetAreaClass, "SetAreaClass" }, // 400330687
		{ &Z_Construct_UFunction_ANavModifierVolume_SetAreaClassToReplace, "SetAreaClassToReplace" }, // 3565961450
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavModifierVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_AreaClass = { "AreaClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavModifierVolume, AreaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavArea_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaClass_MetaData), NewProp_AreaClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_AreaClassToReplace = { "AreaClassToReplace", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavModifierVolume, AreaClassToReplace), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavArea_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaClassToReplace_MetaData), NewProp_AreaClassToReplace_MetaData) };
void Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_bMaskFillCollisionUnderneathForNavmesh_SetBit(void* Obj)
{
	((ANavModifierVolume*)Obj)->bMaskFillCollisionUnderneathForNavmesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_bMaskFillCollisionUnderneathForNavmesh = { "bMaskFillCollisionUnderneathForNavmesh", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANavModifierVolume), &Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_bMaskFillCollisionUnderneathForNavmesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaskFillCollisionUnderneathForNavmesh_MetaData), NewProp_bMaskFillCollisionUnderneathForNavmesh_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_NavMeshResolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_NavMeshResolution = { "NavMeshResolution", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavModifierVolume, NavMeshResolution), Z_Construct_UEnum_Engine_ENavigationDataResolution, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavMeshResolution_MetaData), NewProp_NavMeshResolution_MetaData) }; // 3038167996
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavModifierVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_AreaClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_AreaClassToReplace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_bMaskFillCollisionUnderneathForNavmesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_NavMeshResolution_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_NavMeshResolution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavModifierVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANavModifierVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavModifierVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANavModifierVolume_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNavRelevantInterface_NoRegister, (int32)VTABLE_OFFSET(ANavModifierVolume, INavRelevantInterface), false },  // 2600625190
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavModifierVolume_Statics::ClassParams = {
	&ANavModifierVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANavModifierVolume_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANavModifierVolume_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANavModifierVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ANavModifierVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANavModifierVolume()
{
	if (!Z_Registration_Info_UClass_ANavModifierVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavModifierVolume.OuterSingleton, Z_Construct_UClass_ANavModifierVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANavModifierVolume.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<ANavModifierVolume>()
{
	return ANavModifierVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANavModifierVolume);
ANavModifierVolume::~ANavModifierVolume() {}
// End Class ANavModifierVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANavModifierVolume, ANavModifierVolume::StaticClass, TEXT("ANavModifierVolume"), &Z_Registration_Info_UClass_ANavModifierVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavModifierVolume), 4152723818U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_1482736030(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
