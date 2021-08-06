// WidgetBlueprintGeneratedClass SafeRoomSummary_WBP.SafeRoomSummary_WBP_C
// Size: 0x49b (Inherited: 0x450)
struct USafeRoomSummary_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UImage* Background; // 0x458(0x08)
	struct URichTextBlock* FooterPromptRichText; // 0x460(0x08)
	struct UImage* headerHR; // 0x468(0x08)
	struct UBaseTextBlock_C* HeaderText; // 0x470(0x08)
	struct UImage* Image_1; // 0x478(0x08)
	struct UOverlay* Overlay; // 0x480(0x08)
	struct UVerticalBox* PartyEntryVBox; // 0x488(0x08)
	struct UImage* Smoke; // 0x490(0x08)
	bool EnteredNewSafeRoom; // 0x498(0x01)
	bool HasBeenDismissed; // 0x499(0x01)
	enum class EPartySafeRoomState WatchedSafeRoomState; // 0x49a(0x01)

	void SetWatchedSafeRoomState(enum class EPartySafeRoomState InWatchedSafeRoomState); // Function SafeRoomSummary_WBP.SafeRoomSummary_WBP_C.SetWatchedSafeRoomState // (None) // @ game+0xfffffffec0000000
};

