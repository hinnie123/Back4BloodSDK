// WidgetBlueprintGeneratedClass ChallengeDuration_WBP.ChallengeDuration_WBP_C
// Size: 0x489 (Inherited: 0x450)
struct UChallengeDuration_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct URichTextBlock* TimeText; // 0x458(0x08)
	struct FDateTime ChallengeEndDate; // 0x460(0x08)
	struct FTimerHandle TimerHandle; // 0x468(0x08)
	bool bIsRunning; // 0x470(0x01)
	char pad_471[0x7]; // 0x471(0x07)
	struct FMulticastInlineDelegate OnChallengeSetChanged; // 0x478(0x10)
	bool bIsActiveSet; // 0x488(0x01)

	void CheckForNewChallengeSet(); // Function ChallengeDuration_WBP.ChallengeDuration_WBP_C.CheckForNewChallengeSet // (None) // @ game+0xfffffffec0000000
};

