// WidgetBlueprintGeneratedClass MatchmakingSettingsPanel_WBP.MatchmakingSettingsPanel_WBP_C
// Size: 0x658 (Inherited: 0x558)
struct UMatchmakingSettingsPanel_WBP_C : UMatchmakingSettingsPanelUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x558(0x08)
	struct UActSelect_WBP_C* ActSelect; // 0x560(0x08)
	struct UTutorialTip_WBP_C* ContinueRunTutorialTip; // 0x568(0x08)
	struct UCrossPlayState_WBP_C* CrossPlayState; // 0x570(0x08)
	struct UMatchmakingDifficultySelect_WBP_C* DifficultySelect; // 0x578(0x08)
	struct UFirstPartyAccount_WBP_C* FirstPartyAccount; // 0x580(0x08)
	struct UImage* Header_Underline; // 0x588(0x08)
	struct UTextButton_WBP_C* MapButton; // 0x590(0x08)
	struct UMapSelect_WBP_C* MapSelect; // 0x598(0x08)
	struct UTutorialTip_WBP_C* MapUnlockTutorialTip; // 0x5a0(0x08)
	struct USaveSlotList_WBP_C* SaveSlotList; // 0x5a8(0x08)
	struct UMatchmakingSettingsInfo_WBP_C* SettingsInfo; // 0x5b0(0x08)
	struct UTutorialTip_WBP_C* SettingsTutorialTip; // 0x5b8(0x08)
	struct UWidgetSwitcher* SettingSwitcher; // 0x5c0(0x08)
	struct UTextButton_WBP_C* StartMatchmakingButton; // 0x5c8(0x08)
	struct UVerticalBox* TopPanel; // 0x5d0(0x08)
	struct FMulticastInlineDelegate OnDifficultySelected; // 0x5d8(0x10)
	struct FMulticastInlineDelegate OnMapSelected; // 0x5e8(0x10)
	struct FMulticastInlineDelegate OnCreateNewRun; // 0x5f8(0x10)
	struct FMulticastInlineDelegate OnDifficultyToggled; // 0x608(0x10)
	struct FMulticastInlineDelegate OnMapChainToggled; // 0x618(0x10)
	struct FMulticastInlineDelegate OnStartMatchmaking; // 0x628(0x10)
	struct FMulticastInlineDelegate OnSlotSelected; // 0x638(0x10)
	struct FMulticastInlineDelegate OnActSelected; // 0x648(0x10)

	void SetButtonText(); // Function MatchmakingSettingsPanel_WBP.MatchmakingSettingsPanel_WBP_C.SetButtonText // (None) // @ game+0xfffffffec0000000
};

