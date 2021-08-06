// WidgetBlueprintGeneratedClass ControlsOptionsPanel_WBP.ControlsOptionsPanel_WBP_C
// Size: 0x5b8 (Inherited: 0x4c0)
struct UControlsOptionsPanel_WBP_C : UControlsOptionsPanelUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	struct UOverlay* BindingPopup; // 0x4c8(0x08)
	struct UScrollBox* BindingsScrollBox; // 0x4d0(0x08)
	struct UKeybindList_WBP_C* CommonBindings; // 0x4d8(0x08)
	struct UOptionsToggleSpinner_WBP_C* CycleAccessoriesSpinner; // 0x4e0(0x08)
	struct UKeybindList_WBP_C* HeroBindings; // 0x4e8(0x08)
	struct UOptionsToggleSpinner_WBP_C* HoldToADSSpinner; // 0x4f0(0x08)
	struct UOptionsToggleSpinner_WBP_C* HoldToCrouchSpinner; // 0x4f8(0x08)
	struct UOptionsToggleSpinner_WBP_C* HoldToSprintSpinner; // 0x500(0x08)
	struct UOptionSectionHeader_WBP_C* HumanHeader; // 0x508(0x08)
	struct UKeybindList_WBP_C* InfectedBindings; // 0x510(0x08)
	struct UOptionsToggleSpinner_WBP_C* InvertMouseSpinner; // 0x518(0x08)
	struct URichTextBlock* KeyboardCancelText; // 0x520(0x08)
	struct UOptionSectionHeader_WBP_C* MouseHeader; // 0x528(0x08)
	struct UOptionsSlider_WBP_C* MouseHighZoomADSSensScalar; // 0x530(0x08)
	struct UOptionsSlider_WBP_C* MouseLowZoomADSSensScalar; // 0x538(0x08)
	struct UOptionsSlider_WBP_C* MouseSensitivitySlider; // 0x540(0x08)
	struct UOptionsToggleSpinner_WBP_C* MouseSmoothingSpinner; // 0x548(0x08)
	struct UKeybindList_WBP_C* MovementBindings; // 0x550(0x08)
	struct UOptionSectionHeader_WBP_C* MovementHeader; // 0x558(0x08)
	struct UTextBlock* TimerText; // 0x560(0x08)
	struct UOptionsUnboundWarning_WBP_C* UnboundWarning; // 0x568(0x08)
	struct UOptionSectionHeader_WBP_C* ZombieHeader; // 0x570(0x08)
	float SensitivityMax; // 0x578(0x04)
	char pad_57C[0x4]; // 0x57c(0x04)
	struct FKey CancelKey; // 0x580(0x18)
	struct UKeybindList_WBP_C* ActiveList; // 0x598(0x08)
	struct UPlatformCallouts_WBP_C* Callouts; // 0x5a0(0x08)
	struct TArray<struct UKeybindList_WBP_C*> AllKeybindLists; // 0x5a8(0x10)

	void HideUnboundWarning(); // Function ControlsOptionsPanel_WBP.ControlsOptionsPanel_WBP_C.HideUnboundWarning // (None) // @ game+0xfffffffec0000000
};
