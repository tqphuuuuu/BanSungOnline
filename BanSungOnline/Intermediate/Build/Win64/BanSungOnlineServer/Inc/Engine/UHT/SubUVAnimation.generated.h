// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/SubUVAnimation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SubUVAnimation_generated_h
#error "SubUVAnimation.generated.h already included, missing '#pragma once' in SubUVAnimation.h"
#endif
#define ENGINE_SubUVAnimation_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_90_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(USubUVAnimation, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_90_INCLASS \
private: \
	static void StaticRegisterNativesUSubUVAnimation(); \
	friend struct Z_Construct_UClass_USubUVAnimation_Statics; \
public: \
	DECLARE_CLASS(USubUVAnimation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USubUVAnimation) \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_90_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_90_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USubUVAnimation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubUVAnimation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USubUVAnimation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubUVAnimation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USubUVAnimation(USubUVAnimation&&); \
	USubUVAnimation(const USubUVAnimation&); \
public: \
	ENGINE_API virtual ~USubUVAnimation();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_87_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_90_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_90_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_90_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USubUVAnimation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h


#define FOREACH_ENUM_ESUBUVBOUNDINGVERTEXCOUNT(op) \
	op(BVC_FourVertices) \
	op(BVC_EightVertices) 

enum ESubUVBoundingVertexCount : int;
template<> ENGINE_API UEnum* StaticEnum<ESubUVBoundingVertexCount>();

#define FOREACH_ENUM_EOPACITYSOURCEMODE(op) \
	op(OSM_Alpha) \
	op(OSM_ColorBrightness) \
	op(OSM_RedChannel) \
	op(OSM_GreenChannel) \
	op(OSM_BlueChannel) 

enum EOpacitySourceMode : int;
template<> ENGINE_API UEnum* StaticEnum<EOpacitySourceMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
