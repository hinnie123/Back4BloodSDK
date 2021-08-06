// WidgetBlueprintGeneratedClass SearchFilter_WBP.SearchFilter_WBP_C
// Size: 0x4a1 (Inherited: 0x450)
struct USearchFilter_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UImage* BG; // 0x458(0x08)
	struct UButton* CancelButton; // 0x460(0x08)
	struct UImage* CancelIcon; // 0x468(0x08)
	struct UImage* Frame; // 0x470(0x08)
	struct UOverlay* HoverContainer; // 0x478(0x08)
	struct UEditableText* SearchEditableText; // 0x480(0x08)
	struct UImage* SearchIcon; // 0x488(0x08)
	struct FMulticastInlineDelegate OnSearchTextChanged; // 0x490(0x10)
	bool bIsHighlighted; // 0x4a0(0x01)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function SearchFilter_WBP.SearchFilter_WBP_C.OnFocusReceived // (None) // @ game+0xfffffffec0000000
};

