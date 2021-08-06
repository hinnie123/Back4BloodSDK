// WidgetBlueprintGeneratedClass QuickInvitePopup_WBP.QuickInvitePopup_WBP_C
// Size: 0x4d0 (Inherited: 0x470)
struct UQuickInvitePopup_WBP_C : UQuickInvitePopupUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	struct UPlatformCalloutButton_WBP_C* AddFriendsButton; // 0x478(0x08)
	struct UImage* BGInner; // 0x480(0x08)
	struct UPlatformCallouts_WBP_C* Callouts; // 0x488(0x08)
	struct UImage* FrameInner; // 0x490(0x08)
	struct UFriendRequestsButton_WBP_C* FriendRequestsButton; // 0x498(0x08)
	struct UPlatformCalloutButton_WBP_C* InviteCallout; // 0x4a0(0x08)
	struct UOverlay* InviteCalloutWrapper; // 0x4a8(0x08)
	struct UGobiScrollBox_C* NameList; // 0x4b0(0x08)
	struct USizeBox* NameListHolder; // 0x4b8(0x08)
	struct UTextBlock* NoFriendsText; // 0x4c0(0x08)
	struct UQuickInvitePlayerCard_WBP_C* FocusedListElement; // 0x4c8(0x08)

	void GetFirstVisibleListElement(struct UQuickInvitePlayerCard_WBP_C* FirstVisible); // Function QuickInvitePopup_WBP.QuickInvitePopup_WBP_C.GetFirstVisibleListElement // (None) // @ game+0xfffffffec0000000
};

