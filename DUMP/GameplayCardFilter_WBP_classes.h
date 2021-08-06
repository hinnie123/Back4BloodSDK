// WidgetBlueprintGeneratedClass GameplayCardFilter_WBP.GameplayCardFilter_WBP_C
// Size: 0x4b0 (Inherited: 0x478)
struct UGameplayCardFilter_WBP_C : UCardFilterUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct UHorizontalBox* FilterButtonsHBox; // 0x480(0x08)
	struct UBaseTextBlock_C* FilterText; // 0x488(0x08)
	struct UPlatformCalloutImage_WBP_C* NextFilterCallout; // 0x490(0x08)
	struct UPlatformCalloutImage_WBP_C* PrevFilterCallout; // 0x498(0x08)
	struct FName PrevFilterAction; // 0x4a0(0x08)
	struct FName NextFilterAction; // 0x4a8(0x08)

	void UnregisterInputs(); // Function GameplayCardFilter_WBP.GameplayCardFilter_WBP_C.UnregisterInputs // (None) // @ game+0xfffffffec0000000
};

