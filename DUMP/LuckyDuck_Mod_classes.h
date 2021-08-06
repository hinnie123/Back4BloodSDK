// BlueprintGeneratedClass LuckyDuck_Mod.LuckyDuck_Mod_C
// Size: 0xa8 (Inherited: 0x88)
struct ULuckyDuck_Mod_C : UGameplayMod {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x88(0x08)
	struct TArray<struct AGobiCharacter*> Characters; // 0x90(0x10)
	float LuckyDuckScale; // 0xa0(0x04)
	float LuckyDuckChance; // 0xa4(0x04)

	void OnAdjustCurrency(int32_t Delta, struct FString Cause); // Function LuckyDuck_Mod.LuckyDuck_Mod_C.OnAdjustCurrency // (None) // @ game+0xfffffffec0000000
};

