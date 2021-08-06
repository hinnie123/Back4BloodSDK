// WidgetBlueprintGeneratedClass FriendRequestsPopup_WBP.FriendRequestsPopup_WBP_C
// Size: 0x694 (Inherited: 0x608)
struct UFriendRequestsPopup_WBP_C : UFriendRequestsPopupUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x608(0x08)
	struct UPartyTabButton_WBP_C* AddFriendTabButton; // 0x610(0x08)
	struct UPlatformCallouts_WBP_C* Callouts; // 0x618(0x08)
	struct UPlatformCalloutImage_WBP_C* NextTabCalloutImage; // 0x620(0x08)
	struct UTextButton_WBP_C* NotificationButton; // 0x628(0x08)
	struct UOverlay* NotificationPanel; // 0x630(0x08)
	struct UPageSwitcherGamepad_WBP_C* PageSwitcher; // 0x638(0x08)
	struct UPlatformCalloutImage_WBP_C* PrevTabCalloutImage; // 0x640(0x08)
	struct UVerticalBox* RequestsList; // 0x648(0x08)
	struct UVerticalBox* RequestsPanel; // 0x650(0x08)
	struct UImage* SearchBorder; // 0x658(0x08)
	struct UTextButton_WBP_C* SearchButton; // 0x660(0x08)
	struct UEditableText* SearchEditText; // 0x668(0x08)
	struct UPartyTabButton_WBP_C* SentRequestsTabButton; // 0x670(0x08)
	struct UHorizontalBox* TabButtonsPanel; // 0x678(0x08)
	struct UBaseTextBlock_C* TitleText; // 0x680(0x08)
	struct UCircularThrobber* WaitSpinner; // 0x688(0x08)
	int32_t NameLengthLimit; // 0x690(0x04)

	struct UPopupUserWidget* OpenAcceptRequestPopup(struct FText InTitleText); // Function FriendRequestsPopup_WBP.FriendRequestsPopup_WBP_C.OpenAcceptRequestPopup // (None) // @ game+0xfffffffec0000000
};

