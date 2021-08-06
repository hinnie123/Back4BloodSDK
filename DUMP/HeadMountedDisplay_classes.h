// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UHeadMountedDisplayFunctionLibrary : UBlueprintFunctionLibrary {

	void UpdateExternalTrackingHMDPosition(struct FTransform ExternalTrackingTransform); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition // (None) // @ game+0xfffffffec0000000
};

// Class HeadMountedDisplay.MotionControllerComponent
// Size: 0x560 (Inherited: 0x4a0)
struct UMotionControllerComponent : UPrimitiveComponent {
	int32_t PlayerIndex; // 0x4a0(0x04)
	enum class EControllerHand Hand; // 0x4a4(0x01)
	char pad_4A5[0x3]; // 0x4a5(0x03)
	struct FName MotionSource; // 0x4a8(0x08)
	char bDisableLowLatencyUpdate : 1; // 0x4b0(0x01)
	char pad_4B0_1 : 7; // 0x4b0(0x01)
	char pad_4B1[0x3]; // 0x4b1(0x03)
	enum class ETrackingStatus CurrentTrackingStatus; // 0x4b4(0x01)
	bool bDisplayDeviceModel; // 0x4b5(0x01)
	char pad_4B6[0x2]; // 0x4b6(0x02)
	struct FName DisplayModelSource; // 0x4b8(0x08)
	struct UStaticMesh* CustomDisplayMesh; // 0x4c0(0x08)
	struct TArray<struct UMaterialInterface*> DisplayMeshMaterialOverrides; // 0x4c8(0x10)
	char pad_4D8[0x68]; // 0x4d8(0x68)
	struct UPrimitiveComponent* DisplayComponent; // 0x540(0x08)
	char pad_548[0x18]; // 0x548(0x18)

	void SetTrackingSource(enum class EControllerHand NewSource); // Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource // (None) // @ game+0xfffffffec0000000
};

// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UMotionTrackedDeviceFunctionLibrary : UBlueprintFunctionLibrary {

	void SetIsControllerMotionTrackingEnabledByDefault(bool Enable); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault // (None) // @ game+0xfffffffec0000000
};

// Class HeadMountedDisplay.VRNotificationsComponent
// Size: 0x168 (Inherited: 0xd8)
struct UVRNotificationsComponent : UActorComponent {
	struct FMulticastInlineDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xd8(0x10)
	struct FMulticastInlineDelegate HMDTrackingInitializedDelegate; // 0xe8(0x10)
	struct FMulticastInlineDelegate HMDRecenteredDelegate; // 0xf8(0x10)
	struct FMulticastInlineDelegate HMDLostDelegate; // 0x108(0x10)
	struct FMulticastInlineDelegate HMDReconnectedDelegate; // 0x118(0x10)
	struct FMulticastInlineDelegate HMDConnectCanceledDelegate; // 0x128(0x10)
	struct FMulticastInlineDelegate HMDPutOnHeadDelegate; // 0x138(0x10)
	struct FMulticastInlineDelegate HMDRemovedFromHeadDelegate; // 0x148(0x10)
	struct FMulticastInlineDelegate VRControllerRecenteredDelegate; // 0x158(0x10)
};

// Class HeadMountedDisplay.XRAssetFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UXRAssetFunctionLibrary : UBlueprintFunctionLibrary {

	struct UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform RelativeTransform, struct FXRDeviceId XRDeviceId); // Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking // (None) // @ game+0xfffffffec0000000
};

// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// Size: 0x68 (Inherited: 0x38)
struct UAsyncTask_LoadXRDeviceVisComponent : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnModelLoaded; // 0x38(0x10)
	struct FMulticastInlineDelegate OnLoadFailure; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
	struct UPrimitiveComponent* SpawnedComponent; // 0x60(0x08)

	struct UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform RelativeTransform, struct FXRDeviceId XRDeviceId, struct UPrimitiveComponent* NewComponent); // Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync // (None) // @ game+0xfffffffec0000000
};

// Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UXRLoadingScreenFunctionLibrary : UBlueprintFunctionLibrary {

	void ShowLoadingScreen(); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen // (None) // @ game+0xfffffffec0000000
};

