// WidgetBlueprintGeneratedClass PlayerModule_WBP.PlayerModule_WBP_C
// Size: 0x518 (Inherited: 0x458)
struct UPlayerModule_WBP_C : UPlayerLifeStateUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	struct UWidgetAnimation* LowHealthPulse; // 0x460(0x08)
	struct UWidgetAnimation* LowHealthStatic; // 0x468(0x08)
	struct UWidgetAnimation* LowHealthLoop; // 0x470(0x08)
	struct UImage* BG; // 0x478(0x08)
	struct UImage* BG_Frame; // 0x480(0x08)
	struct UImage* BG_Gradient; // 0x488(0x08)
	struct UImage* BG_Incap_Gradient; // 0x490(0x08)
	struct UOverlay* Frame; // 0x498(0x08)
	struct UHorizontalBox* Health; // 0x4a0(0x08)
	struct UVerticalBox* HealthPanel; // 0x4a8(0x08)
	struct UTextBlock* HealthText; // 0x4b0(0x08)
	struct UImage* IconHealth; // 0x4b8(0x08)
	struct UTextBlock* MaxHealthText; // 0x4c0(0x08)
	struct UPlayerHealth_WBP_C* PlayerHealth; // 0x4c8(0x08)
	struct UPlayerMicIcon_WBP_C* PlayerMicIcon; // 0x4d0(0x08)
	struct UCanvasPanel* PlayerModule; // 0x4d8(0x08)
	struct UPlayerStrikes_WBP_C* PlayerStrikes; // 0x4e0(0x08)
	struct UImage* Portrait; // 0x4e8(0x08)
	struct UTextBlock* Slash; // 0x4f0(0x08)
	struct AGobiPlayerState* TargetPlayerState; // 0x4f8(0x08)
	struct FName LastSeenCharacterRow; // 0x500(0x08)
	int32_t LowHealthThreshold; // 0x508(0x04)
	bool bIsLowHealth; // 0x50c(0x01)
	bool bIsGhost; // 0x50d(0x01)
	char pad_50E[0x2]; // 0x50e(0x02)
	struct APlayerSlot* TargetSlot; // 0x510(0x08)

	void UpdateTargetPlayerState(); // Function PlayerModule_WBP.PlayerModule_WBP_C.UpdateTargetPlayerState // (None) // @ game+0xfffffffec0000000
};

