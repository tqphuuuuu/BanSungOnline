//
// C:\\GameOnline\\BanSungOnline\\BanSungOnline\\Intermediate\\Build\\Win64\\x64\\BanSungOnlineServer\\Development\\Engine\\KAggregateGeom.ispc.generated.dummy_sse4.h
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

#ifndef __ISPC_STRUCT_FVector__
#define __ISPC_STRUCT_FVector__
struct FVector {
    double V[3];
};
#endif

#ifndef __ISPC_STRUCT_FBox__
#define __ISPC_STRUCT_FBox__
struct FBox {
    struct FVector Min;
    struct FVector Max;
    uint8_t IsValid;
};
#endif

#ifndef __ISPC_STRUCT_FVector4__
#define __ISPC_STRUCT_FVector4__
struct FVector4 {
    double V[4];
};
#endif

#ifndef __ISPC_STRUCT_FTransform__
#define __ISPC_STRUCT_FTransform__
struct FTransform {
    struct FVector4 Rotation;
    struct FVector4 Translation;
    struct FVector4 Scale3D;
};
#endif

#ifndef __ISPC_STRUCT_FRotator__
#define __ISPC_STRUCT_FRotator__
struct FRotator {
    double Pitch;
    double Yaw;
    double Roll;
};
#endif


///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
extern "C" {
#endif // __cplusplus
#if defined(__cplusplus)
    extern void BoxCalcAABB(struct FBox &LocalBox, const struct FTransform &BoneTM, const float Scale, const struct FRotator &Rotation, const struct FVector &Center, const float X, const float Y, const float Z);
#else
    extern void BoxCalcAABB(struct FBox *LocalBox, const struct FTransform *BoneTM, const float Scale, const struct FRotator *Rotation, const struct FVector *Center, const float X, const float Y, const float Z);
#endif // BoxCalcAABB function declaraion
#if defined(__cplusplus)
    extern void SPhylCalcAABB(struct FBox &Result, const struct FTransform &BoneTM, const float Scale, const struct FRotator &Rotation, const struct FVector &Center, const float Radius, const float Length);
#else
    extern void SPhylCalcAABB(struct FBox *Result, const struct FTransform *BoneTM, const float Scale, const struct FRotator *Rotation, const struct FVector *Center, const float Radius, const float Length);
#endif // SPhylCalcAABB function declaraion
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
} /* end extern C */
#endif // __cplusplus


#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus
