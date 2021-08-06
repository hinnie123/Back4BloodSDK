// WidgetBlueprintGeneratedClass OptionsColorComboBox_WBP.OptionsColorComboBox_WBP_C
// Size: 0x4e9 (Inherited: 0x488)
struct UOptionsColorComboBox_WBP_C : UOptionsColorComboBoxWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UImage* BG; // 0x490(0x08)
	struct UImage* BGHover_2; // 0x498(0x08)
	struct UComboBoxString* ComboBox; // 0x4a0(0x08)
	struct UImage* Frame; // 0x4a8(0x08)
	struct UOverlay* HoverContainer; // 0x4b0(0x08)
	struct UBaseTextBlock_C* NameText; // 0x4b8(0x08)
	struct FText Text; // 0x4c0(0x18)
	struct FMulticastInlineDelegate ColorComboBoxChanged; // 0x4d8(0x10)
	bool bIsHighlighted; // 0x4e8(0x01)

	void SetHighlighted(bool isHighlighted); // Function OptionsColorComboBox_WBP.OptionsColorComboBox_WBP_C.SetHighlighted // (None) // @ game+0xfffffffec0000000
};

