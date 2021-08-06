// WidgetBlueprintGeneratedClass TutorialTip_WBP.TutorialTip_WBP_C
// Size: 0x508 (Inherited: 0x468)
struct UTutorialTip_WBP_C : UTutorialTipUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x468(0x08)
	struct UImage* Arrow; // 0x470(0x08)
	struct UImage* Bar; // 0x478(0x08)
	struct UImage* BG; // 0x480(0x08)
	struct UHorizontalBox* ContentContainer; // 0x488(0x08)
	struct UImage* Frame; // 0x490(0x08)
	struct UImage* gradient; // 0x498(0x08)
	struct UImage* Icon; // 0x4a0(0x08)
	struct UOverlay* RootOverlay; // 0x4a8(0x08)
	struct UImage* Swipe; // 0x4b0(0x08)
	struct UTextBlock* TipText; // 0x4b8(0x08)
	int32_t MinTextWidth; // 0x4c0(0x04)
	char pad_4C4[0x4]; // 0x4c4(0x04)
	struct FText Text; // 0x4c8(0x18)
	enum class TutorialTipDirection ArrowDirection; // 0x4e0(0x01)
	char pad_4E1[0x7]; // 0x4e1(0x07)
	struct UTweenContainer* TweenContainer; // 0x4e8(0x08)
	struct FMulticastInlineDelegate EventHandleTutorialVisibility; // 0x4f0(0x10)
	enum class EHorizontalAlignment ContentAlignment; // 0x500(0x01)
	char pad_501[0x3]; // 0x501(0x03)
	float SetDelay; // 0x504(0x04)

	void UpdateArrow(); // Function TutorialTip_WBP.TutorialTip_WBP_C.UpdateArrow // (None) // @ game+0xfffffffec0000000
};

