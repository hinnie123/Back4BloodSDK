// BlueprintGeneratedClass Portfolio_Mod.Portfolio_Mod_C
// Size: 0xc0 (Inherited: 0x88)
struct UPortfolio_Mod_C : UGameplayMod {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x88(0x08)
	int32_t MaxStacks; // 0x90(0x04)
	int32_t StackCount; // 0x94(0x04)
	int32_t BonusCurrency; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct TArray<struct AGobiCharacter*> Characters; // 0xa0(0x10)
	struct TArray<struct FDataTableRowHandle> CurrencyPickupItemRows; // 0xb0(0x10)

	void K2_ApplyInstanced(struct FGameplayModContext ModContext, enum class EModPhase ModPhase, struct TArray<struct AGobiCharacter*> AffectedCharacters); // Function Portfolio_Mod.Portfolio_Mod_C.K2_ApplyInstanced // (None) // @ game+0xfffffffec0000000
};

