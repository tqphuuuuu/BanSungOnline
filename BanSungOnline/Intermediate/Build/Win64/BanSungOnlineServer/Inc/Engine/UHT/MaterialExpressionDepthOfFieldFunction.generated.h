// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionDepthOfFieldFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionDepthOfFieldFunction_generated_h
#error "MaterialExpressionDepthOfFieldFunction.generated.h already included, missing '#pragma once' in MaterialExpressionDepthOfFieldFunction.h"
#endif
#define ENGINE_MaterialExpressionDepthOfFieldFunction_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDepthOfFieldFunction_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionDepthOfFieldFunction(); \
	friend struct Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionDepthOfFieldFunction, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionDepthOfFieldFunction)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDepthOfFieldFunction_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionDepthOfFieldFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionDepthOfFieldFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionDepthOfFieldFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionDepthOfFieldFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionDepthOfFieldFunction(UMaterialExpressionDepthOfFieldFunction&&); \
	UMaterialExpressionDepthOfFieldFunction(const UMaterialExpressionDepthOfFieldFunction&); \
public: \
	NO_API virtual ~UMaterialExpressionDepthOfFieldFunction();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDepthOfFieldFunction_h_27_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDepthOfFieldFunction_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDepthOfFieldFunction_h_30_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDepthOfFieldFunction_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionDepthOfFieldFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDepthOfFieldFunction_h


#define FOREACH_ENUM_EDEPTHOFFIELDFUNCTIONVALUE(op) \
	op(TDOF_NearAndFarMask) \
	op(TDOF_NearMask) \
	op(TDOF_FarMask) \
	op(TDOF_CircleOfConfusionRadius) 

enum EDepthOfFieldFunctionValue : int;
template<> ENGINE_API UEnum* StaticEnum<EDepthOfFieldFunctionValue>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
