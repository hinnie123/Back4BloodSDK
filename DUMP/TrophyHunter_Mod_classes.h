// BlueprintGeneratedClass TrophyHunter_Mod.TrophyHunter_Mod_C
// Size: 0xe8 (Inherited: 0x88)
struct UTrophyHunter_Mod_C : UGameplayMod {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x88(0x08)
	int32_t CurrencyValue; // 0x90(0x04)
	int32_t MaxPayoutsPerLevel; // 0x94(0x04)
	struct TMap<struct APlayerSlot*, int32_t> CardOwnerToRewardCount; // 0x98(0x50)

	void On Death(struct UHealthComponent* HealthComponent); // Function TrophyHunter_Mod.TrophyHunter_Mod_C.On Death // (None) // @ game+0xfffffffec0000000
};

