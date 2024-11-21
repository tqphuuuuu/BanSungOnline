// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSENTITY_MassSettings_generated_h
#error "MassSettings.generated.h already included, missing '#pragma once' in MassSettings.h"
#endif
#define MASSENTITY_MassSettings_generated_h

#define FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassModuleSettings(); \
	friend struct Z_Construct_UClass_UMassModuleSettings_Statics; \
public: \
	DECLARE_CLASS(UMassModuleSettings, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassEntity"), NO_API) \
	DECLARE_SERIALIZER(UMassModuleSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Mass");} \



#define FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassModuleSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMassModuleSettings(UMassModuleSettings&&); \
	UMassModuleSettings(const UMassModuleSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassModuleSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassModuleSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassModuleSettings) \
	NO_API virtual ~UMassModuleSettings();


#define FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_13_PROLOG
#define FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSENTITY_API UClass* StaticClass<class UMassModuleSettings>();

#define FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassSettings(); \
	friend struct Z_Construct_UClass_UMassSettings_Statics; \
public: \
	DECLARE_CLASS(UMassSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassEntity"), NO_API) \
	DECLARE_SERIALIZER(UMassSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Mass");} \



#define FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMassSettings(UMassSettings&&); \
	UMassSettings(const UMassSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassSettings) \
	NO_API virtual ~UMassSettings();


#define FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_22_PROLOG
#define FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSENTITY_API UClass* StaticClass<class UMassSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
