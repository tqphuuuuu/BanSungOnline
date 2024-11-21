// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JsonObjectWrapper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JSONUTILITIES_JsonObjectWrapper_generated_h
#error "JsonObjectWrapper.generated.h already included, missing '#pragma once' in JsonObjectWrapper.h"
#endif
#define JSONUTILITIES_JsonObjectWrapper_generated_h

#define FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics; \
	JSONUTILITIES_API static class UScriptStruct* StaticStruct();


template<> JSONUTILITIES_API UScriptStruct* StaticStruct<struct FJsonObjectWrapper>();

#define FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJsonUtilitiesDummyObject(); \
	friend struct Z_Construct_UClass_UJsonUtilitiesDummyObject_Statics; \
public: \
	DECLARE_CLASS(UJsonUtilitiesDummyObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JsonUtilities"), NO_API) \
	DECLARE_SERIALIZER(UJsonUtilitiesDummyObject)


#define FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonUtilitiesDummyObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UJsonUtilitiesDummyObject(UJsonUtilitiesDummyObject&&); \
	UJsonUtilitiesDummyObject(const UJsonUtilitiesDummyObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonUtilitiesDummyObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonUtilitiesDummyObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonUtilitiesDummyObject) \
	NO_API virtual ~UJsonUtilitiesDummyObject();


#define FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_59_PROLOG
#define FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JSONUTILITIES_API UClass* StaticClass<class UJsonUtilitiesDummyObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
