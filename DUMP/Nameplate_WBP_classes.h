// WidgetBlueprintGeneratedClass Nameplate_WBP.Nameplate_WBP_C
// Size: 0x498 (Inherited: 0x458)
struct UNameplate_WBP_C : UNameplateUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	struct UImage* GameCoachIcon; // 0x460(0x08)
	struct UOverlay* GameCoachPanel; // 0x468(0x08)
	struct URichTextBlock* GameCoachText; // 0x470(0x08)
	struct UTextBlock* GameCoachTitle; // 0x478(0x08)
	struct UNameplateIncapHealth_WBP_C* IncapHealth; // 0x480(0x08)
	struct UPlayerName_WBP_C* PlayerName; // 0x488(0x08)
	struct APlayerSlot* TargetPlayerSlot; // 0x490(0x08)

	struct APlayerSlot* GetTargetPlayer(); // Function Nameplate_WBP.Nameplate_WBP_C.GetTargetPlayer // (None) // @ game+0xfffffffec0000000
};

