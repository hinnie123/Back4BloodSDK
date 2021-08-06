// WidgetBlueprintGeneratedClass AudioOptionsPanel_WBP.AudioOptionsPanel_WBP_C
// Size: 0x570 (Inherited: 0x490)
struct UAudioOptionsPanel_WBP_C : UAudioOptionsPanelUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct UOptionsTextComboBox_WBP_C* DialogueLanguageComboBox; // 0x498(0x08)
	struct UOptionsSlider_WBP_C* DialogVolumeSlider; // 0x4a0(0x08)
	struct UOptionSectionHeader_WBP_C* GameplayHeader; // 0x4a8(0x08)
	struct UOptionsSlider_WBP_C* MasterVolumeSlider; // 0x4b0(0x08)
	struct UOptionsSlider_WBP_C* MicThresholdSlider; // 0x4b8(0x08)
	struct UOptionsSlider_WBP_C* MicVolumeSlider; // 0x4c0(0x08)
	struct UOptionsTextSpinner_WBP_C* MixProfileSpinner; // 0x4c8(0x08)
	struct UOptionsSlider_WBP_C* MusicVolumeSlider; // 0x4d0(0x08)
	struct UOptionsToggleSpinner_WBP_C* MuteWhenUnfocusedSpinner; // 0x4d8(0x08)
	struct UOptionsBindingsPopup_WBP_C* OptionsBindingsPopup_WBP; // 0x4e0(0x08)
	struct UKeybindEntryWidget_WBP_C* PushToTalkKeybindEntry; // 0x4e8(0x08)
	struct UOptionsTextSpinner_WBP_C* PushToTalkSpinner; // 0x4f0(0x08)
	struct UOptionsSlider_WBP_C* SFXVolumeSlider; // 0x4f8(0x08)
	struct UTextButton_WBP_C* SpeakerTestButton; // 0x500(0x08)
	struct UOptionsUnboundWarning_WBP_C* UnboundWarning; // 0x508(0x08)
	struct UGenericCheckBox_C* VoiceTestCheckBox; // 0x510(0x08)
	struct UOptionsSlider_WBP_C* VoiceVolumeSlider; // 0x518(0x08)
	struct UOptionSectionHeader_WBP_C* VOIPHeader; // 0x520(0x08)
	struct UOptionsToggleSpinner_WBP_C* VOIPSideChainSpinner; // 0x528(0x08)
	struct UPlayerSettingsSystem* SystemSettings; // 0x530(0x08)
	struct TArray<struct FString> EmptyActionsArray; // 0x538(0x10)
	struct FName PTTActionName; // 0x548(0x08)
	struct TArray<struct UDataTable*> ConflictingTablesToCheck; // 0x550(0x10)
	struct TArray<struct FText> PushToTalkSpinnerValues; // 0x560(0x10)

	void HideUnboundWarning(); // Function AudioOptionsPanel_WBP.AudioOptionsPanel_WBP_C.HideUnboundWarning // (None) // @ game+0xfffffffec0000000
};

