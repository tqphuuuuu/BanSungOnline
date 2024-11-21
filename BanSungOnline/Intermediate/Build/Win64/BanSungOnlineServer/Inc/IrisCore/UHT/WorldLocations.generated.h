// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/WorldLocations.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IRISCORE_WorldLocations_generated_h
#error "WorldLocations.generated.h already included, missing '#pragma once' in WorldLocations.h"
#endif
#define IRISCORE_WorldLocations_generated_h

#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_WorldLocations_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldLocationsConfig(); \
	friend struct Z_Construct_UClass_UWorldLocationsConfig_Statics; \
public: \
	DECLARE_CLASS(UWorldLocationsConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IrisCore"), NO_API) \
	DECLARE_SERIALIZER(UWorldLocationsConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_WorldLocations_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldLocationsConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldLocationsConfig(UWorldLocationsConfig&&); \
	UWorldLocationsConfig(const UWorldLocationsConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldLocationsConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldLocationsConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldLocationsConfig) \
	NO_API virtual ~UWorldLocationsConfig();


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_WorldLocations_h_19_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_WorldLocations_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_WorldLocations_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_WorldLocations_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IRISCORE_API UClass* StaticClass<class UWorldLocationsConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_WorldLocations_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
