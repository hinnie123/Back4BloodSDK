// Class GeometryCacheTracks.MovieSceneGeometryCacheSection
// Size: 0x128 (Inherited: 0xe8)
struct UMovieSceneGeometryCacheSection : UMovieSceneSection {
	struct FMovieSceneGeometryCacheParams Params; // 0xe8(0x40)
};

// Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
// Size: 0x70 (Inherited: 0x60)
struct UMovieSceneGeometryCacheTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x60(0x10)
};

