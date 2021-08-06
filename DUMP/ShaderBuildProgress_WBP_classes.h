// WidgetBlueprintGeneratedClass ShaderBuildProgress_WBP.ShaderBuildProgress_WBP_C
// Size: 0x47d (Inherited: 0x450)
struct UShaderBuildProgress_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UCircularThrobber* CircularThrobber_73; // 0x458(0x08)
	struct UProgressBar* CompilationProgress; // 0x460(0x08)
	struct UVerticalBox* OuterVBox; // 0x468(0x08)
	struct UBaseTextBlock_C* ProgressText; // 0x470(0x08)
	int32_t MaxRemainingToCompile; // 0x478(0x04)
	bool bShaderCompilationEnabled; // 0x47c(0x01)

	void UpdateProgress(); // Function ShaderBuildProgress_WBP.ShaderBuildProgress_WBP_C.UpdateProgress // (None) // @ game+0xfffffffec0000000
};

