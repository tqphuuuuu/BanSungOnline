// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionScalarParameter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionScalarParameter_generated_h
#error "MaterialExpressionScalarParameter.generated.h already included, missing '#pragma once' in MaterialExpressionScalarParameter.h"
#endif
#define ENGINE_MaterialExpressionScalarParameter_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionScalarParameter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionScalarParameter(); \
	friend struct Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionScalarParameter, UMaterialExpressionParameter, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionScalarParameter)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionScalarParameter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionScalarParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionScalarParameter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionScalarParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionScalarParameter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionScalarParameter(UMaterialExpressionScalarParameter&&); \
	UMaterialExpressionScalarParameter(const UMaterialExpressionScalarParameter&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionScalarParameter();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionScalarParameter_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionScalarParameter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionScalarParameter_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionScalarParameter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionScalarParameter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionScalarParameter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
