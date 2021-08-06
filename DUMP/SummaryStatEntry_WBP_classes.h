// WidgetBlueprintGeneratedClass SummaryStatEntry_WBP.SummaryStatEntry_WBP_C
// Size: 0x471 (Inherited: 0x450)
struct USummaryStatEntry_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UTextBlock* IncrementValueText; // 0x458(0x08)
	struct UTextBlock* NameText; // 0x460(0x08)
	struct UTextBlock* TotalValueText; // 0x468(0x08)
	bool bShowIncrement; // 0x470(0x01)

	void ConvertStatToText(int32_t InValue, bool bIsTimer, bool bAlwaysSign, struct FText OutText); // Function SummaryStatEntry_WBP.SummaryStatEntry_WBP_C.ConvertStatToText // (None) // @ game+0xfffffffec0000000
};

