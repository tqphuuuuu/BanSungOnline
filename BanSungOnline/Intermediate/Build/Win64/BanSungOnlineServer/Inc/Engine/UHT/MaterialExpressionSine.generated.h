// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSine.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionSine_generated_h
#error "MaterialExpressionSine.generated.h already included, missing '#pragma once' in MaterialExpressionSine.h"
#endif
#define ENGINE_MaterialExpressionSine_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSine_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSine(); \
	friend struct Z_Construct_UClass_UMaterialExpressionSine_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionSine, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionSine)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSine_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionSine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionSine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionSine(UMaterialExpressionSine&&); \
	UMaterialExpressionSine(const UMaterialExpressionSine&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionSine();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSine_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSine_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSine_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSine_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionSine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
