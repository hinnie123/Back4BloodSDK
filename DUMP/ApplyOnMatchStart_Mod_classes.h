// BlueprintGeneratedClass ApplyOnMatchStart_Mod.ApplyOnMatchStart_Mod_C
// Size: 0xb2 (Inherited: 0x88)
struct UApplyOnMatchStart_Mod_C : UGameplayMod {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x88(0x08)
	struct TArray<struct AGobiCharacter*> Characters; // 0x90(0x10)
	struct TArray<struct UGameplayEffect*> EffectsToApply; // 0xa0(0x10)
	bool EventsBound; // 0xb0(0x01)
	enum class EGameplayCardAffinity LinkedAffinity; // 0xb1(0x01)

	void K2_ApplyShared(struct FGameplayModContext ModContext, enum class EModPhase ModPhase, struct TArray<struct AGobiCharacter*> AffectedCharacters); // Function ApplyOnMatchStart_Mod.ApplyOnMatchStart_Mod_C.K2_ApplyShared // (None) // @ game+0xfffffffec0000000
};

