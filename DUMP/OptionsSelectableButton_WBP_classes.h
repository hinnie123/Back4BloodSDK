// WidgetBlueprintGeneratedClass OptionsSelectableButton_WBP.OptionsSelectableButton_WBP_C
// Size: 0x4c1 (Inherited: 0x478)
struct UOptionsSelectableButton_WBP_C : UOptionsSelectableButtonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct UImage* BGSelected; // 0x480(0x08)
	struct UImage* EquippedIcon; // 0x488(0x08)
	struct UImage* Frame; // 0x490(0x08)
	struct UOverlay* HoverContainer; // 0x498(0x08)
	struct UBaseTextBlock_C* NameText; // 0x4a0(0x08)
	struct FText Name; // 0x4a8(0x18)
	bool bIsHighlighted; // 0x4c0(0x01)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function OptionsSelectableButton_WBP.OptionsSelectableButton_WBP_C.OnFocusReceived // (None) // @ game+0xfffffffec0000000
};

