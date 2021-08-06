// WidgetBlueprintGeneratedClass VendorRefillTracker_WBP.VendorRefillTracker_WBP_C
// Size: 0x498 (Inherited: 0x478)
struct UVendorRefillTracker_WBP_C : UVendorRefillTrackerUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct UBaseTextBlock_C* CurrentText; // 0x480(0x08)
	struct UBaseTextBlock_C* MaxText; // 0x488(0x08)
	struct UImage* RefillIcon; // 0x490(0x08)

	void OnTrackingTypeChanged(enum class EAmmoType AmmoType); // Function VendorRefillTracker_WBP.VendorRefillTracker_WBP_C.OnTrackingTypeChanged // (None) // @ game+0xfffffffec0000000
};

