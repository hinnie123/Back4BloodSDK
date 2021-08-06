// WidgetBlueprintGeneratedClass SpinnerButton_WBP.SpinnerButton_WBP_C
// Size: 0x551 (Inherited: 0x450)
struct USpinnerButton_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UImage* BG; // 0x458(0x08)
	struct UImage* BGHover_2; // 0x460(0x08)
	struct UImage* Border; // 0x468(0x08)
	struct UOverlay* HoverContainer; // 0x470(0x08)
	struct UImage* Icon; // 0x478(0x08)
	struct FSlateColor NormalColor; // 0x480(0x30)
	struct FSlateColor PressedColor; // 0x4b0(0x30)
	struct FSlateColor HoveredColor; // 0x4e0(0x30)
	struct FSlateColor DisabledColor; // 0x510(0x30)
	bool bFlipImage; // 0x540(0x01)
	char pad_541[0x7]; // 0x541(0x07)
	struct UTweenContainer* TweenClickContainer; // 0x548(0x08)
	bool bIsHighlighted; // 0x550(0x01)

	void Set Highlight(bool isHighlighted, bool IsPressed); // Function SpinnerButton_WBP.SpinnerButton_WBP_C.Set Highlight // (None) // @ game+0xfffffffec0000000
};

