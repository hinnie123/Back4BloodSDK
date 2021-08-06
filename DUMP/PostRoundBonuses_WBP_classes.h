// WidgetBlueprintGeneratedClass PostRoundBonuses_WBP.PostRoundBonuses_WBP_C
// Size: 0x488 (Inherited: 0x450)
struct UPostRoundBonuses_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UTextBlock* NameText; // 0x458(0x08)
	struct UVerticalBox* RootPanel; // 0x460(0x08)
	struct UTextBlock* TotalValueText; // 0x468(0x08)
	struct TArray<struct FPostRoundSummaryStatValue> Bonuses; // 0x470(0x10)
	struct UTweenContainer* TweenContainer; // 0x480(0x08)

	void StartAnimation(); // Function PostRoundBonuses_WBP.PostRoundBonuses_WBP_C.StartAnimation // (None) // @ game+0xfffffffec0000000
};

