// WidgetBlueprintGeneratedClass Header_WBP.Header_WBP_C
// Size: 0x4b0 (Inherited: 0x450)
struct UHeader_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UImage* FullScreenGradient; // 0x458(0x08)
	struct UImage* HR; // 0x460(0x08)
	struct UImage* LetterboxGradient; // 0x468(0x08)
	struct UImage* Tint; // 0x470(0x08)
	struct FSlateColor SetFillColor; // 0x478(0x30)
	float SetFillOpacity; // 0x4a8(0x04)
	enum class ESlateVisibility SetFillVisibility; // 0x4ac(0x01)
	enum class ESlateVisibility SetHRVisibility; // 0x4ad(0x01)
	enum class ESlateVisibility SetLetterboxGradientVisibility; // 0x4ae(0x01)
	enum class ESlateVisibility SetFullScreenGradientVisibility; // 0x4af(0x01)

	void PreConstruct(bool IsDesignTime); // Function Header_WBP.Header_WBP_C.PreConstruct // (None) // @ game+0xfffffffec0000000
};

