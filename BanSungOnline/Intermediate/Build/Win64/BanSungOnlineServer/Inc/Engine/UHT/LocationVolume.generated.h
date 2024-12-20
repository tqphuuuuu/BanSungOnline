// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LocationVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LocationVolume_generated_h
#error "LocationVolume.generated.h already included, missing '#pragma once' in LocationVolume.h"
#endif
#define ENGINE_LocationVolume_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_LocationVolume_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execIsLoaded); \
	DECLARE_FUNCTION(execUnload); \
	DECLARE_FUNCTION(execLoad);


#define FID_Engine_Source_Runtime_Engine_Public_LocationVolume_h_19_INCLASS \
private: \
	static void StaticRegisterNativesALocationVolume(); \
	friend struct Z_Construct_UClass_ALocationVolume_Statics; \
public: \
	DECLARE_CLASS(ALocationVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ALocationVolume) \
	virtual UObject* _getUObject() const override { return const_cast<ALocationVolume*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_LocationVolume_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ALocationVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALocationVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ALocationVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALocationVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALocationVolume(ALocationVolume&&); \
	ALocationVolume(const ALocationVolume&); \
public: \
	ENGINE_API virtual ~ALocationVolume();


#define FID_Engine_Source_Runtime_Engine_Public_LocationVolume_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_LocationVolume_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_LocationVolume_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_LocationVolume_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_LocationVolume_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ALocationVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_LocationVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
