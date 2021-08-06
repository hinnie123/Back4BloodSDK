// WidgetBlueprintGeneratedClass LegalScreen_WBP.LegalScreen_WBP_C
// Size: 0x58b (Inherited: 0x530)
struct ULegalScreen_WBP_C : ULegalScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UWidgetAnimation* EpilepsyWarningFadeOut; // 0x538(0x08)
	struct UWidgetAnimation* EpilepsyWarningDelay10s; // 0x540(0x08)
	struct UWidgetAnimation* LegalFadeOut; // 0x548(0x08)
	struct UWidgetAnimation* LegalFadeIn; // 0x550(0x08)
	struct UWidgetAnimation* LogoFadeOut; // 0x558(0x08)
	struct UWidgetAnimation* LogoFadeIn; // 0x560(0x08)
	struct UVerticalBox* LegalPanel; // 0x568(0x08)
	struct UShaderBuildProgress_WBP_C* ShaderBuildProgress_WBP; // 0x570(0x08)
	struct FMulticastInlineDelegate OnAnimationsFinished; // 0x578(0x10)
	bool bWaitOnAssets; // 0x588(0x01)
	bool bShaderCompilationEnabled; // 0x589(0x01)
	bool bSkipLegalScreen; // 0x58a(0x01)

	void ShaderCompilationFinished(bool OutWaiting); // Function LegalScreen_WBP.LegalScreen_WBP_C.ShaderCompilationFinished // (None) // @ game+0xfffffffec0000000
};

