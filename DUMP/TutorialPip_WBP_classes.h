// WidgetBlueprintGeneratedClass TutorialPip_WBP.TutorialPip_WBP_C
// Size: 0x478 (Inherited: 0x450)
struct UTutorialPip_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UOverlay* RootContainer; // 0x458(0x08)
	struct UImage* TutorialIcon; // 0x460(0x08)
	float SetDelay; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct UTweenContainer* TweenContainer; // 0x470(0x08)

	void HandleVisibilityChanged(enum class ESlateVisibility NewVisibility); // Function TutorialPip_WBP.TutorialPip_WBP_C.HandleVisibilityChanged // (None) // @ game+0xfffffffec0000000
};

