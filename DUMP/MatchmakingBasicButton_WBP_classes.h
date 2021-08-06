// WidgetBlueprintGeneratedClass MatchmakingBasicButton_WBP.MatchmakingBasicButton_WBP_C
// Size: 0x508 (Inherited: 0x458)
struct UMatchmakingBasicButton_WBP_C : UMatchmakingSelectionUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	struct UImage* ButtonBG; // 0x460(0x08)
	struct UOverlay* ButtonBGContiner; // 0x468(0x08)
	struct UImage* ButtonFrame; // 0x470(0x08)
	struct UImage* DisabledOverlay; // 0x478(0x08)
	struct UOverlay* HoverContainer; // 0x480(0x08)
	struct UImage* TileBG; // 0x488(0x08)
	struct UOverlay* TileBGContainer; // 0x490(0x08)
	struct UImage* TileBGFill; // 0x498(0x08)
	struct UImage* TileFrame; // 0x4a0(0x08)
	struct UImage* TileFrameHover; // 0x4a8(0x08)
	struct UTextBlock* Title; // 0x4b0(0x08)
	struct FText TitleText; // 0x4b8(0x18)
	struct FText DescText; // 0x4d0(0x18)
	struct UTexture2D* BGTexture; // 0x4e8(0x08)
	bool bIsHighlighted; // 0x4f0(0x01)
	bool bTileMode; // 0x4f1(0x01)
	char pad_4F2[0x6]; // 0x4f2(0x06)
	struct UTweenContainer* TweenContainer; // 0x4f8(0x08)
	float SetTopClipAmount; // 0x500(0x04)
	float SetBottomClipAmount; // 0x504(0x04)

	void SetHighlight(bool bIsHighlighted); // Function MatchmakingBasicButton_WBP.MatchmakingBasicButton_WBP_C.SetHighlight // (None) // @ game+0xfffffffec0000000
};

