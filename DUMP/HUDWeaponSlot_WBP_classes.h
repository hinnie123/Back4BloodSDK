// WidgetBlueprintGeneratedClass HUDWeaponSlot_WBP.HUDWeaponSlot_WBP_C
// Size: 0x559 (Inherited: 0x450)
struct UHUDWeaponSlot_WBP_C : UHUDEquipSlotUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UWidgetAnimation* PickupPulseLoop; // 0x458(0x08)
	struct UWidgetAnimation* PickupPulseStart; // 0x460(0x08)
	struct UWidgetAnimation* PickupState; // 0x468(0x08)
	struct UWidgetAnimation* ErrorState; // 0x470(0x08)
	struct UWidgetAnimation* WeaponSwap; // 0x478(0x08)
	struct UWidgetAnimation* SelectionState; // 0x480(0x08)
	struct UHorizontalBox* ammo; // 0x488(0x08)
	struct UTextBlock* AmmoReserveText; // 0x490(0x08)
	struct UTextBlock* AmmoText; // 0x498(0x08)
	struct UImage* BG; // 0x4a0(0x08)
	struct UPlatformCalloutImage_WBP_C* Callout; // 0x4a8(0x08)
	struct UImage* Error; // 0x4b0(0x08)
	struct UOverlay* Frame; // 0x4b8(0x08)
	struct UImage* InfinityIcon; // 0x4c0(0x08)
	struct UImage* ItemIcon; // 0x4c8(0x08)
	struct UHorizontalBox* MainContainer; // 0x4d0(0x08)
	struct UImage* QualityBar; // 0x4d8(0x08)
	struct UOverlay* QualityContainer; // 0x4e0(0x08)
	struct UImage* QualityTint; // 0x4e8(0x08)
	struct UOverlay* Reserve; // 0x4f0(0x08)
	struct UCanvasPanel* StarsPanel; // 0x4f8(0x08)
	struct UTierStars_WBP_C* TierStars; // 0x500(0x08)
	struct UOverlay* VendorBorder; // 0x508(0x08)
	enum class EEquipmentSlot WatchedSlot; // 0x510(0x01)
	char pad_511[0x7]; // 0x511(0x07)
	struct UInventoryComponent* InventoryComp; // 0x518(0x08)
	struct AItem* Item; // 0x520(0x08)
	struct UClipAmmoComponent* AmmoComp; // 0x528(0x08)
	bool bShowCallout; // 0x530(0x01)
	char pad_531[0x3]; // 0x531(0x03)
	struct FName InputAction; // 0x534(0x08)
	bool IsSelected; // 0x53c(0x01)
	char pad_53D[0x3]; // 0x53d(0x03)
	int32_t CurrentAmmo; // 0x540(0x04)
	bool bIsEquipped; // 0x544(0x01)
	bool bIsMeleeWeapon; // 0x545(0x01)
	char pad_546[0x2]; // 0x546(0x02)
	struct AItem* OldItem; // 0x548(0x08)
	bool bIsQuickItem; // 0x550(0x01)
	char pad_551[0x3]; // 0x551(0x03)
	int32_t MaxAmmo; // 0x554(0x04)
	bool bIsVendor; // 0x558(0x01)

	void SetVendor(bool bIsVendor); // Function HUDWeaponSlot_WBP.HUDWeaponSlot_WBP_C.SetVendor // (None) // @ game+0xfffffffec0000000
};

