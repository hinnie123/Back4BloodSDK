// WidgetBlueprintGeneratedClass TextButton_WBP.TextButton_WBP_C
// Size: 0x4c4 (Inherited: 0x468)
struct UTextButton_WBP_C : UTutorialTipUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x468(0x08)
	struct UImage* BG; // 0x470(0x08)
	struct UImage* CTABG; // 0x478(0x08)
	struct UImage* CTAHover; // 0x480(0x08)
	struct UImage* Frame; // 0x488(0x08)
	struct UOverlay* HoverContainer; // 0x490(0x08)
	struct UButtonTextBlock_C* TextBlock; // 0x498(0x08)
	struct UOverlay* TutorialPanel; // 0x4a0(0x08)
	struct FText Text; // 0x4a8(0x18)
	bool bIsHighlighted; // 0x4c0(0x01)
	bool bIsLeftJustified; // 0x4c1(0x01)
	bool bIsCTAButton; // 0x4c2(0x01)
	bool bShowHighlightWhenFocused; // 0x4c3(0x01)

	void SetCTAButton(); // Function TextButton_WBP.TextButton_WBP_C.SetCTAButton // (None) // @ game+0xfffffffec0000000
};

