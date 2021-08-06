// WidgetBlueprintGeneratedClass CaravanSelectPanel_WBP.CaravanSelectPanel_WBP_C
// Size: 0x4b0 (Inherited: 0x480)
struct UCaravanSelectPanel_WBP_C : UCaravanSelectPanelUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	struct UVerticalBox* CaravanEntryVBox; // 0x488(0x08)
	struct UTutorialTip_WBP_C* TutorialTip_WBP; // 0x490(0x08)
	struct FMulticastInlineDelegate OnCaravanSelected; // 0x498(0x10)
	int32_t SelectedCaravanIndex; // 0x4a8(0x04)
	int32_t NumAnimationsOutstanding; // 0x4ac(0x04)

	void HandleCaravanArriveDepartAnimationFinished(); // Function CaravanSelectPanel_WBP.CaravanSelectPanel_WBP_C.HandleCaravanArriveDepartAnimationFinished // (None) // @ game+0xfffffffec0000000
};

