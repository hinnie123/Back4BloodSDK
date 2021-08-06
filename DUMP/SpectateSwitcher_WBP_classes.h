// WidgetBlueprintGeneratedClass SpectateSwitcher_WBP.SpectateSwitcher_WBP_C
// Size: 0x520 (Inherited: 0x470)
struct USpectateSwitcher_WBP_C : USpectateSwitcherUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	struct UBackgroundBlur_WBP_C* BackgroundBlur_WBP; // 0x478(0x08)
	struct UBackgroundBlur_WBP_C* BackgroundBlur_WBP_204; // 0x480(0x08)
	struct UImage* BG_Respawn; // 0x488(0x08)
	struct UOverlay* Footer; // 0x490(0x08)
	struct UImage* FooterBG; // 0x498(0x08)
	struct UBaseTextBlock_C* GlobalRespawnTimerPromptText; // 0x4a0(0x08)
	struct UBaseTextBlock_C* GlobalResspawnTimerText; // 0x4a8(0x08)
	struct UImage* HeaderBG; // 0x4b0(0x08)
	struct UImage* MutationPointsIcon; // 0x4b8(0x08)
	struct UBaseTextBlock_C* MutationPointsText; // 0x4c0(0x08)
	struct UPlatformCalloutButton_WBP_C* NextCallout; // 0x4c8(0x08)
	struct UPlatformCalloutButton_WBP_C* OpenZombiePanelCallout; // 0x4d0(0x08)
	struct UPlatformCalloutButton_WBP_C* PreviousCallout; // 0x4d8(0x08)
	struct UHorizontalBox* RepawnTimerContainer; // 0x4e0(0x08)
	struct UPlayerName_WBP_C* TargetName; // 0x4e8(0x08)
	struct UBaseTextBlock_C* UpgradesAvailableText; // 0x4f0(0x08)
	struct UOverlay* ZombiePanelContainer; // 0x4f8(0x08)
	struct UGameplayCardManager* GameplayCardManager; // 0x500(0x08)
	struct AGobiPlayerState* GobiPlayerState; // 0x508(0x08)
	bool CanPlaySpawnReadyAudio; // 0x510(0x01)
	char pad_511[0x7]; // 0x511(0x07)
	struct UTweenContainer* TweenZombiePanel; // 0x518(0x08)

	void SetZombiePanelTween(); // Function SpectateSwitcher_WBP.SpectateSwitcher_WBP_C.SetZombiePanelTween // (None) // @ game+0xfffffffec0000000
};

