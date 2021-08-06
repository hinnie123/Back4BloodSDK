// Class ChaosSolverEngine.ChaosDebugDrawComponent
// Size: 0xe0 (Inherited: 0xd8)
struct UChaosDebugDrawComponent : UActorComponent {
	char pad_D8[0x8]; // 0xd8(0x08)
};

// Class ChaosSolverEngine.ChaosEventListenerComponent
// Size: 0xe0 (Inherited: 0xd8)
struct UChaosEventListenerComponent : UActorComponent {
	char pad_D8[0x8]; // 0xd8(0x08)
};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// Size: 0x298 (Inherited: 0xe0)
struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent {
	char pad_E0[0x110]; // 0xe0(0x110)
	struct TMap<struct UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations; // 0x1f0(0x50)
	struct TMap<struct UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x240(0x50)
	char pad_290[0x8]; // 0x290(0x08)
};

// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// Size: 0x30 (Inherited: 0x30)
struct UChaosNotifyHandlerInterface : UInterface {
};

// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UChaosSolverEngineBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FHitResult ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo PhysicsCollision); // Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult // (None) // @ game+0xfffffffec0000000
};

// Class ChaosSolverEngine.ChaosSolver
// Size: 0x30 (Inherited: 0x30)
struct UChaosSolver : UObject {
};

// Class ChaosSolverEngine.ChaosSolverActor
// Size: 0x2d8 (Inherited: 0x250)
struct AChaosSolverActor : AActor {
	float TimeStepMultiplier; // 0x250(0x04)
	int32_t CollisionIterations; // 0x254(0x04)
	int32_t PushOutIterations; // 0x258(0x04)
	int32_t PushOutPairIterations; // 0x25c(0x04)
	float ClusterConnectionFactor; // 0x260(0x04)
	enum class EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x264(0x01)
	bool DoGenerateCollisionData; // 0x265(0x01)
	char pad_266[0x2]; // 0x266(0x02)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x268(0x10)
	bool DoGenerateBreakingData; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x27c(0x10)
	bool DoGenerateTrailingData; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x290(0x10)
	bool bHasFloor; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	float FloorHeight; // 0x2a4(0x04)
	float MassScale; // 0x2a8(0x04)
	bool bGenerateContactGraph; // 0x2ac(0x01)
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x2ad(0x03)
	struct UBillboardComponent* SpriteComponent; // 0x2b0(0x08)
	char pad_2B8[0x18]; // 0x2b8(0x18)
	struct UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x2d0(0x08)

	void SetSolverActive(bool bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive // (None) // @ game+0xfffffffec0000000
};

// Class ChaosSolverEngine.ChaosSolverSettings
// Size: 0x60 (Inherited: 0x40)
struct UChaosSolverSettings : UDeveloperSettings {
	char pad_40[0x8]; // 0x40(0x08)
	struct FSoftClassPath DefaultChaosSolverActorClass; // 0x48(0x18)
};

