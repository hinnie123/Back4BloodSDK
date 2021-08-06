// WidgetBlueprintGeneratedClass InvitePrompt_WBP.InvitePrompt_WBP_C
// Size: 0x4b0 (Inherited: 0x468)
struct UInvitePrompt_WBP_C : UInvitePromptUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x468(0x08)
	struct UWidgetAnimation* Hide; // 0x470(0x08)
	struct UWidgetAnimation* Show; // 0x478(0x08)
	struct UPlatformCalloutButton_WBP_C* AcceptCallout; // 0x480(0x08)
	struct UPlatformCalloutButton_WBP_C* IgnoreCallout; // 0x488(0x08)
	struct UTextBlock* MessageBody; // 0x490(0x08)
	struct UProgressBar* TimerProgress; // 0x498(0x08)
	struct UTextBlock* TimerText; // 0x4a0(0x08)
	float TimeRemaining; // 0x4a8(0x04)
	float TimeDuration; // 0x4ac(0x04)

	void UpdateTimer(); // Function InvitePrompt_WBP.InvitePrompt_WBP_C.UpdateTimer // (None) // @ game+0xfffffffec0000000
};

