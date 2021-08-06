// WidgetBlueprintGeneratedClass PartyGroupsTab_WBP.PartyGroupsTab_WBP_C
// Size: 0x48c (Inherited: 0x450)
struct UPartyGroupsTab_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UVerticalBox* PlayerLeftStack; // 0x458(0x08)
	struct TArray<struct FPartyPlayer> GroupPlayers; // 0x460(0x10)
	struct TArray<struct FPartyPlayer> EnemyPlayers; // 0x470(0x10)
	int32_t MaxLeftPlayersForMode; // 0x480(0x04)
	int32_t EditorEmptyPlayerCount; // 0x484(0x04)
	int32_t AvailableInviteSlots; // 0x488(0x04)

	void UpdateAvailableInviteSlots(int32_t InAvailableInviteSlots); // Function PartyGroupsTab_WBP.PartyGroupsTab_WBP_C.UpdateAvailableInviteSlots // (None) // @ game+0xfffffffec0000000
};

