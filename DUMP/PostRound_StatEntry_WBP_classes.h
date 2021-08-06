// WidgetBlueprintGeneratedClass PostRound_StatEntry_WBP.PostRound_StatEntry_WBP_C
// Size: 0x498 (Inherited: 0x450)
struct UPostRound_StatEntry_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UImage* BG; // 0x458(0x08)
	struct UVerticalBox* PlayerStatList; // 0x460(0x08)
	struct UImage* Portrait; // 0x468(0x08)
	struct UImage* SelfPointer; // 0x470(0x08)
	struct UTextBlock* StatName; // 0x478(0x08)
	struct UVerticalBox* StatsPanel; // 0x480(0x08)
	struct UTextBlock* TopPlayerName; // 0x488(0x08)
	struct UTextBlock* TopPlayerValue; // 0x490(0x08)

	void SetStat(struct FPostRoundStat InStat); // Function PostRound_StatEntry_WBP.PostRound_StatEntry_WBP_C.SetStat // (None) // @ game+0xfffffffec0000000
};

