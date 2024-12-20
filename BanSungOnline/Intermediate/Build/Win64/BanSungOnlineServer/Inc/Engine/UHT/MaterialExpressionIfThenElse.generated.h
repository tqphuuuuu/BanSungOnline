// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionIfThenElse.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionIfThenElse_generated_h
#error "MaterialExpressionIfThenElse.generated.h already included, missing '#pragma once' in MaterialExpressionIfThenElse.h"
#endif
#define ENGINE_MaterialExpressionIfThenElse_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIfThenElse_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionIfThenElse(); \
	friend struct Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionIfThenElse, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionIfThenElse)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIfThenElse_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionIfThenElse(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionIfThenElse) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionIfThenElse); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionIfThenElse); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionIfThenElse(UMaterialExpressionIfThenElse&&); \
	UMaterialExpressionIfThenElse(const UMaterialExpressionIfThenElse&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionIfThenElse();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIfThenElse_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIfThenElse_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIfThenElse_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIfThenElse_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionIfThenElse>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIfThenElse_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
