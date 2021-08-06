// BlueprintGeneratedClass GasCan_BP.GasCan_BP_C
// Size: 0x4a2 (Inherited: 0x469)
struct AGasCan_BP_C : AItemPickup_BP_C {
	char pad_469[0x7]; // 0x469(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	struct UThreatComponent* Threat; // 0x478(0x08)
	struct UItemAkBankComponent* ItemAkBank; // 0x480(0x08)
	struct UGameplayEffectsComponent* GameplayEffects; // 0x488(0x08)
	struct UExplosionComponent* explosion; // 0x490(0x08)
	struct UHealthComponent* Health; // 0x498(0x08)
	bool AudioRolling; // 0x4a0(0x01)
	bool BounceAudioCooldown; // 0x4a1(0x01)

	void PostShootExplosiveDialogue(); // Function GasCan_BP.GasCan_BP_C.PostShootExplosiveDialogue // (None) // @ game+0xfffffffec0000000
};

