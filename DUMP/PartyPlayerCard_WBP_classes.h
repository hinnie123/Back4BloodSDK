// WidgetBlueprintGeneratedClass PartyPlayerCard_WBP.PartyPlayerCard_WBP_C
// Size: 0x6ac (Inherited: 0x628)
struct UPartyPlayerCard_WBP_C : UPartyPlayerCardUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x628(0x08)
	struct UTextBlock* AddPlayerPlus; // 0x630(0x08)
	struct UImage* BG; // 0x638(0x08)
	struct UTextBlock* CharacterNameText; // 0x640(0x08)
	struct UImage* Emblem; // 0x648(0x08)
	struct UImage* Frame; // 0x650(0x08)
	struct UOverlay* HoverContainer; // 0x658(0x08)
	struct UImage* LeaderIcon; // 0x660(0x08)
	struct UImage* PartyIcon; // 0x668(0x08)
	struct UPlatformIcon_WBP_C* PlatformIcon; // 0x670(0x08)
	struct UHorizontalBox* PlatformPanel; // 0x678(0x08)
	struct UTextBlock* PlatformPlayerName; // 0x680(0x08)
	struct UPlayerMicIcon_WBP_C* PlayerMicIcon; // 0x688(0x08)
	struct UPlayerName_WBP_C* PlayerName; // 0x690(0x08)
	struct UTextBlock* StatusText; // 0x698(0x08)
	bool bSupportsInvite; // 0x6a0(0x01)
	char pad_6A1[0x3]; // 0x6a1(0x03)
	float FrameUnfocusedRenderOpacity; // 0x6a4(0x04)
	float FrameFocusedRenderOpacity; // 0x6a8(0x04)

	void SetFocusState(bool IsHovered); // Function PartyPlayerCard_WBP.PartyPlayerCard_WBP_C.SetFocusState // (None) // @ game+0xfffffffec0000000
};

