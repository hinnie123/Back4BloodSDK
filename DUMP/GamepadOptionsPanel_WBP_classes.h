// WidgetBlueprintGeneratedClass GamepadOptionsPanel_WBP.GamepadOptionsPanel_WBP_C
// Size: 0x628 (Inherited: 0x4d0)
struct UGamepadOptionsPanel_WBP_C : UGamepadOptionsPanelUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d0(0x08)
	struct UOptionsTextSpinner_WBP_C* AimAssistSpinner; // 0x4d8(0x08)
	struct UOptionsSlider_WBP_C* AimAssistStrengthSlider; // 0x4e0(0x08)
	struct UScrollBox* BindingsScrollBox; // 0x4e8(0x08)
	struct UTextButton_WBP_C* ButtonGamepadHumanConfig; // 0x4f0(0x08)
	struct UTextButton_WBP_C* ButtonGamepadZombieConfig; // 0x4f8(0x08)
	struct UOptionsSlider_WBP_C* ForceFeedbackScaleSlider; // 0x500(0x08)
	struct UOptionsToggleSpinner_WBP_C* ForceFeedbackSpinner; // 0x508(0x08)
	struct UOptionSectionHeader_WBP_C* GamepadHeader; // 0x510(0x08)
	struct UOptionsSlider_WBP_C* GamepadHighZoomADSSensScalar; // 0x518(0x08)
	struct UOptionsGamepadLayoutGeneric_WBP_C* GamepadLayout_Generic; // 0x520(0x08)
	struct UOptionsGamepadLayoutPS4_WBP_C* GamepadLayout_PS4; // 0x528(0x08)
	struct UOptionsGamepadLayoutPS5_WBP_C* GamepadLayout_PS5; // 0x530(0x08)
	struct UOptionsGamepadLayoutXboxOne_WBP_C* GamepadLayout_XboxOne; // 0x538(0x08)
	struct UOptionsGamepadLayoutXboxSeries_WBP_C* GamepadLayout_XboxSeries; // 0x540(0x08)
	struct UOptionsSlider_WBP_C* GamepadLowZoomADSSensScalar; // 0x548(0x08)
	struct UVerticalBox* GamepadPanel; // 0x550(0x08)
	struct UOptionsSlider_WBP_C* GamepadXAxisExtraSensitivity; // 0x558(0x08)
	struct UOptionsSlider_WBP_C* GamepadXAxisSensitivity; // 0x560(0x08)
	struct UOptionsSlider_WBP_C* GamepadYAxisExtraSensitivity; // 0x568(0x08)
	struct UOptionsSlider_WBP_C* GamepadYAxisSensitivity; // 0x570(0x08)
	struct UOptionsToggleSpinner_WBP_C* HoldToADSSpinner; // 0x578(0x08)
	struct UOptionsToggleSpinner_WBP_C* HoldToCrouchSpinner; // 0x580(0x08)
	struct UOptionsToggleSpinner_WBP_C* HoldToSprintSpinner; // 0x588(0x08)
	struct UOptionSectionHeader_WBP_C* HumanHeader; // 0x590(0x08)
	struct UOptionsToggleSpinner_WBP_C* InvertGamepadHorizSpinner; // 0x598(0x08)
	struct UOptionsToggleSpinner_WBP_C* InvertGamepadSpinner; // 0x5a0(0x08)
	struct UOptionsSlider_WBP_C* LeftStickInnerDeadzoneSlider; // 0x5a8(0x08)
	struct UOptionsSlider_WBP_C* LeftStickOuterDeadzoneSlider; // 0x5b0(0x08)
	struct UOptionSectionHeader_WBP_C* MovementHeader; // 0x5b8(0x08)
	struct UOptionsSlider_WBP_C* RightStickInnerDeadzoneSlider; // 0x5c0(0x08)
	struct UOptionsSlider_WBP_C* RightStickOuterDeadzoneSlider; // 0x5c8(0x08)
	struct UOptionsSlider_WBP_C* RightStickSensitivityCurveSlider; // 0x5d0(0x08)
	struct UOptionsTextSpinner_WBP_C* StickConfigSpinner; // 0x5d8(0x08)
	struct UOptionsTextSpinner_WBP_C* TargetSnappingSpinner; // 0x5e0(0x08)
	struct UOptionSectionHeader_WBP_C* ZombieHeader; // 0x5e8(0x08)
	float SensitivityMax; // 0x5f0(0x04)
	char pad_5F4[0x4]; // 0x5f4(0x04)
	struct FKey CancelKey; // 0x5f8(0x18)
	struct UKeybindList_WBP_C* ActiveList; // 0x610(0x08)
	struct UPlatformCallouts_WBP_C* Callouts; // 0x618(0x08)
	struct UOptionsGamepadLayoutUserWidget* CurrentGamepadLayout; // 0x620(0x08)

	void SelectGamepadLayout(enum class EGamepadImage Type); // Function GamepadOptionsPanel_WBP.GamepadOptionsPanel_WBP_C.SelectGamepadLayout // (None) // @ game+0xfffffffec0000000
};
