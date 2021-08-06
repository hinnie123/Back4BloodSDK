// WidgetBlueprintGeneratedClass UsePrompts_WBP.UsePrompts_WBP_C
// Size: 0x4b0 (Inherited: 0x450)
struct UUsePrompts_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UVerticalBox* UsePromptVBox; // 0x458(0x08)
	struct TMap<enum class EEquipmentSlot, struct UUsePromptEntry_WBP_C*> SlotToUsePrompt; // 0x460(0x50)

	void UsePromptUpdated(enum class EEquipmentSlot InEquipmentSlot, struct FText InPromptText); // Function UsePrompts_WBP.UsePrompts_WBP_C.UsePromptUpdated // (None) // @ game+0xfffffffec0000000
};

