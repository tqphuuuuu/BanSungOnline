// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Protocols/UserDefinedCaptureProtocol.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
struct FCapturedPixels;
struct FCapturedPixelsID;
struct FFrameMetrics;
#ifdef MOVIESCENECAPTURE_UserDefinedCaptureProtocol_generated_h
#error "UserDefinedCaptureProtocol.generated.h already included, missing '#pragma once' in UserDefinedCaptureProtocol.h"
#endif
#define MOVIESCENECAPTURE_UserDefinedCaptureProtocol_generated_h

#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCapturedPixelsID_Statics; \
	MOVIESCENECAPTURE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENECAPTURE_API UScriptStruct* StaticStruct<struct FCapturedPixelsID>();

#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCapturedPixels_Statics; \
	MOVIESCENECAPTURE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENECAPTURE_API UScriptStruct* StaticStruct<struct FCapturedPixels>();

#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentFrameMetrics); \
	DECLARE_FUNCTION(execGenerateFilename); \
	DECLARE_FUNCTION(execStopCapturingFinalPixels); \
	DECLARE_FUNCTION(execStartCapturingFinalPixels); \
	DECLARE_FUNCTION(execResolveBuffer); \
	DECLARE_FUNCTION(execOnCanFinalize); \
	DECLARE_FUNCTION(execOnSetup);


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_50_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserDefinedCaptureProtocol(); \
	friend struct Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics; \
public: \
	DECLARE_CLASS(UUserDefinedCaptureProtocol, UMovieSceneImageCaptureProtocolBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), MOVIESCENECAPTURE_API) \
	DECLARE_SERIALIZER(UUserDefinedCaptureProtocol)


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUserDefinedCaptureProtocol(UUserDefinedCaptureProtocol&&); \
	UUserDefinedCaptureProtocol(const UUserDefinedCaptureProtocol&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENECAPTURE_API, UUserDefinedCaptureProtocol); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserDefinedCaptureProtocol); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserDefinedCaptureProtocol) \
	MOVIESCENECAPTURE_API virtual ~UUserDefinedCaptureProtocol();


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_44_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_50_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_50_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENECAPTURE_API UClass* StaticClass<class UUserDefinedCaptureProtocol>();

#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_240_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWriteImageToDisk); \
	DECLARE_FUNCTION(execGenerateFilenameForCurrentFrame); \
	DECLARE_FUNCTION(execGenerateFilenameForBuffer);


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_240_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserDefinedImageCaptureProtocol(); \
	friend struct Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics; \
public: \
	DECLARE_CLASS(UUserDefinedImageCaptureProtocol, UUserDefinedCaptureProtocol, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), MOVIESCENECAPTURE_API) \
	DECLARE_SERIALIZER(UUserDefinedImageCaptureProtocol) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_240_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUserDefinedImageCaptureProtocol(UUserDefinedImageCaptureProtocol&&); \
	UUserDefinedImageCaptureProtocol(const UUserDefinedImageCaptureProtocol&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENECAPTURE_API, UUserDefinedImageCaptureProtocol); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserDefinedImageCaptureProtocol); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserDefinedImageCaptureProtocol) \
	MOVIESCENECAPTURE_API virtual ~UUserDefinedImageCaptureProtocol();


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_234_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_240_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_240_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_240_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_240_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENECAPTURE_API UClass* StaticClass<class UUserDefinedImageCaptureProtocol>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS