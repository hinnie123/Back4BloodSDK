// WidgetBlueprintGeneratedClass PostRound_TabEntry_WBP.PostRound_TabEntry_WBP_C
// Size: 0x500 (Inherited: 0x450)
struct UPostRound_TabEntry_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UGenericButton_C* Button; // 0x458(0x08)
	struct UButtonTextBlock_C* MainTopText; // 0x460(0x08)
	struct UImage* SelectedBar; // 0x468(0x08)
	struct UOverlay* SelectedContainer; // 0x470(0x08)
	int32_t Index; // 0x478(0x04)
	char pad_47C[0x4]; // 0x47c(0x04)
	struct FSlateColor CheckedTextColor; // 0x480(0x30)
	struct FSlateColor UncheckedTextColor; // 0x4b0(0x30)
	bool IsChecked; // 0x4e0(0x01)
	char pad_4E1[0x7]; // 0x4e1(0x07)
	struct UTweenContainer* TweenSelectedContainer; // 0x4e8(0x08)
	struct UTweenContainer* TweenHoverContainer; // 0x4f0(0x08)
	struct UTweenContainer* TweenUnhoverContainer; // 0x4f8(0x08)

	void SetSelectedState(); // Function PostRound_TabEntry_WBP.PostRound_TabEntry_WBP_C.SetSelectedState // (None) // @ game+0xfffffffec0000000
};

