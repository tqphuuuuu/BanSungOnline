// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassObserverRegistry.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSENTITY_MassObserverRegistry_generated_h
#error "MassObserverRegistry.generated.h already included, missing '#pragma once' in MassObserverRegistry.h"
#endif
#define MASSENTITY_MassObserverRegistry_generated_h

#define FID_Engine_Source_Runtime_MassEntity_Public_MassObserverRegistry_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics; \
	MASSENTITY_API static class UScriptStruct* StaticStruct();


template<> MASSENTITY_API UScriptStruct* StaticStruct<struct FMassProcessorClassCollection>();

#define FID_Engine_Source_Runtime_MassEntity_Public_MassObserverRegistry_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics; \
	MASSENTITY_API static class UScriptStruct* StaticStruct();


template<> MASSENTITY_API UScriptStruct* StaticStruct<struct FMassEntityObserverClassesMap>();

#define FID_Engine_Source_Runtime_MassEntity_Public_MassObserverRegistry_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassObserverRegistry(); \
	friend struct Z_Construct_UClass_UMassObserverRegistry_Statics; \
public: \
	DECLARE_CLASS(UMassObserverRegistry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassEntity"), NO_API) \
	DECLARE_SERIALIZER(UMassObserverRegistry)


#define FID_Engine_Source_Runtime_MassEntity_Public_MassObserverRegistry_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMassObserverRegistry(UMassObserverRegistry&&); \
	UMassObserverRegistry(const UMassObserverRegistry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassObserverRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassObserverRegistry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassObserverRegistry) \
	NO_API virtual ~UMassObserverRegistry();


#define FID_Engine_Source_Runtime_MassEntity_Public_MassObserverRegistry_h_48_PROLOG
#define FID_Engine_Source_Runtime_MassEntity_Public_MassObserverRegistry_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MassEntity_Public_MassObserverRegistry_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MassEntity_Public_MassObserverRegistry_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSENTITY_API UClass* StaticClass<class UMassObserverRegistry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MassEntity_Public_MassObserverRegistry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
