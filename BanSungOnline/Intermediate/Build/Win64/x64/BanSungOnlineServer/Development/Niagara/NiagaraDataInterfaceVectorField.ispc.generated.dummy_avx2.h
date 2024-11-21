//
// C:\\GitHub\\BanSungOnline\\BanSungOnline\\Intermediate\\Build\\Win64\\x64\\BanSungOnlineServer\\Development\\Niagara\\NiagaraDataInterfaceVectorField.ispc.generated.dummy_avx2.h
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

#ifndef __ISPC_STRUCT_FHalfVector__
#define __ISPC_STRUCT_FHalfVector__
struct FHalfVector {
    int16_t V[3];
};
#endif

#ifndef __ISPC_STRUCT_FVector__
#define __ISPC_STRUCT_FVector__
struct FVector {
    double V[3];
};
#endif


///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
extern "C" {
#endif // __cplusplus
#if defined(__cplusplus)
    extern void SampleVectorField(const float * XParam, const float * YParam, const float * ZParam, const bool bXParamConst, const bool bYParamConst, const bool bZParamConst, float * OutSampleX, float * OutSampleY, float * OutSampleZ, const bool bOutputXConst, const bool bOutputYConst, const bool bOutputZConst, const struct FHalfVector * Data, const int32_t DataSize, const struct FVector &MinBounds, const struct FVector &OneOverBoundSize, const struct FVector &Size, const struct FVector &TilingAxes, const int32_t NumInstances);
#else
    extern void SampleVectorField(const float * XParam, const float * YParam, const float * ZParam, const bool bXParamConst, const bool bYParamConst, const bool bZParamConst, float * OutSampleX, float * OutSampleY, float * OutSampleZ, const bool bOutputXConst, const bool bOutputYConst, const bool bOutputZConst, const struct FHalfVector * Data, const int32_t DataSize, const struct FVector *MinBounds, const struct FVector *OneOverBoundSize, const struct FVector *Size, const struct FVector *TilingAxes, const int32_t NumInstances);
#endif // SampleVectorField function declaraion
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
} /* end extern C */
#endif // __cplusplus


#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus
