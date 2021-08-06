// BlueprintGeneratedClass ApplyOnSaferoomExit_Mod.ApplyOnSaferoomExit_Mod_C
// Size: 0xb1 (Inherited: 0x88)
struct UApplyOnSaferoomExit_Mod_C : UGameplayMod {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x88(0x08)
	struct TArray<struct AGobiCharacter*> Characters; // 0x90(0x10)
	struct TArray<struct UGameplayEffect*> EffectsToApply; // 0xa0(0x10)
	bool EventsBound; // 0xb0(0x01)

	void OnSafeRoomStateChange(enum class EPartySafeRoomState OldPartySafeRoomState, enum class EPartySafeRoomState NewPartySafeRoomState); // Function ApplyOnSaferoomExit_Mod.ApplyOnSaferoomExit_Mod_C.OnSafeRoomStateChange // (None) // @ game+0xfffffffec0000000
};

