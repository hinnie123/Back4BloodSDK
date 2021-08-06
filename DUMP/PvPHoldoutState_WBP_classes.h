// WidgetBlueprintGeneratedClass PvPHoldoutState_WBP.PvPHoldoutState_WBP_C
// Size: 0x538 (Inherited: 0x4c0)
struct UPvPHoldoutState_WBP_C : UPvPHoldoutStateUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	struct UWidgetAnimation* Announcement_Round_Complete; // 0x4c8(0x08)
	struct UWidgetAnimation* Announcement; // 0x4d0(0x08)
	struct UWidgetAnimation* PulseEnemyTimer; // 0x4d8(0x08)
	struct UWidgetAnimation* PulseAllyTimer; // 0x4e0(0x08)
	struct UBaseTextBlock_C* AllyScore; // 0x4e8(0x08)
	struct UBaseTextBlock_C* AllyTimer; // 0x4f0(0x08)
	struct UBaseTextBlock_C* AnnouncementHeader; // 0x4f8(0x08)
	struct UImage* BG; // 0x500(0x08)
	struct UImage* BG_2; // 0x508(0x08)
	struct UPvPHoldout_Phase_WBP_C* CollapsePhase; // 0x510(0x08)
	struct UBaseTextBlock_C* EnemyScore; // 0x518(0x08)
	struct UBaseTextBlock_C* EnemyTimer; // 0x520(0x08)
	struct UBaseTextBlock_C* MatchStateHeader; // 0x528(0x08)
	struct UHorizontalBox* TeamTimerHBox; // 0x530(0x08)

	void GetUltimatePhase(int32_t OutPhase); // Function PvPHoldoutState_WBP.PvPHoldoutState_WBP_C.GetUltimatePhase // (None) // @ game+0xfffffffec0000000
};

