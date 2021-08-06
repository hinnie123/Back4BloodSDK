// WidgetBlueprintGeneratedClass OptionsSpinner_WBP.OptionsSpinner_WBP_C
// Size: 0x588 (Inherited: 0x4b8)
struct UOptionsSpinner_WBP_C : UOptionsSpinnerUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UImage* BG; // 0x4c0(0x08)
	struct UImage* BGHover_2; // 0x4c8(0x08)
	struct UImage* Frame; // 0x4d0(0x08)
	struct UOverlay* HoverContainer; // 0x4d8(0x08)
	struct USpinnerButton_WBP_C* LeftButton; // 0x4e0(0x08)
	struct UBaseTextBlock_C* NameText; // 0x4e8(0x08)
	struct UHorizontalBox* PipsPanel; // 0x4f0(0x08)
	struct USpinnerButton_WBP_C* RightButton; // 0x4f8(0x08)
	struct UOverlay* RootContainer; // 0x500(0x08)
	struct UEditableText* ValueEditText; // 0x508(0x08)
	struct FMulticastInlineDelegate OnValueDecrease; // 0x510(0x10)
	struct FMulticastInlineDelegate OnValueIncrease; // 0x520(0x10)
	struct FMulticastInlineDelegate OnValueEdited; // 0x530(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x540(0x10)
	bool bIsEditable; // 0x550(0x01)
	bool bIsNumbersOnly; // 0x551(0x01)
	char pad_552[0x6]; // 0x552(0x06)
	struct FText TTSNameOverride; // 0x558(0x18)
	int32_t SelectedIndex; // 0x570(0x04)
	float FrameFocusRenderOpacity; // 0x574(0x04)
	float FrameUnfocusRenderOpacity; // 0x578(0x04)
	bool bIsHighlighted; // 0x57c(0x01)
	char pad_57D[0x3]; // 0x57d(0x03)
	struct UTweenContainer* TweenClickContainer; // 0x580(0x08)

	void SetIndentation(bool bIsIndented); // Function OptionsSpinner_WBP.OptionsSpinner_WBP_C.SetIndentation // (None) // @ game+0xfffffffec0000000
};

