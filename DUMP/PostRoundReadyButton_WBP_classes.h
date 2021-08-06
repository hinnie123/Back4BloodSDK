// WidgetBlueprintGeneratedClass PostRoundReadyButton_WBP.PostRoundReadyButton_WBP_C
// Size: 0x5d0 (Inherited: 0x458)
struct UPostRoundReadyButton_WBP_C : UPostRoundReadyButtonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	struct UImage* BG; // 0x460(0x08)
	struct UPlatformCalloutImage_WBP_C* Callout; // 0x468(0x08)
	struct UHorizontalBox* ReadyPips; // 0x470(0x08)
	struct UButtonTextBlock_C* TextBlock; // 0x478(0x08)
	struct FSlateColor NormalColor; // 0x480(0x30)
	struct FSlateColor HoveredColor; // 0x4b0(0x30)
	struct FSlateColor PressedColor; // 0x4e0(0x30)
	struct FSlateColor DisabledColor; // 0x510(0x30)
	struct FSlateColor DisabledTextColor; // 0x540(0x30)
	struct FSlateColor HoveredTextColor; // 0x570(0x30)
	struct FSlateColor NormalTextColor; // 0x5a0(0x30)

	void SetText(struct FText InText); // Function PostRoundReadyButton_WBP.PostRoundReadyButton_WBP_C.SetText // (None) // @ game+0xfffffffec0000000
};

