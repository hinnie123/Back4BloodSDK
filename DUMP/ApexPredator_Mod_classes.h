// BlueprintGeneratedClass ApexPredator_Mod.ApexPredator_Mod_C
// Size: 0xc0 (Inherited: 0x88)
struct UApexPredator_Mod_C : UGameplayMod {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x88(0x08)
	struct TArray<struct APlayerSlot*> CardOwners; // 0x90(0x10)
	struct TArray<struct AGobiCharacter*> Characters; // 0xa0(0x10)
	struct TArray<struct UGameplayEffect*> GameplayEffects; // 0xb0(0x10)

	void OnDeath(struct UHealthComponent* HealthComponent); // Function ApexPredator_Mod.ApexPredator_Mod_C.OnDeath // (None) // @ game+0xfffffffec0000000
};

