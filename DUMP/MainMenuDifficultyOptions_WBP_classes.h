// WidgetBlueprintGeneratedClass MainMenuDifficultyOptions_WBP.MainMenuDifficultyOptions_WBP_C
// Size: 0x4b8 (Inherited: 0x450)
struct UMainMenuDifficultyOptions_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UImage* BG; // 0x458(0x08)
	struct UGenericComboBox_C* DifficultyComboBox; // 0x460(0x08)
	struct TMap<enum class EMissionDifficulty, struct FText> DifficultyEnumToText; // 0x468(0x50)

	void GetFocusTarget(struct UWidget* FocusTarget); // Function MainMenuDifficultyOptions_WBP.MainMenuDifficultyOptions_WBP_C.GetFocusTarget // (None) // @ game+0xfffffffec0000000
};

