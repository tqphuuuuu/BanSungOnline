// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionParticleColor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionParticleColor_generated_h
#error "MaterialExpressionParticleColor.generated.h already included, missing '#pragma once' in MaterialExpressionParticleColor.h"
#endif
#define ENGINE_MaterialExpressionParticleColor_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleColor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionParticleColor(); \
	friend struct Z_Construct_UClass_UMaterialExpressionParticleColor_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionParticleColor, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionParticleColor)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleColor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionParticleColor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionParticleColor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionParticleColor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionParticleColor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionParticleColor(UMaterialExpressionParticleColor&&); \
	UMaterialExpressionParticleColor(const UMaterialExpressionParticleColor&); \
public: \
	NO_API virtual ~UMaterialExpressionParticleColor();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleColor_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleColor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleColor_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleColor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionParticleColor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleColor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
