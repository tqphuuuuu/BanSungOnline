// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExtensionLibraries/MovieSceneFolderExtensions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneFolder;
class UMovieSceneTrack;
struct FColor;
struct FMovieSceneBindingProxy;
#ifdef SEQUENCERSCRIPTING_MovieSceneFolderExtensions_generated_h
#error "MovieSceneFolderExtensions.generated.h already included, missing '#pragma once' in MovieSceneFolderExtensions.h"
#endif
#define SEQUENCERSCRIPTING_MovieSceneFolderExtensions_generated_h

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveChildObjectBinding); \
	DECLARE_FUNCTION(execAddChildObjectBinding); \
	DECLARE_FUNCTION(execGetChildObjectBindings); \
	DECLARE_FUNCTION(execRemoveChildTrack); \
	DECLARE_FUNCTION(execAddChildTrack); \
	DECLARE_FUNCTION(execGetChildTracks); \
	DECLARE_FUNCTION(execRemoveChildFolder); \
	DECLARE_FUNCTION(execAddChildFolder); \
	DECLARE_FUNCTION(execGetChildFolders); \
	DECLARE_FUNCTION(execSetFolderColor); \
	DECLARE_FUNCTION(execGetFolderColor); \
	DECLARE_FUNCTION(execSetFolderName); \
	DECLARE_FUNCTION(execGetFolderName);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneFolderExtensions(); \
	friend struct Z_Construct_UClass_UMovieSceneFolderExtensions_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneFolderExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneFolderExtensions)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneFolderExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneFolderExtensions(UMovieSceneFolderExtensions&&); \
	UMovieSceneFolderExtensions(const UMovieSceneFolderExtensions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneFolderExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneFolderExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneFolderExtensions) \
	NO_API virtual ~UMovieSceneFolderExtensions();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_17_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCERSCRIPTING_API UClass* StaticClass<class UMovieSceneFolderExtensions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
