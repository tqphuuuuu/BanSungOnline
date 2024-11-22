// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Kismet/BlueprintPlatformLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateTime;
#ifdef ENGINE_BlueprintPlatformLibrary_generated_h
#error "BlueprintPlatformLibrary.generated.h already included, missing '#pragma once' in BlueprintPlatformLibrary.h"
#endif
#define ENGINE_BlueprintPlatformLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_83_DELEGATE \
static ENGINE_API void FPlatformDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformDelegate);


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_84_DELEGATE \
static ENGINE_API void FPlatformStartupArgumentsDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformStartupArgumentsDelegate, TArray<FString> const& StartupArguments);


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_85_DELEGATE \
static ENGINE_API void FPlatformRegisteredForRemoteNotificationsDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformRegisteredForRemoteNotificationsDelegate, TArray<uint8> const& inArray);


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_86_DELEGATE \
static ENGINE_API void FPlatformRegisteredForUserNotificationsDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformRegisteredForUserNotificationsDelegate, int32 inInt);


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_87_DELEGATE \
static ENGINE_API void FPlatformFailedToRegisterForRemoteNotificationsDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformFailedToRegisterForRemoteNotificationsDelegate, const FString& inString);


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_88_DELEGATE \
static ENGINE_API void FPlatformReceivedRemoteNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformReceivedRemoteNotificationDelegate, const FString& inString, EApplicationState::Type inAppState);


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_89_DELEGATE \
static ENGINE_API void FPlatformReceivedLocalNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformReceivedLocalNotificationDelegate, const FString& inString, int32 inInt, EApplicationState::Type inAppState);


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_90_DELEGATE \
static ENGINE_API void FPlatformScreenOrientationChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformScreenOrientationChangedDelegate, EScreenOrientation::Type inScreenOrientation);


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlatformGameInstance(); \
	friend struct Z_Construct_UClass_UPlatformGameInstance_Statics; \
public: \
	DECLARE_CLASS(UPlatformGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPlatformGameInstance)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_79_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPlatformGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlatformGameInstance(UPlatformGameInstance&&); \
	UPlatformGameInstance(const UPlatformGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPlatformGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformGameInstance) \
	ENGINE_API virtual ~UPlatformGameInstance();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_76_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_79_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPlatformGameInstance>();

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_180_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetAllowedDeviceOrientation); \
	DECLARE_FUNCTION(execGetAllowedDeviceOrientation); \
	DECLARE_FUNCTION(execGetDeviceOrientation); \
	DECLARE_FUNCTION(execGetLaunchNotification); \
	DECLARE_FUNCTION(execCancelLocalNotificationById); \
	DECLARE_FUNCTION(execCancelLocalNotification); \
	DECLARE_FUNCTION(execScheduleLocalNotificationBadgeFromNow); \
	DECLARE_FUNCTION(execScheduleLocalNotificationBadgeAtTime); \
	DECLARE_FUNCTION(execScheduleLocalNotificationFromNow); \
	DECLARE_FUNCTION(execScheduleLocalNotificationAtTime); \
	DECLARE_FUNCTION(execClearAllLocalNotifications);


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_180_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintPlatformLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintPlatformLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintPlatformLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBlueprintPlatformLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_180_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlueprintPlatformLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintPlatformLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlueprintPlatformLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintPlatformLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintPlatformLibrary(UBlueprintPlatformLibrary&&); \
	UBlueprintPlatformLibrary(const UBlueprintPlatformLibrary&); \
public: \
	ENGINE_API virtual ~UBlueprintPlatformLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_177_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_180_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_180_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_180_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_180_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBlueprintPlatformLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h


#define FOREACH_ENUM_ESCREENORIENTATION(op) \
	op(EScreenOrientation::Unknown) \
	op(EScreenOrientation::Portrait) \
	op(EScreenOrientation::PortraitUpsideDown) \
	op(EScreenOrientation::LandscapeLeft) \
	op(EScreenOrientation::LandscapeRight) \
	op(EScreenOrientation::FaceUp) \
	op(EScreenOrientation::FaceDown) \
	op(EScreenOrientation::PortraitSensor) \
	op(EScreenOrientation::LandscapeSensor) \
	op(EScreenOrientation::FullSensor) 

namespace EScreenOrientation { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EScreenOrientation::Type>();

#define FOREACH_ENUM_EAPPLICATIONSTATE(op) \
	op(EApplicationState::Unknown) \
	op(EApplicationState::Inactive) \
	op(EApplicationState::Background) \
	op(EApplicationState::Active) 

namespace EApplicationState { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EApplicationState::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS