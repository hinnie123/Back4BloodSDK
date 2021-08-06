// WidgetBlueprintGeneratedClass CircularProgressBar_WBP.CircularProgressBar_WBP_C
// Size: 0x4e0 (Inherited: 0x450)
struct UCircularProgressBar_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UImage* ProgressImage; // 0x458(0x08)
	struct UMaterialInstanceDynamic* ProgressMaterial; // 0x460(0x08)
	float Progress; // 0x468(0x04)
	bool IsAbility; // 0x46c(0x01)
	char pad_46D[0x3]; // 0x46d(0x03)
	float FGTransparency; // 0x470(0x04)
	float BGTransparency; // 0x474(0x04)
	struct UTexture* AlphaTexture; // 0x478(0x08)
	struct FSlateColor FGColor; // 0x480(0x30)
	struct FSlateColor BGColor; // 0x4b0(0x30)

	void SetProgress(float Percent); // Function CircularProgressBar_WBP.CircularProgressBar_WBP_C.SetProgress // (None) // @ game+0xfffffffec0000000
};

