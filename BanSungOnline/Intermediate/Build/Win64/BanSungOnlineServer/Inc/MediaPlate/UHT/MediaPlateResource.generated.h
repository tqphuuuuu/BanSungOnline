// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaPlateResource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEDIAPLATE_MediaPlateResource_generated_h
#error "MediaPlateResource.generated.h already included, missing '#pragma once' in MediaPlateResource.h"
#endif
#define MEDIAPLATE_MediaPlateResource_generated_h

#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateResource_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMediaPlateResource_Statics; \
	MEDIAPLATE_API static class UScriptStruct* StaticStruct();


template<> MEDIAPLATE_API UScriptStruct* StaticStruct<struct FMediaPlateResource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateResource_h


#define FOREACH_ENUM_EMEDIAPLATERESOURCETYPE(op) \
	op(EMediaPlateResourceType::Playlist) \
	op(EMediaPlateResourceType::External) \
	op(EMediaPlateResourceType::Asset) 

enum class EMediaPlateResourceType : uint8;
template<> struct TIsUEnumClass<EMediaPlateResourceType> { enum { Value = true }; };
template<> MEDIAPLATE_API UEnum* StaticEnum<EMediaPlateResourceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
