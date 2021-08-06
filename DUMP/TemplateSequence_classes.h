// Class TemplateSequence.TemplateSequence
// Size: 0x3f8 (Inherited: 0x350)
struct UTemplateSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x350(0x08)
	struct TSoftClassPtr<UObject> BoundActorClass; // 0x358(0x28)
	struct TSoftObjectPtr<AActor> BoundPreviewActor; // 0x380(0x28)
	struct TMap<struct FGuid, struct FName> BoundActorComponents; // 0x3a8(0x50)
};

// Class TemplateSequence.CameraAnimationSequence
// Size: 0x3f8 (Inherited: 0x3f8)
struct UCameraAnimationSequence : UTemplateSequence {
};

// Class TemplateSequence.TemplateSequenceActor
// Size: 0x2a0 (Inherited: 0x250)
struct ATemplateSequenceActor : AActor {
	char pad_250[0x8]; // 0x250(0x08)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x258(0x14)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct UTemplateSequencePlayer* SequencePlayer; // 0x270(0x08)
	struct FSoftObjectPath TemplateSequence; // 0x278(0x18)
	struct FTemplateSequenceBindingOverrideData BindingOverride; // 0x290(0x0c)
	char pad_29C[0x4]; // 0x29c(0x04)

	void SetSequence(struct UTemplateSequence* InSequence); // Function TemplateSequence.TemplateSequenceActor.SetSequence // (None) // @ game+0xfffffffec0000000
};

// Class TemplateSequence.TemplateSequencePlayer
// Size: 0x898 (Inherited: 0x890)
struct UTemplateSequencePlayer : UMovieSceneSequencePlayer {
	char pad_890[0x8]; // 0x890(0x08)

	struct UTemplateSequencePlayer* CreateTemplateSequencePlayer(struct UObject* WorldContextObject, struct UTemplateSequence* TemplateSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ATemplateSequenceActor* OutActor); // Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer // (None) // @ game+0xfffffffec0000000
};

// Class TemplateSequence.TemplateSequenceSection
// Size: 0x160 (Inherited: 0x160)
struct UTemplateSequenceSection : UMovieSceneSubSection {
};

// Class TemplateSequence.TemplateSequenceTrack
// Size: 0x70 (Inherited: 0x70)
struct UTemplateSequenceTrack : UMovieSceneSubTrack {
};

