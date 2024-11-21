// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelInstance/LevelInstanceSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LevelInstanceSettings_generated_h
#error "LevelInstanceSettings.generated.h already included, missing '#pragma once' in LevelInstanceSettings.h"
#endif
#define ENGINE_LevelInstanceSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelInstanceSettings(); \
	friend struct Z_Construct_UClass_ULevelInstanceSettings_Statics; \
public: \
	DECLARE_CLASS(ULevelInstanceSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULevelInstanceSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULevelInstanceSettings(ULevelInstanceSettings&&); \
	ULevelInstanceSettings(const ULevelInstanceSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelInstanceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelInstanceSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULevelInstanceSettings) \
	NO_API virtual ~ULevelInstanceSettings();


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSettings_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULevelInstanceSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
