// WidgetBlueprintGeneratedClass PreRoundTimer_WBP.PreRoundTimer_WBP_C
// Size: 0x478 (Inherited: 0x450)
struct UPreRoundTimer_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UTextBlock* RemainingTimeText; // 0x458(0x08)
	struct UHorizontalBox* RootPanel; // 0x460(0x08)
	float RemainingTime; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct UTweenContainer* TweenTickContainer; // 0x470(0x08)

	void UpdateVisibility(); // Function PreRoundTimer_WBP.PreRoundTimer_WBP_C.UpdateVisibility // (None) // @ game+0xfffffffec0000000
};

