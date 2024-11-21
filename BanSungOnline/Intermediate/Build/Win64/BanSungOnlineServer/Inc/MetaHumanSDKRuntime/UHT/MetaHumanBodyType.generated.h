// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanBodyType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef METAHUMANSDKRUNTIME_MetaHumanBodyType_generated_h
#error "MetaHumanBodyType.generated.h already included, missing '#pragma once' in MetaHumanBodyType.h"
#endif
#define METAHUMANSDKRUNTIME_MetaHumanBodyType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanBodyType_h


#define FOREACH_ENUM_EMETAHUMANBODYTYPE(op) \
	op(EMetaHumanBodyType::f_med_nrw) \
	op(EMetaHumanBodyType::f_med_ovw) \
	op(EMetaHumanBodyType::f_med_unw) \
	op(EMetaHumanBodyType::f_srt_nrw) \
	op(EMetaHumanBodyType::f_srt_ovw) \
	op(EMetaHumanBodyType::f_srt_unw) \
	op(EMetaHumanBodyType::f_tal_nrw) \
	op(EMetaHumanBodyType::f_tal_ovw) \
	op(EMetaHumanBodyType::f_tal_unw) \
	op(EMetaHumanBodyType::m_med_nrw) \
	op(EMetaHumanBodyType::m_med_ovw) \
	op(EMetaHumanBodyType::m_med_unw) \
	op(EMetaHumanBodyType::m_srt_nrw) \
	op(EMetaHumanBodyType::m_srt_ovw) \
	op(EMetaHumanBodyType::m_srt_unw) \
	op(EMetaHumanBodyType::m_tal_nrw) \
	op(EMetaHumanBodyType::m_tal_ovw) \
	op(EMetaHumanBodyType::m_tal_unw) \
	op(EMetaHumanBodyType::Count) 

enum class EMetaHumanBodyType : uint8;
template<> struct TIsUEnumClass<EMetaHumanBodyType> { enum { Value = true }; };
template<> METAHUMANSDKRUNTIME_API UEnum* StaticEnum<EMetaHumanBodyType>();

#define FOREACH_ENUM_EMETAHUMANBODYBODYPARTINDEX(op) \
	op(EMetaHumanBodyBodyPartIndex::Body) \
	op(EMetaHumanBodyBodyPartIndex::Face) \
	op(EMetaHumanBodyBodyPartIndex::Torso) \
	op(EMetaHumanBodyBodyPartIndex::Legs) \
	op(EMetaHumanBodyBodyPartIndex::Feet) \
	op(EMetaHumanBodyBodyPartIndex::Count) 

enum class EMetaHumanBodyBodyPartIndex : uint32;
template<> struct TIsUEnumClass<EMetaHumanBodyBodyPartIndex> { enum { Value = true }; };
template<> METAHUMANSDKRUNTIME_API UEnum* StaticEnum<EMetaHumanBodyBodyPartIndex>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
