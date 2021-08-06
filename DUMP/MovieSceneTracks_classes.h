// Class MovieSceneTracks.MovieSceneTransformOrigin
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneTransformOrigin : UInterface {

	struct FTransform BP_GetTransformOrigin(); // Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin // (None) // @ game+0xfffffffec0000000
};

// Class MovieSceneTracks.MovieScene3DConstraintSection
// Size: 0x110 (Inherited: 0xe8)
struct UMovieScene3DConstraintSection : UMovieSceneSection {
	struct FGuid ConstraintId; // 0xe8(0x10)
	struct FMovieSceneObjectBindingID ConstraintBindingID; // 0xf8(0x18)

	void SetConstraintBindingID(struct FMovieSceneObjectBindingID InConstraintBindingID); // Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID // (None) // @ game+0xfffffffec0000000
};

// Class MovieSceneTracks.MovieScene3DAttachSection
// Size: 0x128 (Inherited: 0x110)
struct UMovieScene3DAttachSection : UMovieScene3DConstraintSection {
	struct FName AttachSocketName; // 0x110(0x08)
	struct FName AttachComponentName; // 0x118(0x08)
	enum class EAttachmentRule AttachmentLocationRule; // 0x120(0x01)
	enum class EAttachmentRule AttachmentRotationRule; // 0x121(0x01)
	enum class EAttachmentRule AttachmentScaleRule; // 0x122(0x01)
	enum class EDetachmentRule DetachmentLocationRule; // 0x123(0x01)
	enum class EDetachmentRule DetachmentRotationRule; // 0x124(0x01)
	enum class EDetachmentRule DetachmentScaleRule; // 0x125(0x01)
	char pad_126[0x2]; // 0x126(0x02)
};

// Class MovieSceneTracks.MovieScene3DConstraintTrack
// Size: 0x70 (Inherited: 0x60)
struct UMovieScene3DConstraintTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> ConstraintSections; // 0x60(0x10)
};

// Class MovieSceneTracks.MovieScene3DAttachTrack
// Size: 0x70 (Inherited: 0x70)
struct UMovieScene3DAttachTrack : UMovieScene3DConstraintTrack {
};

// Class MovieSceneTracks.MovieScene3DPathSection
// Size: 0x1b8 (Inherited: 0x110)
struct UMovieScene3DPathSection : UMovieScene3DConstraintSection {
	struct FMovieSceneFloatChannel TimingCurve; // 0x110(0xa0)
	enum class MovieScene3DPathSection_Axis FrontAxisEnum; // 0x1b0(0x01)
	enum class MovieScene3DPathSection_Axis UpAxisEnum; // 0x1b1(0x01)
	char pad_1B2[0x2]; // 0x1b2(0x02)
	char bFollow : 1; // 0x1b4(0x01)
	char bReverse : 1; // 0x1b4(0x01)
	char bForceUpright : 1; // 0x1b4(0x01)
	char pad_1B4_3 : 5; // 0x1b4(0x01)
	char pad_1B5[0x3]; // 0x1b5(0x03)
};

// Class MovieSceneTracks.MovieScene3DPathTrack
// Size: 0x70 (Inherited: 0x70)
struct UMovieScene3DPathTrack : UMovieScene3DConstraintTrack {
};

// Class MovieSceneTracks.MovieScene3DTransformSection
// Size: 0x738 (Inherited: 0xe8)
struct UMovieScene3DTransformSection : UMovieSceneSection {
	struct FMovieSceneTransformMask TransformMask; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FMovieSceneFloatChannel Translation[0x3]; // 0xf0(0x1e0)
	struct FMovieSceneFloatChannel Rotation[0x3]; // 0x2d0(0x1e0)
	struct FMovieSceneFloatChannel Scale[0x3]; // 0x4b0(0x1e0)
	struct FMovieSceneFloatChannel ManualWeight; // 0x690(0xa0)
	char pad_730[0x4]; // 0x730(0x04)
	bool bUseQuaternionInterpolation; // 0x734(0x01)
	char pad_735[0x3]; // 0x735(0x03)
};

// Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 0x90 (Inherited: 0x60)
struct UMovieScenePropertyTrack : UMovieSceneNameableTrack {
	struct UMovieSceneSection* SectionToKey; // 0x60(0x08)
	struct FName PropertyName; // 0x68(0x08)
	struct FString PropertyPath; // 0x70(0x10)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x80(0x10)
};

// Class MovieSceneTracks.MovieScene3DTransformTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieScene3DTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneActorReferenceSection
// Size: 0x228 (Inherited: 0xe8)
struct UMovieSceneActorReferenceSection : UMovieSceneSection {
	struct FMovieSceneActorReferenceData ActorReferenceData; // 0xe8(0xb0)
	struct FIntegralCurve ActorGuidIndexCurve; // 0x198(0x80)
	struct TArray<struct FString> ActorGuidStrings; // 0x218(0x10)
};

// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneActorReferenceTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneAudioSection
// Size: 0x338 (Inherited: 0xe8)
struct UMovieSceneAudioSection : UMovieSceneSection {
	struct USoundBase* Sound; // 0xe8(0x08)
	struct FFrameNumber StartFrameOffset; // 0xf0(0x04)
	float StartOffset; // 0xf4(0x04)
	float AudioStartTime; // 0xf8(0x04)
	float AudioDilationFactor; // 0xfc(0x04)
	float AudioVolume; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct FMovieSceneFloatChannel SoundVolume; // 0x108(0xa0)
	struct FMovieSceneFloatChannel PitchMultiplier; // 0x1a8(0xa0)
	struct FMovieSceneActorReferenceData AttachActorData; // 0x248(0xb0)
	bool bSuppressSubtitles; // 0x2f8(0x01)
	bool bOverrideAttenuation; // 0x2f9(0x01)
	char pad_2FA[0x6]; // 0x2fa(0x06)
	struct USoundAttenuation* AttenuationSettings; // 0x300(0x08)
	struct FDelegate OnQueueSubtitles; // 0x308(0x10)
	struct FMulticastInlineDelegate OnAudioFinished; // 0x318(0x10)
	struct FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x328(0x10)

	void SetStartOffset(struct FFrameNumber InStartOffset); // Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset // (None) // @ game+0xfffffffec0000000
};

// Class MovieSceneTracks.MovieSceneAudioTrack
// Size: 0x70 (Inherited: 0x60)
struct UMovieSceneAudioTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> AudioSections; // 0x60(0x10)
};

// Class MovieSceneTracks.MovieSceneBoolSection
// Size: 0x180 (Inherited: 0xe8)
struct UMovieSceneBoolSection : UMovieSceneSection {
	bool DefaultValue; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct FMovieSceneBoolChannel BoolCurve; // 0xf0(0x90)
};

// Class MovieSceneTracks.MovieSceneBoolTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneBoolTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneByteSection
// Size: 0x180 (Inherited: 0xe8)
struct UMovieSceneByteSection : UMovieSceneSection {
	struct FMovieSceneByteChannel ByteCurve; // 0xe8(0x98)
};

// Class MovieSceneTracks.MovieSceneByteTrack
// Size: 0x98 (Inherited: 0x90)
struct UMovieSceneByteTrack : UMovieScenePropertyTrack {
	struct UEnum* Enum; // 0x90(0x08)
};

// Class MovieSceneTracks.MovieSceneCameraAnimSection
// Size: 0x128 (Inherited: 0xe8)
struct UMovieSceneCameraAnimSection : UMovieSceneSection {
	struct FMovieSceneCameraAnimSectionData AnimData; // 0xe8(0x20)
	struct UCameraAnim* CameraAnim; // 0x108(0x08)
	float PlayRate; // 0x110(0x04)
	float PlayScale; // 0x114(0x04)
	float BlendInTime; // 0x118(0x04)
	float BlendOutTime; // 0x11c(0x04)
	bool bLooping; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
};

// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// Size: 0x70 (Inherited: 0x60)
struct UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> CameraAnimSections; // 0x60(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraCutSection
// Size: 0x110 (Inherited: 0xe8)
struct UMovieSceneCameraCutSection : UMovieSceneSection {
	struct FGuid CameraGuid; // 0xe8(0x10)
	struct FMovieSceneObjectBindingID CameraBindingID; // 0xf8(0x18)

	void SetCameraBindingID(struct FMovieSceneObjectBindingID InCameraBindingID); // Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID // (None) // @ game+0xfffffffec0000000
};

// Class MovieSceneTracks.MovieSceneCameraCutTrack
// Size: 0x78 (Inherited: 0x60)
struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack {
	bool bCanBlend; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x68(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSection
// Size: 0x128 (Inherited: 0xe8)
struct UMovieSceneCameraShakeSection : UMovieSceneSection {
	struct FMovieSceneCameraShakeSectionData ShakeData; // 0xe8(0x20)
	struct UCameraShake* ShakeClass; // 0x108(0x08)
	float PlayScale; // 0x110(0x04)
	enum class ECameraAnimPlaySpace PlaySpace; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	struct FRotator UserDefinedPlaySpace; // 0x118(0x0c)
	char pad_124[0x4]; // 0x124(0x04)
};

// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// Size: 0x70 (Inherited: 0x60)
struct UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> CameraShakeSections; // 0x60(0x10)
};

// Class MovieSceneTracks.MovieSceneCinematicShotSection
// Size: 0x188 (Inherited: 0x160)
struct UMovieSceneCinematicShotSection : UMovieSceneSubSection {
	struct FString ShotDisplayName; // 0x160(0x10)
	struct FText DisplayName; // 0x170(0x18)

	void SetShotDisplayName(struct FString InShotDisplayName); // Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName // (None) // @ game+0xfffffffec0000000
};

// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// Size: 0x70 (Inherited: 0x70)
struct UMovieSceneCinematicShotTrack : UMovieSceneSubTrack {
};

// Class MovieSceneTracks.MovieSceneColorSection
// Size: 0x368 (Inherited: 0xe8)
struct UMovieSceneColorSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel RedCurve; // 0xe8(0xa0)
	struct FMovieSceneFloatChannel GreenCurve; // 0x188(0xa0)
	struct FMovieSceneFloatChannel BlueCurve; // 0x228(0xa0)
	struct FMovieSceneFloatChannel AlphaCurve; // 0x2c8(0xa0)
};

// Class MovieSceneTracks.MovieSceneColorTrack
// Size: 0x98 (Inherited: 0x90)
struct UMovieSceneColorTrack : UMovieScenePropertyTrack {
	bool bIsSlateColor; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// Class MovieSceneTracks.MovieSceneEnumSection
// Size: 0x180 (Inherited: 0xe8)
struct UMovieSceneEnumSection : UMovieSceneSection {
	struct FMovieSceneByteChannel EnumCurve; // 0xe8(0x98)
};

// Class MovieSceneTracks.MovieSceneEnumTrack
// Size: 0x98 (Inherited: 0x90)
struct UMovieSceneEnumTrack : UMovieScenePropertyTrack {
	struct UEnum* Enum; // 0x90(0x08)
};

// Class MovieSceneTracks.MovieSceneEulerTransformTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneEulerTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneEventSectionBase
// Size: 0xe8 (Inherited: 0xe8)
struct UMovieSceneEventSectionBase : UMovieSceneSection {
};

// Class MovieSceneTracks.MovieSceneEventRepeaterSection
// Size: 0x110 (Inherited: 0xe8)
struct UMovieSceneEventRepeaterSection : UMovieSceneEventSectionBase {
	struct FMovieSceneEvent Event; // 0xe8(0x28)
};

// Class MovieSceneTracks.MovieSceneEventSection
// Size: 0x1e8 (Inherited: 0xe8)
struct UMovieSceneEventSection : UMovieSceneSection {
	struct FNameCurve Events; // 0xe8(0x78)
	struct FMovieSceneEventSectionData EventData; // 0x160(0x88)
};

// Class MovieSceneTracks.MovieSceneEventTrack
// Size: 0x88 (Inherited: 0x60)
struct UMovieSceneEventTrack : UMovieSceneNameableTrack {
	char bFireEventsWhenForwards : 1; // 0x60(0x01)
	char bFireEventsWhenBackwards : 1; // 0x60(0x01)
	char pad_60_2 : 6; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	enum class EFireEventsAtPosition EventPosition; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // 0x68(0x10)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x78(0x10)
};

// Class MovieSceneTracks.MovieSceneEventTriggerSection
// Size: 0x170 (Inherited: 0xe8)
struct UMovieSceneEventTriggerSection : UMovieSceneEventSectionBase {
	struct FMovieSceneEventChannel EventChannel; // 0xe8(0x88)
};

// Class MovieSceneTracks.MovieSceneFloatSection
// Size: 0x188 (Inherited: 0xe8)
struct UMovieSceneFloatSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel FloatCurve; // 0xe8(0xa0)
};

// Class MovieSceneTracks.MovieSceneFadeSection
// Size: 0x1a0 (Inherited: 0x188)
struct UMovieSceneFadeSection : UMovieSceneFloatSection {
	struct FLinearColor FadeColor; // 0x188(0x10)
	char bFadeAudio : 1; // 0x198(0x01)
	char pad_198_1 : 7; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
};

// Class MovieSceneTracks.MovieSceneFloatTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneFloatTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneFadeTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneFadeTrack : UMovieSceneFloatTrack {
};

// Class MovieSceneTracks.MovieSceneIntegerSection
// Size: 0x178 (Inherited: 0xe8)
struct UMovieSceneIntegerSection : UMovieSceneSection {
	struct FMovieSceneIntegerChannel IntegerCurve; // 0xe8(0x90)
};

// Class MovieSceneTracks.MovieSceneIntegerTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneIntegerTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// Size: 0x100 (Inherited: 0xe8)
struct UMovieSceneLevelVisibilitySection : UMovieSceneSection {
	enum class ELevelVisibility Visibility; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct TArray<struct FName> LevelNames; // 0xf0(0x10)

	void SetVisibility(enum class ELevelVisibility InVisibility); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility // (None) // @ game+0xfffffffec0000000
};

// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// Size: 0x70 (Inherited: 0x60)
struct UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x60(0x10)
};

// Class MovieSceneTracks.MovieSceneMaterialTrack
// Size: 0x70 (Inherited: 0x60)
struct UMovieSceneMaterialTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x60(0x10)
};

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// Size: 0x78 (Inherited: 0x70)
struct UMovieSceneMaterialParameterCollectionTrack : UMovieSceneMaterialTrack {
	struct UMaterialParameterCollection* MPC; // 0x70(0x08)
};

// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// Size: 0x78 (Inherited: 0x70)
struct UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack {
	int32_t MaterialIndex; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class MovieSceneTracks.MovieSceneObjectPropertySection
// Size: 0x1a8 (Inherited: 0xe8)
struct UMovieSceneObjectPropertySection : UMovieSceneSection {
	struct FMovieSceneObjectPathChannel ObjectChannel; // 0xe8(0xc0)
};

// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
// Size: 0x98 (Inherited: 0x90)
struct UMovieSceneObjectPropertyTrack : UMovieScenePropertyTrack {
	struct UObject* PropertyClass; // 0x90(0x08)
};

// Class MovieSceneTracks.MovieSceneParameterSection
// Size: 0x148 (Inherited: 0xe8)
struct UMovieSceneParameterSection : UMovieSceneSection {
	struct TArray<struct FBoolParameterNameAndCurve> BoolParameterNamesAndCurves; // 0xe8(0x10)
	struct TArray<struct FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0xf8(0x10)
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves; // 0x108(0x10)
	struct TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0x118(0x10)
	struct TArray<struct FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x128(0x10)
	struct TArray<struct FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x138(0x10)
};

// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// Size: 0x70 (Inherited: 0x60)
struct UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x60(0x10)
};

// Class MovieSceneTracks.MovieSceneParticleSection
// Size: 0x180 (Inherited: 0xe8)
struct UMovieSceneParticleSection : UMovieSceneSection {
	struct FMovieSceneParticleChannel ParticleKeys; // 0xe8(0x98)
};

// Class MovieSceneTracks.MovieSceneParticleTrack
// Size: 0x70 (Inherited: 0x60)
struct UMovieSceneParticleTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> ParticleSections; // 0x60(0x10)
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
// Size: 0x1a8 (Inherited: 0xe8)
struct UMovieScenePrimitiveMaterialSection : UMovieSceneSection {
	struct FMovieSceneObjectPathChannel MaterialChannel; // 0xe8(0xc0)
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// Size: 0x98 (Inherited: 0x90)
struct UMovieScenePrimitiveMaterialTrack : UMovieScenePropertyTrack {
	int32_t MaterialIndex; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// Size: 0x1e8 (Inherited: 0xe8)
struct UMovieSceneSkeletalAnimationSection : UMovieSceneSection {
	struct FMovieSceneSkeletalAnimationParams Params; // 0xe8(0xd8)
	struct UAnimSequence* AnimSequence; // 0x1c0(0x08)
	struct UAnimSequenceBase* Animation; // 0x1c8(0x08)
	float StartOffset; // 0x1d0(0x04)
	float EndOffset; // 0x1d4(0x04)
	float PlayRate; // 0x1d8(0x04)
	char bReverse : 1; // 0x1dc(0x01)
	char pad_1DC_1 : 7; // 0x1dc(0x01)
	char pad_1DD[0x3]; // 0x1dd(0x03)
	struct FName SlotName; // 0x1e0(0x08)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// Size: 0x78 (Inherited: 0x60)
struct UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x60(0x10)
	bool bUseLegacySectionIndexBlend; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class MovieSceneTracks.MovieSceneSlomoSection
// Size: 0x188 (Inherited: 0x188)
struct UMovieSceneSlomoSection : UMovieSceneFloatSection {
};

// Class MovieSceneTracks.MovieSceneSlomoTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneSlomoTrack : UMovieSceneFloatTrack {
};

// Class MovieSceneTracks.MovieSceneSpawnSection
// Size: 0x180 (Inherited: 0x180)
struct UMovieSceneSpawnSection : UMovieSceneBoolSection {
};

// Class MovieSceneTracks.MovieSceneSpawnTrack
// Size: 0x80 (Inherited: 0x60)
struct UMovieSceneSpawnTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x60(0x10)
	struct FGuid ObjectGuid; // 0x70(0x10)
};

// Class MovieSceneTracks.MovieSceneStringSection
// Size: 0x188 (Inherited: 0xe8)
struct UMovieSceneStringSection : UMovieSceneSection {
	struct FMovieSceneStringChannel StringCurve; // 0xe8(0xa0)
};

// Class MovieSceneTracks.MovieSceneStringTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneStringTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneTransformTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneVectorSection
// Size: 0x370 (Inherited: 0xe8)
struct UMovieSceneVectorSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel Curves[0x4]; // 0xe8(0x280)
	int32_t ChannelsUsed; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
};

// Class MovieSceneTracks.MovieSceneVectorTrack
// Size: 0x98 (Inherited: 0x90)
struct UMovieSceneVectorTrack : UMovieScenePropertyTrack {
	int32_t NumChannelsUsed; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class MovieSceneTracks.MovieSceneVisibilityTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneVisibilityTrack : UMovieSceneBoolTrack {
};

