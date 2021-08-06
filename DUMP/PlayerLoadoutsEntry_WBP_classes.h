// WidgetBlueprintGeneratedClass PlayerLoadoutsEntry_WBP.PlayerLoadoutsEntry_WBP_C
// Size: 0x4e8 (Inherited: 0x498)
struct UPlayerLoadoutsEntry_WBP_C : UPlayerLoadoutsEntryUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x498(0x08)
	struct UHorizontalBox* DeckStatsPanel; // 0x4a0(0x08)
	struct UImage* EmptyBG; // 0x4a8(0x08)
	struct UImage* Frame; // 0x4b0(0x08)
	struct UImage* NameBackground; // 0x4b8(0x08)
	struct UImage* NotReadyOverlay; // 0x4c0(0x08)
	struct UPlayerName_WBP_C* PlayerName; // 0x4c8(0x08)
	struct UImage* Portrait; // 0x4d0(0x08)
	struct UBaseTextBlock_C* PreRoundStep; // 0x4d8(0x08)
	struct UImage* ReadyCheck; // 0x4e0(0x08)

	void SetPlayerSlot(struct APlayerSlot* InPlayerSlot); // Function PlayerLoadoutsEntry_WBP.PlayerLoadoutsEntry_WBP_C.SetPlayerSlot // (None) // @ game+0xfffffffec0000000
};

