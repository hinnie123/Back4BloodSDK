// WidgetBlueprintGeneratedClass MatchmakingState_WBP.MatchmakingState_WBP_C
// Size: 0x4e0 (Inherited: 0x4a0)
struct UMatchmakingState_WBP_C : UMatchmakingStateUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a0(0x08)
	struct UVerticalBox* ActMapPanel; // 0x4a8(0x08)
	struct UTextBlock* ActName; // 0x4b0(0x08)
	struct UTextBlock* DifficultyHeader; // 0x4b8(0x08)
	struct UHorizontalBox* DifficultyIcons; // 0x4c0(0x08)
	struct UTextBlock* MapName; // 0x4c8(0x08)
	struct UTextBlock* ModeName; // 0x4d0(0x08)
	struct UTextBlock* MultiActName; // 0x4d8(0x08)

	void SetDifficultyIcon(struct UImage* ImageWidget, enum class EMissionDifficulty Difficulty); // Function MatchmakingState_WBP.MatchmakingState_WBP_C.SetDifficultyIcon // (None) // @ game+0xfffffffec0000000
};

