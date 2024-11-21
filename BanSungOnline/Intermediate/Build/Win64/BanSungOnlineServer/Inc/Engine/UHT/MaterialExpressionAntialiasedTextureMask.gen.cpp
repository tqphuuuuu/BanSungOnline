// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionAntialiasedTextureMask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionAntialiasedTextureMask() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureColorChannel();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ETextureColorChannel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureColorChannel;
static UEnum* ETextureColorChannel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETextureColorChannel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETextureColorChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureColorChannel, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETextureColorChannel"));
	}
	return Z_Registration_Info_UEnum_ETextureColorChannel.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ETextureColorChannel>()
{
	return ETextureColorChannel_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ETextureColorChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionAntialiasedTextureMask.h" },
		{ "TCC_Alpha.Name", "TCC_Alpha" },
		{ "TCC_Blue.Name", "TCC_Blue" },
		{ "TCC_Green.Name", "TCC_Green" },
		{ "TCC_MAX.Name", "TCC_MAX" },
		{ "TCC_Red.Name", "TCC_Red" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "TCC_Red", (int64)TCC_Red },
		{ "TCC_Green", (int64)TCC_Green },
		{ "TCC_Blue", (int64)TCC_Blue },
		{ "TCC_Alpha", (int64)TCC_Alpha },
		{ "TCC_MAX", (int64)TCC_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureColorChannel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ETextureColorChannel",
	"ETextureColorChannel",
	Z_Construct_UEnum_Engine_ETextureColorChannel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureColorChannel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureColorChannel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ETextureColorChannel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ETextureColorChannel()
{
	if (!Z_Registration_Info_UEnum_ETextureColorChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureColorChannel.InnerSingleton, Z_Construct_UEnum_Engine_ETextureColorChannel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETextureColorChannel.InnerSingleton;
}
// End Enum ETextureColorChannel

// Begin Class UMaterialExpressionAntialiasedTextureMask
void UMaterialExpressionAntialiasedTextureMask::StaticRegisterNativesUMaterialExpressionAntialiasedTextureMask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionAntialiasedTextureMask);
UClass* Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_NoRegister()
{
	return UMaterialExpressionAntialiasedTextureMask::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionAntialiasedTextureMask.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionAntialiasedTextureMask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[] = {
		{ "Category", "MaterialExpressionAntialiasedTextureMask" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionAntialiasedTextureMask.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
		{ "Category", "MaterialExpressionAntialiasedTextureMask" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionAntialiasedTextureMask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Channel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionAntialiasedTextureMask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionAntialiasedTextureMask, Threshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Threshold_MetaData), NewProp_Threshold_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionAntialiasedTextureMask, Channel), Z_Construct_UEnum_Engine_ETextureColorChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel_MetaData), NewProp_Channel_MetaData) }; // 3943981460
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::NewProp_Threshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::NewProp_Channel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::ClassParams = {
	&UMaterialExpressionAntialiasedTextureMask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionAntialiasedTextureMask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionAntialiasedTextureMask.OuterSingleton, Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionAntialiasedTextureMask.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionAntialiasedTextureMask>()
{
	return UMaterialExpressionAntialiasedTextureMask::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionAntialiasedTextureMask);
UMaterialExpressionAntialiasedTextureMask::~UMaterialExpressionAntialiasedTextureMask() {}
// End Class UMaterialExpressionAntialiasedTextureMask

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAntialiasedTextureMask_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETextureColorChannel_StaticEnum, TEXT("ETextureColorChannel"), &Z_Registration_Info_UEnum_ETextureColorChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3943981460U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask, UMaterialExpressionAntialiasedTextureMask::StaticClass, TEXT("UMaterialExpressionAntialiasedTextureMask"), &Z_Registration_Info_UClass_UMaterialExpressionAntialiasedTextureMask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionAntialiasedTextureMask), 3695443096U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAntialiasedTextureMask_h_386177640(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAntialiasedTextureMask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAntialiasedTextureMask_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAntialiasedTextureMask_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAntialiasedTextureMask_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
