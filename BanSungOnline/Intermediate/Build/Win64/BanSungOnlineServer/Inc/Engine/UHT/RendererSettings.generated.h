// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/RendererSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RendererSettings_generated_h
#error "RendererSettings.generated.h already included, missing '#pragma once' in RendererSettings.h"
#endif
#define ENGINE_RendererSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_308_INCLASS \
private: \
	static void StaticRegisterNativesURendererSettings(); \
	friend struct Z_Construct_UClass_URendererSettings_Statics; \
public: \
	DECLARE_CLASS(URendererSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(URendererSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_308_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API URendererSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URendererSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, URendererSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URendererSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URendererSettings(URendererSettings&&); \
	URendererSettings(const URendererSettings&); \
public: \
	ENGINE_API virtual ~URendererSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_305_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_308_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_308_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_308_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class URendererSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_1506_INCLASS \
private: \
	static void StaticRegisterNativesURendererOverrideSettings(); \
	friend struct Z_Construct_UClass_URendererOverrideSettings_Statics; \
public: \
	DECLARE_CLASS(URendererOverrideSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_ProjectUserConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(URendererOverrideSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_1506_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API URendererOverrideSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URendererOverrideSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, URendererOverrideSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URendererOverrideSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URendererOverrideSettings(URendererOverrideSettings&&); \
	URendererOverrideSettings(const URendererOverrideSettings&); \
public: \
	ENGINE_API virtual ~URendererOverrideSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_1503_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_1506_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_1506_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_1506_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class URendererOverrideSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h


#define FOREACH_ENUM_ECLEARSCENEOPTIONS(op) \
	op(EClearSceneOptions::NoClear) \
	op(EClearSceneOptions::HardwareClear) \
	op(EClearSceneOptions::QuadAtMaxZ) 

namespace EClearSceneOptions { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EClearSceneOptions::Type>();

#define FOREACH_ENUM_ECOMPOSITINGSAMPLECOUNT(op) \
	op(ECompositingSampleCount::One) \
	op(ECompositingSampleCount::Two) \
	op(ECompositingSampleCount::Four) \
	op(ECompositingSampleCount::Eight) 

namespace ECompositingSampleCount { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ECompositingSampleCount::Type>();

#define FOREACH_ENUM_ECUSTOMDEPTHSTENCIL(op) \
	op(ECustomDepthStencil::Disabled) \
	op(ECustomDepthStencil::Enabled) \
	op(ECustomDepthStencil::EnabledOnDemand) \
	op(ECustomDepthStencil::EnabledWithStencil) 

namespace ECustomDepthStencil { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ECustomDepthStencil::Type>();

#define FOREACH_ENUM_EEARLYZPASS(op) \
	op(EEarlyZPass::None) \
	op(EEarlyZPass::OpaqueOnly) \
	op(EEarlyZPass::OpaqueAndMasked) \
	op(EEarlyZPass::Auto) 

namespace EEarlyZPass { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EEarlyZPass::Type>();

#define FOREACH_ENUM_EVELOCITYOUTPUTPASS(op) \
	op(EVelocityOutputPass::DepthPass) \
	op(EVelocityOutputPass::BasePass) \
	op(EVelocityOutputPass::AfterBasePass) 

namespace EVelocityOutputPass { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EVelocityOutputPass::Type>();

#define FOREACH_ENUM_EVERTEXDEFORMATIONOUTPUTSVELOCITY(op) \
	op(EVertexDeformationOutputsVelocity::Off) \
	op(EVertexDeformationOutputsVelocity::On) \
	op(EVertexDeformationOutputsVelocity::Auto) 

namespace EVertexDeformationOutputsVelocity { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EVertexDeformationOutputsVelocity::Type>();

#define FOREACH_ENUM_EALPHACHANNELMODE(op) \
	op(EAlphaChannelMode::Disabled) \
	op(EAlphaChannelMode::Enabled) \
	op(EAlphaChannelMode::LinearColorSpaceOnly) \
	op(EAlphaChannelMode::AllowThroughTonemapper) 

namespace EAlphaChannelMode { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EAlphaChannelMode::Type>();

#define FOREACH_ENUM_EAUTOEXPOSUREMETHODUI(op) \
	op(EAutoExposureMethodUI::AEM_Histogram) \
	op(EAutoExposureMethodUI::AEM_Basic) \
	op(EAutoExposureMethodUI::AEM_Manual) 

namespace EAutoExposureMethodUI { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EAutoExposureMethodUI::Type>();

#define FOREACH_ENUM_EDEFAULTBACKBUFFERPIXELFORMAT(op) \
	op(EDefaultBackBufferPixelFormat::DBBPF_B8G8R8A8) \
	op(EDefaultBackBufferPixelFormat::DBBPF_A16B16G16R16_DEPRECATED) \
	op(EDefaultBackBufferPixelFormat::DBBPF_FloatRGB_DEPRECATED) \
	op(EDefaultBackBufferPixelFormat::DBBPF_FloatRGBA) \
	op(EDefaultBackBufferPixelFormat::DBBPF_A2B10G10R10) 

namespace EDefaultBackBufferPixelFormat { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EDefaultBackBufferPixelFormat::Type>();

#define FOREACH_ENUM_EFIXEDFOVEATIONLEVELS(op) \
	op(EFixedFoveationLevels::Disabled) \
	op(EFixedFoveationLevels::Low) \
	op(EFixedFoveationLevels::Medium) \
	op(EFixedFoveationLevels::High) \
	op(EFixedFoveationLevels::HighTop) 

namespace EFixedFoveationLevels { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EFixedFoveationLevels::Type>();

#define FOREACH_ENUM_EMOBILEANTIALIASINGMETHOD(op) \
	op(EMobileAntiAliasingMethod::None) \
	op(EMobileAntiAliasingMethod::FXAA) \
	op(EMobileAntiAliasingMethod::TemporalAA) \
	op(EMobileAntiAliasingMethod::MSAA) 

namespace EMobileAntiAliasingMethod { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EMobileAntiAliasingMethod::Type>();

#define FOREACH_ENUM_EMOBILEFLOATPRECISIONMODE(op) \
	op(EMobileFloatPrecisionMode::Half) \
	op(EMobileFloatPrecisionMode::Full_MaterialExpressionOnly) \
	op(EMobileFloatPrecisionMode::Full) 

namespace EMobileFloatPrecisionMode { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EMobileFloatPrecisionMode::Type>();

#define FOREACH_ENUM_EMOBILESHADINGPATH(op) \
	op(EMobileShadingPath::Forward) \
	op(EMobileShadingPath::Deferred) 

namespace EMobileShadingPath { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EMobileShadingPath::Type>();

#define FOREACH_ENUM_ELIGHTFUNCTIONATLASPIXELFORMAT(op) \
	op(ELightFunctionAtlasPixelFormat::LFAPF_R8) \
	op(ELightFunctionAtlasPixelFormat::LFAPF_R8G8B8) 

namespace ELightFunctionAtlasPixelFormat { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ELightFunctionAtlasPixelFormat::Type>();

#define FOREACH_ENUM_ESHADERCOMPRESSIONFORMAT(op) \
	op(EShaderCompressionFormat::None) \
	op(EShaderCompressionFormat::LZ4) \
	op(EShaderCompressionFormat::Oodle) \
	op(EShaderCompressionFormat::Zlib) 

namespace EShaderCompressionFormat { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EShaderCompressionFormat::Type>();

#define FOREACH_ENUM_ELUMENSOFTWARETRACINGMODE(op) \
	op(ELumenSoftwareTracingMode::DetailTracing) \
	op(ELumenSoftwareTracingMode::GlobalTracing) 

namespace ELumenSoftwareTracingMode { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ELumenSoftwareTracingMode::Type>();

#define FOREACH_ENUM_ELUMENRAYLIGHTINGMODE(op) \
	op(ELumenRayLightingMode::SurfaceCache) \
	op(ELumenRayLightingMode::HitLightingForReflections) \
	op(ELumenRayLightingMode::HitLighting) 

enum class ELumenRayLightingMode : uint8;
template<> struct TIsUEnumClass<ELumenRayLightingMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ELumenRayLightingMode>();

#define FOREACH_ENUM_ELUMENSCREENTRACINGSOURCE(op) \
	op(ELumenScreenTracingSource::SceneColor) \
	op(ELumenScreenTracingSource::AntialiasedSceneColorWithTranslucency) 

enum class ELumenScreenTracingSource : uint8;
template<> struct TIsUEnumClass<ELumenScreenTracingSource> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ELumenScreenTracingSource>();

#define FOREACH_ENUM_EWORKINGCOLORSPACE(op) \
	op(EWorkingColorSpace::sRGB) \
	op(EWorkingColorSpace::Rec2020) \
	op(EWorkingColorSpace::ACESAP0) \
	op(EWorkingColorSpace::ACESAP1) \
	op(EWorkingColorSpace::P3DCI) \
	op(EWorkingColorSpace::P3D65) \
	op(EWorkingColorSpace::Custom) 

namespace EWorkingColorSpace { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EWorkingColorSpace::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
