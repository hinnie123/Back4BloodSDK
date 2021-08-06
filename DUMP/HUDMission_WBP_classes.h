// WidgetBlueprintGeneratedClass HUDMission_WBP.HUDMission_WBP_C
// Size: 0x4d0 (Inherited: 0x488)
struct UHUDMission_WBP_C : UHUDMissionEntryUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UOverlay* MissionHeaderContainer; // 0x490(0x08)
	struct UBaseTextBlock_C* MissionText; // 0x498(0x08)
	struct UVerticalBox* ObjectivesVBox; // 0x4a0(0x08)
	struct UImage* PrimaryBG; // 0x4a8(0x08)
	struct UTweenContainer* NewMission; // 0x4b0(0x08)
	struct FText OptionalText; // 0x4b8(0x18)

	void SetPriorityStyle(enum class EMissionType InMissionType); // Function HUDMission_WBP.HUDMission_WBP_C.SetPriorityStyle // (None) // @ game+0xfffffffec0000000
};

