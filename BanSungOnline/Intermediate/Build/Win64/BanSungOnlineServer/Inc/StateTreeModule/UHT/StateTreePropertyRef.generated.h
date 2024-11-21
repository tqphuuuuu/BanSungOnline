// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreePropertyRef.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATETREEMODULE_StateTreePropertyRef_generated_h
#error "StateTreePropertyRef.generated.h already included, missing '#pragma once' in StateTreePropertyRef.h"
#endif
#define STATETREEMODULE_StateTreePropertyRef_generated_h

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyRef_h_133_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreePropertyRef_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreePropertyRef>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyRef_h_328_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStateTreePropertyRef Super;


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeBlueprintPropertyRef>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyRef_h


#define FOREACH_ENUM_ESTATETREEPROPERTYREFTYPE(op) \
	op(EStateTreePropertyRefType::None) \
	op(EStateTreePropertyRefType::Bool) \
	op(EStateTreePropertyRefType::Byte) \
	op(EStateTreePropertyRefType::Int32) \
	op(EStateTreePropertyRefType::Int64) \
	op(EStateTreePropertyRefType::Float) \
	op(EStateTreePropertyRefType::Double) \
	op(EStateTreePropertyRefType::Name) \
	op(EStateTreePropertyRefType::String) \
	op(EStateTreePropertyRefType::Text) \
	op(EStateTreePropertyRefType::Enum) \
	op(EStateTreePropertyRefType::Struct) \
	op(EStateTreePropertyRefType::Object) \
	op(EStateTreePropertyRefType::SoftObject) \
	op(EStateTreePropertyRefType::Class) \
	op(EStateTreePropertyRefType::SoftClass) 

enum class EStateTreePropertyRefType : uint8;
template<> struct TIsUEnumClass<EStateTreePropertyRefType> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreePropertyRefType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
