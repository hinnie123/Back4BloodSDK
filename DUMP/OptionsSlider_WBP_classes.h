// WidgetBlueprintGeneratedClass OptionsSlider_WBP.OptionsSlider_WBP_C
// Size: 0x56a (Inherited: 0x478)
struct UOptionsSlider_WBP_C : UOptionsSliderWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct UImage* BG; // 0x480(0x08)
	struct UImage* BGHover_2; // 0x488(0x08)
	struct UImage* Frame; // 0x490(0x08)
	struct UOverlay* HoverContainer; // 0x498(0x08)
	struct UBaseTextBlock_C* NameText; // 0x4a0(0x08)
	struct UOverlay* RootContainer; // 0x4a8(0x08)
	struct UGenericSlider_C* Slider; // 0x4b0(0x08)
	struct UProgressBar* SliderProgress; // 0x4b8(0x08)
	struct UEditableText* ValueEditText; // 0x4c0(0x08)
	struct FText Text; // 0x4c8(0x18)
	struct FMulticastInlineDelegate OnValueChanged; // 0x4e0(0x10)
	struct FSlateColor SliderColor; // 0x4f0(0x30)
	struct FSlateColor SliderActiveColor; // 0x520(0x30)
	float MinValue; // 0x550(0x04)
	float MaxValue; // 0x554(0x04)
	bool IsInt; // 0x558(0x01)
	char pad_559[0x3]; // 0x559(0x03)
	float StepSize; // 0x55c(0x04)
	bool bIgnoreValueDelegate; // 0x560(0x01)
	char pad_561[0x3]; // 0x561(0x03)
	float DisplayTextMultiplier; // 0x564(0x04)
	bool bIsHighlighted; // 0x568(0x01)
	bool bIsIndented; // 0x569(0x01)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function OptionsSlider_WBP.OptionsSlider_WBP_C.OnFocusReceived // (None) // @ game+0xfffffffec0000000
};

