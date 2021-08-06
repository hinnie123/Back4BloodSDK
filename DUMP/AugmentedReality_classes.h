// Class AugmentedReality.ARBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UARBlueprintLibrary : UBlueprintFunctionLibrary {

	void UnpinComponent(struct USceneComponent* ComponentToUnpin); // Function AugmentedReality.ARBlueprintLibrary.UnpinComponent // (None) // @ game+0xfffffffec0000000
};

// Class AugmentedReality.ARTraceResultLibrary
// Size: 0x30 (Inherited: 0x30)
struct UARTraceResultLibrary : UBlueprintFunctionLibrary {

	struct UARTrackedGeometry* GetTrackedGeometry(struct FARTraceResult TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry // (None) // @ game+0xfffffffec0000000
};

// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// Size: 0x58 (Inherited: 0x38)
struct UARBaseAsyncTaskBlueprintProxy : UBlueprintAsyncActionBase {
	char pad_38[0x20]; // 0x38(0x20)
};

// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// Size: 0x88 (Inherited: 0x58)
struct UARSaveWorldAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; // 0x58(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x68(0x10)
	char pad_78[0x10]; // 0x78(0x10)

	struct UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(struct UObject* WorldContextObject); // Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld // (None) // @ game+0xfffffffec0000000
};

// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// Size: 0xa0 (Inherited: 0x58)
struct UARGetCandidateObjectAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; // 0x58(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x68(0x10)
	char pad_78[0x28]; // 0x78(0x28)

	struct UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(struct UObject* WorldContextObject, struct FVector Location, struct FVector Extent); // Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject // (None) // @ game+0xfffffffec0000000
};

// Class AugmentedReality.ARLightEstimate
// Size: 0x30 (Inherited: 0x30)
struct UARLightEstimate : UObject {
};

// Class AugmentedReality.ARBasicLightEstimate
// Size: 0x48 (Inherited: 0x30)
struct UARBasicLightEstimate : UARLightEstimate {
	float AmbientIntensityLumens; // 0x30(0x04)
	float AmbientColorTemperatureKelvin; // 0x34(0x04)
	struct FLinearColor AmbientColor; // 0x38(0x10)

	float GetAmbientIntensityLumens(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens // (None) // @ game+0xfffffffec0000000
};

// Class AugmentedReality.AROriginActor
// Size: 0x250 (Inherited: 0x250)
struct AAROriginActor : AActor {
};

// Class AugmentedReality.ARPin
// Size: 0xf0 (Inherited: 0x30)
struct UARPin : UObject {
	struct UARTrackedGeometry* TrackedGeometry; // 0x30(0x08)
	struct USceneComponent* PinnedComponent; // 0x38(0x08)
	struct FTransform LocalToTrackingTransform; // 0x40(0x30)
	struct FTransform LocalToAlignedTrackingTransform; // 0x70(0x30)
	enum class EARTrackingState TrackingState; // 0xa0(0x01)
	char pad_A1[0x1f]; // 0xa1(0x1f)
	struct FMulticastInlineDelegate OnARTrackingStateChanged; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnARTransformUpdated; // 0xd0(0x10)
	char pad_E0[0x10]; // 0xe0(0x10)

	enum class EARTrackingState GetTrackingState(); // Function AugmentedReality.ARPin.GetTrackingState // (None) // @ game+0xfffffffec0000000
};

// Class AugmentedReality.ARSessionConfig
// Size: 0xb0 (Inherited: 0x38)
struct UARSessionConfig : UDataAsset {
	bool bGenerateMeshDataFromTrackedGeometry; // 0x38(0x01)
	bool bGenerateCollisionForMeshData; // 0x39(0x01)
	bool bGenerateNavMeshForMeshData; // 0x3a(0x01)
	bool bUseMeshDataForOcclusion; // 0x3b(0x01)
	bool bRenderMeshDataInWireframe; // 0x3c(0x01)
	bool bTrackSceneObjects; // 0x3d(0x01)
	bool bUsePersonSegmentationForOcclusion; // 0x3e(0x01)
	enum class EARWorldAlignment WorldAlignment; // 0x3f(0x01)
	enum class EARSessionType SessionType; // 0x40(0x01)
	enum class EARPlaneDetectionMode PlaneDetectionMode; // 0x41(0x01)
	bool bHorizontalPlaneDetection; // 0x42(0x01)
	bool bVerticalPlaneDetection; // 0x43(0x01)
	bool bEnableAutoFocus; // 0x44(0x01)
	enum class EARLightEstimationMode LightEstimationMode; // 0x45(0x01)
	enum class EARFrameSyncMode FrameSyncMode; // 0x46(0x01)
	bool bEnableAutomaticCameraOverlay; // 0x47(0x01)
	bool bEnableAutomaticCameraTracking; // 0x48(0x01)
	bool bResetCameraTracking; // 0x49(0x01)
	bool bResetTrackedObjects; // 0x4a(0x01)
	char pad_4B[0x5]; // 0x4b(0x05)
	struct TArray<struct UARCandidateImage*> CandidateImages; // 0x50(0x10)
	int32_t MaxNumSimultaneousImagesTracked; // 0x60(0x04)
	enum class EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct TArray<char> WorldMapData; // 0x68(0x10)
	struct TArray<struct UARCandidateObject*> CandidateObjects; // 0x78(0x10)
	struct FARVideoFormat DesiredVideoFormat; // 0x88(0x0c)
	enum class EARFaceTrackingDirection FaceTrackingDirection; // 0x94(0x01)
	enum class EARFaceTrackingUpdate FaceTrackingUpdate; // 0x95(0x01)
	char pad_96[0x2]; // 0x96(0x02)
	struct TArray<char> SerializedARCandidateImageDatabase; // 0x98(0x10)
	enum class EARSessionTrackingFeature EnabledSessionTrackingFeature; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	bool ShouldResetTrackedObjects(); // Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects // (None) // @ game+0xfffffffec0000000
};

// Class AugmentedReality.ARSharedWorldGameMode
// Size: 0x3a0 (Inherited: 0x338)
struct AARSharedWorldGameMode : AGameMode {
	int32_t BufferSizePerChunk; // 0x338(0x04)
	char pad_33C[0x64]; // 0x33c(0x64)

	void SetPreviewImageData(struct TArray<char> ImageData); // Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData // (None) // @ game+0xfffffffec0000000
};

// Class AugmentedReality.ARSharedWorldGameState
// Size: 0x2f8 (Inherited: 0x2c0)
struct AARSharedWorldGameState : AGameState {
	struct TArray<char> PreviewImageData; // 0x2c0(0x10)
	struct TArray<char> ARWorldData; // 0x2d0(0x10)
	int32_t PreviewImageBytesTotal; // 0x2e0(0x04)
	int32_t ARWorldBytesTotal; // 0x2e4(0x04)
	int32_t PreviewImageBytesDelivered; // 0x2e8(0x04)
	int32_t ARWorldBytesDelivered; // 0x2ec(0x04)
	char pad_2F0[0x8]; // 0x2f0(0x08)

	void K2_OnARWorldMapIsReady(); // Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady // (None) // @ game+0xfffffffec0000000
};

// Class AugmentedReality.ARSharedWorldPlayerController
// Size: 0x5d8 (Inherited: 0x5d0)
struct AARSharedWorldPlayerController : APlayerController {
	char pad_5D0[0x8]; // 0x5d0(0x08)

	void ServerMarkReadyForReceiving(); // Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving // (None) // @ game+0xfffffffec0000000
};

// Class AugmentedReality.ARSkyLight
// Size: 0x270 (Inherited: 0x260)
struct AARSkyLight : ASkyLight {
	struct UAREnvironmentCaptureProbe* CaptureProbe; // 0x260(0x08)
	char pad_268[0x8]; // 0x268(0x08)

	void SetEnvironmentCaptureProbe(struct UAREnvironmentCaptureProbe* InCaptureProbe); // Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe // (None) // @ game+0xfffffffec0000000
};

// Class AugmentedReality.ARTexture
// Size: 0xe0 (Inherited: 0xc0)
struct UARTexture : UTexture {
	enum class EARTextureType TextureType; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	float Timestamp; // 0xc4(0x04)
	struct FGuid ExternalTextureGuid; // 0xc8(0x10)
	struct FVector2D Size; // 0xd8(0x08)
};

// Class AugmentedReality.ARTextureCameraImage
// Size: 0xe0 (Inherited: 0xe0)
struct UARTextureCameraImage : UARTexture {
};

// Class AugmentedReality.ARTextureCameraDepth
// Size: 0xe8 (Inherited: 0xe0)
struct UARTextureCameraDepth : UARTexture {
	enum class EARDepthQuality DepthQuality; // 0xe0(0x01)
	enum class EARDepthAccuracy DepthAccuracy; // 0xe1(0x01)
	bool bIsTemporallySmoothed; // 0xe2(0x01)
	char pad_E3[0x5]; // 0xe3(0x05)
};

// Class AugmentedReality.AREnvironmentCaptureProbeTexture
// Size: 0x138 (Inherited: 0x118)
struct UAREnvironmentCaptureProbeTexture : UTextureCube {
	enum class EARTextureType TextureType; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float Timestamp; // 0x11c(0x04)
	struct FGuid ExternalTextureGuid; // 0x120(0x10)
	struct FVector2D Size; // 0x130(0x08)
};

// Class AugmentedReality.ARTraceResultDummy
// Size: 0x30 (Inherited: 0x30)
struct UARTraceResultDummy : UObject {
};

// Class AugmentedReality.ARTrackedGeometry
// Size: 0xf0 (Inherited: 0x30)
struct UARTrackedGeometry : UObject {
	struct FGuid UniqueId; // 0x30(0x10)
	struct FTransform LocalToTrackingTransform; // 0x40(0x30)
	struct FTransform LocalToAlignedTrackingTransform; // 0x70(0x30)
	enum class EARTrackingState TrackingState; // 0xa0(0x01)
	char pad_A1[0xf]; // 0xa1(0x0f)
	struct UMRMeshComponent* UnderlyingMesh; // 0xb0(0x08)
	enum class EARObjectClassification ObjectClassification; // 0xb8(0x01)
	char pad_B9[0x17]; // 0xb9(0x17)
	int32_t LastUpdateFrameNumber; // 0xd0(0x04)
	char pad_D4[0xc]; // 0xd4(0x0c)
	struct FName DebugName; // 0xe0(0x08)
	char pad_E8[0x8]; // 0xe8(0x08)

	bool IsTracked(); // Function AugmentedReality.ARTrackedGeometry.IsTracked // (None) // @ game+0xfffffffec0000000
};

// Class AugmentedReality.ARPlaneGeometry
// Size: 0x120 (Inherited: 0xf0)
struct UARPlaneGeometry : UARTrackedGeometry {
	enum class EARPlaneOrientation Orientation; // 0xe8(0x01)
	struct FVector Center; // 0xec(0x0c)
	struct FVector Extent; // 0xf8(0x0c)
	char pad_109[0xf]; // 0x109(0x0f)
	struct UARPlaneGeometry* SubsumedBy; // 0x118(0x08)

	struct UARPlaneGeometry* GetSubsumedBy(); // Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy // (None) // @ game+0xfffffffec0000000
};

// Class AugmentedReality.ARTrackedPoint
// Size: 0xf0 (Inherited: 0xf0)
struct UARTrackedPoint : UARTrackedGeometry {
};

// Class AugmentedReality.ARTrackedImage
// Size: 0x100 (Inherited: 0xf0)
struct UARTrackedImage : UARTrackedGeometry {
	struct UARCandidateImage* DetectedImage; // 0xe8(0x08)
	struct FVector2D EstimatedSize; // 0xf0(0x08)

	struct FVector2D GetEstimateSize(); // Function AugmentedReality.ARTrackedImage.GetEstimateSize // (None) // @ game+0xfffffffec0000000
};

// Class AugmentedReality.ARTrackedQRCode
// Size: 0x110 (Inherited: 0x100)
struct UARTrackedQRCode : UARTrackedImage {
	struct FString QRCode; // 0xf8(0x10)
	int32_t Version; // 0x108(0x04)
};

// Class AugmentedReality.ARFaceGeometry
// Size: 0x1e0 (Inherited: 0xf0)
struct UARFaceGeometry : UARTrackedGeometry {
	struct FVector LookAtTarget; // 0xe8(0x0c)
	bool bIsTracked; // 0xf4(0x01)
	struct TMap<enum class EARFaceBlendShape, float> BlendShapes; // 0xf8(0x50)
	char pad_14D[0x93]; // 0x14d(0x93)

	struct FTransform GetWorldSpaceEyeTransform(enum class EAREye Eye); // Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform // (None) // @ game+0xfffffffec0000000
};

// Class AugmentedReality.AREnvironmentCaptureProbe
// Size: 0x100 (Inherited: 0xf0)
struct UAREnvironmentCaptureProbe : UARTrackedGeometry {
	char pad_F0[0x8]; // 0xf0(0x08)
	struct UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0xf8(0x08)

	struct FVector GetExtent(); // Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent // (None) // @ game+0xfffffffec0000000
};

// Class AugmentedReality.ARTrackedObject
// Size: 0xf0 (Inherited: 0xf0)
struct UARTrackedObject : UARTrackedGeometry {
	struct UARCandidateObject* DetectedObject; // 0xe8(0x08)

	struct UARCandidateObject* GetDetectedObject(); // Function AugmentedReality.ARTrackedObject.GetDetectedObject // (None) // @ game+0xfffffffec0000000
};

// Class AugmentedReality.ARTrackedPose
// Size: 0x140 (Inherited: 0xf0)
struct UARTrackedPose : UARTrackedGeometry {
	char pad_F0[0x50]; // 0xf0(0x50)

	struct FARPose3D GetTrackedPoseData(); // Function AugmentedReality.ARTrackedPose.GetTrackedPoseData // (None) // @ game+0xfffffffec0000000
};

// Class AugmentedReality.ARTrackableNotifyComponent
// Size: 0x228 (Inherited: 0xd8)
struct UARTrackableNotifyComponent : UActorComponent {
	struct FMulticastInlineDelegate OnAddTrackedGeometry; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedGeometry; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedGeometry; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnAddTrackedPlane; // 0x108(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedPlane; // 0x118(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedPlane; // 0x128(0x10)
	struct FMulticastInlineDelegate OnAddTrackedPoint; // 0x138(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedPoint; // 0x148(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedPoint; // 0x158(0x10)
	struct FMulticastInlineDelegate OnAddTrackedImage; // 0x168(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedImage; // 0x178(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedImage; // 0x188(0x10)
	struct FMulticastInlineDelegate OnAddTrackedFace; // 0x198(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedFace; // 0x1a8(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedFace; // 0x1b8(0x10)
	struct FMulticastInlineDelegate OnAddTrackedEnvProbe; // 0x1c8(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedEnvProbe; // 0x1d8(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedEnvProbe; // 0x1e8(0x10)
	struct FMulticastInlineDelegate OnAddTrackedObject; // 0x1f8(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedObject; // 0x208(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedObject; // 0x218(0x10)
};

// Class AugmentedReality.ARTypesDummyClass
// Size: 0x30 (Inherited: 0x30)
struct UARTypesDummyClass : UObject {
};

// Class AugmentedReality.ARCandidateImage
// Size: 0x60 (Inherited: 0x38)
struct UARCandidateImage : UDataAsset {
	struct UTexture2D* CandidateTexture; // 0x38(0x08)
	struct FString FriendlyName; // 0x40(0x10)
	float Width; // 0x50(0x04)
	float Height; // 0x54(0x04)
	enum class EARCandidateImageOrientation Orientation; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)

	float GetPhysicalWidth(); // Function AugmentedReality.ARCandidateImage.GetPhysicalWidth // (None) // @ game+0xfffffffec0000000
};

// Class AugmentedReality.ARCandidateObject
// Size: 0x78 (Inherited: 0x38)
struct UARCandidateObject : UDataAsset {
	struct TArray<char> CandidateObjectData; // 0x38(0x10)
	struct FString FriendlyName; // 0x48(0x10)
	struct FBox BoundingBox; // 0x58(0x1c)
	char pad_74[0x4]; // 0x74(0x04)

	void SetFriendlyName(struct FString NewName); // Function AugmentedReality.ARCandidateObject.SetFriendlyName // (None) // @ game+0xfffffffec0000000
};

