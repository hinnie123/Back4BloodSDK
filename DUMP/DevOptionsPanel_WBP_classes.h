// WidgetBlueprintGeneratedClass DevOptionsPanel_WBP.DevOptionsPanel_WBP_C
// Size: 0x5b0 (Inherited: 0x4f8)
struct UDevOptionsPanel_WBP_C : UDevOptionsPanelUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f8(0x08)
	struct UBaseTextBlock_C* BuildNumberText; // 0x500(0x08)
	struct UOptionsToggleSpinner_WBP_C* DamageNumbersSpinner; // 0x508(0x08)
	struct UKeybindList_WBP_C* DemoBindingsGamepad; // 0x510(0x08)
	struct UKeybindList_WBP_C* DemoBindingsKeyboard; // 0x518(0x08)
	struct UDevAtuinEnvironment_WBP_C* DevAtuinEnvironment; // 0x520(0x08)
	struct UDevMatchmakingBucket_WBP_C* DevMatchmakingBucket; // 0x528(0x08)
	struct UDevMatchmakingStatus_WBP_C* DevMatchmakingStatus; // 0x530(0x08)
	struct UOptionsTextComboBox_WBP_C* DialogueBanksComboBox; // 0x538(0x08)
	struct UOptionsTextComboBox_WBP_C* DialogueEventsComboBox; // 0x540(0x08)
	struct UOptionsTextComboBox_WBP_C* DialogueTestSpeakerComboBox; // 0x548(0x08)
	struct UTextButton_WBP_C* ResetFTUEButton; // 0x550(0x08)
	struct UTaskManRelayStatus_WBP_C* TaskManRelayStatus; // 0x558(0x08)
	struct UTextButton_WBP_C* TestVideoPlaybackButton1; // 0x560(0x08)
	struct UTextButton_WBP_C* TestVideoPlaybackButton2; // 0x568(0x08)
	struct UTextButton_WBP_C* TestVideoPlaybackButton3; // 0x570(0x08)
	struct UTextButton_WBP_C* TestVideoPlaybackButton4; // 0x578(0x08)
	struct UTextButton_WBP_C* ToggleStringDebugButton; // 0x580(0x08)
	struct UDataTable* DemoActionsTable; // 0x588(0x08)
	struct UPlatformCallouts_WBP_C* Callouts; // 0x590(0x08)
	struct FString DamageNumbersCvar; // 0x598(0x10)
	struct UPreRenderedCinematicScreen_WBP_C* CinematicWidget; // 0x5a8(0x08)

	struct UWidget* DoKeybindNavForGamepadList(enum class EUINavigation Navigation); // Function DevOptionsPanel_WBP.DevOptionsPanel_WBP_C.DoKeybindNavForGamepadList // (None) // @ game+0xfffffffec0000000
};

