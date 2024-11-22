// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/TransformSources.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformSources() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseTransformSource();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseTransformSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoComponentWorldTransformSource();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoComponentWorldTransformSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoScaledAndUnscaledTransformSources();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoScaledAndUnscaledTransformSources_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoScaledTransformSource();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoScaledTransformSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoTransformProxyTransformSource();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoTransformProxyTransformSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoTransformSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UGizmoBaseTransformSource
void UGizmoBaseTransformSource::StaticRegisterNativesUGizmoBaseTransformSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoBaseTransformSource);
UClass* Z_Construct_UClass_UGizmoBaseTransformSource_NoRegister()
{
	return UGizmoBaseTransformSource::StaticClass();
}
struct Z_Construct_UClass_UGizmoBaseTransformSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoBaseTransformSource is a base implementation of IGizmoTransformSource that \n * adds an OnTransformChanged delegate. This class cannot be used directly and must be subclassed.\n */" },
		{ "IncludePath", "BaseGizmos/TransformSources.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformSources.h" },
		{ "ToolTip", "UGizmoBaseTransformSource is a base implementation of IGizmoTransformSource that\nadds an OnTransformChanged delegate. This class cannot be used directly and must be subclassed." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoBaseTransformSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGizmoBaseTransformSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoBaseTransformSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoBaseTransformSource_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGizmoTransformSource_NoRegister, (int32)VTABLE_OFFSET(UGizmoBaseTransformSource, IGizmoTransformSource), false },  // 2915569970
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoBaseTransformSource_Statics::ClassParams = {
	&UGizmoBaseTransformSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoBaseTransformSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoBaseTransformSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoBaseTransformSource()
{
	if (!Z_Registration_Info_UClass_UGizmoBaseTransformSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoBaseTransformSource.OuterSingleton, Z_Construct_UClass_UGizmoBaseTransformSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoBaseTransformSource.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoBaseTransformSource>()
{
	return UGizmoBaseTransformSource::StaticClass();
}
UGizmoBaseTransformSource::UGizmoBaseTransformSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoBaseTransformSource);
UGizmoBaseTransformSource::~UGizmoBaseTransformSource() {}
// End Class UGizmoBaseTransformSource

// Begin Class UGizmoComponentWorldTransformSource
void UGizmoComponentWorldTransformSource::StaticRegisterNativesUGizmoComponentWorldTransformSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoComponentWorldTransformSource);
UClass* Z_Construct_UClass_UGizmoComponentWorldTransformSource_NoRegister()
{
	return UGizmoComponentWorldTransformSource::StaticClass();
}
struct Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoComponentWorldTransformSource implements IGizmoTransformSource (via UGizmoBaseTransformSource)\n * based on the internal transform of a USceneComponent.\n */" },
		{ "IncludePath", "BaseGizmos/TransformSources.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformSources.h" },
		{ "ToolTip", "UGizmoComponentWorldTransformSource implements IGizmoTransformSource (via UGizmoBaseTransformSource)\nbased on the internal transform of a USceneComponent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformSources.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bModifyComponentOnTransform_MetaData[] = {
		{ "Comment", "/** If true, Component->Modify() is called on SetTransform */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformSources.h" },
		{ "ToolTip", "If true, Component->Modify() is called on SetTransform" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static void NewProp_bModifyComponentOnTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bModifyComponentOnTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoComponentWorldTransformSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoComponentWorldTransformSource, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
void Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::NewProp_bModifyComponentOnTransform_SetBit(void* Obj)
{
	((UGizmoComponentWorldTransformSource*)Obj)->bModifyComponentOnTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::NewProp_bModifyComponentOnTransform = { "bModifyComponentOnTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoComponentWorldTransformSource), &Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::NewProp_bModifyComponentOnTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bModifyComponentOnTransform_MetaData), NewProp_bModifyComponentOnTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::NewProp_bModifyComponentOnTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGizmoBaseTransformSource,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::ClassParams = {
	&UGizmoComponentWorldTransformSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoComponentWorldTransformSource()
{
	if (!Z_Registration_Info_UClass_UGizmoComponentWorldTransformSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoComponentWorldTransformSource.OuterSingleton, Z_Construct_UClass_UGizmoComponentWorldTransformSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoComponentWorldTransformSource.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoComponentWorldTransformSource>()
{
	return UGizmoComponentWorldTransformSource::StaticClass();
}
UGizmoComponentWorldTransformSource::UGizmoComponentWorldTransformSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoComponentWorldTransformSource);
UGizmoComponentWorldTransformSource::~UGizmoComponentWorldTransformSource() {}
// End Class UGizmoComponentWorldTransformSource

// Begin Class UGizmoScaledTransformSource
void UGizmoScaledTransformSource::StaticRegisterNativesUGizmoScaledTransformSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoScaledTransformSource);
UClass* Z_Construct_UClass_UGizmoScaledTransformSource_NoRegister()
{
	return UGizmoScaledTransformSource::StaticClass();
}
struct Z_Construct_UClass_UGizmoScaledTransformSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @deprecated Use UGizmoScaledAndUnscaledTransformSources instead.\n *\n * Old description:\n * UGizmoScaledTransformSource wraps another IGizmoTransformSource implementation and adds a\n * separate scaling vector to the Transform. The main use of this class is to support scaling\n * in a 3D gizmo without actually scaling the Gizmo itself. Generally our pattern is to apply\n * the gizmo's position/rotation transform to the target object via a TransformProxy, but\n * that does not work with Scaling. So this class stores the scaling vector separately, provided by\n * an external source via FSeparateScaleProvider, and in GetTransform/SetTransform rewrites the\n * Transform from the child IGizmoTransformSource with the new scale.\n */" },
		{ "IncludePath", "BaseGizmos/TransformSources.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformSources.h" },
		{ "ToolTip", "@deprecated Use UGizmoScaledAndUnscaledTransformSources instead.\n\nOld description:\nUGizmoScaledTransformSource wraps another IGizmoTransformSource implementation and adds a\nseparate scaling vector to the Transform. The main use of this class is to support scaling\nin a 3D gizmo without actually scaling the Gizmo itself. Generally our pattern is to apply\nthe gizmo's position/rotation transform to the target object via a TransformProxy, but\nthat does not work with Scaling. So this class stores the scaling vector separately, provided by\nan external source via FSeparateScaleProvider, and in GetTransform/SetTransform rewrites the\nTransform from the child IGizmoTransformSource with the new scale." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildTransformSource_MetaData[] = {
		{ "Comment", "/**\n\x09 * Child transform source\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformSources.h" },
		{ "ToolTip", "Child transform source" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ChildTransformSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoScaledTransformSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoScaledTransformSource_Statics::NewProp_ChildTransformSource = { "ChildTransformSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoScaledTransformSource, ChildTransformSource), Z_Construct_UClass_UGizmoTransformSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildTransformSource_MetaData), NewProp_ChildTransformSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoScaledTransformSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoScaledTransformSource_Statics::NewProp_ChildTransformSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoScaledTransformSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoScaledTransformSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGizmoBaseTransformSource,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoScaledTransformSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoScaledTransformSource_Statics::ClassParams = {
	&UGizmoScaledTransformSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoScaledTransformSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoScaledTransformSource_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoScaledTransformSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoScaledTransformSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoScaledTransformSource()
{
	if (!Z_Registration_Info_UClass_UGizmoScaledTransformSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoScaledTransformSource.OuterSingleton, Z_Construct_UClass_UGizmoScaledTransformSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoScaledTransformSource.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoScaledTransformSource>()
{
	return UGizmoScaledTransformSource::StaticClass();
}
UGizmoScaledTransformSource::UGizmoScaledTransformSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoScaledTransformSource);
UGizmoScaledTransformSource::~UGizmoScaledTransformSource() {}
// End Class UGizmoScaledTransformSource

// Begin Class UGizmoTransformProxyTransformSource
void UGizmoTransformProxyTransformSource::StaticRegisterNativesUGizmoTransformProxyTransformSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoTransformProxyTransformSource);
UClass* Z_Construct_UClass_UGizmoTransformProxyTransformSource_NoRegister()
{
	return UGizmoTransformProxyTransformSource::StaticClass();
}
struct Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoTransformProxyTransformSource implements IGizmoTransformSource (via UGizmoBaseTransformSource)\n * based on the internal transform of a UTransformProxy.\n */" },
		{ "IncludePath", "BaseGizmos/TransformSources.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformSources.h" },
		{ "ToolTip", "UGizmoTransformProxyTransformSource implements IGizmoTransformSource (via UGizmoBaseTransformSource)\nbased on the internal transform of a UTransformProxy." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Proxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformSources.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Proxy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoTransformProxyTransformSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoTransformProxyTransformSource, Proxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Proxy_MetaData), NewProp_Proxy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::NewProp_Proxy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGizmoBaseTransformSource,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::ClassParams = {
	&UGizmoTransformProxyTransformSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoTransformProxyTransformSource()
{
	if (!Z_Registration_Info_UClass_UGizmoTransformProxyTransformSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoTransformProxyTransformSource.OuterSingleton, Z_Construct_UClass_UGizmoTransformProxyTransformSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoTransformProxyTransformSource.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoTransformProxyTransformSource>()
{
	return UGizmoTransformProxyTransformSource::StaticClass();
}
UGizmoTransformProxyTransformSource::UGizmoTransformProxyTransformSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoTransformProxyTransformSource);
UGizmoTransformProxyTransformSource::~UGizmoTransformProxyTransformSource() {}
// End Class UGizmoTransformProxyTransformSource

// Begin Class UGizmoScaledAndUnscaledTransformSources
void UGizmoScaledAndUnscaledTransformSources::StaticRegisterNativesUGizmoScaledAndUnscaledTransformSources()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoScaledAndUnscaledTransformSources);
UClass* Z_Construct_UClass_UGizmoScaledAndUnscaledTransformSources_NoRegister()
{
	return UGizmoScaledAndUnscaledTransformSources::StaticClass();
}
struct Z_Construct_UClass_UGizmoScaledAndUnscaledTransformSources_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A wrapper around two IGizmoTransformSource's that generally forwards transforms to/from its ScaledTransformSource,\n * but also forwards an unscaled version of the transform to UnscaledTransformSource on SetTransform calls.\n * This handles the common case of wanting to apply the entire transform to one IGizmoTransformSource, but only\n * the unscaled transform to a gizmo component (since we don't want to scale the gizmo component but do want to \n * rotate/translate it).\n */" },
		{ "IncludePath", "BaseGizmos/TransformSources.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformSources.h" },
		{ "ToolTip", "A wrapper around two IGizmoTransformSource's that generally forwards transforms to/from its ScaledTransformSource,\nbut also forwards an unscaled version of the transform to UnscaledTransformSource on SetTransform calls.\nThis handles the common case of wanting to apply the entire transform to one IGizmoTransformSource, but only\nthe unscaled transform to a gizmo component (since we don't want to scale the gizmo component but do want to\nrotate/translate it)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaledTransformSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformSources.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnscaledTransformSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformSources.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ScaledTransformSource;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_UnscaledTransformSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoScaledAndUnscaledTransformSources>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoScaledAndUnscaledTransformSources_Statics::NewProp_ScaledTransformSource = { "ScaledTransformSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoScaledAndUnscaledTransformSources, ScaledTransformSource), Z_Construct_UClass_UGizmoTransformSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaledTransformSource_MetaData), NewProp_ScaledTransformSource_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoScaledAndUnscaledTransformSources_Statics::NewProp_UnscaledTransformSource = { "UnscaledTransformSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoScaledAndUnscaledTransformSources, UnscaledTransformSource), Z_Construct_UClass_UGizmoTransformSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnscaledTransformSource_MetaData), NewProp_UnscaledTransformSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoScaledAndUnscaledTransformSources_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoScaledAndUnscaledTransformSources_Statics::NewProp_ScaledTransformSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoScaledAndUnscaledTransformSources_Statics::NewProp_UnscaledTransformSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoScaledAndUnscaledTransformSources_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoScaledAndUnscaledTransformSources_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGizmoBaseTransformSource,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoScaledAndUnscaledTransformSources_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoScaledAndUnscaledTransformSources_Statics::ClassParams = {
	&UGizmoScaledAndUnscaledTransformSources::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoScaledAndUnscaledTransformSources_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoScaledAndUnscaledTransformSources_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoScaledAndUnscaledTransformSources_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoScaledAndUnscaledTransformSources_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoScaledAndUnscaledTransformSources()
{
	if (!Z_Registration_Info_UClass_UGizmoScaledAndUnscaledTransformSources.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoScaledAndUnscaledTransformSources.OuterSingleton, Z_Construct_UClass_UGizmoScaledAndUnscaledTransformSources_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoScaledAndUnscaledTransformSources.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoScaledAndUnscaledTransformSources>()
{
	return UGizmoScaledAndUnscaledTransformSources::StaticClass();
}
UGizmoScaledAndUnscaledTransformSources::UGizmoScaledAndUnscaledTransformSources(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoScaledAndUnscaledTransformSources);
UGizmoScaledAndUnscaledTransformSources::~UGizmoScaledAndUnscaledTransformSources() {}
// End Class UGizmoScaledAndUnscaledTransformSources

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoBaseTransformSource, UGizmoBaseTransformSource::StaticClass, TEXT("UGizmoBaseTransformSource"), &Z_Registration_Info_UClass_UGizmoBaseTransformSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoBaseTransformSource), 1144494793U) },
		{ Z_Construct_UClass_UGizmoComponentWorldTransformSource, UGizmoComponentWorldTransformSource::StaticClass, TEXT("UGizmoComponentWorldTransformSource"), &Z_Registration_Info_UClass_UGizmoComponentWorldTransformSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoComponentWorldTransformSource), 2275609052U) },
		{ Z_Construct_UClass_UGizmoScaledTransformSource, UGizmoScaledTransformSource::StaticClass, TEXT("UGizmoScaledTransformSource"), &Z_Registration_Info_UClass_UGizmoScaledTransformSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoScaledTransformSource), 2043097371U) },
		{ Z_Construct_UClass_UGizmoTransformProxyTransformSource, UGizmoTransformProxyTransformSource::StaticClass, TEXT("UGizmoTransformProxyTransformSource"), &Z_Registration_Info_UClass_UGizmoTransformProxyTransformSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoTransformProxyTransformSource), 641049231U) },
		{ Z_Construct_UClass_UGizmoScaledAndUnscaledTransformSources, UGizmoScaledAndUnscaledTransformSources::StaticClass, TEXT("UGizmoScaledAndUnscaledTransformSources"), &Z_Registration_Info_UClass_UGizmoScaledAndUnscaledTransformSources, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoScaledAndUnscaledTransformSources), 1660946054U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_355764722(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformSources_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS