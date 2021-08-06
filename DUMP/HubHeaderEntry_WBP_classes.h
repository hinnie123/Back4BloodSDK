// WidgetBlueprintGeneratedClass HubHeaderEntry_WBP.HubHeaderEntry_WBP_C
// Size: 0x528 (Inherited: 0x468)
struct UHubHeaderEntry_WBP_C : UHubHeaderEntryUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x468(0x08)
	struct UGenericButton_C* Button; // 0x470(0x08)
	struct UButtonTextBlock_C* MainTopText; // 0x478(0x08)
	struct UImage* NewIcon; // 0x480(0x08)
	struct UImage* ObjectiveIcon; // 0x488(0x08)
	struct UImage* SelectedBar; // 0x490(0x08)
	struct UOverlay* SelectedContainer; // 0x498(0x08)
	int32_t HubIndex; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct FSlateColor CheckedTextColor; // 0x4a8(0x30)
	struct FSlateColor UncheckedTextColor; // 0x4d8(0x30)
	bool IsChecked; // 0x508(0x01)
	char pad_509[0x7]; // 0x509(0x07)
	struct UTweenContainer* TweenSelectedContainer; // 0x510(0x08)
	struct UTweenContainer* TweenHoverContainer; // 0x518(0x08)
	struct UTweenContainer* TweenUnhoverContainer; // 0x520(0x08)

	void SetSelectedState(bool IsChecked); // Function HubHeaderEntry_WBP.HubHeaderEntry_WBP_C.SetSelectedState // (None) // @ game+0xfffffffec0000000
};

