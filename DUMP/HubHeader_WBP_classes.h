// WidgetBlueprintGeneratedClass HubHeader_WBP.HubHeader_WBP_C
// Size: 0x4e8 (Inherited: 0x450)
struct UHubHeader_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UHorizontalBox* ButtonsPanel; // 0x458(0x08)
	struct UFirstPartyAccount_WBP_C* FirstPartyAccount_WBP; // 0x460(0x08)
	struct UHeader_WBP_C* Header_WBP; // 0x468(0x08)
	struct UPlatformCalloutImage_WBP_C* PageLeftCallout; // 0x470(0x08)
	struct UPlatformCalloutImage_WBP_C* PageRightCallout; // 0x478(0x08)
	struct UMatchmakingPartyPrompt_WBP_C* PartyPrompt; // 0x480(0x08)
	struct UPlayerSupplyPoints_WBP_C* PlayerSupplyPoints_WBP; // 0x488(0x08)
	struct TMap<struct TSoftClassPtr<UObject>, struct UHubHeaderEntry_WBP_C*> ScreenToHubEntry; // 0x490(0x50)
	struct UUIScreen* CurrentOpenHubScreen; // 0x4e0(0x08)

	void UpdatePartyPromptVisibility(); // Function HubHeader_WBP.HubHeader_WBP_C.UpdatePartyPromptVisibility // (None) // @ game+0xfffffffec0000000
};

