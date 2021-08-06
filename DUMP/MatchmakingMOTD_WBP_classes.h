// WidgetBlueprintGeneratedClass MatchmakingMOTD_WBP.MatchmakingMOTD_WBP_C
// Size: 0x580 (Inherited: 0x468)
struct UMatchmakingMOTD_WBP_C : UMatchmakingMOTDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x468(0x08)
	struct UWidgetAnimation* InfoSwap; // 0x470(0x08)
	struct UImage* BG; // 0x478(0x08)
	struct UImage* BGHover_2; // 0x480(0x08)
	struct UTextBlock* DescText; // 0x488(0x08)
	struct UImage* Frame; // 0x490(0x08)
	struct UImage* gradient; // 0x498(0x08)
	struct UImage* GradientFill; // 0x4a0(0x08)
	struct UOverlay* HoverContainer; // 0x4a8(0x08)
	struct UHorizontalBox* PipPanel; // 0x4b0(0x08)
	struct UImage* TabImage; // 0x4b8(0x08)
	struct UTextBlock* TitleText; // 0x4c0(0x08)
	int32_t NextTab; // 0x4c8(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct FTimerHandle TimerHandle; // 0x4d0(0x08)
	int32_t CurrentTab; // 0x4d8(0x04)
	char pad_4DC[0x4]; // 0x4dc(0x04)
	struct FSlateColor PressedColor; // 0x4e0(0x30)
	struct FSlateColor HoveredColor; // 0x510(0x30)
	struct FSlateColor NormalColor; // 0x540(0x30)
	bool bIsHighlighted; // 0x570(0x01)
	char pad_571[0x7]; // 0x571(0x07)
	struct UTweenContainer* TweenContainer; // 0x578(0x08)

	void SequenceEvent__ENTRYPOINTMatchmakingMOTD_WBP_1(); // Function MatchmakingMOTD_WBP.MatchmakingMOTD_WBP_C.SequenceEvent__ENTRYPOINTMatchmakingMOTD_WBP_1 // (None) // @ game+0xfffffffec0000000
};

