// WidgetBlueprintGeneratedClass ItemSlot_WBP.ItemSlot_WBP_C
// Size: 0x4d1 (Inherited: 0x460)
struct UItemSlot_WBP_C : UItemSlotUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UWidgetAnimation* PickupAttached; // 0x468(0x08)
	struct UWidgetAnimation* PickupPulseLoop; // 0x470(0x08)
	struct UWidgetAnimation* PickupPulseStart; // 0x478(0x08)
	struct UAttachmentComparisonIcon_WBP_C* AttachmentComparisonIcon; // 0x480(0x08)
	struct UImage* BG; // 0x488(0x08)
	struct UImage* Border; // 0x490(0x08)
	struct UImage* DisabledOverlay; // 0x498(0x08)
	struct UImage* EmptyIcon; // 0x4a0(0x08)
	struct UImage* Icon; // 0x4a8(0x08)
	struct UOverlay* IconPanel; // 0x4b0(0x08)
	struct UImage* PickupOverlay; // 0x4b8(0x08)
	struct UImage* TransferIcon; // 0x4c0(0x08)
	struct FVector2D Size; // 0x4c8(0x08)
	enum class EItemCategory SlotType; // 0x4d0(0x01)

	void ShowVendorHighlight(bool InShow); // Function ItemSlot_WBP.ItemSlot_WBP_C.ShowVendorHighlight // (None) // @ game+0xfffffffec0000000
};

