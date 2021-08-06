// BlueprintGeneratedClass Door_Saferoom_Exit_BP.Door_Saferoom_Exit_BP_C
// Size: 0x60c (Inherited: 0x5d0)
struct ADoor_Saferoom_Exit_BP_C : ADoor_StaticMesh_Base_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d0(0x08)
	struct UBoxComponent* BlockMeleeVisibility; // 0x5d8(0x08)
	struct UBoxComponent* ProjectileBlocker; // 0x5e0(0x08)
	struct UBoxComponent* ZombieNavBlocker; // 0x5e8(0x08)
	struct USkeletalMeshComponent* LockMesh; // 0x5f0(0x08)
	struct UStaticMeshComponent* Latch_StaticMesh; // 0x5f8(0x08)
	struct UAkAcousticPortalComponent* AkAcousticPortalWindow; // 0x600(0x08)
	float ConversationDelay; // 0x608(0x04)

	void ReceiveBeginPlay(); // Function Door_Saferoom_Exit_BP.Door_Saferoom_Exit_BP_C.ReceiveBeginPlay // (None) // @ game+0xfffffffec0000000
};

