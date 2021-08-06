// WidgetBlueprintGeneratedClass DirectorCardsPanel_WBP.DirectorCardsPanel_WBP_C
// Size: 0x4b2 (Inherited: 0x450)
struct UDirectorCardsPanel_WBP_C : UDirectorCardsPanelUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UVerticalBox* AnimatedPanel; // 0x458(0x08)
	struct UBackgroundBlur* Blur; // 0x460(0x08)
	struct UImage* CardBG; // 0x468(0x08)
	struct UScrollBox* CardScrollBox; // 0x470(0x08)
	struct UTutorialTip_WBP_C* DrawTutorialTip; // 0x478(0x08)
	struct UPlatformCalloutButton_WBP_C* SkipButton; // 0x480(0x08)
	struct UImage* Tint; // 0x488(0x08)
	struct UBaseTextBlock_C* TitleText; // 0x490(0x08)
	struct FMulticastInlineDelegate OnAnimationsFinished; // 0x498(0x10)
	struct UTweenContainer* TweenContainer; // 0x4a8(0x08)
	bool bIsShowingDirectorCards; // 0x4b0(0x01)
	bool bIsFadingOut; // 0x4b1(0x01)

	void UpdateFade(struct UTweenFloat* Tween); // Function DirectorCardsPanel_WBP.DirectorCardsPanel_WBP_C.UpdateFade // (None) // @ game+0xfffffffec0000000
};

