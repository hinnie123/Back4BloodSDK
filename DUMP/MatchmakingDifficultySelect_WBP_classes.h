// WidgetBlueprintGeneratedClass MatchmakingDifficultySelect_WBP.MatchmakingDifficultySelect_WBP_C
// Size: 0x4b0 (Inherited: 0x468)
struct UMatchmakingDifficultySelect_WBP_C : UMatchmakingDifficultyUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x468(0x08)
	struct UVerticalBox* ButtonsPanel; // 0x470(0x08)
	enum class EMissionDifficulty SelectedDifficulty; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct FMulticastInlineDelegate OnDifficultySelected; // 0x480(0x10)
	struct FMulticastInlineDelegate OnDifficultyToggled; // 0x490(0x10)
	struct TArray<enum class EMissionDifficulty> DifficultiesToShow; // 0x4a0(0x10)

	void ToggleDifficulty(enum class EMissionDifficulty InDifficulty, bool bIsSelected); // Function MatchmakingDifficultySelect_WBP.MatchmakingDifficultySelect_WBP_C.ToggleDifficulty // (None) // @ game+0xfffffffec0000000
};

