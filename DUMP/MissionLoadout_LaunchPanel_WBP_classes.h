// WidgetBlueprintGeneratedClass MissionLoadout_LaunchPanel_WBP.MissionLoadout_LaunchPanel_WBP_C
// Size: 0x4d8 (Inherited: 0x450)
struct UMissionLoadout_LaunchPanel_WBP_C : UMissionLaunchPanelUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UCanvasPanel* CharactersPanel; // 0x458(0x08)
	struct UMissionLoadout_LaunchPartyEntry_WBP_C* Entry1; // 0x460(0x08)
	struct UMissionLoadout_LaunchPartyEntry_WBP_C* Entry2; // 0x468(0x08)
	struct UMissionLoadout_LaunchPartyEntry_WBP_C* Entry3; // 0x470(0x08)
	struct UMissionLoadout_LaunchPartyEntry_WBP_C* Entry4; // 0x478(0x08)
	struct UImage* Fader; // 0x480(0x08)
	struct UPrimaryActionCalloutButton_WBP_C* LockInButton; // 0x488(0x08)
	struct UOverlay* LockInCalloutPanel; // 0x490(0x08)
	struct UTutorialTip_WBP_C* TutorialTip; // 0x498(0x08)
	struct UGameplayCardManager* GameplayCardManager; // 0x4a0(0x08)
	struct FMulticastInlineDelegate OnLoadoutAcceptFinished; // 0x4a8(0x10)
	struct UTweenContainer* TweenOpenContainer; // 0x4b8(0x08)
	float AnimDelay; // 0x4c0(0x04)
	char pad_4C4[0x4]; // 0x4c4(0x04)
	struct FMulticastInlineDelegate OnLoadoutAcceptStart; // 0x4c8(0x10)

	void OnAnimOpenEnd(struct UTweenVector2D* Tween); // Function MissionLoadout_LaunchPanel_WBP.MissionLoadout_LaunchPanel_WBP_C.OnAnimOpenEnd // (None) // @ game+0xfffffffec0000000
};

