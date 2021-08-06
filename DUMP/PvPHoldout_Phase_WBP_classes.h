// WidgetBlueprintGeneratedClass PvPHoldout_Phase_WBP.PvPHoldout_Phase_WBP_C
// Size: 0x4c9 (Inherited: 0x470)
struct UPvPHoldout_Phase_WBP_C : UPvPHoldoutPhaseUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	struct UWidgetAnimation* TimerTick; // 0x478(0x08)
	struct UWidgetAnimation* CollapseStateChange; // 0x480(0x08)
	struct UWidgetAnimation* DefaultStateChange; // 0x488(0x08)
	struct UImage* BG; // 0x490(0x08)
	struct UImage* Collapse; // 0x498(0x08)
	struct UImage* Icon; // 0x4a0(0x08)
	struct UBaseTextBlock_C* PhaseText; // 0x4a8(0x08)
	struct UImage* Pip; // 0x4b0(0x08)
	struct UCircularProgressBar_WBP_C* Radial; // 0x4b8(0x08)
	struct UImage* Skull; // 0x4c0(0x08)
	enum class EHoldoutState HoldoutState; // 0x4c8(0x01)

	void GetCurrentPhase(char OutPhase); // Function PvPHoldout_Phase_WBP.PvPHoldout_Phase_WBP_C.GetCurrentPhase // (None) // @ game+0xfffffffec0000000
};

