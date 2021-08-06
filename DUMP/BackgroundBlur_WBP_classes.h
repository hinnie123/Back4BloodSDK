// WidgetBlueprintGeneratedClass BackgroundBlur_WBP.BackgroundBlur_WBP_C
// Size: 0x4a4 (Inherited: 0x450)
struct UBackgroundBlur_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UBackgroundBlur* Blur; // 0x458(0x08)
	struct UImage* Tint; // 0x460(0x08)
	float SetBlurStrength; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct FSlateColor SetColor; // 0x470(0x30)
	float SetBackgroundOpacity; // 0x4a0(0x04)

	void PreConstruct(bool IsDesignTime); // Function BackgroundBlur_WBP.BackgroundBlur_WBP_C.PreConstruct // (None) // @ game+0xfffffffec0000000
};

