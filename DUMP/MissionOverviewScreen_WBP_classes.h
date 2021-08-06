// WidgetBlueprintGeneratedClass MissionOverviewScreen_WBP.MissionOverviewScreen_WBP_C
// Size: 0x5e4 (Inherited: 0x580)
struct UMissionOverviewScreen_WBP_C : UMissionOverviewScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x580(0x08)
	struct UWidgetAnimation* MapNamesFadeAnim; // 0x588(0x08)
	struct UImage* BG; // 0x590(0x08)
	struct UImage* BGDarken; // 0x598(0x08)
	struct UBaseTextBlock_C* BiggestText; // 0x5a0(0x08)
	struct UBaseTextBlock_C* BigText; // 0x5a8(0x08)
	struct UHorizontalBox* DifficultyHBox; // 0x5b0(0x08)
	struct UImage* DifficultyIcon; // 0x5b8(0x08)
	struct UBaseTextBlock_C* DifficultyText; // 0x5c0(0x08)
	struct UBaseTextBlock_C* MissionNumberText; // 0x5c8(0x08)
	struct UMissionOverview_Footer_WBP_C* MissionOverview_Footer_WBP; // 0x5d0(0x08)
	struct UMissionOverview_HoldoutPanel_WBP_C* MissionOverview_HoldoutPanel_WBP; // 0x5d8(0x08)
	float AnimationSpeed; // 0x5e0(0x04)

	void MissionNumber(struct FText OutMissionNumber); // Function MissionOverviewScreen_WBP.MissionOverviewScreen_WBP_C.MissionNumber // (None) // @ game+0xfffffffec0000000
};

