// BlueprintGeneratedClass Wild_Affinity_Currency_Mod.Wild_Affinity_Currency_Mod_C
// Size: 0xa9 (Inherited: 0x88)
struct UWild_Affinity_Currency_Mod_C : UGameplayMod {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x88(0x08)
	int32_t CurrencyGrantedMin; // 0x90(0x04)
	int32_t CurrencyGrantedMax; // 0x94(0x04)
	struct TArray<struct AGobiCharacter*> Characters; // 0x98(0x10)
	bool EventRegistered; // 0xa8(0x01)

	void K2_ApplyShared(struct FGameplayModContext ModContext, enum class EModPhase ModPhase, struct TArray<struct AGobiCharacter*> AffectedCharacters); // Function Wild_Affinity_Currency_Mod.Wild_Affinity_Currency_Mod_C.K2_ApplyShared // (None) // @ game+0xfffffffec0000000
};

