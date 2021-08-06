// WidgetBlueprintGeneratedClass OptionsBindingsPopup_WBP.OptionsBindingsPopup_WBP_C
// Size: 0x490 (Inherited: 0x450)
struct UOptionsBindingsPopup_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct URichTextBlock* KeyboardCancelText; // 0x458(0x08)
	struct UOverlay* Overlay_48; // 0x460(0x08)
	struct UTextBlock* TimerText; // 0x468(0x08)
	struct FKey CancelKey; // 0x470(0x18)
	struct UKeybindEntryWidget_WBP_C* KeybindEntryWidget; // 0x488(0x08)

	void SetKeybindWidgetToTrack(struct UKeybindEntryWidget_WBP_C* InWidget); // Function OptionsBindingsPopup_WBP.OptionsBindingsPopup_WBP_C.SetKeybindWidgetToTrack // (None) // @ game+0xfffffffec0000000
};

