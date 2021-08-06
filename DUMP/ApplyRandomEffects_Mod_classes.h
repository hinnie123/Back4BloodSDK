// BlueprintGeneratedClass ApplyRandomEffects_Mod.ApplyRandomEffects_Mod_C
// Size: 0xb9 (Inherited: 0x88)
struct UApplyRandomEffects_Mod_C : UGameplayMod {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x88(0x08)
	struct TArray<struct UGameplayEffect*> ValidGameplayEffects; // 0x90(0x10)
	int32_t MinEffectCount; // 0xa0(0x04)
	int32_t MaxEffectCount; // 0xa4(0x04)
	struct TArray<struct AGobiCharacter*> AffectedCharacters; // 0xa8(0x10)
	bool bDebug; // 0xb8(0x01)

	void ApplyEffects(struct AActor* TargetActor); // Function ApplyRandomEffects_Mod.ApplyRandomEffects_Mod_C.ApplyEffects // (None) // @ game+0xfffffffec0000000
};

