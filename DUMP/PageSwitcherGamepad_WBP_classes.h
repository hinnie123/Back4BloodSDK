// WidgetBlueprintGeneratedClass PageSwitcherGamepad_WBP.PageSwitcherGamepad_WBP_C
// Size: 0x4aa (Inherited: 0x450)
struct UPageSwitcherGamepad_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UPageSwitcherButtonLarge_WBP_C* NextPageButton; // 0x458(0x08)
	struct UPlatformCalloutImage_WBP_C* NextPageCallout; // 0x460(0x08)
	struct UHorizontalBox* PagesPanel; // 0x468(0x08)
	struct UCanvasPanel* PageSwitcherWrapper; // 0x470(0x08)
	struct UTextBlock* PageText; // 0x478(0x08)
	struct UPageSwitcherButtonLarge_WBP_C* PrevPageButton; // 0x480(0x08)
	struct UPlatformCalloutImage_WBP_C* PrevPageCallout; // 0x488(0x08)
	int32_t NumPages; // 0x490(0x04)
	int32_t CurrentPage; // 0x494(0x04)
	struct FMulticastInlineDelegate OnChangePage; // 0x498(0x10)
	bool bShowKey; // 0x4a8(0x01)
	bool bShowGamepad; // 0x4a9(0x01)

	void SetInputs(struct FName LeftInputAction, struct FName RightInputAction); // Function PageSwitcherGamepad_WBP.PageSwitcherGamepad_WBP_C.SetInputs // (None) // @ game+0xfffffffec0000000
};

