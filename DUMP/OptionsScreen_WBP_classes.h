// WidgetBlueprintGeneratedClass OptionsScreen_WBP.OptionsScreen_WBP_C
// Size: 0x6e8 (Inherited: 0x5a8)
struct UOptionsScreen_WBP_C : UOptionsScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5a8(0x08)
	struct UAudioOptionsPanel_WBP_C* AudioOptions; // 0x5b0(0x08)
	struct UTabRadioButton_C* AudioTabButton; // 0x5b8(0x08)
	struct UBaseTextBlock_C* AudioTabText; // 0x5c0(0x08)
	struct UBackgroundBlur_WBP_C* BackgroundBlur_WBP_2; // 0x5c8(0x08)
	struct UPlatformCallouts_WBP_C* Callouts; // 0x5d0(0x08)
	struct UCreditsOptionsPanel_WBP_C* CreditsOptions; // 0x5d8(0x08)
	struct UTabRadioButton_C* CreditsTabButton; // 0x5e0(0x08)
	struct UBaseTextBlock_C* CreditTabText; // 0x5e8(0x08)
	struct UDevOptionsPanel_WBP_C* DevOptions; // 0x5f0(0x08)
	struct UTabRadioButton_C* DevTabButton; // 0x5f8(0x08)
	struct UBaseTextBlock_C* DevTabText; // 0x600(0x08)
	struct UFooter_WBP_C* Footer_WBP; // 0x608(0x08)
	struct UGamepadConfigPanel_WBP_C* GamepadConfigOptions; // 0x610(0x08)
	struct UGamepadOptionsPanel_WBP_C* GamepadOptions; // 0x618(0x08)
	struct UTabRadioButton_C* GamepadTabButton; // 0x620(0x08)
	struct UBaseTextBlock_C* GamepadTabText; // 0x628(0x08)
	struct UGameplayOptionsPanel_WBP_C* GameplayOptions; // 0x630(0x08)
	struct UTabRadioButton_C* GameplayTabButton; // 0x638(0x08)
	struct UBaseTextBlock_C* GameplayTabText; // 0x640(0x08)
	struct UGraphicsOptionsPanel_WBP_C* GraphicsOptions; // 0x648(0x08)
	struct UTabRadioButton_C* GraphicsTabButton; // 0x650(0x08)
	struct UBaseTextBlock_C* GraphicsTabText; // 0x658(0x08)
	struct UImage* Header_Underline; // 0x660(0x08)
	struct UHeader_WBP_C* Header_WBP; // 0x668(0x08)
	struct UTabRadioButton_C* MouseAndKeyControlsTabButton; // 0x670(0x08)
	struct UControlsOptionsPanel_WBP_C* MouseAndKeyOptions; // 0x678(0x08)
	struct UBaseTextBlock_C* MouseAndKeyText; // 0x680(0x08)
	struct UPlatformCalloutImage_WBP_C* NextTabCalloutImage; // 0x688(0x08)
	struct UWidgetSwitcher* PanelSwitcher; // 0x690(0x08)
	struct UPlatformCalloutImage_WBP_C* PrevTabCalloutImage; // 0x698(0x08)
	struct USafeZoneOptions_WBP_C* SafeZoneOptions; // 0x6a0(0x08)
	struct UHorizontalBox* TabSelectHBox; // 0x6a8(0x08)
	struct TArray<struct UTabRadioButton_C*> PanelButtons; // 0x6b0(0x10)
	struct TArray<struct UUserWidget*> Panels; // 0x6c0(0x10)
	float BackgroundBlurStrength; // 0x6d0(0x04)
	float BackgroundRenderOpacity; // 0x6d4(0x04)
	bool bIsMouseAndKeyChecked; // 0x6d8(0x01)
	bool bIsAudioChecked; // 0x6d9(0x01)
	bool bIsGameplayChecked; // 0x6da(0x01)
	bool bIsDevChecked; // 0x6db(0x01)
	bool bIsGraphicsChecked; // 0x6dc(0x01)
	bool bIsCreditsChecked; // 0x6dd(0x01)
	bool bIsGamepadChecked; // 0x6de(0x01)
	char pad_6DF[0x1]; // 0x6df(0x01)
	struct UOptionsPanelUserWidget* PendingNextPanel; // 0x6e0(0x08)

	void OnResetToDefaultPopupClosed(struct UPopupUserWidget* Popup, struct FName Command); // Function OptionsScreen_WBP.OptionsScreen_WBP_C.OnResetToDefaultPopupClosed // (None) // @ game+0xfffffffec0000000
};

