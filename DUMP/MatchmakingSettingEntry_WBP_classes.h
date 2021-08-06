// WidgetBlueprintGeneratedClass MatchmakingSettingEntry_WBP.MatchmakingSettingEntry_WBP_C
// Size: 0x651 (Inherited: 0x5c8)
struct UMatchmakingSettingEntry_WBP_C : UMatchmakingSettingEntryUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c8(0x08)
	struct UImage* BG; // 0x5d0(0x08)
	struct UImage* BGHover; // 0x5d8(0x08)
	struct UImage* CheckBox; // 0x5e0(0x08)
	struct UImage* Frame; // 0x5e8(0x08)
	struct UOverlay* HoverContainer; // 0x5f0(0x08)
	struct UImage* LockIcon; // 0x5f8(0x08)
	struct UButtonTextBlock_C* NameText; // 0x600(0x08)
	struct UImage* RunStateIcon; // 0x608(0x08)
	struct UImage* SelectedPip; // 0x610(0x08)
	struct FSlateColor HoveredColor; // 0x618(0x30)
	float FrameUnfocusedRenderOpacity; // 0x648(0x04)
	float FrameFocusedRenderOpacity; // 0x64c(0x04)
	bool bIsHighlighted; // 0x650(0x01)

	void SetHighlight(bool bIsHighlighted); // Function MatchmakingSettingEntry_WBP.MatchmakingSettingEntry_WBP_C.SetHighlight // (None) // @ game+0xfffffffec0000000
};

