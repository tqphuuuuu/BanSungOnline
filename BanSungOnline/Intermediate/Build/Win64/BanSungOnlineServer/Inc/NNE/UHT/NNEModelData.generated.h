// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNEModelData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NNE_NNEModelData_generated_h
#error "NNEModelData.generated.h already included, missing '#pragma once' in NNEModelData.h"
#endif
#define NNE_NNEModelData_generated_h

#define FID_Engine_Source_Runtime_NNE_Public_NNEModelData_h_75_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNNEModelData, NO_API)


#define FID_Engine_Source_Runtime_NNE_Public_NNEModelData_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNNEModelData(); \
	friend struct Z_Construct_UClass_UNNEModelData_Statics; \
public: \
	DECLARE_CLASS(UNNEModelData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NNE"), NO_API) \
	DECLARE_SERIALIZER(UNNEModelData) \
	FID_Engine_Source_Runtime_NNE_Public_NNEModelData_h_75_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_NNE_Public_NNEModelData_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNNEModelData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNNEModelData(UNNEModelData&&); \
	UNNEModelData(const UNNEModelData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNNEModelData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNNEModelData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNNEModelData) \
	NO_API virtual ~UNNEModelData();


#define FID_Engine_Source_Runtime_NNE_Public_NNEModelData_h_72_PROLOG
#define FID_Engine_Source_Runtime_NNE_Public_NNEModelData_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NNE_Public_NNEModelData_h_75_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NNE_Public_NNEModelData_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NNE_API UClass* StaticClass<class UNNEModelData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NNE_Public_NNEModelData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
