// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionMiniMapVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WorldPartitionMiniMapVolume_generated_h
#error "WorldPartitionMiniMapVolume.generated.h already included, missing '#pragma once' in WorldPartitionMiniMapVolume.h"
#endif
#define ENGINE_WorldPartitionMiniMapVolume_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMapVolume_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldPartitionMiniMapVolume(); \
	friend struct Z_Construct_UClass_AWorldPartitionMiniMapVolume_Statics; \
public: \
	DECLARE_CLASS(AWorldPartitionMiniMapVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AWorldPartitionMiniMapVolume)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMapVolume_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWorldPartitionMiniMapVolume(AWorldPartitionMiniMapVolume&&); \
	AWorldPartitionMiniMapVolume(const AWorldPartitionMiniMapVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AWorldPartitionMiniMapVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldPartitionMiniMapVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldPartitionMiniMapVolume) \
	ENGINE_API virtual ~AWorldPartitionMiniMapVolume();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMapVolume_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMapVolume_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMapVolume_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMapVolume_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AWorldPartitionMiniMapVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMapVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
