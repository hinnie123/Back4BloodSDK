// WidgetBlueprintGeneratedClass BrightnessOptions_WBP.BrightnessOptions_WBP_C
// Size: 0x561 (Inherited: 0x508)
struct UBrightnessOptions_WBP_C : UBrightnessOptionsUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x508(0x08)
	struct UOptionSectionHeader_WBP_C* BrightnessHeader; // 0x510(0x08)
	struct UPrimaryActionCalloutButton_WBP_C* ContinueButton; // 0x518(0x08)
	struct UOptionsSlider_WBP_C* HDRBrightnessSlider; // 0x520(0x08)
	struct UOptionsSlider_WBP_C* HDRContrastSlider; // 0x528(0x08)
	struct UOptionsSlider_WBP_C* HDRLuminanceSlider; // 0x530(0x08)
	struct UOptionsTextSpinner_WBP_C* HDRSpinner; // 0x538(0x08)
	struct UOptionsSlider_WBP_C* LDRBrightnessSlider; // 0x540(0x08)
	struct UOptionsSlider_WBP_C* LDRContrastSlider; // 0x548(0x08)
	struct UOptionsSlider_WBP_C* SaturationSlider; // 0x550(0x08)
	struct UTextBlock* TitleText; // 0x558(0x08)
	bool bShowTitle; // 0x560(0x01)

	void InitInput(); // Function BrightnessOptions_WBP.BrightnessOptions_WBP_C.InitInput // (None) // @ game+0xfffffffec0000000
};

