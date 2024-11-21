//
// C:\\GitHub\\BanSungOnline\\BanSungOnline\\Intermediate\\Build\\Win64\\x64\\BanSungOnlineServer\\Development\\Engine\\AnimationRuntime.ispc.generated.dummy_avx2.h
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

#ifndef __ISPC_STRUCT_FPerBoneBlendWeight__
#define __ISPC_STRUCT_FPerBoneBlendWeight__
struct FPerBoneBlendWeight {
    int32_t SourceIndex;
    float BlendWeight;
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
    extern void AccumulateWithAdditiveScale(struct FTransform * BasePose, const struct FTransform * AdditivePose, const float BlendWeight, const int32_t NumBones);
    extern void BlendCurves(const float * SourceCurveWeights, const uint32_t * SourceValidCurveWeights, float * OutCurveWeights, uint32_t * OutValidCurveWeights, const int32_t CurveLength, const int32_t CurveIndex, float SourceWeight);
    extern void BlendPosesPerBoneFilter(struct FTransform * OutPose, const struct FTransform * BasePose, const uint8_t * BlendPoseBase, float * MaxPoseWeights, const struct FPerBoneBlendWeight * BoneBlendWeights, const int32_t * ParentBoneArray, const int32_t NumBones);
    extern void BlendPosesPerBoneFilterRotation(struct FTransform * OutPose, const struct FTransform * BasePose, const uint8_t * BlendPoseBase, struct FVector4 * SourceRotations, struct FVector4 * TargetRotations, struct FVector4 * BlendRotations, float * MaxPoseWeights, const struct FPerBoneBlendWeight * BoneBlendWeights, const int32_t * ParentBoneArray, const int32_t NumBones);
    extern void BlendPosesPerBoneFilterScale(struct FTransform * OutPose, const struct FTransform * BasePose, const uint8_t * BlendPoseBase, struct FVector * SourceScales, struct FVector * TargetScales, struct FVector * BlendScales, float * MaxPoseWeights, const struct FPerBoneBlendWeight * BoneBlendWeights, const int32_t * ParentBoneArray, const int32_t NumBones);
    extern void BlendPosesPerBoneFilterScaleRotation(struct FTransform * OutPose, const struct FTransform * BasePose, const uint8_t * BlendPoseBase, struct FVector4 * SourceRotations, struct FVector * SourceScales, struct FVector4 * TargetRotations, struct FVector * TargetScales, struct FVector4 * BlendRotations, struct FVector * BlendScales, float * MaxPoseWeights, const struct FPerBoneBlendWeight * BoneBlendWeights, const int32_t * ParentBoneArray, const int32_t NumBones);
    extern void BlendTransformAccumulate(const struct FTransform * SourcePose, struct FTransform * ResultPose, const float BlendWeight, const int32_t NumBones);
    extern void BlendTransformOverwrite(const struct FTransform * SourcePose, struct FTransform * ResultPose, const float BlendWeight, const int32_t NumBones);
    extern void ConvertMeshRotationPoseToLocalSpace(struct FTransform * Poses, const int32_t * ParentBones, const int32_t NumBones);
    extern void ConvertPoseToAdditive(struct FTransform * TargetPose, const struct FTransform * BasePose, const int32_t NumBones);
    extern void ConvertPoseToMeshRotation(struct FTransform * LocalPoses, const int32_t * ParentBones, const int32_t NumBones);
    extern void LerpBoneTransforms(struct FTransform * ATransformData, const struct FTransform * BTransformData, const float Alpha, const uint16_t * RequiredBonesArray, const int32_t NumOfBones);
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
} /* end extern C */
#endif // __cplusplus


#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus
