// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnhancedInputLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APlayerController;
class UInputAction;
class UInputMappingContext;
class UPlayerMappableKeySettings;
enum class EInputActionValueType : uint8;
enum class ETriggerEvent : uint8;
struct FEnhancedActionKeyMapping;
struct FInputActionValue;
struct FPlayerMappableKeySlot;
#ifdef ENHANCEDINPUT_EnhancedInputLibrary_generated_h
#error "EnhancedInputLibrary.generated.h already included, missing '#pragma once' in EnhancedInputLibrary.h"
#endif
#define ENHANCEDINPUT_EnhancedInputLibrary_generated_h

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFlushPlayerInput); \
	DECLARE_FUNCTION(execGetFourthPlayerMappableKeySlot); \
	DECLARE_FUNCTION(execGetThirdPlayerMappableKeySlot); \
	DECLARE_FUNCTION(execGetSecondPlayerMappableKeySlot); \
	DECLARE_FUNCTION(execGetFirstPlayerMappableKeySlot); \
	DECLARE_FUNCTION(execConv_TriggerEventValueToString); \
	DECLARE_FUNCTION(execConv_InputActionValueToString); \
	DECLARE_FUNCTION(execConv_InputActionValueToAxis3D); \
	DECLARE_FUNCTION(execConv_InputActionValueToAxis2D); \
	DECLARE_FUNCTION(execConv_InputActionValueToAxis1D); \
	DECLARE_FUNCTION(execConv_InputActionValueToBool); \
	DECLARE_FUNCTION(execGetBoundActionValue); \
	DECLARE_FUNCTION(execIsActionKeyMappingPlayerMappable); \
	DECLARE_FUNCTION(execGetMappingName); \
	DECLARE_FUNCTION(execGetPlayerMappableKeySettings); \
	DECLARE_FUNCTION(execMakeInputActionValue); \
	DECLARE_FUNCTION(execMakeInputActionValueOfType); \
	DECLARE_FUNCTION(execBreakInputActionValue); \
	DECLARE_FUNCTION(execRequestRebuildControlMappingsUsingContext);


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnhancedInputLibrary(); \
	friend struct Z_Construct_UClass_UEnhancedInputLibrary_Statics; \
public: \
	DECLARE_CLASS(UEnhancedInputLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UEnhancedInputLibrary)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnhancedInputLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnhancedInputLibrary(UEnhancedInputLibrary&&); \
	UEnhancedInputLibrary(const UEnhancedInputLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnhancedInputLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnhancedInputLibrary) \
	NO_API virtual ~UEnhancedInputLibrary();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_21_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UEnhancedInputLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
