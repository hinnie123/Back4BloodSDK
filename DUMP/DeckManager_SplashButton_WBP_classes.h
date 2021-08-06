// WidgetBlueprintGeneratedClass DeckManager_SplashButton_WBP.DeckManager_SplashButton_WBP_C
// Size: 0x4b0 (Inherited: 0x450)
struct UDeckManager_SplashButton_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UImage* BG; // 0x458(0x08)
	struct UBaseTextBlock_C* ButtonName; // 0x460(0x08)
	struct UImage* Outline; // 0x468(0x08)
	struct UImage* Tinter; // 0x470(0x08)
	struct FText ButtonNameText; // 0x478(0x18)
	struct UTweenContainer* TweenFocusContainer; // 0x490(0x08)
	struct UImage* BG; // 0x498(0x08)
	struct UTweenContainer* TweenFocusLostContainer; // 0x4a0(0x08)
	struct UTexture2D* TileBackground; // 0x4a8(0x08)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function DeckManager_SplashButton_WBP.DeckManager_SplashButton_WBP_C.OnFocusReceived // (None) // @ game+0xfffffffec0000000
};

