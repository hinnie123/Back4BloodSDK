// WidgetBlueprintGeneratedClass ArmoryScreen_WBP.ArmoryScreen_WBP_C
// Size: 0x620 (Inherited: 0x5c8)
struct UArmoryScreen_WBP_C : UArmoryScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c8(0x08)
	struct UPlatformCalloutImage_WBP_C* CategoryNextCallout; // 0x5d0(0x08)
	struct UPlatformCalloutImage_WBP_C* CategoryPrevCallout; // 0x5d8(0x08)
	struct UHorizontalBox* TabButtonsPanel; // 0x5e0(0x08)
	struct UHorizontalBox* TabsContainer; // 0x5e8(0x08)
	struct UOverlay* WeaponContainer; // 0x5f0(0x08)
	struct UGobiScrollBox_C* WeaponsScrollBox; // 0x5f8(0x08)
	struct UWrapBox* WeaponsWrapBox; // 0x600(0x08)
	struct UPlatformCallouts_WBP_C* Callouts; // 0x608(0x08)
	bool bPlayTabSound; // 0x610(0x01)
	char pad_611[0x7]; // 0x611(0x07)
	struct UTweenContainer* TweenOpenContainer; // 0x618(0x08)

	void OpenTween(); // Function ArmoryScreen_WBP.ArmoryScreen_WBP_C.OpenTween // (None) // @ game+0xfffffffec0000000
};

