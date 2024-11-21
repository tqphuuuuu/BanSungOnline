// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkComponents/Public/Controllers/LiveLinkTransformController.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkTransformController() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkControllerBase();
LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkTransformController();
LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkTransformController_NoRegister();
LIVELINKCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformControllerData();
UPackage* Z_Construct_UPackage__Script_LiveLinkComponents();
// End Cross Module References

// Begin ScriptStruct FLiveLinkTransformControllerData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkTransformControllerData;
class UScriptStruct* FLiveLinkTransformControllerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkTransformControllerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkTransformControllerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTransformControllerData, (UObject*)Z_Construct_UPackage__Script_LiveLinkComponents(), TEXT("LiveLinkTransformControllerData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkTransformControllerData.OuterSingleton;
}
template<> LIVELINKCOMPONENTS_API UScriptStruct* StaticStruct<FLiveLinkTransformControllerData>()
{
	return FLiveLinkTransformControllerData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Controllers/LiveLinkTransformController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWorldTransform_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Set the transform of the component in world space of in its local reference frame. */" },
		{ "ModuleRelativePath", "Public/Controllers/LiveLinkTransformController.h" },
		{ "ToolTip", "Set the transform of the component in world space of in its local reference frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocation_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Whether we should set the owning actor's location with the value coming from live link. */" },
		{ "ModuleRelativePath", "Public/Controllers/LiveLinkTransformController.h" },
		{ "ToolTip", "Whether we should set the owning actor's location with the value coming from live link." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRotation_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Whether we should set the owning actor's rotation with the value coming from live link. */" },
		{ "ModuleRelativePath", "Public/Controllers/LiveLinkTransformController.h" },
		{ "ToolTip", "Whether we should set the owning actor's rotation with the value coming from live link." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseScale_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Whether we should set the owning actor's scale with the value coming from live link. */" },
		{ "ModuleRelativePath", "Public/Controllers/LiveLinkTransformController.h" },
		{ "ToolTip", "Whether we should set the owning actor's scale with the value coming from live link." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSweep_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/**\n\x09 * Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 * Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Controllers/LiveLinkTransformController.h" },
		{ "ToolTip", "Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\nOnly the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTeleport_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/**\n\x09 * Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 * If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 * If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 * If CCD is on and not teleporting, this will affect objects along the entire sweep volume.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Controllers/LiveLinkTransformController.h" },
		{ "ToolTip", "Whether we teleport the physics state (if physics collision is enabled for this object).\nIf true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\nIf false, physics velocity is updated based on the change in position (affecting ragdoll parts).\nIf CCD is on and not teleporting, this will affect objects along the entire sweep volume." },
	};
#endif // WITH_METADATA
	static void NewProp_bWorldTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldTransform;
	static void NewProp_bUseLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocation;
	static void NewProp_bUseRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRotation;
	static void NewProp_bUseScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseScale;
	static void NewProp_bSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
	static void NewProp_bTeleport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkTransformControllerData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bWorldTransform_SetBit(void* Obj)
{
	((FLiveLinkTransformControllerData*)Obj)->bWorldTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bWorldTransform = { "bWorldTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkTransformControllerData), &Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bWorldTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWorldTransform_MetaData), NewProp_bWorldTransform_MetaData) };
void Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseLocation_SetBit(void* Obj)
{
	((FLiveLinkTransformControllerData*)Obj)->bUseLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseLocation = { "bUseLocation", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkTransformControllerData), &Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLocation_MetaData), NewProp_bUseLocation_MetaData) };
void Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseRotation_SetBit(void* Obj)
{
	((FLiveLinkTransformControllerData*)Obj)->bUseRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseRotation = { "bUseRotation", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkTransformControllerData), &Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRotation_MetaData), NewProp_bUseRotation_MetaData) };
void Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseScale_SetBit(void* Obj)
{
	((FLiveLinkTransformControllerData*)Obj)->bUseScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseScale = { "bUseScale", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkTransformControllerData), &Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseScale_MetaData), NewProp_bUseScale_MetaData) };
void Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bSweep_SetBit(void* Obj)
{
	((FLiveLinkTransformControllerData*)Obj)->bSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkTransformControllerData), &Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSweep_MetaData), NewProp_bSweep_MetaData) };
void Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bTeleport_SetBit(void* Obj)
{
	((FLiveLinkTransformControllerData*)Obj)->bTeleport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkTransformControllerData), &Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTeleport_MetaData), NewProp_bTeleport_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bWorldTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bUseScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewProp_bTeleport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkComponents,
	nullptr,
	&NewStructOps,
	"LiveLinkTransformControllerData",
	Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::PropPointers),
	sizeof(FLiveLinkTransformControllerData),
	alignof(FLiveLinkTransformControllerData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformControllerData()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkTransformControllerData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkTransformControllerData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkTransformControllerData.InnerSingleton;
}
// End ScriptStruct FLiveLinkTransformControllerData

// Begin Class ULiveLinkTransformController
void ULiveLinkTransformController::StaticRegisterNativesULiveLinkTransformController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkTransformController);
UClass* Z_Construct_UClass_ULiveLinkTransformController_NoRegister()
{
	return ULiveLinkTransformController::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkTransformController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n */" },
		{ "IncludePath", "Controllers/LiveLinkTransformController.h" },
		{ "ModuleRelativePath", "Public/Controllers/LiveLinkTransformController.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentToControl_MetaData[] = {
		{ "ModuleRelativePath", "Public/Controllers/LiveLinkTransformController.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformData_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/Controllers/LiveLinkTransformController.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetTransform_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/**\n\x09 * Offset transform applied in local space to the controlled scene component\n\x09 */" },
		{ "ModuleRelativePath", "Public/Controllers/LiveLinkTransformController.h" },
		{ "ToolTip", "Offset transform applied in local space to the controlled scene component" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentToControl;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkTransformController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkTransformController_Statics::NewProp_ComponentToControl = { "ComponentToControl", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkTransformController, ComponentToControl_DEPRECATED), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentToControl_MetaData), NewProp_ComponentToControl_MetaData) }; // 3869904073
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkTransformController_Statics::NewProp_TransformData = { "TransformData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkTransformController, TransformData), Z_Construct_UScriptStruct_FLiveLinkTransformControllerData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformData_MetaData), NewProp_TransformData_MetaData) }; // 970997666
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkTransformController_Statics::NewProp_OffsetTransform = { "OffsetTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkTransformController, OffsetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetTransform_MetaData), NewProp_OffsetTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkTransformController_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformController_Statics::NewProp_ComponentToControl,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformController_Statics::NewProp_TransformData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformController_Statics::NewProp_OffsetTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkTransformController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkControllerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkTransformController_Statics::ClassParams = {
	&ULiveLinkTransformController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULiveLinkTransformController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformController_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformController_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkTransformController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkTransformController()
{
	if (!Z_Registration_Info_UClass_ULiveLinkTransformController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkTransformController.OuterSingleton, Z_Construct_UClass_ULiveLinkTransformController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkTransformController.OuterSingleton;
}
template<> LIVELINKCOMPONENTS_API UClass* StaticClass<ULiveLinkTransformController>()
{
	return ULiveLinkTransformController::StaticClass();
}
ULiveLinkTransformController::ULiveLinkTransformController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkTransformController);
ULiveLinkTransformController::~ULiveLinkTransformController() {}
// End Class ULiveLinkTransformController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkTransformController_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLiveLinkTransformControllerData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics::NewStructOps, TEXT("LiveLinkTransformControllerData"), &Z_Registration_Info_UScriptStruct_LiveLinkTransformControllerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkTransformControllerData), 970997666U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkTransformController, ULiveLinkTransformController::StaticClass, TEXT("ULiveLinkTransformController"), &Z_Registration_Info_UClass_ULiveLinkTransformController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkTransformController), 79290039U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkTransformController_h_3798019571(TEXT("/Script/LiveLinkComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkTransformController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkTransformController_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkTransformController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkTransformController_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
