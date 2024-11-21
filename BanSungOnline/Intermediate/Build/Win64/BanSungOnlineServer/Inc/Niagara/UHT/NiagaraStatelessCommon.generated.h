// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Stateless/NiagaraStatelessCommon.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraStatelessCommon_generated_h
#error "NiagaraStatelessCommon.generated.h already included, missing '#pragma once' in NiagaraStatelessCommon.h"
#endif
#define NIAGARA_NiagaraStatelessCommon_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessCommon_h


#define FOREACH_ENUM_ENIAGARASTATELESSFEATUREMASK(op) \
	op(ENiagaraStatelessFeatureMask::ExecuteGPU) \
	op(ENiagaraStatelessFeatureMask::ExecuteCPU) \
	op(ENiagaraStatelessFeatureMask::None) \
	op(ENiagaraStatelessFeatureMask::ExecuteAll) \
	op(ENiagaraStatelessFeatureMask::All) 

enum class ENiagaraStatelessFeatureMask : uint32;
template<> struct TIsUEnumClass<ENiagaraStatelessFeatureMask> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraStatelessFeatureMask>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
