// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusSource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPTIMUSCORE_OptimusSource_generated_h
#error "OptimusSource.generated.h already included, missing '#pragma once' in OptimusSource.h"
#endif
#define OPTIMUSCORE_OptimusSource_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusSource_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusSource(); \
	friend struct Z_Construct_UClass_UOptimusSource_Statics; \
public: \
	DECLARE_CLASS(UOptimusSource, UComputeSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), NO_API) \
	DECLARE_SERIALIZER(UOptimusSource) \
	virtual UObject* _getUObject() const override { return const_cast<UOptimusSource*>(this); }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusSource_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptimusSource(UOptimusSource&&); \
	UOptimusSource(const UOptimusSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusSource) \
	NO_API virtual ~UOptimusSource();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusSource_h_9_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusSource_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusSource_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusSource_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPTIMUSCORE_API UClass* StaticClass<class UOptimusSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
