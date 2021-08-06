// WidgetBlueprintGeneratedClass MissionLoadout_Header_WBP.MissionLoadout_Header_WBP_C
// Size: 0x488 (Inherited: 0x450)
struct UMissionLoadout_Header_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UBaseTextBlock_C* DifficultyText; // 0x458(0x08)
	struct UTextBlock* HeaderText; // 0x460(0x08)
	struct UPreRoundTimer_WBP_C* LobbyTimer; // 0x468(0x08)
	struct UBaseTextBlock_C* MapNameText; // 0x470(0x08)
	struct UHorizontalBox* MissionInfoPanel; // 0x478(0x08)
	struct UMissionLoadout_HeaderPip_WBP_C* Pips; // 0x480(0x08)

	void HidePips(); // Function MissionLoadout_Header_WBP.MissionLoadout_Header_WBP_C.HidePips // (None) // @ game+0xfffffffec0000000
};

