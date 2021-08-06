// WidgetBlueprintGeneratedClass VendorItem_Small_WBP.VendorItem_Small_WBP_C
// Size: 0x5e9 (Inherited: 0x558)
struct UVendorItem_Small_WBP_C : UVendorItemUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x558(0x08)
	struct UImage* Affinity; // 0x560(0x08)
	struct UImage* AffinityFrame; // 0x568(0x08)
	struct UImage* BG; // 0x570(0x08)
	struct UImage* CostBG; // 0x578(0x08)
	struct UBaseTextBlock_C* CostText; // 0x580(0x08)
	struct UImage* CurrencyIcon; // 0x588(0x08)
	struct UOverlay* Frame; // 0x590(0x08)
	struct UOverlay* HoverContainer; // 0x598(0x08)
	struct UOverlay* IconContainer; // 0x5a0(0x08)
	struct UScaleBox* IconScaleBox; // 0x5a8(0x08)
	struct UImage* ItemIcon; // 0x5b0(0x08)
	struct UBaseTextBlock_C* ItemNameText; // 0x5b8(0x08)
	struct UVerticalBox* ItemVBox; // 0x5c0(0x08)
	struct UHorizontalBox* RefillTrackersHBox; // 0x5c8(0x08)
	struct USizeBox* TierContainer; // 0x5d0(0x08)
	struct UTierStars_WBP_C* TierStars; // 0x5d8(0x08)
	struct UImage* UnavailableDimmer; // 0x5e0(0x08)
	bool bIsHighlighted; // 0x5e8(0x01)

	void SetUpgradeLayout(bool bIsCard); // Function VendorItem_Small_WBP.VendorItem_Small_WBP_C.SetUpgradeLayout // (None) // @ game+0xfffffffec0000000
};

