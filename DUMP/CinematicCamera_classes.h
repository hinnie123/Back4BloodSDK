// Class CinematicCamera.CameraRig_Crane
// Size: 0x280 (Inherited: 0x250)
struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x250(0x04)
	float CraneYaw; // 0x254(0x04)
	float CraneArmLength; // 0x258(0x04)
	bool bLockMountPitch; // 0x25c(0x01)
	bool bLockMountYaw; // 0x25d(0x01)
	char pad_25E[0x2]; // 0x25e(0x02)
	struct USceneComponent* TransformComponent; // 0x260(0x08)
	struct USceneComponent* CraneYawControl; // 0x268(0x08)
	struct USceneComponent* CranePitchControl; // 0x270(0x08)
	struct USceneComponent* CraneCameraMount; // 0x278(0x08)
};

// Class CinematicCamera.CameraRig_Rail
// Size: 0x270 (Inherited: 0x250)
struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x250(0x04)
	bool bLockOrientationToRail; // 0x254(0x01)
	char pad_255[0x3]; // 0x255(0x03)
	struct USceneComponent* TransformComponent; // 0x258(0x08)
	struct USplineComponent* RailSplineComponent; // 0x260(0x08)
	struct USceneComponent* RailCameraMount; // 0x268(0x08)

	struct USplineComponent* GetRailSplineComponent(); // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent // (None) // @ game+0xfffffffec0000000
};

// Class CinematicCamera.CineCameraActor
// Size: 0x840 (Inherited: 0x7e0)
struct ACineCameraActor : ACameraActor {
	struct FCameraLookatTrackingSettings LookatTrackingSettings; // 0x7e0(0x50)
	char pad_830[0x10]; // 0x830(0x10)

	struct UCineCameraComponent* GetCineCameraComponent(); // Function CinematicCamera.CineCameraActor.GetCineCameraComponent // (None) // @ game+0xfffffffec0000000
};

// Class CinematicCamera.CineCameraComponent
// Size: 0x900 (Inherited: 0x800)
struct UCineCameraComponent : UCameraComponent {
	struct FCameraFilmbackSettings FilmbackSettings; // 0x800(0x0c)
	struct FCameraFilmbackSettings Filmback; // 0x80c(0x0c)
	struct FCameraLensSettings LensSettings; // 0x818(0x18)
	struct FCameraFocusSettings FocusSettings; // 0x830(0x58)
	float CurrentFocalLength; // 0x888(0x04)
	float CurrentAperture; // 0x88c(0x04)
	float CurrentFocusDistance; // 0x890(0x04)
	char pad_894[0xc]; // 0x894(0x0c)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0x8a0(0x10)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0x8b0(0x10)
	struct FString DefaultFilmbackPresetName; // 0x8c0(0x10)
	struct FString DefaultFilmbackPreset; // 0x8d0(0x10)
	struct FString DefaultLensPresetName; // 0x8e0(0x10)
	float DefaultLensFocalLength; // 0x8f0(0x04)
	float DefaultLensFStop; // 0x8f4(0x04)
	char pad_8F8[0x8]; // 0x8f8(0x08)

	void SetLensPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetLensPresetByName // (None) // @ game+0xfffffffec0000000
};

