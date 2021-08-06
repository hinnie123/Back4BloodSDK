// WidgetBlueprintGeneratedClass BurnCardsPanel_WBP.BurnCardsPanel_WBP_C
// Size: 0x490 (Inherited: 0x450)
struct UBurnCardsPanel_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UImage* BG; // 0x458(0x08)
	struct UWrapBox* CardWrapBox; // 0x460(0x08)
	struct UGameplayCardFilter_WBP_C* GameplayCardFilter_WBP; // 0x468(0x08)
	struct USearchFilter_WBP_C* SearchFilter_WBP; // 0x470(0x08)
	enum class ECardFilter Filter; // 0x478(0x01)
	bool CanPlayBurnCards; // 0x479(0x01)
	char pad_47A[0x6]; // 0x47a(0x06)
	struct FMulticastInlineDelegate BurnCardPlayed; // 0x480(0x10)

	void FocusFirstCard(); // Function BurnCardsPanel_WBP.BurnCardsPanel_WBP_C.FocusFirstCard // (None) // @ game+0xfffffffec0000000
};

