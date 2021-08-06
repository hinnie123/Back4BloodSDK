// WidgetBlueprintGeneratedClass CardPaginatorPageButton_WBP.CardPaginatorPageButton_WBP_C
// Size: 0x51c (Inherited: 0x450)
struct UCardPaginatorPageButton_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UImage* Arrow; // 0x458(0x08)
	struct UImage* BG; // 0x460(0x08)
	struct UPlatformCalloutImage_WBP_C* Callout; // 0x468(0x08)
	struct UOverlay* CalloutPanel; // 0x470(0x08)
	struct UImage* HoverBG; // 0x478(0x08)
	struct UOverlay* RootPanel; // 0x480(0x08)
	bool IsPrevious; // 0x488(0x01)
	char pad_489[0x3]; // 0x489(0x03)
	struct FName CalloutAction; // 0x48c(0x08)
	char pad_494[0x4]; // 0x494(0x04)
	struct FSlateColor HoveredColor; // 0x498(0x30)
	struct FSlateColor NormalColor; // 0x4c8(0x30)
	bool bShowCallout; // 0x4f8(0x01)
	char pad_4F9[0x7]; // 0x4f9(0x07)
	struct UTweenContainer* TweenFocusLostContainer; // 0x500(0x08)
	struct UTweenContainer* TweenFocusContainer; // 0x508(0x08)
	float DefaultOpacity; // 0x510(0x04)
	struct FVector2D SetArrowSize; // 0x514(0x08)

	void PreConstruct(bool IsDesignTime); // Function CardPaginatorPageButton_WBP.CardPaginatorPageButton_WBP_C.PreConstruct // (None) // @ game+0xfffffffec0000000
};

