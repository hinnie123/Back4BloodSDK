// WidgetBlueprintGeneratedClass PlatformCalloutButton_WBP.PlatformCalloutButton_WBP_C
// Size: 0x557 (Inherited: 0x458)
struct UPlatformCalloutButton_WBP_C : UPlatformCalloutButtonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	struct UImage* BG; // 0x460(0x08)
	struct UOverlay* BGContainer; // 0x468(0x08)
	struct UImage* BGHover_A; // 0x470(0x08)
	struct UPlatformCalloutImage_WBP_C* CalloutImage; // 0x478(0x08)
	struct UBaseTextBlock_C* CalloutText; // 0x480(0x08)
	struct UImage* Frame; // 0x488(0x08)
	struct UHorizontalBox* HBox; // 0x490(0x08)
	struct UOverlay* HoverContainer_B; // 0x498(0x08)
	struct FText Text; // 0x4a0(0x18)
	struct FName Action; // 0x4b8(0x08)
	struct FSlateColor TextColor; // 0x4c0(0x30)
	struct FSlateFontInfo TextFont; // 0x4f0(0x60)
	bool bShowBackground; // 0x550(0x01)
	bool bImageOnRight; // 0x551(0x01)
	bool bShowGamepad; // 0x552(0x01)
	bool bShowKey; // 0x553(0x01)
	enum class ESlateVisibility GamepadVisibility; // 0x554(0x01)
	enum class ESlateVisibility KeyVisibility; // 0x555(0x01)
	bool bEnableVisibilityToggles; // 0x556(0x01)

	void HandleInputChanged(bool bIsGamepad); // Function PlatformCalloutButton_WBP.PlatformCalloutButton_WBP_C.HandleInputChanged // (None) // @ game+0xfffffffec0000000
};

