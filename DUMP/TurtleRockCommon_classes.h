// Class TurtleRockCommon.BugReporterComponent
// Size: 0xd8 (Inherited: 0xd8)
struct UBugReporterComponent : UActorComponent {

	void ServerSubmitFilesForRemoteBug(struct FString BugId); // Function TurtleRockCommon.BugReporterComponent.ServerSubmitFilesForRemoteBug // (None) // @ game+0xfffffffec0000000
};

// Class TurtleRockCommon.LODMeshReductionCommandlet
// Size: 0x90 (Inherited: 0x88)
struct ULODMeshReductionCommandlet : UCommandlet {
	char pad_88[0x8]; // 0x88(0x08)
};

// Class TurtleRockCommon.MotDActor
// Size: 0x300 (Inherited: 0x250)
struct AMotDActor : AActor {
	struct FMulticastInlineDelegate OnMessageUpdated; // 0x250(0x10)
	struct FString MessageURLDev; // 0x260(0x10)
	struct FString MessageURLShipping; // 0x270(0x10)
	bool bUpdateOnBeginPlay; // 0x280(0x01)
	char pad_281[0x7f]; // 0x281(0x7f)

	void RequestMessageUpdate(); // Function TurtleRockCommon.MotDActor.RequestMessageUpdate // (None) // @ game+0xfffffffec0000000
};

// Class TurtleRockCommon.PeriodicMovementComponent
// Size: 0x180 (Inherited: 0x118)
struct UPeriodicMovementComponent : UMovementComponent {
	bool UseRandomTimeOffset; // 0x118(0x01)
	bool MoveInWorldAxis; // 0x119(0x01)
	char pad_11A[0x2]; // 0x11a(0x02)
	struct FPeriodicMovementParams X_Axis; // 0x11c(0x10)
	struct FPeriodicMovementParams Y_Axis; // 0x12c(0x10)
	struct FPeriodicMovementParams Z_Axis; // 0x13c(0x10)
	struct FPeriodicMovementParams Yaw; // 0x14c(0x10)
	char pad_15C[0x24]; // 0x15c(0x24)
};

// Class TurtleRockCommon.ProfileCamera
// Size: 0x258 (Inherited: 0x250)
struct AProfileCamera : AActor {
	bool TeleportPlayerWhenViewedFromHere; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)

	void ViewProfileCamera(struct UObject* WorldContextObject, struct AProfileCamera* Camera); // Function TurtleRockCommon.ProfileCamera.ViewProfileCamera // (None) // @ game+0xfffffffec0000000
};

// Class TurtleRockCommon.TRSBlueprintFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UTRSBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	bool WorldNeedsLightingBuilt(struct UObject* WorldContextObject); // Function TurtleRockCommon.TRSBlueprintFunctionLibrary.WorldNeedsLightingBuilt // (None) // @ game+0xfffffffec0000000
};

// Class TurtleRockCommon.TRSCubemapCapturer
// Size: 0x58 (Inherited: 0x30)
struct UTRSCubemapCapturer : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct TArray<struct USceneCaptureComponent2D*> CaptureComponents; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)

	void CaptureCubemap(struct FVector Location, float Yaw, bool bLocationRelativeToPlayer, bool bYawRelativeToPlayer, int32_t FaceResolution, enum class ETRSCubemapLayout Layout); // Function TurtleRockCommon.TRSCubemapCapturer.CaptureCubemap // (None) // @ game+0xfffffffec0000000
};

// Class TurtleRockCommon.TRSProfiler
// Size: 0x38 (Inherited: 0x30)
struct UTRSProfiler : UObject {
	char pad_30[0x8]; // 0x30(0x08)

	void Stop(); // Function TurtleRockCommon.TRSProfiler.Stop // (None) // @ game+0xfffffffec0000000
};

