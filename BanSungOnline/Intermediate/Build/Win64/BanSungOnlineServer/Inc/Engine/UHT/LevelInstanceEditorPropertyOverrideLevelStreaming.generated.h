// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelInstance/LevelInstanceEditorPropertyOverrideLevelStreaming.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LevelInstanceEditorPropertyOverrideLevelStreaming_generated_h
#error "LevelInstanceEditorPropertyOverrideLevelStreaming.generated.h already included, missing '#pragma once' in LevelInstanceEditorPropertyOverrideLevelStreaming.h"
#endif
#define ENGINE_LevelInstanceEditorPropertyOverrideLevelStreaming_generated_h

#define FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorPropertyOverrideLevelStreaming_h_21_INCLASS \
private: \
	static void StaticRegisterNativesULevelStreamingLevelInstanceEditorPropertyOverride(); \
	friend struct Z_Construct_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride_Statics; \
public: \
	DECLARE_CLASS(ULevelStreamingLevelInstanceEditorPropertyOverride, ULevelStreamingDynamic, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULevelStreamingLevelInstanceEditorPropertyOverride)


#define FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorPropertyOverrideLevelStreaming_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULevelStreamingLevelInstanceEditorPropertyOverride(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelStreamingLevelInstanceEditorPropertyOverride) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULevelStreamingLevelInstanceEditorPropertyOverride); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreamingLevelInstanceEditorPropertyOverride); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULevelStreamingLevelInstanceEditorPropertyOverride(ULevelStreamingLevelInstanceEditorPropertyOverride&&); \
	ULevelStreamingLevelInstanceEditorPropertyOverride(const ULevelStreamingLevelInstanceEditorPropertyOverride&); \
public: \
	ENGINE_API virtual ~ULevelStreamingLevelInstanceEditorPropertyOverride();


#define FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorPropertyOverrideLevelStreaming_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorPropertyOverrideLevelStreaming_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorPropertyOverrideLevelStreaming_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorPropertyOverrideLevelStreaming_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULevelStreamingLevelInstanceEditorPropertyOverride>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorPropertyOverrideLevelStreaming_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
