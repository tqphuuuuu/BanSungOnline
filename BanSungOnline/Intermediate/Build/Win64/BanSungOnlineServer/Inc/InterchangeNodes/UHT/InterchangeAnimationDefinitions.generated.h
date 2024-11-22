// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeAnimationDefinitions.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGENODES_InterchangeAnimationDefinitions_generated_h
#error "InterchangeAnimationDefinitions.generated.h already included, missing '#pragma once' in InterchangeAnimationDefinitions.h"
#endif
#define INTERCHANGENODES_InterchangeAnimationDefinitions_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationDefinitions_h


#define FOREACH_ENUM_EINTERCHANGEPROPERTYTRACKS(op) \
	op(EInterchangePropertyTracks::AffectDistanceFieldLighting) \
	op(EInterchangePropertyTracks::AffectDynamicIndirectLighting) \
	op(EInterchangePropertyTracks::AffectIndirectLightingWhileHidden) \
	op(EInterchangePropertyTracks::AutoActivate) \
	op(EInterchangePropertyTracks::BodyInstanceAngularDamping) \
	op(EInterchangePropertyTracks::BodyInstancebEnableGravity) \
	op(EInterchangePropertyTracks::BodyInstancebNotifyRigidBodyCollision) \
	op(EInterchangePropertyTracks::BodyInstancebSimulatePhysics) \
	op(EInterchangePropertyTracks::BodyInstancebUpdateKinematicFromSimulation) \
	op(EInterchangePropertyTracks::BodyInstancebUseCCD) \
	op(EInterchangePropertyTracks::BodyInstanceLinearDamping) \
	op(EInterchangePropertyTracks::BodyInstanceMassScale) \
	op(EInterchangePropertyTracks::BoundsScale) \
	op(EInterchangePropertyTracks::CastContactShadow) \
	op(EInterchangePropertyTracks::CastHiddenShadow) \
	op(EInterchangePropertyTracks::CastInsetShadow) \
	op(EInterchangePropertyTracks::CastShadow) \
	op(EInterchangePropertyTracks::CustomDepthStencilValue) \
	op(EInterchangePropertyTracks::CustomDepthStencilWriteMask) \
	op(EInterchangePropertyTracks::DefaultUpVector) \
	op(EInterchangePropertyTracks::DrawDebug) \
	op(EInterchangePropertyTracks::EmissiveLightSource) \
	op(EInterchangePropertyTracks::ExcludeFromLightAttachmentGroup) \
	op(EInterchangePropertyTracks::HiddenInGame) \
	op(EInterchangePropertyTracks::HiddenInSceneCapture) \
	op(EInterchangePropertyTracks::Holdout) \
	op(EInterchangePropertyTracks::LightAttachmentsAsGroup) \
	op(EInterchangePropertyTracks::Mobility) \
	op(EInterchangePropertyTracks::OnlyOwnerSee) \
	op(EInterchangePropertyTracks::OwnerNoSee) \
	op(EInterchangePropertyTracks::ReceivesDecals) \
	op(EInterchangePropertyTracks::RenderCustomDepth) \
	op(EInterchangePropertyTracks::RenderInDepthPass) \
	op(EInterchangePropertyTracks::RenderInMainPass) \
	op(EInterchangePropertyTracks::SingleSampleShadowFromStationaryLights) \
	op(EInterchangePropertyTracks::TranslucencySortDistanceOffset) \
	op(EInterchangePropertyTracks::VisibleInRayTracing) \
	op(EInterchangePropertyTracks::VisibleInSceneCaptureOnly) \
	op(EInterchangePropertyTracks::Visibility) \
	op(EInterchangePropertyTracks::LightAffectGlobalIllumination) \
	op(EInterchangePropertyTracks::LightAffectReflection) \
	op(EInterchangePropertyTracks::LightAffectTranslucentLighting) \
	op(EInterchangePropertyTracks::LightAtmosphereSunDiskColorScale) \
	op(EInterchangePropertyTracks::LightAtmosphereSunLight) \
	op(EInterchangePropertyTracks::LightAtmosphereSunLightIndex) \
	op(EInterchangePropertyTracks::LightAttenuationRadius) \
	op(EInterchangePropertyTracks::LightBarnDoorAngle) \
	op(EInterchangePropertyTracks::LightBarnDoorLength) \
	op(EInterchangePropertyTracks::LightBloomMaxBrightness) \
	op(EInterchangePropertyTracks::LightBloomScale) \
	op(EInterchangePropertyTracks::LightBloomThreshold) \
	op(EInterchangePropertyTracks::LightBloomTint) \
	op(EInterchangePropertyTracks::LightCascadeDistributionExponent) \
	op(EInterchangePropertyTracks::LightCascadeTransitionFraction) \
	op(EInterchangePropertyTracks::LightCastDeepShadow) \
	op(EInterchangePropertyTracks::LightCastShadows) \
	op(EInterchangePropertyTracks::LightCastVolumetricShadow) \
	op(EInterchangePropertyTracks::LightCloudAmbientOcclusionStrength) \
	op(EInterchangePropertyTracks::LightCloudScatteredLuminanceScale) \
	op(EInterchangePropertyTracks::LightCloudShadowOnAtmosphereStrength) \
	op(EInterchangePropertyTracks::LightCloudShadowOnSurfaceStrength) \
	op(EInterchangePropertyTracks::LightCloudShadowStrength) \
	op(EInterchangePropertyTracks::LightColor) \
	op(EInterchangePropertyTracks::LightDynamicShadowCascades) \
	op(EInterchangePropertyTracks::LightDynamicShadowDistanceMovableLight) \
	op(EInterchangePropertyTracks::LightDynamicShadowDistanceStationaryLight) \
	op(EInterchangePropertyTracks::LightEnableLightShaftBloom) \
	op(EInterchangePropertyTracks::LightEnableLightShaftOcclusion) \
	op(EInterchangePropertyTracks::LightFalloffExponent) \
	op(EInterchangePropertyTracks::LightForceCachedShadowsForMovablePrimitives) \
	op(EInterchangePropertyTracks::LightForwardShadingPriority) \
	op(EInterchangePropertyTracks::LightFunctionFadeDistance) \
	op(EInterchangePropertyTracks::LightFunctionScale) \
	op(EInterchangePropertyTracks::LightIESBrightnessScale) \
	op(EInterchangePropertyTracks::LightIndirectLightingIntensity) \
	op(EInterchangePropertyTracks::LightInnerConeAngle) \
	op(EInterchangePropertyTracks::LightIntensity) \
	op(EInterchangePropertyTracks::LightIntensityUnits) \
	op(EInterchangePropertyTracks::LightInverseExposureBlend) \
	op(EInterchangePropertyTracks::LightLowerHemisphereColor) \
	op(EInterchangePropertyTracks::LightmassSettingsLightSourceAngle) \
	op(EInterchangePropertyTracks::LightMinOcclusion) \
	op(EInterchangePropertyTracks::LightModulatedShadowColor) \
	op(EInterchangePropertyTracks::LightOcclusionDepthRange) \
	op(EInterchangePropertyTracks::LightOcclusionExponent) \
	op(EInterchangePropertyTracks::LightOcclusionMaskDarkness) \
	op(EInterchangePropertyTracks::LightOcclusionTint) \
	op(EInterchangePropertyTracks::LightOuterConeAngle) \
	op(EInterchangePropertyTracks::LightSamplesPerPixel) \
	op(EInterchangePropertyTracks::LightShadowAmount) \
	op(EInterchangePropertyTracks::LightShadowBias) \
	op(EInterchangePropertyTracks::LightShadowCascadeBiasDistribution) \
	op(EInterchangePropertyTracks::LightShadowDistanceFadeoutFraction) \
	op(EInterchangePropertyTracks::LightShadowSlopeBias) \
	op(EInterchangePropertyTracks::LightShadowSourceAngleFactor) \
	op(EInterchangePropertyTracks::LightShaftOverrideDirection) \
	op(EInterchangePropertyTracks::LightSoftSourceRadius) \
	op(EInterchangePropertyTracks::LightSourceAngle) \
	op(EInterchangePropertyTracks::LightSourceCubemapAngle) \
	op(EInterchangePropertyTracks::LightSourceHeight) \
	op(EInterchangePropertyTracks::LightSourceLength) \
	op(EInterchangePropertyTracks::LightSourceRadius) \
	op(EInterchangePropertyTracks::LightSourceSoftAngle) \
	op(EInterchangePropertyTracks::LightSourceWidth) \
	op(EInterchangePropertyTracks::LightSpecularScale) \
	op(EInterchangePropertyTracks::LightDiffuseScale) \
	op(EInterchangePropertyTracks::LightTemperature) \
	op(EInterchangePropertyTracks::LightTransmission) \
	op(EInterchangePropertyTracks::LightUseIESBrightness) \
	op(EInterchangePropertyTracks::LightUseInverseSquaredFalloff) \
	op(EInterchangePropertyTracks::LightUseTemperature) \
	op(EInterchangePropertyTracks::LightVolumetricScatteringIntensity) \
	op(EInterchangePropertyTracks::CameraAspectRatio) \
	op(EInterchangePropertyTracks::CameraAspectRatioAxisConstraint) \
	op(EInterchangePropertyTracks::CameraAutoCalculateOrthoPlanes) \
	op(EInterchangePropertyTracks::CameraAutoPlaneShift) \
	op(EInterchangePropertyTracks::CameraConstrainAspectRatio) \
	op(EInterchangePropertyTracks::CameraCurrentAperture) \
	op(EInterchangePropertyTracks::CameraCurrentFocalLength) \
	op(EInterchangePropertyTracks::CameraCustomNearClippingPlane) \
	op(EInterchangePropertyTracks::CameraFieldOfView) \
	op(EInterchangePropertyTracks::CameraFilmbackSensorAspectRatio) \
	op(EInterchangePropertyTracks::CameraFilmbackSensorHeight) \
	op(EInterchangePropertyTracks::CameraFilmbackSensorWidth) \
	op(EInterchangePropertyTracks::CameraFocusSettingsFocusOffset) \
	op(EInterchangePropertyTracks::CameraFocusSettingsManualFocusDistance) \
	op(EInterchangePropertyTracks::CameraFocusSettingsTrackingFocusSettingsRelativeOffset) \
	op(EInterchangePropertyTracks::CameraOrthoFarClipPlane) \
	op(EInterchangePropertyTracks::CameraOrthoNearClipPlane) \
	op(EInterchangePropertyTracks::CameraOrthoWidth) \
	op(EInterchangePropertyTracks::CameraOverrideAspectRatioAxisConstraint) \
	op(EInterchangePropertyTracks::CameraPostProcessBlendWeight) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsAmbientCubemapIntensity) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsAmbientCubemapTint) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsAmbientOcclusionBias) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsAmbientOcclusionFadeDistance) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsAmbientOcclusionFadeRadius) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsAmbientOcclusionIntensity) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsAmbientOcclusionMipBlend) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsAmbientOcclusionMipScale) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsAmbientOcclusionMipThreshold) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsAmbientOcclusionPower) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsAmbientOcclusionQuality) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsAmbientOcclusionRadius) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsAmbientOcclusionStaticFraction) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsAmbientOcclusionTemporalBlendWeight) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsAutoExposureBias) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsAutoExposureHighPercent) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsAutoExposureLowPercent) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsAutoExposureMaxBrightness) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsAutoExposureMinBrightness) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsAutoExposureSpeedDown) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsAutoExposureSpeedUp) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsBloom1Size) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsBloom1Tint) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsBloom2Size) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsBloom2Tint) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsBloom3Size) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsBloom3Tint) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsBloom4Size) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsBloom4Tint) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsBloom5Size) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsBloom5Tint) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsBloom6Size) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsBloom6Tint) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsBloomConvolutionBufferScale) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsBloomConvolutionCenterUV) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsBloomConvolutionPreFilterMax) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsBloomConvolutionPreFilterMin) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsBloomConvolutionPreFilterMult) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsBloomConvolutionScatterDispersion) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsBloomConvolutionSize) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsBloomDirtMaskIntensity) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsBloomDirtMaskTint) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsBloomIntensity) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsBloomSizeScale) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsBloomThreshold) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsBlueCorrection) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsChromaticAberrationStartOffset) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsColorContrast) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsColorContrastHighlights) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsColorContrastMidtones) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsColorContrastShadows) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsColorCorrectionHighlightsMax) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsColorCorrectionHighlightsMin) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsColorCorrectionShadowsMax) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsColorGain) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsColorGainHighlights) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsColorGainMidtones) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsColorGainShadows) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsColorGamma) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsColorGammaHighlights) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsColorGammaMidtones) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsColorGammaShadows) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsColorGradingIntensity) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsColorOffset) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsColorOffsetHighlights) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsColorOffsetMidtones) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsColorOffsetShadows) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsColorSaturation) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsColorSaturationHighlights) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsColorSaturationMidtones) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsColorSaturationShadows) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsDepthOfFieldBladeCount) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsDepthOfFieldDepthBlurAmount) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsDepthOfFieldDepthBlurRadius) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsDepthOfFieldFarBlurSize) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsDepthOfFieldFarTransitionRegion) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsDepthOfFieldFocalDistance) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsDepthOfFieldFocalRegion) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsDepthOfFieldFstop) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsDepthOfFieldMinFstop) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsDepthOfFieldNearBlurSize) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsDepthOfFieldNearTransitionRegion) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsDepthOfFieldOcclusion) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsDepthOfFieldScale) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsDepthOfFieldSkyFocusDistance) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsDepthOfFieldUseHairDepth) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsDepthOfFieldVignetteSize) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsDynamicGlobalIlluminationMethod) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsExpandGamut) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsFilmBlackClip) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsFilmGrainHighlightsMax) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsFilmGrainHighlightsMin) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsFilmGrainIntensity) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsFilmGrainIntensityHighlights) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsFilmGrainIntensityMidtones) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsFilmGrainIntensityShadows) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsFilmGrainShadowsMax) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsFilmGrainTexelSize) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsFilmShoulder) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsFilmSlope) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsFilmToe) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsFilmWhiteClip) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsHistogramLogMax) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsHistogramLogMin) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsIndirectLightingColor) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsIndirectLightingIntensity) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLensFlareBokehSize) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLensFlareIntensity) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLensFlareThreshold) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLensFlareTint) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLocalExposureBlurredLuminanceBlend) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLocalExposureBlurredLuminanceKernelSizePercent) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLocalExposureDetailStrength) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLocalExposureHighlightContrastScale) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLocalExposureHighlightThreshold) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLocalExposureMiddleGreyBias) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLocalExposureShadowContrastScale) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLocalExposureShadowThreshold) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLumenDiffuseColorBoost) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLumenFinalGatherLightingUpdateSpeed) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLumenFinalGatherQuality) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLumenFinalGatherScreenTraces) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLumenFrontLayerTranslucencyReflections) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLumenFullSkylightLeakingDistance) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLumenMaxReflectionBounces) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLumenMaxRefractionBounces) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLumenMaxRoughnessToTraceReflections) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLumenMaxTraceDistance) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLumenRayLightingMode) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLumenReflectionQuality) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLumenReflectionsScreenTraces) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLumenSceneDetail) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLumenSceneLightingQuality) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLumenSceneLightingUpdateSpeed) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLumenSceneViewDistance) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsLumenSkylightLeaking) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsMotionBlurAmount) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsMotionBlurMax) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsMotionBlurPerObjectSize) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsPathTracingMaxBounces) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsPathTracingMaxPathIntensity) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsRayTracingAO) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsRayTracingAOIntensity) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsRayTracingAORadius) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsRayTracingAOSamplesPerPixel) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsRayTracingTranslucencyMaxRoughness) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsRayTracingTranslucencyRefraction) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsRayTracingTranslucencyRefractionRays) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsRayTracingTranslucencySamplesPerPixel) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsRayTracingTranslucencyShadows) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsReflectionMethod) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsSceneColorTint) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsSceneFringeIntensity) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsScreenSpaceReflectionIntensity) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsScreenSpaceReflectionMaxRoughness) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsScreenSpaceReflectionQuality) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsSharpen) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsTemperatureType) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsToneCurveAmount) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsTranslucencyType) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsVignetteIntensity) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsWhiteTemp) \
	op(EInterchangePropertyTracks::CameraPostProcessSettingsWhiteTint) \
	op(EInterchangePropertyTracks::CameraProjectionMode) \
	op(EInterchangePropertyTracks::CameraUpdateOrthoPlanes) \
	op(EInterchangePropertyTracks::CameraUseCameraHeightAsViewTarget) \
	op(EInterchangePropertyTracks::CameraUseFieldOfViewForLOD) \
	op(EInterchangePropertyTracks::MeshOverlayMaterialMaxDrawDistance) \
	op(EInterchangePropertyTracks::SkinnedMeshCapsuleIndirectShadowMinVisibility) \
	op(EInterchangePropertyTracks::SkinnedMeshCastCapsuleDirectShadow) \
	op(EInterchangePropertyTracks::SkinnedMeshCastCapsuleIndirectShadow) \
	op(EInterchangePropertyTracks::SkinnedMeshRenderStatic) \
	op(EInterchangePropertyTracks::SkinnedMeshVisibilityBasedAnimTickOption) \
	op(EInterchangePropertyTracks::SkeletalMesh) \
	op(EInterchangePropertyTracks::SkeletalMeshAllowClothActors) \
	op(EInterchangePropertyTracks::SkeletalMeshAnimationMode) \
	op(EInterchangePropertyTracks::SkeletalMeshClothBlendWeight) \
	op(EInterchangePropertyTracks::SkeletalMeshClothMaxDistanceScale) \
	op(EInterchangePropertyTracks::StaticMeshDistanceFieldSelfShadowBias) \
	op(EInterchangePropertyTracks::StaticMeshEvaluateWorldPositionOffset) \
	op(EInterchangePropertyTracks::StaticMeshEvaluateWorldPositionOffsetInRayTracing) \
	op(EInterchangePropertyTracks::StaticMeshForcedLodModel) \
	op(EInterchangePropertyTracks::StaticMeshReverseCulling) \
	op(EInterchangePropertyTracks::StaticMeshWorldPositionOffsetDisableDistance) \
	op(EInterchangePropertyTracks::StaticMesh) \
	op(EInterchangePropertyTracks::None) 

enum class EInterchangePropertyTracks : int32;
template<> struct TIsUEnumClass<EInterchangePropertyTracks> { enum { Value = true }; };
template<> INTERCHANGENODES_API UEnum* StaticEnum<EInterchangePropertyTracks>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS