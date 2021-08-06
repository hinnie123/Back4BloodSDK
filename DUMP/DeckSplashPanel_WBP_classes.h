// WidgetBlueprintGeneratedClass DeckSplashPanel_WBP.DeckSplashPanel_WBP_C
// Size: 0x4a8 (Inherited: 0x450)
struct UDeckSplashPanel_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UDeckManager_SplashButton_WBP_C* PvEDecksButton; // 0x458(0x08)
	struct UDeckManager_SplashButton_WBP_C* PvPDecksButton; // 0x460(0x08)
	struct UHorizontalBox* TilesContainer; // 0x468(0x08)
	struct FMulticastInlineDelegate OnBurnCardsButtonClicked; // 0x470(0x10)
	struct FMulticastInlineDelegate OnPvPDecksButtonClicked; // 0x480(0x10)
	struct FMulticastInlineDelegate OnPvEDecksButtonClicked; // 0x490(0x10)
	struct UTweenContainer* TweenOpenContainer; // 0x4a0(0x08)

	void FocusFirstButton(); // Function DeckSplashPanel_WBP.DeckSplashPanel_WBP_C.FocusFirstButton // (None) // @ game+0xfffffffec0000000
};

