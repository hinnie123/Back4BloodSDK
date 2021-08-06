// BlueprintGeneratedClass Door_Locked_BP.Door_Locked_BP_C
// Size: 0x600 (Inherited: 0x5d0)
struct ADoor_Locked_BP_C : ADoor_StaticMesh_Base_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d0(0x08)
	struct UStaticMeshComponent* Deadbolt; // 0x5d8(0x08)
	struct UStaticMeshComponent* LockBack; // 0x5e0(0x08)
	struct UStaticMeshComponent* LockFront; // 0x5e8(0x08)
	struct UNotificationBoxComponent* NotificationBox; // 0x5f0(0x08)
	struct AActor* DamagingActor; // 0x5f8(0x08)

	void ReceiveTick(float DeltaSeconds); // Function Door_Locked_BP.Door_Locked_BP_C.ReceiveTick // (None) // @ game+0xfffffffec0000000
};

