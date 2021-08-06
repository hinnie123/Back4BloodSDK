// WidgetBlueprintGeneratedClass CaravanEntry_WBP.CaravanEntry_WBP_C
// Size: 0x571 (Inherited: 0x450)
struct UCaravanEntry_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UWidgetAnimation* AnimateOut; // 0x458(0x08)
	struct UWidgetAnimation* AnimateIn; // 0x460(0x08)
	struct UImage* BG; // 0x468(0x08)
	struct UImage* BGFill; // 0x470(0x08)
	struct UBaseTextBlock_C* CaravanDescription; // 0x478(0x08)
	struct UBaseTextBlock_C* CaravanLeaderName; // 0x480(0x08)
	struct UImage* Dimmer; // 0x488(0x08)
	struct UVerticalBox* ExpiryVBox; // 0x490(0x08)
	struct UImage* Frame; // 0x498(0x08)
	struct UImage* FrameHover; // 0x4a0(0x08)
	struct UHorizontalBox* ProductsHBox; // 0x4a8(0x08)
	struct UImage* ProductsTrackLine; // 0x4b0(0x08)
	struct UImage* Sheen; // 0x4b8(0x08)
	struct UImage* Shine; // 0x4c0(0x08)
	struct UTimedExpiry_WBP_C* TimedExpiry_WBP; // 0x4c8(0x08)
	struct UVerticalBox* TitleVBox; // 0x4d0(0x08)
	struct UBaseTextBlock_C* UnlockText; // 0x4d8(0x08)
	struct FCaravanInstance Caravan; // 0x4e0(0x60)
	struct FMulticastInlineDelegate OnDepartArriveAnimationFinished; // 0x540(0x10)
	struct UTweenContainer* BGLoadTweenContainer; // 0x550(0x08)
	bool bIsHighlighted; // 0x558(0x01)
	char pad_559[0x7]; // 0x559(0x07)
	struct UTweenContainer* TweenFocusLostContainer; // 0x560(0x08)
	struct UTweenContainer* TweenFocusContainer; // 0x568(0x08)
	bool bIsLoaded; // 0x570(0x01)

	void SetHighlight(bool bIsHighlighted); // Function CaravanEntry_WBP.CaravanEntry_WBP_C.SetHighlight // (None) // @ game+0xfffffffec0000000
};

