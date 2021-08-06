// WidgetBlueprintGeneratedClass HubScreen_WBP.HubScreen_WBP_C
// Size: 0x5b0 (Inherited: 0x560)
struct UHubScreen_WBP_C : UHubScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x560(0x08)
	struct UBackgroundBlur_WBP_C* BackgroundBlur_WBP; // 0x568(0x08)
	struct UPlatformCallouts_WBP_C* Callouts; // 0x570(0x08)
	struct UEnvironmentStatus_WBP_C* EnvironmentStatus; // 0x578(0x08)
	struct UFooter_WBP_C* Footer_WBP; // 0x580(0x08)
	struct UPlatformCalloutButton_WBP_C* GamepadSystemCallout; // 0x588(0x08)
	struct UHubHeader_WBP_C* HubHeader; // 0x590(0x08)
	struct UImage* OffscreenBG; // 0x598(0x08)
	struct UCanvasPanel* ScreenContainer; // 0x5a0(0x08)
	struct UTweenContainer* TweenOpenContainer; // 0x5a8(0x08)

	void TransitionTween(bool TransitionIn); // Function HubScreen_WBP.HubScreen_WBP_C.TransitionTween // (None) // @ game+0xfffffffec0000000
};

