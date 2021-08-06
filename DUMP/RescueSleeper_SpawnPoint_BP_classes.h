// BlueprintGeneratedClass RescueSleeper_SpawnPoint_BP.RescueSleeper_SpawnPoint_BP_C
// Size: 0x341 (Inherited: 0x2e0)
struct ARescueSleeper_SpawnPoint_BP_C : ARescuePlayerStart {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UAkComponent* Ak; // 0x2e8(0x08)
	struct UBoxComponent* UsableTrigger; // 0x2f0(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x2f8(0x08)
	struct UGameplayEffectsComponent* GameplayEffects; // 0x300(0x08)
	struct UItemAudioComponent* ItemAudio; // 0x308(0x08)
	struct USleeperPodUsableComponent* SleeperPodUsable; // 0x310(0x08)
	bool bTeleportToPlayerStartOnRescue; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct FGameplayTagContainer BeingRevivedGameplayTag; // 0x320(0x20)
	bool SnapToWallLocation; // 0x340(0x01)

	void RemoveBeingRevivedTag(); // Function RescueSleeper_SpawnPoint_BP.RescueSleeper_SpawnPoint_BP_C.RemoveBeingRevivedTag // (None) // @ game+0xfffffffec0000000
};

