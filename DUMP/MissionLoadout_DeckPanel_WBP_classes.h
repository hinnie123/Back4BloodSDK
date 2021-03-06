// WidgetBlueprintGeneratedClass MissionLoadout_DeckPanel_WBP.MissionLoadout_DeckPanel_WBP_C
// Size: 0x590 (Inherited: 0x450)
struct UMissionLoadout_DeckPanel_WBP_C : UPreRoundDeckSelectUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UGobiScrollBox_C* DeckCardList; // 0x458(0x08)
	struct UTextBlock* DeckListNameText; // 0x460(0x08)
	struct UVerticalBox* DeckPreview; // 0x468(0x08)
	struct UGobiScrollBox_C* DeckScrollBox; // 0x470(0x08)
	struct UWrapBox* DeckWrapBox; // 0x478(0x08)
	struct UImage* Fader; // 0x480(0x08)
	struct UTextBlock* HeaderText; // 0x488(0x08)
	struct UImage* Tinter; // 0x490(0x08)
	struct UTutorialTip_WBP_C* TutorialTip; // 0x498(0x08)
	struct AGobiPlayerState* GobiPlayerState; // 0x4a0(0x08)
	struct UGameplayCardManager* GameplayCardManager; // 0x4a8(0x08)
	bool ShowBuiltinPresets; // 0x4b0(0x01)
	char pad_4B1[0x7]; // 0x4b1(0x07)
	struct FSlateColor InactiveColor; // 0x4b8(0x30)
	struct FMulticastInlineDelegate OnDeckSelected; // 0x4e8(0x10)
	struct UWidget* DeckListTarget; // 0x4f8(0x08)
	struct UDeckCardListPopup_WBP_C* CardListPopup; // 0x500(0x08)
	struct FMulticastInlineDelegate OnDeckHoverChanged; // 0x508(0x10)
	struct FSlateColor ActiveColor; // 0x518(0x30)
	bool bIsDeckHovered; // 0x548(0x01)
	char pad_549[0x7]; // 0x549(0x07)
	struct UTweenContainer* TweenOpenContainer; // 0x550(0x08)
	struct TArray<struct FDataTableRowHandle> DeckCards; // 0x558(0x10)
	int32_t FocusedDeckIndex; // 0x568(0x04)
	char pad_56C[0x4]; // 0x56c(0x04)
	struct UTweenContainer* TweenCloseContainer; // 0x570(0x08)
	bool bFromLaunch; // 0x578(0x01)
	char pad_579[0x7]; // 0x579(0x07)
	struct FMulticastInlineDelegate OnLeaveTransitionStart; // 0x580(0x10)

	void OnCloseAnimEnd(struct UTweenFloat* Tween); // Function MissionLoadout_DeckPanel_WBP.MissionLoadout_DeckPanel_WBP_C.OnCloseAnimEnd // (None) // @ game+0xfffffffec0000000
};

