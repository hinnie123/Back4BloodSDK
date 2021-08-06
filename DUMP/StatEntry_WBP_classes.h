// WidgetBlueprintGeneratedClass StatEntry_WBP.StatEntry_WBP_C
// Size: 0x540 (Inherited: 0x478)
struct UStatEntry_WBP_C : UStatEntryUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct UImage* DiffArrow; // 0x480(0x08)
	struct UTextBlock* DiffText; // 0x488(0x08)
	struct UImage* Icon; // 0x490(0x08)
	struct UTextBlock* StatName; // 0x498(0x08)
	struct UTextBlock* StatValue; // 0x4a0(0x08)
	struct FSlateColor ValueDefaultColor; // 0x4a8(0x30)
	int32_t StatNameMinWidth; // 0x4d8(0x04)
	char pad_4DC[0x4]; // 0x4dc(0x04)
	struct FSlateFontInfo StatFontStyle; // 0x4e0(0x60)

	void PreConstruct(bool IsDesignTime); // Function StatEntry_WBP.StatEntry_WBP_C.PreConstruct // (None) // @ game+0xfffffffec0000000
};

