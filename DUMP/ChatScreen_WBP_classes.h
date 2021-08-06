// WidgetBlueprintGeneratedClass ChatScreen_WBP.ChatScreen_WBP_C
// Size: 0x670 (Inherited: 0x600)
struct UChatScreen_WBP_C : UChatScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x600(0x08)
	struct UWidgetAnimation* DamageFlash; // 0x608(0x08)
	struct UChatBox_WBP_C* Chat; // 0x610(0x08)
	struct UGobiSafeZone* GobiSafeZone_926; // 0x618(0x08)
	struct UInvalidationBox* InvalidationWrapper; // 0x620(0x08)
	struct UInvitePrompt_WBP_C* InvitePrompt; // 0x628(0x08)
	struct UMatchmakingIndicator_WBP_C* MatchmakingIndicator; // 0x630(0x08)
	struct UNetworkHealth_WBP_C* NetworkHealth_WBP; // 0x638(0x08)
	struct UNotificationShelfEntry_WBP_C* NotificationShelfEntry; // 0x640(0x08)
	struct UVoipOverlay_WBP_C* VoipOverlay; // 0x648(0x08)
	float TAB_HOLD_TIME; // 0x650(0x04)
	float TabHoldEnd; // 0x654(0x04)
	struct UUIScreen* NotificationShelfClass; // 0x658(0x08)
	float Chat Open Delay; // 0x660(0x04)
	char pad_664[0x4]; // 0x664(0x04)
	struct FTimerHandle Open Settings Timer; // 0x668(0x08)

	void SetHoldInfo(); // Function ChatScreen_WBP.ChatScreen_WBP_C.SetHoldInfo // (None) // @ game+0xfffffffec0000000
};

