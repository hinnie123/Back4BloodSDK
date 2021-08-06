// BlueprintGeneratedClass SilverBullet_Mod.SilverBullet_Mod_C
// Size: 0xa4 (Inherited: 0x88)
struct USilverBullet_Mod_C : UGameplayMod {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x88(0x08)
	struct TArray<struct APlayerSlot*> CardOwners; // 0x90(0x10)
	int32_t CurrencyAdjustment; // 0xa0(0x04)

	void OnDeath(struct UHealthComponent* HealthComponent); // Function SilverBullet_Mod.SilverBullet_Mod_C.OnDeath // (None) // @ game+0xfffffffec0000000
};

