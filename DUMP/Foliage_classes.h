// Class Foliage.FoliageInstancedStaticMeshComponent
// Size: 0x770 (Inherited: 0x760)
struct UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent {
	struct FGuid GenerationGuid; // 0x760(0x10)
};

// Class Foliage.FoliageStatistics
// Size: 0x30 (Inherited: 0x30)
struct UFoliageStatistics : UBlueprintFunctionLibrary {

	int32_t FoliageOverlappingSphereCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FVector CenterPosition, float Radius); // Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount // (None) // @ game+0xfffffffec0000000
};

// Class Foliage.FoliageType
// Size: 0x380 (Inherited: 0x30)
struct UFoliageType : UObject {
	struct FGuid UpdateGuid; // 0x30(0x10)
	float Density; // 0x40(0x04)
	float DensityAdjustmentFactor; // 0x44(0x04)
	float Radius; // 0x48(0x04)
	bool bSingleInstanceModeOverrideRadius; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float SingleInstanceModeRadius; // 0x50(0x04)
	enum class EFoliageScaling Scaling; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct FFloatInterval ScaleX; // 0x58(0x08)
	struct FFloatInterval ScaleY; // 0x60(0x08)
	struct FFloatInterval ScaleZ; // 0x68(0x08)
	struct FFoliageVertexColorChannelMask VertexColorMaskByChannel[0x4]; // 0x70(0x30)
	enum class FoliageVertexColorMask VertexColorMask; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float VertexColorMaskThreshold; // 0xa4(0x04)
	char VertexColorMaskInvert : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	struct FFloatInterval ZOffset; // 0xac(0x08)
	char AlignToNormal : 1; // 0xb4(0x01)
	char pad_B4_1 : 7; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float AlignMaxAngle; // 0xb8(0x04)
	char RandomYaw : 1; // 0xbc(0x01)
	char pad_BC_1 : 7; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float RandomPitchAngle; // 0xc0(0x04)
	struct FFloatInterval GroundSlopeAngle; // 0xc4(0x08)
	struct FFloatInterval Height; // 0xcc(0x08)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct TArray<struct FName> LandscapeLayers; // 0xd8(0x10)
	float MinimumLayerWeight; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct TArray<struct FName> ExclusionLandscapeLayers; // 0xf0(0x10)
	float MinimumExclusionLayerWeight; // 0x100(0x04)
	struct FName LandscapeLayer; // 0x104(0x08)
	char CollisionWithWorld : 1; // 0x10c(0x01)
	char pad_10C_1 : 7; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	struct FVector CollisionScale; // 0x110(0x0c)
	struct FBoxSphereBounds MeshBounds; // 0x11c(0x1c)
	struct FVector LowBoundOriginRadius; // 0x138(0x0c)
	enum class EComponentMobility Mobility; // 0x144(0x01)
	char pad_145[0x3]; // 0x145(0x03)
	struct FInt32Interval CullDistance; // 0x148(0x08)
	struct FInt32Interval LodLimits; // 0x150(0x08)
	float LODDistanceScale; // 0x158(0x04)
	char bEnableStaticLighting : 1; // 0x15c(0x01)
	char CastShadow : 1; // 0x15c(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x15c(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x15c(0x01)
	char bCastDynamicShadow : 1; // 0x15c(0x01)
	char bCastStaticShadow : 1; // 0x15c(0x01)
	char bCastShadowAsTwoSided : 1; // 0x15c(0x01)
	char bReceivesDecals : 1; // 0x15c(0x01)
	char bOverrideLightMapRes : 1; // 0x15d(0x01)
	char pad_15D_1 : 7; // 0x15d(0x01)
	char pad_15E[0x2]; // 0x15e(0x02)
	int32_t OverriddenLightMapRes; // 0x160(0x04)
	enum class ELightmapType LightmapType; // 0x164(0x01)
	char pad_165[0x3]; // 0x165(0x03)
	char bUseAsOccluder : 1; // 0x168(0x01)
	char pad_168_1 : 7; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct FBodyInstance BodyInstance; // 0x170(0x110)
	enum class EHasCustomNavigableGeometry CustomNavigableGeometry; // 0x280(0x01)
	struct FLightingChannels LightingChannels; // 0x281(0x01)
	char pad_282[0x2]; // 0x282(0x02)
	char bRenderCustomDepth : 1; // 0x284(0x01)
	char pad_284_1 : 7; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	int32_t CustomDepthStencilValue; // 0x288(0x04)
	int32_t TranslucencySortPriority; // 0x28c(0x04)
	float CollisionRadius; // 0x290(0x04)
	float ShadeRadius; // 0x294(0x04)
	int32_t NumSteps; // 0x298(0x04)
	float InitialSeedDensity; // 0x29c(0x04)
	float AverageSpreadDistance; // 0x2a0(0x04)
	float SpreadVariance; // 0x2a4(0x04)
	int32_t SeedsPerStep; // 0x2a8(0x04)
	int32_t DistributionSeed; // 0x2ac(0x04)
	float MaxInitialSeedOffset; // 0x2b0(0x04)
	bool bCanGrowInShade; // 0x2b4(0x01)
	bool bSpawnsInShade; // 0x2b5(0x01)
	char pad_2B6[0x2]; // 0x2b6(0x02)
	float MaxInitialAge; // 0x2b8(0x04)
	float MaxAge; // 0x2bc(0x04)
	float OverlapPriority; // 0x2c0(0x04)
	struct FFloatInterval ProceduralScale; // 0x2c4(0x08)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct FRuntimeFloatCurve ScaleCurve; // 0x2d0(0x88)
	int32_t ChangeCount; // 0x358(0x04)
	char ReapplyDensity : 1; // 0x35c(0x01)
	char ReapplyRadius : 1; // 0x35c(0x01)
	char ReapplyAlignToNormal : 1; // 0x35c(0x01)
	char ReapplyRandomYaw : 1; // 0x35c(0x01)
	char ReapplyScaling : 1; // 0x35c(0x01)
	char ReapplyScaleX : 1; // 0x35c(0x01)
	char ReapplyScaleY : 1; // 0x35c(0x01)
	char ReapplyScaleZ : 1; // 0x35c(0x01)
	char ReapplyRandomPitchAngle : 1; // 0x35d(0x01)
	char ReapplyGroundSlope : 1; // 0x35d(0x01)
	char ReapplyHeight : 1; // 0x35d(0x01)
	char ReapplyLandscapeLayers : 1; // 0x35d(0x01)
	char ReapplyZOffset : 1; // 0x35d(0x01)
	char ReapplyCollisionWithWorld : 1; // 0x35d(0x01)
	char ReapplyVertexColorMask : 1; // 0x35d(0x01)
	char bEnableDensityScaling : 1; // 0x35d(0x01)
	char pad_35E[0x2]; // 0x35e(0x02)
	float DensityScalingBias; // 0x360(0x04)
	char pad_364[0x4]; // 0x364(0x04)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x368(0x10)
	int32_t VirtualTextureCullMips; // 0x378(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x37c(0x01)
	char pad_37D[0x3]; // 0x37d(0x03)
};

// Class Foliage.FoliageType_Actor
// Size: 0x390 (Inherited: 0x380)
struct UFoliageType_Actor : UFoliageType {
	struct AActor* ActorClass; // 0x380(0x08)
	bool bShouldAttachToBaseComponent; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
};

// Class Foliage.FoliageType_InstancedStaticMesh
// Size: 0x3a0 (Inherited: 0x380)
struct UFoliageType_InstancedStaticMesh : UFoliageType {
	struct UStaticMesh* Mesh; // 0x380(0x08)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x388(0x10)
	struct UFoliageInstancedStaticMeshComponent* ComponentClass; // 0x398(0x08)
};

// Class Foliage.InstancedFoliageActor
// Size: 0x2a0 (Inherited: 0x250)
struct AInstancedFoliageActor : AActor {
	char pad_250[0x50]; // 0x250(0x50)
};

// Class Foliage.InteractiveFoliageActor
// Size: 0x2c0 (Inherited: 0x260)
struct AInteractiveFoliageActor : AStaticMeshActor {
	struct UCapsuleComponent* CapsuleComponent; // 0x260(0x08)
	struct FVector TouchingActorEntryPosition; // 0x268(0x0c)
	struct FVector FoliageVelocity; // 0x274(0x0c)
	struct FVector FoliageForce; // 0x280(0x0c)
	struct FVector FoliagePosition; // 0x28c(0x0c)
	float FoliageDamageImpulseScale; // 0x298(0x04)
	float FoliageTouchImpulseScale; // 0x29c(0x04)
	float FoliageStiffness; // 0x2a0(0x04)
	float FoliageStiffnessQuadratic; // 0x2a4(0x04)
	float FoliageDamping; // 0x2a8(0x04)
	float MaxDamageImpulse; // 0x2ac(0x04)
	float MaxTouchImpulse; // 0x2b0(0x04)
	float MaxForce; // 0x2b4(0x04)
	float Mass; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)

	void CapsuleTouched(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult OverlapInfo); // Function Foliage.InteractiveFoliageActor.CapsuleTouched // (None) // @ game+0xfffffffec0000000
};

// Class Foliage.InteractiveFoliageComponent
// Size: 0x5c0 (Inherited: 0x5b0)
struct UInteractiveFoliageComponent : UStaticMeshComponent {
	char pad_5B0[0x10]; // 0x5b0(0x10)
};

// Class Foliage.ProceduralFoliageBlockingVolume
// Size: 0x290 (Inherited: 0x288)
struct AProceduralFoliageBlockingVolume : AVolume {
	struct AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x288(0x08)
};

// Class Foliage.ProceduralFoliageComponent
// Size: 0x100 (Inherited: 0xd8)
struct UProceduralFoliageComponent : UActorComponent {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0xd8(0x08)
	float TileOverlap; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct AVolume* SpawningVolume; // 0xe8(0x08)
	struct FGuid ProceduralGuid; // 0xf0(0x10)
};

// Class Foliage.ProceduralFoliageSpawner
// Size: 0x80 (Inherited: 0x30)
struct UProceduralFoliageSpawner : UObject {
	int32_t RandomSeed; // 0x30(0x04)
	float TileSize; // 0x34(0x04)
	int32_t NumUniqueTiles; // 0x38(0x04)
	float MinimumQuadTreeSize; // 0x3c(0x04)
	char pad_40[0x8]; // 0x40(0x08)
	struct TArray<struct FFoliageTypeObject> FoliageTypes; // 0x48(0x10)
	char pad_58[0x28]; // 0x58(0x28)

	void Simulate(int32_t NumSteps); // Function Foliage.ProceduralFoliageSpawner.Simulate // (None) // @ game+0xfffffffec0000000
};

// Class Foliage.ProceduralFoliageTile
// Size: 0x170 (Inherited: 0x30)
struct UProceduralFoliageTile : UObject {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0x30(0x08)
	char pad_38[0xa0]; // 0x38(0xa0)
	struct TArray<struct FProceduralFoliageInstance> InstancesArray; // 0xd8(0x10)
	char pad_E8[0x88]; // 0xe8(0x88)
};

// Class Foliage.ProceduralFoliageVolume
// Size: 0x290 (Inherited: 0x288)
struct AProceduralFoliageVolume : AVolume {
	struct UProceduralFoliageComponent* ProceduralComponent; // 0x288(0x08)
};

