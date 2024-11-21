// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassSubsystemBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSENTITY_MassSubsystemBase_generated_h
#error "MassSubsystemBase.generated.h already included, missing '#pragma once' in MassSubsystemBase.h"
#endif
#define MASSENTITY_MassSubsystemBase_generated_h

#define FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassSubsystemBase(); \
	friend struct Z_Construct_UClass_UMassSubsystemBase_Statics; \
public: \
	DECLARE_CLASS(UMassSubsystemBase, UWorldSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MassEntity"), NO_API) \
	DECLARE_SERIALIZER(UMassSubsystemBase)


#define FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassSubsystemBase(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMassSubsystemBase(UMassSubsystemBase&&); \
	UMassSubsystemBase(const UMassSubsystemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassSubsystemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassSubsystemBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMassSubsystemBase) \
	NO_API virtual ~UMassSubsystemBase();


#define FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_23_PROLOG
#define FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSENTITY_API UClass* StaticClass<class UMassSubsystemBase>();

#define FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTickableSubsystemBase(); \
	friend struct Z_Construct_UClass_UMassTickableSubsystemBase_Statics; \
public: \
	DECLARE_CLASS(UMassTickableSubsystemBase, UTickableWorldSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MassEntity"), NO_API) \
	DECLARE_SERIALIZER(UMassTickableSubsystemBase)


#define FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassTickableSubsystemBase(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMassTickableSubsystemBase(UMassTickableSubsystemBase&&); \
	UMassTickableSubsystemBase(const UMassTickableSubsystemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTickableSubsystemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTickableSubsystemBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMassTickableSubsystemBase) \
	NO_API virtual ~UMassTickableSubsystemBase();


#define FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_58_PROLOG
#define FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSENTITY_API UClass* StaticClass<class UMassTickableSubsystemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
