// WidgetBlueprintGeneratedClass SmallDeckEntryDragVisual_WBP.SmallDeckEntryDragVisual_WBP_C
// Size: 0x52a (Inherited: 0x460)
struct USmallDeckEntryDragVisual_WBP_C : USmallDeckEntryDragVisualUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UOverlay* BG; // 0x468(0x08)
	struct UImage* CardBG; // 0x470(0x08)
	struct UImage* CardImage; // 0x478(0x08)
	struct UHorizontalBox* CardInfoHBox; // 0x480(0x08)
	struct UBaseTextBlock_C* CardName; // 0x488(0x08)
	struct UImage* EmptyBG; // 0x490(0x08)
	struct UImage* EntryBG; // 0x498(0x08)
	struct UCanvasPanel* EntryContainer; // 0x4a0(0x08)
	struct UImage* Frame; // 0x4a8(0x08)
	struct UImage* gradient; // 0x4b0(0x08)
	struct UOverlay* HoverContainer; // 0x4b8(0x08)
	struct UImage* NumberBG; // 0x4c0(0x08)
	struct UBaseTextBlock_C* NumberText; // 0x4c8(0x08)
	struct UImage* SuitIcon; // 0x4d0(0x08)
	struct FDataTableRowHandle Card; // 0x4d8(0x20)
	int32_t Index; // 0x4f8(0x04)
	char pad_4FC[0x4]; // 0x4fc(0x04)
	struct UMaterialInstanceDynamic* MIDCardImage; // 0x500(0x08)
	struct UMaterialInterface* NewVar_1; // 0x508(0x08)
	struct UMaterialInterface* cardImgMaterialInterface; // 0x510(0x08)
	float FrameFocusedRenderOpacity; // 0x518(0x04)
	float FrameUnfocusedRenderOpacity; // 0x51c(0x04)
	struct UTweenContainer* TweenEquippedContainer; // 0x520(0x08)
	bool bIsHighlighted; // 0x528(0x01)
	bool bIsVisible; // 0x529(0x01)

	void OnCardImageLoaded(struct TSoftObjectPtr<UTexture2D> TextureSoftPtr); // Function SmallDeckEntryDragVisual_WBP.SmallDeckEntryDragVisual_WBP_C.OnCardImageLoaded // (None) // @ game+0xfffffffec0000000
};

