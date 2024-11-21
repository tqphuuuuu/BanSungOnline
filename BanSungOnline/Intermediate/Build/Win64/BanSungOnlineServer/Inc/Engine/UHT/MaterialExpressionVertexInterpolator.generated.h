// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionVertexInterpolator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionVertexInterpolator_generated_h
#error "MaterialExpressionVertexInterpolator.generated.h already included, missing '#pragma once' in MaterialExpressionVertexInterpolator.h"
#endif
#define ENGINE_MaterialExpressionVertexInterpolator_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVertexInterpolator_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionVertexInterpolator(); \
	friend struct Z_Construct_UClass_UMaterialExpressionVertexInterpolator_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionVertexInterpolator, UMaterialExpressionCustomOutput, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionVertexInterpolator)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVertexInterpolator_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionVertexInterpolator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionVertexInterpolator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionVertexInterpolator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionVertexInterpolator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionVertexInterpolator(UMaterialExpressionVertexInterpolator&&); \
	UMaterialExpressionVertexInterpolator(const UMaterialExpressionVertexInterpolator&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionVertexInterpolator();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVertexInterpolator_h_9_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVertexInterpolator_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVertexInterpolator_h_12_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVertexInterpolator_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionVertexInterpolator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVertexInterpolator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
