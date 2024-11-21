// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Protocols/VideoCaptureProtocol.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENECAPTURE_VideoCaptureProtocol_generated_h
#error "VideoCaptureProtocol.generated.h already included, missing '#pragma once' in VideoCaptureProtocol.h"
#endif
#define MOVIESCENECAPTURE_VideoCaptureProtocol_generated_h

#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_VideoCaptureProtocol_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVideoCaptureProtocol(); \
	friend struct Z_Construct_UClass_UVideoCaptureProtocol_Statics; \
public: \
	DECLARE_CLASS(UVideoCaptureProtocol, UFrameGrabberProtocol, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), MOVIESCENECAPTURE_API) \
	DECLARE_SERIALIZER(UVideoCaptureProtocol)


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_VideoCaptureProtocol_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVideoCaptureProtocol(UVideoCaptureProtocol&&); \
	UVideoCaptureProtocol(const UVideoCaptureProtocol&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENECAPTURE_API, UVideoCaptureProtocol); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVideoCaptureProtocol); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVideoCaptureProtocol) \
	MOVIESCENECAPTURE_API virtual ~UVideoCaptureProtocol();


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_VideoCaptureProtocol_h_14_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_VideoCaptureProtocol_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_VideoCaptureProtocol_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_VideoCaptureProtocol_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENECAPTURE_API UClass* StaticClass<class UVideoCaptureProtocol>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_VideoCaptureProtocol_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
