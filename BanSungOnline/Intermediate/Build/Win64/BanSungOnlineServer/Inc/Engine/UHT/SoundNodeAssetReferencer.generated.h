// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeAssetReferencer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeAssetReferencer_generated_h
#error "SoundNodeAssetReferencer.generated.h already included, missing '#pragma once' in SoundNodeAssetReferencer.h"
#endif
#define ENGINE_SoundNodeAssetReferencer_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundNodeAssetReferencer(); \
	friend struct Z_Construct_UClass_USoundNodeAssetReferencer_Statics; \
public: \
	DECLARE_CLASS(USoundNodeAssetReferencer, USoundNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeAssetReferencer)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeAssetReferencer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundNodeAssetReferencer(USoundNodeAssetReferencer&&); \
	USoundNodeAssetReferencer(const USoundNodeAssetReferencer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeAssetReferencer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeAssetReferencer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeAssetReferencer) \
	ENGINE_API virtual ~USoundNodeAssetReferencer();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNodeAssetReferencer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
