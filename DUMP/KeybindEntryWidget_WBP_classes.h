// WidgetBlueprintGeneratedClass KeybindEntryWidget_WBP.KeybindEntryWidget_WBP_C
// Size: 0x559 (Inherited: 0x478)
struct UKeybindEntryWidget_WBP_C : UKeybindEntryUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct UBaseTextBlock_C* ActionText; // 0x480(0x08)
	struct UImage* BG; // 0x488(0x08)
	struct UImage* BGHover_2; // 0x490(0x08)
	struct UImage* Frame; // 0x498(0x08)
	struct UInputKeySelectorImage* GamepadBinding; // 0x4a0(0x08)
	struct UImage* GampadBindingBG; // 0x4a8(0x08)
	struct UOverlay* HoverContainer; // 0x4b0(0x08)
	struct UInputKeySelectorImage* KeyBinding; // 0x4b8(0x08)
	struct UImage* KeybindingBG; // 0x4c0(0x08)
	struct FMulticastInlineDelegate OnPreviewSelectKey; // 0x4c8(0x10)
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x4d8(0x10)
	struct FMulticastInlineDelegate OnCantRebind; // 0x4e8(0x10)
	struct FMulticastInlineDelegate OnKeybindBlocked; // 0x4f8(0x10)
	struct TArray<struct FString> CompanionActions; // 0x508(0x10)
	struct FInputChord CachedKeyboardInput; // 0x518(0x20)
	struct FInputChord CachedGamepadInput; // 0x538(0x20)
	bool bIsHighlighted; // 0x558(0x01)

	void SetHighlight(bool isHighlighted); // Function KeybindEntryWidget_WBP.KeybindEntryWidget_WBP_C.SetHighlight // (None) // @ game+0xfffffffec0000000
};

