// WidgetBlueprintGeneratedClass OptionsAccordion_WBP.OptionsAccordion_WBP_C
// Size: 0x4d9 (Inherited: 0x450)
struct UOptionsAccordion_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UExpandableArea* Area; // 0x458(0x08)
	struct UImage* BG; // 0x460(0x08)
	struct UImage* BGHover_2; // 0x468(0x08)
	struct UNamedSlot* BodySlot; // 0x470(0x08)
	struct UImage* CollapsedIcon; // 0x478(0x08)
	struct UImage* ExpandedIcon; // 0x480(0x08)
	struct UImage* Frame; // 0x488(0x08)
	struct UOverlay* HoverContainer; // 0x490(0x08)
	struct UBaseTextBlock_C* NameText; // 0x498(0x08)
	struct FMulticastInlineDelegate OnExpanded; // 0x4a0(0x10)
	struct FMulticastInlineDelegate OnContracted; // 0x4b0(0x10)
	struct FText HeaderString; // 0x4c0(0x18)
	bool bIsHighlighted; // 0x4d8(0x01)

	void SetExpansionIcon(bool bIsExpanded); // Function OptionsAccordion_WBP.OptionsAccordion_WBP_C.SetExpansionIcon // (None) // @ game+0xfffffffec0000000
};

