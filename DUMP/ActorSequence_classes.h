// Class ActorSequence.ActorSequence
// Size: 0x378 (Inherited: 0x350)
struct UActorSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x350(0x08)
	struct FActorSequenceObjectReferenceMap ObjectReferences; // 0x358(0x20)
};

// Class ActorSequence.ActorSequenceComponent
// Size: 0x100 (Inherited: 0xd8)
struct UActorSequenceComponent : UActorComponent {
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0xd8(0x14)
	char pad_EC[0x4]; // 0xec(0x04)
	struct UActorSequence* Sequence; // 0xf0(0x08)
	struct UActorSequencePlayer* SequencePlayer; // 0xf8(0x08)
};

// Class ActorSequence.ActorSequencePlayer
// Size: 0x890 (Inherited: 0x890)
struct UActorSequencePlayer : UMovieSceneSequencePlayer {
};

