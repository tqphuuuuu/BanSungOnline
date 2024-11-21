// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/VolumetricCloudComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
struct FColor;
#ifdef ENGINE_VolumetricCloudComponent_generated_h
#error "VolumetricCloudComponent.generated.h already included, missing '#pragma once' in VolumetricCloudComponent.h"
#endif
#define ENGINE_VolumetricCloudComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_30_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetRenderInMainPass); \
	DECLARE_FUNCTION(execSetHoldout); \
	DECLARE_FUNCTION(execSetShadowReflectionSampleCountScale); \
	DECLARE_FUNCTION(execSetReflectionSampleCountScale); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execSetStopTracingTransmittanceThreshold); \
	DECLARE_FUNCTION(execSetShadowTracingDistance); \
	DECLARE_FUNCTION(execSetShadowReflectionViewSampleCountScale); \
	DECLARE_FUNCTION(execSetShadowViewSampleCountScale); \
	DECLARE_FUNCTION(execSetReflectionViewSampleCountScale); \
	DECLARE_FUNCTION(execSetViewSampleCountScale); \
	DECLARE_FUNCTION(execSetSkyLightCloudBottomOcclusion); \
	DECLARE_FUNCTION(execSetbUsePerSampleAtmosphericLightTransmittance); \
	DECLARE_FUNCTION(execSetGroundAlbedo); \
	DECLARE_FUNCTION(execSetPlanetRadius); \
	DECLARE_FUNCTION(execSetTracingMaxDistance); \
	DECLARE_FUNCTION(execSetTracingStartDistanceFromCamera); \
	DECLARE_FUNCTION(execSetTracingStartMaxDistance); \
	DECLARE_FUNCTION(execSetLayerHeight); \
	DECLARE_FUNCTION(execSetLayerBottomAltitude);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_30_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVolumetricCloudComponent, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUVolumetricCloudComponent(); \
	friend struct Z_Construct_UClass_UVolumetricCloudComponent_Statics; \
public: \
	DECLARE_CLASS(UVolumetricCloudComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVolumetricCloudComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_30_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVolumetricCloudComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVolumetricCloudComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVolumetricCloudComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVolumetricCloudComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVolumetricCloudComponent(UVolumetricCloudComponent&&); \
	UVolumetricCloudComponent(const UVolumetricCloudComponent&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_27_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_30_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_30_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UVolumetricCloudComponent>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_244_INCLASS \
private: \
	static void StaticRegisterNativesAVolumetricCloud(); \
	friend struct Z_Construct_UClass_AVolumetricCloud_Statics; \
public: \
	DECLARE_CLASS(AVolumetricCloud, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AVolumetricCloud)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_244_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AVolumetricCloud(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVolumetricCloud) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AVolumetricCloud); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVolumetricCloud); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AVolumetricCloud(AVolumetricCloud&&); \
	AVolumetricCloud(const AVolumetricCloud&); \
public: \
	ENGINE_API virtual ~AVolumetricCloud();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_241_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_244_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_244_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_244_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AVolumetricCloud>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h


#define FOREACH_ENUM_EVOLUMETRICCLOUDTRACINGMAXDISTANCEMODE(op) \
	op(EVolumetricCloudTracingMaxDistanceMode::DistanceFromCloudLayerEntryPoint) \
	op(EVolumetricCloudTracingMaxDistanceMode::DistanceFromPointOfView) 

enum class EVolumetricCloudTracingMaxDistanceMode : uint8;
template<> struct TIsUEnumClass<EVolumetricCloudTracingMaxDistanceMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EVolumetricCloudTracingMaxDistanceMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
