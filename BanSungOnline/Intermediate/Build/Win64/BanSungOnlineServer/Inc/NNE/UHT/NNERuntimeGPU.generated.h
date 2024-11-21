// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNERuntimeGPU.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NNE_NNERuntimeGPU_generated_h
#error "NNERuntimeGPU.generated.h already included, missing '#pragma once' in NNERuntimeGPU.h"
#endif
#define NNE_NNERuntimeGPU_generated_h

#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeGPU_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNNERuntimeGPU(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNNERuntimeGPU(UNNERuntimeGPU&&); \
	UNNERuntimeGPU(const UNNERuntimeGPU&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNNERuntimeGPU); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNNERuntimeGPU); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNNERuntimeGPU) \
	NO_API virtual ~UNNERuntimeGPU();


#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeGPU_h_55_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNNERuntimeGPU(); \
	friend struct Z_Construct_UClass_UNNERuntimeGPU_Statics; \
public: \
	DECLARE_CLASS(UNNERuntimeGPU, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NNE"), NO_API) \
	DECLARE_SERIALIZER(UNNERuntimeGPU)


#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeGPU_h_55_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_NNE_Public_NNERuntimeGPU_h_55_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_NNE_Public_NNERuntimeGPU_h_55_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeGPU_h_55_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INNERuntimeGPU() {} \
public: \
	typedef UNNERuntimeGPU UClassType; \
	typedef INNERuntimeGPU ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeGPU_h_52_PROLOG
#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeGPU_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NNE_Public_NNERuntimeGPU_h_55_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NNE_API UClass* StaticClass<class UNNERuntimeGPU>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NNE_Public_NNERuntimeGPU_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
