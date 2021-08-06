// WidgetBlueprintGeneratedClass AccessibilityOptions_WBP.AccessibilityOptions_WBP_C
// Size: 0x5a8 (Inherited: 0x4d0)
struct UAccessibilityOptions_WBP_C : UAccessibilityOptionsUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d0(0x08)
	struct UOptionsSlider_WBP_C* CameraMotionSlider; // 0x4d8(0x08)
	struct UOptionsSlider_WBP_C* CaptionBackgroundOpacitySlider; // 0x4e0(0x08)
	struct UOptionsTextSpinner_WBP_C* CaptionFontColorSpinner; // 0x4e8(0x08)
	struct UOptionsSlider_WBP_C* CaptionFontSizeSlider; // 0x4f0(0x08)
	struct UOptionsTextSpinner_WBP_C* CaptionSpinner; // 0x4f8(0x08)
	struct UOptionsTextSpinner_WBP_C* ColorBlindSpinner; // 0x500(0x08)
	struct UOptionsColorComboBox_WBP_C* ComboAquaElements; // 0x508(0x08)
	struct UOptionsColorComboBox_WBP_C* ComboBlueElements; // 0x510(0x08)
	struct UOptionsColorComboBox_WBP_C* ComboGreenElements; // 0x518(0x08)
	struct UOptionsColorComboBox_WBP_C* ComboOrangeElements; // 0x520(0x08)
	struct UOptionsColorComboBox_WBP_C* ComboRedElements; // 0x528(0x08)
	struct UOptionsColorComboBox_WBP_C* ComboYellowElements; // 0x530(0x08)
	struct UPrimaryActionCalloutButton_WBP_C* ContinueButton; // 0x538(0x08)
	struct UOptionsAccordion_WBP_C* CustomOptions; // 0x540(0x08)
	struct UOptionsToggleSpinner_WBP_C* ProfanityFilterSpinner; // 0x548(0x08)
	struct UOptionsToggleSpinner_WBP_C* SpeechToTextSpinner; // 0x550(0x08)
	struct UOptionsTextComboBox_WBP_C* TextLanguageComboBox; // 0x558(0x08)
	struct UOptionsToggleSpinner_WBP_C* TextToSpeechEnabledSpinner; // 0x560(0x08)
	struct UOptionsTextSpinner_WBP_C* TextToSpeechVoiceSpinner; // 0x568(0x08)
	struct UTextBlock* TitleText; // 0x570(0x08)
	struct UOptionsSlider_WBP_C* WaypointOpacitySlider; // 0x578(0x08)
	struct UPlayerSettingsSystem* SystemSettings; // 0x580(0x08)
	struct UPlayerSettingsGame* GameSettings; // 0x588(0x08)
	bool bShowTitle; // 0x590(0x01)
	char pad_591[0x7]; // 0x591(0x07)
	struct FMulticastInlineDelegate OnValueChanged; // 0x598(0x10)

	void ReloadCustomColors(); // Function AccessibilityOptions_WBP.AccessibilityOptions_WBP_C.ReloadCustomColors // (None) // @ game+0xfffffffec0000000
};

