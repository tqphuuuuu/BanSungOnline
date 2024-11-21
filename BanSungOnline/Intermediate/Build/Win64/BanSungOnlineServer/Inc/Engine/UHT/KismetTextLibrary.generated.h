// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Kismet/KismetTextLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FDateTime;
struct FFormatArgumentData;
struct FLinearColor;
struct FPolyglotTextData;
struct FTimespan;
#ifdef ENGINE_KismetTextLibrary_generated_h
#error "KismetTextLibrary.generated.h already included, missing '#pragma once' in KismetTextLibrary.h"
#endif
#define ENGINE_KismetTextLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_113_RPC_WRAPPERS \
	DECLARE_FUNCTION(execPolyglotDataToText); \
	DECLARE_FUNCTION(execIsPolyglotDataValid); \
	DECLARE_FUNCTION(execGetTextSourceString); \
	DECLARE_FUNCTION(execGetTextId); \
	DECLARE_FUNCTION(execStringTableIdAndKeyFromText); \
	DECLARE_FUNCTION(execTextFromStringTable); \
	DECLARE_FUNCTION(execTextIsFromStringTable); \
	DECLARE_FUNCTION(execFormat); \
	DECLARE_FUNCTION(execAsMemory); \
	DECLARE_FUNCTION(execAsTimespan_Timespan); \
	DECLARE_FUNCTION(execAsTimeZoneTime_DateTime); \
	DECLARE_FUNCTION(execAsTime_DateTime); \
	DECLARE_FUNCTION(execAsTimeZoneDateTime_DateTime); \
	DECLARE_FUNCTION(execAsDateTime_DateTime); \
	DECLARE_FUNCTION(execAsTimeZoneDate_DateTime); \
	DECLARE_FUNCTION(execAsDate_DateTime); \
	DECLARE_FUNCTION(execAsPercent_Float); \
	DECLARE_FUNCTION(execAsCurrency_Float); \
	DECLARE_FUNCTION(execAsCurrency_Integer); \
	DECLARE_FUNCTION(execAsCurrencyBase); \
	DECLARE_FUNCTION(execConv_DoubleToText); \
	DECLARE_FUNCTION(execConv_Int64ToText); \
	DECLARE_FUNCTION(execConv_IntToText); \
	DECLARE_FUNCTION(execConv_ByteToText); \
	DECLARE_FUNCTION(execConv_BoolToText); \
	DECLARE_FUNCTION(execNotEqual_IgnoreCase_TextText); \
	DECLARE_FUNCTION(execNotEqual_TextText); \
	DECLARE_FUNCTION(execEqualEqual_IgnoreCase_TextText); \
	DECLARE_FUNCTION(execEqualEqual_TextText); \
	DECLARE_FUNCTION(execFindTextInLocalizationTable); \
	DECLARE_FUNCTION(execGetEmptyText); \
	DECLARE_FUNCTION(execTextTrimPrecedingAndTrailing); \
	DECLARE_FUNCTION(execTextTrimTrailing); \
	DECLARE_FUNCTION(execTextTrimPreceding); \
	DECLARE_FUNCTION(execTextToUpper); \
	DECLARE_FUNCTION(execTextToLower); \
	DECLARE_FUNCTION(execTextIsCultureInvariant); \
	DECLARE_FUNCTION(execTextIsTransient); \
	DECLARE_FUNCTION(execTextIsEmpty); \
	DECLARE_FUNCTION(execMakeInvariantText); \
	DECLARE_FUNCTION(execConv_NameToText); \
	DECLARE_FUNCTION(execConv_StringToText); \
	DECLARE_FUNCTION(execConv_TextToString); \
	DECLARE_FUNCTION(execConv_ColorToText); \
	DECLARE_FUNCTION(execConv_ObjectToText); \
	DECLARE_FUNCTION(execConv_TransformToText); \
	DECLARE_FUNCTION(execConv_RotatorToText); \
	DECLARE_FUNCTION(execConv_Vector2dToText); \
	DECLARE_FUNCTION(execConv_VectorToText);


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_113_INCLASS \
private: \
	static void StaticRegisterNativesUKismetTextLibrary(); \
	friend struct Z_Construct_UClass_UKismetTextLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetTextLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UKismetTextLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_113_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UKismetTextLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetTextLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UKismetTextLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetTextLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UKismetTextLibrary(UKismetTextLibrary&&); \
	UKismetTextLibrary(const UKismetTextLibrary&); \
public: \
	ENGINE_API virtual ~UKismetTextLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_110_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_113_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_113_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_113_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_113_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UKismetTextLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h


#define FOREACH_ENUM_EROUNDINGMODE(op) \
	op(HalfToEven) \
	op(HalfFromZero) \
	op(HalfToZero) \
	op(FromZero) \
	op(ToZero) \
	op(ToNegativeInfinity) \
	op(ToPositiveInfinity) 

enum ERoundingMode : int;
template<> ENGINE_API UEnum* StaticEnum<ERoundingMode>();

#define FOREACH_ENUM_EMEMORYUNITSTANDARD(op) \
	op(IEC) \
	op(SI) 

enum EMemoryUnitStandard : int;
template<> ENGINE_API UEnum* StaticEnum<EMemoryUnitStandard>();

#define FOREACH_ENUM_ETEXTGENDER(op) \
	op(ETextGender::Masculine) \
	op(ETextGender::Feminine) \
	op(ETextGender::Neuter) 

enum class ETextGender : uint8;
template<> struct TIsUEnumClass<ETextGender> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ETextGender>();

#define FOREACH_ENUM_EDATETIMESTYLE(op) \
	op(EDateTimeStyle::Default) \
	op(EDateTimeStyle::Short) \
	op(EDateTimeStyle::Medium) \
	op(EDateTimeStyle::Long) \
	op(EDateTimeStyle::Full) \
	op(EDateTimeStyle::Custom) 

namespace EDateTimeStyle { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EDateTimeStyle::Type>();

#define FOREACH_ENUM_EFORMATARGUMENTTYPE(op) \
	op(EFormatArgumentType::Int) \
	op(EFormatArgumentType::UInt) \
	op(EFormatArgumentType::Float) \
	op(EFormatArgumentType::Double) \
	op(EFormatArgumentType::Text) \
	op(EFormatArgumentType::Gender) 

namespace EFormatArgumentType { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EFormatArgumentType::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
