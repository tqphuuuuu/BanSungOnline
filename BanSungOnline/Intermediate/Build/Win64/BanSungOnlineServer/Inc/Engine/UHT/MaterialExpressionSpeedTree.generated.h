// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSpeedTree.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionSpeedTree_generated_h
#error "MaterialExpressionSpeedTree.generated.h already included, missing '#pragma once' in MaterialExpressionSpeedTree.h"
#endif
#define ENGINE_MaterialExpressionSpeedTree_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSpeedTree_h_43_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UMaterialExpressionSpeedTree, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSpeedTree_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSpeedTree(); \
	friend struct Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionSpeedTree, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionSpeedTree) \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSpeedTree_h_43_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSpeedTree_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionSpeedTree(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSpeedTree) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionSpeedTree); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSpeedTree); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionSpeedTree(UMaterialExpressionSpeedTree&&); \
	UMaterialExpressionSpeedTree(const UMaterialExpressionSpeedTree&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionSpeedTree();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSpeedTree_h_40_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSpeedTree_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSpeedTree_h_43_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSpeedTree_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionSpeedTree>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSpeedTree_h


#define FOREACH_ENUM_ESPEEDTREEGEOMETRYTYPE(op) \
	op(STG_Branch) \
	op(STG_Frond) \
	op(STG_Leaf) \
	op(STG_FacingLeaf) \
	op(STG_Billboard) 

enum ESpeedTreeGeometryType : int;
template<> ENGINE_API UEnum* StaticEnum<ESpeedTreeGeometryType>();

#define FOREACH_ENUM_ESPEEDTREEWINDTYPE(op) \
	op(STW_None) \
	op(STW_Fastest) \
	op(STW_Fast) \
	op(STW_Better) \
	op(STW_Best) \
	op(STW_Palm) \
	op(STW_BestPlus) 

enum ESpeedTreeWindType : int;
template<> ENGINE_API UEnum* StaticEnum<ESpeedTreeWindType>();

#define FOREACH_ENUM_ESPEEDTREELODTYPE(op) \
	op(STLOD_Pop) \
	op(STLOD_Smooth) 

enum ESpeedTreeLODType : int;
template<> ENGINE_API UEnum* StaticEnum<ESpeedTreeLODType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
