// WidgetBlueprintGeneratedClass MatchmakingSettingsInfo_WBP.MatchmakingSettingsInfo_WBP_C
// Size: 0x550 (Inherited: 0x4f8)
struct UMatchmakingSettingsInfo_WBP_C : UMatchmakingSettingsInfoUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f8(0x08)
	struct UButtonTextBlock_C* ActName; // 0x500(0x08)
	struct UBaseTextBlock_C* ContinuesText; // 0x508(0x08)
	struct UImage* DifficultyIcon; // 0x510(0x08)
	struct UDifficultyTextList_WBP_C* DifficultyTextList; // 0x518(0x08)
	struct UButtonTextBlock_C* LargeMapName; // 0x520(0x08)
	struct UButtonTextBlock_C* MapName; // 0x528(0x08)
	struct UImage* RunStateIcon; // 0x530(0x08)
	struct UBaseTextBlock_C* SaveDate; // 0x538(0x08)
	struct UBaseTextBlock_C* SaveTime; // 0x540(0x08)
	struct UBaseTextBlock_C* Version; // 0x548(0x08)

	void SetRunState(enum class ECampaignRunState InState); // Function MatchmakingSettingsInfo_WBP.MatchmakingSettingsInfo_WBP_C.SetRunState // (None) // @ game+0xfffffffec0000000
};

