// WidgetBlueprintGeneratedClass MatchmakingPartyPrompt_WBP.MatchmakingPartyPrompt_WBP_C
// Size: 0x49c (Inherited: 0x450)
struct UMatchmakingPartyPrompt_WBP_C : UMatchmakingPartyPromptUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UImage* BG; // 0x458(0x08)
	struct UPlatformCalloutImage_WBP_C* CalloutImage; // 0x460(0x08)
	struct UImage* Frame; // 0x468(0x08)
	struct UImage* Hover; // 0x470(0x08)
	struct UTextBlock* OnlineCountText; // 0x478(0x08)
	struct UTextBlock* PartyCountText; // 0x480(0x08)
	struct UImage* PartyIcon; // 0x488(0x08)
	int32_t NumPlayers; // 0x490(0x04)
	int32_t NumSlots; // 0x494(0x04)
	int32_t NumOnline; // 0x498(0x04)

	void SetNumOnline(int32_t InNumPlayersOnline); // Function MatchmakingPartyPrompt_WBP.MatchmakingPartyPrompt_WBP_C.SetNumOnline // (None) // @ game+0xfffffffec0000000
};

