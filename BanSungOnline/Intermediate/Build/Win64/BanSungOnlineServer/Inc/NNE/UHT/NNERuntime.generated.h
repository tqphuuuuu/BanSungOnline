// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNERuntime.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NNE_NNERuntime_generated_h
#error "NNERuntime.generated.h already included, missing '#pragma once' in NNERuntime.h"
#endif
#define NNE_NNERuntime_generated_h

#define FID_Engine_Source_Runtime_NNE_Public_NNERuntime_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNNERuntime(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNNERuntime(UNNERuntime&&); \
	UNNERuntime(const UNNERuntime&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNNERuntime); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNNERuntime); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNNERuntime) \
	NO_API virtual ~UNNERuntime();


#define FID_Engine_Source_Runtime_NNE_Public_NNERuntime_h_22_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNNERuntime(); \
	friend struct Z_Construct_UClass_UNNERuntime_Statics; \
public: \
	DECLARE_CLASS(UNNERuntime, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NNE"), NO_API) \
	DECLARE_SERIALIZER(UNNERuntime)


#define FID_Engine_Source_Runtime_NNE_Public_NNERuntime_h_22_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_NNE_Public_NNERuntime_h_22_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_NNE_Public_NNERuntime_h_22_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_NNE_Public_NNERuntime_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INNERuntime() {} \
public: \
	typedef UNNERuntime UClassType; \
	typedef INNERuntime ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_NNE_Public_NNERuntime_h_19_PROLOG
#define FID_Engine_Source_Runtime_NNE_Public_NNERuntime_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NNE_Public_NNERuntime_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NNE_API UClass* StaticClass<class UNNERuntime>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NNE_Public_NNERuntime_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
