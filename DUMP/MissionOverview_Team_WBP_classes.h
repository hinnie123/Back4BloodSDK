// WidgetBlueprintGeneratedClass MissionOverview_Team_WBP.MissionOverview_Team_WBP_C
// Size: 0x488 (Inherited: 0x458)
struct UMissionOverview_Team_WBP_C : UMissionOverviewTeamUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	struct UBaseTextBlock_C* LeftScore; // 0x460(0x08)
	struct UVerticalBox* PlayerVBox; // 0x468(0x08)
	struct UBaseTextBlock_C* RightScore; // 0x470(0x08)
	struct UBaseTextBlock_C* TeamName; // 0x478(0x08)
	struct UHorizontalBox* TeamScoreHBox; // 0x480(0x08)

	void UpdateTeamEntries(struct TArray<struct APlayerSlot*> InPlayerSlots); // Function MissionOverview_Team_WBP.MissionOverview_Team_WBP_C.UpdateTeamEntries // (None) // @ game+0xfffffffec0000000
};

