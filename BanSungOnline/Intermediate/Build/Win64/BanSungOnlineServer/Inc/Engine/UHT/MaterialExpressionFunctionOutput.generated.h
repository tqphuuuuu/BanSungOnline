// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionFunctionOutput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionFunctionOutput_generated_h
#error "MaterialExpressionFunctionOutput.generated.h already included, missing '#pragma once' in MaterialExpressionFunctionOutput.h"
#endif
#define ENGINE_MaterialExpressionFunctionOutput_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFunctionOutput_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionFunctionOutput(); \
	friend struct Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionFunctionOutput, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionFunctionOutput)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFunctionOutput_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionFunctionOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionFunctionOutput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionFunctionOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionFunctionOutput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionFunctionOutput(UMaterialExpressionFunctionOutput&&); \
	UMaterialExpressionFunctionOutput(const UMaterialExpressionFunctionOutput&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionFunctionOutput();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFunctionOutput_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFunctionOutput_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFunctionOutput_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFunctionOutput_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionFunctionOutput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFunctionOutput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS