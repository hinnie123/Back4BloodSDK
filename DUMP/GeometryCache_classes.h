// Class GeometryCache.GeometryCache
// Size: 0x70 (Inherited: 0x30)
struct UGeometryCache : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x38(0x10)
	struct TArray<struct UGeometryCacheTrack*> Tracks; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
	int32_t StartFrame; // 0x68(0x04)
	int32_t EndFrame; // 0x6c(0x04)
};

// Class GeometryCache.GeometryCacheActor
// Size: 0x258 (Inherited: 0x250)
struct AGeometryCacheActor : AActor {
	struct UGeometryCacheComponent* GeometryCacheComponent; // 0x250(0x08)

	struct UGeometryCacheComponent* GetGeometryCacheComponent(); // Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent // (None) // @ game+0xfffffffec0000000
};

// Class GeometryCache.GeometryCacheCodecBase
// Size: 0x40 (Inherited: 0x30)
struct UGeometryCacheCodecBase : UObject {
	struct TArray<int32_t> TopologyRanges; // 0x30(0x10)
};

// Class GeometryCache.GeometryCacheCodecRaw
// Size: 0x48 (Inherited: 0x40)
struct UGeometryCacheCodecRaw : UGeometryCacheCodecBase {
	int32_t DummyProperty; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class GeometryCache.GeometryCacheCodecV1
// Size: 0x48 (Inherited: 0x40)
struct UGeometryCacheCodecV1 : UGeometryCacheCodecBase {
	char pad_40[0x8]; // 0x40(0x08)
};

// Class GeometryCache.GeometryCacheComponent
// Size: 0x570 (Inherited: 0x520)
struct UGeometryCacheComponent : UMeshComponent {
	struct UGeometryCache* GeometryCache; // 0x518(0x08)
	bool bRunning; // 0x520(0x01)
	bool bLooping; // 0x521(0x01)
	float StartTimeOffset; // 0x524(0x04)
	float PlaybackSpeed; // 0x528(0x04)
	int32_t NumTracks; // 0x52c(0x04)
	float ElapsedTime; // 0x530(0x04)
	char pad_53A[0x2a]; // 0x53a(0x2a)
	float Duration; // 0x564(0x04)
	bool bManualTick; // 0x568(0x01)
	char pad_569[0x7]; // 0x569(0x07)

	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping); // Function GeometryCache.GeometryCacheComponent.TickAtThisTime // (None) // @ game+0xfffffffec0000000
};

// Class GeometryCache.GeometryCacheTrack
// Size: 0x60 (Inherited: 0x30)
struct UGeometryCacheTrack : UObject {
	float Duration; // 0x30(0x04)
	char pad_34[0x2c]; // 0x34(0x2c)
};

// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// Size: 0x88 (Inherited: 0x60)
struct UGeometryCacheTrack_FlipbookAnimation : UGeometryCacheTrack {
	uint32_t NumMeshSamples; // 0x60(0x04)
	char pad_64[0x24]; // 0x64(0x24)

	void AddMeshSample(struct FGeometryCacheMeshData MeshData, float SampleTime); // Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample // (None) // @ game+0xfffffffec0000000
};

// Class GeometryCache.GeometryCacheTrackStreamable
// Size: 0xd8 (Inherited: 0x60)
struct UGeometryCacheTrackStreamable : UGeometryCacheTrack {
	struct UGeometryCacheCodecBase* Codec; // 0x60(0x08)
	char pad_68[0x68]; // 0x68(0x68)
	float StartSampleTime; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// Size: 0x108 (Inherited: 0x60)
struct UGeometryCacheTrack_TransformAnimation : UGeometryCacheTrack {
	char pad_60[0xa8]; // 0x60(0xa8)

	void SetMesh(struct FGeometryCacheMeshData NewMeshData); // Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh // (None) // @ game+0xfffffffec0000000
};

// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// Size: 0x108 (Inherited: 0x60)
struct UGeometryCacheTrack_TransformGroupAnimation : UGeometryCacheTrack {
	char pad_60[0xa8]; // 0x60(0xa8)

	void SetMesh(struct FGeometryCacheMeshData NewMeshData); // Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh // (None) // @ game+0xfffffffec0000000
};

