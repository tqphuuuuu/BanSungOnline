// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionBreakMaterialAttributes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionBreakMaterialAttributes_generated_h
#error "MaterialExpressionBreakMaterialAttributes.generated.h already included, missing '#pragma once' in MaterialExpressionBreakMaterialAttributes.h"
#endif
#define ENGINE_MaterialExpressionBreakMaterialAttributes_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBreakMaterialAttributes_h_16_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UMaterialExpressionBreakMaterialAttributes, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBreakMaterialAttributes_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionBreakMaterialAttributes(); \
	friend struct Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionBreakMaterialAttributes, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionBreakMaterialAttributes) \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBreakMaterialAttributes_h_16_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBreakMaterialAttributes_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionBreakMaterialAttributes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionBreakMaterialAttributes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionBreakMaterialAttributes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionBreakMaterialAttributes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionBreakMaterialAttributes(UMaterialExpressionBreakMaterialAttributes&&); \
	UMaterialExpressionBreakMaterialAttributes(const UMaterialExpressionBreakMaterialAttributes&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionBreakMaterialAttributes();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBreakMaterialAttributes_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBreakMaterialAttributes_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBreakMaterialAttributes_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBreakMaterialAttributes_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionBreakMaterialAttributes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBreakMaterialAttributes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
