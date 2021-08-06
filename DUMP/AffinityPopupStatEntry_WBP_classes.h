// WidgetBlueprintGeneratedClass AffinityPopupStatEntry_WBP.AffinityPopupStatEntry_WBP_C
// Size: 0x489 (Inherited: 0x460)
struct UAffinityPopupStatEntry_WBP_C : UAffinityPopupStatEntryUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UTextBlock* AffinityName; // 0x468(0x08)
	struct UBaseTextBlock_C* StatCountText; // 0x470(0x08)
	struct UImage* StatIcon; // 0x478(0x08)
	struct UVerticalBox* StatsPanel; // 0x480(0x08)
	bool bIsValid; // 0x488(0x01)

	void UpdateTextColor(); // Function AffinityPopupStatEntry_WBP.AffinityPopupStatEntry_WBP_C.UpdateTextColor // (None) // @ game+0xfffffffec0000000
};

