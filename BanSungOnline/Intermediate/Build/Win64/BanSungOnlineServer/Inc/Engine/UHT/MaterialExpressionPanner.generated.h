// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionPanner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionPanner_generated_h
#error "MaterialExpressionPanner.generated.h already included, missing '#pragma once' in MaterialExpressionPanner.h"
#endif
#define ENGINE_MaterialExpressionPanner_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPanner_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionPanner(); \
	friend struct Z_Construct_UClass_UMaterialExpressionPanner_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionPanner, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionPanner)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPanner_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionPanner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionPanner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionPanner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionPanner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionPanner(UMaterialExpressionPanner&&); \
	UMaterialExpressionPanner(const UMaterialExpressionPanner&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionPanner();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPanner_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPanner_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPanner_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPanner_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionPanner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPanner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
