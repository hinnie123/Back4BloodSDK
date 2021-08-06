// WidgetBlueprintGeneratedClass SurvivorCrosshairs_WBP.SurvivorCrosshairs_WBP_C
// Size: 0x530 (Inherited: 0x4b8)
struct USurvivorCrosshairs_WBP_C : USurvivorCrosshairUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UImage* Bottom; // 0x4c0(0x08)
	struct UCanvasPanel* CrosshairHolder; // 0x4c8(0x08)
	struct UImage* Dot; // 0x4d0(0x08)
	struct UCanvasPanel* DotHolder; // 0x4d8(0x08)
	struct UHitMarker_WBP_C* HitMarker; // 0x4e0(0x08)
	struct UImage* Left; // 0x4e8(0x08)
	struct UImage* Right; // 0x4f0(0x08)
	struct UCanvasPanel* RootPanel; // 0x4f8(0x08)
	struct UImage* Top; // 0x500(0x08)
	float SpreadResponse; // 0x508(0x04)
	float ZeroedSpacing; // 0x50c(0x04)
	float CrosshairLength; // 0x510(0x04)
	float CrosshairWidth; // 0x514(0x04)
	float DefaultLength; // 0x518(0x04)
	float DefaultThickness; // 0x51c(0x04)
	struct UInventoryComponent* Inventory; // 0x520(0x08)
	struct UADSComponent* ADSComponent; // 0x528(0x08)

	void ReadSettingsFromCVars(); // Function SurvivorCrosshairs_WBP.SurvivorCrosshairs_WBP_C.ReadSettingsFromCVars // (None) // @ game+0xfffffffec0000000
};

