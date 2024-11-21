// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/DataLayer/DataLayerLoadingPolicy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DataLayerLoadingPolicy_generated_h
#error "DataLayerLoadingPolicy.generated.h already included, missing '#pragma once' in DataLayerLoadingPolicy.h"
#endif
#define ENGINE_DataLayerLoadingPolicy_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerLoadingPolicy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLayerLoadingPolicy(); \
	friend struct Z_Construct_UClass_UDataLayerLoadingPolicy_Statics; \
public: \
	DECLARE_CLASS(UDataLayerLoadingPolicy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDataLayerLoadingPolicy) \
	DECLARE_WITHIN(UDataLayerManager)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerLoadingPolicy_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataLayerLoadingPolicy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataLayerLoadingPolicy(UDataLayerLoadingPolicy&&); \
	UDataLayerLoadingPolicy(const UDataLayerLoadingPolicy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataLayerLoadingPolicy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLayerLoadingPolicy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLayerLoadingPolicy) \
	NO_API virtual ~UDataLayerLoadingPolicy();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerLoadingPolicy_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerLoadingPolicy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerLoadingPolicy_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerLoadingPolicy_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDataLayerLoadingPolicy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerLoadingPolicy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
