// WidgetBlueprintGeneratedClass CardStats_WBP.CardStats_WBP_C
// Size: 0x540 (Inherited: 0x4c8)
struct UCardStats_WBP_C : UCardStatsUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c8(0x08)
	struct UAffinityStats_WBP_C* AffinityStats; // 0x4d0(0x08)
	struct UVerticalBox* StatsList; // 0x4d8(0x08)
	struct FSlateFontInfo CardStatStyle; // 0x4e0(0x60)

	struct UStatEntryUserWidget* CreateStatEntry(); // Function CardStats_WBP.CardStats_WBP_C.CreateStatEntry // (None) // @ game+0xfffffffec0000000
};

