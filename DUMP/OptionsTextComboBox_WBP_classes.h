// WidgetBlueprintGeneratedClass OptionsTextComboBox_WBP.OptionsTextComboBox_WBP_C
// Size: 0x528 (Inherited: 0x4c8)
struct UOptionsTextComboBox_WBP_C : UOptionsTextComboBoxWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c8(0x08)
	struct UImage* BG; // 0x4d0(0x08)
	struct UImage* BGHover_2; // 0x4d8(0x08)
	struct UComboBoxString* ComboBox; // 0x4e0(0x08)
	struct UImage* Frame; // 0x4e8(0x08)
	struct UOverlay* HoverContainer; // 0x4f0(0x08)
	struct UBaseTextBlock_C* NameText; // 0x4f8(0x08)
	struct FText Text; // 0x500(0x18)
	bool bIsHighlighted; // 0x518(0x01)
	char pad_519[0x7]; // 0x519(0x07)
	struct UTweenContainer* TweenClickContainer; // 0x520(0x08)

	void SetHighlight(bool isHighlighted); // Function OptionsTextComboBox_WBP.OptionsTextComboBox_WBP_C.SetHighlight // (None) // @ game+0xfffffffec0000000
};

