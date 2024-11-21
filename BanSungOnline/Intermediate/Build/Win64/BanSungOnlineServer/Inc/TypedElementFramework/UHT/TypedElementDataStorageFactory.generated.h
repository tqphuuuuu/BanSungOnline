// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Interfaces/TypedElementDataStorageFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TYPEDELEMENTFRAMEWORK_TypedElementDataStorageFactory_generated_h
#error "TypedElementDataStorageFactory.generated.h already included, missing '#pragma once' in TypedElementDataStorageFactory.h"
#endif
#define TYPEDELEMENTFRAMEWORK_TypedElementDataStorageFactory_generated_h

#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageFactory_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorDataStorageFactory(); \
	friend struct Z_Construct_UClass_UEditorDataStorageFactory_Statics; \
public: \
	DECLARE_CLASS(UEditorDataStorageFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TypedElementFramework"), TYPEDELEMENTFRAMEWORK_API) \
	DECLARE_SERIALIZER(UEditorDataStorageFactory)


#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageFactory_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TYPEDELEMENTFRAMEWORK_API UEditorDataStorageFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorDataStorageFactory(UEditorDataStorageFactory&&); \
	UEditorDataStorageFactory(const UEditorDataStorageFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TYPEDELEMENTFRAMEWORK_API, UEditorDataStorageFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorDataStorageFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorDataStorageFactory)


#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageFactory_h_15_PROLOG
#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageFactory_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageFactory_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageFactory_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TYPEDELEMENTFRAMEWORK_API UClass* StaticClass<class UEditorDataStorageFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
