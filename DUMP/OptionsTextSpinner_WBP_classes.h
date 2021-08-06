// WidgetBlueprintGeneratedClass OptionsTextSpinner_WBP.OptionsTextSpinner_WBP_C
// Size: 0x521 (Inherited: 0x4b0)
struct UOptionsTextSpinner_WBP_C : UOptionsTextSpinnerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UOptionsSpinner_WBP_C* Spinner; // 0x4b8(0x08)
	int32_t SelectedIndex; // 0x4c0(0x04)
	char pad_4C4[0x4]; // 0x4c4(0x04)
	struct FText Name; // 0x4c8(0x18)
	struct TArray<struct FText> Values; // 0x4e0(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x4f0(0x10)
	bool bShowPips; // 0x500(0x01)
	char pad_501[0x7]; // 0x501(0x07)
	struct FText TTSNameOverride; // 0x508(0x18)
	bool bIsIndented; // 0x520(0x01)

	bool RemoveValueNative(int32_t InIndex); // Function OptionsTextSpinner_WBP.OptionsTextSpinner_WBP_C.RemoveValueNative // (None) // @ game+0xfffffffec0000000
};

