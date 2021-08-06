// WidgetBlueprintGeneratedClass MissionLoadoutScreen_WBP.MissionLoadoutScreen_WBP_C
// Size: 0x5a0 (Inherited: 0x530)
struct UMissionLoadoutScreen_WBP_C : UMissionLoadoutScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UPlatformCallouts_WBP_C* Callouts; // 0x538(0x08)
	struct UCharacterSelectPanel_WBP_C* CharacterPanel; // 0x540(0x08)
	struct UMissionLoadout_DeckPanel_WBP_C* DeckPanel; // 0x548(0x08)
	struct UImage* Fader; // 0x550(0x08)
	struct UFooter_WBP_C* Footer_WBP; // 0x558(0x08)
	struct UMissionLoadout_Header_WBP_C* Header; // 0x560(0x08)
	struct UMissionLoadout_LaunchPanel_WBP_C* LaunchPanel; // 0x568(0x08)
	struct UOverlay* LobbyContainer; // 0x570(0x08)
	struct UPlayerLoadouts_WBP_C* PlayerLoadouts; // 0x578(0x08)
	struct TArray<struct UGobiUserWidget*> PanelArray; // 0x580(0x10)
	int32_t PanelIndex; // 0x590(0x04)
	char pad_594[0x4]; // 0x594(0x04)
	struct UTweenContainer* TweenOpenContainer; // 0x598(0x08)

	void HandleTick(); // Function MissionLoadoutScreen_WBP.MissionLoadoutScreen_WBP_C.HandleTick // (None) // @ game+0xfffffffec0000000
};

