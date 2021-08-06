// Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection
// Size: 0x118 (Inherited: 0xe8)
struct UMovieSceneGeometryCollectionSection : UMovieSceneSection {
	struct FMovieSceneGeometryCollectionParams Params; // 0xe8(0x30)
};

// Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
// Size: 0x70 (Inherited: 0x60)
struct UMovieSceneGeometryCollectionTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x60(0x10)
};

