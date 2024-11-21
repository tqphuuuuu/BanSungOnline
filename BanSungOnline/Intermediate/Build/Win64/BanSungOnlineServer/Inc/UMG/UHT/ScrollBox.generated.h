// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ScrollBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
enum class EConsumeMouseWheel : uint8;
enum class EDescendantScrollDestination : uint8;
enum class EScrollWhenFocusChanges : uint8;
enum class ESlateVisibility : uint8;
struct FMargin;
#ifdef UMG_ScrollBox_generated_h
#error "ScrollBox.generated.h already included, missing '#pragma once' in ScrollBox.h"
#endif
#define UMG_ScrollBox_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_14_DELEGATE \
UMG_API void FOnUserScrolledEvent_DelegateWrapper(const FMulticastScriptDelegate& OnUserScrolledEvent, float CurrentOffset);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_15_DELEGATE \
UMG_API void FOnScrollBarVisibilityChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnScrollBarVisibilityChangedEvent, ESlateVisibility NewVisibility);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_23_RPC_WRAPPERS \
	DECLARE_FUNCTION(execScrollWidgetIntoView); \
	DECLARE_FUNCTION(execScrollToEnd); \
	DECLARE_FUNCTION(execScrollToStart); \
	DECLARE_FUNCTION(execGetViewOffsetFraction); \
	DECLARE_FUNCTION(execGetViewFraction); \
	DECLARE_FUNCTION(execGetScrollOffsetOfEnd); \
	DECLARE_FUNCTION(execGetScrollOffset); \
	DECLARE_FUNCTION(execSetScrollOffset); \
	DECLARE_FUNCTION(execEndInertialScrolling); \
	DECLARE_FUNCTION(execSetNavigationDestination); \
	DECLARE_FUNCTION(execSetScrollWhenFocusChanges); \
	DECLARE_FUNCTION(execSetIsTouchScrollingEnabled); \
	DECLARE_FUNCTION(execSetWheelScrollMultiplier); \
	DECLARE_FUNCTION(execSetScrollAnimationInterpolationSpeed); \
	DECLARE_FUNCTION(execSetAnimateWheelScrolling); \
	DECLARE_FUNCTION(execSetAllowOverscroll); \
	DECLARE_FUNCTION(execSetAlwaysShowScrollbar); \
	DECLARE_FUNCTION(execSetScrollbarPadding); \
	DECLARE_FUNCTION(execSetScrollbarThickness); \
	DECLARE_FUNCTION(execSetScrollBarVisibility); \
	DECLARE_FUNCTION(execSetOrientation); \
	DECLARE_FUNCTION(execSetConsumeMouseWheel);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_23_ACCESSORS \
static void GetScrollAnimationInterpolationSpeed_WrapperImpl(const void* Object, void* OutValue); \
static void SetScrollAnimationInterpolationSpeed_WrapperImpl(void* Object, const void* InValue); \
static void GetbEnableTouchScrolling_WrapperImpl(const void* Object, void* OutValue); \
static void SetbEnableTouchScrolling_WrapperImpl(void* Object, const void* InValue); \
static void GetWidgetStyle_WrapperImpl(const void* Object, void* OutValue); \
static void SetWidgetStyle_WrapperImpl(void* Object, const void* InValue); \
static void GetWidgetBarStyle_WrapperImpl(const void* Object, void* OutValue); \
static void SetWidgetBarStyle_WrapperImpl(void* Object, const void* InValue); \
static void GetOrientation_WrapperImpl(const void* Object, void* OutValue); \
static void SetOrientation_WrapperImpl(void* Object, const void* InValue); \
static void GetScrollBarVisibility_WrapperImpl(const void* Object, void* OutValue); \
static void SetScrollBarVisibility_WrapperImpl(void* Object, const void* InValue); \
static void GetConsumeMouseWheel_WrapperImpl(const void* Object, void* OutValue); \
static void SetConsumeMouseWheel_WrapperImpl(void* Object, const void* InValue); \
static void GetScrollbarThickness_WrapperImpl(const void* Object, void* OutValue); \
static void SetScrollbarThickness_WrapperImpl(void* Object, const void* InValue); \
static void GetScrollbarPadding_WrapperImpl(const void* Object, void* OutValue); \
static void SetScrollbarPadding_WrapperImpl(void* Object, const void* InValue); \
static void GetAlwaysShowScrollbar_WrapperImpl(const void* Object, void* OutValue); \
static void SetAlwaysShowScrollbar_WrapperImpl(void* Object, const void* InValue); \
static void GetAlwaysShowScrollbarTrack_WrapperImpl(const void* Object, void* OutValue); \
static void SetAlwaysShowScrollbarTrack_WrapperImpl(void* Object, const void* InValue); \
static void GetAllowOverscroll_WrapperImpl(const void* Object, void* OutValue); \
static void SetAllowOverscroll_WrapperImpl(void* Object, const void* InValue); \
static void GetBackPadScrolling_WrapperImpl(const void* Object, void* OutValue); \
static void GetFrontPadScrolling_WrapperImpl(const void* Object, void* OutValue); \
static void GetbAnimateWheelScrolling_WrapperImpl(const void* Object, void* OutValue); \
static void SetbAnimateWheelScrolling_WrapperImpl(void* Object, const void* InValue); \
static void GetNavigationDestination_WrapperImpl(const void* Object, void* OutValue); \
static void SetNavigationDestination_WrapperImpl(void* Object, const void* InValue); \
static void GetNavigationScrollPadding_WrapperImpl(const void* Object, void* OutValue); \
static void GetScrollWhenFocusChanges_WrapperImpl(const void* Object, void* OutValue); \
static void SetScrollWhenFocusChanges_WrapperImpl(void* Object, const void* InValue); \
static void GetbAllowRightClickDragScrolling_WrapperImpl(const void* Object, void* OutValue); \
static void SetbAllowRightClickDragScrolling_WrapperImpl(void* Object, const void* InValue); \
static void GetWheelScrollMultiplier_WrapperImpl(const void* Object, void* OutValue); \
static void SetWheelScrollMultiplier_WrapperImpl(void* Object, const void* InValue);


#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_23_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UScrollBox, UMG_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_23_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUScrollBox(); \
	friend struct Z_Construct_UClass_UScrollBox_Statics; \
public: \
	DECLARE_CLASS(UScrollBox, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UScrollBox) \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_23_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UScrollBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScrollBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UScrollBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScrollBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UScrollBox(UScrollBox&&); \
	UScrollBox(const UScrollBox&); \
public: \
	UMG_API virtual ~UScrollBox();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_20_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_23_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_23_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UScrollBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
