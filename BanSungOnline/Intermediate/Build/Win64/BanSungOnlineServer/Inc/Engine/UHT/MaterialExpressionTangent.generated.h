// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionTangent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionTangent_generated_h
#error "MaterialExpressionTangent.generated.h already included, missing '#pragma once' in MaterialExpressionTangent.h"
#endif
#define ENGINE_MaterialExpressionTangent_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTangent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTangent(); \
	friend struct Z_Construct_UClass_UMaterialExpressionTangent_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionTangent, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionTangent)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTangent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTangent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTangent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTangent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTangent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionTangent(UMaterialExpressionTangent&&); \
	UMaterialExpressionTangent(const UMaterialExpressionTangent&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionTangent();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTangent_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTangent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTangent_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTangent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionTangent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTangent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
