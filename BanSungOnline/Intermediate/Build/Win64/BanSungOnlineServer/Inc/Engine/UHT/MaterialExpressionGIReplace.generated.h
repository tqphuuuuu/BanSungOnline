// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionGIReplace.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionGIReplace_generated_h
#error "MaterialExpressionGIReplace.generated.h already included, missing '#pragma once' in MaterialExpressionGIReplace.h"
#endif
#define ENGINE_MaterialExpressionGIReplace_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGIReplace_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionGIReplace(); \
	friend struct Z_Construct_UClass_UMaterialExpressionGIReplace_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionGIReplace, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionGIReplace)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGIReplace_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionGIReplace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionGIReplace) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionGIReplace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionGIReplace); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionGIReplace(UMaterialExpressionGIReplace&&); \
	UMaterialExpressionGIReplace(const UMaterialExpressionGIReplace&); \
public: \
	NO_API virtual ~UMaterialExpressionGIReplace();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGIReplace_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGIReplace_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGIReplace_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGIReplace_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionGIReplace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGIReplace_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
