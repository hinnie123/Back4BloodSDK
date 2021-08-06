// WidgetBlueprintGeneratedClass HUDEquipmentPanel_WBP.HUDEquipmentPanel_WBP_C
// Size: 0x4c1 (Inherited: 0x488)
struct UHUDEquipmentPanel_WBP_C : UHUDEquipmentPanelUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UHUDWeaponSlot_WBP_C* Defensive; // 0x490(0x08)
	struct UHUDEquipmentEntry_WBP_C* Mounted; // 0x498(0x08)
	struct UHUDWeaponSlot_WBP_C* Offensive; // 0x4a0(0x08)
	struct UHUDEquipmentEntry_WBP_C* Primary; // 0x4a8(0x08)
	struct UHUDEquipmentEntry_WBP_C* Secondary; // 0x4b0(0x08)
	struct UHUDWeaponSlot_WBP_C* Utility; // 0x4b8(0x08)
	bool IsVendor; // 0x4c0(0x01)

	void UpdateVisibility(); // Function HUDEquipmentPanel_WBP.HUDEquipmentPanel_WBP_C.UpdateVisibility // (None) // @ game+0xfffffffec0000000
};

