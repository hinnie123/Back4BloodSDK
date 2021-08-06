// WidgetBlueprintGeneratedClass SmallDeckEntry_WBP.SmallDeckEntry_WBP_C
// Size: 0x53a (Inherited: 0x488)
struct USmallDeckEntry_WBP_C : USmallDeckEntryUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UOverlay* BG; // 0x490(0x08)
	struct UImage* CardBG; // 0x498(0x08)
	struct UImage* CardImage; // 0x4a0(0x08)
	struct UHorizontalBox* CardInfoHBox; // 0x4a8(0x08)
	struct UBaseTextBlock_C* CardName; // 0x4b0(0x08)
	struct UImage* EmptyBG; // 0x4b8(0x08)
	struct UImage* EntryBG; // 0x4c0(0x08)
	struct UCanvasPanel* EntryContainer; // 0x4c8(0x08)
	struct UImage* Frame; // 0x4d0(0x08)
	struct UImage* GrabIcon; // 0x4d8(0x08)
	struct UImage* gradient; // 0x4e0(0x08)
	struct UOverlay* HoverContainer; // 0x4e8(0x08)
	struct UImage* NumberBG; // 0x4f0(0x08)
	struct UBaseTextBlock_C* NumberText; // 0x4f8(0x08)
	struct UImage* SuitIcon; // 0x500(0x08)
	int32_t Index; // 0x508(0x04)
	char pad_50C[0x4]; // 0x50c(0x04)
	struct UMaterialInstanceDynamic* MIDCardImage; // 0x510(0x08)
	struct UMaterialInterface* NewVar_1; // 0x518(0x08)
	struct UMaterialInterface* cardImgMaterialInterface; // 0x520(0x08)
	float FrameFocusedRenderOpacity; // 0x528(0x04)
	float FrameUnfocusedRenderOpacity; // 0x52c(0x04)
	struct UTweenContainer* TweenEquippedContainer; // 0x530(0x08)
	bool bIsHighlighted; // 0x538(0x01)
	bool bIsVisible; // 0x539(0x01)

	void SetGrabbed(bool InGrabbed); // Function SmallDeckEntry_WBP.SmallDeckEntry_WBP_C.SetGrabbed // (None) // @ game+0xfffffffec0000000
};

