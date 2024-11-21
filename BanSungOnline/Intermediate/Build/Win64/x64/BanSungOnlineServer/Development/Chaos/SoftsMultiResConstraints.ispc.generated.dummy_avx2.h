//
// C:\\GitHub\\BanSungOnline\\BanSungOnline\\Intermediate\\Build\\Win64\\x64\\BanSungOnlineServer\\Development\\Chaos\\SoftsMultiResConstraints.ispc.generated.dummy_avx2.h
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

#ifndef __ISPC_STRUCT_FVector3f__
#define __ISPC_STRUCT_FVector3f__
struct FVector3f {
    float V[3];
};
#endif

#ifndef __ISPC_STRUCT_FIntVector__
#define __ISPC_STRUCT_FIntVector__
struct FIntVector {
    int32_t V[3];
};
#endif


///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
extern "C" {
#endif // __cplusplus
    extern void ApplyMultiResConstraints(struct FVector4f * PandInvM, const struct FVector3f * X, const struct FVector3f * TargetPositions, const struct FVector3f * TargetVelocities, const float Dt, const float Stiffness, const float VelocityStiffness, const int32_t NumParticles);
    extern void ApplyMultiResConstraintsWithWeightMaps(struct FVector4f * PandInvM, const struct FVector3f * X, const struct FVector3f * TargetPositions, const struct FVector3f * TargetVelocities, const float Dt, const bool StiffnessHasMap, const uint8_t * StiffnessIndices, const float * StiffnessTable, const bool VelocityStiffnessHasMap, const uint8_t * VelocityStiffnessIndices, const float * VelocityStiffnessTable, const int32_t NumParticles);
    extern void MultiResUpdateFineTargets(struct FVector3f * FineTargetPositions, struct FVector3f * FineTargetVelocities, const struct FVector3f * CoarseX, const struct FVector3f * CoarseNormals, const struct FVector3f * CoarseV, const struct FVector4f * CoarseToFinePositionBaryCoordsAndDist, const struct FIntVector * CoarseToFineSourceMeshVertIndices, const int32_t NumParticles);
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
} /* end extern C */
#endif // __cplusplus


#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus
