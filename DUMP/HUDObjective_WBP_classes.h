// WidgetBlueprintGeneratedClass HUDObjective_WBP.HUDObjective_WBP_C
// Size: 0x538 (Inherited: 0x4f0)
struct UHUDObjective_WBP_C : UHUDMissionObjectiveEntryUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f0(0x08)
	struct UWidgetAnimation* ObjectiveCompleted; // 0x4f8(0x08)
	struct UWidgetAnimation* ObjectiveFailed; // 0x500(0x08)
	struct UWidgetAnimation* TimerLow; // 0x508(0x08)
	struct UWidgetAnimation* ObjectiveUpdate; // 0x510(0x08)
	struct UImage* Fill; // 0x518(0x08)
	struct UImage* Icon; // 0x520(0x08)
	struct URichTextBlock* RichObjectiveText; // 0x528(0x08)
	struct UBaseTextBlock_C* TimerText; // 0x530(0x08)

	void SetStateStyle(); // Function HUDObjective_WBP.HUDObjective_WBP_C.SetStateStyle // (None) // @ game+0xfffffffec0000000
};

