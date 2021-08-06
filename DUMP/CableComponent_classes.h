// Class CableComponent.CableActor
// Size: 0x258 (Inherited: 0x250)
struct ACableActor : AActor {
	struct UCableComponent* CableComponent; // 0x250(0x08)
};

// Class CableComponent.CableComponent
// Size: 0x5b0 (Inherited: 0x520)
struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0x518(0x01)
	bool bAttachEnd; // 0x519(0x01)
	struct FComponentReference AttachEndTo; // 0x520(0x28)
	struct FName AttachEndToSocketName; // 0x548(0x08)
	struct FVector EndLocation; // 0x550(0x0c)
	float CableLength; // 0x55c(0x04)
	int32_t NumSegments; // 0x560(0x04)
	float SubstepTime; // 0x564(0x04)
	int32_t SolverIterations; // 0x568(0x04)
	bool bEnableStiffness; // 0x56c(0x01)
	bool bEnableCollision; // 0x56d(0x01)
	float CollisionFriction; // 0x570(0x04)
	struct FVector CableForce; // 0x574(0x0c)
	float CableGravityScale; // 0x580(0x04)
	float CableWidth; // 0x584(0x04)
	int32_t NumSides; // 0x588(0x04)
	float TileMaterial; // 0x58c(0x04)
	char pad_590[0x20]; // 0x590(0x20)

	void SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent // (None) // @ game+0xfffffffec0000000
};

