// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelSequencePlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALevelSequenceActor;
class UCameraComponent;
class ULevelSequence;
class ULevelSequencePlayer;
class UObject;
struct FMovieSceneSequencePlaybackSettings;
#ifdef LEVELSEQUENCE_LevelSequencePlayer_generated_h
#error "LevelSequencePlayer.generated.h already included, missing '#pragma once' in LevelSequencePlayer.h"
#endif
#define LEVELSEQUENCE_LevelSequencePlayer_generated_h

#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_27_DELEGATE \
LEVELSEQUENCE_API void FOnLevelSequencePlayerCameraCutEvent_DelegateWrapper(const FMulticastScriptDelegate& OnLevelSequencePlayerCameraCutEvent, UCameraComponent* CameraComponent);


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics; \
	LEVELSEQUENCE_API static class UScriptStruct* StaticStruct();


template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<struct FLevelSequencePlayerSnapshot>();

#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetActiveCameraComponent); \
	DECLARE_FUNCTION(execCreateLevelSequencePlayer);


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSequencePlayer(); \
	friend struct Z_Construct_UClass_ULevelSequencePlayer_Statics; \
public: \
	DECLARE_CLASS(ULevelSequencePlayer, UMovieSceneSequencePlayer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequence"), LEVELSEQUENCE_API) \
	DECLARE_SERIALIZER(ULevelSequencePlayer)


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_82_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULevelSequencePlayer(ULevelSequencePlayer&&); \
	ULevelSequencePlayer(const ULevelSequencePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEVELSEQUENCE_API, ULevelSequencePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequencePlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequencePlayer) \
	LEVELSEQUENCE_API virtual ~ULevelSequencePlayer();


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_74_PROLOG
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_82_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_82_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELSEQUENCE_API UClass* StaticClass<class ULevelSequencePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
