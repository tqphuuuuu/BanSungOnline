//
// C:\\GameOnline\\BanSungOnline\\BanSungOnline\\Intermediate\\Build\\Win64\\x64\\BanSungOnlineServer\\Development\\Chaos\\PBDBendingConstraints.ispc.generated.dummy_avx512skx.h
// (Header automatically generated by the ispc compiler.)
// DO NOT EDIT THIS FILE.
//

#pragma once
#include <stdint.h>

#if !defined(__cplusplus)
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L)
#include <stdbool.h>
#else
typedef int bool;
#endif
#endif



#ifdef __cplusplus
namespace ispc { /* namespace */
#endif // __cplusplus
///////////////////////////////////////////////////////////////////////////
// Vector types with external visibility from ispc code
///////////////////////////////////////////////////////////////////////////

#ifndef __ISPC_VECTOR_float4__
#define __ISPC_VECTOR_float4__
#ifdef _MSC_VER
__declspec( align(16) ) struct float4 { float v[4]; };
#else
struct float4 { float v[4]; } __attribute__ ((aligned(16)));
#endif
#endif



#ifndef __ISPC_ALIGN__
#if defined(__clang__) || !defined(_MSC_VER)
// Clang, GCC, ICC
#define __ISPC_ALIGN__(s) __attribute__((aligned(s)))
#define __ISPC_ALIGNED_STRUCT__(s) struct __ISPC_ALIGN__(s)
#else
// Visual Studio
#define __ISPC_ALIGN__(s) __declspec(align(s))
#define __ISPC_ALIGNED_STRUCT__(s) __ISPC_ALIGN__(s) struct
#endif
#endif

#ifndef __ISPC_STRUCT_FVector4f__
#define __ISPC_STRUCT_FVector4f__
struct FVector4f {
    struct float4  V;
};
#endif

#ifndef __ISPC_STRUCT_FIntVector4__
#define __ISPC_STRUCT_FIntVector4__
struct FIntVector4 {
    int32_t V[4];
};
#endif

#ifndef __ISPC_STRUCT_FVector3f__
#define __ISPC_STRUCT_FVector3f__
struct FVector3f {
    float V[3];
};
#endif


///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
extern "C" {
#endif // __cplusplus
    extern void ApplyBendingConstraints(struct FVector4f * PandInvM, const struct FIntVector4 * Constraints, const float * RestAngles, const bool * IsBuckled, const float Stiffness, const float BucklingStiffness, const int32_t NumConstraints);
    extern void ApplyBendingConstraintsWithMaps(struct FVector4f * PandInvM, const struct FIntVector4 * Constraints, const float * RestAngles, const bool * IsBuckled, const bool StiffnessHasMap, const uint8_t * StiffnessIndices, const float * StiffnessTable, const bool BucklingStiffnessHasMap, const uint8_t * BucklingStiffnessIndices, const float * BucklingStiffnessTable, const int32_t NumConstraints);
    extern void InitBendingConstraintsIsBuckled(const struct FVector3f * X, const struct FIntVector4 * Constraints, const float * RestAngles, bool * IsBuckled, const float BucklingRatio, const int32_t NumConstraints);
    extern void InitBendingConstraintsIsBuckledWithMaps(const struct FVector3f * X, const struct FIntVector4 * Constraints, const float * RestAngles, bool * IsBuckled, const uint8_t * BucklingRatioIndices, const float * BucklingRatioTable, const int32_t NumConstraints);
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
} /* end extern C */
#endif // __cplusplus


#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus
