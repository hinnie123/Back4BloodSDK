// BlueprintGeneratedClass Test_BlueprintGameplayMod_Instanced_Mod.Test_BlueprintGameplayMod_Instanced_Mod_C
// Size: 0xb0 (Inherited: 0x88)
struct UTest_BlueprintGameplayMod_Instanced_Mod_C : UGameplayMod {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x88(0x08)
	int32_t Count; // 0x90(0x04)
	int32_t SelectCountPerEffect; // 0x94(0x04)
	struct TArray<struct UGameplayEffectsComponent*> GameplayEffectsComponents; // 0x98(0x10)
	struct UGameplayEffect* GameplayEffect; // 0xa8(0x08)

	void OnSelectedItemChanged(struct AItem* OldItem, struct AItem* NewItem); // Function Test_BlueprintGameplayMod_Instanced_Mod.Test_BlueprintGameplayMod_Instanced_Mod_C.OnSelectedItemChanged // (None) // @ game+0xfffffffec0000000
};

