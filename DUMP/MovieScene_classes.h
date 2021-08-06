// Class MovieScene.MovieSceneSignedObject
// Size: 0x58 (Inherited: 0x30)
struct UMovieSceneSignedObject : UObject {
	struct FGuid Signature; // 0x30(0x10)
	char pad_40[0x18]; // 0x40(0x18)
};

// Class MovieScene.MovieSceneSection
// Size: 0xe8 (Inherited: 0x58)
struct UMovieSceneSection : UMovieSceneSignedObject {
	struct FMovieSceneSectionEvalOptions EvalOptions; // 0x58(0x02)
	char pad_5A[0x6]; // 0x5a(0x06)
	struct FMovieSceneEasingSettings Easing; // 0x60(0x38)
	struct FMovieSceneFrameRange SectionRange; // 0x98(0x10)
	struct FFrameNumber PreRollFrames; // 0xa8(0x04)
	struct FFrameNumber PostRollFrames; // 0xac(0x04)
	int32_t RowIndex; // 0xb0(0x04)
	int32_t OverlapPriority; // 0xb4(0x04)
	char bIsActive : 1; // 0xb8(0x01)
	char bIsLocked : 1; // 0xb8(0x01)
	char pad_B8_2 : 6; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float StartTime; // 0xbc(0x04)
	float EndTime; // 0xc0(0x04)
	float PrerollTime; // 0xc4(0x04)
	float PostrollTime; // 0xc8(0x04)
	char bIsInfinite : 1; // 0xcc(0x01)
	char pad_CC_1 : 7; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	bool bSupportsInfiniteRange; // 0xd0(0x01)
	struct FOptionalMovieSceneBlendType BlendType; // 0xd1(0x02)
	char pad_D3[0x15]; // 0xd3(0x15)

	void SetRowIndex(int32_t NewRowIndex); // Function MovieScene.MovieSceneSection.SetRowIndex // (None) // @ game+0xfffffffec0000000
};

// Class MovieScene.MovieSceneTrack
// Size: 0x60 (Inherited: 0x58)
struct UMovieSceneTrack : UMovieSceneSignedObject {
	struct FMovieSceneTrackEvalOptions EvalOptions; // 0x58(0x04)
	char pad_5C[0x1]; // 0x5c(0x01)
	bool bIsEvalDisabled; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
};

// Class MovieScene.MovieSceneSequence
// Size: 0x350 (Inherited: 0x58)
struct UMovieSceneSequence : UMovieSceneSignedObject {
	struct FMovieSceneEvaluationTemplate PrecompiledEvaluationTemplate; // 0x58(0x2f0)
	enum class EMovieSceneCompletionMode DefaultCompletionMode; // 0x348(0x01)
	bool bParentContextsAreSignificant; // 0x349(0x01)
	bool bPlayableDirectly; // 0x34a(0x01)
	char pad_34B[0x5]; // 0x34b(0x05)

	struct TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingsByTag // (None) // @ game+0xfffffffec0000000
};

// Class MovieScene.MovieSceneSequencePlayer
// Size: 0x890 (Inherited: 0x30)
struct UMovieSceneSequencePlayer : UObject {
	char pad_30[0x3e0]; // 0x30(0x3e0)
	struct FMulticastInlineDelegate OnPlay; // 0x410(0x10)
	struct FMulticastInlineDelegate OnPlayReverse; // 0x420(0x10)
	struct FMulticastInlineDelegate OnStop; // 0x430(0x10)
	struct FMulticastInlineDelegate OnPause; // 0x440(0x10)
	struct FMulticastInlineDelegate OnFinished; // 0x450(0x10)
	enum class EMovieScenePlayerStatus Status; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	char bReversePlayback : 1; // 0x464(0x01)
	char pad_464_1 : 7; // 0x464(0x01)
	char pad_465[0x3]; // 0x465(0x03)
	struct UMovieSceneSequence* Sequence; // 0x468(0x08)
	struct FFrameNumber StartTime; // 0x470(0x04)
	int32_t DurationFrames; // 0x474(0x04)
	int32_t CurrentNumLoops; // 0x478(0x04)
	char pad_47C[0x14]; // 0x47c(0x14)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x490(0x14)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x4a8(0x320)
	char pad_7C8[0x68]; // 0x7c8(0x68)
	struct FMovieSceneSequenceReplProperties NetSyncProps; // 0x830(0x10)
	struct TScriptInterface<IMovieScenePlaybackClient> PlaybackClient; // 0x840(0x10)
	char pad_850[0x40]; // 0x850(0x40)

	void StopAtCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime // (None) // @ game+0xfffffffec0000000
};

// Class MovieScene.MovieSceneSubSection
// Size: 0x160 (Inherited: 0xe8)
struct UMovieSceneSubSection : UMovieSceneSection {
	struct FMovieSceneSectionParameters Parameters; // 0xe8(0x24)
	float StartOffset; // 0x10c(0x04)
	float TimeScale; // 0x110(0x04)
	float PrerollTime; // 0x114(0x04)
	struct UMovieSceneSequence* SubSequence; // 0x118(0x08)
	LazyObjectProperty ActorToRecord; // 0x120(0x1c)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct FString TargetSequenceName; // 0x140(0x10)
	struct FDirectoryPath TargetPathToRecordTo; // 0x150(0x10)

	void SetSequence(struct UMovieSceneSequence* Sequence); // Function MovieScene.MovieSceneSubSection.SetSequence // (None) // @ game+0xfffffffec0000000
};

// Class MovieScene.MovieSceneNameableTrack
// Size: 0x60 (Inherited: 0x60)
struct UMovieSceneNameableTrack : UMovieSceneTrack {
};

// Class MovieScene.MovieSceneSubTrack
// Size: 0x70 (Inherited: 0x60)
struct UMovieSceneSubTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x60(0x10)
};

// Class MovieScene.MovieSceneCustomClockSource
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneCustomClockSource : UInterface {

	void OnTick(float DeltaSeconds, float InPlayRate); // Function MovieScene.MovieSceneCustomClockSource.OnTick // (None) // @ game+0xfffffffec0000000
};

// Class MovieScene.MovieScenePlaybackClient
// Size: 0x30 (Inherited: 0x30)
struct UMovieScenePlaybackClient : UInterface {
};

// Class MovieScene.MovieScene
// Size: 0x150 (Inherited: 0x58)
struct UMovieScene : UMovieSceneSignedObject {
	struct TArray<struct FMovieSceneSpawnable> Spawnables; // 0x58(0x10)
	struct TArray<struct FMovieScenePossessable> Possessables; // 0x68(0x10)
	struct TArray<struct FMovieSceneBinding> ObjectBindings; // 0x78(0x10)
	struct TMap<struct FName, struct FMovieSceneObjectBindingIDs> BindingGroups; // 0x88(0x50)
	struct TArray<struct UMovieSceneTrack*> MasterTracks; // 0xd8(0x10)
	struct UMovieSceneTrack* CameraCutTrack; // 0xe8(0x08)
	struct FMovieSceneFrameRange SelectionRange; // 0xf0(0x10)
	struct FMovieSceneFrameRange PlaybackRange; // 0x100(0x10)
	struct FFrameRate TickResolution; // 0x110(0x08)
	struct FFrameRate DisplayRate; // 0x118(0x08)
	enum class EMovieSceneEvaluationType EvaluationType; // 0x120(0x01)
	enum class EUpdateClockSource ClockSource; // 0x121(0x01)
	char pad_122[0x6]; // 0x122(0x06)
	struct FSoftObjectPath CustomClockSourcePath; // 0x128(0x18)
	struct TArray<struct FMovieSceneMarkedFrame> MarkedFrames; // 0x140(0x10)
};

// Class MovieScene.MovieSceneBindingOverrides
// Size: 0x98 (Inherited: 0x30)
struct UMovieSceneBindingOverrides : UObject {
	struct TArray<struct FMovieSceneBindingOverrideData> BindingData; // 0x30(0x10)
	char pad_40[0x58]; // 0x40(0x58)
};

// Class MovieScene.MovieSceneBindingOwnerInterface
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneBindingOwnerInterface : UInterface {
};

// Class MovieScene.MovieSceneBuiltInEasingFunction
// Size: 0x40 (Inherited: 0x30)
struct UMovieSceneBuiltInEasingFunction : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	enum class EMovieSceneBuiltInEasing Type; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class MovieScene.MovieSceneEasingExternalCurve
// Size: 0x40 (Inherited: 0x30)
struct UMovieSceneEasingExternalCurve : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UCurveFloat* Curve; // 0x38(0x08)
};

// Class MovieScene.MovieSceneEasingFunction
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneEasingFunction : UInterface {

	float OnEvaluate(float Interp); // Function MovieScene.MovieSceneEasingFunction.OnEvaluate // (None) // @ game+0xfffffffec0000000
};

// Class MovieScene.MovieSceneFolder
// Size: 0x78 (Inherited: 0x30)
struct UMovieSceneFolder : UObject {
	struct FName FolderName; // 0x30(0x08)
	struct TArray<struct UMovieSceneFolder*> ChildFolders; // 0x38(0x10)
	struct TArray<struct UMovieSceneTrack*> ChildMasterTracks; // 0x48(0x10)
	struct TArray<struct FString> ChildObjectBindingStrings; // 0x58(0x10)
	char pad_68[0x10]; // 0x68(0x10)
};

// Class MovieScene.MovieSceneKeyProxy
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneKeyProxy : UInterface {
};

// Class MovieScene.TestMovieSceneTrack
// Size: 0x78 (Inherited: 0x60)
struct UTestMovieSceneTrack : UMovieSceneTrack {
	bool bHighPassFilter; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TArray<struct UMovieSceneSection*> SectionArray; // 0x68(0x10)
};

// Class MovieScene.TestMovieSceneSection
// Size: 0xe8 (Inherited: 0xe8)
struct UTestMovieSceneSection : UMovieSceneSection {
};

// Class MovieScene.TestMovieSceneSequence
// Size: 0x358 (Inherited: 0x350)
struct UTestMovieSceneSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x350(0x08)
};

// Class MovieScene.TestMovieSceneSubTrack
// Size: 0x80 (Inherited: 0x70)
struct UTestMovieSceneSubTrack : UMovieSceneSubTrack {
	struct TArray<struct UMovieSceneSection*> SectionArray; // 0x70(0x10)
};

// Class MovieScene.TestMovieSceneSubSection
// Size: 0x160 (Inherited: 0x160)
struct UTestMovieSceneSubSection : UMovieSceneSubSection {
};

