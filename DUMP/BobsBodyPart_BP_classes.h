// BlueprintGeneratedClass BobsBodyPart_BP.BobsBodyPart_BP_C
// Size: 0x298 (Inherited: 0x250)
struct ABobsBodyPart_BP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UHighlightComponent* Highlight; // 0x258(0x08)
	struct UBoxComponent* UsableBox; // 0x260(0x08)
	struct UBoxComponent* TurnOffPlayerDraw; // 0x268(0x08)
	struct UWaypointSpawnerComponent* WaypointSpawner; // 0x270(0x08)
	struct UUsableComponent* Usable; // 0x278(0x08)
	struct UStaticMeshComponent* BodyPart; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct AMiniNest_BossSpawner_BP_C* MiniNest; // 0x290(0x08)

	void CopBodyCreated(struct ABobsBodyPart_BP_C* CopBody); // Function BobsBodyPart_BP.BobsBodyPart_BP_C.CopBodyCreated // (None) // @ game+0xfffffffec0000000
};

