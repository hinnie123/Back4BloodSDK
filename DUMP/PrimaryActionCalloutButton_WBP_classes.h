// WidgetBlueprintGeneratedClass PrimaryActionCalloutButton_WBP.PrimaryActionCalloutButton_WBP_C
// Size: 0x5fa (Inherited: 0x458)
struct UPrimaryActionCalloutButton_WBP_C : UPlatformCalloutButtonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	struct UImage* BG; // 0x460(0x08)
	struct UImage* BGHover; // 0x468(0x08)
	struct UPlatformCalloutImage_WBP_C* CalloutImage; // 0x470(0x08)
	struct UBaseTextBlock_C* CalloutText; // 0x478(0x08)
	struct UHorizontalBox* HBox; // 0x480(0x08)
	struct FText Text; // 0x488(0x18)
	struct FName Action; // 0x4a0(0x08)
	struct FSlateColor TextColor; // 0x4a8(0x30)
	struct FSlateFontInfo TextFont; // 0x4d8(0x60)
	struct FSlateColor NormalColor; // 0x538(0x30)
	struct FSlateColor PressedColor; // 0x568(0x30)
	struct FSlateColor HoveredColor; // 0x598(0x30)
	struct FSlateColor DisabledColor; // 0x5c8(0x30)
	bool bShowKey; // 0x5f8(0x01)
	bool bShowGamepad; // 0x5f9(0x01)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function PrimaryActionCalloutButton_WBP.PrimaryActionCalloutButton_WBP_C.OnFocusReceived // (None) // @ game+0xfffffffec0000000
};

