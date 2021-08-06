// Class LevelSequence.DefaultLevelSequenceInstanceData
// Size: 0x70 (Inherited: 0x30)
struct UDefaultLevelSequenceInstanceData : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct AActor* TransformOriginActor; // 0x38(0x08)
	struct FTransform TransformOrigin; // 0x40(0x30)
};

// Class LevelSequence.LevelSequenceMetaData
// Size: 0x30 (Inherited: 0x30)
struct ULevelSequenceMetaData : UInterface {
};

// Class LevelSequence.LevelSequence
// Size: 0x4a0 (Inherited: 0x350)
struct ULevelSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x350(0x08)
	struct FLevelSequenceObjectReferenceMap ObjectReferences; // 0x358(0x50)
	struct FLevelSequenceBindingReferences BindingReferences; // 0x3a8(0xa0)
	struct TMap<struct FString, struct FLevelSequenceObject> PossessedObjects; // 0x448(0x50)
	struct UObject* DirectorClass; // 0x498(0x08)

	void RemoveMetaDataByClass(struct UObject* InClass); // Function LevelSequence.LevelSequence.RemoveMetaDataByClass // (None) // @ game+0xfffffffec0000000
};

// Class LevelSequence.LevelSequenceBurnInInitSettings
// Size: 0x30 (Inherited: 0x30)
struct ULevelSequenceBurnInInitSettings : UObject {
};

// Class LevelSequence.LevelSequenceBurnInOptions
// Size: 0x58 (Inherited: 0x30)
struct ULevelSequenceBurnInOptions : UObject {
	bool bUseBurnIn; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FSoftClassPath BurnInClass; // 0x38(0x18)
	struct ULevelSequenceBurnInInitSettings* Settings; // 0x50(0x08)

	void SetBurnIn(struct FSoftClassPath InBurnInClass); // Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn // (None) // @ game+0xfffffffec0000000
};

// Class LevelSequence.LevelSequenceActor
// Size: 0x2e0 (Inherited: 0x250)
struct ALevelSequenceActor : AActor {
	char pad_250[0x10]; // 0x250(0x10)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x260(0x14)
	char pad_274[0x4]; // 0x274(0x04)
	struct ULevelSequencePlayer* SequencePlayer; // 0x278(0x08)
	struct FSoftObjectPath LevelSequence; // 0x280(0x18)
	struct TArray<struct AActor*> AdditionalEventReceivers; // 0x298(0x10)
	struct FLevelSequenceCameraSettings CameraSettings; // 0x2a8(0x02)
	char pad_2AA[0x6]; // 0x2aa(0x06)
	struct ULevelSequenceBurnInOptions* BurnInOptions; // 0x2b0(0x08)
	struct UMovieSceneBindingOverrides* BindingOverrides; // 0x2b8(0x08)
	char bAutoPlay : 1; // 0x2c0(0x01)
	char bOverrideInstanceData : 1; // 0x2c0(0x01)
	char bReplicatePlayback : 1; // 0x2c0(0x01)
	char pad_2C0_3 : 5; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct UObject* DefaultInstanceData; // 0x2c8(0x08)
	struct ULevelSequenceBurnIn* BurnInInstance; // 0x2d0(0x08)
	bool bShowBurnin; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)

	void ShowBurnin(); // Function LevelSequence.LevelSequenceActor.ShowBurnin // (None) // @ game+0xfffffffec0000000
};

// Class LevelSequence.LevelSequenceBurnIn
// Size: 0x398 (Inherited: 0x2d8)
struct ULevelSequenceBurnIn : UUserWidget {
	struct FLevelSequencePlayerSnapshot FrameInformation; // 0x2d8(0xb8)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x390(0x08)

	void SetSettings(struct UObject* InSettings); // Function LevelSequence.LevelSequenceBurnIn.SetSettings // (None) // @ game+0xfffffffec0000000
};

// Class LevelSequence.LevelSequenceDirector
// Size: 0x38 (Inherited: 0x30)
struct ULevelSequenceDirector : UObject {
	struct ULevelSequencePlayer* Player; // 0x30(0x08)

	void OnCreated(); // Function LevelSequence.LevelSequenceDirector.OnCreated // (None) // @ game+0xfffffffec0000000
};

// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// Size: 0xa8 (Inherited: 0xa8)
struct ULegacyLevelSequenceDirectorBlueprint : UBlueprint {
};

// Class LevelSequence.LevelSequencePlayer
// Size: 0x9a8 (Inherited: 0x890)
struct ULevelSequencePlayer : UMovieSceneSequencePlayer {
	struct FMulticastInlineDelegate OnCameraCut; // 0x890(0x10)
	char pad_8A0[0x108]; // 0x8a0(0x108)

	struct UCameraComponent* GetActiveCameraComponent(); // Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent // (None) // @ game+0xfffffffec0000000
};

// Class LevelSequence.LevelSequenceMediaController
// Size: 0x278 (Inherited: 0x250)
struct ALevelSequenceMediaController : AActor {
	char pad_250[0x8]; // 0x250(0x08)
	struct ALevelSequenceActor* Sequence; // 0x258(0x08)
	struct UMediaComponent* MediaComponent; // 0x260(0x08)
	float ServerStartTimeSeconds; // 0x268(0x04)
	char pad_26C[0xc]; // 0x26c(0x0c)

	void SynchronizeToServer(float DesyncThresholdSeconds); // Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer // (None) // @ game+0xfffffffec0000000
};

