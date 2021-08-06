// WidgetBlueprintGeneratedClass PlayerMoney_WBP.PlayerMoney_WBP_C
// Size: 0x618 (Inherited: 0x528)
struct UPlayerMoney_WBP_C : UPlayerMoneyUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct UWidgetAnimation* FadeOut; // 0x530(0x08)
	struct UImage* MoneyIcon; // 0x538(0x08)
	struct UHorizontalBox* MoneyPanel; // 0x540(0x08)
	struct UTextBlock* MoneyText; // 0x548(0x08)
	bool LayoutB; // 0x550(0x01)
	char pad_551[0x7]; // 0x551(0x07)
	struct FSlateFontInfo FontA; // 0x558(0x60)
	struct FSlateFontInfo FontB; // 0x5b8(0x60)

	struct UPlayerMoneyAnimUserWidget* CreateAnimWidget(); // Function PlayerMoney_WBP.PlayerMoney_WBP_C.CreateAnimWidget // (None) // @ game+0xfffffffec0000000
};

