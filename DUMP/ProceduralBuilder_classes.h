// Class ProceduralBuilder.BuilderActor
// Size: 0x288 (Inherited: 0x250)
struct ABuilderActor : AActor {
	char pad_250[0x8]; // 0x250(0x08)
	bool IsLocked; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct TArray<struct TWeakObjectPtr<struct AActor>> PlacedActors; // 0x260(0x10)
	struct FName ParentProceduralActorsPath; // 0x270(0x08)
	bool IsExplicitBuilding; // 0x278(0x01)
	bool bIsPrefabBroken; // 0x279(0x01)
	char pad_27A[0x2]; // 0x27a(0x02)
	uint32_t LatestVersion; // 0x27c(0x04)
	uint32_t PlacedVersion; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)

	void PlaceProceduralActors(struct FPlaceProceduralActorsInput AssetsToSpawn); // Function ProceduralBuilder.BuilderActor.PlaceProceduralActors // (None) // @ game+0xfffffffec0000000
};

// Class ProceduralBuilder.BuilderPivotActor
// Size: 0x250 (Inherited: 0x250)
struct ABuilderPivotActor : ATargetPoint {
};

// Class ProceduralBuilder.GenericBuilderActor
// Size: 0x288 (Inherited: 0x288)
struct AGenericBuilderActor : ABuilderActor {
};

// Class ProceduralBuilder.ProceduralInterface
// Size: 0x30 (Inherited: 0x30)
struct UProceduralInterface : UInterface {
};

// Class ProceduralBuilder.TRSSplineMeshActor
// Size: 0x3a0 (Inherited: 0x250)
struct ATRSSplineMeshActor : AActor {
	struct USplineComponent* EditableSpline; // 0x250(0x08)
	struct TArray<struct USplineMeshComponent*> GeneratedSubObjects; // 0x258(0x10)
	struct TArray<struct UTextRenderComponent*> PointNumbers; // 0x268(0x10)
	struct UStaticMeshComponent* ConvertedMesh; // 0x278(0x08)
	bool bFinalized; // 0x280(0x01)
	bool bAffectsNavigation; // 0x281(0x01)
	bool bDisableCollision; // 0x282(0x01)
	enum class ETRSSplineMeshActorSplineMeshMode SplineMeshMode; // 0x283(0x01)
	enum class ESplineMeshAxis ForwardAxis; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	float GlobalBank; // 0x288(0x04)
	struct FVector GlobalScale; // 0x28c(0x0c)
	float Padding; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct UStaticMesh* Mesh; // 0x2a0(0x08)
	bool bCastShadows; // 0x2a8(0x01)
	int8_t ForceLOD; // 0x2a9(0x01)
	bool bLockCurrentMeshArray; // 0x2aa(0x01)
	bool bContiguous; // 0x2ab(0x01)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct TArray<struct FTRSSplineMeshActorSplineMeshElement> AvailableMeshes; // 0x2b0(0x10)
	bool bSequential; // 0x2c0(0x01)
	bool bPreventAdjancency; // 0x2c1(0x01)
	char pad_2C2[0x2]; // 0x2c2(0x02)
	struct FVector CachedGlobalScale; // 0x2c4(0x0c)
	struct TArray<struct FTRSSplineMeshActorPerInstanceData> PerInstanceData; // 0x2d0(0x10)
	struct TArray<struct FVector> PerInstanceRotation; // 0x2e0(0x10)
	bool bUseCapMeshes; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct FTRSSplineMeshActorCapData CapMeshes; // 0x2f8(0x20)
	enum class ETRSSplineMeshActorMeshType StaticMeshTypeToUse; // 0x318(0x01)
	bool bUsedWithWater; // 0x319(0x01)
	char pad_31A[0x2]; // 0x31a(0x02)
	float UMult; // 0x31c(0x04)
	bool bAutoMultU; // 0x320(0x01)
	bool bFlipU; // 0x321(0x01)
	char pad_322[0x2]; // 0x322(0x02)
	float VMult; // 0x324(0x04)
	bool bAutoMultV; // 0x328(0x01)
	bool bFlipV; // 0x329(0x01)
	char pad_32A[0x2]; // 0x32a(0x02)
	int32_t AutoMultAdjust; // 0x32c(0x04)
	bool bDrawOnlySpline; // 0x330(0x01)
	bool bShowDebugMaterials; // 0x331(0x01)
	char pad_332[0x6]; // 0x332(0x06)
	struct TArray<struct UMaterialInterface*> DebugMaterials; // 0x338(0x10)
	bool bDrawDebugNumbers; // 0x348(0x01)
	char pad_349[0x3]; // 0x349(0x03)
	struct FTRSSplineMeshActorDebugNumbersPrefs DebugNumbersPrefs; // 0x34c(0x0c)
	struct TArray<struct FTRSSplineMeshActorSplineMeshElement> MeshesToUse; // 0x358(0x10)
	struct TArray<float> Distances; // 0x368(0x10)
	struct TArray<struct UMaterialInterface*> DebugMaterialsToUse; // 0x378(0x10)
	struct TArray<struct FTRSSplineMeshActorSplineMeshElement> MeshesCache; // 0x388(0x10)
	bool bMeshTypeSelected; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
};

