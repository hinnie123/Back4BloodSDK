// Class GeometryCollectionEngine.ChaosDestructionListener
// Size: 0x450 (Inherited: 0x220)
struct UChaosDestructionListener : USceneComponent {
	char bIsCollisionEventListeningEnabled : 1; // 0x220(0x01)
	char bIsBreakingEventListeningEnabled : 1; // 0x220(0x01)
	char bIsTrailingEventListeningEnabled : 1; // 0x220(0x01)
	char pad_220_3 : 5; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	struct FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x224(0x18)
	struct FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x23c(0x18)
	struct FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x254(0x18)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct TSet<struct AChaosSolverActor*> ChaosSolverActors; // 0x270(0x50)
	struct TSet<struct AGeometryCollectionActor*> GeometryCollectionActors; // 0x2c0(0x50)
	struct FMulticastInlineDelegate OnCollisionEvents; // 0x310(0x10)
	struct FMulticastInlineDelegate OnBreakingEvents; // 0x320(0x10)
	struct FMulticastInlineDelegate OnTrailingEvents; // 0x330(0x10)
	char pad_340[0x110]; // 0x340(0x110)

	void SortTrailingEvents(struct TArray<struct FChaosTrailingEventData> TrailingEvents, enum class EChaosTrailingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents // (None) // @ game+0xfffffffec0000000
};

// Class GeometryCollectionEngine.GeometryCollectionActor
// Size: 0x260 (Inherited: 0x250)
struct AGeometryCollectionActor : AActor {
	struct UGeometryCollectionComponent* GeometryCollectionComponent; // 0x250(0x08)
	struct UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x258(0x08)

	bool RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult OutHit); // Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle // (None) // @ game+0xfffffffec0000000
};

// Class GeometryCollectionEngine.GeometryCollectionCache
// Size: 0x58 (Inherited: 0x30)
struct UGeometryCollectionCache : UObject {
	struct FRecordedTransformTrack RecordedData; // 0x30(0x10)
	struct UGeometryCollection* SupportedCollection; // 0x40(0x08)
	struct FGuid CompatibleCollectionState; // 0x48(0x10)
};

// Class GeometryCollectionEngine.GeometryCollectionComponent
// Size: 0x940 (Inherited: 0x520)
struct UGeometryCollectionComponent : UMeshComponent {
	struct AChaosSolverActor* ChaosSolverActor; // 0x520(0x08)
	char pad_528[0xe0]; // 0x528(0xe0)
	struct UGeometryCollection* RestCollection; // 0x608(0x08)
	struct TArray<struct AFieldSystemActor*> InitializationFields; // 0x610(0x10)
	bool Simulating; // 0x620(0x01)
	char pad_621[0x7]; // 0x621(0x07)
	enum class EObjectStateTypeEnum ObjectType; // 0x628(0x01)
	bool EnableClustering; // 0x629(0x01)
	char pad_62A[0x2]; // 0x62a(0x02)
	int32_t ClusterGroupIndex; // 0x62c(0x04)
	int32_t MaxClusterLevel; // 0x630(0x04)
	char pad_634[0x4]; // 0x634(0x04)
	struct TArray<float> DamageThreshold; // 0x638(0x10)
	enum class EClusterConnectionTypeEnum ClusterConnectionType; // 0x648(0x01)
	char pad_649[0x3]; // 0x649(0x03)
	int32_t CollisionGroup; // 0x64c(0x04)
	float CollisionSampleFraction; // 0x650(0x04)
	float LinearEtherDrag; // 0x654(0x04)
	float AngularEtherDrag; // 0x658(0x04)
	char pad_65C[0x4]; // 0x65c(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x660(0x08)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x668(0x01)
	char pad_669[0x3]; // 0x669(0x03)
	struct FVector InitialLinearVelocity; // 0x66c(0x0c)
	struct FVector InitialAngularVelocity; // 0x678(0x0c)
	char pad_684[0x4]; // 0x684(0x04)
	struct FGeomComponentCacheParameters CacheParameters; // 0x688(0x50)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x6d8(0x10)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x6e8(0x10)
	char pad_6F8[0x18]; // 0x6f8(0x18)
	struct FMulticastInlineDelegate OnChaosBreakEvent; // 0x710(0x10)
	float DesiredCacheTime; // 0x720(0x04)
	bool CachePlayback; // 0x724(0x01)
	char pad_725[0x3]; // 0x725(0x03)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x728(0x10)
	bool bNotifyBreaks; // 0x738(0x01)
	bool bNotifyCollisions; // 0x739(0x01)
	char pad_73A[0x1de]; // 0x73a(0x1de)
	struct UBodySetup* DummyBodySetup; // 0x918(0x08)
	char pad_920[0x20]; // 0x920(0x20)

	void SetNotifyBreaks(bool bNewNotifyBreaks); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks // (None) // @ game+0xfffffffec0000000
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// Size: 0x338 (Inherited: 0x250)
struct AGeometryCollectionDebugDrawActor : AActor {
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x258(0x18)
	bool bDebugDrawWholeCollection; // 0x270(0x01)
	bool bDebugDrawHierarchy; // 0x271(0x01)
	bool bDebugDrawClustering; // 0x272(0x01)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x273(0x01)
	bool bShowRigidBodyId; // 0x274(0x01)
	bool bShowRigidBodyCollision; // 0x275(0x01)
	bool bCollisionAtOrigin; // 0x276(0x01)
	bool bShowRigidBodyTransform; // 0x277(0x01)
	bool bShowRigidBodyInertia; // 0x278(0x01)
	bool bShowRigidBodyVelocity; // 0x279(0x01)
	bool bShowRigidBodyForce; // 0x27a(0x01)
	bool bShowRigidBodyInfos; // 0x27b(0x01)
	bool bShowTransformIndex; // 0x27c(0x01)
	bool bShowTransform; // 0x27d(0x01)
	bool bShowParent; // 0x27e(0x01)
	bool bShowLevel; // 0x27f(0x01)
	bool bShowConnectivityEdges; // 0x280(0x01)
	bool bShowGeometryIndex; // 0x281(0x01)
	bool bShowGeometryTransform; // 0x282(0x01)
	bool bShowBoundingBox; // 0x283(0x01)
	bool bShowFaces; // 0x284(0x01)
	bool bShowFaceIndices; // 0x285(0x01)
	bool bShowFaceNormals; // 0x286(0x01)
	bool bShowSingleFace; // 0x287(0x01)
	int32_t SingleFaceIndex; // 0x288(0x04)
	bool bShowVertices; // 0x28c(0x01)
	bool bShowVertexIndices; // 0x28d(0x01)
	bool bShowVertexNormals; // 0x28e(0x01)
	bool bUseActiveVisualization; // 0x28f(0x01)
	float PointThickness; // 0x290(0x04)
	float LineThickness; // 0x294(0x04)
	bool bTextShadow; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	float TextScale; // 0x29c(0x04)
	float NormalScale; // 0x2a0(0x04)
	float AxisScale; // 0x2a4(0x04)
	float ArrowScale; // 0x2a8(0x04)
	struct FColor RigidBodyIdColor; // 0x2ac(0x04)
	float RigidBodyTransformScale; // 0x2b0(0x04)
	struct FColor RigidBodyCollisionColor; // 0x2b4(0x04)
	struct FColor RigidBodyInertiaColor; // 0x2b8(0x04)
	struct FColor RigidBodyVelocityColor; // 0x2bc(0x04)
	struct FColor RigidBodyForceColor; // 0x2c0(0x04)
	struct FColor RigidBodyInfoColor; // 0x2c4(0x04)
	struct FColor TransformIndexColor; // 0x2c8(0x04)
	float TransformScale; // 0x2cc(0x04)
	struct FColor LevelColor; // 0x2d0(0x04)
	struct FColor ParentColor; // 0x2d4(0x04)
	float ConnectivityEdgeThickness; // 0x2d8(0x04)
	struct FColor GeometryIndexColor; // 0x2dc(0x04)
	float GeometryTransformScale; // 0x2e0(0x04)
	struct FColor BoundingBoxColor; // 0x2e4(0x04)
	struct FColor FaceColor; // 0x2e8(0x04)
	struct FColor FaceIndexColor; // 0x2ec(0x04)
	struct FColor FaceNormalColor; // 0x2f0(0x04)
	struct FColor SingleFaceColor; // 0x2f4(0x04)
	struct FColor VertexColor; // 0x2f8(0x04)
	struct FColor VertexIndexColor; // 0x2fc(0x04)
	struct FColor VertexNormalColor; // 0x300(0x04)
	char pad_304[0x4]; // 0x304(0x04)
	struct UBillboardComponent* SpriteComponent; // 0x308(0x08)
	char pad_310[0x28]; // 0x310(0x28)
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// Size: 0xf0 (Inherited: 0xd8)
struct UGeometryCollectionDebugDrawComponent : UActorComponent {
	struct AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xd8(0x08)
	struct AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xe0(0x08)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class GeometryCollectionEngine.GeometryCollection
// Size: 0xd8 (Inherited: 0x30)
struct UGeometryCollection : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x38(0x10)
	enum class ECollisionTypeEnum CollisionType; // 0x48(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	int32_t MinLevelSetResolution; // 0x4c(0x04)
	int32_t MaxLevelSetResolution; // 0x50(0x04)
	int32_t MinClusterLevelSetResolution; // 0x54(0x04)
	int32_t MaxClusterLevelSetResolution; // 0x58(0x04)
	float CollisionObjectReductionPercentage; // 0x5c(0x04)
	bool bMassAsDensity; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float Mass; // 0x64(0x04)
	float MinimumMassClamp; // 0x68(0x04)
	float CollisionParticlesFraction; // 0x6c(0x04)
	int32_t MaximumCollisionParticles; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0x78(0x10)
	bool EnableRemovePiecesOnFracture; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct TArray<struct UMaterialInterface*> RemoveOnFractureMaterials; // 0x90(0x10)
	struct FGuid PersistentGuid; // 0xa0(0x10)
	struct FGuid StateGuid; // 0xb0(0x10)
	int32_t BoneSelectedMaterialIndex; // 0xc0(0x04)
	char pad_C4[0x14]; // 0xc4(0x14)
};

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// Size: 0x2f0 (Inherited: 0x250)
struct AGeometryCollectionRenderLevelSetActor : AActor {
	struct UVolumeTexture* TargetVolumeTexture; // 0x250(0x08)
	struct UMaterial* RayMarchMaterial; // 0x258(0x08)
	float SurfaceTolerance; // 0x260(0x04)
	float Isovalue; // 0x264(0x04)
	bool Enabled; // 0x268(0x01)
	bool RenderVolumeBoundingBox; // 0x269(0x01)
	char pad_26A[0x86]; // 0x26a(0x86)
};

// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
// Size: 0x160 (Inherited: 0xd8)
struct USkeletalMeshSimulationComponent : UActorComponent {
	char pad_D8[0x8]; // 0xd8(0x08)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0xe0(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0xe8(0x08)
	struct UPhysicsAsset* OverridePhysicsAsset; // 0xf0(0x08)
	bool bSimulating; // 0xf8(0x01)
	bool bNotifyCollisions; // 0xf9(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0xfa(0x01)
	char pad_FB[0x1]; // 0xfb(0x01)
	float Density; // 0xfc(0x04)
	float MinMass; // 0x100(0x04)
	float MaxMass; // 0x104(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	float ImplicitShapeParticlesPerUnitArea; // 0x10c(0x04)
	int32_t ImplicitShapeMinNumParticles; // 0x110(0x04)
	int32_t ImplicitShapeMaxNumParticles; // 0x114(0x04)
	int32_t MinLevelSetResolution; // 0x118(0x04)
	int32_t MaxLevelSetResolution; // 0x11c(0x04)
	int32_t CollisionGroup; // 0x120(0x04)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	struct FVector InitialLinearVelocity; // 0x128(0x0c)
	struct FVector InitialAngularVelocity; // 0x134(0x0c)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x140(0x10)
	char pad_150[0x10]; // 0x150(0x10)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo CollisionInfo); // Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision // (None) // @ game+0xfffffffec0000000
};

// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// Size: 0x160 (Inherited: 0xd8)
struct UStaticMeshSimulationComponent : UActorComponent {
	char pad_D8[0x8]; // 0xd8(0x08)
	bool Simulating; // 0xe0(0x01)
	bool bNotifyCollisions; // 0xe1(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0xe2(0x01)
	char pad_E3[0x1]; // 0xe3(0x01)
	float Mass; // 0xe4(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0xe8(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0xe9(0x01)
	char pad_EA[0x2]; // 0xea(0x02)
	int32_t MinLevelSetResolution; // 0xec(0x04)
	int32_t MaxLevelSetResolution; // 0xf0(0x04)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	struct FVector InitialLinearVelocity; // 0xf8(0x0c)
	struct FVector InitialAngularVelocity; // 0x104(0x0c)
	float DamageThreshold; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x118(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0x120(0x08)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x128(0x10)
	char pad_138[0x10]; // 0x138(0x10)
	struct TArray<struct UPrimitiveComponent*> SimulatedComponents; // 0x148(0x10)
	char pad_158[0x8]; // 0x158(0x08)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo CollisionInfo); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision // (None) // @ game+0xfffffffec0000000
};

