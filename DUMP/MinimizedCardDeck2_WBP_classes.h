// WidgetBlueprintGeneratedClass MinimizedCardDeck2_WBP.MinimizedCardDeck2_WBP_C
// Size: 0x9b1 (Inherited: 0x450)
struct UMinimizedCardDeck2_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UImage* CreateBG; // 0x458(0x08)
	struct UTextBlock* CreateDeckText; // 0x460(0x08)
	struct UOverlay* DeckContainer; // 0x468(0x08)
	struct UEditableText* EditableDeckName; // 0x470(0x08)
	struct UImage* EditIcon; // 0x478(0x08)
	struct UImage* EmptyBG; // 0x480(0x08)
	struct UImage* EntryBG; // 0x488(0x08)
	struct UImage* Frame; // 0x490(0x08)
	struct UImage* gradient; // 0x498(0x08)
	struct UOverlay* HoverContainer; // 0x4a0(0x08)
	struct UImage* Icon; // 0x4a8(0x08)
	struct UOverlay* Overlay_1; // 0x4b0(0x08)
	struct FGameplayCardPreset Preset; // 0x4b8(0x48)
	bool IsBuiltIn; // 0x500(0x01)
	char pad_501[0x3]; // 0x501(0x03)
	int32_t Index; // 0x504(0x04)
	bool IsCreateDeckButton; // 0x508(0x01)
	bool IsEditable; // 0x509(0x01)
	char pad_50A[0x2]; // 0x50a(0x02)
	int32_t MaxDeckNameWidth; // 0x50c(0x04)
	struct FMulticastInlineDelegate OnEditableTextChanged; // 0x510(0x10)
	struct FEditableTextStyle DeckNameFocusedStyle; // 0x520(0x248)
	struct FEditableTextStyle DeckNameUnFocusedStyle; // 0x768(0x248)
	bool bIsHighlighted; // 0x9b0(0x01)

	void OnCardImageLoaded(struct TSoftObjectPtr<UTexture2D> TextureSoftPtr); // Function MinimizedCardDeck2_WBP.MinimizedCardDeck2_WBP_C.OnCardImageLoaded // (None) // @ game+0xfffffffec0000000
};

