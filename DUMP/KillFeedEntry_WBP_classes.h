// WidgetBlueprintGeneratedClass KillFeedEntry_WBP.KillFeedEntry_WBP_C
// Size: 0x4d1 (Inherited: 0x450)
struct UKillFeedEntry_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UWidgetAnimation* FadeOut; // 0x458(0x08)
	struct UTextBlock* MessageText; // 0x460(0x08)
	struct FSlateColor PositiveColor; // 0x468(0x30)
	struct FSlateColor NegativeColor; // 0x498(0x30)
	float Lifetime; // 0x4c8(0x04)
	float RemainingTime; // 0x4cc(0x04)
	bool bNeedsTick; // 0x4d0(0x01)

	void InitMessage(struct FText Message, bool bIsNegative); // Function KillFeedEntry_WBP.KillFeedEntry_WBP_C.InitMessage // (None) // @ game+0xfffffffec0000000
};

