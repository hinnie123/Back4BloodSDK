// WidgetBlueprintGeneratedClass PlayerStrikes_WBP.PlayerStrikes_WBP_C
// Size: 0x4c9 (Inherited: 0x450)
struct UPlayerStrikes_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UCanvasPanel* RootPanel; // 0x458(0x08)
	struct UImage* Strike_01; // 0x460(0x08)
	struct UImage* Strike_02; // 0x468(0x08)
	struct UImage* Strike_03; // 0x470(0x08)
	struct UImage* Strike_04; // 0x478(0x08)
	struct UImage* Strike_05; // 0x480(0x08)
	struct UHorizontalBox* StrikeHBox; // 0x488(0x08)
	struct ULifeStateComponent* LifeStateComponent; // 0x490(0x08)
	struct ULifeStateIncap* LifeStateIncap; // 0x498(0x08)
	int32_t IncapCount; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct APlayerSlot* TargetPlayerSlot; // 0x4a8(0x08)
	int32_t MaxIncapCount; // 0x4b0(0x04)
	bool bIsPostRound; // 0x4b4(0x01)
	char pad_4B5[0x3]; // 0x4b5(0x03)
	struct FMulticastInlineDelegate OnStrikesEmpty; // 0x4b8(0x10)
	bool bIsPartyFrame; // 0x4c8(0x01)

	void OnAssignedPawnChanged(struct APlayerSlot* PlayerSlot, struct APawn* Pawn); // Function PlayerStrikes_WBP.PlayerStrikes_WBP_C.OnAssignedPawnChanged // (None) // @ game+0xfffffffec0000000
};

