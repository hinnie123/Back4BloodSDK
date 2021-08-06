// WidgetBlueprintGeneratedClass WeaponEntry_WBP.WeaponEntry_WBP_C
// Size: 0x570 (Inherited: 0x488)
struct UWeaponEntry_WBP_C : UWeaponEntryUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UImage* BG; // 0x490(0x08)
	struct UTextBlock* CountText; // 0x498(0x08)
	struct UImage* FocusBar; // 0x4a0(0x08)
	struct UImage* FocusBG; // 0x4a8(0x08)
	struct UOverlay* FocusContainer; // 0x4b0(0x08)
	struct UImage* FocusGradient; // 0x4b8(0x08)
	struct UImage* WeaponIcon; // 0x4c0(0x08)
	struct UTextBlock* WeaponNameText; // 0x4c8(0x08)
	struct FSlateColor NormalColor; // 0x4d0(0x30)
	struct FSlateColor HoveredColor; // 0x500(0x30)
	struct FSlateColor PressedColor; // 0x530(0x30)
	struct UTweenContainer* TweenFocusContainer; // 0x560(0x08)
	struct UTweenContainer* TweenFocusLostContainer; // 0x568(0x08)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function WeaponEntry_WBP.WeaponEntry_WBP_C.OnFocusReceived // (None) // @ game+0xfffffffec0000000
};

