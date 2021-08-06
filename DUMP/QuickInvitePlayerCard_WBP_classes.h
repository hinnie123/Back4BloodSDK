// WidgetBlueprintGeneratedClass QuickInvitePlayerCard_WBP.QuickInvitePlayerCard_WBP_C
// Size: 0x591 (Inherited: 0x450)
struct UQuickInvitePlayerCard_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UImage* BG; // 0x458(0x08)
	struct UImage* FocusFrame; // 0x460(0x08)
	struct UImage* Frame; // 0x468(0x08)
	struct UTextBlock* InviteFlag; // 0x470(0x08)
	struct UPlayerName_WBP_C* PlayerName; // 0x478(0x08)
	struct FPartyPlayer Player; // 0x480(0x110)
	bool Invited; // 0x590(0x01)

	void SetInviteFlag(bool Invited); // Function QuickInvitePlayerCard_WBP.QuickInvitePlayerCard_WBP_C.SetInviteFlag // (None) // @ game+0xfffffffec0000000
};

