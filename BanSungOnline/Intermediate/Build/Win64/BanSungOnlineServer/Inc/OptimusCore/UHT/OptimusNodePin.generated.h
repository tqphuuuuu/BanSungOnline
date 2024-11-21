// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusNodePin.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPTIMUSCORE_OptimusNodePin_generated_h
#error "OptimusNodePin.generated.h already included, missing '#pragma once' in OptimusNodePin.h"
#endif
#define OPTIMUSCORE_OptimusNodePin_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodePin_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusNodePin(); \
	friend struct Z_Construct_UClass_UOptimusNodePin_Statics; \
public: \
	DECLARE_CLASS(UOptimusNodePin, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), NO_API) \
	DECLARE_SERIALIZER(UOptimusNodePin)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodePin_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptimusNodePin(UOptimusNodePin&&); \
	UOptimusNodePin(const UOptimusNodePin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusNodePin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusNodePin); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOptimusNodePin) \
	NO_API virtual ~UOptimusNodePin();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodePin_h_35_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodePin_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodePin_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodePin_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPTIMUSCORE_API UClass* StaticClass<class UOptimusNodePin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodePin_h


#define FOREACH_ENUM_EOPTIMUSNODEPINSTORAGETYPE(op) \
	op(EOptimusNodePinStorageType::Value) \
	op(EOptimusNodePinStorageType::Resource) 

enum class EOptimusNodePinStorageType : uint8;
template<> struct TIsUEnumClass<EOptimusNodePinStorageType> { enum { Value = true }; };
template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusNodePinStorageType>();

#define FOREACH_ENUM_EOPTIMUSNODEPINDIRECTION(op) \
	op(EOptimusNodePinDirection::Unknown) \
	op(EOptimusNodePinDirection::Input) \
	op(EOptimusNodePinDirection::Output) 

enum class EOptimusNodePinDirection : uint8;
template<> struct TIsUEnumClass<EOptimusNodePinDirection> { enum { Value = true }; };
template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusNodePinDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
