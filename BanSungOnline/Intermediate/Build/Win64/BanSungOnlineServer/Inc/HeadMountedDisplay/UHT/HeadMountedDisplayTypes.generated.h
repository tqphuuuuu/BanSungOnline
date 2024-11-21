// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HeadMountedDisplayTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EHandKeypoint : uint8;
#ifdef HEADMOUNTEDDISPLAY_HeadMountedDisplayTypes_generated_h
#error "HeadMountedDisplayTypes.generated.h already included, missing '#pragma once' in HeadMountedDisplayTypes.h"
#endif
#define HEADMOUNTEDDISPLAY_HeadMountedDisplayTypes_generated_h

#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_295_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConv_HandKeypointToInt32);


#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_295_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHandKeypointConversion(); \
	friend struct Z_Construct_UClass_UHandKeypointConversion_Statics; \
public: \
	DECLARE_CLASS(UHandKeypointConversion, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), HEADMOUNTEDDISPLAY_API) \
	DECLARE_SERIALIZER(UHandKeypointConversion)


#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_295_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HEADMOUNTEDDISPLAY_API UHandKeypointConversion(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHandKeypointConversion(UHandKeypointConversion&&); \
	UHandKeypointConversion(const UHandKeypointConversion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HEADMOUNTEDDISPLAY_API, UHandKeypointConversion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandKeypointConversion); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHandKeypointConversion) \
	HEADMOUNTEDDISPLAY_API virtual ~UHandKeypointConversion();


#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_292_PROLOG
#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_295_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_295_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_295_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_295_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<class UHandKeypointConversion>();

#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_346_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FXRHMDData_Statics; \
	HEADMOUNTEDDISPLAY_API static class UScriptStruct* StaticStruct();


template<> HEADMOUNTEDDISPLAY_API UScriptStruct* StaticStruct<struct FXRHMDData>();

#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_367_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FXRMotionControllerData_Statics; \
	HEADMOUNTEDDISPLAY_API static class UScriptStruct* StaticStruct();


template<> HEADMOUNTEDDISPLAY_API UScriptStruct* StaticStruct<struct FXRMotionControllerData>();

#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_422_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FXRMotionControllerState_Statics; \
	HEADMOUNTEDDISPLAY_API static class UScriptStruct* StaticStruct();


template<> HEADMOUNTEDDISPLAY_API UScriptStruct* StaticStruct<struct FXRMotionControllerState>();

#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_461_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FXRHandTrackingState_Statics; \
	HEADMOUNTEDDISPLAY_API static class UScriptStruct* StaticStruct();


template<> HEADMOUNTEDDISPLAY_API UScriptStruct* StaticStruct<struct FXRHandTrackingState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h


#define FOREACH_ENUM_EORIENTPOSITIONSELECTOR(op) \
	op(EOrientPositionSelector::Orientation) \
	op(EOrientPositionSelector::Position) \
	op(EOrientPositionSelector::OrientationAndPosition) 

namespace EOrientPositionSelector { enum Type : int; }
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EOrientPositionSelector::Type>();

#define FOREACH_ENUM_EHMDTRACKINGORIGIN(op) \
	op(EHMDTrackingOrigin::View) \
	op(EHMDTrackingOrigin::LocalFloor) \
	op(EHMDTrackingOrigin::Local) \
	op(EHMDTrackingOrigin::Stage) \
	op(EHMDTrackingOrigin::CustomOpenXR) 

namespace EHMDTrackingOrigin { enum Type : int; }
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EHMDTrackingOrigin::Type>();

#define FOREACH_ENUM_EHMDWORNSTATE(op) \
	op(EHMDWornState::Unknown) \
	op(EHMDWornState::Worn) \
	op(EHMDWornState::NotWorn) 

namespace EHMDWornState { enum Type : int; }
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EHMDWornState::Type>();

#define FOREACH_ENUM_EXRDEVICECONNECTIONRESULT(op) \
	op(EXRDeviceConnectionResult::NoTrackingSystem) \
	op(EXRDeviceConnectionResult::FeatureNotSupported) \
	op(EXRDeviceConnectionResult::NoValidViewport) \
	op(EXRDeviceConnectionResult::MiscFailure) \
	op(EXRDeviceConnectionResult::Success) 

namespace EXRDeviceConnectionResult { enum Type : int; }
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EXRDeviceConnectionResult::Type>();

#define FOREACH_ENUM_EXRSYSTEMFLAGS(op) \
	op(EXRSystemFlags::NoFlags) \
	op(EXRSystemFlags::IsAR) \
	op(EXRSystemFlags::IsTablet) \
	op(EXRSystemFlags::IsHeadMounted) \
	op(EXRSystemFlags::SupportsHandTracking) 

namespace EXRSystemFlags { enum Type : int; }
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EXRSystemFlags::Type>();

#define FOREACH_ENUM_ESPECTATORSCREENMODE(op) \
	op(ESpectatorScreenMode::Disabled) \
	op(ESpectatorScreenMode::SingleEyeLetterboxed) \
	op(ESpectatorScreenMode::Undistorted) \
	op(ESpectatorScreenMode::Distorted) \
	op(ESpectatorScreenMode::SingleEye) \
	op(ESpectatorScreenMode::SingleEyeCroppedToFill) \
	op(ESpectatorScreenMode::Texture) \
	op(ESpectatorScreenMode::TexturePlusEye) 

enum class ESpectatorScreenMode : uint8;
template<> struct TIsUEnumClass<ESpectatorScreenMode> { enum { Value = true }; };
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<ESpectatorScreenMode>();

#define FOREACH_ENUM_EXRTRACKEDDEVICETYPE(op) \
	op(EXRTrackedDeviceType::HeadMountedDisplay) \
	op(EXRTrackedDeviceType::Controller) \
	op(EXRTrackedDeviceType::TrackingReference) \
	op(EXRTrackedDeviceType::Tracker) \
	op(EXRTrackedDeviceType::Other) \
	op(EXRTrackedDeviceType::Invalid) \
	op(EXRTrackedDeviceType::Any) 

enum class EXRTrackedDeviceType : uint8;
template<> struct TIsUEnumClass<EXRTrackedDeviceType> { enum { Value = true }; };
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EXRTrackedDeviceType>();

#define FOREACH_ENUM_EHANDKEYPOINT(op) \
	op(EHandKeypoint::Palm) \
	op(EHandKeypoint::Wrist) \
	op(EHandKeypoint::ThumbMetacarpal) \
	op(EHandKeypoint::ThumbProximal) \
	op(EHandKeypoint::ThumbDistal) \
	op(EHandKeypoint::ThumbTip) \
	op(EHandKeypoint::IndexMetacarpal) \
	op(EHandKeypoint::IndexProximal) \
	op(EHandKeypoint::IndexIntermediate) \
	op(EHandKeypoint::IndexDistal) \
	op(EHandKeypoint::IndexTip) \
	op(EHandKeypoint::MiddleMetacarpal) \
	op(EHandKeypoint::MiddleProximal) \
	op(EHandKeypoint::MiddleIntermediate) \
	op(EHandKeypoint::MiddleDistal) \
	op(EHandKeypoint::MiddleTip) \
	op(EHandKeypoint::RingMetacarpal) \
	op(EHandKeypoint::RingProximal) \
	op(EHandKeypoint::RingIntermediate) \
	op(EHandKeypoint::RingDistal) \
	op(EHandKeypoint::RingTip) \
	op(EHandKeypoint::LittleMetacarpal) \
	op(EHandKeypoint::LittleProximal) \
	op(EHandKeypoint::LittleIntermediate) \
	op(EHandKeypoint::LittleDistal) \
	op(EHandKeypoint::LittleTip) 

enum class EHandKeypoint : uint8;
template<> struct TIsUEnumClass<EHandKeypoint> { enum { Value = true }; };
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EHandKeypoint>();

#define FOREACH_ENUM_EXRVISUALTYPE(op) \
	op(EXRVisualType::Controller) \
	op(EXRVisualType::Hand) 

enum class EXRVisualType : uint8;
template<> struct TIsUEnumClass<EXRVisualType> { enum { Value = true }; };
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EXRVisualType>();

#define FOREACH_ENUM_EXRSPACETYPE(op) \
	op(EXRSpaceType::UnrealWorldSpace) \
	op(EXRSpaceType::XRTrackingSpace) 

enum class EXRSpaceType : uint8;
template<> struct TIsUEnumClass<EXRSpaceType> { enum { Value = true }; };
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EXRSpaceType>();

#define FOREACH_ENUM_EXRCONTROLLERPOSETYPE(op) \
	op(EXRControllerPoseType::Aim) \
	op(EXRControllerPoseType::Grip) \
	op(EXRControllerPoseType::Palm) 

enum class EXRControllerPoseType : uint8;
template<> struct TIsUEnumClass<EXRControllerPoseType> { enum { Value = true }; };
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EXRControllerPoseType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
