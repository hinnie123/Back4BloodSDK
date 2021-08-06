// WidgetBlueprintGeneratedClass PartyPlayerCardExpanded_WBP.PartyPlayerCardExpanded_WBP_C
// Size: 0x530 (Inherited: 0x4a8)
struct UPartyPlayerCardExpanded_WBP_C : UPartyPlayerCardExpandedUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a8(0x08)
	struct UTextBlock* AddPlayerPlus; // 0x4b0(0x08)
	struct UImage* Banner; // 0x4b8(0x08)
	struct UImage* BG; // 0x4c0(0x08)
	struct UImage* BGFill; // 0x4c8(0x08)
	struct UImage* BGHover_2; // 0x4d0(0x08)
	struct UImage* Emblem; // 0x4d8(0x08)
	struct UImage* Frame; // 0x4e0(0x08)
	struct UImage* FrameHover; // 0x4e8(0x08)
	struct UOverlay* HoverContainer; // 0x4f0(0x08)
	struct UImage* LeaderIcon; // 0x4f8(0x08)
	struct UOverlay* PlayerInfoPanel; // 0x500(0x08)
	struct UPlayerMicIcon_WBP_C* PlayerMicIcon; // 0x508(0x08)
	struct UPlayerName_WBP_C* PlayerName; // 0x510(0x08)
	struct UBaseTextBlock_C* Title; // 0x518(0x08)
	bool bIsHighlighted; // 0x520(0x01)
	char pad_521[0x7]; // 0x521(0x07)
	struct UTweenContainer* TweenContainer; // 0x528(0x08)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function PartyPlayerCardExpanded_WBP.PartyPlayerCardExpanded_WBP_C.OnFocusReceived // (None) // @ game+0xfffffffec0000000
};

