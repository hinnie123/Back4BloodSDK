// WidgetBlueprintGeneratedClass MissionLoadout_LaunchPartyEntry_WBP.MissionLoadout_LaunchPartyEntry_WBP_C
// Size: 0x4a8 (Inherited: 0x450)
struct UMissionLoadout_LaunchPartyEntry_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UImage* BG; // 0x458(0x08)
	struct UBaseTextBlock_C* CharacterName; // 0x460(0x08)
	struct UVerticalBox* ContentPanel; // 0x468(0x08)
	struct UImage* EmptyDeck; // 0x470(0x08)
	struct UMinimizedCardDeck2_WBP_C* EquippedDeck; // 0x478(0x08)
	struct UHorizontalBox* LockedInPanel; // 0x480(0x08)
	struct UPlayerName_WBP_C* PlayerName; // 0x488(0x08)
	struct AGobiPlayerState* GobiPlayerState; // 0x490(0x08)
	struct UGameplayCardManager* GameplayCardManager; // 0x498(0x08)
	struct APlayerSlot* PlayerSlot; // 0x4a0(0x08)

	void HandleCharacterSelected(struct FDataTableRowHandle RowHandle); // Function MissionLoadout_LaunchPartyEntry_WBP.MissionLoadout_LaunchPartyEntry_WBP_C.HandleCharacterSelected // (None) // @ game+0xfffffffec0000000
};

