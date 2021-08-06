// WidgetBlueprintGeneratedClass HUDHintText_WBP.HUDHintText_WBP_C
// Size: 0x4f8 (Inherited: 0x450)
struct UHUDHintText_WBP_C : UHUDHintTextUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UWidgetAnimation* Pulse; // 0x458(0x08)
	struct URichTextBlock* RichHintText; // 0x460(0x08)
	struct UInventoryComponent* Inventory; // 0x468(0x08)
	struct UClipAmmoComponent* ammo; // 0x470(0x08)
	struct AItem* SelectedItem; // 0x478(0x08)
	float EventSecondsRemaining; // 0x480(0x04)
	char pad_484[0x4]; // 0x484(0x04)
	struct UHeroLifeStateComponent* HeroLifeState; // 0x488(0x08)
	struct FText HealthLowText; // 0x490(0x18)
	struct FText ReloadText; // 0x4a8(0x18)
	struct FText EmptyText; // 0x4c0(0x18)
	struct UReloadComponent* Reload; // 0x4d8(0x08)
	struct FText LowAmmoText; // 0x4e0(0x18)

	void ShowLowAmmoHint(bool OutShowHint); // Function HUDHintText_WBP.HUDHintText_WBP_C.ShowLowAmmoHint // (None) // @ game+0xfffffffec0000000
};

