// WidgetBlueprintGeneratedClass MatchmakingDevOptions_WBP.MatchmakingDevOptions_WBP_C
// Size: 0x538 (Inherited: 0x488)
struct UMatchmakingDevOptions_WBP_C : UMainMenuDevOptionsUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UCheckBox* Coop8PMapsCheckbox; // 0x490(0x08)
	struct UCheckBox* CoopMapsCheckbox; // 0x498(0x08)
	struct UDevAtuinEnvironment_WBP_C* DevAtuinEnvironment_WBP; // 0x4a0(0x08)
	struct UCheckBox* DevMapsCheckbox; // 0x4a8(0x08)
	struct UDevMatchmakingBucket_WBP_C* DevMatchmakingBucket; // 0x4b0(0x08)
	struct UMainMenuDifficultyOptions_WBP_C* DifficultyOptions; // 0x4b8(0x08)
	struct UCheckBox* HubMapsCheckbox; // 0x4c0(0x08)
	struct UComboBoxString* MapSelection; // 0x4c8(0x08)
	struct UTextBlock* MatchmakingInfoText; // 0x4d0(0x08)
	struct UTextButton_WBP_C* QueueCoopQuickplayButton; // 0x4d8(0x08)
	struct UTextButton_WBP_C* QueueCoopRunButton; // 0x4e0(0x08)
	struct UTextButton_WBP_C* QueueOfflineButton; // 0x4e8(0x08)
	struct UTextButton_WBP_C* QueueSinglePlayerButton; // 0x4f0(0x08)
	struct UTextButton_WBP_C* QueueSurvivorCoop8PButton; // 0x4f8(0x08)
	struct UTextButton_WBP_C* QueueTeamSwapPvPButton; // 0x500(0x08)
	struct UCheckBox* SinglePlayerMapsCheckbox; // 0x508(0x08)
	struct UCheckBox* TutorialMapsCheckbox; // 0x510(0x08)
	struct UCheckBox* UserMapsCheckbox; // 0x518(0x08)
	struct UCheckBox* VersusMapsCheckbox; // 0x520(0x08)
	struct FMulticastInlineDelegate OnStartMatchmaking; // 0x528(0x10)

	void GetFocusTarget(struct UWidget* FocusTarget); // Function MatchmakingDevOptions_WBP.MatchmakingDevOptions_WBP_C.GetFocusTarget // (None) // @ game+0xfffffffec0000000
};

