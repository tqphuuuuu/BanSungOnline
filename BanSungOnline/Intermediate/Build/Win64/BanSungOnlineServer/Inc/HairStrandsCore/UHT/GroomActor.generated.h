// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HAIRSTRANDSCORE_GroomActor_generated_h
#error "GroomActor.generated.h already included, missing '#pragma once' in GroomActor.h"
#endif
#define HAIRSTRANDSCORE_GroomActor_generated_h

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGroomActor(); \
	friend struct Z_Construct_UClass_AGroomActor_Statics; \
public: \
	DECLARE_CLASS(AGroomActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), NO_API) \
	DECLARE_SERIALIZER(AGroomActor)


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGroomActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGroomActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGroomActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGroomActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGroomActor(AGroomActor&&); \
	AGroomActor(const AGroomActor&); \
public: \
	NO_API virtual ~AGroomActor();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomActor_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomActor_h_15_INCLASS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HAIRSTRANDSCORE_API UClass* StaticClass<class AGroomActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
