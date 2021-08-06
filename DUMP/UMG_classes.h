// Class UMG.Visual
// Size: 0x30 (Inherited: 0x30)
struct UVisual : UObject {
};

// Class UMG.Widget
// Size: 0x148 (Inherited: 0x30)
struct UWidget : UVisual {
	struct UPanelSlot* Slot; // 0x30(0x08)
	struct FDelegate bIsEnabledDelegate; // 0x38(0x10)
	struct FText ToolTipText; // 0x48(0x18)
	struct FDelegate ToolTipTextDelegate; // 0x60(0x10)
	struct UWidget* ToolTipWidget; // 0x70(0x08)
	struct FDelegate ToolTipWidgetDelegate; // 0x78(0x10)
	struct FDelegate VisibilityDelegate; // 0x88(0x10)
	struct FWidgetTransform RenderTransform; // 0x98(0x1c)
	struct FVector2D RenderTransformPivot; // 0xb4(0x08)
	char bIsVariable : 1; // 0xbc(0x01)
	char bCreatedByConstructionScript : 1; // 0xbc(0x01)
	char bIsEnabled : 1; // 0xbc(0x01)
	char bShowDisabledEffect : 1; // 0xbc(0x01)
	char bPlaySoundOnFocus : 1; // 0xbc(0x01)
	char bOverride_Cursor : 1; // 0xbc(0x01)
	char pad_BC_6 : 2; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	struct USlateAccessibleWidgetData* AccessibleWidgetData; // 0xc0(0x08)
	char bIsVolatile : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	enum class EMouseCursor Cursor; // 0xc9(0x01)
	enum class EWidgetClipping Clipping; // 0xca(0x01)
	enum class ESlateVisibility Visibility; // 0xcb(0x01)
	float RenderOpacity; // 0xcc(0x04)
	struct UWidgetNavigation* Navigation; // 0xd0(0x08)
	enum class EFlowDirectionPreference FlowDirectionPreference; // 0xd8(0x01)
	char pad_D9[0x27]; // 0xd9(0x27)
	struct TArray<struct UPropertyBinding*> NativeBindings; // 0x100(0x10)
	char pad_110[0x20]; // 0x110(0x20)
	struct FMulticastInlineDelegate OnVisibilityChanged; // 0x130(0x10)
	bool bForceShowFocus; // 0x140(0x01)
	bool bShowFocusRectIfFocused; // 0x141(0x01)
	char pad_142[0x6]; // 0x142(0x06)

	void SetVisibility(enum class ESlateVisibility InVisibility); // Function UMG.Widget.SetVisibility // (None) // @ game+0xfffffffec0000000
};

// Class UMG.PanelWidget
// Size: 0x160 (Inherited: 0x148)
struct UPanelWidget : UWidget {
	struct TArray<struct UPanelSlot*> Slots; // 0x148(0x10)
	char pad_158[0x8]; // 0x158(0x08)

	bool RemoveChildAt(int32_t Index); // Function UMG.PanelWidget.RemoveChildAt // (None) // @ game+0xfffffffec0000000
};

// Class UMG.ContentWidget
// Size: 0x160 (Inherited: 0x160)
struct UContentWidget : UPanelWidget {

	struct UPanelSlot* SetContent(struct UWidget* Content); // Function UMG.ContentWidget.SetContent // (None) // @ game+0xfffffffec0000000
};

// Class UMG.UserWidget
// Size: 0x2d8 (Inherited: 0x148)
struct UUserWidget : UWidget {
	char pad_148[0x8]; // 0x148(0x08)
	struct FMulticastInlineDelegate HandleFocusReceived; // 0x150(0x10)
	struct FMulticastInlineDelegate HandleFocusLost; // 0x160(0x10)
	struct FMulticastInlineDelegate OnFadeTransitionComplete; // 0x170(0x10)
	struct FSlateColor ColorAndOpacity; // 0x180(0x30)
	struct FDelegate ColorAndOpacityDelegate; // 0x1b0(0x10)
	struct FSlateColor ForegroundColor; // 0x1c0(0x30)
	struct FDelegate ForegroundColorDelegate; // 0x1f0(0x10)
	struct FMargin Padding; // 0x200(0x10)
	struct TArray<struct UUMGSequencePlayer*> ActiveSequencePlayers; // 0x210(0x10)
	struct TArray<struct UUMGSequencePlayer*> StoppedSequencePlayers; // 0x220(0x10)
	struct TArray<struct FNamedSlotBinding> NamedSlotBindings; // 0x230(0x10)
	struct UWidgetTree* WidgetTree; // 0x240(0x08)
	int32_t Priority; // 0x248(0x04)
	char bSupportsKeyboardFocus : 1; // 0x24c(0x01)
	char bIsFocusable : 1; // 0x24c(0x01)
	char bIsFocusedOnHover : 1; // 0x24c(0x01)
	char bStopAction : 1; // 0x24c(0x01)
	char bHasScriptImplementedTick : 1; // 0x24c(0x01)
	char bHasScriptImplementedPaint : 1; // 0x24c(0x01)
	char pad_24C_6 : 2; // 0x24c(0x01)
	char bCookedWidgetTree : 1; // 0x24d(0x01)
	char pad_24D_1 : 7; // 0x24d(0x01)
	char pad_24E[0xa]; // 0x24e(0x0a)
	enum class EWidgetTickFrequency TickFrequency; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct UInputComponent* InputComponent; // 0x260(0x08)
	struct TArray<struct FAnimationEventBinding> AnimationCallbacks; // 0x268(0x10)
	char pad_278[0x60]; // 0x278(0x60)

	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent // (None) // @ game+0xfffffffec0000000
};

// Class UMG.PanelSlot
// Size: 0x40 (Inherited: 0x30)
struct UPanelSlot : UVisual {
	struct UPanelWidget* Parent; // 0x30(0x08)
	struct UWidget* Content; // 0x38(0x08)
};

// Class UMG.Button
// Size: 0x4c8 (Inherited: 0x160)
struct UButton : UContentWidget {
	struct USlateWidgetStyleAsset* Style; // 0x160(0x08)
	struct FButtonStyle WidgetStyle; // 0x168(0x298)
	struct FSlateColor ColorAndOpacity; // 0x400(0x30)
	struct FSlateColor BackgroundColor; // 0x430(0x30)
	enum class EButtonClickMethod ClickMethod; // 0x460(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0x461(0x01)
	enum class EButtonPressMethod PressMethod; // 0x462(0x01)
	bool IsFocusable; // 0x463(0x01)
	bool bIsFocusedOnHover; // 0x464(0x01)
	char pad_465[0x3]; // 0x465(0x03)
	struct FMulticastInlineDelegate OnClicked; // 0x468(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x478(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x488(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x498(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x4a8(0x10)
	char pad_4B8[0x10]; // 0x4b8(0x10)

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function UMG.Button.SetTouchMethod // (None) // @ game+0xfffffffec0000000
};

// Class UMG.CheckBox
// Size: 0x818 (Inherited: 0x160)
struct UCheckBox : UContentWidget {
	enum class ECheckBoxState CheckedState; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	struct FDelegate CheckedStateDelegate; // 0x164(0x10)
	char pad_174[0x4]; // 0x174(0x04)
	struct FCheckBoxStyle WidgetStyle; // 0x178(0x5d8)
	struct USlateWidgetStyleAsset* Style; // 0x750(0x08)
	struct USlateBrushAsset* UncheckedImage; // 0x758(0x08)
	struct USlateBrushAsset* UncheckedHoveredImage; // 0x760(0x08)
	struct USlateBrushAsset* UncheckedPressedImage; // 0x768(0x08)
	struct USlateBrushAsset* CheckedImage; // 0x770(0x08)
	struct USlateBrushAsset* CheckedHoveredImage; // 0x778(0x08)
	struct USlateBrushAsset* CheckedPressedImage; // 0x780(0x08)
	struct USlateBrushAsset* UndeterminedImage; // 0x788(0x08)
	struct USlateBrushAsset* UndeterminedHoveredImage; // 0x790(0x08)
	struct USlateBrushAsset* UndeterminedPressedImage; // 0x798(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x7a0(0x01)
	char pad_7A1[0x3]; // 0x7a1(0x03)
	struct FMargin Padding; // 0x7a4(0x10)
	char pad_7B4[0x4]; // 0x7b4(0x04)
	struct FSlateColor BorderBackgroundColor; // 0x7b8(0x30)
	bool IsFocusable; // 0x7e8(0x01)
	bool bIsFocusedOnHover; // 0x7e9(0x01)
	char pad_7EA[0x6]; // 0x7ea(0x06)
	struct FMulticastInlineDelegate OnCheckStateChanged; // 0x7f0(0x10)
	enum class EButtonClickMethod ClickMethod; // 0x800(0x01)
	char pad_801[0x17]; // 0x801(0x17)

	void SetIsFocusedOnHover(bool bEnabled); // Function UMG.CheckBox.SetIsFocusedOnHover // (None) // @ game+0xfffffffec0000000
};

// Class UMG.ComboBoxString
// Size: 0xf30 (Inherited: 0x148)
struct UComboBoxString : UWidget {
	struct TArray<struct FString> DefaultOptions; // 0x148(0x10)
	struct FString SelectedOption; // 0x158(0x10)
	struct FComboBoxStyle WidgetStyle; // 0x168(0x420)
	struct FTableRowStyle ItemStyle; // 0x588(0x860)
	struct FMargin ContentPadding; // 0xde8(0x10)
	float MaxListHeight; // 0xdf8(0x04)
	bool HasDownArrow; // 0xdfc(0x01)
	bool EnableGamepadNavigationMode; // 0xdfd(0x01)
	char pad_DFE[0x2]; // 0xdfe(0x02)
	struct FSlateFontInfo Font; // 0xe00(0x60)
	struct FSlateColor ForegroundColor; // 0xe60(0x30)
	bool bIsFocusable; // 0xe90(0x01)
	bool bIsFocusedOnHover; // 0xe91(0x01)
	bool bPlaySoundOnClear; // 0xe92(0x01)
	char pad_E93[0x5]; // 0xe93(0x05)
	struct FSlateSound ItemNavigationSound; // 0xe98(0x18)
	struct FDelegate OnGenerateWidgetEvent; // 0xeb0(0x10)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0xec0(0x10)
	struct FMulticastInlineDelegate OnOpening; // 0xed0(0x10)
	char pad_EE0[0x50]; // 0xee0(0x50)

	void SetSelectedOption(struct FString Option, bool bPlaySound); // Function UMG.ComboBoxString.SetSelectedOption // (None) // @ game+0xfffffffec0000000
};

// Class UMG.Slider
// Size: 0x5b0 (Inherited: 0x148)
struct USlider : UWidget {
	float Value; // 0x148(0x04)
	struct FDelegate ValueDelegate; // 0x14c(0x10)
	float MinValue; // 0x15c(0x04)
	float MaxValue; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct FSliderStyle WidgetStyle; // 0x168(0x370)
	enum class EOrientation Orientation; // 0x4d8(0x01)
	char pad_4D9[0x7]; // 0x4d9(0x07)
	struct FSlateColor SliderBarColor; // 0x4e0(0x30)
	struct FSlateColor SliderHandleColor; // 0x510(0x30)
	bool IndentHandle; // 0x540(0x01)
	bool Locked; // 0x541(0x01)
	bool MouseUsesStep; // 0x542(0x01)
	bool RequiresControllerLock; // 0x543(0x01)
	float StepSize; // 0x544(0x04)
	bool bSnapToStep; // 0x548(0x01)
	bool IsFocusable; // 0x549(0x01)
	bool bIsFocusedOnHover; // 0x54a(0x01)
	bool bLockFocusWhileControllerCaptured; // 0x54b(0x01)
	char pad_54C[0x4]; // 0x54c(0x04)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x550(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x560(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x570(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x580(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x590(0x10)
	char pad_5A0[0x10]; // 0x5a0(0x10)

	void SetValue(float InValue); // Function UMG.Slider.SetValue // (None) // @ game+0xfffffffec0000000
};

// Class UMG.TextLayoutWidget
// Size: 0x168 (Inherited: 0x148)
struct UTextLayoutWidget : UWidget {
	struct FShapedTextOptions ShapedTextOptions; // 0x148(0x03)
	enum class ETextJustify Justification; // 0x14b(0x01)
	enum class ETextWrappingPolicy WrappingPolicy; // 0x14c(0x01)
	char AutoWrapText : 1; // 0x14d(0x01)
	char pad_14D_1 : 7; // 0x14d(0x01)
	char pad_14E[0x2]; // 0x14e(0x02)
	float WrapTextAt; // 0x150(0x04)
	struct FMargin Margin; // 0x154(0x10)
	float LineHeightPercentage; // 0x164(0x04)

	void SetJustification(enum class ETextJustify InJustification); // Function UMG.TextLayoutWidget.SetJustification // (None) // @ game+0xfffffffec0000000
};

// Class UMG.TextBlock
// Size: 0x320 (Inherited: 0x168)
struct UTextBlock : UTextLayoutWidget {
	struct FText Text; // 0x168(0x18)
	struct FDelegate TextDelegate; // 0x180(0x10)
	struct FSlateColor ColorAndOpacity; // 0x190(0x30)
	struct FDelegate ColorAndOpacityDelegate; // 0x1c0(0x10)
	struct FSlateFontInfo Font; // 0x1d0(0x60)
	struct FSlateBrush StrikeBrush; // 0x230(0x90)
	struct FVector2D ShadowOffset; // 0x2c0(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0x2c8(0x10)
	struct FDelegate ShadowColorAndOpacityDelegate; // 0x2d8(0x10)
	float MinDesiredWidth; // 0x2e8(0x04)
	bool bWrapWithInvalidationPanel; // 0x2ec(0x01)
	bool bAutoWrapText; // 0x2ed(0x01)
	bool bForceUppercase; // 0x2ee(0x01)
	char pad_2EF[0x1]; // 0x2ef(0x01)
	int32_t Kerning; // 0x2f0(0x04)
	bool bSimpleTextMode; // 0x2f4(0x01)
	char pad_2F5[0x2b]; // 0x2f5(0x2b)

	void SetWrapTextAt(float InWrapTextAt); // Function UMG.TextBlock.SetWrapTextAt // (None) // @ game+0xfffffffec0000000
};

// Class UMG.RichTextBlockDecorator
// Size: 0x30 (Inherited: 0x30)
struct URichTextBlockDecorator : UObject {
};

// Class UMG.AsyncTaskDownloadImage
// Size: 0x58 (Inherited: 0x38)
struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x48(0x10)

	struct UAsyncTaskDownloadImage* DownloadImage(struct FString URL); // Function UMG.AsyncTaskDownloadImage.DownloadImage // (None) // @ game+0xfffffffec0000000
};

// Class UMG.BackgroundBlur
// Size: 0x220 (Inherited: 0x160)
struct UBackgroundBlur : UContentWidget {
	struct FMargin Padding; // 0x160(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x170(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x171(0x01)
	bool bApplyAlphaToBlur; // 0x172(0x01)
	char pad_173[0x1]; // 0x173(0x01)
	float BlurStrength; // 0x174(0x04)
	bool bOverrideAutoRadiusCalculation; // 0x178(0x01)
	char pad_179[0x3]; // 0x179(0x03)
	int32_t BlurRadius; // 0x17c(0x04)
	struct FSlateBrush LowQualityFallbackBrush; // 0x180(0x90)
	char pad_210[0x10]; // 0x210(0x10)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlur.SetVerticalAlignment // (None) // @ game+0xfffffffec0000000
};

// Class UMG.BackgroundBlurSlot
// Size: 0x68 (Inherited: 0x40)
struct UBackgroundBlurSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlurSlot.SetVerticalAlignment // (None) // @ game+0xfffffffec0000000
};

// Class UMG.PropertyBinding
// Size: 0x68 (Inherited: 0x30)
struct UPropertyBinding : UObject {
	struct TWeakObjectPtr<struct UObject> SourceObject; // 0x30(0x08)
	struct FDynamicPropertyPath SourcePath; // 0x38(0x28)
	struct FName DestinationProperty; // 0x60(0x08)
};

// Class UMG.BoolBinding
// Size: 0x68 (Inherited: 0x68)
struct UBoolBinding : UPropertyBinding {

	bool GetValue(); // Function UMG.BoolBinding.GetValue // (None) // @ game+0xfffffffec0000000
};

// Class UMG.Border
// Size: 0x2f8 (Inherited: 0x160)
struct UBorder : UContentWidget {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x160(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x161(0x01)
	char pad_162[0x6]; // 0x162(0x06)
	struct FSlateColor ContentColorAndOpacity; // 0x168(0x30)
	struct FDelegate ContentColorAndOpacityDelegate; // 0x198(0x10)
	struct FMargin Padding; // 0x1a8(0x10)
	struct FSlateBrush Background; // 0x1b8(0x90)
	struct FDelegate BackgroundDelegate; // 0x248(0x10)
	struct FSlateColor BrushColor; // 0x258(0x30)
	struct FDelegate BrushColorDelegate; // 0x288(0x10)
	struct FVector2D DesiredSizeScale; // 0x298(0x08)
	bool bFlipForRightToLeftFlowDirection; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	struct FDelegate OnMouseButtonDownEvent; // 0x2a4(0x10)
	struct FDelegate OnMouseButtonUpEvent; // 0x2b4(0x10)
	struct FDelegate OnMouseMoveEvent; // 0x2c4(0x10)
	struct FDelegate OnMouseDoubleClickEvent; // 0x2d4(0x10)
	char pad_2E4[0x14]; // 0x2e4(0x14)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.Border.SetVerticalAlignment // (None) // @ game+0xfffffffec0000000
};

// Class UMG.BorderSlot
// Size: 0x68 (Inherited: 0x40)
struct UBorderSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BorderSlot.SetVerticalAlignment // (None) // @ game+0xfffffffec0000000
};

// Class UMG.BrushBinding
// Size: 0x70 (Inherited: 0x68)
struct UBrushBinding : UPropertyBinding {
	char pad_68[0x8]; // 0x68(0x08)

	struct FSlateBrush GetValue(); // Function UMG.BrushBinding.GetValue // (None) // @ game+0xfffffffec0000000
};

// Class UMG.ButtonSlot
// Size: 0x68 (Inherited: 0x40)
struct UButtonSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ButtonSlot.SetVerticalAlignment // (None) // @ game+0xfffffffec0000000
};

// Class UMG.CanvasPanel
// Size: 0x170 (Inherited: 0x160)
struct UCanvasPanel : UPanelWidget {
	char pad_160[0x10]; // 0x160(0x10)

	struct UCanvasPanelSlot* AddChildToCanvas(struct UWidget* Content); // Function UMG.CanvasPanel.AddChildToCanvas // (None) // @ game+0xfffffffec0000000
};

// Class UMG.CanvasPanelSlot
// Size: 0x78 (Inherited: 0x40)
struct UCanvasPanelSlot : UPanelSlot {
	struct FAnchorData LayoutData; // 0x40(0x28)
	bool bAutoSize; // 0x68(0x01)
	bool bAutoWidth; // 0x69(0x01)
	bool bAutoHeight; // 0x6a(0x01)
	char pad_6B[0x1]; // 0x6b(0x01)
	int32_t ZOrder; // 0x6c(0x04)
	char pad_70[0x8]; // 0x70(0x08)

	void SetZOrder(int32_t InZOrder); // Function UMG.CanvasPanelSlot.SetZOrder // (None) // @ game+0xfffffffec0000000
};

// Class UMG.CheckedStateBinding
// Size: 0x70 (Inherited: 0x68)
struct UCheckedStateBinding : UPropertyBinding {
	char pad_68[0x8]; // 0x68(0x08)

	enum class ECheckBoxState GetValue(); // Function UMG.CheckedStateBinding.GetValue // (None) // @ game+0xfffffffec0000000
};

// Class UMG.CircularThrobber
// Size: 0x208 (Inherited: 0x148)
struct UCircularThrobber : UWidget {
	int32_t NumberOfPieces; // 0x148(0x04)
	float Period; // 0x14c(0x04)
	float Radius; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct USlateBrushAsset* PieceImage; // 0x158(0x08)
	struct FSlateBrush Image; // 0x160(0x90)
	bool bEnableRadius; // 0x1f0(0x01)
	char pad_1F1[0x17]; // 0x1f1(0x17)

	void SetRadius(float InRadius); // Function UMG.CircularThrobber.SetRadius // (None) // @ game+0xfffffffec0000000
};

// Class UMG.ColorBinding
// Size: 0x70 (Inherited: 0x68)
struct UColorBinding : UPropertyBinding {
	char pad_68[0x8]; // 0x68(0x08)

	struct FSlateColor GetSlateValue(); // Function UMG.ColorBinding.GetSlateValue // (None) // @ game+0xfffffffec0000000
};

// Class UMG.ComboBox
// Size: 0x180 (Inherited: 0x148)
struct UComboBox : UWidget {
	struct TArray<struct UObject*> Items; // 0x148(0x10)
	struct FDelegate OnGenerateWidgetEvent; // 0x158(0x10)
	bool bIsFocusable; // 0x168(0x01)
	bool bIsFocusedOnHover; // 0x169(0x01)
	char pad_16A[0x16]; // 0x16a(0x16)

	void SetIsFocusedOnHover(bool bEnabled); // Function UMG.ComboBox.SetIsFocusedOnHover // (None) // @ game+0xfffffffec0000000
};

// Class UMG.DragDropOperation
// Size: 0x90 (Inherited: 0x30)
struct UDragDropOperation : UObject {
	struct FString Tag; // 0x30(0x10)
	struct UObject* Payload; // 0x40(0x08)
	struct UWidget* DefaultDragVisual; // 0x48(0x08)
	enum class EDragPivot Pivot; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FVector2D Offset; // 0x54(0x08)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FMulticastInlineDelegate OnDrop; // 0x60(0x10)
	struct FMulticastInlineDelegate OnDragCancelled; // 0x70(0x10)
	struct FMulticastInlineDelegate OnDragged; // 0x80(0x10)

	void Drop(struct FPointerEvent PointerEvent); // Function UMG.DragDropOperation.Drop // (None) // @ game+0xfffffffec0000000
};

// Class UMG.DynamicEntryBoxBase
// Size: 0x208 (Inherited: 0x148)
struct UDynamicEntryBoxBase : UWidget {
	enum class EDynamicBoxType EntryBoxType; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	struct FVector2D EntrySpacing; // 0x14c(0x08)
	char pad_154[0x4]; // 0x154(0x04)
	struct TArray<struct FVector2D> SpacingPattern; // 0x158(0x10)
	struct FSlateChildSize EntrySizeRule; // 0x168(0x08)
	enum class EHorizontalAlignment EntryHorizontalAlignment; // 0x170(0x01)
	enum class EVerticalAlignment EntryVerticalAlignment; // 0x171(0x01)
	char pad_172[0x2]; // 0x172(0x02)
	int32_t MaxElementSize; // 0x174(0x04)
	char pad_178[0x10]; // 0x178(0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x188(0x80)

	void SetEntrySpacing(struct FVector2D InEntrySpacing); // Function UMG.DynamicEntryBoxBase.SetEntrySpacing // (None) // @ game+0xfffffffec0000000
};

// Class UMG.DynamicEntryBox
// Size: 0x210 (Inherited: 0x208)
struct UDynamicEntryBox : UDynamicEntryBoxBase {
	struct UUserWidget* EntryWidgetClass; // 0x208(0x08)

	void Reset(bool bDeleteWidgets); // Function UMG.DynamicEntryBox.Reset // (None) // @ game+0xfffffffec0000000
};

// Class UMG.EditableText
// Size: 0x4e8 (Inherited: 0x148)
struct UEditableText : UWidget {
	struct FText Text; // 0x148(0x18)
	struct FDelegate TextDelegate; // 0x160(0x10)
	struct FText HintText; // 0x170(0x18)
	struct FDelegate HintTextDelegate; // 0x188(0x10)
	struct FEditableTextStyle WidgetStyle; // 0x198(0x248)
	struct USlateWidgetStyleAsset* Style; // 0x3e0(0x08)
	struct USlateBrushAsset* BackgroundImageSelected; // 0x3e8(0x08)
	struct USlateBrushAsset* BackgroundImageComposing; // 0x3f0(0x08)
	struct USlateBrushAsset* CaretImage; // 0x3f8(0x08)
	struct FSlateFontInfo Font; // 0x400(0x60)
	struct FSlateColor ColorAndOpacity; // 0x460(0x30)
	bool IsReadOnly; // 0x490(0x01)
	bool IsPassword; // 0x491(0x01)
	char pad_492[0x2]; // 0x492(0x02)
	float MinimumDesiredWidth; // 0x494(0x04)
	bool IsCaretMovedWhenGainFocus; // 0x498(0x01)
	bool SelectAllTextWhenFocused; // 0x499(0x01)
	bool RevertTextOnEscape; // 0x49a(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x49b(0x01)
	bool SelectAllTextOnCommit; // 0x49c(0x01)
	bool AllowContextMenu; // 0x49d(0x01)
	enum class EVirtualKeyboardType KeyboardType; // 0x49e(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x49f(0x01)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x4a0(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x4a1(0x01)
	enum class ETextJustify Justification; // 0x4a2(0x01)
	struct FShapedTextOptions ShapedTextOptions; // 0x4a3(0x03)
	bool bIsFocusedOnHover; // 0x4a6(0x01)
	bool bIsFocusRectVisible; // 0x4a7(0x01)
	struct FDelegate OnIsTypedCharValid; // 0x4a8(0x10)
	struct FMulticastInlineDelegate OnTextChanged; // 0x4b8(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x4c8(0x10)
	char pad_4D8[0x10]; // 0x4d8(0x10)

	void SetText(struct FText InText); // Function UMG.EditableText.SetText // (None) // @ game+0xfffffffec0000000
};

// Class UMG.EditableTextBox
// Size: 0xb08 (Inherited: 0x148)
struct UEditableTextBox : UWidget {
	struct FText Text; // 0x148(0x18)
	struct FDelegate TextDelegate; // 0x160(0x10)
	struct FEditableTextBoxStyle WidgetStyle; // 0x170(0x880)
	struct USlateWidgetStyleAsset* Style; // 0x9f0(0x08)
	struct FText HintText; // 0x9f8(0x18)
	struct FDelegate HintTextDelegate; // 0xa10(0x10)
	struct FSlateFontInfo Font; // 0xa20(0x60)
	struct FLinearColor ForegroundColor; // 0xa80(0x10)
	struct FLinearColor BackgroundColor; // 0xa90(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xaa0(0x10)
	bool IsReadOnly; // 0xab0(0x01)
	bool IsPassword; // 0xab1(0x01)
	char pad_AB2[0x2]; // 0xab2(0x02)
	float MinimumDesiredWidth; // 0xab4(0x04)
	struct FMargin Padding; // 0xab8(0x10)
	bool IsCaretMovedWhenGainFocus; // 0xac8(0x01)
	bool SelectAllTextWhenFocused; // 0xac9(0x01)
	bool RevertTextOnEscape; // 0xaca(0x01)
	bool ClearKeyboardFocusOnCommit; // 0xacb(0x01)
	bool SelectAllTextOnCommit; // 0xacc(0x01)
	bool AllowContextMenu; // 0xacd(0x01)
	enum class EVirtualKeyboardType KeyboardType; // 0xace(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xacf(0x01)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0xad0(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xad1(0x01)
	enum class ETextJustify Justification; // 0xad2(0x01)
	struct FShapedTextOptions ShapedTextOptions; // 0xad3(0x03)
	char pad_AD6[0x2]; // 0xad6(0x02)
	struct FMulticastInlineDelegate OnTextChanged; // 0xad8(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xae8(0x10)
	char pad_AF8[0x10]; // 0xaf8(0x10)

	void SetText(struct FText InText); // Function UMG.EditableTextBox.SetText // (None) // @ game+0xfffffffec0000000
};

// Class UMG.ExpandableArea
// Size: 0x398 (Inherited: 0x148)
struct UExpandableArea : UWidget {
	char pad_148[0x8]; // 0x148(0x08)
	struct FExpandableAreaStyle Style; // 0x150(0x130)
	struct FSlateBrush BorderBrush; // 0x280(0x90)
	struct FSlateColor BorderColor; // 0x310(0x30)
	bool bIsExpanded; // 0x340(0x01)
	char pad_341[0x3]; // 0x341(0x03)
	float MaxHeight; // 0x344(0x04)
	struct FMargin HeaderPadding; // 0x348(0x10)
	struct FMargin AreaPadding; // 0x358(0x10)
	struct FMulticastInlineDelegate OnExpansionChanged; // 0x368(0x10)
	struct UWidget* HeaderContent; // 0x378(0x08)
	struct UWidget* BodyContent; // 0x380(0x08)
	char pad_388[0x10]; // 0x388(0x10)

	void SetIsExpanded_Animated(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded_Animated // (None) // @ game+0xfffffffec0000000
};

// Class UMG.FloatBinding
// Size: 0x68 (Inherited: 0x68)
struct UFloatBinding : UPropertyBinding {

	float GetValue(); // Function UMG.FloatBinding.GetValue // (None) // @ game+0xfffffffec0000000
};

// Class UMG.GlobalStyle
// Size: 0x150 (Inherited: 0x38)
struct UGlobalStyle : UDataAsset {
	char pad_38[0x20]; // 0x38(0x20)
	struct TMap<struct FName, struct FGlobalStyleColor> Colors; // 0x58(0x50)
	struct TMap<struct FName, struct FSlateFontInfo> Fonts; // 0xa8(0x50)
	struct TMap<struct FName, struct FTextBlockStyle> RichTextStyles; // 0xf8(0x50)
	char pad_148[0x8]; // 0x148(0x08)
};

// Class UMG.GridPanel
// Size: 0x190 (Inherited: 0x160)
struct UGridPanel : UPanelWidget {
	struct TArray<float> ColumnFill; // 0x160(0x10)
	struct TArray<float> RowFill; // 0x170(0x10)
	char pad_180[0x10]; // 0x180(0x10)

	void SetRowFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetRowFill // (None) // @ game+0xfffffffec0000000
};

// Class UMG.GridSlot
// Size: 0x78 (Inherited: 0x40)
struct UGridSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	int32_t Row; // 0x54(0x04)
	int32_t RowSpan; // 0x58(0x04)
	int32_t Column; // 0x5c(0x04)
	int32_t ColumnSpan; // 0x60(0x04)
	int32_t Layer; // 0x64(0x04)
	struct FVector2D Nudge; // 0x68(0x08)
	char pad_70[0x8]; // 0x70(0x08)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.GridSlot.SetVerticalAlignment // (None) // @ game+0xfffffffec0000000
};

// Class UMG.HorizontalBox
// Size: 0x178 (Inherited: 0x160)
struct UHorizontalBox : UPanelWidget {
	char pad_160[0x10]; // 0x160(0x10)
	float ChildSpacing; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)

	void SetChildSpacing(float Spacing); // Function UMG.HorizontalBox.SetChildSpacing // (None) // @ game+0xfffffffec0000000
};

// Class UMG.HorizontalBoxSlot
// Size: 0x68 (Inherited: 0x40)
struct UHorizontalBoxSlot : UPanelSlot {
	char pad_40[0x8]; // 0x40(0x08)
	struct FMargin Padding; // 0x48(0x10)
	struct FSlateChildSize Size; // 0x58(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x60(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.HorizontalBoxSlot.SetVerticalAlignment // (None) // @ game+0xfffffffec0000000
};

// Class UMG.Image
// Size: 0x278 (Inherited: 0x148)
struct UImage : UWidget {
	struct FSlateBrush Brush; // 0x148(0x90)
	struct FDelegate BrushDelegate; // 0x1d8(0x10)
	struct FSlateColor ColorAndOpacity; // 0x1e8(0x30)
	struct FDelegate ColorAndOpacityDelegate; // 0x218(0x10)
	bool bFlipForRightToLeftFlowDirection; // 0x228(0x01)
	char pad_229[0x3]; // 0x229(0x03)
	struct FDelegate OnMouseButtonDownEvent; // 0x22c(0x10)
	char pad_23C[0x3c]; // 0x23c(0x3c)

	void SetOpacity(float InOpacity); // Function UMG.Image.SetOpacity // (None) // @ game+0xfffffffec0000000
};

// Class UMG.InputKeySelector
// Size: 0x798 (Inherited: 0x148)
struct UInputKeySelector : UWidget {
	struct FButtonStyle WidgetStyle; // 0x148(0x298)
	struct FTextBlockStyle TextStyle; // 0x3e0(0x2a0)
	struct FInputChord SelectedKey; // 0x680(0x20)
	struct FSlateFontInfo Font; // 0x6a0(0x60)
	struct FMargin Margin; // 0x700(0x10)
	struct FLinearColor ColorAndOpacity; // 0x710(0x10)
	struct FText KeySelectionText; // 0x720(0x18)
	struct FText NoKeySpecifiedText; // 0x738(0x18)
	bool bAllowModifierKeys; // 0x750(0x01)
	bool bAllowGamepadKeys; // 0x751(0x01)
	char pad_752[0x6]; // 0x752(0x06)
	struct TArray<struct FKey> EscapeKeys; // 0x758(0x10)
	struct FMulticastInlineDelegate OnKeySelected; // 0x768(0x10)
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x778(0x10)
	char pad_788[0x10]; // 0x788(0x10)

	void SetTextBlockVisibility(enum class ESlateVisibility InVisibility); // Function UMG.InputKeySelector.SetTextBlockVisibility // (None) // @ game+0xfffffffec0000000
};

// Class UMG.Int32Binding
// Size: 0x68 (Inherited: 0x68)
struct UInt32Binding : UPropertyBinding {

	int32_t GetValue(); // Function UMG.Int32Binding.GetValue // (None) // @ game+0xfffffffec0000000
};

// Class UMG.InvalidationBox
// Size: 0x178 (Inherited: 0x160)
struct UInvalidationBox : UContentWidget {
	bool bCanCache; // 0x160(0x01)
	bool CacheRelativeTransforms; // 0x161(0x01)
	char pad_162[0x16]; // 0x162(0x16)

	void SetCanCache(bool CanCache); // Function UMG.InvalidationBox.SetCanCache // (None) // @ game+0xfffffffec0000000
};

// Class UMG.UserListEntry
// Size: 0x30 (Inherited: 0x30)
struct UUserListEntry : UInterface {

	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UMG.UserListEntry.BP_OnItemSelectionChanged // (None) // @ game+0xfffffffec0000000
};

// Class UMG.UserListEntryLibrary
// Size: 0x30 (Inherited: 0x30)
struct UUserListEntryLibrary : UBlueprintFunctionLibrary {

	bool IsListItemSelected(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.IsListItemSelected // (None) // @ game+0xfffffffec0000000
};

// Class UMG.UserObjectListEntry
// Size: 0x30 (Inherited: 0x30)
struct UUserObjectListEntry : UUserListEntry {

	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UMG.UserObjectListEntry.OnListItemObjectSet // (None) // @ game+0xfffffffec0000000
};

// Class UMG.UserObjectListEntryLibrary
// Size: 0x30 (Inherited: 0x30)
struct UUserObjectListEntryLibrary : UBlueprintFunctionLibrary {

	struct UObject* GetListItemObject(struct TScriptInterface<IUserObjectListEntry> UserObjectListEntry); // Function UMG.UserObjectListEntryLibrary.GetListItemObject // (None) // @ game+0xfffffffec0000000
};

// Class UMG.ListViewBase
// Size: 0x260 (Inherited: 0x148)
struct UListViewBase : UWidget {
	struct UUserWidget* EntryWidgetClass; // 0x148(0x08)
	float WheelScrollMultiplier; // 0x150(0x04)
	bool bEnableScrollAnimation; // 0x154(0x01)
	bool bEnableFixedLineOffset; // 0x155(0x01)
	char pad_156[0x2]; // 0x156(0x02)
	float FixedLineScrollOffset; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct FMulticastInlineDelegate BP_OnEntryGenerated; // 0x160(0x10)
	struct FMulticastInlineDelegate BP_OnEntryReleased; // 0x170(0x10)
	bool bIsFocusedOnHover; // 0x180(0x01)
	bool bScrollBarHasSizeWhenNotInUse; // 0x181(0x01)
	char pad_182[0x6]; // 0x182(0x06)
	struct FUserWidgetPool EntryWidgetPool; // 0x188(0x80)
	char pad_208[0x58]; // 0x208(0x58)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ListViewBase.SetWheelScrollMultiplier // (None) // @ game+0xfffffffec0000000
};

// Class UMG.ListView
// Size: 0x3b0 (Inherited: 0x260)
struct UListView : UListViewBase {
	char pad_260[0xc0]; // 0x260(0xc0)
	enum class EOrientation Orientation; // 0x320(0x01)
	enum class ESelectionMode SelectionMode; // 0x321(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x322(0x01)
	bool bClearSelectionOnClick; // 0x323(0x01)
	bool bIsFocusable; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)
	float EntrySpacing; // 0x328(0x04)
	bool bReturnFocusToSelection; // 0x32c(0x01)
	char pad_32D[0x3]; // 0x32d(0x03)
	struct TArray<struct UObject*> ListItems; // 0x330(0x10)
	char pad_340[0x10]; // 0x340(0x10)
	struct FMulticastInlineDelegate BP_OnEntryInitialized; // 0x350(0x10)
	struct FMulticastInlineDelegate BP_OnItemClicked; // 0x360(0x10)
	struct FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0x370(0x10)
	struct FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0x380(0x10)
	struct FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0x390(0x10)
	struct FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0x3a0(0x10)

	void SetSelectionMode(enum class ESelectionMode SelectionMode); // Function UMG.ListView.SetSelectionMode // (None) // @ game+0xfffffffec0000000
};

// Class UMG.ListViewDesignerPreviewItem
// Size: 0x30 (Inherited: 0x30)
struct UListViewDesignerPreviewItem : UObject {
};

// Class UMG.MenuAnchor
// Size: 0x1a0 (Inherited: 0x160)
struct UMenuAnchor : UContentWidget {
	struct UUserWidget* MenuClass; // 0x160(0x08)
	struct FDelegate OnGetMenuContentEvent; // 0x168(0x10)
	enum class EMenuPlacement Placement; // 0x178(0x01)
	bool bFitInWindow; // 0x179(0x01)
	bool ShouldDeferPaintingAfterWindowContent; // 0x17a(0x01)
	bool UseApplicationMenuStack; // 0x17b(0x01)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FMulticastInlineDelegate OnMenuOpenChanged; // 0x180(0x10)
	char pad_190[0x10]; // 0x190(0x10)

	void ToggleOpen(bool bFocusOnOpen); // Function UMG.MenuAnchor.ToggleOpen // (None) // @ game+0xfffffffec0000000
};

// Class UMG.MouseCursorBinding
// Size: 0x68 (Inherited: 0x68)
struct UMouseCursorBinding : UPropertyBinding {

	enum class EMouseCursor GetValue(); // Function UMG.MouseCursorBinding.GetValue // (None) // @ game+0xfffffffec0000000
};

// Class UMG.MovieScene2DTransformSection
// Size: 0x558 (Inherited: 0xe8)
struct UMovieScene2DTransformSection : UMovieSceneSection {
	struct FMovieScene2DTransformMask TransformMask; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FMovieSceneFloatChannel Translation[0x2]; // 0xf0(0x140)
	struct FMovieSceneFloatChannel Rotation; // 0x230(0xa0)
	struct FMovieSceneFloatChannel Scale[0x2]; // 0x2d0(0x140)
	struct FMovieSceneFloatChannel Shear[0x2]; // 0x410(0x140)
	char pad_550[0x8]; // 0x550(0x08)
};

// Class UMG.MovieScene2DTransformTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieScene2DTransformTrack : UMovieScenePropertyTrack {
};

// Class UMG.MovieSceneMarginSection
// Size: 0x368 (Inherited: 0xe8)
struct UMovieSceneMarginSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel TopCurve; // 0xe8(0xa0)
	struct FMovieSceneFloatChannel LeftCurve; // 0x188(0xa0)
	struct FMovieSceneFloatChannel RightCurve; // 0x228(0xa0)
	struct FMovieSceneFloatChannel BottomCurve; // 0x2c8(0xa0)
};

// Class UMG.MovieSceneMarginTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneMarginTrack : UMovieScenePropertyTrack {
};

// Class UMG.MovieSceneWidgetMaterialTrack
// Size: 0x88 (Inherited: 0x70)
struct UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack {
	struct TArray<struct FName> BrushPropertyNamePath; // 0x70(0x10)
	struct FName TrackName; // 0x80(0x08)
};

// Class UMG.MultiLineEditableText
// Size: 0x4f0 (Inherited: 0x168)
struct UMultiLineEditableText : UTextLayoutWidget {
	struct FText Text; // 0x168(0x18)
	struct FText HintText; // 0x180(0x18)
	struct FDelegate HintTextDelegate; // 0x198(0x10)
	struct FTextBlockStyle WidgetStyle; // 0x1a8(0x2a0)
	bool bIsReadOnly; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)
	struct FSlateFontInfo Font; // 0x450(0x60)
	bool SelectAllTextWhenFocused; // 0x4b0(0x01)
	bool ClearTextSelectionOnFocusLoss; // 0x4b1(0x01)
	bool RevertTextOnEscape; // 0x4b2(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x4b3(0x01)
	bool AllowContextMenu; // 0x4b4(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x4b5(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x4b6(0x01)
	char pad_4B7[0x1]; // 0x4b7(0x01)
	struct FMulticastInlineDelegate OnTextChanged; // 0x4b8(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x4c8(0x10)
	bool bIsFocusedOnHover; // 0x4d8(0x01)
	char pad_4D9[0x17]; // 0x4d9(0x17)

	void SetWidgetStyle(struct FTextBlockStyle InWidgetStyle); // Function UMG.MultiLineEditableText.SetWidgetStyle // (None) // @ game+0xfffffffec0000000
};

// Class UMG.MultiLineEditableTextBox
// Size: 0xd98 (Inherited: 0x168)
struct UMultiLineEditableTextBox : UTextLayoutWidget {
	struct FText Text; // 0x168(0x18)
	struct FText HintText; // 0x180(0x18)
	struct FDelegate HintTextDelegate; // 0x198(0x10)
	struct FEditableTextBoxStyle WidgetStyle; // 0x1a8(0x880)
	struct FTextBlockStyle TextStyle; // 0xa28(0x2a0)
	bool bIsReadOnly; // 0xcc8(0x01)
	bool AllowContextMenu; // 0xcc9(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xcca(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xccb(0x01)
	char pad_CCC[0x4]; // 0xccc(0x04)
	struct USlateWidgetStyleAsset* Style; // 0xcd0(0x08)
	struct FSlateFontInfo Font; // 0xcd8(0x60)
	struct FLinearColor ForegroundColor; // 0xd38(0x10)
	struct FLinearColor BackgroundColor; // 0xd48(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xd58(0x10)
	struct FMulticastInlineDelegate OnTextChanged; // 0xd68(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xd78(0x10)
	char pad_D88[0x10]; // 0xd88(0x10)

	void SetTextStyle(struct FTextBlockStyle InTextStyle); // Function UMG.MultiLineEditableTextBox.SetTextStyle // (None) // @ game+0xfffffffec0000000
};

// Class UMG.NamedSlot
// Size: 0x170 (Inherited: 0x160)
struct UNamedSlot : UContentWidget {
	char pad_160[0x10]; // 0x160(0x10)
};

// Class UMG.NamedSlotInterface
// Size: 0x30 (Inherited: 0x30)
struct UNamedSlotInterface : UInterface {
};

// Class UMG.NativeWidgetHost
// Size: 0x158 (Inherited: 0x148)
struct UNativeWidgetHost : UWidget {
	char pad_148[0x10]; // 0x148(0x10)
};

// Class UMG.Overlay
// Size: 0x170 (Inherited: 0x160)
struct UOverlay : UPanelWidget {
	char pad_160[0x10]; // 0x160(0x10)

	struct UOverlaySlot* AddChildToOverlay(struct UWidget* Content); // Function UMG.Overlay.AddChildToOverlay // (None) // @ game+0xfffffffec0000000
};

// Class UMG.OverlaySlot
// Size: 0x60 (Inherited: 0x40)
struct UOverlaySlot : UPanelSlot {
	char pad_40[0x8]; // 0x40(0x08)
	struct FMargin Padding; // 0x48(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.OverlaySlot.SetVerticalAlignment // (None) // @ game+0xfffffffec0000000
};

// Class UMG.ProgressBar
// Size: 0x390 (Inherited: 0x148)
struct UProgressBar : UWidget {
	struct FProgressBarStyle WidgetStyle; // 0x148(0x1b8)
	struct USlateWidgetStyleAsset* Style; // 0x300(0x08)
	struct USlateBrushAsset* BackgroundImage; // 0x308(0x08)
	struct USlateBrushAsset* FillImage; // 0x310(0x08)
	struct USlateBrushAsset* MarqueeImage; // 0x318(0x08)
	float Percent; // 0x320(0x04)
	enum class EProgressBarFillType BarFillType; // 0x324(0x01)
	bool bIsMarquee; // 0x325(0x01)
	char pad_326[0x2]; // 0x326(0x02)
	struct FVector2D BorderPadding; // 0x328(0x08)
	struct FDelegate PercentDelegate; // 0x330(0x10)
	struct FSlateColor FillColorAndOpacity; // 0x340(0x30)
	struct FDelegate FillColorAndOpacityDelegate; // 0x370(0x10)
	char pad_380[0x10]; // 0x380(0x10)

	void SetPercent(float InPercent); // Function UMG.ProgressBar.SetPercent // (None) // @ game+0xfffffffec0000000
};

// Class UMG.RetainerBox
// Size: 0x190 (Inherited: 0x160)
struct URetainerBox : UContentWidget {
	bool RenderOnInvalidation; // 0x160(0x01)
	bool RenderOnPhase; // 0x161(0x01)
	char pad_162[0x2]; // 0x162(0x02)
	int32_t Phase; // 0x164(0x04)
	int32_t PhaseCount; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct UMaterialInterface* EffectMaterial; // 0x170(0x08)
	struct FName TextureParameter; // 0x178(0x08)
	char pad_180[0x10]; // 0x180(0x10)

	void SetTextureParameter(struct FName TextureParameter); // Function UMG.RetainerBox.SetTextureParameter // (None) // @ game+0xfffffffec0000000
};

// Class UMG.RichTextBlock
// Size: 0x740 (Inherited: 0x168)
struct URichTextBlock : UTextLayoutWidget {
	struct FRichTextGlobalStyle DefaultGlobalStyle; // 0x168(0x08)
	bool bForceUppercase; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)
	struct FText Text; // 0x178(0x18)
	struct UDataTable* TextStyleSet; // 0x190(0x08)
	struct TArray<struct URichTextBlockDecorator*> DecoratorClasses; // 0x198(0x10)
	bool bOverrideDefaultStyle; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
	struct FTextBlockStyle DefaultTextStyleOverride; // 0x1b0(0x2a0)
	float MinDesiredWidth; // 0x450(0x04)
	int32_t Kerning; // 0x454(0x04)
	char pad_458[0x2a0]; // 0x458(0x2a0)
	struct TArray<struct URichTextBlockDecorator*> InstanceDecorators; // 0x6f8(0x10)
	char pad_708[0x38]; // 0x708(0x38)

	void SetWrapTextAt(float InWrapTextAt); // Function UMG.RichTextBlock.SetWrapTextAt // (None) // @ game+0xfffffffec0000000
};

// Class UMG.RichTextBlockImageDecorator
// Size: 0x38 (Inherited: 0x30)
struct URichTextBlockImageDecorator : URichTextBlockDecorator {
	struct UDataTable* ImageSet; // 0x30(0x08)
};

// Class UMG.SafeZone
// Size: 0x178 (Inherited: 0x160)
struct USafeZone : UContentWidget {
	bool PadLeft; // 0x160(0x01)
	bool PadRight; // 0x161(0x01)
	bool PadTop; // 0x162(0x01)
	bool PadBottom; // 0x163(0x01)
	char pad_164[0x14]; // 0x164(0x14)

	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom); // Function UMG.SafeZone.SetSidesToPad // (None) // @ game+0xfffffffec0000000
};

// Class UMG.SafeZoneSlot
// Size: 0x68 (Inherited: 0x40)
struct USafeZoneSlot : UPanelSlot {
	bool bIsTitleSafe; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FMargin SafeAreaScale; // 0x44(0x10)
	enum class EHorizontalAlignment HAlign; // 0x54(0x01)
	enum class EVerticalAlignment VAlign; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	struct FMargin Padding; // 0x58(0x10)
};

// Class UMG.ScaleBox
// Size: 0x180 (Inherited: 0x160)
struct UScaleBox : UContentWidget {
	enum class EStretch Stretch; // 0x160(0x01)
	enum class EStretchDirection StretchDirection; // 0x161(0x01)
	char pad_162[0x2]; // 0x162(0x02)
	float UserSpecifiedScale; // 0x164(0x04)
	bool IgnoreInheritedScale; // 0x168(0x01)
	char pad_169[0x17]; // 0x169(0x17)

	void SetUserSpecifiedScale(float InUserSpecifiedScale); // Function UMG.ScaleBox.SetUserSpecifiedScale // (None) // @ game+0xfffffffec0000000
};

// Class UMG.ScaleBoxSlot
// Size: 0x68 (Inherited: 0x40)
struct UScaleBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScaleBoxSlot.SetVerticalAlignment // (None) // @ game+0xfffffffec0000000
};

// Class UMG.ScrollBar
// Size: 0x698 (Inherited: 0x148)
struct UScrollBar : UWidget {
	struct FScrollBarStyle WidgetStyle; // 0x148(0x518)
	struct USlateWidgetStyleAsset* Style; // 0x660(0x08)
	bool bAlwaysShowScrollbar; // 0x668(0x01)
	bool bAlwaysShowScrollbarTrack; // 0x669(0x01)
	enum class EOrientation Orientation; // 0x66a(0x01)
	char pad_66B[0x1]; // 0x66b(0x01)
	struct FVector2D Thickness; // 0x66c(0x08)
	struct FMargin Padding; // 0x674(0x10)
	char pad_684[0x14]; // 0x684(0x14)

	void SetState(float InOffsetFraction, float InThumbSizeFraction); // Function UMG.ScrollBar.SetState // (None) // @ game+0xfffffffec0000000
};

// Class UMG.ScrollBox
// Size: 0x930 (Inherited: 0x160)
struct UScrollBox : UPanelWidget {
	struct FScrollBoxStyle WidgetStyle; // 0x160(0x248)
	struct FScrollBarStyle WidgetBarStyle; // 0x3a8(0x518)
	struct USlateWidgetStyleAsset* Style; // 0x8c0(0x08)
	struct USlateWidgetStyleAsset* BarStyle; // 0x8c8(0x08)
	enum class EOrientation Orientation; // 0x8d0(0x01)
	enum class ESlateVisibility ScrollBarVisibility; // 0x8d1(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x8d2(0x01)
	char pad_8D3[0x1]; // 0x8d3(0x01)
	struct FVector2D ScrollbarThickness; // 0x8d4(0x08)
	struct FMargin ScrollbarPadding; // 0x8dc(0x10)
	bool AlwaysShowScrollbar; // 0x8ec(0x01)
	bool AlwaysShowScrollbarTrack; // 0x8ed(0x01)
	bool bScrollBarHasSizeWhenNotInUse; // 0x8ee(0x01)
	bool bHandleNavigation; // 0x8ef(0x01)
	bool AllowOverscroll; // 0x8f0(0x01)
	bool bAnimateWheelScrolling; // 0x8f1(0x01)
	enum class EDescendantScrollDestination NavigationDestination; // 0x8f2(0x01)
	char pad_8F3[0x1]; // 0x8f3(0x01)
	float NavigationScrollPadding; // 0x8f4(0x04)
	enum class EScrollWhenFocusChanges ScrollWhenFocusChanges; // 0x8f8(0x01)
	bool bAllowRightClickDragScrolling; // 0x8f9(0x01)
	char pad_8FA[0x2]; // 0x8fa(0x02)
	float WheelScrollMultiplier; // 0x8fc(0x04)
	float ChildSpacing; // 0x900(0x04)
	float ScrollAnimationSpeed; // 0x904(0x04)
	struct FMulticastInlineDelegate OnUserScrolled; // 0x908(0x10)
	char pad_918[0x18]; // 0x918(0x18)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ScrollBox.SetWheelScrollMultiplier // (None) // @ game+0xfffffffec0000000
};

// Class UMG.ScrollBoxSlot
// Size: 0x60 (Inherited: 0x40)
struct UScrollBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScrollBoxSlot.SetVerticalAlignment // (None) // @ game+0xfffffffec0000000
};

// Class UMG.SizeBox
// Size: 0x198 (Inherited: 0x160)
struct USizeBox : UContentWidget {
	char pad_160[0x10]; // 0x160(0x10)
	float WidthOverride; // 0x170(0x04)
	float HeightOverride; // 0x174(0x04)
	float MinDesiredWidth; // 0x178(0x04)
	float MinDesiredHeight; // 0x17c(0x04)
	float MaxDesiredWidth; // 0x180(0x04)
	float MaxDesiredHeight; // 0x184(0x04)
	float MinAspectRatio; // 0x188(0x04)
	float MaxAspectRatio; // 0x18c(0x04)
	char bOverride_WidthOverride : 1; // 0x190(0x01)
	char bOverride_HeightOverride : 1; // 0x190(0x01)
	char bOverride_MinDesiredWidth : 1; // 0x190(0x01)
	char bOverride_MinDesiredHeight : 1; // 0x190(0x01)
	char bOverride_MaxDesiredWidth : 1; // 0x190(0x01)
	char bOverride_MaxDesiredHeight : 1; // 0x190(0x01)
	char bOverride_MinAspectRatio : 1; // 0x190(0x01)
	char bOverride_MaxAspectRatio : 1; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)

	void SetWidthOverride(float InWidthOverride); // Function UMG.SizeBox.SetWidthOverride // (None) // @ game+0xfffffffec0000000
};

// Class UMG.SizeBoxSlot
// Size: 0x68 (Inherited: 0x40)
struct USizeBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x60(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.SizeBoxSlot.SetVerticalAlignment // (None) // @ game+0xfffffffec0000000
};

// Class UMG.SlateBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct USlateBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FVector2D TransformVectorLocalToAbsolute(struct FGeometry Geometry, struct FVector2D LocalVector); // Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute // (None) // @ game+0xfffffffec0000000
};

// Class UMG.SlateVectorArtData
// Size: 0x68 (Inherited: 0x30)
struct USlateVectorArtData : UObject {
	struct TArray<struct FSlateMeshVertex> VertexData; // 0x30(0x10)
	struct TArray<uint32_t> IndexData; // 0x40(0x10)
	struct UMaterialInterface* Material; // 0x50(0x08)
	struct FVector2D ExtentMin; // 0x58(0x08)
	struct FVector2D ExtentMax; // 0x60(0x08)
};

// Class UMG.SlateAccessibleWidgetData
// Size: 0x88 (Inherited: 0x30)
struct USlateAccessibleWidgetData : UObject {
	bool bCanChildrenBeAccessible; // 0x30(0x01)
	enum class ESlateAccessibleBehavior AccessibleBehavior; // 0x31(0x01)
	enum class ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
	struct FText AccessibleText; // 0x38(0x18)
	struct FDelegate AccessibleTextDelegate; // 0x50(0x10)
	struct FText AccessibleSummaryText; // 0x60(0x18)
	struct FDelegate AccessibleSummaryTextDelegate; // 0x78(0x10)
};

// Class UMG.Spacer
// Size: 0x160 (Inherited: 0x148)
struct USpacer : UWidget {
	struct FVector2D Size; // 0x148(0x08)
	char pad_150[0x10]; // 0x150(0x10)

	void SetSize(struct FVector2D InSize); // Function UMG.Spacer.SetSize // (None) // @ game+0xfffffffec0000000
};

// Class UMG.SpinBox
// Size: 0x5a0 (Inherited: 0x148)
struct USpinBox : UWidget {
	float Value; // 0x148(0x04)
	struct FDelegate ValueDelegate; // 0x14c(0x10)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct FSpinBoxStyle WidgetStyle; // 0x160(0x318)
	struct USlateWidgetStyleAsset* Style; // 0x478(0x08)
	int32_t MinFractionalDigits; // 0x480(0x04)
	int32_t MaxFractionalDigits; // 0x484(0x04)
	bool bAlwaysUsesDeltaSnap; // 0x488(0x01)
	char pad_489[0x3]; // 0x489(0x03)
	float Delta; // 0x48c(0x04)
	float SliderExponent; // 0x490(0x04)
	char pad_494[0x4]; // 0x494(0x04)
	struct FSlateFontInfo Font; // 0x498(0x60)
	enum class ETextJustify Justification; // 0x4f8(0x01)
	char pad_4F9[0x3]; // 0x4f9(0x03)
	float MinDesiredWidth; // 0x4fc(0x04)
	bool ClearKeyboardFocusOnCommit; // 0x500(0x01)
	bool SelectAllTextOnCommit; // 0x501(0x01)
	bool bIsFocusedOnHover; // 0x502(0x01)
	char pad_503[0x5]; // 0x503(0x05)
	struct FSlateColor ForegroundColor; // 0x508(0x30)
	struct FMulticastInlineDelegate OnValueChanged; // 0x538(0x10)
	struct FMulticastInlineDelegate OnValueCommitted; // 0x548(0x10)
	struct FMulticastInlineDelegate OnBeginSliderMovement; // 0x558(0x10)
	struct FMulticastInlineDelegate OnEndSliderMovement; // 0x568(0x10)
	char bOverride_MinValue : 1; // 0x578(0x01)
	char bOverride_MaxValue : 1; // 0x578(0x01)
	char bOverride_MinSliderValue : 1; // 0x578(0x01)
	char bOverride_MaxSliderValue : 1; // 0x578(0x01)
	char pad_578_4 : 4; // 0x578(0x01)
	char pad_579[0x3]; // 0x579(0x03)
	float MinValue; // 0x57c(0x04)
	float MaxValue; // 0x580(0x04)
	float MinSliderValue; // 0x584(0x04)
	float MaxSliderValue; // 0x588(0x04)
	char pad_58C[0x14]; // 0x58c(0x14)

	void SetValue(float NewValue); // Function UMG.SpinBox.SetValue // (None) // @ game+0xfffffffec0000000
};

// Class UMG.TextBinding
// Size: 0x70 (Inherited: 0x68)
struct UTextBinding : UPropertyBinding {
	char pad_68[0x8]; // 0x68(0x08)

	struct FText GetTextValue(); // Function UMG.TextBinding.GetTextValue // (None) // @ game+0xfffffffec0000000
};

// Class UMG.Throbber
// Size: 0x1f8 (Inherited: 0x148)
struct UThrobber : UWidget {
	int32_t NumberOfPieces; // 0x148(0x04)
	bool bAnimateHorizontally; // 0x14c(0x01)
	bool bAnimateVertically; // 0x14d(0x01)
	bool bAnimateOpacity; // 0x14e(0x01)
	char pad_14F[0x1]; // 0x14f(0x01)
	struct USlateBrushAsset* PieceImage; // 0x150(0x08)
	struct FSlateBrush Image; // 0x158(0x90)
	char pad_1E8[0x10]; // 0x1e8(0x10)

	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.Throbber.SetNumberOfPieces // (None) // @ game+0xfffffffec0000000
};

// Class UMG.TileView
// Size: 0x3d0 (Inherited: 0x3b0)
struct UTileView : UListView {
	float EntryHeight; // 0x3b0(0x04)
	float EntryWidth; // 0x3b4(0x04)
	enum class EListItemAlignment TileAlignment; // 0x3b8(0x01)
	bool bWrapHorizontalNavigation; // 0x3b9(0x01)
	char pad_3BA[0x16]; // 0x3ba(0x16)

	void SetEntryWidth(float NewWidth); // Function UMG.TileView.SetEntryWidth // (None) // @ game+0xfffffffec0000000
};

// Class UMG.TreeView
// Size: 0x408 (Inherited: 0x3b0)
struct UTreeView : UListView {
	char pad_3B0[0x10]; // 0x3b0(0x10)
	struct FDelegate BP_OnGetItemChildren; // 0x3c0(0x10)
	struct FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x3d0(0x10)
	char pad_3E0[0x28]; // 0x3e0(0x28)

	void SetItemExpansion(struct UObject* Item, bool bExpandItem); // Function UMG.TreeView.SetItemExpansion // (None) // @ game+0xfffffffec0000000
};

// Class UMG.UMGSequencePlayer
// Size: 0x7b0 (Inherited: 0x30)
struct UUMGSequencePlayer : UObject {
	char pad_30[0x3e0]; // 0x30(0x3e0)
	struct UWidgetAnimation* Animation; // 0x410(0x08)
	char pad_418[0x398]; // 0x418(0x398)

	void SetUserTag(struct FName InUserTag); // Function UMG.UMGSequencePlayer.SetUserTag // (None) // @ game+0xfffffffec0000000
};

// Class UMG.UniformGridPanel
// Size: 0x188 (Inherited: 0x160)
struct UUniformGridPanel : UPanelWidget {
	struct FMargin SlotPadding; // 0x160(0x10)
	float MinDesiredSlotWidth; // 0x170(0x04)
	float MinDesiredSlotHeight; // 0x174(0x04)
	char pad_178[0x10]; // 0x178(0x10)

	void SetSlotPadding(struct FMargin InSlotPadding); // Function UMG.UniformGridPanel.SetSlotPadding // (None) // @ game+0xfffffffec0000000
};

// Class UMG.UniformGridSlot
// Size: 0x58 (Inherited: 0x40)
struct UUniformGridSlot : UPanelSlot {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x40(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	int32_t Row; // 0x44(0x04)
	int32_t Column; // 0x48(0x04)
	char pad_4C[0xc]; // 0x4c(0x0c)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.UniformGridSlot.SetVerticalAlignment // (None) // @ game+0xfffffffec0000000
};

// Class UMG.VerticalBox
// Size: 0x178 (Inherited: 0x160)
struct UVerticalBox : UPanelWidget {
	char pad_160[0x10]; // 0x160(0x10)
	float ChildSpacing; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)

	void SetChildSpacing(float Spacing); // Function UMG.VerticalBox.SetChildSpacing // (None) // @ game+0xfffffffec0000000
};

// Class UMG.VerticalBoxSlot
// Size: 0x68 (Inherited: 0x40)
struct UVerticalBoxSlot : UPanelSlot {
	struct FSlateChildSize Size; // 0x40(0x08)
	struct FMargin Padding; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x60(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.VerticalBoxSlot.SetVerticalAlignment // (None) // @ game+0xfffffffec0000000
};

// Class UMG.Viewport
// Size: 0x188 (Inherited: 0x160)
struct UViewport : UContentWidget {
	struct FLinearColor BackgroundColor; // 0x160(0x10)
	char pad_170[0x18]; // 0x170(0x18)

	struct AActor* Spawn(struct AActor* ActorClass); // Function UMG.Viewport.Spawn // (None) // @ game+0xfffffffec0000000
};

// Class UMG.VisibilityBinding
// Size: 0x68 (Inherited: 0x68)
struct UVisibilityBinding : UPropertyBinding {

	enum class ESlateVisibility GetValue(); // Function UMG.VisibilityBinding.GetValue // (None) // @ game+0xfffffffec0000000
};

// Class UMG.WidgetAnimation
// Size: 0x380 (Inherited: 0x350)
struct UWidgetAnimation : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x350(0x08)
	struct TArray<struct FWidgetAnimationBinding> AnimationBindings; // 0x358(0x10)
	bool bLegacyFinishOnStop; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
	struct FString DisplayLabel; // 0x370(0x10)

	void UnbindFromAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationStarted // (None) // @ game+0xfffffffec0000000
};

// Class UMG.WidgetAnimationDelegateBinding
// Size: 0x40 (Inherited: 0x30)
struct UWidgetAnimationDelegateBinding : UDynamicBlueprintBinding {
	struct TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x30(0x10)
};

// Class UMG.WidgetAnimationPlayCallbackProxy
// Size: 0x50 (Inherited: 0x30)
struct UWidgetAnimationPlayCallbackProxy : UObject {
	struct FMulticastInlineDelegate Finished; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)

	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(struct UUMGSequencePlayer* Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject // (None) // @ game+0xfffffffec0000000
};

// Class UMG.WidgetBinding
// Size: 0x68 (Inherited: 0x68)
struct UWidgetBinding : UPropertyBinding {

	struct UWidget* GetValue(); // Function UMG.WidgetBinding.GetValue // (None) // @ game+0xfffffffec0000000
};

// Class UMG.WidgetBlueprintGeneratedClass
// Size: 0x3a0 (Inherited: 0x330)
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	struct UWidgetTree* WidgetTree; // 0x330(0x08)
	char bAllowTemplate : 1; // 0x338(0x01)
	char bAllowDynamicCreation : 1; // 0x338(0x01)
	char bValidTemplate : 1; // 0x338(0x01)
	char bTemplateInitialized : 1; // 0x338(0x01)
	char bCookedTemplate : 1; // 0x338(0x01)
	char bClassRequiresNativeTick : 1; // 0x338(0x01)
	char pad_338_6 : 2; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct TArray<struct FDelegateRuntimeBinding> Bindings; // 0x340(0x10)
	struct TArray<struct UWidgetAnimation*> Animations; // 0x350(0x10)
	struct TArray<struct FName> NamedSlots; // 0x360(0x10)
	struct TSoftObjectPtr<UUserWidget> TemplateAsset; // 0x370(0x28)
	struct UUserWidget* Template; // 0x398(0x08)
};

// Class UMG.WidgetBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UWidgetBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FEventReply UnlockMouse(struct FEventReply Reply); // Function UMG.WidgetBlueprintLibrary.UnlockMouse // (None) // @ game+0xfffffffec0000000
};

// Class UMG.WidgetComponent
// Size: 0x650 (Inherited: 0x520)
struct UWidgetComponent : UMeshComponent {
	enum class EWidgetSpace Space; // 0x518(0x01)
	enum class EWidgetTimingPolicy TimingPolicy; // 0x519(0x01)
	struct UUserWidget* WidgetClass; // 0x520(0x08)
	struct FIntPoint DrawSize; // 0x528(0x08)
	bool bManuallyRedraw; // 0x530(0x01)
	bool bRedrawRequested; // 0x531(0x01)
	float RedrawTime; // 0x534(0x04)
	char pad_538[0x8]; // 0x538(0x08)
	struct FIntPoint CurrentDrawSize; // 0x540(0x08)
	bool bDrawAtDesiredSize; // 0x548(0x01)
	char pad_549[0x3]; // 0x549(0x03)
	struct FVector2D Pivot; // 0x54c(0x08)
	bool bReceiveHardwareInput; // 0x554(0x01)
	bool bWindowFocusable; // 0x555(0x01)
	enum class EWindowVisibility WindowVisibility; // 0x556(0x01)
	bool bApplyGammaCorrection; // 0x557(0x01)
	struct ULocalPlayer* OwnerPlayer; // 0x558(0x08)
	struct FLinearColor BackgroundColor; // 0x560(0x10)
	struct FLinearColor TintColorAndOpacity; // 0x570(0x10)
	float OpacityFromTexture; // 0x580(0x04)
	enum class EWidgetBlendMode BlendMode; // 0x584(0x01)
	bool bIsTwoSided; // 0x585(0x01)
	bool bHasTranslucentDepthTest; // 0x586(0x01)
	bool TickWhenOffscreen; // 0x587(0x01)
	struct UUserWidget* Widget; // 0x588(0x08)
	char pad_590[0x20]; // 0x590(0x20)
	struct UBodySetup* BodySetup; // 0x5b0(0x08)
	struct UMaterialInterface* TranslucentMaterial; // 0x5b8(0x08)
	struct UMaterialInterface* TranslucentMaterial_NoDepth; // 0x5c0(0x08)
	struct UMaterialInterface* TranslucentMaterial_OneSided; // 0x5c8(0x08)
	struct UMaterialInterface* TranslucentMaterial_OneSided_NoDepth; // 0x5d0(0x08)
	struct UMaterialInterface* OpaqueMaterial; // 0x5d8(0x08)
	struct UMaterialInterface* OpaqueMaterial_OneSided; // 0x5e0(0x08)
	struct UMaterialInterface* MaskedMaterial; // 0x5e8(0x08)
	struct UMaterialInterface* MaskedMaterial_OneSided; // 0x5f0(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x5f8(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x600(0x08)
	bool bAddedToScreen; // 0x608(0x01)
	bool bEditTimeUsable; // 0x609(0x01)
	bool bForceDrawOneFrame; // 0x60a(0x01)
	char pad_60B[0x1]; // 0x60b(0x01)
	struct FName SharedLayerName; // 0x60c(0x08)
	int32_t LayerZOrder; // 0x614(0x04)
	enum class EWidgetGeometryMode GeometryMode; // 0x618(0x01)
	char pad_619[0x3]; // 0x619(0x03)
	float CylinderArcAngle; // 0x61c(0x04)
	char pad_620[0x30]; // 0x620(0x30)

	void SetWindowVisibility(enum class EWindowVisibility InVisibility); // Function UMG.WidgetComponent.SetWindowVisibility // (None) // @ game+0xfffffffec0000000
};

// Class UMG.WidgetInteractionComponent
// Size: 0x410 (Inherited: 0x220)
struct UWidgetInteractionComponent : USceneComponent {
	struct FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x220(0x10)
	char pad_230[0x10]; // 0x230(0x10)
	int32_t VirtualUserIndex; // 0x240(0x04)
	float PointerIndex; // 0x244(0x04)
	enum class ECollisionChannel TraceChannel; // 0x248(0x01)
	char pad_249[0x3]; // 0x249(0x03)
	float InteractionDistance; // 0x24c(0x04)
	enum class EWidgetInteractionSource InteractionSource; // 0x250(0x01)
	bool bEnableHitTesting; // 0x251(0x01)
	bool bHitTestReturnsFaceIndex; // 0x252(0x01)
	bool bIgnoreObstructions; // 0x253(0x01)
	bool bShowDebug; // 0x254(0x01)
	char pad_255[0x3]; // 0x255(0x03)
	struct FLinearColor DebugColor; // 0x258(0x10)
	char pad_268[0x78]; // 0x268(0x78)
	struct FHitResult CustomHitResult; // 0x2e0(0x88)
	struct FVector2D LocalHitLocation; // 0x368(0x08)
	struct FVector2D LastLocalHitLocation; // 0x370(0x08)
	struct UWidgetComponent* HoveredWidgetComponent; // 0x378(0x08)
	struct FHitResult LastHitResult; // 0x380(0x88)
	bool bIsHoveredWidgetInteractable; // 0x408(0x01)
	bool bIsHoveredWidgetFocusable; // 0x409(0x01)
	bool bIsHoveredWidgetHitTestVisible; // 0x40a(0x01)
	char pad_40B[0x5]; // 0x40b(0x05)

	void SetFocus(struct UWidget* FocusWidget); // Function UMG.WidgetInteractionComponent.SetFocus // (None) // @ game+0xfffffffec0000000
};

// Class UMG.WidgetLayoutLibrary
// Size: 0x30 (Inherited: 0x30)
struct UWidgetLayoutLibrary : UBlueprintFunctionLibrary {

	struct UWrapBoxSlot* SlotAsWrapBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot // (None) // @ game+0xfffffffec0000000
};

// Class UMG.WidgetNavigation
// Size: 0x108 (Inherited: 0x30)
struct UWidgetNavigation : UObject {
	struct FWidgetNavigationData Up; // 0x30(0x24)
	struct FWidgetNavigationData Down; // 0x54(0x24)
	struct FWidgetNavigationData Left; // 0x78(0x24)
	struct FWidgetNavigationData Right; // 0x9c(0x24)
	struct FWidgetNavigationData Next; // 0xc0(0x24)
	struct FWidgetNavigationData Previous; // 0xe4(0x24)
};

// Class UMG.WidgetSwitcher
// Size: 0x188 (Inherited: 0x160)
struct UWidgetSwitcher : UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct FMulticastInlineDelegate OnActiveWidgetChanged; // 0x168(0x10)
	char pad_178[0x10]; // 0x178(0x10)

	void SetActiveWidgetIndex(int32_t Index); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex // (None) // @ game+0xfffffffec0000000
};

// Class UMG.WidgetSwitcherSlot
// Size: 0x60 (Inherited: 0x40)
struct UWidgetSwitcherSlot : UPanelSlot {
	char pad_40[0x8]; // 0x40(0x08)
	struct FMargin Padding; // 0x48(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WidgetSwitcherSlot.SetVerticalAlignment // (None) // @ game+0xfffffffec0000000
};

// Class UMG.WidgetTree
// Size: 0x38 (Inherited: 0x30)
struct UWidgetTree : UObject {
	struct UWidget* RootWidget; // 0x30(0x08)
};

// Class UMG.WindowTitleBarArea
// Size: 0x180 (Inherited: 0x160)
struct UWindowTitleBarArea : UContentWidget {
	bool bWindowButtonsEnabled; // 0x160(0x01)
	bool bDoubleClickTogglesFullscreen; // 0x161(0x01)
	char pad_162[0x1e]; // 0x162(0x1e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarArea.SetVerticalAlignment // (None) // @ game+0xfffffffec0000000
};

// Class UMG.WindowTitleBarAreaSlot
// Size: 0x68 (Inherited: 0x40)
struct UWindowTitleBarAreaSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment // (None) // @ game+0xfffffffec0000000
};

// Class UMG.WrapBox
// Size: 0x180 (Inherited: 0x160)
struct UWrapBox : UPanelWidget {
	struct FVector2D InnerSlotPadding; // 0x160(0x08)
	float WrapWidth; // 0x168(0x04)
	bool bExplicitWrapWidth; // 0x16c(0x01)
	char pad_16D[0x13]; // 0x16d(0x13)

	void SetWrapWidth(float InWrapWidth); // Function UMG.WrapBox.SetWrapWidth // (None) // @ game+0xfffffffec0000000
};

// Class UMG.WrapBoxSlot
// Size: 0x68 (Inherited: 0x40)
struct UWrapBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	bool bFillEmptySpace; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float FillSpanWhenLessThan; // 0x54(0x04)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WrapBoxSlot.SetVerticalAlignment // (None) // @ game+0xfffffffec0000000
};

