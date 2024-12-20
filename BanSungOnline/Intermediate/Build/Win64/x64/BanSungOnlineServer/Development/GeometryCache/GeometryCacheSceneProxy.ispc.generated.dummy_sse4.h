//
// C:\\GameOnline\\BanSungOnline\\BanSungOnline\\Intermediate\\Build\\Win64\\x64\\BanSungOnlineServer\\Development\\GeometryCache\\GeometryCacheSceneProxy.ispc.generated.dummy_sse4.h
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

#ifndef __ISPC_STRUCT_FVector3f__
#define __ISPC_STRUCT_FVector3f__
struct FVector3f {
    float V[3];
};
#endif

#ifndef __ISPC_STRUCT_FVector2f__
#define __ISPC_STRUCT_FVector2f__
struct FVector2f {
    float V[2];
};
#endif


///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
extern "C" {
#endif // __cplusplus
    extern void InterpolateColors(uint8_t * InColorA, uint8_t * InColorB, uint8_t * Scratch, int32_t NumVerts, float WeightA, float WeightB);
    extern void InterpolateMotionVectors(struct FVector3f * PositionA, struct FVector3f * PositionB, struct FVector3f * Scratch, int32_t NumVerts, float WeightA, float WeightB, float MotionVectorScale);
    extern void InterpolatePositions(struct FVector3f * PositionA, struct FVector3f * PositionB, struct FVector3f * Scratch, int32_t NumVerts, float WeightA, float WeightB);
    extern void InterpolateTangents(uint8_t * InTangentXA, uint8_t * InTangentXB, uint8_t * InTangentZA, uint8_t * InTangentZB, uint8_t * XScratch, uint8_t * ZScratch, int32_t NumVerts, float WeightA, float WeightB);
    extern void InterpolateUVs(struct FVector2f * PositionA, struct FVector2f * PositionB, struct FVector2f * Scratch, int32_t NumVerts, float WeightA, float WeightB);
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
} /* end extern C */
#endif // __cplusplus


#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus
