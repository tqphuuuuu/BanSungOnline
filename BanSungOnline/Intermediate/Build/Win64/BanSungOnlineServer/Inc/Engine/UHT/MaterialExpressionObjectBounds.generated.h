// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionObjectBounds.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionObjectBounds_generated_h
#error "MaterialExpressionObjectBounds.generated.h already included, missing '#pragma once' in MaterialExpressionObjectBounds.h"
#endif
#define ENGINE_MaterialExpressionObjectBounds_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectBounds_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionObjectBounds(); \
	friend struct Z_Construct_UClass_UMaterialExpressionObjectBounds_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionObjectBounds, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionObjectBounds)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectBounds_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionObjectBounds(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionObjectBounds) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionObjectBounds); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionObjectBounds); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionObjectBounds(UMaterialExpressionObjectBounds&&); \
	UMaterialExpressionObjectBounds(const UMaterialExpressionObjectBounds&); \
public: \
	NO_API virtual ~UMaterialExpressionObjectBounds();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectBounds_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectBounds_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectBounds_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectBounds_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionObjectBounds>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectBounds_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
