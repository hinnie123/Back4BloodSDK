// Class Gobi.MovementTickableComponent
// Size: 0x120 (Inherited: 0xd8)
struct UMovementTickableComponent : UActorComponent {
	char pad_D8[0x48]; // 0xd8(0x48)
};

// Class Gobi.AbilityComponent
// Size: 0x1c8 (Inherited: 0x120)
struct UAbilityComponent : UMovementTickableComponent {
	struct FTriggerEffectsDefinition TriggerEffects; // 0x120(0x0c)
	char pad_12C[0x8c]; // 0x12c(0x8c)
	enum class EAbilityType AbilityType; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	struct UAkAudioEvent* DryFireAudio; // 0x1c0(0x08)

	void OnOwningCharacterUnpossessed(struct AGobiCharacter* GobiCharacter); // Function Gobi.AbilityComponent.OnOwningCharacterUnpossessed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiObject
// Size: 0x30 (Inherited: 0x30)
struct UGobiObject : UObject {
};

// Class Gobi.GameplayMod
// Size: 0x88 (Inherited: 0x30)
struct UGameplayMod : UGobiObject {
	bool bApplyOnlyToOwner; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FGameplayTagQuery ApplyTagQuery; // 0x38(0x48)
	bool bInstanced; // 0x80(0x01)
	bool bApplyOnClients; // 0x81(0x01)
	char pad_82[0x2]; // 0x82(0x02)
	int32_t SupportedPhases; // 0x84(0x04)

	void K2_RemoveShared(struct FGameplayModContext ModContext, enum class EModPhase ModPhase, struct TArray<struct AGobiCharacter*> AffectedCharacters); // Function Gobi.GameplayMod.K2_RemoveShared // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AbilityTimeMod
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTimeMod : UGameplayMod {
	enum class EAbilityTimeModType Type; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	struct FGamePropertyFloatMod Time; // 0x8c(0x10)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FGameplayTagContainer AbilityTags; // 0xa0(0x20)
};

// Class Gobi.GobiUserWidget
// Size: 0x450 (Inherited: 0x2d8)
struct UGobiUserWidget : UUserWidget {
	struct FMulticastInlineDelegate OnHovered; // 0x2d8(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x2e8(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x2f8(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x308(0x10)
	struct FMulticastInlineDelegate OnClicked; // 0x318(0x10)
	struct FMulticastInlineDelegate OnRightClicked; // 0x328(0x10)
	struct FMulticastInlineDelegate OnDoubleClicked; // 0x338(0x10)
	bool bListenForCultureChange; // 0x348(0x01)
	bool bIgnoreTrapFocus; // 0x349(0x01)
	char pad_34A[0x6]; // 0x34a(0x06)
	struct TMap<enum class EIconPlatform, struct UAkAudioEvent*> TTSFocusAudioEvents; // 0x350(0x50)
	struct UAkAudioEvent* TTSFocusStopAudioEvent; // 0x3a0(0x08)
	char pad_3A8[0x8]; // 0x3a8(0x08)
	struct FString TTSFocusMessage; // 0x3b0(0x10)
	bool bIsTTSQueued; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct FSlateSound PressedSound; // 0x3c8(0x18)
	struct FSlateSound ClickedSound; // 0x3e0(0x18)
	struct FSlateSound HoveredSound; // 0x3f8(0x18)
	bool bIsHoverEnabled; // 0x410(0x01)
	bool bIsClickEnabled; // 0x411(0x01)
	bool bIsMouseClickEnabled; // 0x412(0x01)
	bool bIsRightClickEnabled; // 0x413(0x01)
	bool bIsGamepadClickEnabled; // 0x414(0x01)
	bool bIsKeyboardClickEnabled; // 0x415(0x01)
	char pad_416[0x2]; // 0x416(0x02)
	struct FName KeyboardClickActionOverride; // 0x418(0x08)
	struct FName GamepadClickActionOverride; // 0x420(0x08)
	struct FKey DragDropKey; // 0x428(0x18)
	bool bIsHovered; // 0x440(0x01)
	bool bIsPressed; // 0x441(0x01)
	bool bIsRightPressed; // 0x442(0x01)
	char pad_443[0xd]; // 0x443(0x0d)

	void SimulateClick(); // Function Gobi.GobiUserWidget.SimulateClick // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.OptionsPanelUserWidget
// Size: 0x460 (Inherited: 0x450)
struct UOptionsPanelUserWidget : UGobiUserWidget {
	char pad_450[0x10]; // 0x450(0x10)

	void SetCalloutsWidget(struct UWidget* Widget); // Function Gobi.OptionsPanelUserWidget.SetCalloutsWidget // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.FTUEOptionsPanelUserWidget
// Size: 0x498 (Inherited: 0x460)
struct UFTUEOptionsPanelUserWidget : UOptionsPanelUserWidget {
	char pad_460[0x10]; // 0x460(0x10)
	bool bShowContinueButton; // 0x470(0x01)
	char pad_471[0xf]; // 0x471(0x0f)
	struct FText Title; // 0x480(0x18)

	bool OnSettingsReloaded(); // Function Gobi.FTUEOptionsPanelUserWidget.OnSettingsReloaded // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AccessibilityOptionsUserWidget
// Size: 0x4d0 (Inherited: 0x498)
struct UAccessibilityOptionsUserWidget : UFTUEOptionsPanelUserWidget {
	char pad_498[0x38]; // 0x498(0x38)

	void OnWaypointOpacityChanged(struct UGobiUserWidget* Widget); // Function Gobi.AccessibilityOptionsUserWidget.OnWaypointOpacityChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.Achievement
// Size: 0xb8 (Inherited: 0x30)
struct UAchievement : UObject {
	char pad_30[0x1]; // 0x30(0x01)
	enum class EAchievementCategory Category; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct FAchievementConfig AchievementConfig; // 0x38(0x28)
	struct TArray<struct FDataTableRowHandle> CardRewards; // 0x60(0x10)
	int32_t SupplyPointsReward; // 0x70(0x04)
	bool bNotForShipping; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct FText FriendlyName; // 0x78(0x18)
	struct FText FriendlyDescription; // 0x90(0x18)
	struct UTexture2D* Icon; // 0xa8(0x08)
	char pad_B0[0x8]; // 0xb0(0x08)

	bool TriggerAchievement(); // Function Gobi.Achievement.TriggerAchievement // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AchievementAnalyticsComponent
// Size: 0xf8 (Inherited: 0xd8)
struct UAchievementAnalyticsComponent : UActorComponent {
	char pad_D8[0x20]; // 0xd8(0x20)

	void RecordAchievement(struct UAchievement* Achievement); // Function Gobi.AchievementAnalyticsComponent.RecordAchievement // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.UIScreen
// Size: 0x530 (Inherited: 0x450)
struct UUIScreen : UGobiUserWidget {
	struct FMulticastInlineDelegate OnClosed; // 0x450(0x10)
	struct UAkAudioEvent* OpenSoundOverride; // 0x460(0x08)
	struct UAkAudioEvent* CloseSoundOverride; // 0x468(0x08)
	struct FSlateSound MuteClickOverride; // 0x470(0x18)
	struct FSlateSound UnmuteClickOverride; // 0x488(0x18)
	bool bIsFullscreen; // 0x4a0(0x01)
	bool bDisableWorldRendering; // 0x4a1(0x01)
	bool bHideWaypoints; // 0x4a2(0x01)
	bool bRequiresPlayerPawn; // 0x4a3(0x01)
	bool bPlayOpenSound; // 0x4a4(0x01)
	bool bPlayCloseSound; // 0x4a5(0x01)
	bool bIsPersistent; // 0x4a6(0x01)
	bool bExecuteSplitscreenActions; // 0x4a7(0x01)
	bool bCenterCursorOnOpen; // 0x4a8(0x01)
	bool bTrapFocus; // 0x4a9(0x01)
	char pad_4AA[0x2]; // 0x4aa(0x02)
	int32_t ZOrder; // 0x4ac(0x04)
	struct FString ScreenName; // 0x4b0(0x10)
	bool bSuppressBackgroundAudio; // 0x4c0(0x01)
	enum class EUIScreenPresence Presence; // 0x4c1(0x01)
	char pad_4C2[0x6e]; // 0x4c2(0x6e)

	void UnbindMuteCallout(); // Function Gobi.UIScreen.UnbindMuteCallout // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AchievementsScreen
// Size: 0x580 (Inherited: 0x530)
struct UAchievementsScreen : UUIScreen {
	struct TMap<enum class EAchievementCategory, struct FText> CategoriesToText; // 0x530(0x50)

	struct TArray<struct FAchievementUIData> GetAchievementsForCategory(enum class EAchievementCategory MatchCategory); // Function Gobi.AchievementsScreen.GetAchievementsForCategory // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AchievementTrackerComponent
// Size: 0x198 (Inherited: 0xd8)
struct UAchievementTrackerComponent : UActorComponent {
	struct FMulticastInlineDelegate OnAchievementCompleted; // 0xd8(0x10)
	char pad_E8[0x50]; // 0xe8(0x50)
	struct TArray<struct UAchievement*> AllAchievements; // 0x138(0x10)
	struct TArray<struct UAchievement*> ActiveAchievements; // 0x148(0x10)
	struct TArray<struct UAchievement*> AchievementClasses; // 0x158(0x10)
	char pad_168[0x18]; // 0x168(0x18)
	struct UAchievement* PartyUpAchievementClass; // 0x180(0x08)
	struct UAchievement* TestRewardAchievementClass; // 0x188(0x08)
	char pad_190[0x8]; // 0x190(0x08)

	bool UnlockManualAchievement(struct UAchievement* AchievementClass); // Function Gobi.AchievementTrackerComponent.UnlockManualAchievement // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ActiveAreaSetBucketWeightMod
// Size: 0x98 (Inherited: 0x88)
struct UActiveAreaSetBucketWeightMod : UGameplayMod {
	struct TArray<float> BucketWeights; // 0x88(0x10)
};

// Class Gobi.ActiveAreaSetComponent
// Size: 0x160 (Inherited: 0xd8)
struct UActiveAreaSetComponent : UActorComponent {
	struct FActiveAreaSetDebugData DebugOverall; // 0xd8(0x10)
	struct FActiveAreaSetDebugData DebugActiveAreaSet; // 0xe8(0x10)
	struct TArray<int32_t> DebugDistanceBucketWeightLevels; // 0xf8(0x10)
	struct FVector2D GoldenPathPopulationRange; // 0x108(0x08)
	float GoldenPathMinScale; // 0x110(0x04)
	enum class EInclusionMode InclusionMode; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	float WanderPopulationBucketDistance; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct TArray<float> WanderPopulationBucketDensities; // 0x120(0x10)
	struct TArray<struct FWanderBucketDensityLevelsByDifficultyEntry> WanderPopulationBucketDensityLevelsByDifficulty; // 0x130(0x10)
	float WanderPopulationInitialBucketDistance; // 0x140(0x04)
	float WanderPopulationInitialBucketDensity; // 0x144(0x04)
	struct TArray<struct FWanderBucketInitialDensityLevelByDifficultyEntry> WanderPopulationInitialBucketDensityLevelsByDifficulty; // 0x148(0x10)
	struct UWanderPopulationDensityConfig* WanderDensityConfig; // 0x158(0x08)
};

// Class Gobi.ActiveAreaSetSubsystem
// Size: 0x138 (Inherited: 0x38)
struct UActiveAreaSetSubsystem : UWorldSubsystem {
	char pad_38[0x100]; // 0x38(0x100)

	void OnMatchStateChanged(); // Function Gobi.ActiveAreaSetSubsystem.OnMatchStateChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ActiveAreaSetVisibilityComponent
// Size: 0x110 (Inherited: 0xd8)
struct UActiveAreaSetVisibilityComponent : UActorComponent {
	struct FMulticastInlineDelegate OnVisibilityChanged; // 0xd8(0x10)
	enum class EAASVisibility CurrentVisibility; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	uint32_t CellId; // 0xec(0x04)
	char pad_F0[0x20]; // 0xf0(0x20)

	void OnVisibilityChangedSignature__DelegateSignature(enum class EAASVisibility NewVisibility); // DelegateFunction Gobi.ActiveAreaSetVisibilityComponent.OnVisibilityChangedSignature__DelegateSignature // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.InGameScreen
// Size: 0x560 (Inherited: 0x530)
struct UInGameScreen : UUIScreen {
	bool bCloseWhenHeroDisabled; // 0x530(0x01)
	bool bCloseWhenHeroNotAlive; // 0x531(0x01)
	char pad_532[0x2e]; // 0x532(0x2e)

	void OnGameplayTagChanged(struct FGameplayTag Tag, bool TagExists); // Function Gobi.InGameScreen.OnGameplayTagChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HubChildScreen
// Size: 0x560 (Inherited: 0x560)
struct UHubChildScreen : UInGameScreen {

	void SetCalloutsWidget(struct UGobiUserWidget* CalloutsWidget); // Function Gobi.HubChildScreen.SetCalloutsWidget // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ActiveCardScreen
// Size: 0x560 (Inherited: 0x560)
struct UActiveCardScreen : UHubChildScreen {

	void SetDrawCount(int32_t InCount); // Function Gobi.ActiveCardScreen.SetDrawCount // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ActivitySubsystem
// Size: 0x210 (Inherited: 0x38)
struct UActivitySubsystem : ULocalPlayerSubsystem {
	bool bEnabledForPlatform; // 0x38(0x01)
	char pad_39[0x1d7]; // 0x39(0x1d7)

	void OnSignInCompleted(); // Function Gobi.ActivitySubsystem.OnSignInCompleted // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ActorPlacementSpec
// Size: 0xa8 (Inherited: 0x30)
struct UActorPlacementSpec : UObject {
	struct AActor* ActorClass; // 0x30(0x08)
	int32_t SegmentStartIndex; // 0x38(0x04)
	int32_t SegmentEndIndex; // 0x3c(0x04)
	float DistanceInterval; // 0x40(0x04)
	float OffsetFromStart; // 0x44(0x04)
	bool InheritSplineRotation; // 0x48(0x01)
	bool bInheritSplineYawRotation; // 0x49(0x01)
	enum class ESplineActorOffsetMode OffsetMode; // 0x4a(0x01)
	char pad_4B[0x1]; // 0x4b(0x01)
	struct FVector Translation; // 0x4c(0x0c)
	struct FRotator Rotation; // 0x58(0x0c)
	struct FVector MinTranslation; // 0x64(0x0c)
	struct FVector MaxTranslation; // 0x70(0x0c)
	struct FRotator MinRotation; // 0x7c(0x0c)
	struct FRotator MaxRotation; // 0x88(0x0c)
	char pad_94[0x4]; // 0x94(0x04)
	struct TArray<struct AActor*> PlacedActors; // 0x98(0x10)
};

// Class Gobi.ActorToComponentConverter
// Size: 0x48 (Inherited: 0x38)
struct UActorToComponentConverter : UDataAsset {
	bool bUpdate; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct AActor* ActorClass; // 0x40(0x08)
};

// Class Gobi.ActSelectUserWidget
// Size: 0x490 (Inherited: 0x450)
struct UActSelectUserWidget : UGobiUserWidget {
	struct FMulticastInlineDelegate OnMapSelected; // 0x450(0x10)
	struct FMulticastInlineDelegate OnMapChainToggled; // 0x460(0x10)
	struct FMulticastInlineDelegate OnMapFocused; // 0x470(0x10)
	char pad_480[0x10]; // 0x480(0x10)

	void SetMode(enum class EMatchmakingScreenMode InMode); // Function Gobi.ActSelectUserWidget.SetMode // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ItemBaseComponent
// Size: 0x150 (Inherited: 0x120)
struct UItemBaseComponent : UMovementTickableComponent {
	char pad_120[0x10]; // 0x120(0x10)
	struct UHeroMovementComponent* OwnerMovementComponent; // 0x130(0x08)
	struct FText UsePrompt; // 0x138(0x18)

	void OnPerkChange(); // Function Gobi.ItemBaseComponent.OnPerkChange // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ADSComponent
// Size: 0x410 (Inherited: 0x150)
struct UADSComponent : UItemBaseComponent {
	bool bIsHoldingADS; // 0x150(0x01)
	char pad_151[0xbf]; // 0x151(0xbf)
	struct FAssetLookupFloat ADSActivatePercent; // 0x210(0x18)
	struct FAssetLookupFloat ADSMeshSwapPercent; // 0x228(0x18)
	struct FAssetLookupFloat ADSActiveFOV; // 0x240(0x18)
	struct FAssetLookupCurveFloat FOVBlendCurve; // 0x258(0x18)
	enum class EAimSensitivitySpace ZoomLevel; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct FAssetLookupAnimSequence ADSEnterAnimation; // 0x278(0x18)
	struct FAssetLookupAnimSequence ADSExitAnimation; // 0x290(0x18)
	struct FAssetLookupAnimSequence ADSIdleAnimation; // 0x2a8(0x18)
	struct FAssetLookupFloat FiringNoiseAdditiveAlphaMax; // 0x2c0(0x18)
	struct FAssetLookupFloat JumpWeightMax; // 0x2d8(0x18)
	struct FAssetLookupFloat WalkWeightMax; // 0x2f0(0x18)
	struct FAssetLookupFloat LookSwayWeightMax; // 0x308(0x18)
	struct FName CharacterADSSoundTag; // 0x320(0x08)
	struct TArray<struct FName> GunBonesToHideAtADS; // 0x328(0x10)
	struct TArray<struct FName> PlayerBonesToHideAtADS; // 0x338(0x10)
	struct FAssetLookupNameArray BonesToHideWhenADS; // 0x348(0x20)
	struct FAssetLookupNameArray BonesToUnhideWhenADS; // 0x368(0x20)
	struct FAssetLookupGameplayTagContainer BlockingTags; // 0x388(0x30)
	struct FAssetLookupGameplayTagContainer TagsToApply; // 0x3b8(0x30)
	struct FGameplayTagContainer InstantlyCancellingTags; // 0x3e8(0x20)
	struct FADSTuning ADSTuning; // 0x408(0x08)

	bool WantsADSAnimations(); // Function Gobi.ADSComponent.WantsADSAnimations // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AffinityPopupStatEntryUserWidget
// Size: 0x460 (Inherited: 0x450)
struct UAffinityPopupStatEntryUserWidget : UGobiUserWidget {
	struct UStatEntryUserWidget* StatEntryClass; // 0x450(0x08)
	char pad_458[0x8]; // 0x458(0x08)

	void SetStatInfo(enum class EGameplayCardAffinity Type, int32_t Count, struct UTexture2D* Icon, struct FSlateColor IconColor); // Function Gobi.AffinityPopupStatEntryUserWidget.SetStatInfo // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PopupUserWidget
// Size: 0x470 (Inherited: 0x450)
struct UPopupUserWidget : UGobiUserWidget {
	struct FMulticastInlineDelegate OnPopupClosed; // 0x450(0x10)
	struct UObject* Payload; // 0x460(0x08)
	bool bDestroyOnClose; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)

	void OnShow(); // Function Gobi.PopupUserWidget.OnShow // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AffinityStatsPopup
// Size: 0x480 (Inherited: 0x470)
struct UAffinityStatsPopup : UPopupUserWidget {
	char pad_470[0x10]; // 0x470(0x10)

	void SetStat(int32_t Index, int32_t Count, struct UTexture2D* Icon, struct FSlateColor IconColor); // Function Gobi.AffinityStatsPopup.SetStat // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AffinityStatsUserWidget
// Size: 0x460 (Inherited: 0x450)
struct UAffinityStatsUserWidget : UGobiUserWidget {
	char pad_450[0x10]; // 0x450(0x10)

	void SetStat(int32_t Index, int32_t Count, struct UTexture2D* Icon, struct FSlateColor IconColor); // Function Gobi.AffinityStatsUserWidget.SetStat // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AFKSubsystem
// Size: 0x60 (Inherited: 0x38)
struct UAFKSubsystem : ULocalPlayerSubsystem {
	char pad_38[0x28]; // 0x38(0x28)

	void OnPopupClosed(struct UPopupUserWidget* Popup, struct FName Command); // Function Gobi.AFKSubsystem.OnPopupClosed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AggroGrowthComponent
// Size: 0x150 (Inherited: 0xd8)
struct UAggroGrowthComponent : UActorComponent {
	float CurAggroLevel; // 0xd8(0x04)
	float AggroDefault; // 0xdc(0x04)
	float AggroMinimum; // 0xe0(0x04)
	float AggroMaximum; // 0xe4(0x04)
	float AggroUpTime; // 0xe8(0x04)
	float AggroDownTime; // 0xec(0x04)
	float TransitionTime; // 0xf0(0x04)
	struct FGameplayTag DetectAggroTag; // 0xf4(0x08)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FGameplayTagContainer RemoveOnAggroTags; // 0x100(0x20)
	struct TArray<struct UGameplayEffect*> ApplyAggroEffectsToOwner; // 0x120(0x10)
	struct FMulticastInlineDelegate OnAggroEnded; // 0x130(0x10)
	char pad_140[0x10]; // 0x140(0x10)

	void OnRep_CurAggroLevel(float AggroLevel); // Function Gobi.AggroGrowthComponent.OnRep_CurAggroLevel // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AIBlueprintFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAIBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void ToggleAIRotateToFocus(struct AActor* AIActor, bool bShouldRotateToFocus); // Function Gobi.AIBlueprintFunctionLibrary.ToggleAIRotateToFocus // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiCharacterMovementComponent
// Size: 0x900 (Inherited: 0x670)
struct UGobiCharacterMovementComponent : UCharacterMovementComponent {
	char pad_670[0x6]; // 0x670(0x06)
	enum class ECollisionEnabled CollisionType; // 0x676(0x01)
	int8_t CollisionProfileIndex; // 0x677(0x01)
	char pad_678[0x8]; // 0x678(0x08)
	struct FGameplayTagContainer AttachedTags; // 0x680(0x20)
	char pad_6A0[0x24]; // 0x6a0(0x24)
	bool bUseGroundCheckSphereSweep; // 0x6c4(0x01)
	bool bUseFootPlantingSphereSweep; // 0x6c5(0x01)
	char pad_6C6[0xa]; // 0x6c6(0x0a)
	float OverrideGroundTraceLength; // 0x6d0(0x04)
	char pad_6D4[0x10]; // 0x6d4(0x10)
	float FallTimeTillFallOutOfWorld; // 0x6e4(0x04)
	char pad_6E8[0x28]; // 0x6e8(0x28)
	struct AGobiCharacter* GobiCharacter; // 0x710(0x08)
	struct FMovementTickableInput SimulatedInput; // 0x718(0x24)
	char pad_73C[0x4]; // 0x73c(0x04)
	struct UReplicatedMontageComponent* ReplicatedMontageComponent; // 0x740(0x08)
	char pad_748[0x8]; // 0x748(0x08)
	struct UGameplayTagsComponent* GameplayTagsComponent; // 0x750(0x08)
	char pad_758[0x3c]; // 0x758(0x3c)
	enum class EAutoCrouch AutoCrouch; // 0x794(0x01)
	char pad_795[0x3]; // 0x795(0x03)
	float MaxBackupToUnCrouch; // 0x798(0x04)
	char pad_79C[0x2c]; // 0x79c(0x2c)
	struct UChargeComponent* ChargeComponent; // 0x7c8(0x08)
	float DefaultPathMovementScalar; // 0x7d0(0x04)
	char pad_7D4[0x4]; // 0x7d4(0x04)
	struct TMap<struct FGameplayTag, float> PathMovementScalars; // 0x7d8(0x50)
	char pad_828[0x50]; // 0x828(0x50)
	struct UNavigationQueryFilter* NavWalkingFilter; // 0x878(0x08)
	struct FGameplayTagQuery NavMeshIgnoreTagsQuery; // 0x880(0x48)
	struct FCollisionProfileName NavWalkingCollisionProfile; // 0x8c8(0x08)
	struct FName DefaultWalkingCollisionProfile; // 0x8d0(0x08)
	char pad_8D8[0x28]; // 0x8d8(0x28)

	void OnRep_CollisionType(); // Function Gobi.GobiCharacterMovementComponent.OnRep_CollisionType // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AICharacterMovementComponent
// Size: 0x900 (Inherited: 0x900)
struct UAICharacterMovementComponent : UGobiCharacterMovementComponent {
};

// Class Gobi.AIDataProvider_BehaviorParams
// Size: 0xb8 (Inherited: 0x30)
struct UAIDataProvider_BehaviorParams : UAIDataProvider {
	struct FName ParamName; // 0x30(0x08)
	float FloatValue; // 0x38(0x04)
	int32_t IntValue; // 0x3c(0x04)
	bool BoolValue; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FGameplayTagContainer TagsValue; // 0x48(0x20)
	struct FGameplayTagQuery TagQueryValue; // 0x68(0x48)
	struct UObject* UObjectValue; // 0xb0(0x08)
};

// Class Gobi.AIDataProvider_TuningData
// Size: 0xb8 (Inherited: 0x30)
struct UAIDataProvider_TuningData : UAIDataProvider {
	struct FName ParamName; // 0x30(0x08)
	float FloatValue; // 0x38(0x04)
	int32_t IntValue; // 0x3c(0x04)
	bool BoolValue; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FGameplayTagContainer TagsValue; // 0x48(0x20)
	struct FGameplayTagQuery TagQueryValue; // 0x68(0x48)
	struct UObject* UObjectValue; // 0xb0(0x08)
};

// Class Gobi.AIDistanceRanges
// Size: 0x50 (Inherited: 0x38)
struct UAIDistanceRanges : UDataAsset {
	struct UEnum* DistanceLabelEnum; // 0x38(0x08)
	struct TArray<struct FDistanceRange> Ranges; // 0x40(0x10)

	float GetDistanceMin(struct FString DistanceLabel); // Function Gobi.AIDistanceRanges.GetDistanceMin // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AimAssistTargetComponent
// Size: 0x190 (Inherited: 0xd8)
struct UAimAssistTargetComponent : UActorComponent {
	char pad_D8[0x70]; // 0xd8(0x70)
	bool bStartRegistered; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	float MagnetismScale; // 0x14c(0x04)
	float FrictionScale; // 0x150(0x04)
	bool bIncludeTargetLocationAsADSSnapLocation; // 0x154(0x01)
	char pad_155[0x3]; // 0x155(0x03)
	struct FGameplayTag ADSSnapTargetedComponentGameplayTag; // 0x158(0x08)
	struct TArray<struct FName> ADSSnapTargetedComponentSocketNames; // 0x160(0x10)
	float HorizontalRadiusBoundsScale; // 0x170(0x04)
	float VerticalRadiusBoundsScale; // 0x174(0x04)
	float InnerAssistBoundsScale; // 0x178(0x04)
	float TargetScoringBonus; // 0x17c(0x04)
	struct FVector TargetLocationOffset; // 0x180(0x0c)
	char pad_18C[0x4]; // 0x18c(0x04)

	void UnregisterTarget(); // Function Gobi.AimAssistTargetComponent.UnregisterTarget // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AIPopulationStats
// Size: 0x90 (Inherited: 0x30)
struct UAIPopulationStats : UObject {
	char pad_30[0x60]; // 0x30(0x60)
};

// Class Gobi.AIScriptingComponent
// Size: 0x470 (Inherited: 0xd8)
struct UAIScriptingComponent : UActorComponent {
	struct FMulticastInlineDelegate OnSenseUnWatched; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnSensedWhizBy; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnAlertedChanged; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnEnemyChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnHideFromHordesChanged; // 0x118(0x10)
	struct UBlackboardData* BlackboardAsset; // 0x128(0x08)
	struct FBlackboardKeySelector AlertToLocationBBKey; // 0x130(0x28)
	struct FBlackboardKeySelector PseudoAlertToLocationBBKey; // 0x158(0x28)
	struct FBlackboardKeySelector RetreatLocationBBKey; // 0x180(0x28)
	struct FBlackboardKeySelector AmbushLocationBBKey; // 0x1a8(0x28)
	struct FBlackboardKeySelector WanderLocationBBKey; // 0x1d0(0x28)
	struct FBlackboardKeySelector IsHordingBBKey; // 0x1f8(0x28)
	struct FBlackboardKeySelector EnemyBBKey; // 0x220(0x28)
	struct FBlackboardKeySelector HighPrioritySmartActorBBKey; // 0x248(0x28)
	struct FBlackboardKeySelector LowPrioritySmartActorBBKey; // 0x270(0x28)
	struct FBlackboardKeySelector ReachInSmartActorBBKey; // 0x298(0x28)
	struct FBlackboardKeySelector WallClingActorBBKey; // 0x2c0(0x28)
	struct FBlackboardKeySelector CanTriggerAttackBBKey; // 0x2e8(0x28)
	struct FBlackboardKeySelector CanTriggerAttackIgnoreEnabledBBKey; // 0x310(0x28)
	struct FBlackboardKeySelector IsDeadBBKey; // 0x338(0x28)
	struct FBlackboardKeySelector HealthBBKey; // 0x360(0x28)
	struct FBlackboardKeySelector ScriptSplineBBKey; // 0x388(0x28)
	struct FBlackboardKeySelector HideFromHordesBBKey; // 0x3b0(0x28)
	struct FBlackboardKeySelector ShouldHideBBKey; // 0x3d8(0x28)
	struct FBlackboardKeySelector AttackLocationBBKey; // 0x400(0x28)
	struct FVector DefaultExtents; // 0x428(0x0c)
	char pad_434[0x3c]; // 0x434(0x3c)

	void StopAllAI(struct UObject* WorldContextObject, struct FString Reason); // Function Gobi.AIScriptingComponent.StopAllAI // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AISense_Omnipotence
// Size: 0xe0 (Inherited: 0x88)
struct UAISense_Omnipotence : UAISense {
	char pad_88[0x58]; // 0x88(0x58)
};

// Class Gobi.AISense_TRSHearing
// Size: 0x140 (Inherited: 0x88)
struct UAISense_TRSHearing : UAISense {
	struct TArray<struct FAITRSNoiseEvent> NoiseEvents; // 0x88(0x10)
	float SpeedOfSoundSq; // 0x98(0x04)
	char pad_9C[0xa4]; // 0x9c(0xa4)

	void ReportTRSWhizByEvent(struct UObject* WorldContextObject, struct FVector NoiseLocationStart, struct FVector NoiseLocationEnd, float Loudness, struct AActor* Instigator, float MaxRange, struct FName Tag); // Function Gobi.AISense_TRSHearing.ReportTRSWhizByEvent // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AISense_TRSSight
// Size: 0x160 (Inherited: 0x88)
struct UAISense_TRSSight : UAISense {
	char pad_88[0xb0]; // 0x88(0xb0)
	int32_t MaxTracesPerTick; // 0x138(0x04)
	int32_t MinQueriesPerTimeSliceCheck; // 0x13c(0x04)
	double MaxTimeSlicePerTick; // 0x140(0x08)
	float HighImportanceQueryDistanceThreshold; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	float MaxQueryImportance; // 0x150(0x04)
	float SightLimitQueryImportance; // 0x154(0x04)
	char pad_158[0x8]; // 0x158(0x08)
};

// Class Gobi.AISense_UnWatched
// Size: 0x140 (Inherited: 0x88)
struct UAISense_UnWatched : UAISense {
	char pad_88[0xb8]; // 0x88(0xb8)
};

// Class Gobi.AISense_Watched
// Size: 0x140 (Inherited: 0x88)
struct UAISense_Watched : UAISense {
	char pad_88[0xb8]; // 0x88(0xb8)
};

// Class Gobi.AISenseConfig_Omnipotence
// Size: 0x60 (Inherited: 0x50)
struct UAISenseConfig_Omnipotence : UAISenseConfig {
	struct UAISense_Omnipotence* Implementation; // 0x50(0x08)
	float OmniRadius; // 0x58(0x04)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x5c(0x04)
};

// Class Gobi.AISenseConfig_TRSHearing
// Size: 0x78 (Inherited: 0x50)
struct UAISenseConfig_TRSHearing : UAISenseConfig {
	struct UAISense_TRSHearing* Implementation; // 0x50(0x08)
	enum class ESenseHearingMode HearingMode; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float HearingRange; // 0x5c(0x04)
	float LoSHearingRange; // 0x60(0x04)
	float HearingDistPathingMult; // 0x64(0x04)
	char bUseLoSHearing : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	bool bAlertToInstigator; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class Gobi.AISenseConfig_TRSSight
// Size: 0x78 (Inherited: 0x50)
struct UAISenseConfig_TRSSight : UAISenseConfig {
	struct UAISense_TRSSight* Implementation; // 0x50(0x08)
	float SightRadius; // 0x58(0x04)
	float AlertSightRadius; // 0x5c(0x04)
	float LoseSightRadius; // 0x60(0x04)
	float MinRadius; // 0x64(0x04)
	float PeripheralVisionAngleDegrees; // 0x68(0x04)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x6c(0x04)
	float AutoSuccessRangeFromLastSeenLocation; // 0x70(0x04)
	bool bUseAimAssist; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class Gobi.AISenseConfig_UnWatched
// Size: 0x70 (Inherited: 0x50)
struct UAISenseConfig_UnWatched : UAISenseConfig {
	struct UAISense_UnWatched* Implementation; // 0x50(0x08)
	float WatchedMaxRadius; // 0x58(0x04)
	float AutoWatchedRadius; // 0x5c(0x04)
	float GlobalWatchTimeLimitMS; // 0x60(0x04)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x64(0x04)
	char bResetTimerOnLookedAt : 1; // 0x68(0x01)
	char bResetTimerOnTrigger : 1; // 0x68(0x01)
	char pad_68_2 : 6; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Gobi.AISenseConfig_Watched
// Size: 0x98 (Inherited: 0x50)
struct UAISenseConfig_Watched : UAISenseConfig {
	struct UAISense_Watched* Implementation; // 0x50(0x08)
	float WarnTargetNearbyRadius; // 0x58(0x04)
	float WarnTargetLoseNearbyRadius; // 0x5c(0x04)
	float WatchedRadius; // 0x60(0x04)
	float WatchedAngleDegrees; // 0x64(0x04)
	float ListenerSizeRadiusMultModifier; // 0x68(0x04)
	float ListenerSizeRadiusMinimum; // 0x6c(0x04)
	float GlobalWatchTimeLimitMS; // 0x70(0x04)
	float IndividualAggroWatchTimeLimitMS; // 0x74(0x04)
	float IndividualAlertWatchTimeLimitMS; // 0x78(0x04)
	float CenterNoiseOffsetDist; // 0x7c(0x04)
	struct UGameplayEffect* ApplyListenerEffectOnWatched; // 0x80(0x08)
	struct UGameplayEffect* ApplyListenerEffectOnCenterWatched; // 0x88(0x08)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x90(0x04)
	char bResetIndividualTimersOnLookaway : 1; // 0x94(0x01)
	char bResetGlobalTimerOnLookaway : 1; // 0x94(0x01)
	char bCenterWatchRequiresFlashlight : 1; // 0x94(0x01)
	char pad_94_3 : 5; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
};

// Class Gobi.AISenseEvent_TRSHearing
// Size: 0x70 (Inherited: 0x30)
struct UAISenseEvent_TRSHearing : UAISenseEvent {
	struct FAITRSNoiseEvent Event; // 0x30(0x40)
};

// Class Gobi.AISenseMod
// Size: 0x98 (Inherited: 0x88)
struct UAISenseMod : UGameplayMod {
	struct TArray<struct FAISenseModInfo> SenseMods; // 0x88(0x10)
};

// Class Gobi.AISeparationGroups
// Size: 0x48 (Inherited: 0x38)
struct UAISeparationGroups : UDataAsset {
	struct TArray<struct FAISeparationGroup> Groups; // 0x38(0x10)
};

// Class Gobi.AISmartActorBase
// Size: 0x3a0 (Inherited: 0x250)
struct AAISmartActorBase : AActor {
	char pad_250[0x8]; // 0x250(0x08)
	struct FGameplayTagContainer GameplayTags; // 0x258(0x20)
	struct TArray<struct UGameplayAction*> UserActionSet; // 0x278(0x10)
	bool bShuffleUserActions; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	int32_t MaxUsers; // 0x28c(0x04)
	bool bNeedsToRenderOnClient; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct FGameplayTagContainer RequiredCharacterTags; // 0x298(0x20)
	struct FGameplayTagContainer BlockingCharacterTags; // 0x2b8(0x20)
	struct FGameplayTagContainer BlockingTags; // 0x2d8(0x20)
	float MinRotatingCooldownTime; // 0x2f8(0x04)
	float MaxRotatingCooldownTime; // 0x2fc(0x04)
	float MinRotatingCooldownOffset; // 0x300(0x04)
	float MaxRotatingCooldownOffset; // 0x304(0x04)
	struct UGameplayTagsComponent* GameplayTagsComponent; // 0x308(0x08)
	struct UGameplayEffectsComponent* GameplayEffectsComponent; // 0x310(0x08)
	float SpawnerBlockingRadius; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct FMulticastInlineDelegate OnStartUse; // 0x320(0x10)
	struct FMulticastInlineDelegate OnStopUse; // 0x330(0x10)
	char pad_340[0x60]; // 0x340(0x60)

	bool Use(struct AGobiCharacter* UserActor); // Function Gobi.AISmartActorBase.Use // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AISmartActor
// Size: 0x3b0 (Inherited: 0x3a0)
struct AAISmartActor : AAISmartActorBase {
	bool bUpdateCollectionGrid; // 0x3a0(0x01)
	char pad_3A1[0xf]; // 0x3a1(0x0f)
};

// Class Gobi.AISmartActor_BruteReachIn
// Size: 0x128 (Inherited: 0xd8)
struct UAISmartActor_BruteReachIn : UActorComponent {
	struct UBoxComponent* EnabledBox; // 0xd8(0x08)
	struct UStaticMeshComponent* VisualizationMesh; // 0xe0(0x08)
	struct AAISmartActor* AISmartActor; // 0xe8(0x08)
	struct UHealthComponent* DoorHealthComponent; // 0xf0(0x08)
	bool bShouldEnableOnOverlap; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	float MaxSearchDistance; // 0xfc(0x04)
	float CooldownSecs; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct UGobiDamageType* DamageTypeClass; // 0x108(0x08)
	char pad_110[0x18]; // 0x110(0x18)

	void OnEnabledBoxEndOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function Gobi.AISmartActor_BruteReachIn.OnEnabledBoxEndOverlap // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AISpawnActor
// Size: 0x498 (Inherited: 0x3a0)
struct AAISpawnActor : AAISmartActorBase {
	char pad_3A0[0x10]; // 0x3a0(0x10)
	enum class EVisibilityMode VisibilityMode; // 0x3b0(0x01)
	enum class EAudibilityMode AudibilityMode; // 0x3b1(0x01)
	bool bUseStandSpawnPositioning; // 0x3b2(0x01)
	bool bUseNavLocationCompForSpawnLocation; // 0x3b3(0x01)
	int32_t MaxSpawnCount; // 0x3b4(0x04)
	struct FGameplayTagContainer HordeBlockingTags; // 0x3b8(0x20)
	struct FGameplayTagContainer WanderBlockingTags; // 0x3d8(0x20)
	char pad_3F8[0x1c]; // 0x3f8(0x1c)
	bool bDisableOnSeen; // 0x414(0x01)
	bool bDisableOnHeard; // 0x415(0x01)
	char pad_416[0x2]; // 0x416(0x02)
	struct UGameplayEffect* OnSeenGE; // 0x418(0x08)
	struct UGameplayEffect* OnHeardGE; // 0x420(0x08)
	char pad_428[0x70]; // 0x428(0x70)

	struct AGobiCharacter* SpawnAI(struct AGobiCharacter* AIClass, bool bIsHording); // Function Gobi.AISpawnActor.SpawnAI // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AISpawnActorVariantsConfig
// Size: 0x48 (Inherited: 0x38)
struct UAISpawnActorVariantsConfig : UDataAsset {
	struct TArray<struct FAISpawnActorVariantDefinition> Variants; // 0x38(0x10)
};

// Class Gobi.AISpawnActorVolume
// Size: 0x348 (Inherited: 0x288)
struct AAISpawnActorVolume : AVolume {
	struct FGameplayTagContainer InitialHordeBlockingTags; // 0x288(0x20)
	struct FGameplayTagContainer CurrentHordeBlockingTags; // 0x2a8(0x20)
	struct FGameplayTagContainer InitialWanderBlockingTags; // 0x2c8(0x20)
	struct FGameplayTagContainer CurrentWanderBlockingTags; // 0x2e8(0x20)
	struct FGameplayTagContainer InitialPersistentTags; // 0x308(0x20)
	struct FGameplayTagContainer CurrentPersistentTags; // 0x328(0x20)

	void RemoveWanderBlockingTag(struct FGameplayTag Tag); // Function Gobi.AISpawnActorVolume.RemoveWanderBlockingTag // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AISpawnCard
// Size: 0x128 (Inherited: 0x30)
struct UAISpawnCard : UObject {
	bool bShouldLogOnSuccess; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UAISpawnConditionEvaluatorSet* GenerationConditionEvalSet; // 0x38(0x08)
	struct UAISpawnConditionEvaluatorSet* ConditionEvalSet; // 0x40(0x08)
	struct UAISpawnConditionEvaluatorSet* SpawnerPlacementConditionEvalSet; // 0x48(0x08)
	struct TArray<struct FAIPopulation> Populations; // 0x50(0x10)
	int32_t TotalAICount; // 0x60(0x04)
	bool bHasWakingPopulation; // 0x64(0x01)
	bool bShouldSpawnEarly; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
	struct FGameplayTagContainer TagsToApplyToAllPopulations; // 0x68(0x20)
	struct FGameplayTagContainer CardTags; // 0x88(0x20)
	bool bShouldExhaust; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct USpawningEQSData* SpawningData; // 0xb0(0x08)
	bool bAllowSpawnEQSToBeOverridden; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct AAISpawnActor* AISpawnerClass; // 0xc0(0x08)
	struct FGameplayTagContainer AISpawnerTags; // 0xc8(0x20)
	int32_t InitialWanderDistanceBucketsToSkip; // 0xe8(0x04)
	bool bPlaceOnWalls; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	struct FVector2D WallSpawnHeight; // 0xf0(0x08)
	float SpawnRadiusOverride; // 0xf8(0x04)
	float SelfSpawnRadiusOverride; // 0xfc(0x04)
	float SpawnHalfHeightOverride; // 0x100(0x04)
	bool bLimitOneSpawnerPerActorSpawnData; // 0x104(0x01)
	bool bOnRecycleEnableSpawners; // 0x105(0x01)
	bool bOnDeathDisableAllSpawners; // 0x106(0x01)
	char pad_107[0x1]; // 0x107(0x01)
	struct FVector2D EnableSpawnerStartDistancePercentage; // 0x108(0x08)
	bool bIgnoreMaxAILimit; // 0x110(0x01)
	bool bUseDesiredGoldenPathDistanceDeltaFromHeroes; // 0x111(0x01)
	char pad_112[0x2]; // 0x112(0x02)
	struct FVector2D DesiredGoldenPathDistanceFromHeroes; // 0x114(0x08)
	struct FName DesiredGoldenPathDistanceDeltaName; // 0x11c(0x08)
	char pad_124[0x4]; // 0x124(0x04)
};

// Class Gobi.AISpawnConditionEvaluatorSet
// Size: 0x78 (Inherited: 0x30)
struct UAISpawnConditionEvaluatorSet : UObject {
	char pad_30[0x48]; // 0x30(0x48)
};

// Class Gobi.AISpawnDeck
// Size: 0x2f8 (Inherited: 0x30)
struct UAISpawnDeck : UObject {
	char pad_30[0x50]; // 0x30(0x50)
	struct TArray<struct UAISpawnCard*> SpawnCards; // 0x80(0x10)
	struct TArray<struct UAISpawnCard*> ExhaustedCards; // 0x90(0x10)
	struct TArray<struct FDiscardedCard> DiscardedCards; // 0xa0(0x10)
	struct TArray<struct FCardInPlay> CardsInPlay; // 0xb0(0x10)
	char pad_C0[0x238]; // 0xc0(0x238)

	void OnAIDeath(struct UHealthComponent* HealthComponent); // Function Gobi.AISpawnDeck.OnAIDeath // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AISpawnDeckGenerator
// Size: 0xe0 (Inherited: 0x38)
struct UAISpawnDeckGenerator : UDataAsset {
	struct UAISpawnConditionEvaluatorSet* GenerationConditionEvalSet; // 0x38(0x08)
	enum class EChildDeckBehavior ChildDeckBehavior; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FIntPoint NumChildDecks; // 0x44(0x08)
	bool bAllowChildDeckReuse; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct TArray<struct UAISpawnDeckGenerator*> ChildSpawnDeckGenerators; // 0x50(0x10)
	struct TArray<struct FAISpawnCardRule> SpawnCardRules; // 0x60(0x10)
	struct FGameplayTagContainer DeckTags; // 0x70(0x20)
	int32_t MaxCardsInPlay; // 0x90(0x04)
	float DelayBetweenCardDraws; // 0x94(0x04)
	float DelayAfterDiscard; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct TArray<struct FPerThreatLevelSpawnDelay> DelayBeforeInitialSpawn; // 0xa0(0x10)
	struct TArray<struct FPerThreatLevelSpawnDelay> DelayBeforeWaveSpawn; // 0xb0(0x10)
	float DelayBetweenCueAndSpawn; // 0xc0(0x04)
	struct FIntPoint NumHordeWaves; // 0xc4(0x08)
	float CompleteAfterSpawningStoppedTime; // 0xcc(0x04)
	bool bCompleteWhenAllCardsAreInPlayOrExhausted; // 0xd0(0x01)
	bool bCompleteWhenAllCardsAreExhausted; // 0xd1(0x01)
	bool bApplyModCards; // 0xd2(0x01)
	char pad_D3[0x1]; // 0xd3(0x01)
	float DeckWeight; // 0xd4(0x04)
	bool bRetryEQSWithoutOverrideIfNoSpawnersFound; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// Class Gobi.AISpawnDeckGeneratorMod
// Size: 0x160 (Inherited: 0x88)
struct UAISpawnDeckGeneratorMod : UGameplayMod {
	struct TArray<struct FAISpawnCardRule> SpawnCardRulesToAdd; // 0x88(0x10)
	struct FGameplayTagQuery SpawnCardRemovalTagQuery; // 0x98(0x48)
	struct TArray<struct UAISpawnDeckGenerator*> SpawnDeckGeneratorsToAdd; // 0xe0(0x10)
	struct FGameplayTagContainer SpawnDeckTagsToAdd; // 0xf0(0x20)
	bool bUseTargetDeckTagQuery; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FGameplayTagQuery TargetDeckTagQuery; // 0x118(0x48)
};

// Class Gobi.AISpawnPointBudgets
// Size: 0x48 (Inherited: 0x38)
struct UAISpawnPointBudgets : UDataAsset {
	struct TArray<struct FSpawnPointBudget> Budgets; // 0x38(0x10)
};

// Class Gobi.AITypePointCosts
// Size: 0x48 (Inherited: 0x38)
struct UAITypePointCosts : UDataAsset {
	struct TArray<struct FAITypeCost> Costs; // 0x38(0x10)
};

// Class Gobi.AlertComponent
// Size: 0x230 (Inherited: 0x220)
struct UAlertComponent : USceneComponent {
	float AlertRadius; // 0x220(0x04)
	bool bAlertRadiusGrows; // 0x224(0x01)
	char pad_225[0x3]; // 0x225(0x03)
	float AlertRadiusGrowthAmount; // 0x228(0x04)
	float MaxAlertRadius; // 0x22c(0x04)

	float GetAlertRadius(); // Function Gobi.AlertComponent.GetAlertRadius // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ApplyEffectItemComponent
// Size: 0x4e0 (Inherited: 0x150)
struct UApplyEffectItemComponent : UItemBaseComponent {
	struct FMulticastInlineDelegate OnItemApplied; // 0x150(0x10)
	struct FMulticastInlineDelegate OnItemCancelled; // 0x160(0x10)
	enum class EEffectApplicationItemState CurrentState; // 0x170(0x01)
	char pad_171[0xf]; // 0x171(0x0f)
	struct AActor* TargetActor; // 0x180(0x08)
	char pad_188[0x8]; // 0x188(0x08)
	struct UPrimitiveComponent* HitComponent; // 0x190(0x08)
	struct AGobiCharacter* VisualTargetCharacter; // 0x198(0x08)
	bool bWillExpendAmmoOnUse; // 0x1a0(0x01)
	char pad_1A1[0xd7]; // 0x1a1(0xd7)
	float RequiredUseLength; // 0x278(0x04)
	float FinishUseStateLength; // 0x27c(0x04)
	bool bRequireButtonHeld; // 0x280(0x01)
	bool bActivateWithoutValidTarget; // 0x281(0x01)
	bool bExpendAmmoWithoutValidTarget; // 0x282(0x01)
	bool bSelectPreviousWeaponAfterUse; // 0x283(0x01)
	bool bCancelUseOnKnockback; // 0x284(0x01)
	bool bRequireSelection; // 0x285(0x01)
	char pad_286[0x2]; // 0x286(0x02)
	float ChanceToExpendAmmoOnUse; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct UAkAudioEvent* AKENotExpended; // 0x290(0x08)
	float MovementScale; // 0x298(0x04)
	struct FName MovementScaleLabel; // 0x29c(0x08)
	bool bApplyMovementScaleToTargetPlayer; // 0x2a4(0x01)
	bool bScaleAnimationLengthToUseLength; // 0x2a5(0x01)
	char pad_2A6[0x2]; // 0x2a6(0x02)
	struct UAnimMontage* UseMontageFP; // 0x2a8(0x08)
	struct UAnimMontage* UseMontage3P; // 0x2b0(0x08)
	struct UAnimMontage* EndUseMontageFP; // 0x2b8(0x08)
	struct UAnimMontage* EndUseMontage3P; // 0x2c0(0x08)
	struct UAnimMontage* AltUseMontageFP; // 0x2c8(0x08)
	struct UAnimMontage* AltUseMontage3P; // 0x2d0(0x08)
	struct UAnimMontage* EndAltUseMontageFP; // 0x2d8(0x08)
	struct UAnimMontage* EndAltUseMontage3P; // 0x2e0(0x08)
	bool bRemoveAppliedTagsBeforeApplyingSuccessfulEffects; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct FGameplayTagContainer AppliedTags; // 0x2f0(0x20)
	struct FGameplayTagContainer BlockingTags; // 0x310(0x20)
	struct FGameplayTagQuery ContinuousTagQuery; // 0x330(0x48)
	struct FGameplayTagContainer TargetAppliedTags; // 0x378(0x20)
	struct FGameplayTagQuery InitialTargetTagQuery; // 0x398(0x48)
	struct FGameplayTagQuery ContinuousTargetTagQuery; // 0x3e0(0x48)
	struct FGameplayTag BeginUseCue; // 0x428(0x08)
	struct FGameplayTag SuccessfulUseCue; // 0x430(0x08)
	struct FGameplayTag UnsuccessfulUseCue; // 0x438(0x08)
	struct FText ProgressBarText; // 0x440(0x18)
	struct FText TargetProgressBarText; // 0x458(0x18)
	struct FText TargetSelfProgressBarText; // 0x470(0x18)
	bool bShowProgressbar; // 0x488(0x01)
	bool bAllowAltUseTargetting; // 0x489(0x01)
	char pad_48A[0x2]; // 0x48a(0x02)
	float MaxAltUseTargetDistance; // 0x48c(0x04)
	float MaxAltUseTargetDistanceWhenUsing; // 0x490(0x04)
	float MinAngleToTarget; // 0x494(0x04)
	struct TArray<struct UGameplayEffect*> OnSuccessGameplayEffects; // 0x498(0x10)
	struct TArray<struct UGameplayEffect*> OnTargetUseGameplayEffects; // 0x4a8(0x10)
	struct TArray<struct UGameplayEffect*> OnOwnerUseGameplayEffects; // 0x4b8(0x10)
	struct TArray<struct UGameplayEffect*> OnHeldGameplayEffects; // 0x4c8(0x10)
	struct FName TriggeredEventName; // 0x4d8(0x08)

	void OnRep_TargetActor(struct AActor* InPreviousTargetActor); // Function Gobi.ApplyEffectItemComponent.OnRep_TargetActor // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AmmoPouchComponent
// Size: 0x518 (Inherited: 0x4e0)
struct UAmmoPouchComponent : UApplyEffectItemComponent {
	char pad_4E0[0xc]; // 0x4e0(0x0c)
	int32_t UseCount; // 0x4ec(0x04)
	float AmmoPecentageToGrant[0x7]; // 0x4f0(0x1c)
	char pad_50C[0x4]; // 0x50c(0x04)
	struct UAkAudioEvent* AKEOnUse; // 0x510(0x08)

	void OnRep_UseCount(int32_t NewUseCount); // Function Gobi.AmmoPouchComponent.OnRep_UseCount // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayEvaluatorSet
// Size: 0x78 (Inherited: 0x30)
struct UGameplayEvaluatorSet : UObject {
	char pad_30[0x48]; // 0x30(0x48)
};

// Class Gobi.AnimationEvalSet
// Size: 0xc0 (Inherited: 0x78)
struct UAnimationEvalSet : UGameplayEvaluatorSet {
	char pad_78[0x48]; // 0x78(0x48)
};

// Class Gobi.AnimAttackWindowComponent
// Size: 0x1b0 (Inherited: 0xd8)
struct UAnimAttackWindowComponent : UActorComponent {
	struct FGameplayTag AttackCollisionVolumeTag; // 0xd8(0x08)
	bool bRequiresLineOfSight; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	struct FName LineOfSightTargetComponentTag; // 0xe4(0x08)
	bool bUseTargetEyePosForLoS; // 0xec(0x01)
	char pad_ED[0xc3]; // 0xed(0xc3)

	void OnAttackVolumeCollision(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Gobi.AnimAttackWindowComponent.OnAttackVolumeCollision // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayContext
// Size: 0x50 (Inherited: 0x30)
struct UGameplayContext : UObject {
	char pad_30[0x20]; // 0x30(0x20)
};

// Class Gobi.AnimContext
// Size: 0x50 (Inherited: 0x50)
struct UAnimContext : UGameplayContext {
};

// Class Gobi.AnimContext_Rotation
// Size: 0x60 (Inherited: 0x50)
struct UAnimContext_Rotation : UAnimContext {
	char pad_50[0x10]; // 0x50(0x10)

	struct FRotator GetRotation(); // Function Gobi.AnimContext_Rotation.GetRotation // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AnimContext_Transform
// Size: 0x70 (Inherited: 0x60)
struct UAnimContext_Transform : UAnimContext_Rotation {
	struct FVector Location; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)

	struct FVector GetLocation(); // Function Gobi.AnimContext_Transform.GetLocation // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AnimContext_Actor
// Size: 0x90 (Inherited: 0x70)
struct UAnimContext_Actor : UAnimContext_Transform {
	char pad_70[0x20]; // 0x70(0x20)

	float GetRadius(); // Function Gobi.AnimContext_Actor.GetRadius // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AnimContext_ActorLocator
// Size: 0x80 (Inherited: 0x70)
struct UAnimContext_ActorLocator : UAnimContext_Transform {
	struct UAnimContext_Actor* ActorContext; // 0x70(0x08)
	struct FGameplayTag LocatorTag; // 0x78(0x08)
};

// Class Gobi.AnimContext_ActorSceneComp
// Size: 0x98 (Inherited: 0x90)
struct UAnimContext_ActorSceneComp : UAnimContext_Actor {
	struct FName ComponentTag; // 0x90(0x08)
};

// Class Gobi.AnimContext_ActorSocket
// Size: 0x98 (Inherited: 0x90)
struct UAnimContext_ActorSocket : UAnimContext_Actor {
	struct FName Socket; // 0x90(0x08)
};

// Class Gobi.AnimContext_AlertToLocation
// Size: 0x70 (Inherited: 0x70)
struct UAnimContext_AlertToLocation : UAnimContext_Transform {

	void UpdateFromAlertSource(struct AActor* Avatar, struct AActor* AlertSource); // Function Gobi.AnimContext_AlertToLocation.UpdateFromAlertSource // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AnimContext_AmbushLocation
// Size: 0x70 (Inherited: 0x70)
struct UAnimContext_AmbushLocation : UAnimContext_Transform {
};

// Class Gobi.AnimContext_Angle
// Size: 0x80 (Inherited: 0x60)
struct UAnimContext_Angle : UAnimContext_Rotation {
	struct UAnimContext_Transform* AngleFrom; // 0x60(0x08)
	bool InvertAngleFrom; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct UAnimContext_Transform* AngleTo; // 0x70(0x08)
	bool InvertAngleTo; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class Gobi.AnimContext_Character
// Size: 0x150 (Inherited: 0x90)
struct UAnimContext_Character : UAnimContext_Actor {
	char pad_90[0x8]; // 0x90(0x08)
	struct FAIDataProviderFloatValue LocationOffsetX; // 0x98(0x38)
	struct FAIDataProviderFloatValue LocationOffsetY; // 0xd0(0x38)
	struct FAIDataProviderFloatValue LocationOffsetZ; // 0x108(0x38)
	char pad_140[0x10]; // 0x140(0x10)
};

// Class Gobi.AnimContext_Avatar
// Size: 0x150 (Inherited: 0x150)
struct UAnimContext_Avatar : UAnimContext_Character {
};

// Class Gobi.AnimContext_ChargeComponent
// Size: 0x58 (Inherited: 0x50)
struct UAnimContext_ChargeComponent : UAnimContext {
	char pad_50[0x8]; // 0x50(0x08)
};

// Class Gobi.AnimContext_Avatar_Charge
// Size: 0x58 (Inherited: 0x58)
struct UAnimContext_Avatar_Charge : UAnimContext_ChargeComponent {
};

// Class Gobi.AnimContext_LeapComponent
// Size: 0x58 (Inherited: 0x50)
struct UAnimContext_LeapComponent : UAnimContext {
	char pad_50[0x8]; // 0x50(0x08)
};

// Class Gobi.AnimContext_Avatar_Leap
// Size: 0x58 (Inherited: 0x58)
struct UAnimContext_Avatar_Leap : UAnimContext_LeapComponent {
};

// Class Gobi.AnimContext_Mutilation
// Size: 0x58 (Inherited: 0x50)
struct UAnimContext_Mutilation : UAnimContext {
	char pad_50[0x8]; // 0x50(0x08)
};

// Class Gobi.AnimContext_Avatar_Mutilation
// Size: 0x58 (Inherited: 0x58)
struct UAnimContext_Avatar_Mutilation : UAnimContext_Mutilation {
};

// Class Gobi.AnimContext_PounceComponent
// Size: 0x58 (Inherited: 0x50)
struct UAnimContext_PounceComponent : UAnimContext {
	char pad_50[0x8]; // 0x50(0x08)
};

// Class Gobi.AnimContext_Avatar_Pounce
// Size: 0x58 (Inherited: 0x58)
struct UAnimContext_Avatar_Pounce : UAnimContext_PounceComponent {
};

// Class Gobi.AnimContext_AvatarSceneComp
// Size: 0x98 (Inherited: 0x98)
struct UAnimContext_AvatarSceneComp : UAnimContext_ActorSceneComp {
};

// Class Gobi.AnimContext_AvatarSocket
// Size: 0x98 (Inherited: 0x98)
struct UAnimContext_AvatarSocket : UAnimContext_ActorSocket {
};

// Class Gobi.AnimContext_BotInteractTarget
// Size: 0x90 (Inherited: 0x90)
struct UAnimContext_BotInteractTarget : UAnimContext_Actor {
};

// Class Gobi.AnimContext_BotItemUseTarget
// Size: 0x90 (Inherited: 0x90)
struct UAnimContext_BotItemUseTarget : UAnimContext_Actor {
};

// Class Gobi.AnimContext_BotTarget
// Size: 0x160 (Inherited: 0x150)
struct UAnimContext_BotTarget : UAnimContext_Character {
	struct UAnimContext_Actor* TargetContext; // 0x150(0x08)
	char pad_158[0x8]; // 0x158(0x08)
};

// Class Gobi.AnimContext_ClingComponent
// Size: 0x58 (Inherited: 0x50)
struct UAnimContext_ClingComponent : UAnimContext {
	char pad_50[0x8]; // 0x50(0x08)

	void HandleTraitsApplied(struct AActor* Avatar); // Function Gobi.AnimContext_ClingComponent.HandleTraitsApplied // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AnimContext_ClingGroundLocation
// Size: 0x78 (Inherited: 0x70)
struct UAnimContext_ClingGroundLocation : UAnimContext_Transform {
	char pad_70[0x8]; // 0x70(0x08)

	void HandleTraitsApplied(struct AActor* Avatar); // Function Gobi.AnimContext_ClingGroundLocation.HandleTraitsApplied // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AnimContext_ClingLocation
// Size: 0x78 (Inherited: 0x70)
struct UAnimContext_ClingLocation : UAnimContext_Transform {
	char pad_70[0x8]; // 0x70(0x08)

	void HandleTraitsApplied(struct AActor* Avatar); // Function Gobi.AnimContext_ClingLocation.HandleTraitsApplied // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AnimContext_ClingTarget
// Size: 0x78 (Inherited: 0x70)
struct UAnimContext_ClingTarget : UAnimContext_Transform {
	char pad_70[0x8]; // 0x70(0x08)

	void HandleTraitsApplied(struct AActor* Avatar); // Function Gobi.AnimContext_ClingTarget.HandleTraitsApplied // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AnimContext_ClosestCharacter
// Size: 0x1a0 (Inherited: 0x150)
struct UAnimContext_ClosestCharacter : UAnimContext_Character {
	struct FGameplayTagQuery CharacterTags; // 0x150(0x48)
	int32_t MinCloseCharacters; // 0x198(0x04)
	float MaxCharacterDistance; // 0x19c(0x04)
};

// Class Gobi.AnimContext_DamageInfo
// Size: 0x130 (Inherited: 0x70)
struct UAnimContext_DamageInfo : UAnimContext_Transform {
	struct FDamageInfo DamageInfo; // 0x70(0xb8)
	bool bIgnoreZeroDamageInSameFrame; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
};

// Class Gobi.AnimContext_DamageSource
// Size: 0x78 (Inherited: 0x70)
struct UAnimContext_DamageSource : UAnimContext_Transform {
	struct UAnimContext_DamageInfo* DamageInfo; // 0x70(0x08)
};

// Class Gobi.AnimContext_Direction
// Size: 0x70 (Inherited: 0x60)
struct UAnimContext_Direction : UAnimContext_Rotation {
	struct UAnimContext_Transform* DirectionFrom; // 0x60(0x08)
	struct UAnimContext_Transform* DirectionTo; // 0x68(0x08)
};

// Class Gobi.AnimContext_Distance
// Size: 0x80 (Inherited: 0x50)
struct UAnimContext_Distance : UAnimContext {
	struct UAnimContext_Transform* DistFrom; // 0x50(0x08)
	struct UAnimContext_Transform* DistTo; // 0x58(0x08)
	bool bAccountForRadii; // 0x60(0x01)
	bool bAccountForNavLinkOffset; // 0x61(0x01)
	char pad_62[0x1e]; // 0x62(0x1e)
};

// Class Gobi.AnimContext_Enemy
// Size: 0x168 (Inherited: 0x150)
struct UAnimContext_Enemy : UAnimContext_Character {
	char pad_150[0x18]; // 0x150(0x18)
};

// Class Gobi.AnimContext_EnemySceneComp
// Size: 0x98 (Inherited: 0x98)
struct UAnimContext_EnemySceneComp : UAnimContext_ActorSceneComp {
};

// Class Gobi.AnimContext_EnemySocket
// Size: 0x98 (Inherited: 0x98)
struct UAnimContext_EnemySocket : UAnimContext_ActorSocket {
};

// Class Gobi.AnimContext_Facing
// Size: 0x70 (Inherited: 0x60)
struct UAnimContext_Facing : UAnimContext_Rotation {
	struct UAnimContext_Transform* Facing; // 0x60(0x08)
	struct UAnimContext_Transform* TargetPos; // 0x68(0x08)
};

// Class Gobi.AnimContext_GameplayTags
// Size: 0x80 (Inherited: 0x50)
struct UAnimContext_GameplayTags : UAnimContext {
	struct UAnimContext_Actor* Actor; // 0x50(0x08)
	char pad_58[0x28]; // 0x58(0x28)

	void RemoveGameplayTags(struct FGameplayTagContainer Tag); // Function Gobi.AnimContext_GameplayTags.RemoveGameplayTags // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AnimContext_HitReactionInfo
// Size: 0x130 (Inherited: 0x130)
struct UAnimContext_HitReactionInfo : UAnimContext_DamageInfo {
};

// Class Gobi.AnimContext_HitResult
// Size: 0xf8 (Inherited: 0x70)
struct UAnimContext_HitResult : UAnimContext_Transform {
	char pad_70[0x88]; // 0x70(0x88)
};

// Class Gobi.AnimContext_LastVisibleLocation
// Size: 0x90 (Inherited: 0x70)
struct UAnimContext_LastVisibleLocation : UAnimContext_Transform {
	char pad_70[0x8]; // 0x70(0x08)
	struct UAnimContext_Trace* Trace; // 0x78(0x08)
	char pad_80[0x10]; // 0x80(0x10)
};

// Class Gobi.AnimContext_MantleTarget
// Size: 0x80 (Inherited: 0x70)
struct UAnimContext_MantleTarget : UAnimContext_Transform {
	char pad_70[0x8]; // 0x70(0x08)
	bool bUseMantleLedgePos; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class Gobi.GameplayContext_MantleTraceResult
// Size: 0xd0 (Inherited: 0x50)
struct UGameplayContext_MantleTraceResult : UGameplayContext {
	char pad_50[0x80]; // 0x50(0x80)
};

// Class Gobi.GameplayContext_MantleRemainingHeight
// Size: 0x60 (Inherited: 0x50)
struct UGameplayContext_MantleRemainingHeight : UGameplayContext {
	char pad_50[0x10]; // 0x50(0x10)
};

// Class Gobi.AnimContext_MontageHistory
// Size: 0x60 (Inherited: 0x50)
struct UAnimContext_MontageHistory : UAnimContext {
	char pad_50[0x10]; // 0x50(0x10)
};

// Class Gobi.AnimContext_NavCast
// Size: 0x70 (Inherited: 0x50)
struct UAnimContext_NavCast : UAnimContext {
	struct UAnimContext_Actor* CastFrom; // 0x50(0x08)
	struct UAnimContext_Transform* CastTo; // 0x58(0x08)
	struct UNavigationQueryFilter* QueryFilter; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class Gobi.AnimContext_NavLinkContextLoc
// Size: 0x80 (Inherited: 0x70)
struct UAnimContext_NavLinkContextLoc : UAnimContext_Transform {
	enum class ENavLinkContextLocations DesiredContextLocation; // 0x70(0x01)
	char pad_71[0xf]; // 0x71(0x0f)
};

// Class Gobi.AnimContext_NavLinkLocation
// Size: 0x90 (Inherited: 0x70)
struct UAnimContext_NavLinkLocation : UAnimContext_Transform {
	char pad_70[0x20]; // 0x70(0x20)
};

// Class Gobi.AnimContext_NavLinkEnd
// Size: 0x98 (Inherited: 0x90)
struct UAnimContext_NavLinkEnd : UAnimContext_NavLinkLocation {
	char pad_90[0x8]; // 0x90(0x08)
};

// Class Gobi.AnimContext_NavLinkEndOnNav
// Size: 0x90 (Inherited: 0x90)
struct UAnimContext_NavLinkEndOnNav : UAnimContext_NavLinkLocation {
};

// Class Gobi.AnimContext_NavLinkProxyLocation
// Size: 0x70 (Inherited: 0x70)
struct UAnimContext_NavLinkProxyLocation : UAnimContext_Transform {
};

// Class Gobi.AnimContext_NavLinkSpawnEnd
// Size: 0x90 (Inherited: 0x90)
struct UAnimContext_NavLinkSpawnEnd : UAnimContext_NavLinkLocation {
};

// Class Gobi.AnimContext_NavLinkStart
// Size: 0x90 (Inherited: 0x90)
struct UAnimContext_NavLinkStart : UAnimContext_NavLinkLocation {
};

// Class Gobi.AnimContext_NavLinkStartOnNav
// Size: 0x90 (Inherited: 0x90)
struct UAnimContext_NavLinkStartOnNav : UAnimContext_NavLinkLocation {
};

// Class Gobi.AnimContext_NavPathCorner
// Size: 0x80 (Inherited: 0x70)
struct UAnimContext_NavPathCorner : UAnimContext_Transform {
	int32_t CornerIdx; // 0x70(0x04)
	char pad_74[0xc]; // 0x74(0x0c)
};

// Class Gobi.AnimContext_NavPathEnd
// Size: 0x70 (Inherited: 0x70)
struct UAnimContext_NavPathEnd : UAnimContext_Transform {
};

// Class Gobi.AnimContext_NavPathFlaggedNode
// Size: 0x90 (Inherited: 0x90)
struct UAnimContext_NavPathFlaggedNode : UAnimContext_NavLinkLocation {
};

// Class Gobi.AnimContext_NavPathNode
// Size: 0x98 (Inherited: 0x90)
struct UAnimContext_NavPathNode : UAnimContext_NavLinkLocation {
	int32_t NodeIndex; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class Gobi.AnimContext_PathDestination
// Size: 0x70 (Inherited: 0x70)
struct UAnimContext_PathDestination : UAnimContext_Transform {
};

// Class Gobi.AnimContext_PawnProximity
// Size: 0xe8 (Inherited: 0x50)
struct UAnimContext_PawnProximity : UAnimContext {
	struct UAnimContext_Transform* QueryOrigin; // 0x50(0x08)
	struct UAnimContext_Transform* QueryBorder; // 0x58(0x08)
	float QueryRadius; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct AGobiCharacter* PawnFilterClass; // 0x68(0x08)
	struct FGameplayTagQuery TagQueryFilter; // 0x70(0x48)
	struct FGameplayTagContainer BlockingGameplayTags; // 0xb8(0x20)
	char pad_D8[0x10]; // 0xd8(0x10)
};

// Class Gobi.AnimContext_PounceDestination
// Size: 0x78 (Inherited: 0x70)
struct UAnimContext_PounceDestination : UAnimContext_Transform {
	struct UAnimContext_PounceComponent* Pounce; // 0x70(0x08)
};

// Class Gobi.AnimContext_PrevTransform
// Size: 0x98 (Inherited: 0x70)
struct UAnimContext_PrevTransform : UAnimContext_Transform {
	struct UAnimContext_Transform* Current; // 0x70(0x08)
	char pad_78[0x20]; // 0x78(0x20)
};

// Class Gobi.AnimContext_PseudoAlertLocation
// Size: 0x70 (Inherited: 0x70)
struct UAnimContext_PseudoAlertLocation : UAnimContext_Transform {
};

// Class Gobi.AnimContext_Random
// Size: 0xb8 (Inherited: 0x50)
struct UAnimContext_Random : UAnimContext {
	char pad_50[0x68]; // 0x50(0x68)
};

// Class Gobi.AnimContext_RandomOnce
// Size: 0xa0 (Inherited: 0x50)
struct UAnimContext_RandomOnce : UAnimContext {
	struct TMap<struct FName, float> RandomValues; // 0x50(0x50)
};

// Class Gobi.AnimContext_ReachInSmartActor
// Size: 0x90 (Inherited: 0x90)
struct UAnimContext_ReachInSmartActor : UAnimContext_Actor {
};

// Class Gobi.AnimContext_RetreatLocation
// Size: 0x70 (Inherited: 0x70)
struct UAnimContext_RetreatLocation : UAnimContext_Transform {
};

// Class Gobi.AnimContext_SmartActor
// Size: 0x90 (Inherited: 0x90)
struct UAnimContext_SmartActor : UAnimContext_Actor {
};

// Class Gobi.AnimContext_SqueezeTarget
// Size: 0x78 (Inherited: 0x70)
struct UAnimContext_SqueezeTarget : UAnimContext_Transform {
	char pad_70[0x8]; // 0x70(0x08)

	void OnSqueezeCandidateSet(); // Function Gobi.AnimContext_SqueezeTarget.OnSqueezeCandidateSet // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AnimContext_Trace
// Size: 0x110 (Inherited: 0x50)
struct UAnimContext_Trace : UAnimContext {
	struct UAnimContext_Transform* TraceStart; // 0x50(0x08)
	struct UAnimContext_Transform* TraceEnd; // 0x58(0x08)
	float TraceStartForwardOffset; // 0x60(0x04)
	float TraceEndForwardOffset; // 0x64(0x04)
	enum class ECollisionChannel TraceChannel; // 0x68(0x01)
	bool bUseCustomTraceChannel; // 0x69(0x01)
	char pad_6A[0x2]; // 0x6a(0x02)
	struct FName CustomTraceChannel; // 0x6c(0x08)
	bool bTraceBothDirections; // 0x74(0x01)
	bool bDoSweep; // 0x75(0x01)
	char pad_76[0x2]; // 0x76(0x02)
	float Radius; // 0x78(0x04)
	float HalfHeight; // 0x7c(0x04)
	char pad_80[0x90]; // 0x80(0x90)
};

// Class Gobi.AnimContext_WallGrabLocation
// Size: 0x78 (Inherited: 0x70)
struct UAnimContext_WallGrabLocation : UAnimContext_Transform {
	char pad_70[0x8]; // 0x70(0x08)

	void HandleTraitsApplied(struct AActor* Avatar); // Function Gobi.AnimContext_WallGrabLocation.HandleTraitsApplied // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AnimContext_WanderLocation
// Size: 0x70 (Inherited: 0x70)
struct UAnimContext_WanderLocation : UAnimContext_Transform {
};

// Class Gobi.AnimContextLocatorComponent
// Size: 0x4f0 (Inherited: 0x4a0)
struct UAnimContextLocatorComponent : UPrimitiveComponent {
	char pad_4A0[0x8]; // 0x4a0(0x08)
	struct FGameplayTag LocatorTag; // 0x4a8(0x08)
	struct TArray<struct FTagLocator> Locators; // 0x4b0(0x10)
	float TraceDistance; // 0x4c0(0x04)
	float ScanDistance; // 0x4c4(0x04)
	bool bShowDetailDebug; // 0x4c8(0x01)
	bool bHasValidClimbData; // 0x4c9(0x01)
	char pad_4CA[0x26]; // 0x4ca(0x26)
};

// Class Gobi.AnimEvalSet_Climb
// Size: 0x240 (Inherited: 0xc0)
struct UAnimEvalSet_Climb : UAnimationEvalSet {
	struct FGameplayEval_IsNavLinkNext IsNavLinkNext; // 0xc0(0x48)
	struct FGameplayEval_IsAvatarFacing IsFacingNavLink; // 0x108(0x58)
	struct FAnimEval_MontageLength HowShortIsMontage; // 0x160(0x50)
	struct FAnimEval_Climb ClimbLinkEval; // 0x1b0(0x68)
	float MaxStartingDistance; // 0x218(0x04)
	float ClimbUp; // 0x21c(0x04)
	float TopDistance; // 0x220(0x04)
	float ClimbDown; // 0x224(0x04)
	struct TArray<struct UNavArea*> ClimbNavAreas; // 0x228(0x10)
	float MaxFacingAngle; // 0x238(0x04)
	bool bNeedsClearPathToLinkStart; // 0x23c(0x01)
	char pad_23D[0x3]; // 0x23d(0x03)
};

// Class Gobi.AnimEvalSet_ClimbLink
// Size: 0x218 (Inherited: 0xc0)
struct UAnimEvalSet_ClimbLink : UAnimationEvalSet {
	struct FGameplayEval_IsNavLinkNext IsNavLinkNext; // 0xc0(0x48)
	struct FGameplayEval_IsAvatarFacing IsFacingNavLink; // 0x108(0x58)
	struct FAnimEval_ClimbLink ClimbLinkEval; // 0x160(0x78)
	float MaxStartingDistance; // 0x1d8(0x04)
	float MinClimbUp; // 0x1dc(0x04)
	float MaxClimbUp; // 0x1e0(0x04)
	float MinTopDistance; // 0x1e4(0x04)
	float MaxTopDistance; // 0x1e8(0x04)
	float MinClimbDown; // 0x1ec(0x04)
	float MaxClimbDown; // 0x1f0(0x04)
	char pad_1F4[0x4]; // 0x1f4(0x04)
	struct TArray<struct UNavArea*> ClimbNavAreas; // 0x1f8(0x10)
	float ClimbEvalWeight; // 0x208(0x04)
	float MaxFacingAngle; // 0x20c(0x04)
	bool bNeedsClearPathToLinkStart; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
};

// Class Gobi.AnimEvalSet_FilterNavLink
// Size: 0x140 (Inherited: 0xc0)
struct UAnimEvalSet_FilterNavLink : UAnimationEvalSet {
	struct TArray<struct UNavArea*> AllowedNavAreas; // 0xc0(0x10)
	struct FGameplayEval_NavArea AllowedNavAreaEval; // 0xd0(0x70)
};

// Class Gobi.AnimEvaluator
// Size: 0x50 (Inherited: 0x30)
struct UAnimEvaluator : UObject {
	bool bDrawDebug; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Weight; // 0x34(0x04)
	enum class EEvalType EvalType; // 0x38(0x01)
	bool bInvertTest; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	int32_t ID; // 0x3c(0x04)
	char pad_40[0x10]; // 0x40(0x10)
};

// Class Gobi.AnimEvaluator_HitBone
// Size: 0x60 (Inherited: 0x50)
struct UAnimEvaluator_HitBone : UAnimEvaluator {
	struct FName HitBoneBelow; // 0x50(0x08)
	struct UAnimContext_HitResult* Hit; // 0x58(0x08)
};

// Class Gobi.GobiAnimInstance
// Size: 0x3c0 (Inherited: 0x2c0)
struct UGobiAnimInstance : UAnimInstance {
	struct APawn* PawnOwner; // 0x2b8(0x08)
	struct UGobiCharacterMovementComponent* MovementComponent; // 0x2c0(0x08)
	struct FGobiAnimationData BaseData; // 0x2c8(0x14)
	struct FGobiAnimationState AnimationState; // 0x2dc(0x58)
	struct FGobiAnimationState LastAnimationState; // 0x334(0x58)
	bool bUseStartStopTransitions; // 0x38c(0x01)
	float SpeedInterpAlpha; // 0x390(0x04)
	bool bShowDebug; // 0x394(0x01)
	bool IsThirdPerson; // 0x395(0x01)
	char pad_39B[0x25]; // 0x39b(0x25)

	void DebugDrawHandler(struct UCanvas* Canvas, struct APlayerController* InPlayerController); // Function Gobi.GobiAnimInstance.DebugDrawHandler // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AnimInstance3P
// Size: 0x7b0 (Inherited: 0x3c0)
struct UAnimInstance3P : UGobiAnimInstance {
	struct FAnimLocomotionData LocomotionData; // 0x3b8(0x40)
	struct FAnimDirectionRange ForwardDirection; // 0x3f8(0x1c)
	struct FAnimDirectionRange RightDirection; // 0x414(0x1c)
	struct FAnimDirectionRange LeftDirection; // 0x430(0x1c)
	struct FAnimDirectionRange BackwardDirection; // 0x44c(0x1c)
	struct FLocoTurnInPlace TurnInPlaceState; // 0x468(0xb0)
	struct FLocomotionPrediction LocoPredict; // 0x518(0x68)
	struct FLocoLeaning Leaning; // 0x580(0x0c)
	float DirectionInterpAlpha; // 0x58c(0x04)
	float DirectionChangingSpeedThreshold; // 0x590(0x04)
	struct FLookAtInfo LookAtInfo; // 0x594(0x34)
	struct FAimRotationInfo AimRotationInfo; // 0x5c8(0x0c)
	struct FLadderAnimState LadderAnimState; // 0x5d4(0x08)
	struct FGobiFootPlanting FootPlanting; // 0x5e0(0x168)
	struct FGobiAnimationCurveData IkAlphaCurve; // 0x748(0x10)
	struct FGobiAnimationCurveData FootPlantingAlphaCurve; // 0x758(0x10)
	struct FGobiAnimationCurveData DisableAimOffsetCurve; // 0x768(0x10)
	float LegIKAlpha; // 0x778(0x04)
	float FootPlantingAlpha; // 0x77c(0x04)
	struct FGobiSlopeWarping SlopeWarping; // 0x780(0x14)
	float AimOffsetAlpha; // 0x794(0x04)
	struct FAnimState3P AnimState3P; // 0x798(0x08)
	char pad_7A4[0xc]; // 0x7a4(0x0c)

	void OnLeftTurnInPlaceState(); // Function Gobi.AnimInstance3P.OnLeftTurnInPlaceState // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AnimInstanceFP
// Size: 0x3c0 (Inherited: 0x3c0)
struct UAnimInstanceFP : UGobiAnimInstance {
};

// Class Gobi.AnimMetaData_AnimEvaluatorSet
// Size: 0x40 (Inherited: 0x30)
struct UAnimMetaData_AnimEvaluatorSet : UAnimMetaData {
	struct UAnimationEvalSet* AnimEvaluatorSet; // 0x30(0x08)
	enum class EPawnControllerType PawnControllerType; // 0x38(0x01)
	bool bDrawDebug; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// Class Gobi.AnimMetaData_MontageLink
// Size: 0x38 (Inherited: 0x30)
struct UAnimMetaData_MontageLink : UAnimMetaData {
	struct UAnimMontage* LinkedMontage; // 0x30(0x08)
};

// Class Gobi.AnimMetaData_MontageSync
// Size: 0x50 (Inherited: 0x30)
struct UAnimMetaData_MontageSync : UAnimMetaData {
	struct UAnimMontage* Montage; // 0x30(0x08)
	struct UGameplayContext_ActorComponent* SyncTargetContext; // 0x38(0x08)
	bool bSyncStops; // 0x40(0x01)
	char pad_41[0xf]; // 0x41(0x0f)
};

// Class Gobi.AnimNotify_AOEEmitter
// Size: 0x48 (Inherited: 0x40)
struct UAnimNotify_AOEEmitter : UAnimNotify {
	struct FGameplayTag AOEEmitterTag; // 0x40(0x08)
};

// Class Gobi.AnimNotify_ApplyGameplayEffect
// Size: 0x78 (Inherited: 0x40)
struct UAnimNotify_ApplyGameplayEffect : UAnimNotify {
	bool bUnconditional; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float Distance; // 0x44(0x04)
	struct FName BoneName; // 0x48(0x08)
	struct FCollisionProfileName OverlapCollisionProfile; // 0x50(0x08)
	bool bRequiresLineOfSight; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct FName LineOfSightTargetComponentTag; // 0x5c(0x08)
	bool bUseTargetEyePosForLoS; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct TArray<struct UGameplayEffect*> GameplayEffects; // 0x68(0x10)
};

// Class Gobi.AnimNotify_BeginPhysicalDeath
// Size: 0x40 (Inherited: 0x40)
struct UAnimNotify_BeginPhysicalDeath : UAnimNotify {
};

// Class Gobi.AnimNotify_BlendOut
// Size: 0x40 (Inherited: 0x40)
struct UAnimNotify_BlendOut : UAnimNotify {
};

// Class Gobi.AnimNotify_CameraShake
// Size: 0xc0 (Inherited: 0x40)
struct UAnimNotify_CameraShake : UAnimNotify {
	float InnerRadius; // 0x40(0x04)
	float OuterRadius; // 0x44(0x04)
	struct FVector EpicenterOffset; // 0x48(0x0c)
	bool bUseBoneLocationAsEpicenter; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct FName EpicenterBone; // 0x58(0x08)
	float Falloff; // 0x60(0x04)
	bool bOrientShakeTowardsEpicenter; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct UCameraShake* Shake; // 0x68(0x08)
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x70(0x08)
	struct FGameplayTagQuery TagQueryRequirment; // 0x78(0x48)
};

// Class Gobi.AnimNotify_ChangeAttachMovement
// Size: 0x48 (Inherited: 0x40)
struct UAnimNotify_ChangeAttachMovement : UAnimNotify {
	bool bNewMoveToAttachLocation; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Gobi.AnimNotify_Corpse
// Size: 0x40 (Inherited: 0x40)
struct UAnimNotify_Corpse : UAnimNotify {
};

// Class Gobi.AnimNotify_EmissiveScaling
// Size: 0x48 (Inherited: 0x40)
struct UAnimNotify_EmissiveScaling : UAnimNotify {
	float EmissiveValue; // 0x40(0x04)
	float TimeToScale; // 0x44(0x04)
};

// Class Gobi.AnimNotify_EvalBranch
// Size: 0x50 (Inherited: 0x40)
struct UAnimNotify_EvalBranch : UAnimNotify {
	struct TArray<struct FEvalBranchData> BranchData; // 0x40(0x10)
};

// Class Gobi.AnimNotify_EvalBranchWithOffset
// Size: 0x58 (Inherited: 0x50)
struct UAnimNotify_EvalBranchWithOffset : UAnimNotify_EvalBranch {
	bool bInvertOffset; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class Gobi.AnimNotify_Explode
// Size: 0x48 (Inherited: 0x40)
struct UAnimNotify_Explode : UAnimNotify {
	struct FGameplayTag ExplosionComponentTag; // 0x40(0x08)
};

// Class Gobi.AnimNotify_FocusTrackingRefPose
// Size: 0xa8 (Inherited: 0x40)
struct UAnimNotify_FocusTrackingRefPose : UAnimNotify {
	struct FFocusTrackingRefPose RefPoseData; // 0x40(0x60)
	struct FName SlotName; // 0xa0(0x08)
};

// Class Gobi.AnimNotify_GameplayCue
// Size: 0x68 (Inherited: 0x40)
struct UAnimNotify_GameplayCue : UAnimNotify {
	struct UAnimContext_Actor* Instigator; // 0x40(0x08)
	struct UAnimContext_Actor* SourceActor; // 0x48(0x08)
	struct UAnimContext_Actor* TargetActor; // 0x50(0x08)
	struct FName BoneName; // 0x58(0x08)
	struct FGameplayTag Cue; // 0x60(0x08)
};

// Class Gobi.AnimNotify_GobiMusicEvent
// Size: 0x60 (Inherited: 0x40)
struct UAnimNotify_GobiMusicEvent : UAnimNotify {
	struct FDataTableRowHandle EventHandle; // 0x40(0x20)
};

// Class Gobi.AnimNotify_HideActor
// Size: 0x48 (Inherited: 0x40)
struct UAnimNotify_HideActor : UAnimNotify {
	bool bHidden; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Gobi.AnimNotify_MotionCorrectionGoal
// Size: 0xd8 (Inherited: 0x40)
struct UAnimNotify_MotionCorrectionGoal : UAnimNotify {
	bool bDrawDebug; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FMotionCorrectionGoal CorrectionGoal; // 0x48(0x90)
};

// Class Gobi.AnimNotify_Mutilate
// Size: 0x60 (Inherited: 0x40)
struct UAnimNotify_Mutilate : UAnimNotify {
	bool bExplode; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float PctToDismember; // 0x44(0x04)
	float DismemberImpulseMagnitude; // 0x48(0x04)
	float ImpulseMagnitude; // 0x4c(0x04)
	enum class EMutilationRegion Region; // 0x50(0x01)
	enum class EMutilationType Type; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct UAnimContext_DamageInfo* DamageInfo; // 0x58(0x08)
};

// Class Gobi.AnimNotify_Navigation
// Size: 0x50 (Inherited: 0x40)
struct UAnimNotify_Navigation : UAnimNotify {
	struct UNavArea* NavModifierAreaClass; // 0x40(0x08)
	struct UNavArea* NavLinkAreaClass; // 0x48(0x08)
};

// Class Gobi.AnimNotify_ParticleCollider
// Size: 0xe0 (Inherited: 0x40)
struct UAnimNotify_ParticleCollider : UAnimNotify {
	struct FTransform Offset; // 0x40(0x30)
	struct FName BoneName; // 0x70(0x08)
	struct FImpactEmitterDefinition EmitterDef; // 0x78(0x68)
};

// Class Gobi.AnimNotify_PauseResumeAI
// Size: 0x58 (Inherited: 0x40)
struct UAnimNotify_PauseResumeAI : UAnimNotify {
	enum class EAIPauseResume Mode; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FString Reason; // 0x48(0x10)
};

// Class Gobi.AnimNotify_PlayerSound
// Size: 0x48 (Inherited: 0x40)
struct UAnimNotify_PlayerSound : UAnimNotify {
	struct UAkAudioEvent* PlayerSoundEvent; // 0x40(0x08)
};

// Class Gobi.AnimNotify_PlayFPParticleEffect
// Size: 0x90 (Inherited: 0x90)
struct UAnimNotify_PlayFPParticleEffect : UAnimNotify_PlayParticleEffect {
};

// Class Gobi.AnimNotify_Ragdoll
// Size: 0x50 (Inherited: 0x40)
struct UAnimNotify_Ragdoll : UAnimNotify {
	struct FName BoneName; // 0x40(0x08)
	struct FName CollisionProfileToSet; // 0x48(0x08)
};

// Class Gobi.AnimNotify_RattleTrigger
// Size: 0x50 (Inherited: 0x40)
struct UAnimNotify_RattleTrigger : UAnimNotify {
	struct FName Bone; // 0x40(0x08)
	float Radius; // 0x48(0x04)
	float SpeedModifier; // 0x4c(0x04)
};

// Class Gobi.AnimNotify_ReachIn
// Size: 0x40 (Inherited: 0x40)
struct UAnimNotify_ReachIn : UAnimNotify {
};

// Class Gobi.AnimNotify_SetAttackLocation
// Size: 0x40 (Inherited: 0x40)
struct UAnimNotify_SetAttackLocation : UAnimNotify {
};

// Class Gobi.AnimNotify_SetChargeDistance
// Size: 0x50 (Inherited: 0x40)
struct UAnimNotify_SetChargeDistance : UAnimNotify {
	struct UAnimContext_ChargeComponent* Charge; // 0x40(0x08)
	struct UAnimContext_Transform* TargetLocation; // 0x48(0x08)
};

// Class Gobi.AnimNotify_SetLeapDestination
// Size: 0x50 (Inherited: 0x40)
struct UAnimNotify_SetLeapDestination : UAnimNotify {
	struct UAnimContext_LeapComponent* Leap; // 0x40(0x08)
	struct UAnimContext_Transform* Destination; // 0x48(0x08)
};

// Class Gobi.AnimNotify_SetPhysicalBlend
// Size: 0x58 (Inherited: 0x40)
struct UAnimNotify_SetPhysicalBlend : UAnimNotify {
	struct FName BoneName; // 0x40(0x08)
	struct FName CollisionProfileName; // 0x48(0x08)
	float PhysicsBlendWeight; // 0x50(0x04)
	bool bSkipCustomPhysicsType; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class Gobi.AnimNotify_SharedSoundBase
// Size: 0x50 (Inherited: 0x40)
struct UAnimNotify_SharedSoundBase : UAnimNotify {
	struct FName Bone; // 0x40(0x08)
	struct USoundCollectionAssetAnimPreview* DemoSoundAsset; // 0x48(0x08)
};

// Class Gobi.AnimNotify_SharedSoundHuman
// Size: 0x58 (Inherited: 0x50)
struct UAnimNotify_SharedSoundHuman : UAnimNotify_SharedSoundBase {
	enum class ESharedSurvivorAnimSound HumanSound; // 0x50(0x01)
	bool PlayIfLocal; // 0x51(0x01)
	bool PlayIfRemote; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
};

// Class Gobi.AnimNotify_SharedSoundEnemy
// Size: 0x60 (Inherited: 0x50)
struct UAnimNotify_SharedSoundEnemy : UAnimNotify_SharedSoundBase {
	enum class ESharedEnemyAnimSound EnemySound; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float ChanceToPlayIfLocal; // 0x54(0x04)
	float ChanceToPlayIfRemote; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Gobi.AnimNotify_SpawnDecal
// Size: 0x68 (Inherited: 0x40)
struct UAnimNotify_SpawnDecal : UAnimNotify {
	struct UAnimContext_Rotation* TraceDirectionContext; // 0x40(0x08)
	enum class ECollisionChannel TraceChannel; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float TraceLength; // 0x4c(0x04)
	struct FName TraceStartPosBoneName; // 0x50(0x08)
	float ImpactDirectionAngle; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct UDecalDefinition* DecalDefinitionAsset; // 0x60(0x08)
};

// Class Gobi.AnimNotify_SpawnImpactEffect
// Size: 0x90 (Inherited: 0x40)
struct UAnimNotify_SpawnImpactEffect : UAnimNotify {
	bool bUseRotationContext; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct UAnimContext_Rotation* TraceDirectionContext; // 0x48(0x08)
	enum class EAnimNotifySpawnImpactTraceDirection TraceDirection; // 0x50(0x01)
	enum class ECollisionChannel TraceChannel; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	float TraceLength; // 0x54(0x04)
	struct FName TraceStartPosBoneName; // 0x58(0x08)
	enum class EAnimNotifySpawnImpactDirectionOverride DirectionOverride; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float DirectionOverrideYawOffset; // 0x64(0x04)
	struct UImpactEffectConfig* ImpactEffectConfig; // 0x68(0x08)
	struct FGameplayTagContainer BlockingTags; // 0x70(0x20)
};

// Class Gobi.AnimNotify_SpawnThrowProjectileBase
// Size: 0x48 (Inherited: 0x40)
struct UAnimNotify_SpawnThrowProjectileBase : UAnimNotify {
	struct UProjectileThrowComponent* ProjectileThrowClass; // 0x40(0x08)
};

// Class Gobi.AnimNotify_StartTitanTailThrashRockFall
// Size: 0x40 (Inherited: 0x40)
struct UAnimNotify_StartTitanTailThrashRockFall : UAnimNotify {
};

// Class Gobi.AnimNotify_Teleport
// Size: 0x48 (Inherited: 0x40)
struct UAnimNotify_Teleport : UAnimNotify {
	struct UAnimContext_Transform* Destination; // 0x40(0x08)
};

// Class Gobi.AnimNotify_ThrowProjectileBase
// Size: 0x48 (Inherited: 0x40)
struct UAnimNotify_ThrowProjectileBase : UAnimNotify {
	struct UProjectileThrowComponent* ProjectileThrowClass; // 0x40(0x08)
};

// Class Gobi.AnimNotify_TRSEvent
// Size: 0x48 (Inherited: 0x40)
struct UAnimNotify_TRSEvent : UAnimNotify {
	struct FName EventName; // 0x40(0x08)
};

// Class Gobi.AnimNotify_WeaponSharedSound
// Size: 0x58 (Inherited: 0x40)
struct UAnimNotify_WeaponSharedSound : UAnimNotify {
	struct UAkAudioEvent* PreviewAudio; // 0x40(0x08)
	struct FName BoneName; // 0x48(0x08)
	enum class ESharedWeaponAnimSound SoundLookup; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class Gobi.AnimNotifyState_ApplyGameplayEffects
// Size: 0x48 (Inherited: 0x38)
struct UAnimNotifyState_ApplyGameplayEffects : UAnimNotifyState {
	struct TArray<struct UGameplayEffect*> GameplayEffects; // 0x38(0x10)
};

// Class Gobi.AnimNotifyState_AttackWindow
// Size: 0x60 (Inherited: 0x38)
struct UAnimNotifyState_AttackWindow : UAnimNotifyState {
	struct FGameplayTag AttackVolumeTag; // 0x38(0x08)
	struct TArray<struct UGameplayEffect*> AttackGameplayEffects; // 0x40(0x10)
	bool bResetOverlaps; // 0x50(0x01)
	bool bUpdateOverlaps; // 0x51(0x01)
	bool bOverrideAttackVolumeCollision; // 0x52(0x01)
	char pad_53[0x1]; // 0x53(0x01)
	struct FCollisionProfileName AttackVolumeCollisionProfile; // 0x54(0x08)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Gobi.AnimNotifyState_ClampInputRotationRate
// Size: 0x50 (Inherited: 0x38)
struct UAnimNotifyState_ClampInputRotationRate : UAnimNotifyState {
	struct FName Label; // 0x38(0x08)
	enum class EClampInputRotationType Type; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FVector2D Rate; // 0x44(0x08)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Gobi.AnimNotifyState_ContextTickable
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotifyState_ContextTickable : UAnimNotifyState {
	struct UGameplayContext* Context; // 0x38(0x08)
};

// Class Gobi.AnimNotifyState_EvalChainMontage
// Size: 0x48 (Inherited: 0x38)
struct UAnimNotifyState_EvalChainMontage : UAnimNotifyState {
	struct TArray<struct FEvalChain> EvalChains; // 0x38(0x10)
};

// Class Gobi.AnimNotifyState_ModifyView
// Size: 0xb8 (Inherited: 0x38)
struct UAnimNotifyState_ModifyView : UAnimNotifyState {
	struct FCameraViewModifier ViewModifier; // 0x38(0x38)
	struct FGameplayTagQuery RequiredTags; // 0x70(0x48)
};

// Class Gobi.AnimNotifyState_MotionCorrection
// Size: 0xd8 (Inherited: 0x38)
struct UAnimNotifyState_MotionCorrection : UAnimNotifyState {
	bool bDrawDebug; // 0x38(0x01)
	bool bIsLinkedToGoal; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	struct FName LinkedGoal; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)
	struct FMotionCorrectionGoal CorrectionGoal; // 0x48(0x90)
};

// Class Gobi.AnimNotifyState_ParticleColliderTimed
// Size: 0x108 (Inherited: 0xb8)
struct UAnimNotifyState_ParticleColliderTimed : UAnimNotifyState_TimedParticleEffect {
	struct TMap<struct FName, struct UImpactEffectConfig*> Events; // 0xb8(0x50)
};

// Class Gobi.AnimNotifyState_ProjectileSpray
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotifyState_ProjectileSpray : UAnimNotifyState {
};

// Class Gobi.AnimNotifyState_RepickMontage
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotifyState_RepickMontage : UAnimNotifyState {
	bool bAllowRepickOfSelf; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Gobi.AnimNotifyState_SetBoneVis
// Size: 0x48 (Inherited: 0x38)
struct UAnimNotifyState_SetBoneVis : UAnimNotifyState {
	struct TArray<struct FAnimNotify_BoneVisDef> BoneVisibilityChanges; // 0x38(0x10)
};

// Class Gobi.AnimNotifyState_SetTags
// Size: 0x70 (Inherited: 0x38)
struct UAnimNotifyState_SetTags : UAnimNotifyState {
	struct FGameplayTagContainer Tags; // 0x38(0x20)
	bool bApplyToAnimatingActor; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct UAnimContext_Actor* Actor; // 0x60(0x08)
	struct UAnimContext_GameplayTags* ActorTags; // 0x68(0x08)
};

// Class Gobi.AnimNotifyState_ThrowProjectile
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotifyState_ThrowProjectile : UAnimNotifyState {
	struct UProjectileThrowComponent* ProjectileThrowClass; // 0x38(0x08)
};

// Class Gobi.AnimNotifyState_TitanStage3TailThrashModeDisable
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotifyState_TitanStage3TailThrashModeDisable : UAnimNotifyState {
	enum class ETitanStage3TailThrashMode ThrashMode; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Gobi.AnimNotifyState_TraversalFlyMode
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotifyState_TraversalFlyMode : UAnimNotifyState {
};

// Class Gobi.AnimUtils
// Size: 0x30 (Inherited: 0x30)
struct UAnimUtils : UBlueprintFunctionLibrary {

	void StopSyncedMontages(struct UAnimInstance* LeaderAnimInstance, struct UAnimMontage* Montage); // Function Gobi.AnimUtils.StopSyncedMontages // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AOEAttackComponent
// Size: 0x3f8 (Inherited: 0x1c8)
struct UAOEAttackComponent : UAbilityComponent {
	char pad_1C8[0x8]; // 0x1c8(0x08)
	struct FMulticastInlineDelegate OnStartAttack; // 0x1d0(0x10)
	struct FMulticastInlineDelegate OnStopAttack; // 0x1e0(0x10)
	char pad_1F0[0xa8]; // 0x1f0(0xa8)
	struct TArray<struct UAnimMontage*> AttackMontages; // 0x298(0x10)
	struct TArray<struct UAnimMontage*> AttackEndMontages; // 0x2a8(0x10)
	struct FName AOEMontageNotifyName; // 0x2b8(0x08)
	struct FName ReattackMontageNotifyName; // 0x2c0(0x08)
	struct FName AttackMontagesName; // 0x2c8(0x08)
	struct FGameplayTagContainer AppliedTags; // 0x2d0(0x20)
	struct FGameplayTagContainer BlockingTags; // 0x2f0(0x20)
	struct FGameplayTagQuery CancelTagsQuery; // 0x310(0x48)
	struct FGameplayTagQuery ShowReticleTagsQuery; // 0x358(0x48)
	bool bReactivateIfInputHeld; // 0x3a0(0x01)
	bool bUsesPrimaryButton; // 0x3a1(0x01)
	char pad_3A2[0x2]; // 0x3a2(0x02)
	float ServerVolumePadding; // 0x3a4(0x04)
	struct TArray<struct UGameplayEffect*> ApplyEffectsToSelf; // 0x3a8(0x10)
	struct TArray<struct UGameplayEffect*> AOEEffects; // 0x3b8(0x10)
	struct AGobiReticle* AOEReticleClass; // 0x3c8(0x08)
	struct AGobiReticle* AOEReticleActiveClass; // 0x3d0(0x08)
	bool bUsesTuningData; // 0x3d8(0x01)
	char pad_3D9[0x3]; // 0x3d9(0x03)
	struct FAOEAttackTuning AOEAttackTuning; // 0x3dc(0x18)
	char pad_3F4[0x4]; // 0x3f4(0x04)

	void OnStopAOEAttack__DelegateSignature(struct UAOEAttackComponent* AOEAttackComponent); // DelegateFunction Gobi.AOEAttackComponent.OnStopAOEAttack__DelegateSignature // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ApplyDamageDealtEffectsMod
// Size: 0x398 (Inherited: 0x88)
struct UApplyDamageDealtEffectsMod : UGameplayMod {
	enum class EApplyDamageEffectModType ApplicationMethod; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FDamageDealtTriggeredEffectConfig DamageDealtTriggerConfig; // 0x90(0x108)
	struct FCharacterEmitterDef DamageSourceEmitterDef; // 0x198(0x100)
	struct FCharacterEmitterDef DamageTargetEmitterDef; // 0x298(0x100)
};

// Class Gobi.ApplyEffectItemTraceComponent
// Size: 0x4f0 (Inherited: 0x4e0)
struct UApplyEffectItemTraceComponent : UApplyEffectItemComponent {
	float TraceDistance; // 0x4e0(0x04)
	bool bTargetCharactersOnly; // 0x4e4(0x01)
	enum class ECollisionChannel TraceChannel; // 0x4e5(0x01)
	char pad_4E6[0x2]; // 0x4e6(0x02)
	struct UObject* RequiredClassType; // 0x4e8(0x08)
};

// Class Gobi.ApplyEffectItemGrapplerComponent
// Size: 0x500 (Inherited: 0x4f0)
struct UApplyEffectItemGrapplerComponent : UApplyEffectItemTraceComponent {
	char pad_4F0[0x8]; // 0x4f0(0x08)
	bool bUseTraceIfNoGrappler; // 0x4f8(0x01)
	char pad_4F9[0x7]; // 0x4f9(0x07)
};

// Class Gobi.ApplyEffectItemIncapablePlayerComponent
// Size: 0x4e0 (Inherited: 0x4e0)
struct UApplyEffectItemIncapablePlayerComponent : UApplyEffectItemComponent {
};

// Class Gobi.ApplyGameModeTagMod
// Size: 0xa8 (Inherited: 0x88)
struct UApplyGameModeTagMod : UGameplayMod {
	struct FGameplayTagContainer TagsToApply; // 0x88(0x20)
};

// Class Gobi.ApplyGameplayEffectMod
// Size: 0xe0 (Inherited: 0x88)
struct UApplyGameplayEffectMod : UGameplayMod {
	char pad_88[0x18]; // 0x88(0x18)
	float ChanceToApplyEffects; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FGameplayTagContainer TagsToApply; // 0xa8(0x20)
	struct TArray<struct UGameplayEffect*> GameplayEffectsToApply; // 0xc8(0x10)
	enum class EGameplayCardAffinity LinkedAffinity; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	int32_t RandomSeed; // 0xdc(0x04)
};

// Class Gobi.ApplyOnItemAppliedMod
// Size: 0x1d8 (Inherited: 0x88)
struct UApplyOnItemAppliedMod : UGameplayMod {
	enum class EApplyOnItemAppliedTargeting ActivateWhenAppliedTo; // 0x88(0x01)
	enum class EApplyOnItemAppliedTargeting ApplyEmitterDefTo; // 0x89(0x01)
	char pad_8A[0x6]; // 0x8a(0x06)
	struct FGameplayTagQuery ItemTagQuery; // 0x90(0x48)
	struct FCharacterEmitterDef CharacterEmitterDef; // 0xd8(0x100)

	void OnSelectedItemChanged(struct AItem* OldItem, struct AItem* NewItem); // Function Gobi.ApplyOnItemAppliedMod.OnSelectedItemChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ApplyOnItemSelectedMod
// Size: 0x1d0 (Inherited: 0x88)
struct UApplyOnItemSelectedMod : UGameplayMod {
	struct FGameplayTagQuery ItemTagQuery; // 0x88(0x48)
	struct FCharacterEmitterDef CharacterEmitterDef; // 0xd0(0x100)

	void OnSelectedItemChanged(struct AItem* OldItem, struct AItem* NewItem); // Function Gobi.ApplyOnItemSelectedMod.OnSelectedItemChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ApplyOnItemThrownMod
// Size: 0x1d0 (Inherited: 0x88)
struct UApplyOnItemThrownMod : UGameplayMod {
	struct FGameplayTagQuery ItemTagQuery; // 0x88(0x48)
	struct FCharacterEmitterDef CharacterEmitterDef; // 0xd0(0x100)

	void OnSelectedItemChanged(struct AItem* OldItem, struct AItem* NewItem); // Function Gobi.ApplyOnItemThrownMod.OnSelectedItemChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ApplyOnTagMod
// Size: 0x1e0 (Inherited: 0x88)
struct UApplyOnTagMod : UGameplayMod {
	char pad_88[0x10]; // 0x88(0x10)
	struct FGameplayTagQuery CharacterTagQuery; // 0x98(0x48)
	struct FCharacterEmitterDef CharacterEmitterDef; // 0xe0(0x100)
};

// Class Gobi.ApplyTagMod
// Size: 0xa8 (Inherited: 0x88)
struct UApplyTagMod : UGameplayMod {
	struct FGameplayTagContainer TagsToApply; // 0x88(0x20)
};

// Class Gobi.ArmorComponent
// Size: 0x260 (Inherited: 0xd8)
struct UArmorComponent : UActorComponent {
	struct FMulticastInlineDelegate OnArmorDamage; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnArmorHealthChanged; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnDestroyedArmor; // 0xf8(0x10)
	struct TArray<struct FArmor> InitialArmor; // 0x108(0x10)
	struct UArmorSet* InitialArmorSet; // 0x118(0x08)
	float DestroyedImpactScale; // 0x120(0x04)
	char pad_124[0x64]; // 0x124(0x64)
	struct FDamageInfo LastDamageInfo; // 0x188(0xb8)
	struct TArray<struct FArmorHealth> ArmorHealth; // 0x240(0x10)
	struct TArray<struct FArmorDestroyed> ArmorDestroyed; // 0x250(0x10)

	void OnRep_LastDamageInfo(); // Function Gobi.ArmorComponent.OnRep_LastDamageInfo // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ArmorSet
// Size: 0x48 (Inherited: 0x38)
struct UArmorSet : UDataAsset {
	struct TArray<struct FArmor> Armor; // 0x38(0x10)
};

// Class Gobi.Trait
// Size: 0x30 (Inherited: 0x30)
struct UTrait : UObject {
};

// Class Gobi.ArmorTrait
// Size: 0x120 (Inherited: 0x30)
struct UArmorTrait : UTrait {
	struct FArmor Armor; // 0x30(0xf0)
};

// Class Gobi.ArmoryScreen
// Size: 0x5c8 (Inherited: 0x560)
struct UArmoryScreen : UHubChildScreen {
	char pad_560[0x68]; // 0x560(0x68)

	void OnWeaponFocused(struct UUserWidget* Widget); // Function Gobi.ArmoryScreen.OnWeaponFocused // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AssetLoader
// Size: 0x258 (Inherited: 0x250)
struct AAssetLoader : AActor {
	struct UAssetLoaderComponent* AssetLoaderComponent; // 0x250(0x08)
};

// Class Gobi.AssetLoaderComponent
// Size: 0xe8 (Inherited: 0xd8)
struct UAssetLoaderComponent : UActorComponent {
	struct TArray<struct UAssetTable*> AssetLists; // 0xd8(0x10)
};

// Class Gobi.AsyncAssetSet
// Size: 0xa0 (Inherited: 0x30)
struct UAsyncAssetSet : UObject {
	char pad_30[0x60]; // 0x30(0x60)
	struct TArray<struct UObject*> LoadedObjects; // 0x90(0x10)
};

// Class Gobi.AttachableComponent
// Size: 0x1c8 (Inherited: 0x120)
struct UAttachableComponent : UMovementTickableComponent {
	struct FAttachToActorInfo AttachedToInfo; // 0x120(0x68)
	bool bAttachToActorDestroyed; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	struct FCollisionProfileName AttachedCollisionProfile; // 0x18c(0x08)
	char pad_194[0x34]; // 0x194(0x34)

	void OnRep_AttachedToInfo(); // Function Gobi.AttachableComponent.OnRep_AttachedToInfo // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AttachableTrait
// Size: 0x90 (Inherited: 0x30)
struct UAttachableTrait : UTrait {
	enum class EAttachmentRule AttachmentRule; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FName SocketName; // 0x34(0x08)
	struct FName ParentCompTag; // 0x3c(0x08)
	char pad_44[0xc]; // 0x44(0x0c)
	struct FTransform AttachmentTransform; // 0x50(0x30)
	bool bInWeldSimulatedBodies; // 0x80(0x01)
	enum class EDetachmentRule DetachmentRule; // 0x81(0x01)
	char pad_82[0xe]; // 0x82(0x0e)
};

// Class Gobi.AttachmentComparisonIconUserWidget
// Size: 0x458 (Inherited: 0x450)
struct UAttachmentComparisonIconUserWidget : UGobiUserWidget {
	char pad_450[0x8]; // 0x450(0x08)

	void SetComparison(enum class EItemComparison InComparison); // Function Gobi.AttachmentComparisonIconUserWidget.SetComparison // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AttachmentDefinitionComponent
// Size: 0xe8 (Inherited: 0xd8)
struct UAttachmentDefinitionComponent : UActorComponent {
	struct FAttachmentDefinition AttachmentDefinition; // 0xd8(0x10)
};

// Class Gobi.AudioAreaTrigger
// Size: 0x2f8 (Inherited: 0x250)
struct AAudioAreaTrigger : AActor {
	struct USceneComponent* InternalRootComponent; // 0x250(0x08)
	struct TArray<struct UAkAudioBank*> AudioBanks; // 0x258(0x10)
	char pad_268[0x8]; // 0x268(0x08)
	struct TArray<struct FMultiPositioningInfo> OneAkEventMultipleTargetPoints; // 0x270(0x10)
	struct TArray<struct FMultiAudioEventInfo> OneTargetPointMultipleAkEvents; // 0x280(0x10)
	struct TArray<struct UAkAudioEvent*> DirectAudioAllEnter; // 0x290(0x10)
	struct TArray<struct UAkAudioEvent*> DirectAudioAllExit; // 0x2a0(0x10)
	struct TArray<struct UAkAudioEvent*> DirectAudioLocalEnter; // 0x2b0(0x10)
	struct TArray<struct UAkAudioEvent*> DirectAudioLocalExit; // 0x2c0(0x10)
	bool bDebug; // 0x2d0(0x01)
	char pad_2D1[0x27]; // 0x2d1(0x27)

	void OnUnpossessed(struct AGobiCharacter* GobiCharacter); // Function Gobi.AudioAreaTrigger.OnUnpossessed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AudioBlueprintFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAudioBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void UnregisterActiveMusicScenario(struct UObject* WorldContextObject, struct FName ScenarioName); // Function Gobi.AudioBlueprintFunctionLibrary.UnregisterActiveMusicScenario // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AudioController
// Size: 0x2f0 (Inherited: 0x250)
struct AAudioController : AActor {
	struct TArray<struct UAkAudioBank*> SharedBanks; // 0x250(0x10)
	struct TArray<struct UAkAudioBank*> MapSpecificBanks; // 0x260(0x10)
	struct UAkAudioBank* PVPBank; // 0x270(0x08)
	struct UAkSimpleComponent* AkSimpleComp; // 0x278(0x08)
	struct UAudioStateComponent* AudioStateMonitor; // 0x280(0x08)
	struct UCardListenerComponent* ModListener; // 0x288(0x08)
	struct UAkAudioEvent* DemoPausedSound; // 0x290(0x08)
	struct UAkAudioEvent* DemoUnpausedSound; // 0x298(0x08)
	struct FName MapMusicIdentifier; // 0x2a0(0x08)
	struct FDataTableRowHandle SafeRoomMusicRow; // 0x2a8(0x20)
	struct UAkAudioBank* AtmosphereBank; // 0x2c8(0x08)
	struct UAkAudioEvent* AtmosphereStart; // 0x2d0(0x08)
	struct UAkAudioEvent* AtmosphereStop; // 0x2d8(0x08)
	struct UAkAudioEvent* RainEvent; // 0x2e0(0x08)
	float StartingPresentationValue; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)

	void HandleGameplayCardAdded(struct AGobiPlayerState* GobiPlayerState, struct FActiveGameplayCard GameplayCard); // Function Gobi.AudioController.HandleGameplayCardAdded // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AudioDarkSetup
// Size: 0x250 (Inherited: 0x250)
struct AAudioDarkSetup : AActor {
};

// Class Gobi.AudioDestructibleComponent
// Size: 0x1c0 (Inherited: 0xd8)
struct UAudioDestructibleComponent : UActorComponent {
	struct UAkAudioEvent* ImpactHeavyAudio; // 0xd8(0x08)
	struct UAkAudioEvent* ImpactLightAudio; // 0xe0(0x08)
	struct UAkAudioEvent* RiddenDamageSwtAudio; // 0xe8(0x08)
	struct UAkAudioEvent* DebrisFallAudio; // 0xf0(0x08)
	struct UAkAudioEvent* BreakAudio; // 0xf8(0x08)
	struct TArray<struct UAkAudioEvent*> BreakSweetenersAudio; // 0x100(0x10)
	struct FGameplayTagContainer HeavyTagContainer; // 0x110(0x20)
	struct TMap<struct FGameplayTag, struct UAkAudioEvent*> DamageTypeEventMap; // 0x130(0x50)
	struct FVector ImpactOffset; // 0x180(0x0c)
	float DebrisDelay; // 0x18c(0x04)
	bool bIndestructible; // 0x190(0x01)
	char pad_191[0x2f]; // 0x191(0x2f)

	void HandleDestructibleDamaged(float NewHealth, float DeltaHealth); // Function Gobi.AudioDestructibleComponent.HandleDestructibleDamaged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AudioInteractableComponent
// Size: 0x270 (Inherited: 0x220)
struct UAudioInteractableComponent : USceneComponent {
	struct UAkAudioEvent* AudioToPlay; // 0x220(0x08)
	bool bCanBeDamaged; // 0x228(0x01)
	bool bCanBeUsed; // 0x229(0x01)
	char pad_22A[0x6]; // 0x22a(0x06)
	struct FText DefaultPromptText; // 0x230(0x18)
	float Cooldown; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct UHealthComponent* HealthComponent; // 0x250(0x08)
	struct UUsableComponent* UsableComponent; // 0x258(0x08)
	char pad_260[0x10]; // 0x260(0x10)

	void OnHit(struct FDamageInfo DamageInfo); // Function Gobi.AudioInteractableComponent.OnHit // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AudioMaterialOverride
// Size: 0x2e0 (Inherited: 0x2c8)
struct AAudioMaterialOverride : AAcousticVolume {
	float Priority; // 0x2c8(0x04)
	enum class EPhysicalSurface Surface; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	struct FString SpecialSurface; // 0x2d0(0x10)
};

// Class Gobi.AudioMaterialOverrideSubsystem
// Size: 0x90 (Inherited: 0x38)
struct UAudioMaterialOverrideSubsystem : UWorldSubsystem {
	char pad_38[0x58]; // 0x38(0x58)
};

// Class Gobi.AudioMutilationManager
// Size: 0x88 (Inherited: 0x30)
struct UAudioMutilationManager : UObject {
	uint16_t MaxMutilationEventsPerFrame; // 0x30(0x02)
	char pad_32[0x56]; // 0x32(0x56)
};

// Class Gobi.AudioOptionsPanelUserWidget
// Size: 0x490 (Inherited: 0x460)
struct UAudioOptionsPanelUserWidget : UOptionsPanelUserWidget {
	char pad_460[0x30]; // 0x460(0x30)

	void OnDialogueLanguageChanged(struct UGobiUserWidget* Widget); // Function Gobi.AudioOptionsPanelUserWidget.OnDialogueLanguageChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AudioStateComponent
// Size: 0x168 (Inherited: 0xd8)
struct UAudioStateComponent : UActorComponent {
	struct FMulticastInlineDelegate OnUIActivated; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnIncapStateChanged; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnResetMission; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnMissionSuccess; // 0x108(0x10)
	struct FMulticastInlineDelegate OnCampaignEnded; // 0x118(0x10)
	struct FMulticastInlineDelegate OnLoadingNextMission; // 0x128(0x10)
	struct UAkAudioEvent* AKERiddenSaferoomOpen; // 0x138(0x08)
	bool bIsFullscreen; // 0x140(0x01)
	bool bIsMoviePlaying; // 0x141(0x01)
	bool bIsInGameCinematicPlaying; // 0x142(0x01)
	bool bIsLoadingIntoNextMission; // 0x143(0x01)
	char pad_144[0x24]; // 0x144(0x24)

	void SaferoomStateChanged(enum class EPartySafeRoomState OldPartySafeRoomState, enum class EPartySafeRoomState NewPartySafeRoomState); // Function Gobi.AudioStateComponent.SaferoomStateChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AudioZombieManagerSubsystem
// Size: 0xa0 (Inherited: 0x38)
struct UAudioZombieManagerSubsystem : UWorldSubsystem {
	struct TMap<struct FName, struct UAudioZombieManagerSystem*> AudioZombieManagerSystems; // 0x38(0x50)
	char pad_88[0x18]; // 0x88(0x18)

	void RequestPushNormPreference(struct FName ManagerName, struct UEnemyAudioComponent* AudioComponent); // Function Gobi.AudioZombieManagerSubsystem.RequestPushNormPreference // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AudioZombieManagerSystem
// Size: 0x1a0 (Inherited: 0x30)
struct UAudioZombieManagerSystem : UObject {
	struct FName ManagerName; // 0x30(0x08)
	bool bPushZombieCallouts; // 0x38(0x01)
	bool bPushNumThreateningZombies; // 0x39(0x01)
	bool bPushMaxThreat; // 0x3a(0x01)
	bool bPushCumulativeThreat; // 0x3b(0x01)
	struct FName NumThreateningZombiesRTPCName; // 0x3c(0x08)
	struct FName MaxThreatRTPCName; // 0x44(0x08)
	struct FName CumulativeThreatRTPCName; // 0x4c(0x08)
	float PVPCollapsePhaseMultiplier; // 0x54(0x04)
	struct FGameplayTagQuery RegistrationQuery; // 0x58(0x48)
	float FrayRadius; // 0xa0(0x04)
	float MinRadiusMultiplier; // 0xa4(0x04)
	float CalloutRadius; // 0xa8(0x04)
	float MaxRadius; // 0xac(0x04)
	float MaxRadiusMultiplier; // 0xb0(0x04)
	float FromBehindMultiplier; // 0xb4(0x04)
	float MutedMultiplier; // 0xb8(0x04)
	bool bUpdatePreferenceOnManagedCharacter; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float PreferenceMinDeltaBeforeUpdate; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct TMap<struct FGameplayTag, float> TagMultipliers; // 0xc8(0x50)
	struct FColor DebugColor; // 0x118(0x04)
	bool bTextRenderer; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	float DebugTextSize; // 0x120(0x04)
	char pad_124[0x7c]; // 0x124(0x7c)
};

// Class Gobi.AutoCrouchTriggerVolume
// Size: 0x298 (Inherited: 0x298)
struct AAutoCrouchTriggerVolume : APhysicsVolume {
};

// Class Gobi.AutomatedClient
// Size: 0x30 (Inherited: 0x30)
struct UAutomatedClient : UObject {

	void HandleMissionEnded(bool bEnded, bool bSuccessfully); // Function Gobi.AutomatedClient.HandleMissionEnded // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.BadgeEditPanelUserWidget
// Size: 0x480 (Inherited: 0x450)
struct UBadgeEditPanelUserWidget : UGobiUserWidget {
	struct UGobiUserWidget* ImagePickerWidget; // 0x450(0x08)
	struct UGobiUserWidget* TextPickerWidget; // 0x458(0x08)
	enum class EBadgeEditMode BadgeEditMode; // 0x460(0x01)
	char pad_461[0x1f]; // 0x461(0x1f)

	void SetEquippedElementIndex(int32_t ElementIndex); // Function Gobi.BadgeEditPanelUserWidget.SetEquippedElementIndex // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.BarbedWire_Planted
// Size: 0x2a0 (Inherited: 0x250)
struct ABarbedWire_Planted : AActor {
	struct UGameplayEffectsComponent* GameplayEffectsComponent; // 0x250(0x08)
	struct USceneComponent* InternalRootComponent; // 0x258(0x08)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x260(0x08)
	struct UBoxComponent* BoxComponent; // 0x268(0x08)
	struct UGameplayEffectEmitterComponent* GameplayEffectEmitterComponent; // 0x270(0x08)
	struct UHealthComponent* HealthComponent; // 0x278(0x08)
	struct UItemAudioComponent* ItemAudioComponent; // 0x280(0x08)
	bool bShouldSpread; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	float SpreadDistance; // 0x28c(0x04)
	struct FVector TraceOffset; // 0x290(0x0c)
	enum class ECollisionChannel TraceChannel; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
};

// Class Gobi.BashHealthComponent
// Size: 0x140 (Inherited: 0xd8)
struct UBashHealthComponent : UActorComponent {
	int32_t MaxBashesBeforeDeath; // 0xd8(0x04)
	bool bAIDieFromBashIfIdle; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	struct FGameplayTagQuery DamageTypeTagQuery; // 0xe0(0x48)
	struct UGobiDamageType* DamageTypeOverride; // 0x128(0x08)
	char pad_130[0x10]; // 0x130(0x10)

	void OnDamage(struct FDamageInfo DamageInfo); // Function Gobi.BashHealthComponent.OnDamage // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.BatchLOSInterface
// Size: 0x30 (Inherited: 0x30)
struct UBatchLOSInterface : UInterface {
};

// Class Gobi.Bird
// Size: 0x408 (Inherited: 0x250)
struct ABird : AActor {
	char pad_250[0x8]; // 0x250(0x08)
	struct UStaticMesh* PerchedMesh; // 0x258(0x08)
	struct UStaticMesh* FlyingMesh; // 0x260(0x08)
	struct USkeletalMesh* SkeletalMesh; // 0x268(0x08)
	struct FName ParticlesBone; // 0x270(0x08)
	float FlyoffParticlesChance; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct UParticleSystem* FlyoffParticles; // 0x280(0x08)
	struct UParticleSystem* DeathParticles; // 0x288(0x08)
	struct UAnimMontage* IdleAnim; // 0x290(0x08)
	struct TMap<struct FName, float> IdleFlourishWeights; // 0x298(0x50)
	struct TArray<struct FName> IdleFlourishesWithHorizontalMovement; // 0x2e8(0x10)
	struct FVector2D IdleFlourishDelay; // 0x2f8(0x08)
	struct UAnimMontage* FlyingAnim; // 0x300(0x08)
	struct FName LandingSection; // 0x308(0x08)
	float LandingDuration; // 0x310(0x04)
	struct FVector2D HealthScale; // 0x314(0x08)
	struct FVector2D Scale; // 0x31c(0x08)
	struct FVector2D Speed; // 0x324(0x08)
	float TurnRate; // 0x32c(0x04)
	float LaunchDelay; // 0x330(0x04)
	float AlertHearingRadius; // 0x334(0x04)
	float AlertRadiusMultiplier; // 0x338(0x04)
	float WeaponShotHearingRadius; // 0x33c(0x04)
	float WeaponWhizByHearingRadius; // 0x340(0x04)
	float WeaponImpactHearingRadius; // 0x344(0x04)
	float WeaponAlertRadiusScalePower; // 0x348(0x04)
	bool bDamageable; // 0x34c(0x01)
	char pad_34D[0x3]; // 0x34d(0x03)
	struct UAkAudioEvent* AKEDeath; // 0x350(0x08)
	struct UAkAudioEvent* AKEDeathFire; // 0x358(0x08)
	struct FGameplayTag UpdateRateOptimizationCategory; // 0x360(0x08)
	enum class EBirdState State; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
	struct USplineComponent* SplineFlying; // 0x370(0x08)
	struct ABirdSystem* BirdSystem; // 0x378(0x08)
	struct ABirdSite* CurrentSite; // 0x380(0x08)
	bool TakeoffDelay; // 0x388(0x01)
	char pad_389[0x2f]; // 0x389(0x2f)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x3b8(0x08)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x3c0(0x08)
	struct UGameplayTagsComponent* GameplayTagsComponent; // 0x3c8(0x08)
	struct UHealthComponent* HealthComponent; // 0x3d0(0x08)
	struct UGameplayEffectsComponent* GameplayEffectsComponent; // 0x3d8(0x08)
	char pad_3E0[0x28]; // 0x3e0(0x28)

	void SetState(enum class EBirdState NewState); // Function Gobi.Bird.SetState // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiGameCoachLesson
// Size: 0x488 (Inherited: 0xc8)
struct UGobiGameCoachLesson : UGameCoachLesson {
	char pad_C8[0x18]; // 0xc8(0x18)
	struct UGobiLocalPlayer* GobiLocalPlayer; // 0xe0(0x08)
	struct AGobiCharacter* TargetCharacter; // 0xe8(0x08)
	bool bListenForPawnChanges; // 0xf0(0x01)
	bool bAllowAllTRSEvents; // 0xf1(0x01)
	char pad_F2[0x6]; // 0xf2(0x06)
	struct FMulticastInlineDelegate OnExtraInfo; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnShowWaypoint; // 0x108(0x10)
	struct FMulticastInlineDelegate OnSetWaypointText; // 0x118(0x10)
	enum class EGobiTeam Team; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct FGameplayTagQuery LocalPlayerTags; // 0x130(0x48)
	struct FGameplayTagQuery TargetTags; // 0x178(0x48)
	struct FGameplayTagQuery LocalPlayerInventoryItemTagQuery; // 0x1c0(0x48)
	struct TArray<struct UGobiGameCoachEvaluatorSet*> LocalPlayerTeachableEvalSets; // 0x208(0x10)
	struct TArray<struct UGobiGameCoachEvaluatorSet*> TargetTeachableEvalSets; // 0x218(0x10)
	struct FDataTableRowHandle ActiveMissionObjective; // 0x228(0x20)
	bool bMainMenu; // 0x248(0x01)
	bool bSocialSpace; // 0x249(0x01)
	bool bPvP; // 0x24a(0x01)
	bool bCoop; // 0x24b(0x01)
	enum class EMissionDifficulty LowestCoopDifficulty; // 0x24c(0x01)
	enum class EMissionDifficulty HighestCoopDifficulty; // 0x24d(0x01)
	bool bShowDemo2020; // 0x24e(0x01)
	char pad_24F[0x1]; // 0x24f(0x01)
	struct FGameplayTagQuery TeachingSuccessLocalPlayerTags; // 0x250(0x48)
	struct FGameplayTagQuery TeachingSuccessTargetTags; // 0x298(0x48)
	struct TArray<struct UGobiGameCoachEvaluatorSet*> TeachingSuccessLocalPlayerEvalSets; // 0x2e0(0x10)
	struct TArray<struct UGobiGameCoachEvaluatorSet*> TeachingSuccessTargetEvalSets; // 0x2f0(0x10)
	struct TArray<struct FName> TeachingSuccessTRSEventNames; // 0x300(0x10)
	struct FGameplayTagQuery TeachingFailureLocalPlayerTags; // 0x310(0x48)
	struct FGameplayTagQuery TeachingFailureTargetTags; // 0x358(0x48)
	struct TArray<struct UGobiGameCoachEvaluatorSet*> TeachingFailureLocalPlayerEvalSets; // 0x3a0(0x10)
	bool bFailIfEvalSetFails; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct TArray<struct UGobiGameCoachEvaluatorSet*> TeachingFailureTargetEvalSets; // 0x3b8(0x10)
	struct UTexture2D* NotificationIcon; // 0x3c8(0x08)
	struct FText NotificationText; // 0x3d0(0x18)
	struct FText NotificationGamepadText; // 0x3e8(0x18)
	bool bNotificationOutputTTS; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct UTexture2D* WaypointIcon; // 0x408(0x08)
	struct FText WaypointTitle; // 0x410(0x18)
	struct FText WaypointText; // 0x428(0x18)
	struct UTexture2D* NameplateIcon; // 0x440(0x08)
	struct FText NameplateTitle; // 0x448(0x18)
	struct FText NameplateText; // 0x460(0x18)
	enum class EEquipmentSlot HighlightEquipSlot; // 0x478(0x01)
	bool bShowInGameOnly; // 0x479(0x01)
	bool bHideForPotentialUsableTarget; // 0x47a(0x01)
	bool bHideForAltUseTarget; // 0x47b(0x01)
	char pad_47C[0x4]; // 0x47c(0x04)
	struct UAkAudioEvent* DisplayOverrideSound; // 0x480(0x08)

	void ShowWaypoint__DelegateSignature(struct UGobiGameCoachLesson* Lesson, bool bShow); // DelegateFunction Gobi.GobiGameCoachLesson.ShowWaypoint__DelegateSignature // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.BirdsAlertedGameCoachLesson
// Size: 0x4c0 (Inherited: 0x488)
struct UBirdsAlertedGameCoachLesson : UGobiGameCoachLesson {
	float BirdTeachDuration; // 0x488(0x04)
	char pad_48C[0x34]; // 0x48c(0x34)
};

// Class Gobi.BirdSite
// Size: 0x480 (Inherited: 0x250)
struct ABirdSite : AActor {
	int32_t PerchVisibility; // 0x250(0x04)
	char pad_254[0x24]; // 0x254(0x24)
	bool bAllowHorizontalBirdMovement; // 0x278(0x01)
	bool bEnableTrigger; // 0x279(0x01)
	bool bTriggersAllBirdSites; // 0x27a(0x01)
	char pad_27B[0x5]; // 0x27b(0x05)
	struct FGamePropertyFloat ChanceToHorde; // 0x280(0x38)
	struct FGamePropertyFloat ChanceToAlert; // 0x2b8(0x38)
	bool bHordeRetriggerable; // 0x2f0(0x01)
	bool bAlertRetriggerable; // 0x2f1(0x01)
	char pad_2F2[0x6]; // 0x2f2(0x06)
	struct FGameplayTagContainer TriggerOmenTags; // 0x2f8(0x20)
	float HordeAlertDelay; // 0x318(0x04)
	int32_t MinBirdsToHordeAndAlert; // 0x31c(0x04)
	float TrackedCharactersUpdateRate; // 0x320(0x04)
	float CrouchedTriggerRadius; // 0x324(0x04)
	struct FVector2D TakeOffDistance; // 0x328(0x08)
	struct FVector2D TakeOffPitch; // 0x330(0x08)
	struct FVector2D TakeOffYaw; // 0x338(0x08)
	enum class EBirdFacing BirdFacing; // 0x340(0x01)
	bool bBirdsVisibleInInvalidCell; // 0x341(0x01)
	bool bSnapSplinePointsToGround; // 0x342(0x01)
	char pad_343[0x1]; // 0x343(0x01)
	float SnapSearchUp; // 0x344(0x04)
	float SnapSearchDown; // 0x348(0x04)
	bool AlertsTriggerAll; // 0x34c(0x01)
	char pad_34D[0x3]; // 0x34d(0x03)
	struct USplineComponent* SplineComponent; // 0x350(0x08)
	struct UAkComponent* AkComponent; // 0x358(0x08)
	struct UPingableComponent* PingableComponent; // 0x360(0x08)
	struct UBoxComponent* PingableVolume; // 0x368(0x08)
	struct FGameplayTag HordeCue; // 0x370(0x08)
	struct FVector2D HordeCueDistance; // 0x378(0x08)
	struct FVector2D HordeCueHeight; // 0x380(0x08)
	struct UAkAudioEvent* AKEIdleLoop; // 0x388(0x08)
	struct UAkAudioEvent* AKEIdleLoopStop; // 0x390(0x08)
	struct UAkAudioEvent* AKEFlyAway; // 0x398(0x08)
	float MaxDistanceSurprised; // 0x3a0(0x04)
	char pad_3A4[0x74]; // 0x3a4(0x74)
	struct ABirdSystem* BirdSystem; // 0x418(0x08)
	char pad_420[0x60]; // 0x420(0x60)

	void OnRep_PerchVisibility(); // Function Gobi.BirdSite.OnRep_PerchVisibility // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MicroManager
// Size: 0x58 (Inherited: 0x30)
struct UMicroManager : UObject {
	char pad_30[0x28]; // 0x30(0x28)
};

// Class Gobi.BirdSystemMicroManager
// Size: 0xc8 (Inherited: 0x58)
struct UBirdSystemMicroManager : UMicroManager {
	char pad_58[0x70]; // 0x58(0x70)
};

// Class Gobi.MicroManagerMod
// Size: 0x90 (Inherited: 0x88)
struct UMicroManagerMod : UGameplayMod {
	char pad_88[0x8]; // 0x88(0x08)
};

// Class Gobi.BirdSystemMod
// Size: 0xe0 (Inherited: 0x90)
struct UBirdSystemMod : UMicroManagerMod {
	struct FGamePropertyIntMod MinSystems; // 0x90(0x10)
	struct FGamePropertyIntMod MaxSystems; // 0xa0(0x10)
	char pad_B0[0x30]; // 0xb0(0x30)
};

// Class Gobi.BirdSystem
// Size: 0x408 (Inherited: 0x250)
struct ABirdSystem : AActor {
	char pad_250[0x8]; // 0x250(0x08)
	bool bBirdSystemEnabled; // 0x258(0x01)
	bool bNetworked; // 0x259(0x01)
	bool bControlledByMicroManager; // 0x25a(0x01)
	char pad_25B[0x1]; // 0x25b(0x01)
	uint32_t SupportedGameModes; // 0x25c(0x04)
	int32_t BirdCount; // 0x260(0x04)
	struct FVector2D InitialLocation; // 0x264(0x08)
	struct FVector2D HoverRadius; // 0x26c(0x08)
	int32_t CircleCount; // 0x274(0x04)
	int32_t SplinePointCount; // 0x278(0x04)
	float SplineRadius; // 0x27c(0x04)
	bool bLandSameSiteAllowed; // 0x280(0x01)
	enum class EBirdAfterInitialFlight InitialFlightOption; // 0x281(0x01)
	char pad_282[0x6]; // 0x282(0x06)
	struct TArray<struct ABird*> ActorTypes; // 0x288(0x10)
	struct TArray<struct ABirdSite*> Sites; // 0x298(0x10)
	char pad_2A8[0xa0]; // 0x2a8(0xa0)
	struct ABirdSite* StartSite; // 0x348(0x08)
	struct TArray<struct ABird*> BirdActors; // 0x350(0x10)
	struct TArray<struct USplineComponent*> Splines; // 0x360(0x10)
	struct TArray<int8_t> BirdSpawns; // 0x370(0x10)
	struct TArray<struct FBirdInfo> BirdInfos; // 0x380(0x10)
	char pad_390[0x78]; // 0x390(0x78)

	void OnRep_BirdSpawns(); // Function Gobi.BirdSystem.OnRep_BirdSpawns // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ObjectPropertyMod
// Size: 0xa8 (Inherited: 0x88)
struct UObjectPropertyMod : UGameplayMod {
	struct FName PropertyName; // 0x88(0x08)
	enum class EObjectPropertyModType ModType; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FCustomDataProviderFloat Modifier; // 0x94(0x08)
	struct FCustomDataProviderInt32 IntModifier; // 0x9c(0x08)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Gobi.BloaterExplodePropertyMod
// Size: 0xb0 (Inherited: 0xa8)
struct UBloaterExplodePropertyMod : UObjectPropertyMod {
	enum class EExplodModType Type; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class Gobi.ScenarioComponent
// Size: 0x318 (Inherited: 0xd8)
struct UScenarioComponent : UActorComponent {
	bool bInterruptable; // 0xd8(0x01)
	bool bInterrupting; // 0xd9(0x01)
	bool bCanEverSpawn; // 0xda(0x01)
	bool bWantsSoloSpawning; // 0xdb(0x01)
	bool bDisableOnComplete; // 0xdc(0x01)
	enum class EPacingPhase HeldPacingPhaseForInfiniteWaves; // 0xdd(0x01)
	bool bUseDelayBeforeSpawn; // 0xde(0x01)
	char pad_DF[0x1]; // 0xdf(0x01)
	struct TArray<struct FGameplayTag> FirstWaveCueTags; // 0xe0(0x10)
	struct TArray<struct FGameplayTag> LastWaveDoneCueTags; // 0xf0(0x10)
	struct TArray<struct FGameplayTag> NextWaveCueTags; // 0x100(0x10)
	struct FGameplayTag SpawningLocationTag; // 0x110(0x08)
	uint32_t SupportedGameModes; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FTopLevelSpawnDeckOverrides AISDGTopLevelSpawnDeckOverrides; // 0x120(0x48)
	char pad_168[0x20]; // 0x168(0x20)
	struct UScenarioEvaluatorSet* ActivationConditions; // 0x188(0x08)
	struct UScenarioEvaluatorSet* CompletionConditions; // 0x190(0x08)
	struct UScenarioEvaluatorSet* FailureConditions; // 0x198(0x08)
	float FailureTime; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct UScenarioHeroEvaluatorSet* HeroEvaluators; // 0x1a8(0x08)
	struct UAISpawnDeckGenerator* AISpawnDeckGenerator; // 0x1b0(0x08)
	struct UAISpawnDeck* AISpawnDeck; // 0x1b8(0x08)
	char pad_1C0[0x8]; // 0x1c0(0x08)
	struct FGameplayTagContainer AISpawnDeckOverrideTags; // 0x1c8(0x20)
	struct UAISpawnDeckGenerator* OverrideAISpawnDeckGenerator; // 0x1e8(0x08)
	struct FRecycleConfigOverride InitialRecycleConfigOverride; // 0x1f0(0x28)
	struct FRecycleConfigOverride RecycleConfigOverride; // 0x218(0x28)
	struct TArray<struct AActor*> UsableActors; // 0x240(0x10)
	char pad_250[0x8]; // 0x250(0x08)
	struct TArray<struct AAISmartActorBase*> AISmartActors; // 0x258(0x10)
	enum class EScenarioState State; // 0x268(0x01)
	char pad_269[0x37]; // 0x269(0x37)
	struct TArray<struct FScenarioHeroDebugInfo> HeroDebugInfos; // 0x2a0(0x10)
	struct FName LastActiveSpawnRule; // 0x2b0(0x08)
	float SpawnerSuccessRate; // 0x2b8(0x04)
	char pad_2BC[0x2]; // 0x2bc(0x02)
	bool bDeckCleanup; // 0x2be(0x01)
	char pad_2BF[0x1]; // 0x2bf(0x01)
	float MaxDeckCleanupDuration; // 0x2c0(0x04)
	float DeckCleanupHeroAdvanceRange; // 0x2c4(0x04)
	char pad_2C8[0x50]; // 0x2c8(0x50)

	bool UsePossibleScenarioData(struct FGameplayTag ScenarioTag, struct FGameplayTag EqsTag); // Function Gobi.ScenarioComponent.UsePossibleScenarioData // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.BlueprintableScenarioComponent
// Size: 0x328 (Inherited: 0x318)
struct UBlueprintableScenarioComponent : UScenarioComponent {
	char pad_318[0x10]; // 0x318(0x10)

	void BPEvent_OnSpawnDeckGeneration(int32_t CurrentWave, int32_t TotalWaves); // Function Gobi.BlueprintableScenarioComponent.BPEvent_OnSpawnDeckGeneration // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.BoneMapComponent
// Size: 0x128 (Inherited: 0xd8)
struct UBoneMapComponent : UActorComponent {
	struct TMap<struct FGameplayTag, struct FBoneCollection> BoneMap; // 0xd8(0x50)
};

// Class Gobi.BoneVisibilityTrait
// Size: 0x40 (Inherited: 0x30)
struct UBoneVisibilityTrait : UTrait {
	struct TArray<struct FBoneVisibilityMeshConfig> MeshConfigs; // 0x30(0x10)
};

// Class Gobi.BotAIScriptingComponent
// Size: 0x6b0 (Inherited: 0x470)
struct UBotAIScriptingComponent : UAIScriptingComponent {
	struct FBlackboardKeySelector TeammateTargetBBKey; // 0x470(0x28)
	struct FBlackboardKeySelector TeammateDistBBKey; // 0x498(0x28)
	struct FBlackboardKeySelector ShouldTeleportBBKey; // 0x4c0(0x28)
	struct FBlackboardKeySelector WanderFollowTeammateBBKey; // 0x4e8(0x28)
	struct FBlackboardKeySelector AllowMeleeNavBBKey; // 0x510(0x28)
	struct FBlackboardKeySelector GoToLocationBBKey; // 0x538(0x28)
	struct FBlackboardKeySelector InteractTargetBBKey; // 0x560(0x28)
	char pad_588[0x8]; // 0x588(0x08)
	struct FBlackboardKeySelector InteractTargetNavLocBBKey; // 0x590(0x28)
	struct FBlackboardKeySelector DesiredSelfItemPickupBBKey; // 0x5b8(0x28)
	struct FBlackboardKeySelector DesiredTeamItemPickupBBKey; // 0x5e0(0x28)
	struct FBlackboardKeySelector DesiredUsableBBKey; // 0x608(0x28)
	struct FBlackboardKeySelector ItemUseBBKey; // 0x630(0x28)
	struct FBlackboardKeySelector ItemUseNavActorBBKey; // 0x658(0x28)
	struct FBlackboardKeySelector ItemUseNavLocBBKey; // 0x680(0x28)
	char pad_6A8[0x8]; // 0x6a8(0x08)

	void ValidateCurInteractTarget(); // Function Gobi.BotAIScriptingComponent.ValidateCurInteractTarget // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiAIController
// Size: 0x390 (Inherited: 0x340)
struct AGobiAIController : AAIController {
	char pad_340[0x8]; // 0x340(0x08)
	struct UBehaviorTree* BTAsset; // 0x348(0x08)
	char pad_350[0x14]; // 0x350(0x14)
	struct FDMapAISpawnData DMapSpawnData; // 0x364(0x0c)
	struct FMulticastInlineDelegate OnDMapSpawnDistanceCalculated; // 0x370(0x10)
	bool bIsClientAI; // 0x380(0x01)
	char pad_381[0xf]; // 0x381(0x0f)

	void RemoveSenseMod(struct UAISense* SenseClass, float ModAdjustment); // Function Gobi.GobiAIController.RemoveSenseMod // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.BotController
// Size: 0x1198 (Inherited: 0x390)
struct ABotController : AGobiAIController {
	char pad_390[0x8]; // 0x390(0x08)
	struct FMulticastInlineDelegate OnGoToLocReached; // 0x398(0x10)
	struct FMulticastInlineDelegate OnGoToLocSeqCompleted; // 0x3a8(0x10)
	struct FMulticastInlineDelegate OnBotConfigChangedEvent; // 0x3b8(0x10)
	struct FMulticastInlineDelegate OnBotSwarmedEvent; // 0x3c8(0x10)
	struct FMulticastInlineDelegate OnCombatEvent; // 0x3d8(0x10)
	float CombatExitDelay; // 0x3e8(0x04)
	char pad_3EC[0x4]; // 0x3ec(0x04)
	struct FTetherSystem TetherSystem; // 0x3f0(0x118)
	struct FBotPingSystem PingSystem; // 0x508(0x50)
	struct FBotThreatList ThreatList; // 0x558(0x50)
	char pad_5A8[0x8]; // 0x5a8(0x08)
	struct AGobiCharacter* OwnerGobiChar; // 0x5b0(0x08)
	struct AHeroCharacter* OwnerHeroChar; // 0x5b8(0x08)
	struct FGameplayTag BotTypeBotTag; // 0x5c0(0x08)
	struct FGameplayTag BotTypeNPCTag; // 0x5c8(0x08)
	struct FGameplayTag BotBehaviorNoCombatTag; // 0x5d0(0x08)
	struct FGameplayTag BotBehaviorNoWanderTag; // 0x5d8(0x08)
	struct FGameplayTagContainer AttackTags; // 0x5e0(0x20)
	float ThreatDistScore; // 0x600(0x04)
	float EyePosHeight; // 0x604(0x04)
	struct FGameplayTagContainer DbgDisableActionsTags; // 0x608(0x20)
	struct FGameplayTagContainer DbgDisableAttacksTags; // 0x628(0x20)
	struct FGameplayTagContainer DbgDisableMovementTags; // 0x648(0x20)
	char pad_668[0x8]; // 0x668(0x08)
	struct FGameplayTagContainer DisableMovementTags; // 0x670(0x20)
	struct UEnvQuery* Wander_EQS; // 0x690(0x08)
	struct UEnvQuery* ThreatEQS; // 0x698(0x08)
	struct UEnvQuery* AttackLocEQS; // 0x6a0(0x08)
	struct UAIDistanceRanges* AttackDistanceRanges; // 0x6a8(0x08)
	struct FGameplayTag BotInteractIgnoreTag; // 0x6b0(0x08)
	struct FGameplayTag BotInteractIgnoreAlwaysTag; // 0x6b8(0x08)
	struct FGameplayTag BotItemPickupLimitTag; // 0x6c0(0x08)
	struct FGameplayTagQuery TargetMeleeOnlyTagQuery; // 0x6c8(0x48)
	struct FGameplayTagQuery TargetMeleePreferredTagQuery; // 0x710(0x48)
	struct FGameplayTagQuery TargetRangedOnlyTagQuery; // 0x758(0x48)
	float ItemPickupSearchDist; // 0x7a0(0x04)
	char pad_7A4[0x4]; // 0x7a4(0x04)
	struct FGameplayTagQuery EnvironSenseAllowedTagQuery; // 0x7a8(0x48)
	struct FGameplayTagQuery ThreatPingTagQuery; // 0x7f0(0x48)
	char pad_838[0xf8]; // 0x838(0xf8)
	float UsableSearchDist; // 0x930(0x04)
	float InteractNavToDist; // 0x934(0x04)
	float InteractActivateDist; // 0x938(0x04)
	float TeammateFollowTetherDist; // 0x93c(0x04)
	char pad_940[0x10]; // 0x940(0x10)
	struct UBotPlaystyleConfigCollection* DefaultBotPlaystyleConfigSet; // 0x950(0x08)
	char pad_958[0x6b0]; // 0x958(0x6b0)
	struct UPlayerStatsComponent* StatsComponent; // 0x1008(0x08)
	char pad_1010[0x7f]; // 0x1010(0x7f)
	bool bIsCombatAllowed; // 0x108f(0x01)
	bool bIsWanderAllowed; // 0x1090(0x01)
	bool bReturnToCombatStartLoc; // 0x1091(0x01)
	bool bAutoHideWeapons; // 0x1092(0x01)
	char pad_1093[0x105]; // 0x1093(0x105)

	void SetWanderAllowed(struct AGobiCharacter* BotChar, bool bIsAllowed); // Function Gobi.BotController.SetWanderAllowed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiGameModeBase
// Size: 0x438 (Inherited: 0x338)
struct AGobiGameModeBase : AGameMode {
	char pad_338[0x8]; // 0x338(0x08)
	struct FMulticastInlineDelegate OnWaitingPostMatch; // 0x340(0x10)
	enum class EGameModeType GameModeType; // 0x350(0x01)
	bool bSupportsBots; // 0x351(0x01)
	char pad_352[0x2]; // 0x352(0x02)
	float WaitToResetMatchDuration; // 0x354(0x04)
	float WaitToStartAfterResetMatchDuration; // 0x358(0x04)
	float ResettingMatchTimeoutDuration; // 0x35c(0x04)
	float ResetCompletedMatchStateDuration; // 0x360(0x04)
	float CreditsWaitDuration; // 0x364(0x04)
	struct APlayerSpawnManagerBase* PlayerSpawnManager; // 0x368(0x08)
	struct UGameplayTagsComponent* GameplayTagsComponent; // 0x370(0x08)
	struct ALevelStreamingCoordinator* LevelStreamingCoordinator; // 0x378(0x08)
	struct ULootData* LootData; // 0x380(0x08)
	struct APlayerSpawnManagerBase* PlayerSpawnManagerClass; // 0x388(0x08)
	struct AActor* AudioControllerClass; // 0x390(0x08)
	struct AActor* AudioController; // 0x398(0x08)
	struct UGameDirector* GameDirectorClass; // 0x3a0(0x08)
	struct UGameDirector* GameDirector; // 0x3a8(0x08)
	struct ABotController* BotControllerClass; // 0x3b0(0x08)
	struct ALevelResetCoordinator* LevelResetCoordinator; // 0x3b8(0x08)
	struct ALullSystem* LullSystem; // 0x3c0(0x08)
	char pad_3C8[0x8]; // 0x3c8(0x08)
	float WaitForBackfillDuration; // 0x3d0(0x04)
	float WaitForReadyPlayersDuration; // 0x3d4(0x04)
	char pad_3D8[0x8]; // 0x3d8(0x08)
	struct UWaypointManager* WaypointManager; // 0x3e0(0x08)
	char pad_3E8[0x50]; // 0x3e8(0x50)

	void SetPersistentAIData(struct FName Name, float Value); // Function Gobi.GobiGameModeBase.SetPersistentAIData // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HeroGameMode
// Size: 0x4e0 (Inherited: 0x438)
struct AHeroGameMode : AGobiGameModeBase {
	struct FName SpawnTagOverride; // 0x438(0x08)
	float PostMatchWaitDuration; // 0x440(0x04)
	float TransitionWaitDuration; // 0x444(0x04)
	char pad_448[0x44]; // 0x448(0x44)
	struct FName DefaultSpawnTag; // 0x48c(0x08)
	char pad_494[0x4]; // 0x494(0x04)
	struct FGameplayTagQuery ExcludeCharactersFromGameDirectorSpawning; // 0x498(0x48)
};

// Class Gobi.MissionGameMode
// Size: 0x520 (Inherited: 0x4e0)
struct AMissionGameMode : AHeroGameMode {
	char pad_4E0[0x10]; // 0x4e0(0x10)
	bool bHeroRescueRespawnEnabled; // 0x4f0(0x01)
	char pad_4F1[0x3]; // 0x4f1(0x03)
	float GoldenPathTraveledDistancePctForRespawn; // 0x4f4(0x04)
	float RespawnDelayTime; // 0x4f8(0x04)
	float NoHumanPresenceFailTimerDelaySeconds; // 0x4fc(0x04)
	float IncapableHeroFailureDelay; // 0x500(0x04)
	bool bHeroTestNonCapableGrappleTags; // 0x504(0x01)
	char pad_505[0x1b]; // 0x505(0x1b)

	void RequestRescueRespawns(struct UObject* WorldContextObj, struct UEnvQuery* EQSTest); // Function Gobi.MissionGameMode.RequestRescueRespawns // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.BotPlaythroughGameMode
// Size: 0x570 (Inherited: 0x520)
struct ABotPlaythroughGameMode : AMissionGameMode {
	char pad_520[0x18]; // 0x520(0x18)
	struct UMapSpatialInfoComponent* MapSpatialInfoComponent; // 0x538(0x08)
	struct APlayerController* PlayerCommandController; // 0x540(0x08)
	char pad_548[0x28]; // 0x548(0x28)
};

// Class Gobi.BotPlaystyleConfigCollection
// Size: 0x48 (Inherited: 0x38)
struct UBotPlaystyleConfigCollection : UDataAsset {
	struct TArray<struct FBotPlaystyleConfig> Playstyles; // 0x38(0x10)
};

// Class Gobi.BreakableComponent
// Size: 0x460 (Inherited: 0xd8)
struct UBreakableComponent : UActorComponent {
	struct FCollisionProfileName PristineHiddenCollisionProfile; // 0xd8(0x08)
	struct FCollisionProfileName DeformableVisibleCollisionProfile; // 0xe0(0x08)
	struct FCollisionProfileName BreakableVisibleCollisionProfile; // 0xe8(0x08)
	struct FCollisionProfileName BreakableVisibleIntercollisionProfile; // 0xf0(0x08)
	float BonesToHealth; // 0xf8(0x04)
	float BoneHealthVariance; // 0xfc(0x04)
	struct TArray<struct FName> AnchorBones; // 0x100(0x10)
	struct TArray<struct FName> UncrackableBones; // 0x110(0x10)
	struct TArray<struct FName> UnbreakableBones; // 0x120(0x10)
	struct TArray<struct FBonePair> CustomNeighbors; // 0x130(0x10)
	struct TArray<struct FBonePair> CustomNotNeighbors; // 0x140(0x10)
	struct FVector2D CrackDepth; // 0x150(0x08)
	float LinearImpulseScale; // 0x158(0x04)
	float AngularImpulseScale; // 0x15c(0x04)
	float DestroyedImpulseScale; // 0x160(0x04)
	float DetachableLinearImpulseScale; // 0x164(0x04)
	float DetachableAngularImpulseScale; // 0x168(0x04)
	float MaxSimulationTime; // 0x16c(0x04)
	struct FVector2D IntercollisionDelay; // 0x170(0x08)
	struct UCurveFloat* DoorShakeCurve; // 0x178(0x08)
	float DoorShakeDistance; // 0x180(0x04)
	float DoorShakeHalfAngle; // 0x184(0x04)
	struct USceneComponent* Hinge; // 0x188(0x08)
	struct UHealthComponent* HealthComponent; // 0x190(0x08)
	struct TArray<struct UMeshComponent*> PristineMeshes; // 0x198(0x10)
	struct UPoseableMeshComponent* DeformableMesh; // 0x1a8(0x08)
	struct UPoseableMeshComponent* BreakableMesh; // 0x1b0(0x08)
	struct USkinnedDamageTextureComponent* SkinnedDamage; // 0x1b8(0x08)
	struct TMap<struct USceneComponent*, struct FName> AttachmentBoneMap; // 0x1c0(0x50)
	struct TArray<struct FDetachableInfo> Detachables; // 0x210(0x10)
	char pad_220[0xa0]; // 0x220(0xa0)
	struct FVector NetHitDir; // 0x2c0(0x0c)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct TArray<int32_t> NetBonesCracked; // 0x2d0(0x10)
	struct TArray<int32_t> NetBonesDestroyed; // 0x2e0(0x10)
	struct TArray<struct FHitInfo> NetDeformations; // 0x2f0(0x10)
	struct TArray<struct FBoneInfo> BoneInfos; // 0x300(0x10)
	char pad_310[0x150]; // 0x310(0x150)

	void RefreshData(); // Function Gobi.BreakableComponent.RefreshData // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.DamageFilter
// Size: 0x40 (Inherited: 0x30)
struct UDamageFilter : UObject {
	struct TArray<struct FDamageTypeDamageMod> DamageTypeMods; // 0x30(0x10)
};

// Class Gobi.BreakableDamageFilter
// Size: 0x40 (Inherited: 0x40)
struct UBreakableDamageFilter : UDamageFilter {
};

// Class Gobi.BrightnessLevelScriptActor
// Size: 0x260 (Inherited: 0x258)
struct ABrightnessLevelScriptActor : ALevelScriptActor {
	struct ACameraActor* Camera; // 0x258(0x08)
};

// Class Gobi.BrightnessOptionsUserWidget
// Size: 0x508 (Inherited: 0x498)
struct UBrightnessOptionsUserWidget : UFTUEOptionsPanelUserWidget {
	char pad_498[0x70]; // 0x498(0x70)

	void OnSaturationChanged(struct UGobiUserWidget* Widget); // Function Gobi.BrightnessOptionsUserWidget.OnSaturationChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.BroadcastMessageManager
// Size: 0x70 (Inherited: 0x30)
struct UBroadcastMessageManager : UObject {
	char pad_30[0x40]; // 0x30(0x40)
};

// Class Gobi.ZombieAnimInstance
// Size: 0x7f0 (Inherited: 0x7b0)
struct UZombieAnimInstance : UAnimInstance3P {
	struct FZombieAnimState ZombieAnimState; // 0x7b0(0x04)
	float AimSpeed; // 0x7b4(0x04)
	struct FGobiAnimationCurveData AttackAimAlphaCurve; // 0x7b8(0x10)
	float AttackAimAlpha; // 0x7c8(0x04)
	float AttackAimCounterYaw; // 0x7cc(0x04)
	float LocoCounterYaw; // 0x7d0(0x04)
	char pad_7D4[0x1c]; // 0x7d4(0x1c)
};

// Class Gobi.BruteAnimInstance
// Size: 0x800 (Inherited: 0x7f0)
struct UBruteAnimInstance : UZombieAnimInstance {
	struct FBruteAnimState BruteAnimState; // 0x7e8(0x10)
};

// Class Gobi.BruteComponent
// Size: 0x398 (Inherited: 0xd8)
struct UBruteComponent : UActorComponent {
	char pad_D8[0x18]; // 0xd8(0x18)
	struct FGameplayTag BruteStateTags[0x5]; // 0xf0(0x28)
	float MeleeProbability; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct UBlackboardData* BlackboardAsset; // 0x120(0x08)
	struct FBlackboardKeySelector EnemyBBKey; // 0x128(0x28)
	struct FGameplayTagQuery MeleeActionTagQuery; // 0x150(0x48)
	struct FGameplayTagQuery TumorTossActionTagQuery; // 0x198(0x48)
	int32_t MinTargetAttacksBeforeTargetSwitch; // 0x1e0(0x04)
	float MinTargetDistanceDiffBeforeTargetSwitch; // 0x1e4(0x04)
	char pad_1E8[0x140]; // 0x1e8(0x140)
	struct AGobiCharacter* BruteOwner; // 0x328(0x08)
	enum class EBruteState CurrentBruteState; // 0x330(0x01)
	enum class EBruteState PreviousBruteState; // 0x331(0x01)
	char pad_332[0x66]; // 0x332(0x66)

	void OnRep_CurrentBruteState(enum class EBruteState OldState); // Function Gobi.BruteComponent.OnRep_CurrentBruteState // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.BTComposite_SimpleParallelEx
// Size: 0xa0 (Inherited: 0x98)
struct UBTComposite_SimpleParallelEx : UBTCompositeNode {
	enum class EBTParallelExMode ParallelMode; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// Class Gobi.BTDecorator_CanTriggerAction
// Size: 0x138 (Inherited: 0x70)
struct UBTDecorator_CanTriggerAction : UBTDecorator {
	struct FGameplayTagQuery ActionTagQuery; // 0x70(0x48)
	struct FAIDataProviderGameplayTagQueryContainerValue ActionTags; // 0xb8(0x78)
	bool bTestIsEnabledForActor; // 0x130(0x01)
	bool bDisableOnSuccess; // 0x131(0x01)
	char pad_132[0x2]; // 0x132(0x02)
	float FlowControlDelay; // 0x134(0x04)
};

// Class Gobi.BTDecorator_CheckDifficulty
// Size: 0x78 (Inherited: 0x70)
struct UBTDecorator_CheckDifficulty : UBTDecorator {
	struct FDifficultyBool IsAllowed; // 0x70(0x05)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class Gobi.BTDecorator_CheckEnemyDamageAttackable
// Size: 0x1c8 (Inherited: 0x70)
struct UBTDecorator_CheckEnemyDamageAttackable : UBTDecorator {
	struct FBlackboardKeySelector EnemyBBKey; // 0x70(0x28)
	bool bOwnerDamageOnly; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FAIDataProviderIntValue MaxAttackFailures; // 0xa0(0x38)
	bool bUseAttackTime; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FAIDataProviderFloatValue MaxTimeSinceAttackFailure; // 0xe0(0x38)
	bool bUseAttackDistance; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct FAIDataProviderBoolValue UseAttackLocation; // 0x120(0x38)
	struct FAIDataProviderFloatValue MinDistanceSinceAttackFailure; // 0x158(0x38)
	struct FAIDataProviderFloatValue MaxDistance; // 0x190(0x38)
};

// Class Gobi.BTDecorator_CheckGameplayTagsOnActorFlowControl
// Size: 0x150 (Inherited: 0x148)
struct UBTDecorator_CheckGameplayTagsOnActorFlowControl : UBTDecorator_CheckGameplayTagsOnActor {
	enum class EBTGameplayTagRestart NotifyObserver; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
};

// Class Gobi.BTDecorator_ClearBlackboardKey
// Size: 0xa0 (Inherited: 0x98)
struct UBTDecorator_ClearBlackboardKey : UBTDecorator_BlackboardBase {
	char bOnlyClearOnSuccess : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// Class Gobi.BTDecorator_ConditionClearBBKey
// Size: 0xd0 (Inherited: 0xc8)
struct UBTDecorator_ConditionClearBBKey : UBTDecorator_Blackboard {
	char pad_C8[0x8]; // 0xc8(0x08)
};

// Class Gobi.BTDecorator_CopyLocationFromBBKey
// Size: 0xc0 (Inherited: 0x70)
struct UBTDecorator_CopyLocationFromBBKey : UBTDecorator {
	struct FBlackboardKeySelector BlackboardKey; // 0x70(0x28)
	struct FBlackboardKeySelector BlackboardKeyToCopy; // 0x98(0x28)
};

// Class Gobi.BTDecorator_DataBindingIsValid
// Size: 0xa8 (Inherited: 0x70)
struct UBTDecorator_DataBindingIsValid : UBTDecorator {
	struct FAIDataProviderUObjectValue UObjectDataProvider; // 0x70(0x38)
};

// Class Gobi.BTDecorator_HasBlackboardTimeoutExpired
// Size: 0xa0 (Inherited: 0x98)
struct UBTDecorator_HasBlackboardTimeoutExpired : UBTDecorator_BlackboardBase {
	float Offset; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class Gobi.BTDecorator_IsActionEnabledForActor
// Size: 0x138 (Inherited: 0x70)
struct UBTDecorator_IsActionEnabledForActor : UBTDecorator {
	struct FGameplayTagQuery ActionTagQuery; // 0x70(0x48)
	struct FAIDataProviderGameplayTagQueryContainerValue ActionTags; // 0xb8(0x78)
	bool bDisableOnSuccess; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	float FlowControlDelay; // 0x134(0x04)
};

// Class Gobi.BTDecorator_IsInPacingPhase
// Size: 0x78 (Inherited: 0x70)
struct UBTDecorator_IsInPacingPhase : UBTDecorator {
	enum class EPacingPhase PacingPhase; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class Gobi.BTDecorator_IsInTeamRange
// Size: 0x98 (Inherited: 0x98)
struct UBTDecorator_IsInTeamRange : UBTDecorator_BlackboardBase {
};

// Class Gobi.BTDecorator_KeepFocus
// Size: 0xa0 (Inherited: 0x70)
struct UBTDecorator_KeepFocus : UBTDecorator {
	struct FBlackboardKeySelector FocusTargetKey; // 0x70(0x28)
	char FocusPriority; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// Class Gobi.BTDecorator_NavRaycast
// Size: 0x98 (Inherited: 0x70)
struct UBTDecorator_NavRaycast : UBTDecorator {
	struct FBlackboardKeySelector TargetBBKey; // 0x70(0x28)
};

// Class Gobi.BTDecorator_SetBlackboardKey
// Size: 0xf0 (Inherited: 0x70)
struct UBTDecorator_SetBlackboardKey : UBTDecorator {
	struct FBlackboardKeySet KeySet; // 0x70(0x80)
};

// Class Gobi.BTService_ActorLocation
// Size: 0xc8 (Inherited: 0x78)
struct UBTService_ActorLocation : UBTService {
	struct FBlackboardKeySelector ActorBBKey; // 0x78(0x28)
	struct FBlackboardKeySelector LocationBBKey; // 0xa0(0x28)
};

// Class Gobi.BTService_Angle
// Size: 0xe0 (Inherited: 0xa0)
struct UBTService_Angle : UBTService_BlackboardBase {
	struct FBlackboardKeySelector TargetBlackboardKey; // 0xa0(0x28)
	struct UEnum* AngleLabelEnum; // 0xc8(0x08)
	struct TArray<struct FAngleRange> AngleRanges; // 0xd0(0x10)
};

// Class Gobi.BTService_BlackboardValues
// Size: 0x88 (Inherited: 0x78)
struct UBTService_BlackboardValues : UBTService {
	struct TArray<struct FBlackBoardValue> Values; // 0x78(0x10)
};

// Class Gobi.BTService_CanTriggerAction
// Size: 0x90 (Inherited: 0x78)
struct UBTService_CanTriggerAction : UBTService {
	struct TArray<struct FActionToCheck> ActionsToCheck; // 0x78(0x10)
	enum class EGameplayActionMatchingTagType MatchingTagType; // 0x88(0x01)
	bool bTestIsEnabledForActor; // 0x89(0x01)
	char pad_8A[0x6]; // 0x8a(0x06)
};

// Class Gobi.BTService_CanUseSmartActor
// Size: 0xc8 (Inherited: 0xa0)
struct UBTService_CanUseSmartActor : UBTService_BlackboardBase {
	struct FBlackboardKeySelector SmartActorBlackboardKey; // 0xa0(0x28)
};

// Class Gobi.BTService_GobiRunEQS
// Size: 0x190 (Inherited: 0x138)
struct UBTService_GobiRunEQS : UBTService_RunEQS {
	bool bRequiresBlackboardCondition; // 0x138(0x01)
	enum class EBasicKeyOperation BlackboardCondition; // 0x139(0x01)
	char pad_13A[0x6]; // 0x13a(0x06)
	struct FGameplayTagQuery TagRequirements; // 0x140(0x48)
	bool bAllowsAnyObject; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
};

// Class Gobi.BTService_ChaserRunEQS
// Size: 0x1b8 (Inherited: 0x190)
struct UBTService_ChaserRunEQS : UBTService_GobiRunEQS {
	struct FBlackboardKeySelector WallClingBlackboardKey; // 0x190(0x28)
};

// Class Gobi.BTService_ClosestActorOfClass
// Size: 0xa8 (Inherited: 0xa0)
struct UBTService_ClosestActorOfClass : UBTService_BlackboardBase {
	struct AActor* SearchedActorClass; // 0xa0(0x08)
};

// Class Gobi.BTService_Damage
// Size: 0xc8 (Inherited: 0x78)
struct UBTService_Damage : UBTService {
	struct FBlackboardKeySelector DamageCounterBBKey; // 0x78(0x28)
	struct FGameplayTagContainer DamageTags; // 0xa0(0x20)
	enum class EGameplayTagContainerMatchType DamageTagMatchType; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class Gobi.BTService_Distance
// Size: 0x100 (Inherited: 0xa0)
struct UBTService_Distance : UBTService_BlackboardBase {
	struct FBlackboardKeySelector TargetPositionBlackboardKey; // 0xa0(0x28)
	struct FAIDataProviderUObjectValue DistanceRanges; // 0xc8(0x38)
};

// Class Gobi.BTService_EnvironSensor
// Size: 0x138 (Inherited: 0x78)
struct UBTService_EnvironSensor : UBTService {
	struct FGameplayTagQuery AllowSensorTagQuery; // 0x78(0x48)
	struct FAIDataProviderGameplayTagQueryContainerValue ThreatPingTagQueryDP; // 0xc0(0x78)
};

// Class Gobi.BTService_GameplayTags
// Size: 0x88 (Inherited: 0x78)
struct UBTService_GameplayTags : UBTService {
	struct TArray<struct FGameplayTagChange> Values; // 0x78(0x10)
};

// Class Gobi.BTService_Hag
// Size: 0xc8 (Inherited: 0x78)
struct UBTService_Hag : UBTService {
	struct FBlackboardKeySelector HagStateBBKey; // 0x78(0x28)
	struct FBlackboardKeySelector PrevHagStateBBKey; // 0xa0(0x28)
};

// Class Gobi.BTService_Health
// Size: 0xb8 (Inherited: 0x78)
struct UBTService_Health : UBTService {
	struct FBlackboardKeySelector HealthBBKey; // 0x78(0x28)
	struct UEnum* HealthLabelEnum; // 0xa0(0x08)
	struct TArray<struct FHealthRange> HealthRanges; // 0xa8(0x10)
};

// Class Gobi.BTService_Horde
// Size: 0xe8 (Inherited: 0x78)
struct UBTService_Horde : UBTService {
	struct FBlackboardKeySelector AlertLocationBBKey; // 0x78(0x28)
	struct FGameplayTagQuery HordeTagQuery; // 0xa0(0x48)
};

// Class Gobi.BTService_LifeState
// Size: 0xf0 (Inherited: 0x78)
struct UBTService_LifeState : UBTService {
	struct FBlackboardKeySelector LifeStateBBKey; // 0x78(0x28)
	struct TMap<struct FGameplayTag, enum class ELifeState> TagToEnumMap; // 0xa0(0x50)
};

// Class Gobi.BTService_LineOfSight
// Size: 0xc8 (Inherited: 0xa0)
struct UBTService_LineOfSight : UBTService_BlackboardBase {
	struct FBlackboardKeySelector TargetBlackboardKey; // 0xa0(0x28)
};

// Class Gobi.BTService_OutsideOfSneakVolume
// Size: 0xc0 (Inherited: 0xa0)
struct UBTService_OutsideOfSneakVolume : UBTService_BlackboardBase {
	struct FGameplayTagContainer ApplyTags; // 0xa0(0x20)
};

// Class Gobi.BTService_RegisterAttackAttempt
// Size: 0xa8 (Inherited: 0x78)
struct UBTService_RegisterAttackAttempt : UBTService {
	enum class ETimeframe Timeframe; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FBlackboardKeySelector EnemyBBKey; // 0x80(0x28)
};

// Class Gobi.BTService_ShouldHorde
// Size: 0x110 (Inherited: 0x78)
struct UBTService_ShouldHorde : UBTService {
	struct FBlackboardKeySelector AlertGenerationBBKey; // 0x78(0x28)
	struct FAIDataProviderFloatValue HeroLOSThreshold; // 0xa0(0x38)
	struct FAIDataProviderIntValue AggroBubble; // 0xd8(0x38)
};

// Class Gobi.BTService_SmartActor
// Size: 0x180 (Inherited: 0x78)
struct UBTService_SmartActor : UBTService {
	struct FBlackboardKeySelector SmartActorBBKey; // 0x78(0x28)
	struct FGameplayTagQuery RequiredSmartActorTags; // 0xa0(0x48)
	struct FAIDataProviderGameplayTagContainerValue BlockingSmartActorTags; // 0xe8(0x50)
	struct FAIDataProviderFloatValue MaxSearchDistance; // 0x138(0x38)
	char pad_170[0x10]; // 0x170(0x10)
};

// Class Gobi.BTService_TacticalSensor
// Size: 0xc0 (Inherited: 0x78)
struct UBTService_TacticalSensor : UBTService {
	struct FGameplayTagQuery AllowSensorTagQuery; // 0x78(0x48)
};

// Class Gobi.BTService_TeamSensor
// Size: 0x1a8 (Inherited: 0x78)
struct UBTService_TeamSensor : UBTService {
	struct FGameplayTagQuery AllowSensorTagQuery; // 0x78(0x48)
	struct FGameplayTagQuery TeammateTagQuery; // 0xc0(0x48)
	struct FBlackboardKeySelector TeammateTargetBBKey; // 0x108(0x28)
	struct FBlackboardKeySelector TeammateDistBBKey; // 0x130(0x28)
	struct FBlackboardKeySelector ShouldTeamTeleportBBKey; // 0x158(0x28)
	struct FBlackboardKeySelector TeamCentroidBBKey; // 0x180(0x28)
};

// Class Gobi.BTTask_NavigateTo
// Size: 0x168 (Inherited: 0xa0)
struct UBTTask_NavigateTo : UBTTask_BlackboardBase {
	struct FAIDataProviderFloatValue AcceptableRadius; // 0xa0(0x38)
	struct UNavigationQueryFilter* FilterClass; // 0xd8(0x08)
	float ObservedBlackboardValueTolerance; // 0xe0(0x04)
	char bAllowStrafe : 1; // 0xe4(0x01)
	char bAllowPartialPath : 1; // 0xe4(0x01)
	char bStopOnOverlap : 1; // 0xe4(0x01)
	char bResetVelocityOnAbort : 1; // 0xe4(0x01)
	char bObserveBlackboardValue : 1; // 0xe4(0x01)
	char pad_E4_5 : 3; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	bool bFailOnBetterClaim; // 0xe8(0x01)
	bool bPursueTarget; // 0xe9(0x01)
	char pad_EA[0x2]; // 0xea(0x02)
	struct FVector2D PursueTargetUpdateRate; // 0xec(0x08)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FAIDataProviderUObjectValue SteeringBehaviorDataProvider; // 0xf8(0x38)
	struct FAIDataProviderUObjectValue SteeringControlDataProvider; // 0x130(0x38)
};

// Class Gobi.BTTask_RegisterAttackAttempt
// Size: 0xa0 (Inherited: 0x78)
struct UBTTask_RegisterAttackAttempt : UBTTaskNode {
	struct FBlackboardKeySelector EnemyBBKey; // 0x78(0x28)
};

// Class Gobi.BTTask_SetBlackboardTime
// Size: 0xa8 (Inherited: 0xa0)
struct UBTTask_SetBlackboardTime : UBTTask_BlackboardBase {
	float Offset; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Gobi.BTTask_SetBruteState
// Size: 0x80 (Inherited: 0x78)
struct UBTTask_SetBruteState : UBTTaskNode {
	enum class EBruteState BruteState; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class Gobi.BTTask_SetHagState
// Size: 0x80 (Inherited: 0x78)
struct UBTTask_SetHagState : UBTTaskNode {
	enum class EHagState HagState; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class Gobi.BTTask_TriggerAction
// Size: 0x148 (Inherited: 0x78)
struct UBTTask_TriggerAction : UBTTaskNode {
	struct FAIDataProviderGameplayTagContainerValue GameplayTags; // 0x78(0x50)
	enum class EGameplayActionMatchingTagType MatchingTagType; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FAIDataProviderGameplayTagQueryContainerValue MatchingTagQuery; // 0xd0(0x78)
};

// Class Gobi.BTTask_TriggerHorde
// Size: 0x88 (Inherited: 0x78)
struct UBTTask_TriggerHorde : UBTTaskNode {
	struct FString TriggerReason; // 0x78(0x10)
};

// Class Gobi.BTTask_UseSmartActor
// Size: 0xa0 (Inherited: 0x78)
struct UBTTask_UseSmartActor : UBTTaskNode {
	struct FBlackboardKeySelector SmartActorBlackboardKey; // 0x78(0x28)
};

// Class Gobi.BTTaskNode_CancelNavigate
// Size: 0x78 (Inherited: 0x78)
struct UBTTaskNode_CancelNavigate : UBTTaskNode {
};

// Class Gobi.BuildEnvironmentConfiguration
// Size: 0x50 (Inherited: 0x38)
struct UBuildEnvironmentConfiguration : UGameInstanceSubsystem {
	char pad_38[0x18]; // 0x38(0x18)
};

// Class Gobi.BulletPenetrationDefense
// Size: 0x88 (Inherited: 0x38)
struct UBulletPenetrationDefense : UDataAsset {
	struct TMap<enum class EPhysicalSurface, struct FBulletPenetrationDefenseDefinition> Surfaces; // 0x38(0x50)
};

// Class Gobi.BulletPenetrationComponent
// Size: 0x1f8 (Inherited: 0x150)
struct UBulletPenetrationComponent : UItemBaseComponent {
	char pad_150[0x38]; // 0x150(0x38)
	bool bIgnoreDeadActors; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
	struct FUnlimitedBulletPenetration UnlimitedPenetration; // 0x190(0x58)
	struct UBulletPenetrationDefense* PenetrationDefense; // 0x1e8(0x08)
	struct FBulletPenetrationTuning BulletPenetrationTuning; // 0x1f0(0x04)
	char pad_1F4[0x4]; // 0x1f4(0x04)
};

// Class Gobi.BurnCardScreen
// Size: 0x530 (Inherited: 0x530)
struct UBurnCardScreen : UUIScreen {
};

// Class Gobi.BurstAttackComponent
// Size: 0x3d8 (Inherited: 0x1c8)
struct UBurstAttackComponent : UAbilityComponent {
	char pad_1C8[0x8]; // 0x1c8(0x08)
	struct FMulticastInlineDelegate OnBurstEnded; // 0x1d0(0x10)
	struct FBurstMoveTickData MoveTickData; // 0x1e0(0x14)
	char pad_1F4[0xae]; // 0x1f4(0xae)
	bool bCanBurstOffLedges; // 0x2a2(0x01)
	bool bCanWalkOffLedgesDuringBurstEnd; // 0x2a3(0x01)
	bool bSqueezeAttack; // 0x2a4(0x01)
	bool bMeleeAttack; // 0x2a5(0x01)
	bool bSecondaryButtonCancelsBurst; // 0x2a6(0x01)
	char pad_2A7[0x1]; // 0x2a7(0x01)
	struct FGameplayTag MeleeAttackComponentTag; // 0x2a8(0x08)
	struct FName BurstCollisionProfileName; // 0x2b0(0x08)
	struct FName BurstMontagesName; // 0x2b8(0x08)
	struct FName RotationRateClampName; // 0x2c0(0x08)
	struct TArray<struct UAnimMontage*> BurstMontages; // 0x2c8(0x10)
	struct TArray<struct UAnimMontage*> BurstTraversalMontages; // 0x2d8(0x10)
	struct TArray<struct UAnimMontage*> BurstStopMontages; // 0x2e8(0x10)
	struct FGameplayTagContainer AppliedTags; // 0x2f8(0x20)
	struct FGameplayTagQuery BlockingTags; // 0x318(0x48)
	struct FGameplayTagContainer CancelTags; // 0x360(0x20)
	struct FGameplayTag BurstCollisionStumbleTag; // 0x380(0x08)
	struct TArray<struct UGameplayEffect*> BurstCollisionStumbleEffects; // 0x388(0x10)
	bool bUsesTuningData; // 0x398(0x01)
	char pad_399[0x3]; // 0x399(0x03)
	struct FBurstAttackTuning BurstAttackTuning; // 0x39c(0x3c)

	void StopBurst(bool bImmediate); // Function Gobi.BurstAttackComponent.StopBurst // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.C4Placement
// Size: 0x2d8 (Inherited: 0x250)
struct AC4Placement : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x250(0x08)
	struct UUsableComponent* UsableComponent; // 0x258(0x08)
	struct UBoxComponent* UsableTriggerComponent; // 0x260(0x08)
	struct UAkComponent* AkComponent; // 0x268(0x08)
	struct UPointLightComponent* PointLightComponent; // 0x270(0x08)
	struct UGameCoachLessonsComponent* GameCoachLessonsComponent; // 0x278(0x08)
	struct USceneComponent* AlignComponent; // 0x280(0x08)
	struct UAnimMontage* UseMontage3P; // 0x288(0x08)
	struct UMaterialInterface* PlaceableMaterial; // 0x290(0x08)
	struct UMaterialInterface* C4PlacedMaterial; // 0x298(0x08)
	struct UAkAudioEvent* AKEC4Activated; // 0x2a0(0x08)
	struct UAkAudioEvent* AKEC4ActiveChirp; // 0x2a8(0x08)
	float PointLightMaxIntensity; // 0x2b0(0x04)
	float PointLightMinIntensity; // 0x2b4(0x04)
	float FirstFlashChirpDelay; // 0x2b8(0x04)
	float InitialFlashChirpDelay; // 0x2bc(0x04)
	int32_t InitialFlashChirpCountMax; // 0x2c0(0x04)
	float FlashChirpDelay; // 0x2c4(0x04)
	char pad_2C8[0x10]; // 0x2c8(0x10)

	void StopFlashChirps(); // Function Gobi.C4Placement.StopFlashChirps // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CableFerry
// Size: 0x3b0 (Inherited: 0x250)
struct ACableFerry : AActor {
	enum class EFerryState CurrentFerryState; // 0x250(0x01)
	char pad_251[0x27]; // 0x251(0x27)
	struct AGobiGameStateBase* GobiGameState; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	struct UStaticMeshComponent* Ferry; // 0x288(0x08)
	struct UStaticMeshComponent* FerryMotor; // 0x290(0x08)
	struct UCableComponent* FerryMotorCable1; // 0x298(0x08)
	struct UCableComponent* FerryMotorCable2; // 0x2a0(0x08)
	struct USceneComponent* IntactFerryRoot; // 0x2a8(0x08)
	struct USceneComponent* BrokenFerryRoot; // 0x2b0(0x08)
	struct UBoxComponent* UsableVolume; // 0x2b8(0x08)
	struct UBoxComponent* DamageVolume; // 0x2c0(0x08)
	struct TArray<struct UBoxComponent*> ZombieBlockVolumes; // 0x2c8(0x10)
	struct UBoxComponent* PlayerCheckerVolume; // 0x2d8(0x08)
	struct UBoxComponent* NavModifierVolume; // 0x2e0(0x08)
	struct USplineComponent* FerryTravelSpline; // 0x2e8(0x08)
	struct UUsableComponent* UsableComp; // 0x2f0(0x08)
	struct UUsableComponent* NotUsableComp; // 0x2f8(0x08)
	struct UHealthComponent* HealthComp; // 0x300(0x08)
	struct UGobiNavModifierComponent* GobiNavModifierComp; // 0x308(0x08)
	struct UUsableHighlightComponent* UsableHighlightComp; // 0x310(0x08)
	struct UGameplayEffectsComponent* GameplayEffectsComp; // 0x318(0x08)
	struct TArray<struct UStaticMeshComponent*> IntactFerry; // 0x320(0x10)
	struct TArray<struct UStaticMeshComponent*> IntactFerryMotor; // 0x330(0x10)
	struct TArray<struct UStaticMeshComponent*> BrokenFerry; // 0x340(0x10)
	struct TArray<struct UStaticMeshComponent*> BrokenFerryMotor; // 0x350(0x10)
	struct TArray<struct AHeroCharacter*> PlayersInVolume; // 0x360(0x10)
	struct TArray<struct FName> HeroAttachmentLocations; // 0x370(0x10)
	struct TArray<struct FName> FerryHitLocations; // 0x380(0x10)
	struct AActor* ThreatActorClassForBigObjects; // 0x390(0x08)
	struct TArray<struct AActor*> SpawnThreatActors; // 0x398(0x10)
	struct FGameplayTag FerrySceneComponentTag; // 0x3a8(0x08)

	void SetFerryState(enum class EFerryState DesiredState); // Function Gobi.CableFerry.SetFerryState // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CalloutTooltipUserWidget
// Size: 0x458 (Inherited: 0x450)
struct UCalloutTooltipUserWidget : UGobiUserWidget {
	char pad_450[0x8]; // 0x450(0x08)

	void EventAddTextTip(struct FText TipText); // Function Gobi.CalloutTooltipUserWidget.EventAddTextTip // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CameraManagerDebugger
// Size: 0x260 (Inherited: 0x250)
struct ACameraManagerDebugger : AActor {
	struct TWeakObjectPtr<struct AGobiPlayerCameraManager> CameraManager; // 0x250(0x08)
	char pad_258[0x8]; // 0x258(0x08)

	void DebugDrawHandler(struct UCanvas* Canvas, struct APlayerController* InPlayerController); // Function Gobi.CameraManagerDebugger.DebugDrawHandler // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CameraModifier_ScreenEffect
// Size: 0x630 (Inherited: 0x50)
struct UCameraModifier_ScreenEffect : UCameraModifier {
	struct FPostProcessSettings PostProcessSettings; // 0x50(0x560)
	bool bPlayOnce; // 0x5b0(0x01)
	char pad_5B1[0x7]; // 0x5b1(0x07)
	struct FFloatParameterBehavior PostProcessActivationBlend; // 0x5b8(0x10)
	struct FFloatParameterBehavior PostProcessDeactivationBlend; // 0x5c8(0x10)
	struct UMaterialInterface* ParentMaterial; // 0x5d8(0x08)
	struct TArray<struct FFloatMaterialParameter> ScalarParameters; // 0x5e0(0x10)
	struct TArray<struct FVectorMaterialParameter> VectorParameters; // 0x5f0(0x10)
	bool bUseDistanceFromSource; // 0x600(0x01)
	char pad_601[0x3]; // 0x601(0x03)
	float DistanceToStartScaling; // 0x604(0x04)
	float DistanceToRemoveEffectAt; // 0x608(0x04)
	char pad_60C[0x4]; // 0x60c(0x04)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x610(0x08)
	struct TWeakObjectPtr<struct AActor> Source; // 0x618(0x08)
	char pad_620[0x8]; // 0x620(0x08)
	struct UScreenFXComponent* OwnerComponent; // 0x628(0x08)

	void ModifyPostProcess(float DeltaTime, float OutPostProcessBlendWeight, struct FPostProcessSettings OutPostProcessSettings); // Function Gobi.CameraModifier_ScreenEffect.ModifyPostProcess // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CameraModifier_ADSScreenEffect
// Size: 0x630 (Inherited: 0x630)
struct UCameraModifier_ADSScreenEffect : UCameraModifier_ScreenEffect {
};

// Class Gobi.CameraModifier_DamageScreenEffect
// Size: 0x650 (Inherited: 0x630)
struct UCameraModifier_DamageScreenEffect : UCameraModifier_ScreenEffect {
	struct TArray<struct FDamageThreshold> DamageThresholds; // 0x630(0x10)
	char pad_640[0x10]; // 0x640(0x10)
};

// Class Gobi.CameraModifier_InterpolateFOV
// Size: 0xd8 (Inherited: 0x50)
struct UCameraModifier_InterpolateFOV : UCameraModifier {
	float TargetFOVPct; // 0x50(0x04)
	char pad_54[0x8]; // 0x54(0x08)
	enum class EAlphaBlendOption BlendOption; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct UCurveFloat* CustomBlendCurve; // 0x60(0x08)
	char pad_68[0x50]; // 0x68(0x50)
	struct ULocalPlayer* OwnerPlayer; // 0xb8(0x08)
	char pad_C0[0x18]; // 0xc0(0x18)
};

// Class Gobi.CameraModifier_WeaponRecoil
// Size: 0x70 (Inherited: 0x50)
struct UCameraModifier_WeaponRecoil : UCameraModifier {
	char pad_50[0x20]; // 0x50(0x20)
};

// Class Gobi.CameraViewModifierComponent
// Size: 0xf8 (Inherited: 0xd8)
struct UCameraViewModifierComponent : UActorComponent {
	char pad_D8[0x18]; // 0xd8(0x18)
	struct UCameraModifier_InterpolateFOV* CameraModifierClass; // 0xf0(0x08)
};

// Class Gobi.CampaignRunComponent
// Size: 0x130 (Inherited: 0xd8)
struct UCampaignRunComponent : UActorComponent {
	char pad_D8[0x18]; // 0xd8(0x18)
	enum class EActiveCampaignRunType ActiveCampaignRunType; // 0xf0(0x04)
	enum class ECampaignRoundResult LastRoundResult; // 0xf4(0x04)
	int32_t RemainingRetries; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct UDedicatedServerManager* DedicatedServerManager; // 0x100(0x08)
	struct UCampaignRunManager* CampaignRunManager; // 0x108(0x08)
	struct UGobiPlayerProfileManager* PlayerProfileManager; // 0x110(0x08)
	char pad_118[0x10]; // 0x118(0x10)
	bool bCampaignRunAbandoned; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)

	void OnRep_CampaignRunAbandoned(); // Function Gobi.CampaignRunComponent.OnRep_CampaignRunAbandoned // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CampaignRunManager
// Size: 0xe8 (Inherited: 0x30)
struct UCampaignRunManager : UObject {
	char pad_30[0x38]; // 0x30(0x38)
	struct FCampaignRunDataV3 LoadedCampaignRunData; // 0x68(0x68)
	char pad_D0[0x18]; // 0xd0(0x18)
};

// Class Gobi.CampaignRunData
// Size: 0x70 (Inherited: 0x30)
struct UCampaignRunData : UObject {
	enum class ECampaignRoundResult LastRoundResult; // 0x30(0x04)
	bool bNeedsCardDraw; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	uint64_t GameplayCardManagerSeed; // 0x38(0x08)
	struct TArray<struct FActiveGameplayCard> StaticDirectorCards; // 0x40(0x10)
	struct TArray<struct FActiveGameplayCard> DynamicDirectorCards; // 0x50(0x10)
	struct TArray<struct FCampaignPlayerSlotData> CampaignPlayerSlotData; // 0x60(0x10)
};

// Class Gobi.BaseProjectile
// Size: 0x600 (Inherited: 0x250)
struct ABaseProjectile : AActor {
	char pad_250[0x1f0]; // 0x250(0x1f0)
	struct UProjectileMovementComponent* ProjectileMovement; // 0x440(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x448(0x08)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x450(0x08)
	float MaxLifetime; // 0x458(0x04)
	bool bRequiresClearTraceCheck; // 0x45c(0x01)
	bool bRequiresClientCollision; // 0x45d(0x01)
	enum class ECollisionChannel ClearTraceChannel; // 0x45e(0x01)
	char pad_45F[0x1]; // 0x45f(0x01)
	struct FGameplayTag InterpComponentGameplayTag; // 0x460(0x08)
	struct FMulticastInlineDelegate OnProjectileImpact; // 0x468(0x10)
	uint16_t ProjectileImpactBehavior; // 0x478(0x02)
	char pad_47A[0x6]; // 0x47a(0x06)
	struct FGameplayTagQuery ApplyImpactBehaviorToOverlappingActors; // 0x480(0x48)
	float HitDestroyDelay; // 0x4c8(0x04)
	float StayHiddenDuration; // 0x4cc(0x04)
	float DeathDestroyDelay; // 0x4d0(0x04)
	bool bWaterDeepDestroys; // 0x4d4(0x01)
	char pad_4D5[0x3]; // 0x4d5(0x03)
	float WaterDeepDepth; // 0x4d8(0x04)
	char pad_4DC[0x4]; // 0x4dc(0x04)
	struct FGameplayTag CollisionComponentGameplayTag; // 0x4e0(0x08)
	char pad_4E8[0x10]; // 0x4e8(0x10)
	struct TSet<struct AActor*> ActorsHit; // 0x4f8(0x50)
	struct FGameplayCueHandle ImpactCueHandle; // 0x548(0x18)
	struct FGameplayTag ImpactCue; // 0x560(0x08)
	struct UImpactEffectConfig* ImpactEffectConfig; // 0x568(0x08)
	bool bSpawnImpactDeferred; // 0x570(0x01)
	char pad_571[0x7]; // 0x571(0x07)
	struct UAkAudioEvent* ImpactAudioEvent; // 0x578(0x08)
	bool bAlsoImpactGroundIfImpactedCharacter; // 0x580(0x01)
	char pad_581[0x3]; // 0x581(0x03)
	float GroundTraceDownDistance; // 0x584(0x04)
	struct UAkAudioEvent* TravelLoopAudioEvent; // 0x588(0x08)
	struct UAkAudioEvent* TravelLoopStopAudioEvent; // 0x590(0x08)
	char pad_598[0x8]; // 0x598(0x08)
	bool bApplyDamage; // 0x5a0(0x01)
	char pad_5A1[0x3]; // 0x5a1(0x03)
	float DamageAmount; // 0x5a4(0x04)
	struct UGobiDamageType* DamageType; // 0x5a8(0x08)
	bool bIgnoreIncapHeroImpacts; // 0x5b0(0x01)
	char pad_5B1[0xf]; // 0x5b1(0x0f)
	struct TArray<struct FHitResult> ReplicatedImpacts; // 0x5c0(0x10)
	char pad_5D0[0x8]; // 0x5d0(0x08)
	struct UParticleSystem* EmitterOnSpawn; // 0x5d8(0x08)
	char pad_5E0[0x8]; // 0x5e0(0x08)
	struct UParticleSystem* EmitterOnImpact; // 0x5e8(0x08)
	bool bImpactEmitterInheritsImpactNormalRotation; // 0x5f0(0x01)
	char pad_5F1[0x3]; // 0x5f1(0x03)
	struct FRotator AdditionalImpactEmitterRotation; // 0x5f4(0x0c)

	void OnRep_Impacts(); // Function Gobi.BaseProjectile.OnRep_Impacts // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CapsuleProjectile
// Size: 0x608 (Inherited: 0x600)
struct ACapsuleProjectile : ABaseProjectile {
	struct UCapsuleComponent* CollisionComponent; // 0x600(0x08)
};

// Class Gobi.CarAlarmGameCoachLesson
// Size: 0x490 (Inherited: 0x488)
struct UCarAlarmGameCoachLesson : UGobiGameCoachLesson {
	float CarAlarmTeachDuration; // 0x488(0x04)
	char pad_48C[0x4]; // 0x48c(0x04)
};

// Class Gobi.CarAlarmGameCoachLessonComponent
// Size: 0x108 (Inherited: 0x108)
struct UCarAlarmGameCoachLessonComponent : UGameCoachLessonsComponent {
};

// Class Gobi.StaticCaravans
// Size: 0x78 (Inherited: 0x38)
struct UStaticCaravans : UDataAsset {
	struct FStaticCaravan TutorialCaravan; // 0x38(0x30)
	struct TArray<struct FStaticCaravanChain> CaravanChains; // 0x68(0x10)
};

// Class Gobi.CaravanManager
// Size: 0x70 (Inherited: 0x30)
struct UCaravanManager : UGobiObject {
	char pad_30[0x10]; // 0x30(0x10)
	int32_t MaxCaravans; // 0x40(0x04)
	struct TWeakObjectPtr<struct UUIScreenManager> OwningScreenManager; // 0x44(0x08)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FProfileCaravanData ProfileCaravanData; // 0x50(0x10)
	char pad_60[0x10]; // 0x60(0x10)
};

// Class Gobi.CaravanProgressScreen
// Size: 0x640 (Inherited: 0x530)
struct UCaravanProgressScreen : UUIScreen {
	char pad_530[0x70]; // 0x530(0x70)
	bool bWaitingOnRequest; // 0x5a0(0x01)
	char pad_5A1[0x9f]; // 0x5a1(0x9f)

	void UpdateWaiting(bool bWaiting); // Function Gobi.CaravanProgressScreen.UpdateWaiting // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CaravanScreen
// Size: 0x570 (Inherited: 0x560)
struct UCaravanScreen : UHubChildScreen {
	char pad_560[0x10]; // 0x560(0x10)

	void SetCaravanProgressScreenContext(struct FCaravanInstance InCaravanInstance); // Function Gobi.CaravanScreen.SetCaravanProgressScreenContext // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CaravanSelectPanelUserWidget
// Size: 0x480 (Inherited: 0x450)
struct UCaravanSelectPanelUserWidget : UGobiUserWidget {
	struct TArray<struct FCaravanInstance> LastKnownCaravans; // 0x450(0x10)
	char pad_460[0x20]; // 0x460(0x20)

	void PumpAnimations(); // Function Gobi.CaravanSelectPanelUserWidget.PumpAnimations // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CardDragPayload
// Size: 0x50 (Inherited: 0x30)
struct UCardDragPayload : UObject {
	struct FDataTableRowHandle CardRowHandle; // 0x30(0x20)
};

// Class Gobi.CardDrawOverviewUserWidget
// Size: 0x4f8 (Inherited: 0x450)
struct UCardDrawOverviewUserWidget : UGobiUserWidget {
	char pad_450[0x28]; // 0x450(0x28)
	struct FCardAnim SourceToCenter; // 0x478(0x20)
	struct FCardAnim CenterToDest; // 0x498(0x20)
	struct FCardAnim SourceShrink; // 0x4b8(0x20)
	struct FCardAnim DestExpand; // 0x4d8(0x20)

	void StartAnimation(); // Function Gobi.CardDrawOverviewUserWidget.StartAnimation // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CardDrawScreen
// Size: 0x5f0 (Inherited: 0x530)
struct UCardDrawScreen : UUIScreen {
	struct UAkAudioEvent* DefaultCardClickedSound; // 0x530(0x08)
	struct UAkAudioEvent* LightCardClickedSound; // 0x538(0x08)
	struct UAkAudioEvent* MediumCardClickedSound; // 0x540(0x08)
	struct UAkAudioEvent* HeavyCardClickedSound; // 0x548(0x08)
	struct UAkAudioEvent* WildCardClickedSound; // 0x550(0x08)
	float CardFlipDelay; // 0x558(0x04)
	bool bHasPlayedBurnCard; // 0x55c(0x01)
	char pad_55D[0x93]; // 0x55d(0x93)

	void UpdateDrawCount(int32_t InDrawCount); // Function Gobi.CardDrawScreen.UpdateDrawCount // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CardFan
// Size: 0x718 (Inherited: 0x160)
struct UCardFan : UPanelWidget {
	struct FMulticastInlineDelegate OnShowExpandedCard; // 0x160(0x10)
	struct FMulticastInlineDelegate OnUserScrolled; // 0x170(0x10)
	struct UUserWidget* CardWidgetClass; // 0x180(0x08)
	struct FScrollBarStyle ScrollBarStyle; // 0x188(0x518)
	enum class ESlateVisibility ScrollBarVisibility; // 0x6a0(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x6a1(0x01)
	char pad_6A2[0x2]; // 0x6a2(0x02)
	struct FVector2D ScrollbarThickness; // 0x6a4(0x08)
	struct FMargin ScrollbarPadding; // 0x6ac(0x10)
	bool bAlwaysShowScrollbar; // 0x6bc(0x01)
	bool bAlwaysShowScrollbarTrack; // 0x6bd(0x01)
	bool bScrollBarHasSizeWhenNotInUse; // 0x6be(0x01)
	bool bAllowOverscroll; // 0x6bf(0x01)
	bool bAnimateWheelScrolling; // 0x6c0(0x01)
	bool bHandleNavigation; // 0x6c1(0x01)
	enum class EDescendantScrollDestination NavigationDestination; // 0x6c2(0x01)
	char pad_6C3[0x1]; // 0x6c3(0x01)
	float NavigationScrollPadding; // 0x6c4(0x04)
	struct FKey ClickDragKey; // 0x6c8(0x18)
	bool bAllowClickDragScrolling; // 0x6e0(0x01)
	char pad_6E1[0x3]; // 0x6e1(0x03)
	float WheelScrollMultiplier; // 0x6e4(0x04)
	float ScrollAnimationSpeed; // 0x6e8(0x04)
	float MinChildSize; // 0x6ec(0x04)
	float ChildSpacing; // 0x6f0(0x04)
	char pad_6F4[0x14]; // 0x6f4(0x14)
	struct UUserWidget* ExpandedCardWidget; // 0x708(0x08)
	char pad_710[0x8]; // 0x710(0x08)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function Gobi.CardFan.SetWheelScrollMultiplier // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CardFanSlot
// Size: 0x50 (Inherited: 0x40)
struct UCardFanSlot : UPanelSlot {
	enum class EVerticalAlignment VerticalAlignment; // 0x40(0x01)
	char pad_41[0xf]; // 0x41(0x0f)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function Gobi.CardFanSlot.SetVerticalAlignment // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CardFilterUserWidget
// Size: 0x478 (Inherited: 0x450)
struct UCardFilterUserWidget : UGobiUserWidget {
	struct FMulticastInlineDelegate OnFilterChanged; // 0x450(0x10)
	struct TArray<enum class ECardFilter> Filters; // 0x460(0x10)
	enum class ECardFilter DefaultFilter; // 0x470(0x01)
	char pad_471[0x7]; // 0x471(0x07)

	void SelectFilter(enum class ECardFilter NewFilter, bool bForceUpdate); // Function Gobi.CardFilterUserWidget.SelectFilter // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CardInsertUserWidget
// Size: 0x4f0 (Inherited: 0x450)
struct UCardInsertUserWidget : UGobiUserWidget {
	struct UTextBlock* TitleText; // 0x450(0x08)
	struct UTextBlock* WrapTitleText; // 0x458(0x08)
	struct UWidgetSwitcher* TitleWidgetSwitcher; // 0x460(0x08)
	struct UTextBlock* TypeText; // 0x468(0x08)
	struct URichTextBlock* BodyText; // 0x470(0x08)
	struct URichTextBlock* SharedBodyText; // 0x478(0x08)
	char pad_480[0x70]; // 0x480(0x70)

	void UpdateTitleForLanguage(); // Function Gobi.CardInsertUserWidget.UpdateTitleForLanguage // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CardListenerComponent
// Size: 0xf0 (Inherited: 0xd8)
struct UCardListenerComponent : UActorComponent {
	struct TArray<struct FCardRequestToCueData> CardRequestToTagMapping; // 0xd8(0x10)
	int32_t RequestCounter; // 0xe8(0x04)
	int32_t RequestIndex; // 0xec(0x04)

	void OnRep_RequestIndex(); // Function Gobi.CardListenerComponent.OnRep_RequestIndex // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CardPaginatorUserWidget
// Size: 0x4e8 (Inherited: 0x450)
struct UCardPaginatorUserWidget : UGobiUserWidget {
	struct FMulticastInlineDelegate OnDragDrop; // 0x450(0x10)
	struct FMulticastInlineDelegate OnCardFocused; // 0x460(0x10)
	struct FMulticastInlineDelegate OnCardUnfocused; // 0x470(0x10)
	int32_t CARDS_PER_PAGE; // 0x480(0x04)
	char pad_484[0x4]; // 0x484(0x04)
	struct USelectableGameplayCardUserWidget* CardClass; // 0x488(0x08)
	char pad_490[0x58]; // 0x490(0x58)

	void SetEquippedCards(struct TArray<struct FDataTableRowHandle> InEquippedCards); // Function Gobi.CardPaginatorUserWidget.SetEquippedCards // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CardStatsUserWidget
// Size: 0x4c8 (Inherited: 0x450)
struct UCardStatsUserWidget : UGobiUserWidget {
	struct TSet<struct UStatEntryUserWidget*> StatWidgets; // 0x450(0x50)
	struct UAffinityStatsPopup* AffinityStatsPopup; // 0x4a0(0x08)
	struct UAffinityStatsPopup* AffinityPopupClass; // 0x4a8(0x08)
	char pad_4B0[0x18]; // 0x4b0(0x18)

	void OnAffinityStatsClicked(struct UGobiUserWidget* Widget); // Function Gobi.CardStatsUserWidget.OnAffinityStatsClicked // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CardSystemAnalyticsComponent
// Size: 0x200 (Inherited: 0xd8)
struct UCardSystemAnalyticsComponent : UActorComponent {
	char pad_D8[0x128]; // 0xd8(0x128)

	void ReceiveZombieMutationsChanged(); // Function Gobi.CardSystemAnalyticsComponent.ReceiveZombieMutationsChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CardTooltipUserWidget
// Size: 0x528 (Inherited: 0x450)
struct UCardTooltipUserWidget : UGobiUserWidget {
	struct UWidget* HostWidget; // 0x450(0x08)
	struct FDataTableRowHandle HostCardRowHandle; // 0x458(0x20)
	struct UPerkDetailsEntryUserWidget* PerkEntryClass; // 0x478(0x08)
	float PerkDescWrapWidth; // 0x480(0x04)
	char pad_484[0xa4]; // 0x484(0xa4)

	void ToggleGamepadTooltip(); // Function Gobi.CardTooltipUserWidget.ToggleGamepadTooltip // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ChallengeData
// Size: 0xa0 (Inherited: 0x38)
struct UChallengeData : UDataAsset {
	struct UTexture2D* Banner; // 0x38(0x08)
	struct FText DisplayName; // 0x40(0x18)
	struct FDataTableRowHandle Map; // 0x58(0x20)
	struct TArray<struct FDataTableRowHandle> ChallengeCards; // 0x78(0x10)
	struct TArray<struct UChallengeObjectiveData*> ChallengeObjectives; // 0x88(0x10)
	int32_t InitialCurrency; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class Gobi.ChallengeGameMode
// Size: 0x520 (Inherited: 0x520)
struct AChallengeGameMode : AMissionGameMode {
};

// Class Gobi.GobiGameStateBase
// Size: 0x500 (Inherited: 0x2c0)
struct AGobiGameStateBase : AGameState {
	struct UVoiceRoutingComponent* VoiceRoutingComponent; // 0x2c0(0x08)
	struct UCharacterSelectLevelManager* CharacterSelectLevelManager; // 0x2c8(0x08)
	enum class EGameModeType GameModeType; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct TArray<struct FGobiReadyStatus> PlayerReadyStatuses; // 0x2d8(0x10)
	float ActiveTransitionDuration; // 0x2e8(0x04)
	float LastTransitionTime; // 0x2ec(0x04)
	struct FString PoolConfig; // 0x2f0(0x10)
	struct TArray<int32_t> TeamScores; // 0x300(0x10)
	struct APlayerSlotManager* PlayerSlotManagerClass; // 0x310(0x08)
	struct APlayerSlot* PlayerSlotClass; // 0x318(0x08)
	struct APlayerSlotManager* PlayerSlotManager; // 0x320(0x08)
	struct APlayerAssetLoader* PlayerAssetLoader; // 0x328(0x08)
	int32_t NumTimesMissionRestarted; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct UGameplayCardManager* GameplayCardManager; // 0x338(0x08)
	struct FLevelTravelDetails LevelTravelDetails; // 0x340(0x38)
	struct UZombieMutationManager* ZombieMutationManager; // 0x378(0x08)
	struct UCampaignRunComponent* CampaignRunComponent; // 0x380(0x08)
	struct UOmenConfigSetAsset* OmenConfigSet; // 0x388(0x08)
	struct FMulticastInlineDelegate OnAllPlayersReady; // 0x390(0x10)
	struct FMulticastInlineDelegate OnPlayerReadyChanged; // 0x3a0(0x10)
	int32_t TotalElapsedTime; // 0x3b0(0x04)
	bool bFirstMapInChain; // 0x3b4(0x01)
	bool bShouldSkipCardDraw; // 0x3b5(0x01)
	char pad_3B6[0x2]; // 0x3b6(0x02)
	int32_t ZombieMeshRandomSeed; // 0x3b8(0x04)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct FMulticastInlineDelegate OnMatchStarted; // 0x3c0(0x10)
	struct FMulticastInlineDelegate OnMatchEnded; // 0x3d0(0x10)
	struct FMulticastInlineDelegate OnLeavingMap; // 0x3e0(0x10)
	struct FMulticastInlineDelegate OnWaitingToResetMatch; // 0x3f0(0x10)
	struct FMulticastInlineDelegate OnResetMission; // 0x400(0x10)
	struct FMulticastInlineDelegate OnResetCompleted; // 0x410(0x10)
	struct FMulticastInlineDelegate OnCreditsStarted; // 0x420(0x10)
	struct FMulticastInlineDelegate OnPlayerStatesChanged; // 0x430(0x10)
	struct FMulticastInlineDelegate OnWaitForReadyPlayers; // 0x440(0x10)
	struct FMulticastInlineDelegate OnMatchStateChanged; // 0x450(0x10)
	char pad_460[0x70]; // 0x460(0x70)
	struct TArray<struct FGobiReadyStatus> OldPlayerStatuses; // 0x4d0(0x10)
	struct AGobiGameStateDebugger* GameStateDebugger; // 0x4e0(0x08)
	struct UMissionManager* MissionManager; // 0x4e8(0x08)
	bool bTutorial; // 0x4f0(0x01)
	bool bIsSinglePlayer; // 0x4f1(0x01)
	char pad_4F2[0x6]; // 0x4f2(0x06)
	struct AGameplayAnalyticsManager* AnalyticsManager; // 0x4f8(0x08)

	void OnRep_ZombieMeshRandomSeed(); // Function Gobi.GobiGameStateBase.OnRep_ZombieMeshRandomSeed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiGameState
// Size: 0x610 (Inherited: 0x500)
struct AGobiGameState : AGobiGameStateBase {
	struct FMulticastInlineDelegate OnSafeRoomStateChanged; // 0x500(0x10)
	struct FMulticastInlineDelegate OnPlayerInsideChanged; // 0x510(0x10)
	struct FMulticastInlineDelegate OnMissionDifficultyChanged; // 0x520(0x10)
	struct FMulticastInlineDelegate OnCampaignEnded; // 0x530(0x10)
	struct FMulticastInlineDelegate OnMissionEnded; // 0x540(0x10)
	enum class EPartySafeRoomState PartySafeRoomState; // 0x550(0x01)
	struct FMissionState MissionState; // 0x551(0x02)
	bool bEnableVoice; // 0x553(0x01)
	enum class EMissionDifficulty MissionDifficulty; // 0x554(0x01)
	char pad_555[0x3]; // 0x555(0x03)
	float FriendlyFireModifier; // 0x558(0x04)
	char pad_55C[0x4]; // 0x55c(0x04)
	struct UGameplayCueManager* GameplayCueManager; // 0x560(0x08)
	struct FSyncedPacketSimulationSettings PacketSimulationSettings; // 0x568(0x18)
	char pad_580[0x18]; // 0x580(0x18)
	struct UCharacterMovementDebugEndpoint* CharacterMovementDebugEndpoint; // 0x598(0x08)
	struct UServerStatusComponent* ServerStatusComponent; // 0x5a0(0x08)
	uint32_t GameThreatLevel; // 0x5a8(0x04)
	struct FGameplayTag OnThreatLevelRaised; // 0x5ac(0x08)
	char pad_5B4[0x18]; // 0x5b4(0x18)
	struct FGameplayTag OnThreatLevelLowered; // 0x5cc(0x08)
	char pad_5D4[0x18]; // 0x5d4(0x18)
	float GameThreatNormalized; // 0x5ec(0x04)
	float GameThreat; // 0x5f0(0x04)
	enum class EPacingPhase PacingPhase; // 0x5f4(0x01)
	char pad_5F5[0x3]; // 0x5f5(0x03)
	int32_t CurrentMapChainIndex; // 0x5f8(0x04)
	char pad_5FC[0x4]; // 0x5fc(0x04)
	struct FString NextMapToUnlock; // 0x600(0x10)

	bool WasMissionSuccessfull(); // Function Gobi.GobiGameState.WasMissionSuccessfull // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ChallengeGameState
// Size: 0x618 (Inherited: 0x610)
struct AChallengeGameState : AGobiGameState {
	struct UChallengeMonitorComponent* ChallengeMonitorComponent; // 0x610(0x08)
};

// Class Gobi.ChallengeHUDUserWidget
// Size: 0x450 (Inherited: 0x450)
struct UChallengeHUDUserWidget : UGobiUserWidget {

	void UpdateTracker(struct UChallengeObjectiveTracker* Tracker); // Function Gobi.ChallengeHUDUserWidget.UpdateTracker // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ChallengeMonitorComponent
// Size: 0x130 (Inherited: 0xd8)
struct UChallengeMonitorComponent : UActorComponent {
	struct FMulticastInlineDelegate OnChallengeSuccess; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnChallengeFailure; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnChallengeObjectivesUpdated; // 0xf8(0x10)
	bool bGauntlet; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	struct FChallengeIndexPair ChallengeIndex; // 0x10c(0x08)
	char pad_114[0xc]; // 0x114(0x0c)
	struct TArray<struct UChallengeObjectiveTracker*> ObjectiveTrackers; // 0x120(0x10)

	void OnRep_ObjectiveTrackers(); // Function Gobi.ChallengeMonitorComponent.OnRep_ObjectiveTrackers // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ChallengeObjectiveData
// Size: 0x70 (Inherited: 0x30)
struct UChallengeObjectiveData : UObject {
	struct UTexture2D* Icon; // 0x30(0x08)
	struct FText DisplayName; // 0x38(0x18)
	struct FText Description; // 0x50(0x18)
	struct UChallengeObjectiveTracker* TrackerClass; // 0x68(0x08)
};

// Class Gobi.ChallengeObjectiveDamageDealtData
// Size: 0xc0 (Inherited: 0x70)
struct UChallengeObjectiveDamageDealtData : UChallengeObjectiveData {
	struct FGameplayTagQuery DamageTypeQuery; // 0x70(0x48)
	int32_t IgnoreDamageContextFlags; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class Gobi.ChallengeObjectiveTracker
// Size: 0x48 (Inherited: 0x30)
struct UChallengeObjectiveTracker : UGobiObject {
	float Points; // 0x30(0x04)
	float Value; // 0x34(0x04)
	struct UChallengeObjectiveData* ObjectiveData; // 0x38(0x08)
	struct UChallengeMonitorComponent* ChallengeMonitor; // 0x40(0x08)

	void Reset(); // Function Gobi.ChallengeObjectiveTracker.Reset // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ChallengeObjectivePlayerSlotTracker
// Size: 0x50 (Inherited: 0x48)
struct UChallengeObjectivePlayerSlotTracker : UChallengeObjectiveTracker {
	enum class EGobiTeam SlotsToWatch; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	void OnSlotsUpdated(); // Function Gobi.ChallengeObjectivePlayerSlotTracker.OnSlotsUpdated // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ChallengeObjectiveDamageDealtTracker
// Size: 0xa8 (Inherited: 0x50)
struct UChallengeObjectiveDamageDealtTracker : UChallengeObjectivePlayerSlotTracker {
	char pad_50[0x58]; // 0x50(0x58)

	void OnInflictDamage(struct FDamageInfo DamageInfo); // Function Gobi.ChallengeObjectiveDamageDealtTracker.OnInflictDamage // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ChallengeObjectiveKillData
// Size: 0xb8 (Inherited: 0x70)
struct UChallengeObjectiveKillData : UChallengeObjectiveData {
	struct FGameplayTagQuery EnemyTypeQuery; // 0x70(0x48)
};

// Class Gobi.ChallengeObjectiveKillTracker
// Size: 0xa8 (Inherited: 0x50)
struct UChallengeObjectiveKillTracker : UChallengeObjectivePlayerSlotTracker {
	char pad_50[0x58]; // 0x50(0x58)

	void OnInflictDamage(struct FDamageInfo DamageInfo); // Function Gobi.ChallengeObjectiveKillTracker.OnInflictDamage // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ChallengeObjectiveTeamHealthTracker
// Size: 0xa0 (Inherited: 0x50)
struct UChallengeObjectiveTeamHealthTracker : UChallengeObjectivePlayerSlotTracker {
	char pad_50[0x50]; // 0x50(0x50)

	void OnPlayerHealthChanged(float NewHealth, float DeltaHealth); // Function Gobi.ChallengeObjectiveTeamHealthTracker.OnPlayerHealthChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CharacterAudioComponent
// Size: 0x2d8 (Inherited: 0xd8)
struct UCharacterAudioComponent : UActorComponent {
	char pad_D8[0x18]; // 0xd8(0x18)
	bool bUseCrowdSound; // 0xf0(0x01)
	enum class ECharacterBodySize BodySize; // 0xf1(0x01)
	char pad_F2[0x2]; // 0xf2(0x02)
	float MovementSpeedMaxDivisor; // 0xf4(0x04)
	struct UDataTable* GameplayTagSetDataTable; // 0xf8(0x08)
	struct UAkSkeletalComponent* AudioEmitter; // 0x100(0x08)
	struct USoundCollectionAsset* SelectedSoundCollection; // 0x108(0x08)
	struct TWeakObjectPtr<struct AGobiCharacter> OwningCharacter; // 0x110(0x08)
	struct FStartingStateAndParams StartingStateAndParams; // 0x118(0xb0)
	struct AGobiSpatialAudioVolume* CurrentSpatialVolume; // 0x1c8(0x08)
	bool bWetPrimed; // 0x1d0(0x01)
	char pad_1D1[0x7]; // 0x1d1(0x07)
	struct UAkAudioEvent* WaterEnter; // 0x1d8(0x08)
	struct UAkAudioEvent* WaterExit; // 0x1e0(0x08)
	struct UAkAudioEvent* WaterMove; // 0x1e8(0x08)
	struct UAkAudioEvent* WaterDrips; // 0x1f0(0x08)
	struct UAkAudioEvent* SpectateSwap; // 0x1f8(0x08)
	bool bStartingStatesDebug; // 0x200(0x01)
	char pad_201[0x3]; // 0x201(0x03)
	struct FName DialogueBoneName; // 0x204(0x08)
	char pad_20C[0xc]; // 0x20c(0x0c)
	struct FDelegate VoiceLineFinishedCallback; // 0x218(0x10)
	char pad_228[0x10]; // 0x228(0x10)
	struct FString CurrentVoiceLine; // 0x238(0x10)
	struct UAkAudioEvent* DialogueStopEvent; // 0x248(0x08)
	char pad_250[0x60]; // 0x250(0x60)
	struct TArray<struct FMusicDamageTypeEvent> DamageDrivenMusicEvents; // 0x2b0(0x10)
	char pad_2C0[0x18]; // 0x2c0(0x18)

	void VoiceLineFinished(enum class EAkCallbackType CallbackType, struct UAkCallbackInfo* CallbackInfo); // Function Gobi.CharacterAudioComponent.VoiceLineFinished // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CharacterAudioManagerSubsystem
// Size: 0x50 (Inherited: 0x38)
struct UCharacterAudioManagerSubsystem : UWorldSubsystem {
	struct UAudioMutilationManager* MutilationManager; // 0x38(0x08)
	struct USharedSoundManager* SharedSoundManager; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class Gobi.CharacterBlockingNoWallGrabVolume
// Size: 0x288 (Inherited: 0x288)
struct ACharacterBlockingNoWallGrabVolume : AVolume {
};

// Class Gobi.CharacterBlockingVolume
// Size: 0x288 (Inherited: 0x288)
struct ACharacterBlockingVolume : ABlockingVolume {
};

// Class Gobi.CharacterCustomizationManager
// Size: 0x290 (Inherited: 0x250)
struct ACharacterCustomizationManager : AInfo {
	struct ACustomizationMannequin* CustomizationMannequin; // 0x250(0x08)
	struct AWeaponCustomizationMannequin* WeaponCustomizationMannequin; // 0x258(0x08)
	struct FViewTargetTransitionParams ViewTargetTransitionParams; // 0x260(0x10)
	struct ACameraActor* CharacterCustomizationCamera; // 0x270(0x08)
	struct ACameraActor* WeaponCustomizationCamera; // 0x278(0x08)
	struct TArray<struct FCharacterRelatedActors> CharacterToActorMap; // 0x280(0x10)

	void ExitWeaponCustomization(struct AGobiPlayerState* GobiPlayerState); // Function Gobi.CharacterCustomizationManager.ExitWeaponCustomization // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CharacterCustomizationScreen
// Size: 0x6e0 (Inherited: 0x530)
struct UCharacterCustomizationScreen : UUIScreen {
	char pad_530[0x1b0]; // 0x530(0x1b0)

	void SetUnlockCount(int32_t NumUnlocked, int32_t TotalUnlocks); // Function Gobi.CharacterCustomizationScreen.SetUnlockCount // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CharacterCustomizationUtils
// Size: 0x30 (Inherited: 0x30)
struct UCharacterCustomizationUtils : UBlueprintFunctionLibrary {

	int32_t GetNumUnlockedCharacterCustomizations(struct APlayerController* PlayerController, struct FDataTableRowHandle CharacterRowHandle, enum class ECharacterCustomizationSlot Slot); // Function Gobi.CharacterCustomizationUtils.GetNumUnlockedCharacterCustomizations // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CharacterDetailsUserWidget
// Size: 0x460 (Inherited: 0x450)
struct UCharacterDetailsUserWidget : UGobiUserWidget {
	struct UPerkDetailsEntryUserWidget* PerkEntryClass; // 0x450(0x08)
	char pad_458[0x8]; // 0x458(0x08)

	void SetCards(struct TArray<struct FDataTableRowHandle> CardHandles); // Function Gobi.CharacterDetailsUserWidget.SetCards // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiDialogueComponent
// Size: 0x1f0 (Inherited: 0x1d8)
struct UGobiDialogueComponent : UDialogueComponent {
	char pad_1D8[0x8]; // 0x1d8(0x08)
	struct TArray<struct FName> PvPZombieBlacklist; // 0x1e0(0x10)
};

// Class Gobi.CharacterDialogueComponent
// Size: 0x218 (Inherited: 0x1f0)
struct UCharacterDialogueComponent : UGobiDialogueComponent {
	struct TWeakObjectPtr<struct AGobiCharacter> OwnerCharacter; // 0x1f0(0x08)
	char pad_1F8[0x20]; // 0x1f8(0x20)

	void OnOwnerLifeStateChanged(struct FGameplayTag NewStateTag, struct FGameplayTag PreviousStateTag); // Function Gobi.CharacterDialogueComponent.OnOwnerLifeStateChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CharacterEmitterComponent
// Size: 0x198 (Inherited: 0xd8)
struct UCharacterEmitterComponent : UActorComponent {
	char pad_D8[0x30]; // 0xd8(0x30)
	struct FGameplayEffectContext EffectContext; // 0x108(0x80)
	struct FName CollisionProfile; // 0x188(0x08)
	float LineOfSightForgivenessTime; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)

	void RemoveDef(struct FCharacterEmitterDef CharacterEmitterDef); // Function Gobi.CharacterEmitterComponent.RemoveDef // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CharacterEmitterMod
// Size: 0x188 (Inherited: 0x88)
struct UCharacterEmitterMod : UGameplayMod {
	struct FCharacterEmitterDef CharacterEmitterDef; // 0x88(0x100)
};

// Class Gobi.CharacterLineupLayoutManager
// Size: 0x298 (Inherited: 0x250)
struct ACharacterLineupLayoutManager : AInfo {
	char pad_250[0x8]; // 0x250(0x08)
	struct TArray<struct ACustomizationMannequin*> Mannequins; // 0x258(0x10)
	struct ATargetPoint* CharacterSelectTargetPoint; // 0x268(0x08)
	struct TArray<struct ATargetPoint*> PreRoundLockInTargetPoints; // 0x270(0x10)
	struct TArray<struct ATargetPoint*> PostRoundTargetPoints; // 0x280(0x10)
	struct ACameraActor* Camera; // 0x290(0x08)

	void SetLayoutType(enum class ELayoutType LayoutType); // Function Gobi.CharacterLineupLayoutManager.SetLayoutType // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CharacterMovementDebugEndpoint
// Size: 0x198 (Inherited: 0xd8)
struct UCharacterMovementDebugEndpoint : UActorComponent {
	int32_t Port; // 0xd8(0x04)
	char pad_DC[0x1c]; // 0xdc(0x1c)
	struct TMap<struct ACharacter*, int32_t> RecordingCharacters; // 0xf8(0x50)
	struct TSet<struct ACharacter*> LocalRecordingCharacters; // 0x148(0x50)

	void OnRep_Port(); // Function Gobi.CharacterMovementDebugEndpoint.OnRep_Port // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CharacterMusicInfo
// Size: 0x130 (Inherited: 0x38)
struct UCharacterMusicInfo : UDataAsset {
	struct AActor* ClassFilter; // 0x38(0x08)
	struct UAkAudioEvent* CharacterMusicStart; // 0x40(0x08)
	struct UAkAudioEvent* CharacterMusicStop; // 0x48(0x08)
	float MusicDelayDueToDeath; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString DistanceRTPCName; // 0x58(0x10)
	enum class EMusicEventType SupportedCharacterEvents; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float EngagedDistance; // 0x6c(0x04)
	float MaxDistance; // 0x70(0x04)
	struct FName PassiveMusicState; // 0x74(0x08)
	struct FName DistantMusicState; // 0x7c(0x08)
	bool bWantsBeatSync; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	struct FName StateGroup; // 0x88(0x08)
	struct FGameplayTag CharacterTag; // 0x90(0x08)
	struct TMap<struct FGameplayTag, struct FCharacterMusicStateConfig> TagToStateMapping; // 0x98(0x50)
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FCharacterMusicStateConfig ActiveCharacterMusicState; // 0xf0(0x28)
	char pad_118[0x18]; // 0x118(0x18)

	void HandleGameplayTagChanged(struct FGameplayTag Tag, bool bTagAdded, struct AActor* SourceActor); // Function Gobi.CharacterMusicInfo.HandleGameplayTagChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CharacterSelect
// Size: 0x48 (Inherited: 0x30)
struct UCharacterSelect : UObject {
	struct TArray<struct FCharacterSelectMapping> SelectedCharacterMapping; // 0x30(0x10)
	struct UDataTable* HeroDefinitions; // 0x40(0x08)

	void SetCustomRenderingStateEnabled(struct UObject* WorldContext, bool bEnabled); // Function Gobi.CharacterSelect.SetCustomRenderingStateEnabled // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CharacterSelectLevelManager
// Size: 0x60 (Inherited: 0x30)
struct UCharacterSelectLevelManager : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	struct ACharacterLineupLayoutManager* LineupLayoutManager; // 0x48(0x08)
	char pad_50[0x10]; // 0x50(0x10)

	void OnCharacterSelectLevelShown(); // Function Gobi.CharacterSelectLevelManager.OnCharacterSelectLevelShown // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CharacterSelectScreen
// Size: 0x560 (Inherited: 0x560)
struct UCharacterSelectScreen : UInGameScreen {
};

// Class Gobi.CharacterSelectUserWidget
// Size: 0x4e0 (Inherited: 0x450)
struct UCharacterSelectUserWidget : UGobiUserWidget {
	char pad_450[0x40]; // 0x450(0x40)
	struct TMap<struct AGobiPlayerState*, struct FDataTableRowHandle> ClaimedCharacters; // 0x490(0x50)

	void UpdateClaimedState(); // Function Gobi.CharacterSelectUserWidget.UpdateClaimedState // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CharacterSpawnActor
// Size: 0x498 (Inherited: 0x498)
struct ACharacterSpawnActor : AAISpawnActor {
};

// Class Gobi.ChargeComponent
// Size: 0x698 (Inherited: 0x1c8)
struct UChargeComponent : UAbilityComponent {
	char pad_1C8[0x8]; // 0x1c8(0x08)
	struct FMulticastInlineDelegate OnChargeEnded; // 0x1d0(0x10)
	struct FMulticastInlineDelegate OnChargeBreakPressed; // 0x1e0(0x10)
	bool bGameplayChargePushing; // 0x1f0(0x01)
	char pad_1F1[0x133]; // 0x1f1(0x133)
	struct FHitResult StumbleImpact; // 0x324(0x88)
	struct FChargeMoveTickData MoveTickData; // 0x3ac(0x20)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct UAnimMontage* CurrentActiveMontage; // 0x3d0(0x08)
	struct UGameplayEvaluatorSet* FilterSet; // 0x3d8(0x08)
	struct TArray<struct UAnimMontage*> AccelerateMontages; // 0x3e0(0x10)
	struct TArray<struct UAnimMontage*> DecelerateMontages; // 0x3f0(0x10)
	struct TArray<struct UAnimMontage*> CharacterImpactMontages; // 0x400(0x10)
	bool bStumbleOnWorldImpacts; // 0x410(0x01)
	bool bDeflectOnWorldImpacts; // 0x411(0x01)
	char pad_412[0x6]; // 0x412(0x06)
	struct TArray<struct UAnimMontage*> ImpactStumbleMontages; // 0x418(0x10)
	struct UImpactEffectConfig* StumbleImpactTable; // 0x428(0x08)
	struct FGameplayTagContainer AppliedTags; // 0x430(0x20)
	struct FGameplayTagContainer RampUpTags; // 0x450(0x20)
	struct FGameplayTagContainer DeceleratingTags; // 0x470(0x20)
	struct FGameplayTagQuery CancelTags; // 0x490(0x48)
	struct TArray<struct UGameplayEffect*> ChargingEffects; // 0x4d8(0x10)
	struct FGameplayTagQuery BlockingTags; // 0x4e8(0x48)
	struct FGameplayTagQuery BlockingTargetTags; // 0x530(0x48)
	struct FGameplayTagQuery InterruptChargeCharacterTags; // 0x578(0x48)
	struct FGameplayTag ChargeCollisionTag; // 0x5c0(0x08)
	struct TArray<struct UGameplayEffect*> ChargeCollisionEffects; // 0x5c8(0x10)
	struct TArray<struct UGameplayEffect*> ImpactStumbleEffects; // 0x5d8(0x10)
	struct TArray<struct FEnemyAudioEvent> AudioStartEvents; // 0x5e8(0x10)
	struct TArray<struct FEnemyAudioEvent> AudioStopEvents; // 0x5f8(0x10)
	struct FGameplayTag ImpactExplosionComponentTag; // 0x608(0x08)
	struct FChargeTuning ChargeTuning; // 0x610(0x88)

	void StopCharge(); // Function Gobi.ChargeComponent.StopCharge // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ChargeProperyMod
// Size: 0xa8 (Inherited: 0xa8)
struct UChargeProperyMod : UObjectPropertyMod {
};

// Class Gobi.ChaserAnimInstance
// Size: 0x920 (Inherited: 0x7f0)
struct UChaserAnimInstance : UZombieAnimInstance {
	char pad_7F0[0x28]; // 0x7f0(0x28)
	struct FChaserAnimState ChaserAnimState; // 0x818(0x1c)
	char pad_834[0x4]; // 0x834(0x04)
	struct FGameplayTagQuery PounceQuery; // 0x838(0x48)
	struct FGameplayTagQuery PounceAttackingQuery; // 0x880(0x48)
	struct FGameplayTagQuery LeapInterruptedQuery; // 0x8c8(0x48)
	char pad_910[0x10]; // 0x910(0x10)
};

// Class Gobi.ChatBoxUserWidget
// Size: 0x4a8 (Inherited: 0x450)
struct UChatBoxUserWidget : UGobiUserWidget {
	struct UAkAudioEvent* PlayerJoinedGroupAudio; // 0x450(0x08)
	char pad_458[0x50]; // 0x458(0x50)

	void ShowInput(); // Function Gobi.ChatBoxUserWidget.ShowInput // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ChatMessage
// Size: 0x58 (Inherited: 0x30)
struct UChatMessage : UObject {
	struct FText Message; // 0x30(0x18)
	char pad_48[0x10]; // 0x48(0x10)
};

// Class Gobi.ChatMessageUserWidget
// Size: 0x470 (Inherited: 0x450)
struct UChatMessageUserWidget : UGobiUserWidget {
	char pad_450[0x8]; // 0x450(0x08)
	float FadeDelay; // 0x458(0x04)
	float FadeDuration; // 0x45c(0x04)
	char pad_460[0x10]; // 0x460(0x10)

	void StartFade(); // Function Gobi.ChatMessageUserWidget.StartFade // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ChatScreen
// Size: 0x600 (Inherited: 0x530)
struct UChatScreen : UUIScreen {
	struct FMulticastInlineDelegate OnScreenNewStatusChanged; // 0x530(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> ScreensToMoveVoipOverlay; // 0x540(0x10)
	struct FMulticastInlineDelegate OnChatOpened; // 0x550(0x10)
	char pad_560[0xa0]; // 0x560(0xa0)

	void ShowDamageEffect(); // Function Gobi.ChatScreen.ShowDamageEffect // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ChunkInstallProgressUserWidget
// Size: 0x468 (Inherited: 0x450)
struct UChunkInstallProgressUserWidget : UGobiUserWidget {
	char pad_450[0x18]; // 0x450(0x18)

	void SetProgressMaterial(struct UMaterialInstanceDynamic* InMaterial); // Function Gobi.ChunkInstallProgressUserWidget.SetProgressMaterial // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CinematicAnalyticsComponent
// Size: 0x148 (Inherited: 0xd8)
struct UCinematicAnalyticsComponent : UActorComponent {
	char pad_D8[0x70]; // 0xd8(0x70)
};

// Class Gobi.UsableComponent
// Size: 0x4b8 (Inherited: 0xd8)
struct UUsableComponent : UActorComponent {
	struct FMulticastInlineDelegate OnBeginUse; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnEndUse; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnSuccessfulUse; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnEnabledChanged; // 0x108(0x10)
	char pad_118[0x18]; // 0x118(0x18)
	struct FMulticastInlineDelegate OnSuccessfulUseDetailed; // 0x130(0x10)
	char pad_140[0x20]; // 0x140(0x20)
	struct AActor* UsingActor; // 0x160(0x08)
	struct FGameplayTag RequiredTriggerGameplayTag; // 0x168(0x08)
	float RequiredUseTime; // 0x170(0x04)
	bool bResetOnStopUse; // 0x174(0x01)
	bool bSupportsTapAndHold; // 0x175(0x01)
	char pad_176[0x72]; // 0x176(0x72)
	struct TArray<struct APlayerSlot*> UsedByPlayerSlots; // 0x1e8(0x10)
	bool bIsEnabled; // 0x1f8(0x01)
	bool bDisableOnSuccessfulUse; // 0x1f9(0x01)
	bool bAllowQuickUseItems; // 0x1fa(0x01)
	bool bAllowQuickUseItemsWithZeroRequiredUseTime; // 0x1fb(0x01)
	bool bRequireQuickUseItem; // 0x1fc(0x01)
	bool bQuickUseItemOnlyRequiredForFirstUse; // 0x1fd(0x01)
	bool bSingleUsePerPlayerSlot; // 0x1fe(0x01)
	char pad_1FF[0x1]; // 0x1ff(0x01)
	struct FText DefaultPromptText; // 0x200(0x18)
	struct FText SingleUsePerPlayerText; // 0x218(0x18)
	struct FUsableProgressBarDefinition UsersProgressBarDef; // 0x230(0x28)
	struct FUsableProgressBarDefinition OwnersProgressBarDef; // 0x258(0x28)
	bool bCanDisablePingable; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct TArray<struct UGameplayEffect*> OwnerAppliedGameplayEffects; // 0x288(0x10)
	struct TArray<struct UGameplayEffect*> UserAppliedGameplayEffects; // 0x298(0x10)
	struct FGameplayTagQuery OwnerRequiredTagQuery; // 0x2a8(0x48)
	struct FGameplayTagContainer UsingActorBlockingTags; // 0x2f0(0x20)
	struct FGameplayTagContainer TagsAppliedToOwner; // 0x310(0x20)
	struct FGameplayTagContainer TagsAppliedToUsingActor; // 0x330(0x20)
	struct FGameplayTag BeginUseCueTag; // 0x350(0x08)
	struct FGameplayTag SuccessfulUseCueTag; // 0x358(0x08)
	struct FGameplayTag EndUseCueTag; // 0x360(0x08)
	struct FCurrencyCondition CurrencyCondition; // 0x368(0x30)
	struct FHealthPercentCondition HealthPercentCondition; // 0x398(0x38)
	struct FMissionObjectiveCondition MissionObjectiveCondition; // 0x3d0(0x50)
	enum class EInventoryConditionMode InventoryConditionMode; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct TArray<struct FUsableInventoryCondition> InventoryConditions; // 0x428(0x10)
	struct TArray<struct FGameplayTagCondition> GameplayTagConditions; // 0x438(0x10)
	bool bRequireClearLineOfSight; // 0x448(0x01)
	enum class EUsableTraceLocation TraceLocation; // 0x449(0x01)
	char pad_44A[0x2]; // 0x44a(0x02)
	float ClearLoSTraceTimeForgiveness; // 0x44c(0x04)
	bool bFailTriggerTraceOnOwnerHit; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
	struct FGameplayTagContainer AssociatedMeshTags; // 0x458(0x20)
	bool bPerformReachOutAnimation; // 0x478(0x01)
	bool bBypassCapsuleCheckOnHold; // 0x479(0x01)
	char pad_47A[0x2]; // 0x47a(0x02)
	float CancelDistance; // 0x47c(0x04)
	struct UAkAudioEvent* FailedUseSound; // 0x480(0x08)
	struct UAnimMontage* UseAnimation; // 0x488(0x08)
	struct TArray<struct UAnimMontage*> UseAnimations; // 0x490(0x10)
	bool bScaleUseAnimBasedOnUsersUseRate; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct UAnimMontage* EndUseAnimation; // 0x4a8(0x08)
	enum class EUsablePriority UsablePriority; // 0x4b0(0x01)
	char pad_4B1[0x7]; // 0x4b1(0x07)

	void UsableSuccessfulUseSignatureDetailed_DM__DelegateSignature(struct FUsableSuccessfulUsePayload Payload); // DelegateFunction Gobi.UsableComponent.UsableSuccessfulUseSignatureDetailed_DM__DelegateSignature // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CivilianEcouragementUsableComponent
// Size: 0x4c0 (Inherited: 0x4b8)
struct UCivilianEcouragementUsableComponent : UUsableComponent {
	char pad_4B8[0x8]; // 0x4b8(0x08)

	void OnPossessedBy(struct AController* Controller); // Function Gobi.CivilianEcouragementUsableComponent.OnPossessedBy // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ClaimManager
// Size: 0x40 (Inherited: 0x30)
struct UClaimManager : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class Gobi.ClingComponent
// Size: 0x3a8 (Inherited: 0x120)
struct UClingComponent : UMovementTickableComponent {
	char pad_120[0x48]; // 0x120(0x48)
	struct FMulticastInlineDelegate OnStateChanged; // 0x168(0x10)
	struct FClingConfig ClingConfig; // 0x178(0x168)
	struct FClingMoveTickData MoveTickData; // 0x2e0(0x24)
	enum class EZombieAttachLocationType AttachedLocationType; // 0x304(0x01)
	enum class EZombieAttachLocationType AttachToLocationType; // 0x305(0x01)
	bool bIsSwiveling; // 0x306(0x01)
	bool bClingMoving; // 0x307(0x01)
	struct UAnimMontage* CurrentActiveMontage; // 0x308(0x08)
	char pad_310[0x40]; // 0x310(0x40)
	struct FName PoleAttachedCollisionProfileName; // 0x350(0x08)
	char pad_358[0x50]; // 0x358(0x50)

	void OnRep_MoveTickData(struct FClingMoveTickData PrevMoveTickData); // Function Gobi.ClingComponent.OnRep_MoveTickData // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ClingPropertyMod
// Size: 0xb0 (Inherited: 0xa8)
struct UClingPropertyMod : UObjectPropertyMod {
	enum class EClingPropertyModType Type; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	int32_t CanAttach; // 0xac(0x04)
};

// Class Gobi.ClingTrait
// Size: 0x1a0 (Inherited: 0x30)
struct UClingTrait : UTrait {
	struct FClingConfig Config; // 0x30(0x168)
	struct UClingComponent* ClingComponentClass; // 0x198(0x08)
};

// Class Gobi.ClipAmmoComponent
// Size: 0x228 (Inherited: 0x150)
struct UClipAmmoComponent : UItemBaseComponent {
	char pad_150[0x84]; // 0x150(0x84)
	int32_t CurrentClipAmount; // 0x1d4(0x04)
	char pad_1D8[0x4]; // 0x1d8(0x04)
	int32_t CalculatedMaxClipAmount; // 0x1dc(0x04)
	char pad_1E0[0x10]; // 0x1e0(0x10)
	struct FDataTableRowHandle AmmoRowHandle; // 0x1f0(0x20)
	float LowAmmoPercentage; // 0x210(0x04)
	bool bInfiniteReserveAmmo; // 0x214(0x01)
	char pad_215[0x3]; // 0x215(0x03)
	struct FName AmmoBeltBoneNamePrefix; // 0x218(0x08)
	int32_t AmmoBeltVacuumClipCountStart; // 0x220(0x04)
	struct FClipAmmoTuning ClipAmmoTuning; // 0x224(0x04)

	void OnRep_CurrentClipAmount(); // Function Gobi.ClipAmmoComponent.OnRep_CurrentClipAmount // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ReloadComponent
// Size: 0x200 (Inherited: 0x150)
struct UReloadComponent : UItemBaseComponent {
	char pad_150[0x90]; // 0x150(0x90)
	struct TArray<struct UGameplayEffect*> PowerReloadEffects; // 0x1e0(0x10)
	struct TArray<struct UGameplayEffect*> PowerReloadPlayerEffects; // 0x1f0(0x10)

	bool IsReloadingFromUserInput(); // Function Gobi.ReloadComponent.IsReloadingFromUserInput // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ClipReloadComponent
// Size: 0x2e0 (Inherited: 0x200)
struct UClipReloadComponent : UReloadComponent {
	char pad_200[0x48]; // 0x200(0x48)
	struct FReplicatedReloadData ReplicatedReloadData; // 0x248(0x08)
	float ReloadLength; // 0x250(0x04)
	float ReloadAnimationLength; // 0x254(0x04)
	float ReloadAddTime; // 0x258(0x04)
	bool bAutoReloadWhenEmpty; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	struct UAnimMontage* ReloadMontageFP; // 0x260(0x08)
	struct UAnimMontage* ReloadMontage3P; // 0x268(0x08)
	struct FGameplayTag AppliedTag; // 0x270(0x08)
	struct FGameplayTagContainer BlockingTags; // 0x278(0x20)
	struct FGameplayTagContainer InterruptingTags; // 0x298(0x20)
	struct FGameplayTagContainer CancellingTags; // 0x2b8(0x20)
	struct UAkAudioEvent* BackgroundReloadAKE; // 0x2d8(0x08)

	void OnRep_ReloadData(); // Function Gobi.ClipReloadComponent.OnRep_ReloadData // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ClusterBoilComponent
// Size: 0x170 (Inherited: 0xd8)
struct UClusterBoilComponent : UActorComponent {
	struct FMulticastInlineDelegate OnBoilDeath; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnGrew; // 0xe8(0x10)
	bool bShrunk; // 0xf8(0x01)
	char pad_F9[0x2f]; // 0xf9(0x2f)
	struct UHealthComponent* HealthComp; // 0x128(0x08)
	struct UStaticMeshComponent* OwnerMesh; // 0x130(0x08)
	struct UThreatComponent* ThreatComp; // 0x138(0x08)
	struct UAkAudioEvent* HitSound; // 0x140(0x08)
	struct UAkAudioEvent* DeathSound; // 0x148(0x08)
	struct UParticleSystem* DeathExplosion; // 0x150(0x08)
	struct UCurveFloat* ShrinkGrowCurve; // 0x158(0x08)
	float GrowDelay; // 0x160(0x04)
	struct FVector BoilWorldScale; // 0x164(0x0c)

	void OnWaitingOnReset(); // Function Gobi.ClusterBoilComponent.OnWaitingOnReset // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ColorBlindGroupData
// Size: 0x88 (Inherited: 0x38)
struct UColorBlindGroupData : UDataAsset {
	struct TMap<struct FName, struct FColorBlindGroup> ColorBlindGroups; // 0x38(0x50)
};

// Class Gobi.ColorBlindOutlineHighlightData
// Size: 0x88 (Inherited: 0x38)
struct UColorBlindOutlineHighlightData : UDataAsset {
	struct TMap<enum class EColorBlindMode, struct FHighlightPalette> OutlinePalettes; // 0x38(0x50)
};

// Class Gobi.CombineComponent
// Size: 0x3f8 (Inherited: 0xd8)
struct UCombineComponent : UActorComponent {
	bool bIsGameCoachEnabled; // 0xd8(0x01)
	bool bHasCombineFinished; // 0xd9(0x01)
	char pad_DA[0x36]; // 0xda(0x36)
	struct FMulticastInlineDelegate GameCoachIsOff; // 0x110(0x10)
	struct FMulticastInlineDelegate OnCombineStarted; // 0x120(0x10)
	struct FMulticastInlineDelegate OnCombineStopped; // 0x130(0x10)
	struct UUsableComponent* Usable; // 0x140(0x08)
	struct TArray<struct FCornstalk> CornStalks; // 0x148(0x10)
	struct FName CornStalkTag; // 0x158(0x08)
	struct UInstancedStaticMeshComponent* InstanceClass; // 0x160(0x08)
	struct FName InstanceClassTag; // 0x168(0x08)
	float CombineDistanceCheck; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct TArray<struct FName> BladeSocketLocationNames; // 0x178(0x10)
	struct TArray<struct FVector> BladeSocketLocations; // 0x188(0x10)
	struct UGameCoachLessonsComponent* GameCoach; // 0x198(0x08)
	struct FName GameCoachTag; // 0x1a0(0x08)
	struct TArray<struct ABirdSite*> BirdSites; // 0x1a8(0x10)
	struct FName BirdSiteTag; // 0x1b8(0x08)
	float BirdLaunchDistance; // 0x1c0(0x04)
	char pad_1C4[0x4]; // 0x1c4(0x04)
	struct UGobiNavModifierComponent* GobiNavModifierStart; // 0x1c8(0x08)
	struct FName GobiNavModifierStartTag; // 0x1d0(0x08)
	struct UGobiNavModifierComponent* GobiNavModifierEnd; // 0x1d8(0x08)
	struct FName GobiNavModifierEndTag; // 0x1e0(0x08)
	struct UNavArea* NavAreaDisabled; // 0x1e8(0x08)
	struct UNavArea* NavAreaGobiDefault; // 0x1f0(0x08)
	struct TArray<struct UStaticMeshComponent*> Blades; // 0x1f8(0x10)
	struct FName BladesTag; // 0x208(0x08)
	struct TArray<struct APlaceableAudioJostle*> CornAudioJostles; // 0x210(0x10)
	struct FName CornAudioJostleTag; // 0x220(0x08)
	float MinCombineDistanceToAudioJostle; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct UAkComponent* AkVehicle; // 0x230(0x08)
	struct FName AkVehicleTag; // 0x238(0x08)
	struct UAkComponent* AkBlades; // 0x240(0x08)
	struct FName AkBladesTag; // 0x248(0x08)
	struct UItemAkBankComponent* ItemAkBank; // 0x250(0x08)
	struct FName ItemAkBankTag; // 0x258(0x08)
	struct UAkAudioEvent* CombineEngineStart; // 0x260(0x08)
	struct UAkAudioEvent* CombineEngineLoop; // 0x268(0x08)
	struct UAkAudioEvent* CombineEngineExplode; // 0x270(0x08)
	struct UAkAudioEvent* CombineEngineDeath; // 0x278(0x08)
	struct UAkAudioEvent* CombineEngineCrash; // 0x280(0x08)
	struct UAkAudioEvent* BladesLoop; // 0x288(0x08)
	struct UAkAudioEvent* BladesLoopStop; // 0x290(0x08)
	struct UAkAudioEvent* PlantShred; // 0x298(0x08)
	float PlantHitAudioDelayTime; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct UCurveFloat* CombineIgnitionCurve; // 0x2a8(0x08)
	float StartCountdown; // 0x2b0(0x04)
	float CombineIgnitionUpdateRate; // 0x2b4(0x04)
	struct TArray<struct USpotLightComponent*> Spotlights; // 0x2b8(0x10)
	struct FName SpotlightTag; // 0x2c8(0x08)
	float MaxIntensity; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct UParticleSystemComponent* CombineSmokeParticle; // 0x2d8(0x08)
	struct FName CombineSmokeParticleTag; // 0x2e0(0x08)
	struct UParticleSystemComponent* CornShuckGroup; // 0x2e8(0x08)
	struct FName CornShuckGroupTag; // 0x2f0(0x08)
	struct UParticleSystemComponent* CombineWheels; // 0x2f8(0x08)
	struct FName CombineWheelsTag; // 0x300(0x08)
	struct UParticleSystem* CornShuck; // 0x308(0x08)
	float PlantHitVFXDelayTime; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct UParticleSystemComponent* CornSpray; // 0x318(0x08)
	struct FName CornSprayTag; // 0x320(0x08)
	struct UParticleSystemComponent* CombineBloodVFX; // 0x328(0x08)
	struct FName CombineBloodVFXTag; // 0x330(0x08)
	struct UBoxComponent* BladeKillBox; // 0x338(0x08)
	struct FName BladeKillBoxTag; // 0x340(0x08)
	struct UBoxComponent* PushbackVolume; // 0x348(0x08)
	struct FName PushbackVolumeTag; // 0x350(0x08)
	struct UBoxComponent* BladeCornBox; // 0x358(0x08)
	struct FName BladeCornBoxTag; // 0x360(0x08)
	struct AActor* CornStalkClass; // 0x368(0x08)
	struct TArray<enum class EObjectTypeQuery> QueryTypes; // 0x370(0x10)
	float MoveCombineCountdown; // 0x380(0x04)
	char pad_384[0x4]; // 0x384(0x04)
	struct USplineComponent* Spline; // 0x388(0x08)
	struct FName SplineTag; // 0x390(0x08)
	struct UStaticMeshComponent* CombineMesh; // 0x398(0x08)
	struct FName CombineMeshTag; // 0x3a0(0x08)
	float BladeMovementRate; // 0x3a8(0x04)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct UChildActorComponent* ChildActorComponentClass; // 0x3b0(0x08)
	struct FName ChildActorComponentTag; // 0x3b8(0x08)
	bool bIsCombineMoving; // 0x3c0(0x01)
	char pad_3C1[0x3]; // 0x3c1(0x03)
	float CombineDamageAmount; // 0x3c4(0x04)
	struct UGobiDamageType* CombineDamageType; // 0x3c8(0x08)
	struct FName DamageBoneName; // 0x3d0(0x08)
	float CombineBloodDeactiveCountdown; // 0x3d8(0x04)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct AGobiCharacter* HeroBP; // 0x3e0(0x08)
	struct UGobiDamageType* CombinePushbackDamageType; // 0x3e8(0x08)
	enum class EPhysicalSurface PhysicalSurfaceForDamage; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)

	void SetIsGameCoachEnabled(bool bDesiredState); // Function Gobi.CombineComponent.SetIsGameCoachEnabled // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CommonZombieMeshSubsystem
// Size: 0x70 (Inherited: 0x38)
struct UCommonZombieMeshSubsystem : UWorldSubsystem {
	char pad_38[0x8]; // 0x38(0x08)
	struct TArray<struct FMeshMergeConfiguration> MergedMeshes; // 0x40(0x10)
	struct TArray<struct FSkeletalMeshConfigMod> MeshConfigMods; // 0x50(0x10)
	char pad_60[0x10]; // 0x60(0x10)

	void OnZombieMeshRandomSeedSet(); // Function Gobi.CommonZombieMeshSubsystem.OnZombieMeshRandomSeedSet // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.Comms_DialogueSpeaker
// Size: 0x2d8 (Inherited: 0x250)
struct AComms_DialogueSpeaker : AActor {
	char pad_250[0x18]; // 0x250(0x18)
	struct FDataTableRowHandle VoiceRowHandle; // 0x268(0x20)
	struct UAkSimpleComponent* AkComponent; // 0x288(0x08)
	struct UGobiDialogueComponent* DialogueComp; // 0x290(0x08)
	char pad_298[0x18]; // 0x298(0x18)
	struct FString CurrentVoiceLine; // 0x2b0(0x10)
	struct UAkAudioEvent* DialogueStopEvent; // 0x2c0(0x08)
	char pad_2C8[0x10]; // 0x2c8(0x10)

	void VoiceLineFinished(enum class EAkCallbackType CallbackType, struct UAkCallbackInfo* CallbackInfo); // Function Gobi.Comms_DialogueSpeaker.VoiceLineFinished // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CommWheelActionsData
// Size: 0xa8 (Inherited: 0x38)
struct UCommWheelActionsData : UDataAsset {
	struct TMap<enum class ECommWheelAction, struct FCommWheelActionDefinition> ActionDefinitions; // 0x38(0x50)
	struct TArray<struct FCommWheelActionPage> SurvivorActions; // 0x88(0x10)
	struct TArray<struct FCommWheelActionPage> ZombieActions; // 0x98(0x10)
};

// Class Gobi.CommWheelUserWidget
// Size: 0x4b0 (Inherited: 0x450)
struct UCommWheelUserWidget : UGobiUserWidget {
	char pad_450[0x60]; // 0x450(0x60)

	void TriggerSelectedAction(bool bFromButtonReleased); // Function Gobi.CommWheelUserWidget.TriggerSelectedAction // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ConfigSaveGameSubsystem
// Size: 0x38 (Inherited: 0x38)
struct UConfigSaveGameSubsystem : UGameInstanceSubsystem {
};

// Class Gobi.ControlsOptionsPanelUserWidget
// Size: 0x4c0 (Inherited: 0x460)
struct UControlsOptionsPanelUserWidget : UOptionsPanelUserWidget {
	struct UDataTable* CommonActionsTable; // 0x460(0x08)
	struct UDataTable* CommonAxisTable; // 0x468(0x08)
	struct UDataTable* HeroActionsTable; // 0x470(0x08)
	struct UDataTable* HeroAxisTable; // 0x478(0x08)
	struct UDataTable* InfectedActionsTable; // 0x480(0x08)
	struct UDataTable* InfectedAxisTable; // 0x488(0x08)
	struct UDataTable* MovementActionsTable; // 0x490(0x08)
	struct UDataTable* MovementAxisTable; // 0x498(0x08)
	char pad_4A0[0x20]; // 0x4a0(0x20)

	void OnInputUnboundReport(struct FKey Key, struct FText UnboundActionDisplayName, struct FText NewBoundActionDisplayName); // Function Gobi.ControlsOptionsPanelUserWidget.OnInputUnboundReport // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ConversationTrigger
// Size: 0x340 (Inherited: 0x250)
struct AConversationTrigger : AActor {
	struct USceneComponent* InternalRootComponent; // 0x250(0x08)
	bool bTriggersOnFullPartyEnter; // 0x258(0x01)
	bool bTriggerOnce; // 0x259(0x01)
	bool bUseDirectional; // 0x25a(0x01)
	char pad_25B[0x1]; // 0x25b(0x01)
	float MinDirectionalAmount; // 0x25c(0x04)
	bool bUseLookAt; // 0x260(0x01)
	char pad_261[0x3]; // 0x261(0x03)
	float MinLookAtAngle; // 0x264(0x04)
	bool bActivated; // 0x268(0x01)
	bool bDequeueConversationOnPlayerExitTrigger; // 0x269(0x01)
	enum class EInstigatorRule InstigatorRule; // 0x26a(0x01)
	char pad_26B[0x5]; // 0x26b(0x05)
	struct TArray<struct FName> NeededHeroNames; // 0x270(0x10)
	bool bQueueAllChoices; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct TArray<struct FQueuedConversation> ConversationChoices; // 0x288(0x10)
	struct TArray<struct FQueuedConversation> ConversationsToDequeue; // 0x298(0x10)
	struct TArray<struct AConversationTrigger*> ConversationTriggersToDisable; // 0x2a8(0x10)
	char pad_2B8[0x88]; // 0x2b8(0x88)

	void OnHeroExited(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComponent, int32_t OtherBodyIndex); // Function Gobi.ConversationTrigger.OnHeroExited // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CorpseManager
// Size: 0x58 (Inherited: 0x30)
struct UCorpseManager : UObject {
	char pad_30[0x28]; // 0x30(0x28)

	void RegisterCorpse(struct AActor* CorpseActor); // Function Gobi.CorpseManager.RegisterCorpse // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CreditsScreen
// Size: 0x530 (Inherited: 0x530)
struct UCreditsScreen : UUIScreen {
};

// Class Gobi.CreditsUserWidget
// Size: 0x460 (Inherited: 0x460)
struct UCreditsUserWidget : UOptionsPanelUserWidget {

	void SetCreditsText(struct FText InText); // Function Gobi.CreditsUserWidget.SetCreditsText // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CrosshairContainerUserWidget
// Size: 0x458 (Inherited: 0x450)
struct UCrosshairContainerUserWidget : UGobiUserWidget {
	char pad_450[0x8]; // 0x450(0x08)

	void OnLifeStateChanged(struct FGameplayTag NewStateTag, struct FGameplayTag PreviousStateTag); // Function Gobi.CrosshairContainerUserWidget.OnLifeStateChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CrossplayStateUserWidget
// Size: 0x460 (Inherited: 0x450)
struct UCrossplayStateUserWidget : UGobiUserWidget {
	char pad_450[0x10]; // 0x450(0x10)

	void OnSettingsChanged(); // Function Gobi.CrossplayStateUserWidget.OnSettingsChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CustomCollisionChannelMap
// Size: 0x58 (Inherited: 0x38)
struct UCustomCollisionChannelMap : UDataAsset {
	struct FName CustomCollisionChannelNames[0x4]; // 0x38(0x20)
};

// Class Gobi.CustomizationMannequin
// Size: 0x368 (Inherited: 0x250)
struct ACustomizationMannequin : AActor {
	char pad_250[0x38]; // 0x250(0x38)
	struct FCharacterCustomizationSet DesiredCustomizationSet; // 0x288(0x88)
	struct TSoftObjectPtr<UAnimMontage> DesiredIdleAnimation; // 0x310(0x28)
	struct FDataTableRowHandle SecondaryWeaponRow; // 0x338(0x20)
	struct UStaticMeshComponent* WeaponMeshComponent; // 0x358(0x08)
	enum class EHeroMannequinType MannequinType; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)

	void K2_OnGenderSet(bool bIsMale); // Function Gobi.CustomizationMannequin.K2_OnGenderSet // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CustomProjectionInterface
// Size: 0x30 (Inherited: 0x30)
struct UCustomProjectionInterface : UInterface {

	void SetCustomFOV(float InCustomFoV); // Function Gobi.CustomProjectionInterface.SetCustomFOV // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AudioSinkSystem
// Size: 0xf0 (Inherited: 0x88)
struct UAudioSinkSystem : UAkAudioInputObject {
	struct UMediaPlayer* MediaPlayer; // 0x88(0x08)
	char pad_90[0x60]; // 0x90(0x60)
};

// Class Gobi.CutsceneAudioSinkSubsystem
// Size: 0xa8 (Inherited: 0x38)
struct UCutsceneAudioSinkSubsystem : UGameInstanceSubsystem {
	char pad_38[0x10]; // 0x38(0x10)
	struct TMap<struct TWeakObjectPtr<struct UMediaPlayer>, struct UAudioSinkSystem*> MediaPlayerPairs; // 0x48(0x50)
	char pad_98[0x10]; // 0x98(0x10)

	void UnregisterMediaPlayer(struct UMediaPlayer* Player); // Function Gobi.CutsceneAudioSinkSubsystem.UnregisterMediaPlayer // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CutsceneCoordinator
// Size: 0x340 (Inherited: 0x250)
struct ACutsceneCoordinator : AInfo {
	struct FDataTableRowHandle CutsceneDefinitionRowHandle; // 0x250(0x20)
	struct FMulticastInlineDelegate OnIntroFadeOut; // 0x270(0x10)
	struct FMulticastInlineDelegate OnCutsceneSetup; // 0x280(0x10)
	struct FMulticastInlineDelegate OnPlaySequence; // 0x290(0x10)
	struct FMulticastInlineDelegate OnCutsceneCleanup; // 0x2a0(0x10)
	struct FMulticastInlineDelegate OnPhaseChanged; // 0x2b0(0x10)
	enum class ECutsceneControl ControlState; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct ULevelSequence* LevelSequence; // 0x2c8(0x08)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x2d0(0x08)
	struct ULevelSequencePlayer* LevelSequencePlayer; // 0x2d8(0x08)
	struct UPlayerCutsceneSynchronizationComponent* LocalSynchronizationComponent; // 0x2e0(0x08)
	struct TArray<struct UObject*> PreloadedAssets; // 0x2e8(0x10)
	char pad_2F8[0x48]; // 0x2f8(0x48)

	void UpdateLevelStreamingStatus(); // Function Gobi.CutsceneCoordinator.UpdateLevelStreamingStatus // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.CutsceneFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UCutsceneFunctionLibrary : UBlueprintFunctionLibrary {

	struct ACutsceneCoordinator* GetCutsceneCoordinator(struct UObject* WorldContextObject); // Function Gobi.CutsceneFunctionLibrary.GetCutsceneCoordinator // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.StumbleDamageAccumulatorComponent
// Size: 0x1a8 (Inherited: 0xd8)
struct UStumbleDamageAccumulatorComponent : UActorComponent {
	struct FDamageAccumulationConfig Config; // 0xd8(0x58)
	char pad_130[0x78]; // 0x130(0x78)
};

// Class Gobi.DamageCameraShakeComponent
// Size: 0xf0 (Inherited: 0xd8)
struct UDamageCameraShakeComponent : UActorComponent {
	struct TArray<struct FDamageCameraShake> CameraShakes; // 0xd8(0x10)
	char pad_E8[0x8]; // 0xe8(0x08)

	void OnHealthChanged(float NewHealth, float DeltaHealth); // Function Gobi.DamageCameraShakeComponent.OnHealthChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.DamageFilterComponent
// Size: 0x160 (Inherited: 0xd8)
struct UDamageFilterComponent : UActorComponent {
	struct UDamageFilter* InitialOutgoingDamageFilterClass; // 0xd8(0x08)
	char pad_E0[0x80]; // 0xe0(0x80)
};

// Class Gobi.DamageIndicatorPipUserWidget
// Size: 0x4b0 (Inherited: 0x450)
struct UDamageIndicatorPipUserWidget : UGobiUserWidget {
	struct UTexture2D* SmallDamage; // 0x450(0x08)
	struct UTexture2D* MediumDamage; // 0x458(0x08)
	struct UTexture2D* LargeDamage; // 0x460(0x08)
	char pad_468[0x48]; // 0x468(0x48)

	void StartSmallFadeAnim(); // Function Gobi.DamageIndicatorPipUserWidget.StartSmallFadeAnim // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.DamageIndicatorUserWidget
// Size: 0x488 (Inherited: 0x450)
struct UDamageIndicatorUserWidget : UGobiUserWidget {
	struct UGobiUserWidget* DamageIndicatorClass; // 0x450(0x08)
	char pad_458[0x30]; // 0x458(0x30)

	void OnRecentDamageInfoChanged(); // Function Gobi.DamageIndicatorUserWidget.OnRecentDamageInfoChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.StatTrackerBase
// Size: 0x40 (Inherited: 0x30)
struct UStatTrackerBase : UGobiObject {
	struct AController* OwningController; // 0x30(0x08)
	struct UPlayerStatsComponent* StatsComponent; // 0x38(0x08)

	void OnInit(); // Function Gobi.StatTrackerBase.OnInit // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.DamageStatTracker
// Size: 0x90 (Inherited: 0x40)
struct UDamageStatTracker : UStatTrackerBase {
	struct FGameplayTagQuery SnitcherTagsQuery; // 0x40(0x48)
	struct AGobiCharacter* CurrentCharacter; // 0x88(0x08)

	void HandleInflictDamage(struct FDamageInfo DamageInfo); // Function Gobi.DamageStatTracker.HandleInflictDamage // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.DeathGasActor
// Size: 0x2f0 (Inherited: 0x250)
struct ADeathGasActor : AActor {
	struct UCapsuleComponent* SafeZone_Volume; // 0x250(0x08)
	float OriginalMeshRadius; // 0x258(0x04)
	float StartingRadius; // 0x25c(0x04)
	float EndingRadius; // 0x260(0x04)
	float TransitionTime; // 0x264(0x04)
	float WarmupTime; // 0x268(0x04)
	float Duration; // 0x26c(0x04)
	struct TArray<struct UGameplayEffect*> AppliedGameplayEffects; // 0x270(0x10)
	bool bStartImmediately; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	float CurrentEffectRadius; // 0x284(0x04)
	char pad_288[0x10]; // 0x288(0x10)
	struct TMap<struct AGobiCharacter*, struct FDeathGasAppliedEffects> AppliedEffectsMap; // 0x298(0x50)
	enum class EDeathGasState CurrentState; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)

	void OnRep_CurrentState(enum class EDeathGasState OldState); // Function Gobi.DeathGasActor.OnRep_CurrentState // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.DeathGasSpawnComponent
// Size: 0x2b8 (Inherited: 0x1c8)
struct UDeathGasSpawnComponent : UAbilityComponent {
	char pad_1C8[0x8]; // 0x1c8(0x08)
	struct FMulticastInlineDelegate OnDeathGasSpawnEnded; // 0x1d0(0x10)
	struct FName SpawnMontagesName; // 0x1e0(0x08)
	struct TArray<struct UAnimMontage*> SpawnMontages; // 0x1e8(0x10)
	struct FGameplayTagContainer AppliedTags; // 0x1f8(0x20)
	struct FGameplayTagQuery ActivatingActorTagRequirements; // 0x218(0x48)
	struct FDeathGasSpawnTuning DeathGasSpawnTuning; // 0x260(0x20)
	struct ADeathGasActor* DeathGasClass; // 0x280(0x08)
	struct TArray<struct UGameplayEffect*> AppliedGameplayEffects; // 0x288(0x10)
	char pad_298[0x18]; // 0x298(0x18)
	struct FDeathGasSpawnMoveTickData MoveTickData; // 0x2b0(0x08)

	void StopDeathGasSpawn(); // Function Gobi.DeathGasSpawnComponent.StopDeathGasSpawn // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.DecalAnalyticsComponent
// Size: 0x188 (Inherited: 0xd8)
struct UDecalAnalyticsComponent : UActorComponent {
	char pad_D8[0xa8]; // 0xd8(0xa8)
	struct AGameplayAnalyticsManager* AnalyticsManager; // 0x180(0x08)

	void RecordDecalCreation(struct FName DecalName, int32_t DecalPriority, struct FName DecalCategory, bool bHitBucketLimit, bool bHitOverallLimit, bool bHitBucketFadeLimit); // Function Gobi.DecalAnalyticsComponent.RecordDecalCreation // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.DecalDefinition
// Size: 0x100 (Inherited: 0x38)
struct UDecalDefinition : UDataAsset {
	struct FDataTableRowHandle CategoryRowRef; // 0x38(0x20)
	struct UMaterialInstance* Decal; // 0x58(0x08)
	struct FVector2D RotationMinMax; // 0x60(0x08)
	struct FVector2D LifetimeMinMax; // 0x68(0x08)
	struct TArray<struct FDecalDefLifetimeQuality> LifetimePerQuality; // 0x70(0x10)
	struct FVector2D FadeDurationMinMax; // 0x80(0x08)
	struct FVector2D FadeInDelayMinMax; // 0x88(0x08)
	struct FVector2D FadeInDurationMinMax; // 0x90(0x08)
	float FadeScreenSize; // 0x98(0x04)
	float ProjectionDepth; // 0x9c(0x04)
	struct FVector2D ScaleMinMax; // 0xa0(0x08)
	bool ScaleNonUniform; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	struct FVector2D ScaleNonUniformMin; // 0xac(0x08)
	struct FVector2D ScaleNonUniformMax; // 0xb4(0x08)
	bool DirectionStretchEnable; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	struct FVector2D DirectionStretchMinMax; // 0xc0(0x08)
	float DirectionStretchSpawnPercent; // 0xc8(0x04)
	bool bNormal; // 0xcc(0x01)
	bool bLifetimeParams; // 0xcd(0x01)
	bool SoftnessOverride; // 0xce(0x01)
	char pad_CF[0x1]; // 0xcf(0x01)
	float Softness; // 0xd0(0x04)
	bool SubUVOverride; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	int32_t SubUVFrameMin; // 0xd8(0x04)
	int32_t SubUVFrameMax; // 0xdc(0x04)
	bool CurveOverride; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct UCurveLinearColorAtlas* CurveAtlas; // 0xe8(0x08)
	struct UCurveLinearColor* Curve; // 0xf0(0x08)
	int32_t SortOrder; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// Class Gobi.DecalManager
// Size: 0x158 (Inherited: 0x30)
struct UDecalManager : UObject {
	char pad_30[0x128]; // 0x30(0x128)
};

// Class Gobi.DecalSubsystem
// Size: 0x40 (Inherited: 0x38)
struct UDecalSubsystem : UWorldSubsystem {
	struct UDecalManager* DecalManager; // 0x38(0x08)

	void OnResetMission(); // Function Gobi.DecalSubsystem.OnResetMission // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.DeckEditPanelUserWidget
// Size: 0x460 (Inherited: 0x450)
struct UDeckEditPanelUserWidget : UGobiUserWidget {
	enum class EGameplayCardDeckType DeckType; // 0x450(0x01)
	char pad_451[0xf]; // 0x451(0x0f)

	void SetupDeckNavigation(struct UVerticalBox* VBox, struct UCardPaginatorUserWidget* Paginator, struct UUserWidget* FallbackTarget); // Function Gobi.DeckEditPanelUserWidget.SetupDeckNavigation // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.DeckEditScreen
// Size: 0x540 (Inherited: 0x530)
struct UDeckEditScreen : UUIScreen {
	char pad_530[0x10]; // 0x530(0x10)

	void OpenSmallDeckFailedSavePopup(); // Function Gobi.DeckEditScreen.OpenSmallDeckFailedSavePopup // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.DeckManagerScreen
// Size: 0x560 (Inherited: 0x560)
struct UDeckManagerScreen : UHubChildScreen {

	void SetDeckType(enum class EGameplayCardDeckType DeckType); // Function Gobi.DeckManagerScreen.SetDeckType // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.DeckSelectScreen
// Size: 0x530 (Inherited: 0x530)
struct UDeckSelectScreen : UUIScreen {

	void OpenDeletePopup(struct FString DeckName); // Function Gobi.DeckSelectScreen.OpenDeletePopup // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.DedicatedServerConsole
// Size: 0x118 (Inherited: 0x30)
struct UDedicatedServerConsole : UObject {
	char pad_30[0xe8]; // 0x30(0xe8)
};

// Class Gobi.DedicatedServerManager
// Size: 0xdb8 (Inherited: 0x30)
struct UDedicatedServerManager : UObject {
	char pad_30[0xc0]; // 0x30(0xc0)
	double NoMatchmakingTimingOutDelay; // 0xf0(0x08)
	struct UWebServiceFortDediAPI* FortDediAPI; // 0xf8(0x08)
	struct UGobiWebServices* GobiWebServices; // 0x100(0x08)
	struct UMatchmakingPoolManager* MatchmakingPoolManager; // 0x108(0x08)
	char pad_110[0x40]; // 0x110(0x40)
	struct TArray<struct FTaskTimerConfig> TimerConfigs; // 0x150(0x10)
	char pad_160[0x878]; // 0x160(0x878)
	double WaitForConnectionsTime; // 0x9d8(0x08)
	double UnloadDelay; // 0x9e0(0x08)
	char pad_9E8[0xc8]; // 0x9e8(0xc8)
	double ReconnectGracePeriod; // 0xab0(0x08)
	double WaitForPendingSessionParticipantsDuration; // 0xab8(0x08)
	char pad_AC0[0x2f8]; // 0xac0(0x2f8)
};

// Class Gobi.DefibrillatorComponent
// Size: 0x2f0 (Inherited: 0x150)
struct UDefibrillatorComponent : UItemBaseComponent {
	struct FMulticastInlineDelegate OnDefibSucceeded; // 0x150(0x10)
	struct FMulticastInlineDelegate OnDefibFailed; // 0x160(0x10)
	char pad_170[0x58]; // 0x170(0x58)
	struct FDefibillatorMoveTickData MoveTickData; // 0x1c8(0x10)
	float MaxTargetDistance; // 0x1d8(0x04)
	float MinAngleToTarget; // 0x1dc(0x04)
	struct FGameplayTagContainer OwningPlayerBlockingTags; // 0x1e0(0x20)
	struct FGameplayTagContainer OwningPlayerAppliedTags; // 0x200(0x20)
	struct FGameplayTagQuery DefibTargetTagQuery; // 0x220(0x48)
	float RequiredUseTime; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct UAnimMontage* FirstPersonMontage; // 0x270(0x08)
	struct UAnimMontage* ThirdPersonMontage; // 0x278(0x08)
	struct TArray<struct UMontageSet*> TargetMontageSets; // 0x280(0x10)
	float TargetAnimationTime; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct FText OwningPlayerProgressBarText; // 0x298(0x18)
	struct FText TargetProgressBarText; // 0x2b0(0x18)
	struct TArray<struct UGameplayEffect*> ReviveEffects; // 0x2c8(0x10)
	struct UAkAudioEvent* AKEOnBeginUse; // 0x2d8(0x08)
	struct UAkAudioEvent* AKEOnEndUse; // 0x2e0(0x08)
	struct UAkAudioEvent* AKEOnSuccessfulUse; // 0x2e8(0x08)

	void OnRep_MoveTickData(struct FDefibillatorMoveTickData PreviousTargetInfo); // Function Gobi.DefibrillatorComponent.OnRep_MoveTickData // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.DemoDeveloperSettings
// Size: 0x78 (Inherited: 0x40)
struct UDemoDeveloperSettings : UDeveloperSettings {
	struct TSoftClassPtr<UObject> DemoHUDWidget; // 0x40(0x28)
	float PlaybackSpeedStep; // 0x68(0x04)
	float PlaybackSpeedMin; // 0x6c(0x04)
	float PlaybackSpeedMax; // 0x70(0x04)
	float PlaybackJumpStep; // 0x74(0x04)
};

// Class Gobi.DemoHUDUserWidget
// Size: 0x450 (Inherited: 0x450)
struct UDemoHUDUserWidget : UGobiUserWidget {

	struct FText GetTotalReplayTime(); // Function Gobi.DemoHUDUserWidget.GetTotalReplayTime // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.DemoTimeline
// Size: 0x298 (Inherited: 0x148)
struct UDemoTimeline : UWidget {
	struct FSlateBrush BackgroundBrush; // 0x148(0x90)
	struct FDelegate BackgroundBrushDelegate; // 0x1d8(0x10)
	struct FSlateBrush IndicatorBrush; // 0x1e8(0x90)
	struct FDelegate IndicatorBrushDelegate; // 0x278(0x10)
	char pad_288[0x10]; // 0x288(0x10)
};

// Class Gobi.DevOptionsPanelUserWidget
// Size: 0x4f8 (Inherited: 0x460)
struct UDevOptionsPanelUserWidget : UOptionsPanelUserWidget {
	struct TSoftObjectPtr<UAssetTable> SoundbanksTable; // 0x460(0x28)
	char pad_488[0x70]; // 0x488(0x70)

	void ResetFTUESettings(); // Function Gobi.DevOptionsPanelUserWidget.ResetFTUESettings // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.DifficultyManager
// Size: 0x40 (Inherited: 0x30)
struct UDifficultyManager : UObject {
	struct TArray<struct FDifficultyRow> DifficultyData; // 0x30(0x10)
};

// Class Gobi.DifficultyHelper
// Size: 0x30 (Inherited: 0x30)
struct UDifficultyHelper : UBlueprintFunctionLibrary {

	struct FVector2D GetDifficultyVector2D(struct FDifficultyInt Value); // Function Gobi.DifficultyHelper.GetDifficultyVector2D // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.DirectorAnalyticsComponent
// Size: 0x1d8 (Inherited: 0xd8)
struct UDirectorAnalyticsComponent : UActorComponent {
	char pad_D8[0x100]; // 0xd8(0x100)

	void ReceiveSpawningCardFinishedSpawning(struct FSpawningCard SpawningCard, struct UAISpawnDeck* SpawnDeck); // Function Gobi.DirectorAnalyticsComponent.ReceiveSpawningCardFinishedSpawning // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.DirectorCardsPanelUserWidget
// Size: 0x450 (Inherited: 0x450)
struct UDirectorCardsPanelUserWidget : UGobiUserWidget {

	void PlayLoadoutCardsTTSMessage(); // Function Gobi.DirectorCardsPanelUserWidget.PlayLoadoutCardsTTSMessage // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.DirectorCardWeightsConverter
// Size: 0x40 (Inherited: 0x38)
struct UDirectorCardWeightsConverter : UDataAsset {
	bool bUpdate; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Gobi.DismembermentAnimInstance
// Size: 0x2f0 (Inherited: 0x2c0)
struct UDismembermentAnimInstance : UAnimInstance {
	struct FPoseSnapshot PoseSnapshot; // 0x2b8(0x38)
};

// Class Gobi.DistanceMapManager
// Size: 0x90 (Inherited: 0x30)
struct UDistanceMapManager : UObject {
	char pad_30[0x60]; // 0x30(0x60)

	void OnNavDataRegistered(struct ANavigationData* NavData); // Function Gobi.DistanceMapManager.OnNavDataRegistered // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.DistanceMapNavQueryFilter
// Size: 0x50 (Inherited: 0x50)
struct UDistanceMapNavQueryFilter : UNavigationQueryFilter {
};

// Class Gobi.DistanceMapSourceComponent
// Size: 0x4e0 (Inherited: 0x4a0)
struct UDistanceMapSourceComponent : UPrimitiveComponent {
	bool bShouldEnableOnBegin; // 0x4a0(0x01)
	char pad_4A1[0x3]; // 0x4a1(0x03)
	int32_t DebugMapIdx; // 0x4a4(0x04)
	char pad_4A8[0x18]; // 0x4a8(0x18)
	float DistanceThresholdForRegen; // 0x4c0(0x04)
	float SearchDistance; // 0x4c4(0x04)
	bool bRequiresDeltas; // 0x4c8(0x01)
	char pad_4C9[0x3]; // 0x4c9(0x03)
	struct FNavAgentSelector SupportedAgents; // 0x4cc(0x04)
	bool bAllowMultipleSupportedAgents; // 0x4d0(0x01)
	char pad_4D1[0xf]; // 0x4d1(0x0f)

	void OnNavigationGenerationFinished(struct ANavigationData* NavData); // Function Gobi.DistanceMapSourceComponent.OnNavigationGenerationFinished // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.DistanceMapTestActor
// Size: 0x280 (Inherited: 0x250)
struct ADistanceMapTestActor : AActor {
	char pad_250[0x8]; // 0x250(0x08)
	bool bShouldDrawMap; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct ADistanceMapTestActor* TestA; // 0x260(0x08)
	struct ADistanceMapTestActor* TestB; // 0x268(0x08)
	struct FNavAgentSelector SupportedAgents; // 0x270(0x04)
	float SearchDistance; // 0x274(0x04)
	char pad_278[0x8]; // 0x278(0x08)
};

// Class Gobi.Door
// Size: 0x528 (Inherited: 0x250)
struct ADoor : AActor {
	struct USceneComponent* InternalRootComponent; // 0x250(0x08)
	struct USceneComponent* DoorHingeComponent; // 0x258(0x08)
	struct UStaticMeshComponent* DoorMeshComponent; // 0x260(0x08)
	struct UBoxComponent* UseTriggerVolumeComponent; // 0x268(0x08)
	struct UPingableComponent* PingableComponent; // 0x270(0x08)
	struct UAkAcousticPortalComponent* AkAcousticPortalComponent; // 0x278(0x08)
	struct UGobiNavModifierComponent* NavModifierComponent; // 0x280(0x08)
	struct UGobiNavLinkComponent* NavLinkComponent; // 0x288(0x08)
	char pad_290[0x8]; // 0x290(0x08)
	struct UNavRedirectorComponent* NavRedirector; // 0x298(0x08)
	bool bTriggerHorde; // 0x2a0(0x01)
	bool bAffectAISteeringSeparation; // 0x2a1(0x01)
	char pad_2A2[0x6]; // 0x2a2(0x06)
	struct FDoorNavArea DoorNavModifiers; // 0x2a8(0x10)
	struct FDoorNavArea DoorNavLinkAreas; // 0x2b8(0x10)
	bool bShouldStumbleWhenMoving; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct UGobiDamageType* StumbleDamageType; // 0x2d0(0x08)
	struct UAkAudioEvent* SingleOpenStartSound; // 0x2d8(0x08)
	struct UAkAudioEvent* SingleOpenEndSound; // 0x2e0(0x08)
	struct UAkAudioEvent* SingleCloseStartSound; // 0x2e8(0x08)
	struct UAkAudioEvent* SingleCloseEndSound; // 0x2f0(0x08)
	struct UAkAudioEvent* DoubleOpenStartSound; // 0x2f8(0x08)
	struct UAkAudioEvent* DoubleOpenEndSound; // 0x300(0x08)
	struct UAkAudioEvent* DoubleCloseStartSound; // 0x308(0x08)
	struct UAkAudioEvent* DoubleCloseEndSound; // 0x310(0x08)
	struct FMulticastInlineDelegate OnDoorActionBegin; // 0x318(0x10)
	struct FMulticastInlineDelegate OnDoorActionComplete; // 0x328(0x10)
	struct FMulticastInlineDelegate OnDoorInitialized; // 0x338(0x10)
	struct ADoor* SyncedDoor; // 0x348(0x08)
	struct UAnimMontage* OpenAnimation; // 0x350(0x08)
	struct UAnimMontage* AlreadyOpenedAnimation; // 0x358(0x08)
	struct UAnimMontage* CloseAnimation; // 0x360(0x08)
	struct UAnimMontage* ClosedAnimation; // 0x368(0x08)
	struct UCurveFloat* DoorOpenCurve; // 0x370(0x08)
	struct UCurveFloat* DoorCloseCurve; // 0x378(0x08)
	struct FCollisionProfileName DamageVolumeOpenDoorCollision; // 0x380(0x08)
	struct FCollisionProfileName DamageVolumeClosedDoorCollision; // 0x388(0x08)
	char pad_390[0x3c]; // 0x390(0x3c)
	float MovementTime; // 0x3cc(0x04)
	float OpenDelay; // 0x3d0(0x04)
	float AnimationLengthOverride; // 0x3d4(0x04)
	float OpenYawRotation; // 0x3d8(0x04)
	struct FVector OpenLocation; // 0x3dc(0x0c)
	bool bCanOpenReversed; // 0x3e8(0x01)
	bool bStartLocked; // 0x3e9(0x01)
	bool bSingleUse; // 0x3ea(0x01)
	bool bHasCollisionWhenOpen; // 0x3eb(0x01)
	bool bHasCollisionWhenMoving; // 0x3ec(0x01)
	char pad_3ED[0x3]; // 0x3ed(0x03)
	float RequiredUnlockTime; // 0x3f0(0x04)
	bool bAutoClose; // 0x3f4(0x01)
	char pad_3F5[0x3]; // 0x3f5(0x03)
	float AutoCloseTime; // 0x3f8(0x04)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	float NavOpenThreshold; // 0x400(0x04)
	struct FGameplayTag DoorStartOpeningCue; // 0x404(0x08)
	struct FGameplayTag DoorStartClosingCue; // 0x40c(0x08)
	struct FGameplayTag DoorFinishClosingCue; // 0x414(0x08)
	struct FGameplayTag DoorFinishOpeningCue; // 0x41c(0x08)
	struct FGameplayTag HordeStartCue; // 0x424(0x08)
	char pad_42C[0x2c]; // 0x42c(0x2c)
	enum class EDoorState DesiredDoorState; // 0x458(0x01)
	bool bRequestLocked; // 0x459(0x01)
	enum class EAlarmMode AlarmMode; // 0x45a(0x01)
	char pad_45B[0x1]; // 0x45b(0x01)
	float AlarmChance; // 0x45c(0x04)
	float AlarmDuration; // 0x460(0x04)
	float AlarmDamageActivationRange; // 0x464(0x04)
	int32_t HitsToTriggerAlarm; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct FGameplayTagContainer AlarmOmenTags; // 0x470(0x20)
	struct TArray<struct FDoorAlarmAudio> AlarmAudioEvents; // 0x490(0x10)
	struct TArray<struct AActor*> AlarmActors; // 0x4a0(0x10)
	struct UAkComponent* AlarmAkComponent; // 0x4b0(0x08)
	char pad_4B8[0x20]; // 0x4b8(0x20)
	struct TArray<struct USceneComponent*> AlarmSceneComponents; // 0x4d8(0x10)
	char pad_4E8[0x18]; // 0x4e8(0x18)
	struct UAkAudioEvent* AlarmLoop; // 0x500(0x08)
	struct UAkAudioEvent* AlarmLoopStop; // 0x508(0x08)
	struct UAkAudioEvent* AlarmBeepSound; // 0x510(0x08)
	float AlarmBeepRate; // 0x518(0x04)
	enum class EAlarmState AlarmState; // 0x51c(0x01)
	char pad_51D[0xb]; // 0x51d(0x0b)

	void SetEnabled(bool bEnabled); // Function Gobi.Door.SetEnabled // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.DoorAlarmGameCoachLesson
// Size: 0x4c0 (Inherited: 0x488)
struct UDoorAlarmGameCoachLesson : UGobiGameCoachLesson {
	float AlarmTeachDuration; // 0x488(0x04)
	char pad_48C[0x34]; // 0x48c(0x34)
};

// Class Gobi.DoorAlarmGameCoachLessonComponent
// Size: 0x108 (Inherited: 0x108)
struct UDoorAlarmGameCoachLessonComponent : UGameCoachLessonsComponent {
};

// Class Gobi.Drawbridge
// Size: 0x460 (Inherited: 0x250)
struct ADrawbridge : AActor {
	struct USceneComponent* InternalRootComponent; // 0x250(0x08)
	struct UStaticMeshComponent* BridgeStaticMeshComp; // 0x258(0x08)
	struct UStaticMeshComponent* PulleyStaticMeshComp; // 0x260(0x08)
	struct UStaticMeshComponent* PulleyRopeStaticMeshComp; // 0x268(0x08)
	struct USkeletalMeshComponent* CrankSkeletalMeshComp; // 0x270(0x08)
	struct UCableComponent* CrankPulleyCableComp; // 0x278(0x08)
	struct UCableComponent* CrankBridgeCableComp; // 0x280(0x08)
	struct USceneComponent* CableBridgeAttachPoint; // 0x288(0x08)
	struct USceneComponent* CableCrankAttachPoint; // 0x290(0x08)
	struct USceneComponent* CrankLocation; // 0x298(0x08)
	struct UParticleSystemComponent* RopeParticleSystemComp; // 0x2a0(0x08)
	struct UParticleSystemComponent* BridgeImpactParticleSystemComp; // 0x2a8(0x08)
	struct UUsableComponent* UsableComponent; // 0x2b0(0x08)
	struct UBoxComponent* UsableTriggerComponent; // 0x2b8(0x08)
	struct UUsableHighlightComponent* UsableHighlightComp; // 0x2c0(0x08)
	struct UGameplayEffectsComponent* GameplayEffectsComp; // 0x2c8(0x08)
	struct UItemAkBankComponent* ItemAkBankComponent; // 0x2d0(0x08)
	struct UAkComponent* PulleyAKComponent; // 0x2d8(0x08)
	struct UAkComponent* CrankAKComponent; // 0x2e0(0x08)
	struct UAkComponent* BridgeAKComponent; // 0x2e8(0x08)
	struct UBoxComponent* StartLessonTriggerBox; // 0x2f0(0x08)
	struct UGameCoachLessonsComponent* GameCoachLessonsComponent; // 0x2f8(0x08)
	struct FMulticastInlineDelegate OnBridgeFullyLowered; // 0x300(0x10)
	struct UAnimMontage* UseMontage3P; // 0x310(0x08)
	struct FString TriggerHordeReason; // 0x318(0x10)
	struct AActor* GobiNavModifierActor; // 0x328(0x08)
	struct AAISpawnActorVolume* SpawnActorVolume; // 0x330(0x08)
	struct FGameplayTag HordeBlockingTag; // 0x338(0x08)
	float StartingBridgePitch; // 0x340(0x04)
	float EndingBridgePitch; // 0x344(0x04)
	float RopeBreakPct; // 0x348(0x04)
	float RotationProgressMultiplier; // 0x34c(0x04)
	float PulleyMultiplier; // 0x350(0x04)
	float BridgeFallSpeedIncrease; // 0x354(0x04)
	float MaxBridgeFallSpeed; // 0x358(0x04)
	float MaxBridgeToolkitFallSpeed; // 0x35c(0x04)
	struct FWalkableSlopeOverride BridgeLoweredWalkableSlopeOverride; // 0x360(0x10)
	struct TSet<struct TWeakObjectPtr<struct AActor>> ActorsToDestroyWhenLowered; // 0x370(0x50)
	struct TArray<struct UMaterialInterface*> LoweredCrankMaterials; // 0x3c0(0x10)
	float LessonDelay; // 0x3d0(0x04)
	struct FName CableScalarParameterName; // 0x3d4(0x08)
	float CrankBridgeCableMultiplier; // 0x3dc(0x04)
	float CrankPulleyCableMultiplier; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct UAkAudioEvent* AKEPulleyLoop; // 0x3e8(0x08)
	struct UAkAudioEvent* AKEPulleyLoopStop; // 0x3f0(0x08)
	struct UAkAudioEvent* AKEHandleLoop; // 0x3f8(0x08)
	struct UAkAudioEvent* AKEHandleLoopStop; // 0x400(0x08)
	struct UAkAudioEvent* AKEBridgeCreakLoop; // 0x408(0x08)
	struct UAkAudioEvent* AKEBridgeCreakLoopStop; // 0x410(0x08)
	struct UAkAudioEvent* AKEBridgeSquealLoop; // 0x418(0x08)
	struct UAkAudioEvent* AKEBridgeSquealLoopStop; // 0x420(0x08)
	struct UAkAudioEvent* AKEBridgeSquealFall; // 0x428(0x08)
	struct UAkAudioEvent* AKEBridgeImpact; // 0x430(0x08)
	struct UAkAudioEvent* AKEToolkitBridgeImpact; // 0x438(0x08)
	struct FGameplayTag TriggerHordeCue; // 0x440(0x08)
	float BridgeMovementPct; // 0x448(0x04)
	char pad_44C[0x14]; // 0x44c(0x14)

	void PlayerEnteredArea(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Gobi.Drawbridge.PlayerEnteredArea // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.DrenchComponent
// Size: 0x270 (Inherited: 0xd8)
struct UDrenchComponent : UActorComponent {
	char pad_D8[0x114]; // 0xd8(0x114)
	bool bEnabled; // 0x1ec(0x01)
	char pad_1ED[0x3]; // 0x1ed(0x03)
	float FadeTime; // 0x1f0(0x04)
	float HalfLife; // 0x1f4(0x04)
	float MaxStrength; // 0x1f8(0x04)
	float ScaleStrength; // 0x1fc(0x04)
	float MinDecayStrength; // 0x200(0x04)
	float ReplacePct; // 0x204(0x04)
	float DecayDelay; // 0x208(0x04)
	float UpdateDelta; // 0x20c(0x04)
	struct TMap<struct FGameplayTag, struct UMeshMaterialParamSet*> DrenchParams; // 0x210(0x50)
	struct FDrenchReplicatedData IncomingDrench; // 0x260(0x0c)
	char pad_26C[0x4]; // 0x26c(0x04)

	void OnRep_IncomingDrench(); // Function Gobi.DrenchComponent.OnRep_IncomingDrench // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.DrenchAssetUserData
// Size: 0x80 (Inherited: 0x30)
struct UDrenchAssetUserData : UAssetUserData {
	struct TMap<struct FGameplayTag, struct UTexture*> DrenchMaskTextures; // 0x30(0x50)
};

// Class Gobi.DrenchInterface
// Size: 0x30 (Inherited: 0x30)
struct UDrenchInterface : UInterface {
};

// Class Gobi.DynamicSequenceBindingComponent
// Size: 0x150 (Inherited: 0xd8)
struct UDynamicSequenceBindingComponent : UActorComponent {
	struct ALevelSequenceActor* LevelSequenceActor; // 0xd8(0x08)
	struct FGameplayTagContainer BoundActorAppliedTags; // 0xe0(0x20)
	char pad_100[0x50]; // 0x100(0x50)

	bool SetLevelSequenceActor(struct ALevelSequenceActor* NewLevelSequenceActor); // Function Gobi.DynamicSequenceBindingComponent.SetLevelSequenceActor // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.EconomyAnalyticsComponent
// Size: 0x150 (Inherited: 0xd8)
struct UEconomyAnalyticsComponent : UActorComponent {
	char pad_D8[0x68]; // 0xd8(0x68)
	struct UDataTable* EntitlementsTable; // 0x140(0x08)
	char pad_148[0x8]; // 0x148(0x08)

	void TryHandleEntitlements(); // Function Gobi.EconomyAnalyticsComponent.TryHandleEntitlements // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.EffectActor
// Size: 0x2e8 (Inherited: 0x250)
struct AEffectActor : AActor {
	struct UAkComponent* AkComponent; // 0x250(0x08)
	struct TArray<struct FImpactDecalDefinition> Decals; // 0x258(0x10)
	struct TArray<struct UParticleSystem*> BaseEmitters; // 0x268(0x10)
	struct FVector2D LifetimeMinMax; // 0x278(0x08)
	float EmitterFadeOutTime; // 0x280(0x04)
	float DestroyDelay; // 0x284(0x04)
	char pad_288[0x8]; // 0x288(0x08)
	struct UAkAudioEvent* AudioAOELoop; // 0x290(0x08)
	struct UAkAudioEvent* AudioAOELoopStop; // 0x298(0x08)
	float AudioCheckRadius; // 0x2a0(0x04)
	int8_t AudioCheckCountThreshold; // 0x2a4(0x01)
	char pad_2A5[0x37]; // 0x2a5(0x37)
	struct FReplicatedEffectActorInfo ReplicatedEffectActorInfo; // 0x2dc(0x0c)

	void OnRep_ReplicatedEffectActorInfo(); // Function Gobi.EffectActor.OnRep_ReplicatedEffectActorInfo // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.EffectActorSubsystem
// Size: 0x88 (Inherited: 0x38)
struct UEffectActorSubsystem : UWorldSubsystem {
	char pad_38[0x50]; // 0x38(0x50)
};

// Class Gobi.EmissiveScalingComponent
// Size: 0x120 (Inherited: 0xd8)
struct UEmissiveScalingComponent : UActorComponent {
	struct FName EmissiveScalarParamName; // 0xd8(0x08)
	struct FName MaterialSlotName; // 0xe0(0x08)
	struct FGameplayTagContainer SkelMeshComponentTags; // 0xe8(0x20)
	char pad_108[0x18]; // 0x108(0x18)
};

// Class Gobi.EnemyAudioComponent
// Size: 0x5d0 (Inherited: 0x2d8)
struct UEnemyAudioComponent : UCharacterAudioComponent {
	bool bVocalFreeze; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct TArray<struct USoundCollectionAsset*> PossibleSoundCollectionsMale; // 0x2e0(0x10)
	struct TArray<struct USoundCollectionAsset*> PossibleSoundCollectionsFemale; // 0x2f0(0x10)
	struct TArray<struct FName> VocalizationList; // 0x300(0x10)
	char pad_310[0x10]; // 0x310(0x10)
	struct FName IdleName; // 0x320(0x08)
	struct FName BlightedIdleName; // 0x328(0x08)
	struct FVector2D IdleTimerMinMax; // 0x330(0x08)
	struct FVector2D AggroTimerMinMax; // 0x338(0x08)
	struct FVector2D BlightedIdleTimerMinMax; // 0x340(0x08)
	struct FGameplayTag BlightedTag; // 0x348(0x08)
	char pad_350[0x20]; // 0x350(0x20)
	float ChanceToPlayGoreSoundWhenHit; // 0x370(0x04)
	char pad_374[0x4]; // 0x374(0x04)
	struct UAkAudioEvent* BloodSprayAudioEvent; // 0x378(0x08)
	struct UAkAudioEvent* UtilityStopAllAudioEvent; // 0x380(0x08)
	struct TArray<struct FAudioDamageTypeEvent> LocalAudioDamageTypeEvents; // 0x388(0x10)
	struct FGameplayTag DefaultLocalDamageType; // 0x398(0x08)
	struct TArray<struct FAudioDamageTypeEvent> RemoteAudioDamageTypeEvents; // 0x3a0(0x10)
	struct FGameplayTag DefaultRemoteDamageType; // 0x3b0(0x08)
	struct FName HurtName; // 0x3b8(0x08)
	struct FName HurtCriticalName; // 0x3c0(0x08)
	struct TArray<struct UAkAudioEvent*> LocalAttackerHitWeakSpotAudioEvents; // 0x3c8(0x10)
	struct UAkAudioEvent* LocalAttackerGunHitWeakSpotAudioEvents; // 0x3d8(0x08)
	struct UAkAudioEvent* RemoteAttackerHitWeakSpotAudioEvent; // 0x3e0(0x08)
	struct FName DeathName; // 0x3e8(0x08)
	float DelayBeforeOnDeath; // 0x3f0(0x04)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct UAkAudioEvent* ShotgunKillAudioEvent; // 0x3f8(0x08)
	char pad_400[0x10]; // 0x400(0x10)
	struct UAkAudioEvent* DebrisDropLightAudioEvent; // 0x410(0x08)
	float ChanceToPlayDebrisDropLight; // 0x418(0x04)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct UAkAudioEvent* GibBloodLimbAudioEvent; // 0x420(0x08)
	struct UAkAudioEvent* GibBloodHeadAudioEvent; // 0x428(0x08)
	struct UAkAudioEvent* GibHeadAudioEvent; // 0x430(0x08)
	struct UAkAudioEvent* GibLimbAudioEvent; // 0x438(0x08)
	bool bCountTorsoAsHeadless; // 0x440(0x01)
	char pad_441[0x3]; // 0x441(0x03)
	struct FName BodyfallBoneName; // 0x444(0x08)
	struct FName BodyfallName; // 0x44c(0x08)
	bool bUseOnHitDuringRagDoll; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	float CenterToOuterThickness; // 0x458(0x04)
	float BodyfallTimerRate; // 0x45c(0x04)
	char pad_460[0x18]; // 0x460(0x18)
	struct FName EnemyChangedLocalPlayerName; // 0x478(0x08)
	struct FName EnemyChangedName; // 0x480(0x08)
	struct UAkAudioEvent* ArmorHitAudioEvent; // 0x488(0x08)
	struct UAkAudioEvent* ArmorBreakAudioEvent; // 0x490(0x08)
	struct UAkAudioEvent* WallPounceTell; // 0x498(0x08)
	float WallPounceTellRate; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct UAkAudioBank* AudioBank; // 0x4a8(0x08)
	struct UAkAudioEvent* BeginPreSpawnAudioEvent; // 0x4b0(0x08)
	struct FDataTableRowHandle BeginPreSpawnMusicEvent; // 0x4b8(0x20)
	struct UAkAudioEvent* EndPreSpawnAudioEvent; // 0x4d8(0x08)
	struct FDataTableRowHandle EndPreSpawnMusicEvent; // 0x4e0(0x20)
	float PreSpawnRattleTimerRate; // 0x500(0x04)
	float PreSpawnRattleRadius; // 0x504(0x04)
	struct FVector2D PreSpawnRattleLocationOffsetRange; // 0x508(0x08)
	char pad_510[0x30]; // 0x510(0x30)
	float RadiusBarkNearCooldown; // 0x540(0x04)
	float DelayBetweenBehindTellAndAggro; // 0x544(0x04)
	float RadiusBarkFarCooldown; // 0x548(0x04)
	float ChanceToPlayIdleOnEnter; // 0x54c(0x04)
	bool bIgnoreIfNotTargetRadius; // 0x550(0x01)
	bool bEntersFrayDebug; // 0x551(0x01)
	char pad_552[0x2e]; // 0x552(0x2e)
	struct FGameplayTag DespawnTag; // 0x580(0x08)
	char pad_588[0x8]; // 0x588(0x08)
	struct FGameplayTagContainer HitMarkerSlimeTagContainer; // 0x590(0x20)
	struct UAkAudioEvent* HitMarkerSlimeAudioEvent; // 0x5b0(0x08)
	struct UAkAudioEvent* HitMarkerGoreAudioEvent; // 0x5b8(0x08)
	struct UAkAudioEvent* HitMarkerMeleeSwtAudioEvent; // 0x5c0(0x08)
	char pad_5C8[0x8]; // 0x5c8(0x08)

	void StartAfterDeathTimers(); // Function Gobi.EnemyAudioComponent.StartAfterDeathTimers // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.EnvQueryContext_AIActorsInRange
// Size: 0x38 (Inherited: 0x30)
struct UEnvQueryContext_AIActorsInRange : UEnvQueryContext {
	struct FAISenseAffiliationFilter Affiliation; // 0x30(0x04)
	float Radius; // 0x34(0x04)
};

// Class Gobi.EnvQueryContext_Blackboard
// Size: 0x60 (Inherited: 0x30)
struct UEnvQueryContext_Blackboard : UEnvQueryContext {
	struct UBlackboardData* BlackboardAsset; // 0x30(0x08)
	struct FBlackboardKeySelector BlackboardKey; // 0x38(0x28)
};

// Class Gobi.EnvQueryContext_Character
// Size: 0x38 (Inherited: 0x30)
struct UEnvQueryContext_Character : UEnvQueryContext {
	struct AGobiCharacter* CharacterClass; // 0x30(0x08)
};

// Class Gobi.EnvQueryContext_ClosestToObjective
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_ClosestToObjective : UEnvQueryContext {
};

// Class Gobi.EnvQueryContext_CurrentSafeRoom
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_CurrentSafeRoom : UEnvQueryContext {
};

// Class Gobi.EnvQueryContext_NavFloorBase
// Size: 0x38 (Inherited: 0x30)
struct UEnvQueryContext_NavFloorBase : UEnvQueryContext {
	bool bUseAgentRadius; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float SearchRadius; // 0x34(0x04)
};

// Class Gobi.EnvQueryContext_Objective
// Size: 0x68 (Inherited: 0x30)
struct UEnvQueryContext_Objective : UEnvQueryContext {
	struct FAIDataProviderUObjectValue GameplayObjectiveClass; // 0x30(0x38)
};

// Class Gobi.EnvQueryContext_ObjectivePathPointOfScrimmage
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_ObjectivePathPointOfScrimmage : UEnvQueryContext {
};

// Class Gobi.EnvQueryContext_PerceivedActors
// Size: 0x80 (Inherited: 0x30)
struct UEnvQueryContext_PerceivedActors : UEnvQueryContext {
	struct FAISenseAffiliationFilter Affiliation; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FGameplayTagQuery TagQueryToMatch; // 0x38(0x48)
};

// Class Gobi.EnvQueryContext_Player
// Size: 0x78 (Inherited: 0x30)
struct UEnvQueryContext_Player : UEnvQueryContext {
	struct FGameplayTagQuery GameplayTagsQuery; // 0x30(0x48)
};

// Class Gobi.EnvQueryContext_PVPHoldout
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_PVPHoldout : UEnvQueryContext {
};

// Class Gobi.EnvQueryContext_QuerierNavFloor
// Size: 0x40 (Inherited: 0x38)
struct UEnvQueryContext_QuerierNavFloor : UEnvQueryContext_NavFloorBase {
	float SearchHeight; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Gobi.EnvQueryContext_ScenarioData
// Size: 0x38 (Inherited: 0x30)
struct UEnvQueryContext_ScenarioData : UEnvQueryContext {
	struct FGameplayTag ScenarioTag; // 0x30(0x08)
};

// Class Gobi.EnvQueryContext_SpawnContextHero
// Size: 0x38 (Inherited: 0x30)
struct UEnvQueryContext_SpawnContextHero : UEnvQueryContext {
	bool bCurrentHeroOnly; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Gobi.EnvQueryGenerator_ActorsOfTypes
// Size: 0xe0 (Inherited: 0x58)
struct UEnvQueryGenerator_ActorsOfTypes : UEnvQueryGenerator {
	struct TArray<struct FAIDataProviderUObjectValue> ActorTypes; // 0x58(0x10)
	struct FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x68(0x38)
	struct FAIDataProviderFloatValue SearchRadius; // 0xa0(0x38)
	struct UEnvQueryContext* SearchCenter; // 0xd8(0x08)
};

// Class Gobi.EnvQueryGenerator_AICharacters
// Size: 0x1c0 (Inherited: 0x58)
struct UEnvQueryGenerator_AICharacters : UEnvQueryGenerator {
	struct FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x58(0x38)
	struct UEnvQueryContext* SearchCenter; // 0x90(0x08)
	struct FAIDataProviderFloatValue SearchRadius; // 0x98(0x38)
	struct FAIDataProviderGameplayTagQueryContainerValue TagQuery; // 0xd0(0x78)
	struct FAIDataProviderGameplayTagQueryContainerValue SecondaryTagQuery; // 0x148(0x78)
};

// Class Gobi.EnvQueryGenerator_AISpawners
// Size: 0x188 (Inherited: 0x58)
struct UEnvQueryGenerator_AISpawners : UEnvQueryGenerator {
	struct UEnvQueryContext* SearchCenter; // 0x58(0x08)
	struct FAIDataProviderFloatValue SearchRadius; // 0x60(0x38)
	struct FAIDataProviderGameplayTagQueryContainerValue TagQuery; // 0x98(0x78)
	struct FAIDataProviderGameplayTagQueryContainerValue SecondaryTagQuery; // 0x110(0x78)
};

// Class Gobi.EnvQueryGenerator_ItemPickups
// Size: 0x98 (Inherited: 0x58)
struct UEnvQueryGenerator_ItemPickups : UEnvQueryGenerator {
	struct UEnvQueryContext* SearchCenter; // 0x58(0x08)
	struct FAIDataProviderFloatValue SearchRadius; // 0x60(0x38)
};

// Class Gobi.EnvQueryGenerator_NavmeshBordersCentroids
// Size: 0xf0 (Inherited: 0x58)
struct UEnvQueryGenerator_NavmeshBordersCentroids : UEnvQueryGenerator {
	struct UNavigationQueryFilter* NavigationFilter; // 0x58(0x08)
	struct FAIDataProviderFloatValue SearchRadius; // 0x60(0x38)
	struct FAIDataProviderFloatValue SpaceBetween; // 0x98(0x38)
	bool bPlaceOnBorders; // 0xd0(0x01)
	bool bPlaceCentroids; // 0xd1(0x01)
	char pad_D2[0x6]; // 0xd2(0x06)
	struct UEnvQueryContext* Querier; // 0xd8(0x08)
	bool bPlaceAtQuerierLocation; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct UEnvQueryContext* GenerateAround; // 0xe8(0x08)
};

// Class Gobi.EnvQueryGenerator_PathingSpline
// Size: 0x70 (Inherited: 0x58)
struct UEnvQueryGenerator_PathingSpline : UEnvQueryGenerator {
	int32_t NumPointsToConsiderAlongSpline; // 0x58(0x04)
	float DistanceInterval; // 0x5c(0x04)
	int32_t NumPointsToConsiderWide; // 0x60(0x04)
	float WidthInterval; // 0x64(0x04)
	float NavRaycastLength; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class Gobi.EnvQueryGenerator_Perception
// Size: 0x60 (Inherited: 0x58)
struct UEnvQueryGenerator_Perception : UEnvQueryGenerator {
	struct UEnvQueryContext* SearchCenter; // 0x58(0x08)
};

// Class Gobi.EnvQueryGenerator_SingleActor
// Size: 0x60 (Inherited: 0x58)
struct UEnvQueryGenerator_SingleActor : UEnvQueryGenerator {
	struct UEnvQueryContext* ActorContext; // 0x58(0x08)
};

// Class Gobi.EnvQueryGenerator_SmartActorGrid
// Size: 0x70 (Inherited: 0x58)
struct UEnvQueryGenerator_SmartActorGrid : UEnvQueryGenerator {
	struct AAISmartActorBase* SmartActorClass; // 0x58(0x08)
	float SearchRadius; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct UEnvQueryContext* SearchCenter; // 0x68(0x08)
};

// Class Gobi.EnvQueryGenerator_Spiral
// Size: 0x1a8 (Inherited: 0x88)
struct UEnvQueryGenerator_Spiral : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue InnerRadius; // 0x88(0x38)
	struct FAIDataProviderFloatValue OuterRadius; // 0xc0(0x38)
	struct FAIDataProviderIntValue NumberOfLoops; // 0xf8(0x38)
	struct FAIDataProviderFloatValue SpaceBetweenLoops; // 0x130(0x38)
	struct FAIDataProviderFloatValue SpaceBetweenPoints; // 0x168(0x38)
	struct UEnvQueryContext* Center; // 0x1a0(0x08)
};

// Class Gobi.EnvQueryGenerator_Teammates
// Size: 0xd8 (Inherited: 0x58)
struct UEnvQueryGenerator_Teammates : UEnvQueryGenerator {
	bool bPlayersOnly; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FAIDataProviderGameplayTagQueryContainerValue TagQuery; // 0x60(0x78)
};

// Class Gobi.EnvQueryGenerator_TRSPathingGrid
// Size: 0x130 (Inherited: 0x58)
struct UEnvQueryGenerator_TRSPathingGrid : UEnvQueryGenerator {
	struct UNavigationQueryFilter* NavigationFilter; // 0x58(0x08)
	struct FAIDataProviderFloatValue GridHalSize; // 0x60(0x38)
	struct FAIDataProviderFloatValue SpaceBetween; // 0x98(0x38)
	bool bPlaceCentroids; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FAIDataProviderFloatValue CentroidCullDistance; // 0xd8(0x38)
	struct UEnvQueryContext* GenerateAround; // 0x110(0x08)
	struct UEnvQueryContext* Querier; // 0x118(0x08)
	bool bPlaceAtQuerierLocation; // 0x120(0x01)
	bool bSearchNearbyContextOnFail; // 0x121(0x01)
	char pad_122[0x2]; // 0x122(0x02)
	int32_t MinPolysToConsiderAFail; // 0x124(0x04)
	float NearbyContextSearchRange; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
};

// Class Gobi.EnvQueryGenerator_Usables
// Size: 0x98 (Inherited: 0x58)
struct UEnvQueryGenerator_Usables : UEnvQueryGenerator {
	struct UEnvQueryContext* SearchCenter; // 0x58(0x08)
	struct FAIDataProviderFloatValue SearchRadius; // 0x60(0x38)
};

// Class Gobi.EnvQueryGenerator_WallClingLocations
// Size: 0xa0 (Inherited: 0x58)
struct UEnvQueryGenerator_WallClingLocations : UEnvQueryGenerator {
	struct UEnvQueryContext* SearchCenter; // 0x58(0x08)
	struct FAIDataProviderFloatValue SearchRadius; // 0x60(0x38)
	bool bExcludeClaimed; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// Class Gobi.EnvQueryItemType_ActorComponentBase
// Size: 0x38 (Inherited: 0x38)
struct UEnvQueryItemType_ActorComponentBase : UEnvQueryItemType_VectorBase {
};

// Class Gobi.EnvQueryItemType_ActorComponent
// Size: 0x38 (Inherited: 0x38)
struct UEnvQueryItemType_ActorComponent : UEnvQueryItemType_ActorComponentBase {
};

// Class Gobi.EnvQueryItemType_ItemPickup
// Size: 0x38 (Inherited: 0x38)
struct UEnvQueryItemType_ItemPickup : UEnvQueryItemType_Actor {
};

// Class Gobi.EnvQueryItemType_PerceivedActor
// Size: 0x38 (Inherited: 0x38)
struct UEnvQueryItemType_PerceivedActor : UEnvQueryItemType_Actor {
};

// Class Gobi.EnvQueryTest_ActiveAreaSetVisibility
// Size: 0x210 (Inherited: 0x208)
struct UEnvQueryTest_ActiveAreaSetVisibility : UEnvQueryTest {
	int32_t Visibility; // 0x208(0x04)
	char pad_20C[0x4]; // 0x20c(0x04)
};

// Class Gobi.EnvQueryTest_ActiveAreaSetVisibilityCount
// Size: 0x208 (Inherited: 0x208)
struct UEnvQueryTest_ActiveAreaSetVisibilityCount : UEnvQueryTest {
};

// Class Gobi.EnvQueryTest_CanHearSpawnActor
// Size: 0x218 (Inherited: 0x208)
struct UEnvQueryTest_CanHearSpawnActor : UEnvQueryTest {
	struct UEnvQueryContext* ListenerContext; // 0x208(0x08)
	float ListenerZOffset; // 0x210(0x04)
	char pad_214[0x4]; // 0x214(0x04)
};

// Class Gobi.EnvQueryTest_CanSeeSpawnActor
// Size: 0x218 (Inherited: 0x208)
struct UEnvQueryTest_CanSeeSpawnActor : UEnvQueryTest {
	struct UEnvQueryContext* LookerContext; // 0x208(0x08)
	float LookerZOffset; // 0x210(0x04)
	char pad_214[0x4]; // 0x214(0x04)
};

// Class Gobi.EnvQueryTest_CheckGameplayTags
// Size: 0x318 (Inherited: 0x208)
struct UEnvQueryTest_CheckGameplayTags : UEnvQueryTest {
	struct FAIDataProviderGameplayTagQueryContainerValue TagQuery; // 0x208(0x78)
	bool bUseTagQuery; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct FAIDataProviderGameplayTagContainerValue TagsToCheck; // 0x288(0x50)
	enum class EGameplayContainerMatchType DefaultCheckOption; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FAIDataProviderIntValue CheckOption; // 0x2e0(0x38)
};

// Class Gobi.EnvQueryTest_CreationTime
// Size: 0x208 (Inherited: 0x208)
struct UEnvQueryTest_CreationTime : UEnvQueryTest {
};

// Class Gobi.EnvQueryTest_DeltaMap
// Size: 0x218 (Inherited: 0x208)
struct UEnvQueryTest_DeltaMap : UEnvQueryTest {
	struct UEnvQueryContext* DeltaMapSource; // 0x208(0x08)
	struct FNavAgentSelector DeltaMapNavMesh; // 0x210(0x04)
	enum class EEnvItemStatus ItemsWithNoDeltaShould; // 0x214(0x01)
	char pad_215[0x3]; // 0x215(0x03)
};

// Class Gobi.EnvQueryTest_Directness
// Size: 0x218 (Inherited: 0x208)
struct UEnvQueryTest_Directness : UEnvQueryTest {
	struct UEnvQueryContext* DirectnessTo; // 0x208(0x08)
	struct UEnvQueryContext* DirectnessFrom; // 0x210(0x08)
};

// Class Gobi.EnvQueryTest_DirectnessDistance
// Size: 0x220 (Inherited: 0x208)
struct UEnvQueryTest_DirectnessDistance : UEnvQueryTest {
	struct UEnvQueryContext* DirectnessTo; // 0x208(0x08)
	struct UEnvQueryContext* DirectnessFrom; // 0x210(0x08)
	float DistanceRadius; // 0x218(0x04)
	char pad_21C[0x4]; // 0x21c(0x04)
};

// Class Gobi.EnvQueryTest_DistanceAlongGoldenPathDelta
// Size: 0x210 (Inherited: 0x208)
struct UEnvQueryTest_DistanceAlongGoldenPathDelta : UEnvQueryTest {
	struct UEnvQueryContext* HeroContext; // 0x208(0x08)
};

// Class Gobi.EnvQueryTest_DistanceMapBase
// Size: 0x2a8 (Inherited: 0x208)
struct UEnvQueryTest_DistanceMapBase : UEnvQueryTest {
	enum class EDMapDirectionMode DirectionMode; // 0x208(0x01)
	bool bUseDirectionModeDataProvider; // 0x209(0x01)
	char pad_20A[0x6]; // 0x20a(0x06)
	struct FAIDataProviderIntValue DirectionModeDataProvider; // 0x210(0x38)
	enum class ERelativeDistanceMode RelativeDistanceMode; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct FAIDataProviderFloatValue RelativeDistancePadding; // 0x250(0x38)
	struct UEnvQueryContext* RelativeDistanceSources; // 0x288(0x08)
	enum class EEnvItemStatus ItemResultWhenNoRelativeSourcesOnMap; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	struct FNavAgentSelector DistanceMapNavMesh; // 0x294(0x04)
	struct UEnvQueryContext* DistanceMapSource; // 0x298(0x08)
	enum class EEnvItemStatus ItemsNotOnMapShould; // 0x2a0(0x01)
	bool bInvertScore; // 0x2a1(0x01)
	char pad_2A2[0x6]; // 0x2a2(0x06)
};

// Class Gobi.EnvQueryTest_DistanceMap
// Size: 0x2a8 (Inherited: 0x2a8)
struct UEnvQueryTest_DistanceMap : UEnvQueryTest_DistanceMapBase {
};

// Class Gobi.EnvQueryTest_DistanceMapBasic
// Size: 0x218 (Inherited: 0x208)
struct UEnvQueryTest_DistanceMapBasic : UEnvQueryTest {
	struct UEnvQueryContext* DistanceMapSource; // 0x208(0x08)
	struct FNavAgentSelector DistanceMapNavMesh; // 0x210(0x04)
	enum class EEnvItemStatus ItemsWithNoDistanceShould; // 0x214(0x01)
	char pad_215[0x3]; // 0x215(0x03)
};

// Class Gobi.EnvQueryTest_DistanceMapItem
// Size: 0x2a8 (Inherited: 0x2a8)
struct UEnvQueryTest_DistanceMapItem : UEnvQueryTest_DistanceMapBase {
};

// Class Gobi.EnvQueryTest_EnemyClaim
// Size: 0x278 (Inherited: 0x208)
struct UEnvQueryTest_EnemyClaim : UEnvQueryTest {
	struct FAIDataProviderIntValue InitialEnemyMaxDP; // 0x208(0x38)
	struct FAIDataProviderFloatValue ClaimRadiusDP; // 0x240(0x38)
};

// Class Gobi.EnvQueryTest_EnemyDamageBase
// Size: 0x2a0 (Inherited: 0x208)
struct UEnvQueryTest_EnemyDamageBase : UEnvQueryTest {
	struct FGameplayTagQuery TagRequirements; // 0x208(0x48)
	struct FGameplayTagQuery FilterTagRequirements; // 0x250(0x48)
	bool bOwnerDamageOnly; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
};

// Class Gobi.EnvQueryTest_EnemyDamageAmount
// Size: 0x2a8 (Inherited: 0x2a0)
struct UEnvQueryTest_EnemyDamageAmount : UEnvQueryTest_EnemyDamageBase {
	bool bUseDamagePrecent; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
};

// Class Gobi.EnvQueryTest_EnemyDamageAttackable
// Size: 0x3c8 (Inherited: 0x2a0)
struct UEnvQueryTest_EnemyDamageAttackable : UEnvQueryTest_EnemyDamageBase {
	struct FAIDataProviderIntValue MaxAttackFailures; // 0x2a0(0x38)
	bool bUseAttackTime; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FAIDataProviderFloatValue MaxTimeSinceAttackFailure; // 0x2e0(0x38)
	bool bUseAttackDistance; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct FAIDataProviderBoolValue UseAttackLocation; // 0x320(0x38)
	struct FAIDataProviderFloatValue MinDistanceSinceAttackFailure; // 0x358(0x38)
	struct FAIDataProviderFloatValue MaxDistance; // 0x390(0x38)
};

// Class Gobi.EnvQueryTest_EnemyDamageLocation
// Size: 0x2a8 (Inherited: 0x2a0)
struct UEnvQueryTest_EnemyDamageLocation : UEnvQueryTest_EnemyDamageBase {
	bool bUseAttackLocation; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
};

// Class Gobi.EnvQueryTest_EnemyDamageTime
// Size: 0x2a8 (Inherited: 0x2a0)
struct UEnvQueryTest_EnemyDamageTime : UEnvQueryTest_EnemyDamageBase {
	enum class EEnemyDaamgeTimeSpan Timespan; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
};

// Class Gobi.EnvQueryTest_GoldenPathDistance
// Size: 0x210 (Inherited: 0x208)
struct UEnvQueryTest_GoldenPathDistance : UEnvQueryTest {
	enum class EGoldenPathDistanceMode Mode; // 0x208(0x04)
	char pad_20C[0x4]; // 0x20c(0x04)
};

// Class Gobi.EnvQueryTest_HasPathedToRecently
// Size: 0x240 (Inherited: 0x208)
struct UEnvQueryTest_HasPathedToRecently : UEnvQueryTest {
	float TimeSinceLastPathfind; // 0x208(0x04)
	char pad_20C[0x4]; // 0x20c(0x04)
	struct UBlackboardData* BlackboardAsset; // 0x210(0x08)
	struct FBlackboardKeySelector PathFollowInfoBBKey; // 0x218(0x28)
};

// Class Gobi.EnvQueryTest_HasTakenDamage
// Size: 0x208 (Inherited: 0x208)
struct UEnvQueryTest_HasTakenDamage : UEnvQueryTest {
};

// Class Gobi.EnvQueryTest_HealthPercentage
// Size: 0x208 (Inherited: 0x208)
struct UEnvQueryTest_HealthPercentage : UEnvQueryTest {
};

// Class Gobi.EnvQueryTest_HeroHasEverSeen
// Size: 0x208 (Inherited: 0x208)
struct UEnvQueryTest_HeroHasEverSeen : UEnvQueryTest {
};

// Class Gobi.EnvQueryTest_HeroLOS
// Size: 0x208 (Inherited: 0x208)
struct UEnvQueryTest_HeroLOS : UEnvQueryTest {
};

// Class Gobi.EnvQueryTest_HoldoutPlayAreaBox
// Size: 0x208 (Inherited: 0x208)
struct UEnvQueryTest_HoldoutPlayAreaBox : UEnvQueryTest {
};

// Class Gobi.EnvQueryTest_HoldoutSafeZone
// Size: 0x208 (Inherited: 0x208)
struct UEnvQueryTest_HoldoutSafeZone : UEnvQueryTest {
};

// Class Gobi.EnvQueryTest_InActiveAreaSet
// Size: 0x208 (Inherited: 0x208)
struct UEnvQueryTest_InActiveAreaSet : UEnvQueryTest {
};

// Class Gobi.EnvQueryTest_InOrder
// Size: 0x208 (Inherited: 0x208)
struct UEnvQueryTest_InOrder : UEnvQueryTest {
};

// Class Gobi.EnvQueryTest_InSafeRoom
// Size: 0x208 (Inherited: 0x208)
struct UEnvQueryTest_InSafeRoom : UEnvQueryTest {
};

// Class Gobi.EnvQueryTest_InSneakVolume
// Size: 0x208 (Inherited: 0x208)
struct UEnvQueryTest_InSneakVolume : UEnvQueryTest {
};

// Class Gobi.EnvQueryTest_IsAggro
// Size: 0x208 (Inherited: 0x208)
struct UEnvQueryTest_IsAggro : UEnvQueryTest {
};

// Class Gobi.EnvQueryTest_IsBotAggro
// Size: 0x208 (Inherited: 0x208)
struct UEnvQueryTest_IsBotAggro : UEnvQueryTest {
};

// Class Gobi.EnvQueryTest_IsClaimed
// Size: 0x218 (Inherited: 0x208)
struct UEnvQueryTest_IsClaimed : UEnvQueryTest {
	struct UEnvQueryContext* Querier; // 0x208(0x08)
	float ClaimRadius; // 0x210(0x04)
	enum class ERadiusOperation RadiusOperation; // 0x214(0x01)
	enum class EEnvItemStatus ItemsClaimingTheirPositionShould; // 0x215(0x01)
	char pad_216[0x2]; // 0x216(0x02)
};

// Class Gobi.EnvQueryTest_IsCurrentEnemy
// Size: 0x240 (Inherited: 0x208)
struct UEnvQueryTest_IsCurrentEnemy : UEnvQueryTest {
	struct FAIDataProviderFloatValue StickyTimeDP; // 0x208(0x38)
};

// Class Gobi.EnvQueryTest_IsHostile
// Size: 0x208 (Inherited: 0x208)
struct UEnvQueryTest_IsHostile : UEnvQueryTest {
};

// Class Gobi.EnvQueryTest_IsInTeamRange
// Size: 0x208 (Inherited: 0x208)
struct UEnvQueryTest_IsInTeamRange : UEnvQueryTest {
};

// Class Gobi.EnvQueryTest_IsLocInTeamRange
// Size: 0x208 (Inherited: 0x208)
struct UEnvQueryTest_IsLocInTeamRange : UEnvQueryTest {
};

// Class Gobi.EnvQueryTest_IsPerceived
// Size: 0x210 (Inherited: 0x208)
struct UEnvQueryTest_IsPerceived : UEnvQueryTest {
	float MaxStimulusAge; // 0x208(0x04)
	char pad_20C[0x4]; // 0x20c(0x04)
};

// Class Gobi.EnvQueryTest_IsSmartActorEnabledForAI
// Size: 0x248 (Inherited: 0x208)
struct UEnvQueryTest_IsSmartActorEnabledForAI : UEnvQueryTest {
	bool bUseQueryOwner; // 0x208(0x01)
	char pad_209[0x7]; // 0x209(0x07)
	struct FAIDataProviderUObjectValue AIClass; // 0x210(0x38)
};

// Class Gobi.EnvQueryTest_IsWallClingLocation
// Size: 0x208 (Inherited: 0x208)
struct UEnvQueryTest_IsWallClingLocation : UEnvQueryTest {
};

// Class Gobi.EnvQueryTest_ItemPickupScore
// Size: 0x210 (Inherited: 0x208)
struct UEnvQueryTest_ItemPickupScore : UEnvQueryTest {
	bool bForTeammates; // 0x208(0x01)
	char pad_209[0x7]; // 0x209(0x07)
};

// Class Gobi.EnvQueryTest_MapSpatialInfoCellSize
// Size: 0x208 (Inherited: 0x208)
struct UEnvQueryTest_MapSpatialInfoCellSize : UEnvQueryTest {
};

// Class Gobi.EnvQueryTest_NotAggroOrOld
// Size: 0x210 (Inherited: 0x208)
struct UEnvQueryTest_NotAggroOrOld : UEnvQueryTest {
	float OldThreshold; // 0x208(0x04)
	char pad_20C[0x4]; // 0x20c(0x04)
};

// Class Gobi.EnvQueryTest_PlayerSpawnInfluence
// Size: 0x210 (Inherited: 0x208)
struct UEnvQueryTest_PlayerSpawnInfluence : UEnvQueryTest {
	float DefaultScore; // 0x208(0x04)
	char pad_20C[0x4]; // 0x20c(0x04)
};

// Class Gobi.EnvQueryTest_RescuePointOccupied
// Size: 0x210 (Inherited: 0x208)
struct UEnvQueryTest_RescuePointOccupied : UEnvQueryTest {
	enum class ERescueOccupiedMatchType MatchType; // 0x208(0x04)
	char pad_20C[0x4]; // 0x20c(0x04)
};

// Class Gobi.EnvQueryTest_ThreatLevel
// Size: 0x208 (Inherited: 0x208)
struct UEnvQueryTest_ThreatLevel : UEnvQueryTest {
};

// Class Gobi.EnvQueryTest_TimeInActiveAreaSet
// Size: 0x210 (Inherited: 0x208)
struct UEnvQueryTest_TimeInActiveAreaSet : UEnvQueryTest {
	bool bZeroIfNotVisible; // 0x208(0x01)
	char pad_209[0x7]; // 0x209(0x07)
};

// Class Gobi.EnvQueryTest_TRSTrace
// Size: 0x338 (Inherited: 0x208)
struct UEnvQueryTest_TRSTrace : UEnvQueryTest {
	struct FEnvTraceData TraceData; // 0x208(0x30)
	enum class ETRSTraceType Type; // 0x238(0x01)
	char pad_239[0x3]; // 0x239(0x03)
	float ArcParam; // 0x23c(0x04)
	float ArcSimFrequency; // 0x240(0x04)
	float ArcMaxSimTime; // 0x244(0x04)
	struct FAIDataProviderBoolValue TraceFromContext; // 0x248(0x38)
	struct FAIDataProviderFloatValue ItemHeightOffset; // 0x280(0x38)
	struct FAIDataProviderFloatValue ItemDirectionOffset; // 0x2b8(0x38)
	struct FAIDataProviderFloatValue ContextHeightOffset; // 0x2f0(0x38)
	struct UEnvQueryContext* Context; // 0x328(0x08)
	bool bVLOGTrace; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
};

// Class Gobi.EnvQueryTest_UsableScore
// Size: 0x208 (Inherited: 0x208)
struct UEnvQueryTest_UsableScore : UEnvQueryTest {
};

// Class Gobi.EnvQueryTest_Voronoi
// Size: 0x218 (Inherited: 0x208)
struct UEnvQueryTest_Voronoi : UEnvQueryTest {
	struct UEnvQueryContext* RegionSource; // 0x208(0x08)
	struct UEnvQueryContext* SampleSources; // 0x210(0x08)
};

// Class Gobi.EnvQueryTest_VoronoiDepth
// Size: 0x218 (Inherited: 0x208)
struct UEnvQueryTest_VoronoiDepth : UEnvQueryTest {
	struct UEnvQueryContext* RegionSource; // 0x208(0x08)
	struct UEnvQueryContext* SampleSources; // 0x210(0x08)
};

// Class Gobi.EnvQueryContext_FurthestCapableHero
// Size: 0x48 (Inherited: 0x30)
struct UEnvQueryContext_FurthestCapableHero : UEnvQueryContext {
	enum class ECapablePlayerDistanceMode DistanceMode; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UEnvQueryContext* DistanceMapSource; // 0x38(0x08)
	struct FNavAgentSelector DistanceMapNavMesh; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Gobi.EQTest_IsSmartActorAvailable
// Size: 0x208 (Inherited: 0x208)
struct UEQTest_IsSmartActorAvailable : UEnvQueryTest {
};

// Class Gobi.EQTest_VoronoiDistanceMapCell
// Size: 0x218 (Inherited: 0x208)
struct UEQTest_VoronoiDistanceMapCell : UEnvQueryTest {
	struct UEnvQueryContext* CellSource; // 0x208(0x08)
	struct FNavAgentSelector DistanceMapNavMesh; // 0x210(0x04)
	enum class EEnvItemStatus ItemsWithNoCellShould; // 0x214(0x01)
	char pad_215[0x3]; // 0x215(0x03)
};

// Class Gobi.ExplodingBarrel
// Size: 0x2e0 (Inherited: 0x250)
struct AExplodingBarrel : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x250(0x08)
	struct UExplosionComponent* ExplosionComponent; // 0x258(0x08)
	struct UParticleSystemComponent* BurnSmoke; // 0x260(0x08)
	struct UBoxComponent* NavModifierVolume; // 0x268(0x08)
	struct UPingableComponent* PingableComponent; // 0x270(0x08)
	struct UBoxComponent* PingableVolume; // 0x278(0x08)
	struct UHealthComponent* HealthComponent; // 0x280(0x08)
	struct UGobiNavModifierComponent* GobiNavModifierComponent; // 0x288(0x08)
	struct UHighlightComponent* HighlightComponent; // 0x290(0x08)
	struct UGameplayEffectsComponent* GameplayEffectsComponent; // 0x298(0x08)
	float SmokeEmitterDuration; // 0x2a0(0x04)
	float RandomHealthMin; // 0x2a4(0x04)
	float RandomHealthMax; // 0x2a8(0x04)
	struct FCollisionProfileName AfterExplosionCollision; // 0x2ac(0x08)
	float XYImpulseMin; // 0x2b4(0x04)
	float XYImpulseMax; // 0x2b8(0x04)
	float ZImpulseMin; // 0x2bc(0x04)
	float ZImpulseMax; // 0x2c0(0x04)
	float LocalRotationXYMin; // 0x2c4(0x04)
	float LocalRotationXYMax; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct UObject* InitialFlame; // 0x2d0(0x08)
	struct UStaticMesh* ExplodedStaticMesh; // 0x2d8(0x08)

	void BarrelExploded(struct UHealthComponent* InHealthComponent); // Function Gobi.ExplodingBarrel.BarrelExploded // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ExplosionComponent
// Size: 0x390 (Inherited: 0x220)
struct UExplosionComponent : USceneComponent {
	struct FExplosionConfig Config; // 0x220(0x100)
	char pad_320[0x8]; // 0x320(0x08)
	struct FMulticastInlineDelegate OnDebugVisualizeAddSplineComponent; // 0x328(0x10)
	struct FMulticastInlineDelegate OnExploded; // 0x338(0x10)
	float InRangeReticleRadius; // 0x348(0x04)
	char pad_34C[0x44]; // 0x34c(0x44)

	void SetLastHitPhysMat(struct UPhysicalMaterial* PhysMat); // Function Gobi.ExplosionComponent.SetLastHitPhysMat // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ExplosionTrait
// Size: 0x140 (Inherited: 0x30)
struct UExplosionTrait : UTrait {
	struct FExplosionConfig Config; // 0x30(0x100)
	struct FGameplayTag ComponentTag; // 0x130(0x08)
	struct UExplosionComponent* ExplosionComponentClass; // 0x138(0x08)
};

// Class Gobi.FallingRockComponent
// Size: 0x120 (Inherited: 0xd8)
struct UFallingRockComponent : UActorComponent {
	enum class EFallingRockState State; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct TArray<struct FFallingRockTell> FallTells; // 0xe0(0x10)
	float ExplodeDuration; // 0xf0(0x04)
	struct FGameplayTag ImpactEffectParticleSystemTag; // 0xf4(0x08)
	char pad_FC[0x24]; // 0xfc(0x24)

	void OnRep_State(enum class EFallingRockState OldState); // Function Gobi.FallingRockComponent.OnRep_State // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.FireModeBaseComponent
// Size: 0x788 (Inherited: 0x150)
struct UFireModeBaseComponent : UItemBaseComponent {
	char pad_150[0x2cc]; // 0x150(0x2cc)
	char RemoteClientFireParity; // 0x41c(0x01)
	char pad_41D[0x3]; // 0x41d(0x03)
	struct UAnimMontage* LastKnownFirstPersonMontage; // 0x420(0x08)
	enum class EWeaponFireBehavior WeaponFireBehavior; // 0x428(0x01)
	bool bWantsRechamber; // 0x429(0x01)
	bool bAllowInputBuffering; // 0x42a(0x01)
	int8_t ShotsPerBurst; // 0x42b(0x01)
	int8_t AmmoRequiredPerShot; // 0x42c(0x01)
	bool bIsMountedWeapon; // 0x42d(0x01)
	char pad_42E[0x2]; // 0x42e(0x02)
	struct FGameplayTag MountedWeaponMeshTag; // 0x430(0x08)
	struct UGobiDamageType* DamageType; // 0x438(0x08)
	struct FAssetLookupWeaponTracerContainer WeaponTracer; // 0x440(0x18)
	uint32_t TracerRate; // 0x458(0x04)
	struct FVector2D TracerForwardVelocityMinMax; // 0x45c(0x08)
	struct FVector2D Tracer3PForwardVelocityMinMax; // 0x464(0x08)
	float TracerRibbonWidthFP; // 0x46c(0x04)
	float TracerRibbonWidth3P; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct UParticleSystem* MuzzleFlashParticleFP; // 0x478(0x08)
	struct UParticleSystem* MuzzleFlashLoopingParticleFP; // 0x480(0x08)
	struct UParticleSystem* MuzzleFlashParticle3P; // 0x488(0x08)
	struct UParticleSystem* MuzzleFlashLoopingParticle3P; // 0x490(0x08)
	float LoopingShellEjectRate; // 0x498(0x04)
	struct FVector ShellEjectVelocity; // 0x49c(0x0c)
	struct UParticleSystem* ShellEjectParticleFP; // 0x4a8(0x08)
	struct UParticleSystem* ShellEjectLoopingParticleFP; // 0x4b0(0x08)
	struct UParticleSystem* ShellEjectParticle3P; // 0x4b8(0x08)
	struct UParticleSystem* ShellEjectLoopingParticle3P; // 0x4c0(0x08)
	struct FGameplayTag ImpactCue; // 0x4c8(0x08)
	struct FGameplayTag ShotFiredCue; // 0x4d0(0x08)
	struct FAssetLookupName MuzzleSocketName; // 0x4d8(0x18)
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x4f0(0x08)
	bool bForceFeedbackIsLooping; // 0x4f8(0x01)
	char pad_4F9[0x3]; // 0x4f9(0x03)
	struct FTriggerEffectsDefinition TriggerEffects; // 0x4fc(0x0c)
	struct FGameplayTagContainer BlockingTags; // 0x508(0x20)
	struct FGameplayTagContainer FiringStateAppliedTags; // 0x528(0x20)
	struct FGameplayTagContainer RechamberStateAppliedTags; // 0x548(0x20)
	struct FGameplayTagContainer AnimationCancellingTags; // 0x568(0x20)
	int32_t MinShotsBeforeAkLoop; // 0x588(0x04)
	struct FName FireRateRTPC; // 0x58c(0x08)
	char pad_594[0x4]; // 0x594(0x04)
	struct FAssetLookupAkAudioEventArray FirstPersonFireSingleEvents; // 0x598(0x20)
	struct FAssetLookupAkAudioEventArray FirstPersonFireSingleUnderBurstEvents; // 0x5b8(0x20)
	struct FAssetLookupAkAudioEventArray FirstPersonFireLoopEvents; // 0x5d8(0x20)
	struct FAssetLookupAkAudioEventArray FirstPersonFireLoopStopEvents; // 0x5f8(0x20)
	struct FAssetLookupAkAudioEvent ThirdPersonFireSingleEvent; // 0x618(0x18)
	struct FAssetLookupAkAudioEvent ThirdPersonFireLoopEvent; // 0x630(0x18)
	struct FAssetLookupAkAudioEvent ThirdPersonFireLoopStopEvent; // 0x648(0x18)
	struct FAssetLookupAkAudioEvent LastShotFireEvent; // 0x660(0x18)
	struct FAssetLookupAkAudioEvent DryFireEvent; // 0x678(0x18)
	struct FAssetLookupAkAudioEvent WhizByEvent; // 0x690(0x18)
	struct UAkAudioEvent* WindupLoopAudio; // 0x6a8(0x08)
	struct UAkAudioEvent* WindupLoopStopAudio; // 0x6b0(0x08)
	bool bFireNotPressedForThirdPersonSingle; // 0x6b8(0x01)
	char pad_6B9[0x3]; // 0x6b9(0x03)
	float WhizByMaxDistance; // 0x6bc(0x04)
	struct FAssetLookupMontageArray FireMontagesFP; // 0x6c0(0x20)
	struct FAssetLookupMontageArray FireMontages3P; // 0x6e0(0x20)
	struct FAssetLookupMontageArray RechamberMontagesFP; // 0x700(0x20)
	struct FAssetLookupMontageArray RechamberMontages3P; // 0x720(0x20)
	struct TArray<struct UGameplayEffect*> AppliedEffects; // 0x740(0x10)
	struct FFireModeBaseTuning FireModeBaseTuning; // 0x750(0x34)
	float DelayBetweenAlerts; // 0x784(0x04)

	void OnRep_RemoteClientFireParity(char OldValue); // Function Gobi.FireModeBaseComponent.OnRep_RemoteClientFireParity // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.FireModeMachineGunComponent
// Size: 0x228 (Inherited: 0x150)
struct UFireModeMachineGunComponent : UItemBaseComponent {
	char pad_150[0x2c]; // 0x150(0x2c)
	float WindUpTime; // 0x17c(0x04)
	float MaxDamageDistance; // 0x180(0x04)
	float DelayBetweenDamageTicks; // 0x184(0x04)
	struct UGobiDamageType* DamageType; // 0x188(0x08)
	struct FCollisionProfileName ImpactTraceProfile; // 0x190(0x08)
	struct FCollisionProfileName ImpactEffectOverlapProfile; // 0x198(0x08)
	float ImpactEffectRadius; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct TArray<struct UGameplayEffect*> ImpactLocationGameplayEffects; // 0x1a8(0x10)
	struct FGameplayTag GunMeshTag; // 0x1b8(0x08)
	float MaxVisualTraceLength; // 0x1c0(0x04)
	float DelayBetweenVisualTraces; // 0x1c4(0x04)
	struct UAkAudioEvent* WindupLoopAudio; // 0x1c8(0x08)
	struct UAkAudioEvent* WindupLoopStopAudio; // 0x1d0(0x08)
	struct UAkAudioEvent* FireLoopAudio; // 0x1d8(0x08)
	struct UAkAudioEvent* FireLoopStopAudio; // 0x1e0(0x08)
	struct FName MuzzleFlashBoneName; // 0x1e8(0x08)
	struct FName TracerSpawnLocationBoneName; // 0x1f0(0x08)
	struct UParticleSystem* FirstPersonMuzzleFlash; // 0x1f8(0x08)
	struct UParticleSystem* ThirdPersonMuzzleFlash; // 0x200(0x08)
	struct FVector2D TracerVelocityMinMax; // 0x208(0x08)
	struct UImpactEffectConfig* ImpactEffectConfig; // 0x210(0x08)
	struct UWeaponTracer* WeaponTracer; // 0x218(0x08)
	char TracerFrequency; // 0x220(0x01)
	char pad_221[0x7]; // 0x221(0x07)
};

// Class Gobi.FireModeShotgunComponent
// Size: 0x820 (Inherited: 0x788)
struct UFireModeShotgunComponent : UFireModeBaseComponent {
	char pad_788[0x70]; // 0x788(0x70)
	struct FFireModeShotgunTuning FireModeShotgunTuning; // 0x7f8(0x28)
};

// Class Gobi.FireModeSingleTraceComponent
// Size: 0x7b0 (Inherited: 0x788)
struct UFireModeSingleTraceComponent : UFireModeBaseComponent {
	struct FFireModeSingleTraceTuning FireModeSingleTraceTuning; // 0x788(0x18)
	char pad_7A0[0x10]; // 0x7a0(0x10)
};

// Class Gobi.FirstPartyAccountUserWidget
// Size: 0x460 (Inherited: 0x450)
struct UFirstPartyAccountUserWidget : UGobiUserWidget {
	char pad_450[0x10]; // 0x450(0x10)
};

// Class Gobi.FPAssetSlot
// Size: 0x78 (Inherited: 0x30)
struct UFPAssetSlot : UObject {
	char pad_30[0x28]; // 0x30(0x28)
	struct TArray<struct UObject*> LoadedAssets; // 0x58(0x10)
	char pad_68[0x10]; // 0x68(0x10)
};

// Class Gobi.FirstPersonAssetLoader
// Size: 0x70 (Inherited: 0x38)
struct UFirstPersonAssetLoader : UWorldSubsystem {
	char pad_38[0x8]; // 0x38(0x08)
	struct TArray<struct UFPAssetSlot*> AssetSlots; // 0x40(0x10)
	struct UAsyncAssetSet* NearbyItemAssetSet; // 0x50(0x08)
	struct UAsyncAssetSet* AllPickupItemsAssetSet; // 0x58(0x08)
	char pad_60[0x10]; // 0x60(0x10)
};

// Class Gobi.FlashBangReceiverComponent
// Size: 0x148 (Inherited: 0xd8)
struct UFlashBangReceiverComponent : UActorComponent {
	char pad_D8[0x4]; // 0xd8(0x04)
	struct TWeakObjectPtr<struct APlayerCharacter> OwnerPlayer; // 0xdc(0x08)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FGameplayTag FlashbangGameplayTag; // 0xe8(0x08)
	struct TWeakObjectPtr<struct UGameplayTagsComponent> GameplayTagsComponent; // 0xf0(0x08)
	char pad_F8[0x10]; // 0xf8(0x10)
	struct UMaterialInterface* FlashbangMaterial; // 0x108(0x08)
	struct FLinearColor FlashColor; // 0x110(0x10)
	struct UCurveFloat* FlashIntensityCurve; // 0x120(0x08)
	struct UCurveFloat* AfterImageIntensityCurve; // 0x128(0x08)
	float AfterImageScalePerSec; // 0x130(0x04)
	struct TWeakObjectPtr<struct UMaterialInstanceDynamic> PostProcessMaterialInstance; // 0x134(0x08)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct UFramebufferCopy* FramebufferCopy; // 0x140(0x08)

	void HandlePossessedBy(struct AController* Controller); // Function Gobi.FlashBangReceiverComponent.HandlePossessedBy // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.FlashlightPoseComponent
// Size: 0x240 (Inherited: 0x220)
struct UFlashlightPoseComponent : USceneComponent {
	float SmoothAlpha; // 0x220(0x04)
	float FlashlightLeadStrength; // 0x224(0x04)
	char pad_228[0x18]; // 0x228(0x18)
};

// Class Gobi.FlashlightVolume
// Size: 0x298 (Inherited: 0x288)
struct AFlashlightVolume : ATriggerVolume {
	bool bDisableFlashlightDialogue; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	float TimeBetweenOnOffDialogue; // 0x28c(0x04)
	char pad_290[0x8]; // 0x290(0x08)

	void OnOverlapEnd(struct AActor* Self, struct AActor* Other); // Function Gobi.FlashlightVolume.OnOverlapEnd // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.FleeComponent
// Size: 0x150 (Inherited: 0xd8)
struct UFleeComponent : UActorComponent {
	struct FMulticastInlineDelegate OnDistanceConditionMet; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnHealthConditionMet; // 0xe8(0x10)
	bool bDistanceCondition; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	float FleeObjectiveDeltaDistance; // 0xfc(0x04)
	float FleeDeltaDistance; // 0x100(0x04)
	bool bHealthCondition; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	float FleeHealthPercentDelta; // 0x108(0x04)
	bool bChanceCondition; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	float FleeChancePercent; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct FString FleeStatSpecifier; // 0x118(0x10)
	struct AGobiCharacter* CharacterOwner; // 0x128(0x08)
	char pad_130[0x20]; // 0x130(0x20)

	bool HasMetFleeConditions(); // Function Gobi.FleeComponent.HasMetFleeConditions // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.FleeStatTracker
// Size: 0x40 (Inherited: 0x40)
struct UFleeStatTracker : UStatTrackerBase {
};

// Class Gobi.FloatingCrosshairUserWidget
// Size: 0x450 (Inherited: 0x450)
struct UFloatingCrosshairUserWidget : UGobiUserWidget {
};

// Class Gobi.FogMod
// Size: 0xf0 (Inherited: 0x88)
struct UFogMod : UGameplayMod {
	char bOverride_HeightFogStartDistance : 1; // 0x88(0x01)
	char bOverride_HeightFogInscatteringColor : 1; // 0x88(0x01)
	char bOverride_VolumeFogAlbedo : 1; // 0x88(0x01)
	char bOverride_MinVolumeFog : 1; // 0x88(0x01)
	char bOverride_VolumeFogNoiseScale : 1; // 0x88(0x01)
	char bOverride_VolumeFogNoisePan : 1; // 0x88(0x01)
	char bOverride_VolumeFogNoisePanSpeed : 1; // 0x88(0x01)
	char bOverride_VolumeGroundFogHeight : 1; // 0x88(0x01)
	char bOverride_VolumeGroundFogAO : 1; // 0x89(0x01)
	char pad_89_1 : 7; // 0x89(0x01)
	char pad_8A[0x2]; // 0x8a(0x02)
	float HeightFogStartDistance; // 0x8c(0x04)
	struct FLinearColor HeightFogInscatteringColor; // 0x90(0x10)
	char bUseSecondFog : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float SecondFogDensity; // 0xa4(0x04)
	float SecondFogHeightFalloff; // 0xa8(0x04)
	float SecondFogHeightOffset; // 0xac(0x04)
	struct FLinearColor VolumeFogAlbedo; // 0xb0(0x10)
	float MinVolumeFog; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct UCurveFloat* MinVolumeFogOverTime; // 0xc8(0x08)
	float VolumeFogNoiseScale; // 0xd0(0x04)
	struct FVector VolumeFogNoisePan; // 0xd4(0x0c)
	float VolumeFogNoisePanSpeed; // 0xe0(0x04)
	float VolumeGroundFogHeight; // 0xe4(0x04)
	float VolumeGroundFogAO; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// Class Gobi.FogSubsystem
// Size: 0x80 (Inherited: 0x38)
struct UFogSubsystem : UWorldSubsystem {
	char pad_38[0x30]; // 0x38(0x30)
	struct UFogMod* BaseMod; // 0x68(0x08)
	char pad_70[0x10]; // 0x70(0x10)
};

// Class Gobi.FogVolume
// Size: 0x2a0 (Inherited: 0x250)
struct AFogVolume : AActor {
	struct FLinearColor FogColor; // 0x250(0x10)
	float MinVolumeFog; // 0x260(0x04)
	float FogNoiseScale; // 0x264(0x04)
	struct FVector FogNoisePan; // 0x268(0x0c)
	float FogNoisePanSpeed; // 0x274(0x04)
	bool bGenerateGroundFog; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	float GroundFogHeight; // 0x27c(0x04)
	float GroundFogAO; // 0x280(0x04)
	float HeightmapPixelDistance; // 0x284(0x04)
	char pad_288[0x8]; // 0x288(0x08)
	struct UMaterialInstanceDynamic* DynamicFogMaterial; // 0x290(0x08)
	struct UTexture2D* GroundHeightmap; // 0x298(0x08)
};

// Class Gobi.FoliageDensitySubsystem
// Size: 0x48 (Inherited: 0x38)
struct UFoliageDensitySubsystem : UWorldSubsystem {
	char pad_38[0x10]; // 0x38(0x10)
};

// Class Gobi.FoliageDensityVolume
// Size: 0x330 (Inherited: 0x288)
struct AFoliageDensityVolume : AVolume {
	struct TMap<enum class EQualitySettings, float> DensityScale; // 0x288(0x50)
	struct TMap<enum class EQualitySettings, float> LODDistanceScale; // 0x2d8(0x50)
	char pad_328[0x8]; // 0x328(0x08)
};

// Class Gobi.FortificationActor
// Size: 0x418 (Inherited: 0x250)
struct AFortificationActor : AActor {
	struct UAlertComponent* AlertComponent; // 0x250(0x08)
	struct UNotificationBoxComponent* NotificationBoxComponent; // 0x258(0x08)
	struct UBoxComponent* UsableTriggerComponent; // 0x260(0x08)
	struct UUsableComponent* UsableComponent; // 0x268(0x08)
	struct USceneComponent* InternalRootComponent; // 0x270(0x08)
	struct UHealthComponent* HealthComponent; // 0x278(0x08)
	struct UStaticMeshComponent* FortificationMeshComponent; // 0x280(0x08)
	struct USkeletalMeshComponent* FortificationSkelMeshComponent; // 0x288(0x08)
	struct UDecalComponent* DecalComponent; // 0x290(0x08)
	struct UGobiNavLinkComponent* FortifiedNavLinkComponent; // 0x298(0x08)
	struct UGobiNavLinkComponent* DestroyedNavLinkComponent; // 0x2a0(0x08)
	struct UGobiNavModifierComponent* NavModifierComponent; // 0x2a8(0x08)
	struct UAkAcousticPortalComponent* AkAcousticPortalComponent; // 0x2b0(0x08)
	bool bUseSkeletalMesh; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct TArray<struct FFortificationMeshInfo> FortificationMeshes; // 0x2c0(0x10)
	struct FFortificationSkelMeshInfo FortificationSkelMeshInfo; // 0x2d0(0x30)
	float ImpulseMagnitude; // 0x300(0x04)
	float ChanceToBeginDestroyed; // 0x304(0x04)
	bool bShowDecal; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct UNavArea* DestroyedNavAreaClass; // 0x310(0x08)
	float BrokenPieceLifetime; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct UStaticMesh* BrokenFortificationMesh; // 0x320(0x08)
	struct UMaterialInterface* BrokenFortificationMaterialOverride; // 0x328(0x08)
	struct UParticleSystem* BrokenFortificationParticleEffect; // 0x330(0x08)
	bool bCanUpgradeFromBroken; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct TArray<struct FUsableInventoryCondition> RequiredMaterialsForBrokenUpgrade; // 0x340(0x10)
	char pad_350[0x10]; // 0x350(0x10)
	struct UParticleSystem* DamageParticleEffect; // 0x360(0x08)
	struct UGobiDamageType* OverlapDamageType; // 0x368(0x08)
	float OverlapDamage; // 0x370(0x04)
	struct FGameplayTag OnFortificationBreakTag; // 0x374(0x08)
	char pad_37C[0x18]; // 0x37c(0x18)
	float PercentageBrokenToOpenAKPortal; // 0x394(0x04)
	char pad_398[0x80]; // 0x398(0x80)

	void OnSuccessfullyUsed(struct AActor* UsingActor); // Function Gobi.FortificationActor.OnSuccessfullyUsed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.FortificationNotificationUserWidget
// Size: 0x450 (Inherited: 0x450)
struct UFortificationNotificationUserWidget : UGobiUserWidget {
};

// Class Gobi.FOVManager
// Size: 0x2c8 (Inherited: 0x250)
struct AFOVManager : AInfo {
	char pad_250[0x8]; // 0x250(0x08)
	struct TMap<struct ULocalPlayer*, struct FPlayerFOVState> PlayerFOVStates; // 0x258(0x50)
	char pad_2A8[0x8]; // 0x2a8(0x08)
	struct TArray<struct TScriptInterface<ICustomProjectionInterface>> ActiveFirstPersonMeshes; // 0x2b0(0x10)
	char pad_2C0[0x8]; // 0x2c0(0x08)

	struct AFOVManager* GetFOVManager(struct UObject* WorldContextObject, bool bCanCreate); // Function Gobi.FOVManager.GetFOVManager // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.FPRigParticleSystemComponent
// Size: 0x740 (Inherited: 0x730)
struct UFPRigParticleSystemComponent : UParticleSystemComponent {
	char pad_730[0x10]; // 0x730(0x10)
};

// Class Gobi.FPRigSkeletalMeshComponent
// Size: 0xbb0 (Inherited: 0xba0)
struct UFPRigSkeletalMeshComponent : USkeletalMeshComponent {
	char pad_BA0[0x10]; // 0xba0(0x10)
};

// Class Gobi.FPRigStaticMeshComponent
// Size: 0x5d0 (Inherited: 0x5b0)
struct UFPRigStaticMeshComponent : UStaticMeshComponent {
	char pad_5B0[0x20]; // 0x5b0(0x20)
};

// Class Gobi.FriendlyFireGameCoachLesson
// Size: 0x498 (Inherited: 0x488)
struct UFriendlyFireGameCoachLesson : UGobiGameCoachLesson {
	char pad_488[0x10]; // 0x488(0x10)
};

// Class Gobi.FriendlyFireMod
// Size: 0x90 (Inherited: 0x88)
struct UFriendlyFireMod : UGameplayMod {
	float FriendlyFireAdjustment; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class Gobi.FriendRequestsButtonUserWidget
// Size: 0x460 (Inherited: 0x450)
struct UFriendRequestsButtonUserWidget : UGobiUserWidget {
	char pad_450[0x10]; // 0x450(0x10)
};

// Class Gobi.FriendRequestsPopupUserWidget
// Size: 0x608 (Inherited: 0x470)
struct UFriendRequestsPopupUserWidget : UPopupUserWidget {
	char pad_470[0xe8]; // 0x470(0xe8)
	int32_t NumRequestsPerPage; // 0x558(0x04)
	int32_t NumRequestsToSearch; // 0x55c(0x04)
	char pad_560[0xa8]; // 0x560(0xa8)

	void UpdateRequestsList(struct TArray<struct FGobiOnlineUser> InRequests); // Function Gobi.FriendRequestsPopupUserWidget.UpdateRequestsList // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.FriendsManager
// Size: 0x1d0 (Inherited: 0x30)
struct UFriendsManager : UObject {
	char pad_30[0x20]; // 0x30(0x20)
	struct UMatchmaking* Matchmaking; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
	struct FTaskTimerConfig TimerConfig; // 0x60(0x70)
	char pad_D0[0x100]; // 0xd0(0x100)
};

// Class Gobi.FTUEAnalyticsComponent
// Size: 0x108 (Inherited: 0xd8)
struct UFTUEAnalyticsComponent : UActorComponent {
	char pad_D8[0x30]; // 0xd8(0x30)

	void RegisterDelegate(); // Function Gobi.FTUEAnalyticsComponent.RegisterDelegate // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerSettingsBase
// Size: 0x88 (Inherited: 0x30)
struct UPlayerSettingsBase : UObject {
	struct FMulticastInlineDelegate OnApplySettings; // 0x30(0x10)
	char pad_40[0x18]; // 0x40(0x18)
	uint32_t Version; // 0x58(0x04)
	char pad_5C[0x2c]; // 0x5c(0x2c)

	void ValidateSettings(); // Function Gobi.PlayerSettingsBase.ValidateSettings // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.FTUESettings
// Size: 0xf8 (Inherited: 0x88)
struct UFTUESettings : UPlayerSettingsBase {
	struct FMulticastInlineDelegate OnTutorialChanged; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)
	struct TArray<struct FName> TutorialPopups; // 0xa8(0x10)
	struct TArray<struct FName> BakedMessageSlugs; // 0xb8(0x10)
	struct TArray<struct FName> DynamicMessageSlugs; // 0xc8(0x10)
	bool bHasAcceptedEULA; // 0xd8(0x01)
	bool bHasSetStartupOptions; // 0xd9(0x01)
	bool bHasCompletedTutorialLevels; // 0xda(0x01)
	bool bHasSeenCrossplayWarning; // 0xdb(0x01)
	bool bHasSeenHardwareToast; // 0xdc(0x01)
	char CompletedTutorials[0x17]; // 0xdd(0x17)
	char pad_F4[0x4]; // 0xf4(0x04)

	void SetTutorialCompleted(enum class EFTUETutorial Tutorial); // Function Gobi.FTUESettings.SetTutorialCompleted // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.FTUETutorialScreen
// Size: 0x5d8 (Inherited: 0x530)
struct UFTUETutorialScreen : UUIScreen {
	char pad_530[0x68]; // 0x530(0x68)
	struct TSoftObjectPtr<UTexture2D> BGTexture; // 0x598(0x28)
	char pad_5C0[0x18]; // 0x5c0(0x18)

	void UpdateTeamSize(int32_t NumTeams, int32_t TeamSize); // Function Gobi.FTUETutorialScreen.UpdateTeamSize // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameCoachAnalyticsComponent
// Size: 0xf0 (Inherited: 0xd8)
struct UGameCoachAnalyticsComponent : UActorComponent {
	char pad_D8[0x18]; // 0xd8(0x18)

	void HandleGameCoachSucceeded(struct UGameCoachLesson* Lesson, struct APlayerController* LocalPlayerController, struct AActor* Target); // Function Gobi.GameCoachAnalyticsComponent.HandleGameCoachSucceeded // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameCoachListUserWidget
// Size: 0x4f0 (Inherited: 0x450)
struct UGameCoachListUserWidget : UGobiUserWidget {
	struct TMap<struct TWeakObjectPtr<struct UGameCoachLesson>, struct AWaypoint*> GameCoachWaypoints; // 0x450(0x50)
	struct TMap<struct UGameCoachLesson*, struct FLessonNotificationData> NotificationLessons; // 0x4a0(0x50)

	void RemoveNotification(struct UGobiGameCoachLesson* Lesson); // Function Gobi.GameCoachListUserWidget.RemoveNotification // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameCoachNotificationUserWidget
// Size: 0x450 (Inherited: 0x450)
struct UGameCoachNotificationUserWidget : UGobiUserWidget {

	void GenerateTTSOutput(struct FText InNotificationText); // Function Gobi.GameCoachNotificationUserWidget.GenerateTTSOutput // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameCoachSettings
// Size: 0xb0 (Inherited: 0x88)
struct UGameCoachSettings : UPlayerSettingsBase {
	char pad_88[0x10]; // 0x88(0x10)
	struct TArray<struct FGameCoachLessonSettings> Lessons; // 0x98(0x10)
	int32_t TipIndex; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// Class Gobi.GameDirectorSeamlessTravelData
// Size: 0x38 (Inherited: 0x30)
struct UGameDirectorSeamlessTravelData : UObject {
	float TimeSinceLastHorde; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Gobi.GameDirector
// Size: 0x410 (Inherited: 0x30)
struct UGameDirector : UObject {
	struct FMulticastInlineDelegate OnHordeEvent; // 0x30(0x10)
	struct UAITypePointCosts* AITypePointCosts; // 0x40(0x08)
	char pad_48[0xa0]; // 0x48(0xa0)
	struct FPacingConfigBase PacingConfigBase; // 0xe8(0x48)
	struct TArray<struct FPacingConfigOverride> PacingConfigOverride; // 0x130(0x10)
	char pad_140[0x88]; // 0x140(0x88)
	struct UAISpawnPointBudgets* AISpawnPointBudgets; // 0x1c8(0x08)
	struct FNavAgentSelector HeroNavmeshSelector; // 0x1d0(0x04)
	char pad_1D4[0xc]; // 0x1d4(0x0c)
	struct FGameplayTagQuery ValidHeroSpawnQuery; // 0x1e0(0x48)
	struct FGameplayTagQuery ValidHeroLOSQuery; // 0x228(0x48)
	int32_t MaxAICount; // 0x270(0x04)
	char pad_274[0xc]; // 0x274(0x0c)
	struct TSoftClassPtr<UObject> TestSpawningScenarioClass; // 0x280(0x28)
	char pad_2A8[0x8]; // 0x2a8(0x08)
	float HeroDistanceScoreWeight; // 0x2b0(0x04)
	float HeroPopulationScoreWeight; // 0x2b4(0x04)
	float HeroSeparationScoreWeight; // 0x2b8(0x04)
	float HeroBudgetScoreWeight; // 0x2bc(0x04)
	float HeroLifeStateScoreWeight; // 0x2c0(0x04)
	char pad_2C4[0x2c]; // 0x2c4(0x2c)
	struct UGameIntensitySystem* IntensitySystemClass; // 0x2f0(0x08)
	struct UGameIntensitySystem* IntensitySystem; // 0x2f8(0x08)
	char pad_300[0x8]; // 0x300(0x08)
	struct FRecycleConfig RecycleConfig; // 0x308(0x18)
	struct FRecycleConfig ResolvedRecycleConfig; // 0x320(0x18)
	char pad_338[0x20]; // 0x338(0x20)
	bool bDisableHorde; // 0x358(0x01)
	bool bDebugShowStats; // 0x359(0x01)
	char pad_35A[0x18]; // 0x35a(0x18)
	enum class ECollisionChannel LOSChannel; // 0x372(0x01)
	char pad_373[0x15]; // 0x373(0x15)
	struct UAISpawnDeckGenerator* OverrideAISpawnDeckGenerator; // 0x388(0x08)
	char pad_390[0x20]; // 0x390(0x20)
	struct UAISpawnDeckGenerator* AISpawnDeckGeneratorForGobiSpawnAIFromClass; // 0x3b0(0x08)
	struct UAISpawnDeck* AISpawnDeckForGobiSpawnAIFromClass; // 0x3b8(0x08)
	struct AGameDirectorDebugger* GameDirectorDebugger; // 0x3c0(0x08)
	struct FDirectorStateSummary DirectorStateSummary; // 0x3c8(0x1c)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct FClearAfterHordeConfig ClearAfterHordeConfig; // 0x3e8(0x10)
	char pad_3F8[0x18]; // 0x3f8(0x18)

	bool TriggerPhaseIfAllowedOnDirector(struct UObject* WorldContextObject, enum class EPacingPhase Phase, struct FString Reason); // Function Gobi.GameDirector.TriggerPhaseIfAllowedOnDirector // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameDirectorDebugger
// Size: 0x390 (Inherited: 0x250)
struct AGameDirectorDebugger : AActor {
	struct TArray<struct FHeroContext> HeroSpawnContexts; // 0x250(0x10)
	bool bAllHerosPreparing; // 0x260(0x01)
	char pad_261[0x3]; // 0x261(0x03)
	float GameIntensity; // 0x264(0x04)
	float GameIntensityRate; // 0x268(0x04)
	uint32_t GameThreatLevel; // 0x26c(0x04)
	int32_t TotalAICount; // 0x270(0x04)
	int32_t TotalAggroAICount; // 0x274(0x04)
	int32_t TotalPointBudget; // 0x278(0x04)
	int32_t NumPlayersOnNav; // 0x27c(0x04)
	int32_t NumNavmeshes; // 0x280(0x04)
	int32_t NumPlayersOnObjectiveDMap; // 0x284(0x04)
	bool bHasValidObjective; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	int32_t NumSpawnersByPlayers; // 0x28c(0x04)
	struct TArray<struct FName> ActiveScenarios; // 0x290(0x10)
	struct TArray<struct FString> ActiveScenarioDetails; // 0x2a0(0x10)
	struct TArray<float> ActiveScenarioSpawnerSuccessRate; // 0x2b0(0x10)
	struct TArray<struct FName> DormantScenarios; // 0x2c0(0x10)
	struct TArray<struct FAISpawnActorDebugInfo> SpawnActorDebug; // 0x2d0(0x10)
	float RecycleDistance; // 0x2e0(0x04)
	float DistanceAdvancedAfterHorde; // 0x2e4(0x04)
	float CurrentObjectiveDistance; // 0x2e8(0x04)
	float ObjectiveSearchDistance; // 0x2ec(0x04)
	struct FVector ObjectiveLocation; // 0x2f0(0x0c)
	enum class EPacingPhase PacingPhase; // 0x2fc(0x01)
	char pad_2FD[0x3]; // 0x2fd(0x03)
	struct FName PhaseHolder; // 0x300(0x08)
	float RemainingPhaseTime; // 0x308(0x04)
	uint32_t HeroSpawnIdx; // 0x30c(0x04)
	struct TArray<struct FVector> GreySpawners; // 0x310(0x10)
	struct TArray<struct FVector> RedSpawners; // 0x320(0x10)
	struct TArray<struct FVector> GreenSpawners; // 0x330(0x10)
	struct TArray<struct FVector> CyanSpawners; // 0x340(0x10)
	struct TArray<struct FVector> OrangeSpawners; // 0x350(0x10)
	struct TArray<struct FVector> YellowSpawners; // 0x360(0x10)
	char pad_370[0x20]; // 0x370(0x20)
};

// Class Gobi.GameIntensitySystem
// Size: 0xb8 (Inherited: 0x30)
struct UGameIntensitySystem : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	float CombatDecayRate; // 0x40(0x04)
	float NonCombatDecayRate; // 0x44(0x04)
	float AdvancingDecayRate; // 0x48(0x04)
	int32_t NumPlayersToAverage; // 0x4c(0x04)
	struct FHeroIntensityEventData AggroEnemiesNear; // 0x50(0x14)
	struct FHeroIntensityEventData SelfDamaged; // 0x64(0x14)
	struct FHeroIntensityEventData TeammateDamaged; // 0x78(0x14)
	struct FHeroIntensityEventData TeammateIncapped; // 0x8c(0x14)
	struct FHeroIntensityEventData TeammateDied; // 0xa0(0x14)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// Class Gobi.GamepadConfigPanelUserWidget
// Size: 0x558 (Inherited: 0x4c0)
struct UGamepadConfigPanelUserWidget : UControlsOptionsPanelUserWidget {
	bool bIsZombieMode; // 0x4c0(0x01)
	char pad_4C1[0x7]; // 0x4c1(0x07)
	struct FMulticastInlineDelegate OnButtonConfigPreviewed; // 0x4c8(0x10)
	struct TArray<struct FGamepadConfigButtonData> GamepadHumanButtons; // 0x4d8(0x10)
	struct TArray<struct FGamepadConfigButtonData> GamepadZombieButtons; // 0x4e8(0x10)
	char pad_4F8[0x60]; // 0x4f8(0x60)

	void UpdateVisibilityOfCustomBindings(bool bVisible); // Function Gobi.GamepadConfigPanelUserWidget.UpdateVisibilityOfCustomBindings // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GamepadOptionsPanelUserWidget
// Size: 0x4d0 (Inherited: 0x460)
struct UGamepadOptionsPanelUserWidget : UOptionsPanelUserWidget {
	char pad_460[0x40]; // 0x460(0x40)
	struct TArray<struct UDataTable*> GamepadStickBindingData; // 0x4a0(0x10)
	char pad_4B0[0x20]; // 0x4b0(0x20)

	void UpdateGamepadLayoutImage(enum class EGamepadImage GamepadImage); // Function Gobi.GamepadOptionsPanelUserWidget.UpdateGamepadLayoutImage // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction
// Size: 0x210 (Inherited: 0x30)
struct UGameplayAction : UGobiObject {
	struct FGameplayTagContainer ActionTags; // 0x30(0x20)
	struct FGameplayTagContainer CancelActionsWithTag; // 0x50(0x20)
	struct FGameplayTagContainer BlockActionsWithTag; // 0x70(0x20)
	struct FGameplayTagQuery BlockActionsThatMatch; // 0x90(0x48)
	struct FGameplayTagQuery RunningActionTagRequirements; // 0xd8(0x48)
	struct FGameplayTagContainer ActivationOwnedTags; // 0x120(0x20)
	struct FGameplayTagQuery ActivatingActorTagRequirements; // 0x140(0x48)
	struct UGameplayEffect* CooldownEffect; // 0x188(0x08)
	struct UGameplayEffect* CooldownEffectOnSuccess; // 0x190(0x08)
	struct UGameplayEffect* CooldownEffectOnFailed; // 0x198(0x08)
	struct TArray<struct UGameplayEffect*> ActivationEffects; // 0x1a0(0x10)
	char Priority; // 0x1b0(0x01)
	bool bDisableSteeringBehavior; // 0x1b1(0x01)
	char pad_1B2[0x6]; // 0x1b2(0x06)
	struct USteeringBehavior* SteeringBehaviorOverride; // 0x1b8(0x08)
	struct USteeringControl* SteeringControlOverride; // 0x1c0(0x08)
	char pad_1C8[0x18]; // 0x1c8(0x18)
	struct AActor* ActivatingActor; // 0x1e0(0x08)
	struct AGobiCharacter* ActivatingCharacter; // 0x1e8(0x08)
	char pad_1F0[0x20]; // 0x1f0(0x20)

	bool IsInProgress(); // Function Gobi.GameplayAction.IsInProgress // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_Ambush
// Size: 0x220 (Inherited: 0x210)
struct UGameplayAction_Ambush : UGameplayAction {
	float AmbushOnHeroLOSMinDistance; // 0x210(0x04)
	char pad_214[0x4]; // 0x214(0x04)
	float AmbushOnHeroMinDistance; // 0x218(0x04)
	char pad_21C[0x4]; // 0x21c(0x04)
};

// Class Gobi.GameplayAction_PlayMontage
// Size: 0x2e0 (Inherited: 0x210)
struct UGameplayAction_PlayMontage : UGameplayAction {
	bool bSortMontagesAlphabetically; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
	struct TArray<struct UAnimMontage*> Montages; // 0x218(0x10)
	struct TArray<struct UMontageSet*> MontageSets; // 0x228(0x10)
	struct TArray<struct UAnimMontage*> ExitMontages; // 0x238(0x10)
	struct TArray<struct UMontageSet*> ExitMontageSets; // 0x248(0x10)
	struct FGameplayTagContainer TriggerExitTags; // 0x258(0x20)
	bool bExitOnEnemyChanged; // 0x278(0x01)
	bool bExitOnAlerted; // 0x279(0x01)
	bool bAutoRepickOnBlendout; // 0x27a(0x01)
	bool bAllowExternalMontages; // 0x27b(0x01)
	struct FVector2D PlayRateRange; // 0x27c(0x08)
	struct FName TraversalCollisionProfileName; // 0x284(0x08)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct TArray<struct UAnimSequenceBase*> TraversalFlyRequesters; // 0x290(0x10)
	char pad_2A0[0x40]; // 0x2a0(0x40)

	void OnNotifyEndReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload BranchingPointNotifyPayload); // Function Gobi.GameplayAction_PlayMontage.OnNotifyEndReceived // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_AmbushHide
// Size: 0x310 (Inherited: 0x2e0)
struct UGameplayAction_AmbushHide : UGameplayAction_PlayMontage {
	struct FVector2D StayInCoverDuration; // 0x2e0(0x08)
	bool bRepositionOnHeroLOS; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	float RepositionOnHeroDistanceMapDistance; // 0x2ec(0x04)
	struct FGameplayTag SneakAdvanceTag; // 0x2f0(0x08)
	struct FNavAgentSelector DistanceMapNavMesh; // 0x2f8(0x04)
	char pad_2FC[0x14]; // 0x2fc(0x14)
};

// Class Gobi.GameplayAction_AOEAttack
// Size: 0x218 (Inherited: 0x210)
struct UGameplayAction_AOEAttack : UGameplayAction {
	char pad_210[0x8]; // 0x210(0x08)

	void OnStopAttack(struct UAOEAttackComponent* AOEAttackComponent); // Function Gobi.GameplayAction_AOEAttack.OnStopAttack // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_BotAttack
// Size: 0x258 (Inherited: 0x210)
struct UGameplayAction_BotAttack : UGameplayAction {
	struct UAnimContext_Actor* EnemyContext; // 0x210(0x08)
	struct UGameplayEvaluatorSet* FilterSet; // 0x218(0x08)
	char pad_220[0x38]; // 0x220(0x38)

	void OnSelectedItemChanged(struct AItem* OldItem, struct AItem* NewItem); // Function Gobi.GameplayAction_BotAttack.OnSelectedItemChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_BotAttackMelee
// Size: 0x268 (Inherited: 0x258)
struct UGameplayAction_BotAttackMelee : UGameplayAction_BotAttack {
	char pad_258[0x10]; // 0x258(0x10)

	void OnMeleeStateChanged(enum class EHeroMeleeState NewMeleeState); // Function Gobi.GameplayAction_BotAttackMelee.OnMeleeStateChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_BotAttackRanged
// Size: 0x270 (Inherited: 0x258)
struct UGameplayAction_BotAttackRanged : UGameplayAction_BotAttack {
	float FullAutoTimeMult; // 0x258(0x04)
	char pad_25C[0x14]; // 0x25c(0x14)

	void OnShootEvent(); // Function Gobi.GameplayAction_BotAttackRanged.OnShootEvent // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_BotFallTraversal
// Size: 0x220 (Inherited: 0x210)
struct UGameplayAction_BotFallTraversal : UGameplayAction {
	struct UGameplayEvaluatorSet* FilterSet; // 0x210(0x08)
	bool bDisabled; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
};

// Class Gobi.GameplayAction_BotIdle
// Size: 0x2a0 (Inherited: 0x210)
struct UGameplayAction_BotIdle : UGameplayAction {
	struct UGameplayEvaluatorSet* FilterSet; // 0x210(0x08)
	float MaxIdleTime; // 0x218(0x04)
	float MaxIdleTimeNoPlayers; // 0x21c(0x04)
	bool bFocusWatch; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	struct FFocusWatch FocusWatch; // 0x224(0x44)
	float TeammateObjectiveDistThreshold; // 0x268(0x04)
	float TeammateObjectiveUpdateFreq; // 0x26c(0x04)
	char pad_270[0x30]; // 0x270(0x30)

	void OnTetherRemoved(struct AActor* TetherActor); // Function Gobi.GameplayAction_BotIdle.OnTetherRemoved // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_BotInteractUse
// Size: 0x250 (Inherited: 0x210)
struct UGameplayAction_BotInteractUse : UGameplayAction {
	struct UUsableComponent* UsableComponentClass; // 0x210(0x08)
	struct UAnimContext_Actor* InteractContext; // 0x218(0x08)
	struct UGameplayEvaluatorSet* FilterSet; // 0x220(0x08)
	char pad_228[0x28]; // 0x228(0x28)

	void UseTimeout(); // Function Gobi.GameplayAction_BotInteractUse.UseTimeout // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_BotItemUse
// Size: 0x248 (Inherited: 0x210)
struct UGameplayAction_BotItemUse : UGameplayAction {
	struct UGameplayEvaluatorSet* FilterSet; // 0x210(0x08)
	char pad_218[0x30]; // 0x218(0x30)

	void UseTimeout(); // Function Gobi.GameplayAction_BotItemUse.UseTimeout // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_BotJumpTraversal
// Size: 0x240 (Inherited: 0x210)
struct UGameplayAction_BotJumpTraversal : UGameplayAction {
	struct UGameplayEvaluatorSet* FilterSet; // 0x210(0x08)
	bool bDisabled; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
	struct UAnimContext_Transform* DesiredDestContext; // 0x220(0x08)
	char pad_228[0x18]; // 0x228(0x18)
};

// Class Gobi.GameplayAction_BotLadderTraversal
// Size: 0x270 (Inherited: 0x210)
struct UGameplayAction_BotLadderTraversal : UGameplayAction {
	struct UGameplayEvaluatorSet* FilterSet; // 0x210(0x08)
	bool bDisabled; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
	struct UAnimContext_Transform* DesiredDestContext; // 0x220(0x08)
	float DestDistConstraint; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct FGameplayTagContainer RemoveTags; // 0x230(0x20)
	struct FVector SearchExtents; // 0x250(0x0c)
	char pad_25C[0x14]; // 0x25c(0x14)
};

// Class Gobi.GameplayAction_BotMantleTraversal
// Size: 0x258 (Inherited: 0x210)
struct UGameplayAction_BotMantleTraversal : UGameplayAction {
	struct UGameplayEvaluatorSet* FilterSet; // 0x210(0x08)
	bool bDisabled; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
	struct UAnimContext_Transform* DesiredDestContext; // 0x220(0x08)
	struct FVector ArriveExtent; // 0x228(0x0c)
	char pad_234[0x24]; // 0x234(0x24)
};

// Class Gobi.GameplayAction_BotTeleportToTeam
// Size: 0x210 (Inherited: 0x210)
struct UGameplayAction_BotTeleportToTeam : UGameplayAction {
};

// Class Gobi.GameplayAction_BotTraversal
// Size: 0x298 (Inherited: 0x210)
struct UGameplayAction_BotTraversal : UGameplayAction {
	struct TArray<struct FBotTraversalGroup> TraversalGroups; // 0x210(0x10)
	struct UGameplayEvaluatorSet* FilterSet; // 0x220(0x08)
	char pad_228[0x70]; // 0x228(0x70)

	void OnMovementModeChange(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function Gobi.GameplayAction_BotTraversal.OnMovementModeChange // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_BurstAttack
// Size: 0x250 (Inherited: 0x210)
struct UGameplayAction_BurstAttack : UGameplayAction {
	struct UGameplayEvaluatorSet* FilterSet; // 0x210(0x08)
	struct UGameplayEvaluatorSet* TraversalFilterSet; // 0x218(0x08)
	float StopDistance; // 0x220(0x04)
	char pad_224[0x4]; // 0x224(0x04)
	struct UAnimContext_Transform* BurstTargetContext; // 0x228(0x08)
	struct UAnimContext_Transform* BurstTraveralTargetContext; // 0x230(0x08)
	char pad_238[0x18]; // 0x238(0x18)

	void OnBurstEnded(); // Function Gobi.GameplayAction_BurstAttack.OnBurstEnded // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_Charge
// Size: 0x218 (Inherited: 0x210)
struct UGameplayAction_Charge : UGameplayAction {
	char pad_210[0x8]; // 0x210(0x08)

	void OnChargeEnded(); // Function Gobi.GameplayAction_Charge.OnChargeEnded // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_Cling
// Size: 0x260 (Inherited: 0x210)
struct UGameplayAction_Cling : UGameplayAction {
	char pad_210[0x38]; // 0x210(0x38)
	struct TArray<struct UAnimMontage*> TauntMontages; // 0x248(0x10)
	struct FVector2D TauntCooldown; // 0x258(0x08)

	void OnTauntMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function Gobi.GameplayAction_Cling.OnTauntMontageEnded // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_Death
// Size: 0x330 (Inherited: 0x2e0)
struct UGameplayAction_Death : UGameplayAction_PlayMontage {
	struct FGameplayTagQuery DieToRagdollQuery; // 0x2e0(0x48)
	char pad_328[0x8]; // 0x328(0x08)

	void OnRagdollSet(); // Function Gobi.GameplayAction_Death.OnRagdollSet // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_Despawn
// Size: 0x260 (Inherited: 0x210)
struct UGameplayAction_Despawn : UGameplayAction {
	bool bRecycleOnDespawn; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	struct FCollisionProfileName DespawnCollisionProfile; // 0x214(0x08)
	char pad_21C[0x4]; // 0x21c(0x04)
	struct TArray<struct UAnimMontage*> PreDespawnMontages; // 0x220(0x10)
	struct TArray<struct UAnimMontage*> DespawnMontages; // 0x230(0x10)
	float PreDespawnTime; // 0x240(0x04)
	char pad_244[0x1c]; // 0x244(0x1c)

	void OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function Gobi.GameplayAction_Despawn.OnMontageBlendingOut // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_Devour
// Size: 0x2e0 (Inherited: 0x210)
struct UGameplayAction_Devour : UGameplayAction {
	struct UMontageSet* DevourMontageSet; // 0x210(0x08)
	struct UMontageSet* DevourInterruptMontageSet; // 0x218(0x08)
	float DevourDuration; // 0x220(0x04)
	float HealthPercentToDisrupt; // 0x224(0x04)
	struct UAnimContext_Enemy* EnemyContextClass; // 0x228(0x08)
	struct TArray<struct UGameplayEffect*> BeginDevourEffects; // 0x230(0x10)
	struct TArray<struct UGameplayEffect*> BeginDevourTargetEffects; // 0x240(0x10)
	struct TArray<struct UGameplayEffect*> SuccessfulDevourEffects; // 0x250(0x10)
	struct TArray<struct UGameplayEffect*> SuccessfulDevourTargetEffects; // 0x260(0x10)
	struct TArray<struct UGameplayEffect*> DisruptedDevourEffects; // 0x270(0x10)
	struct FRotator BeginDevourRelativeRotation; // 0x280(0x0c)
	struct FGameplayTag SkeletalMeshTag; // 0x28c(0x08)
	struct FName BeginDevourSkeletalMeshBone; // 0x294(0x08)
	struct FName SuccessfulDevourSkeletalMeshBone; // 0x29c(0x08)
	char pad_2A4[0x3c]; // 0x2a4(0x3c)

	void OnInterruptMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function Gobi.GameplayAction_Devour.OnInterruptMontageBlendingOut // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_FakeDeath
// Size: 0x318 (Inherited: 0x210)
struct UGameplayAction_FakeDeath : UGameplayAction {
	struct UMontageSet* FakeDeathMontageSet; // 0x210(0x08)
	struct TMap<struct UAnimMontage*, struct UAnimMontage*> FakeDeathExitMontageMap; // 0x218(0x50)
	float TimeToRemainDead; // 0x268(0x04)
	float HealthPctThreshold; // 0x26c(0x04)
	float FakeDeathChancePct; // 0x270(0x04)
	float HeroDetectDistance; // 0x274(0x04)
	float FleeDeltaDistance; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct UAnimContext_Enemy* EnemyContextClass; // 0x280(0x08)
	struct FGameplayTag AttachSkeletalMeshTag; // 0x288(0x08)
	struct FName AttachSkeletalMeshBone; // 0x290(0x08)
	struct FRotator AttachRelativeRotation; // 0x298(0x0c)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct TArray<struct UGameplayEffect*> AttachTargetEffects; // 0x2a8(0x10)
	char pad_2B8[0x60]; // 0x2b8(0x60)

	void OnRagdollDamageTaken(struct FDamageInfo DamageInfo); // Function Gobi.GameplayAction_FakeDeath.OnRagdollDamageTaken // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_HagAggro
// Size: 0x270 (Inherited: 0x210)
struct UGameplayAction_HagAggro : UGameplayAction {
	struct UMontageSet* AggroTellMontageSet; // 0x210(0x08)
	struct UMontageSet* AggroSuccessMontageSet; // 0x218(0x08)
	struct UMontageSet* AggroFailedMontageSet; // 0x220(0x08)
	float TimeToAggro; // 0x228(0x04)
	char pad_22C[0x44]; // 0x22c(0x44)

	void OnActivatingActorPossessed(struct AController* NewController); // Function Gobi.GameplayAction_HagAggro.OnActivatingActorPossessed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_HagDeath
// Size: 0x288 (Inherited: 0x210)
struct UGameplayAction_HagDeath : UGameplayAction {
	struct TArray<struct UMontageSet*> MontageSets; // 0x210(0x10)
	struct UAnimContext_Enemy* EnemyContextClass; // 0x220(0x08)
	struct FGameplayTag AttachSkeletalMeshTag; // 0x228(0x08)
	struct FName AttachSkeletalMeshBone; // 0x230(0x08)
	struct FRotator AttachRelativeRotation; // 0x238(0x0c)
	char pad_244[0x4]; // 0x244(0x04)
	struct TArray<struct UGameplayEffect*> AttachTargetEffects; // 0x248(0x10)
	char pad_258[0x30]; // 0x258(0x30)

	void OnDeathMontageBlendOut(struct UAnimMontage* Montage, bool bInterrupted); // Function Gobi.GameplayAction_HagDeath.OnDeathMontageBlendOut // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_HagHuntIdle
// Size: 0x270 (Inherited: 0x210)
struct UGameplayAction_HagHuntIdle : UGameplayAction {
	float HuntInvestigateDuration; // 0x210(0x04)
	char pad_214[0x4]; // 0x214(0x04)
	struct TArray<struct UAnimMontage*> HuntIdleMontages; // 0x218(0x10)
	struct TArray<struct UAnimMontage*> ReturnToIdleMontages; // 0x228(0x10)
	struct TArray<struct UGameplayEffect*> ReturnToIdleEffects; // 0x238(0x10)
	struct TArray<struct UGameplayEffect*> HuntInvestigateEffectsToRemove; // 0x248(0x10)
	char pad_258[0x18]; // 0x258(0x18)

	void OnReturnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function Gobi.GameplayAction_HagHuntIdle.OnReturnMontageBlendingOut // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_HagIdle
// Size: 0x250 (Inherited: 0x210)
struct UGameplayAction_HagIdle : UGameplayAction {
	float CalmInvestigateDuration; // 0x210(0x04)
	char pad_214[0x4]; // 0x214(0x04)
	struct TArray<struct UAnimMontage*> IdleMontages; // 0x218(0x10)
	struct TArray<struct UGameplayEffect*> CalmInvestigateEffectsToRemove; // 0x228(0x10)
	char pad_238[0x18]; // 0x238(0x18)

	void OnIdleMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function Gobi.GameplayAction_HagIdle.OnIdleMontageBlendingOut // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_Hide
// Size: 0x2f0 (Inherited: 0x2e0)
struct UGameplayAction_Hide : UGameplayAction_PlayMontage {
	struct FVector2D HideDuration; // 0x2e0(0x08)
	char pad_2E8[0x8]; // 0x2e8(0x08)
};

// Class Gobi.GameplayAction_HitReaction
// Size: 0x350 (Inherited: 0x2e0)
struct UGameplayAction_HitReaction : UGameplayAction_PlayMontage {
	struct UGobiDamageType* StumbleOthersDamageType; // 0x2e0(0x08)
	struct FGameplayTagQuery StumbleOthersTagsRequirement; // 0x2e8(0x48)
	float StumbleOthersRadius; // 0x330(0x04)
	char pad_334[0x1c]; // 0x334(0x1c)
};

// Class Gobi.GameplayAction_LeapAttack
// Size: 0x230 (Inherited: 0x210)
struct UGameplayAction_LeapAttack : UGameplayAction {
	struct UAnimMontage* TellMontage; // 0x210(0x08)
	float TellDuration; // 0x218(0x04)
	char pad_21C[0x14]; // 0x21c(0x14)

	void OnTellMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function Gobi.GameplayAction_LeapAttack.OnTellMontageEnded // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_LeapTraversal
// Size: 0x2e8 (Inherited: 0x2e0)
struct UGameplayAction_LeapTraversal : UGameplayAction_PlayMontage {
	struct UGameplayContext_LeapShortcut* LeapShortcutContext; // 0x2e0(0x08)
};

// Class Gobi.GameplayAction_Melee
// Size: 0x218 (Inherited: 0x210)
struct UGameplayAction_Melee : UGameplayAction {
	char pad_210[0x8]; // 0x210(0x08)

	void OnStopMelee(struct UMeleeComponent* MeleeComponent); // Function Gobi.GameplayAction_Melee.OnStopMelee // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_Pounce
// Size: 0x220 (Inherited: 0x210)
struct UGameplayAction_Pounce : UGameplayAction {
	char pad_210[0x8]; // 0x210(0x08)
	struct FGameplayTag PounceComponentTag; // 0x218(0x08)

	void OnPounceEnded(); // Function Gobi.GameplayAction_Pounce.OnPounceEnded // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_ProjectileSpray
// Size: 0x218 (Inherited: 0x210)
struct UGameplayAction_ProjectileSpray : UGameplayAction {
	char pad_210[0x8]; // 0x210(0x08)

	void OnSprayEnd(); // Function Gobi.GameplayAction_ProjectileSpray.OnSprayEnd // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_ProjectileThrow
// Size: 0x228 (Inherited: 0x210)
struct UGameplayAction_ProjectileThrow : UGameplayAction {
	struct FGameplayTag ThrowComponentTag; // 0x210(0x08)
	bool bAddActivationOwnedTagsForCanActivate; // 0x218(0x01)
	char pad_219[0xf]; // 0x219(0x0f)

	void OnThrowEnded(); // Function Gobi.GameplayAction_ProjectileThrow.OnThrowEnded // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_ReachIn
// Size: 0x3a0 (Inherited: 0x210)
struct UGameplayAction_ReachIn : UGameplayAction {
	float DistanceToActivate; // 0x210(0x04)
	float DistanceToPlayReachIn; // 0x214(0x04)
	float LoopTime; // 0x218(0x04)
	float ThrowSpeed; // 0x21c(0x04)
	struct FGameplayTag SkeletalMeshTag; // 0x220(0x08)
	struct UAnimContext_ReachInSmartActor* ReachInSmartActorContext; // 0x228(0x08)
	struct USteeringBehavior* SmartActorSteeringBehavior; // 0x230(0x08)
	struct TArray<struct UGameplayEffect*> SuccessfulGrabEffects; // 0x238(0x10)
	struct TArray<struct UGameplayEffect*> SuccessfulGrabTargetEffects; // 0x248(0x10)
	struct TArray<struct UGameplayEffect*> GrabReleasedEffects; // 0x258(0x10)
	struct UGameplayEffect* SmartActorCooldown; // 0x268(0x08)
	struct FGameplayTagQuery BlockingTagQuery; // 0x270(0x48)
	struct UMontageSet* ReachInMontageSet; // 0x2b8(0x08)
	struct UMontageSet* ReachInLoopMontageSet; // 0x2c0(0x08)
	struct UMontageSet* ReachInLoopEndMontageSet; // 0x2c8(0x08)
	struct UMontageSet* ReachInGrabMontageSet; // 0x2d0(0x08)
	struct TMap<struct FName, struct FReachInSweepVolumeInfo> NotifyVolumeInfoMap; // 0x2d8(0x50)
	char pad_328[0x78]; // 0x328(0x78)

	void OnSweepVolumeOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Gobi.GameplayAction_ReachIn.OnSweepVolumeOverlap // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_SmartActor
// Size: 0x248 (Inherited: 0x210)
struct UGameplayAction_SmartActor : UGameplayAction {
	struct UPlayMontageAndWaitProxy* PlayAndWaitProxy; // 0x210(0x08)
	struct UAnimMontage* ChosenMontage; // 0x218(0x08)
	struct TArray<struct UAnimMontage*> Montages; // 0x220(0x10)
	bool bDeactivateOnBlendOut; // 0x230(0x01)
	char pad_231[0x3]; // 0x231(0x03)
	struct FVector2D PlayRateRange; // 0x234(0x08)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct UGameplayEffect* SmartActorCooldownEffect; // 0x240(0x08)

	void OnNotifyEnd(struct FName NotifyName); // Function Gobi.GameplayAction_SmartActor.OnNotifyEnd // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_SmartSequencer
// Size: 0x250 (Inherited: 0x210)
struct UGameplayAction_SmartSequencer : UGameplayAction {
	float DistanceToActivate; // 0x210(0x04)
	float DistanceToPlaySequence; // 0x214(0x04)
	struct USteeringBehavior* SmartActorSteeringBehavior; // 0x218(0x08)
	bool bStartSequenceWhenReady; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	float BindingDelayTime; // 0x224(0x04)
	char pad_228[0x8]; // 0x228(0x08)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x230(0x08)
	char pad_238[0x18]; // 0x238(0x18)

	void OnSequenceFinished(); // Function Gobi.GameplayAction_SmartSequencer.OnSequenceFinished // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_Snitch
// Size: 0x378 (Inherited: 0x2e0)
struct UGameplayAction_Snitch : UGameplayAction_PlayMontage {
	float GatherRadius; // 0x2e0(0x04)
	float GatherRadiusGrowthAmount; // 0x2e4(0x04)
	float MaxGatherRadius; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct TArray<struct UGameplayEffect*> AlertToEnemyEffects; // 0x2f0(0x10)
	float SnitchDuration; // 0x300(0x04)
	char pad_304[0xc]; // 0x304(0x0c)
	struct FGameplayTagQuery GatherBlockingTags; // 0x310(0x48)
	struct AAISmartActor* GatherToSmartActorClass; // 0x358(0x08)
	char pad_360[0x10]; // 0x360(0x10)
	struct FGameplayTag SnitchedAndFinishedTag; // 0x370(0x08)

	float GetGatherRadius(); // Function Gobi.GameplayAction_Snitch.GetGatherRadius // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_Spawn
// Size: 0x370 (Inherited: 0x210)
struct UGameplayAction_Spawn : UGameplayAction {
	bool bSortMontagesAlphabetically; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
	struct TArray<struct UAnimMontage*> SpawnMontages; // 0x218(0x10)
	struct TArray<struct UMontageSet*> MontageSets; // 0x228(0x10)
	struct TArray<struct UAnimMontage*> ExitSpawnMontages; // 0x238(0x10)
	struct TMap<struct UAnimMontage*, struct UAnimSequence*> SupplementalPreSpawnSequences; // 0x248(0x50)
	struct TArray<struct UMontageSet*> ExitMontageSets; // 0x298(0x10)
	struct FGameplayTagContainer TriggerExitTags; // 0x2a8(0x20)
	bool bExitOnEnemyChanged; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	float EnemyChangedExitDelayTime; // 0x2cc(0x04)
	bool bExitOnAlerted; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	float AlertedExitDelayTime; // 0x2d4(0x04)
	bool bSpawnHidden; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	struct FVector PreSpawnLocationOffset; // 0x2dc(0x0c)
	struct UParticleSystem* PreSpawnEmitter; // 0x2e8(0x08)
	struct UGameplayEffect* SpawnActorPostSpawnGE; // 0x2f0(0x08)
	struct UGameplayEffect* SpawnActorPostSpawnHordingGE; // 0x2f8(0x08)
	struct UGameplayEffect* SpawnActorPostSpawnWanderingGE; // 0x300(0x08)
	float MaxSpawnDelay; // 0x308(0x04)
	bool bExitMontageDelayAsRange; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)
	float ExitMontageDelayTime; // 0x310(0x04)
	bool bDisablePhysicalizeDeathAnimation; // 0x314(0x01)
	bool bSetLandMovementMode; // 0x315(0x01)
	enum class EMovementMode LandMovementMode; // 0x316(0x01)
	char pad_317[0x1]; // 0x317(0x01)
	struct FName SpawnCollisionProfileName; // 0x318(0x08)
	char pad_320[0x50]; // 0x320(0x50)

	void OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function Gobi.GameplayAction_Spawn.OnMontageBlendingOut // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_SpawnDeathGas
// Size: 0x218 (Inherited: 0x210)
struct UGameplayAction_SpawnDeathGas : UGameplayAction {
	char pad_210[0x8]; // 0x210(0x08)

	void OnDeathGasSpawnEnded(); // Function Gobi.GameplayAction_SpawnDeathGas.OnDeathGasSpawnEnded // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_Squeeze
// Size: 0x218 (Inherited: 0x210)
struct UGameplayAction_Squeeze : UGameplayAction {
	char pad_210[0x8]; // 0x210(0x08)

	void OnSqueezeEnded(); // Function Gobi.GameplayAction_Squeeze.OnSqueezeEnded // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_Suicide
// Size: 0x218 (Inherited: 0x210)
struct UGameplayAction_Suicide : UGameplayAction {
	char pad_210[0x8]; // 0x210(0x08)

	void OnSuicideEnded(); // Function Gobi.GameplayAction_Suicide.OnSuicideEnded // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_Traversal
// Size: 0x280 (Inherited: 0x210)
struct UGameplayAction_Traversal : UGameplayAction {
	bool bSortMontagesAlphabetically; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
	struct TArray<struct UAnimMontage*> TraversalMontages; // 0x218(0x10)
	struct TArray<struct UMontageSet*> MontageSets; // 0x228(0x10)
	struct FName TraversalCollisionProfileName; // 0x238(0x08)
	struct TArray<struct UAnimSequenceBase*> TraversalFlyRequesters; // 0x240(0x10)
	struct TArray<struct UAnimNotifyState_EvalChainMontage*> EvalChains; // 0x250(0x10)
	struct FVector2D PlayRateRange; // 0x260(0x08)
	char pad_268[0x18]; // 0x268(0x18)

	void OnNotifyEndReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload BranchingPointNotifyPayload); // Function Gobi.GameplayAction_Traversal.OnNotifyEndReceived // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAction_TraversalSteer
// Size: 0x280 (Inherited: 0x210)
struct UGameplayAction_TraversalSteer : UGameplayAction {
	struct TArray<struct FTraversalSteeringConfig> SteeringConfigs; // 0x210(0x10)
	float ArrivalDistance; // 0x220(0x04)
	char pad_224[0x5c]; // 0x224(0x5c)
};

// Class Gobi.GameplayAction_TriggerHorde
// Size: 0x220 (Inherited: 0x210)
struct UGameplayAction_TriggerHorde : UGameplayAction {
	struct FDifficultyBool IsAllowedByDifficulty; // 0x210(0x05)
	char pad_215[0xb]; // 0x215(0x0b)

	void OnTriggerHordeEnded(); // Function Gobi.GameplayAction_TriggerHorde.OnTriggerHordeEnded // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayActionsComponent
// Size: 0x120 (Inherited: 0xd8)
struct UGameplayActionsComponent : UActorComponent {
	char pad_D8[0x8]; // 0xd8(0x08)
	struct TArray<struct UGameplayAction*> ActionSet; // 0xe0(0x10)
	struct TArray<struct UGameplayAction*> Actions; // 0xf0(0x10)
	struct TArray<struct UGameplayAction*> RunningActions; // 0x100(0x10)
	struct TArray<struct UGameplayAction*> TickableActions; // 0x110(0x10)

	void OnUnpossessed(struct AGobiCharacter* GobiCharacter); // Function Gobi.GameplayActionsComponent.OnUnpossessed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayActionsTrait
// Size: 0x48 (Inherited: 0x30)
struct UGameplayActionsTrait : UTrait {
	struct TArray<struct UGameplayAction*> ActionSet; // 0x30(0x10)
	bool bRestartBT; // 0x40(0x01)
	bool bDestroyGACOnRemove; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// Class Gobi.GameplayAnalyticsManager
// Size: 0x378 (Inherited: 0x250)
struct AGameplayAnalyticsManager : AInfo {
	char pad_250[0x30]; // 0x250(0x30)
	struct UGlobalAnalyticsManager* GlobalAnalyticsManager; // 0x280(0x08)
	struct URoundAnalyticsComponent* RoundAnalyticsComponent; // 0x288(0x08)
	struct UItemSpawningAnalyticsComponent* ItemSpawningComponent; // 0x290(0x08)
	struct UDirectorAnalyticsComponent* DirectorAnalyticsComponent; // 0x298(0x08)
	struct UDecalAnalyticsComponent* DecalAnalyticsComponent; // 0x2a0(0x08)
	struct UPlayerStateAnalyticsComponent* PlayerStateComponent; // 0x2a8(0x08)
	struct UCardSystemAnalyticsComponent* CardSystemComponent; // 0x2b0(0x08)
	struct UGameCoachAnalyticsComponent* GameCoachAnalyticsComponent; // 0x2b8(0x08)
	struct UGenericAggregationComponent* GenericAggregationComponent; // 0x2c0(0x08)
	struct UInterestingMomentComponent* InterestingMomentComponent; // 0x2c8(0x08)
	struct UWeaponUsageAnalyticsComponent* WeaponUsageComponent; // 0x2d0(0x08)
	struct UPerfStatsAnalyticsComponent* PerfStatsAnalyticsComponent; // 0x2d8(0x08)
	struct UFTUEAnalyticsComponent* FTUEAnalyticsComponent; // 0x2e0(0x08)
	struct UEconomyAnalyticsComponent* EconomyAnalyticsComponent; // 0x2e8(0x08)
	struct UAchievementAnalyticsComponent* AchievementAnalyticsComponent; // 0x2f0(0x08)
	struct UHealingAnalyticsComponent* HealingAnalyticsComponent; // 0x2f8(0x08)
	struct UCinematicAnalyticsComponent* CinematicAnalyticsComponent; // 0x300(0x08)
	struct UPVPHoldoutAnalyticsComponent* PVPHoldoutComponent; // 0x308(0x08)
	struct FGameplayAnalyticsRoundData RoundData; // 0x310(0x30)
	char pad_340[0x38]; // 0x340(0x38)

	void UpdateRoundId(struct AGameMode* GameMode); // Function Gobi.GameplayAnalyticsManager.UpdateRoundId // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayAudioCaptionSubsystem
// Size: 0xd0 (Inherited: 0x38)
struct UGameplayAudioCaptionSubsystem : ULocalPlayerSubsystem {
	char pad_38[0x18]; // 0x38(0x18)
	struct UDataTable* GameplayAudioCaptionsTable; // 0x50(0x08)
	struct APlayerController* LocalController; // 0x58(0x08)
	char pad_60[0x70]; // 0x60(0x70)

	void OnEventPosted(struct FString EventName, struct FVector Loc); // Function Gobi.GameplayAudioCaptionSubsystem.OnEventPosted // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayCardFan
// Size: 0x748 (Inherited: 0x718)
struct UGameplayCardFan : UCardFan {
	struct FMulticastInlineDelegate OnCardAdded; // 0x718(0x10)
	struct FMulticastInlineDelegate OnCardCountChanged; // 0x728(0x10)
	char pad_738[0x10]; // 0x738(0x10)

	void SetCards(struct FFilteredCards InCards); // Function Gobi.GameplayCardFan.SetCards // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayCardManager
// Size: 0x650 (Inherited: 0xd8)
struct UGameplayCardManager : UActorComponent {
	char pad_D8[0x18]; // 0xd8(0x18)
	struct FMulticastInlineDelegate OnDirectorCardPlayed; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnGameplayCardsChanged; // 0x100(0x10)
	struct FMulticastInlineDelegate OnPlayerStateGameplayCardsChanged; // 0x110(0x10)
	struct FMulticastInlineDelegate OnPlayerSlotGameplayCardsChanged; // 0x120(0x10)
	struct FMulticastInlineDelegate OnGameplayCardsPresetChanged; // 0x130(0x10)
	char pad_140[0x10]; // 0x140(0x10)
	struct FMulticastInlineDelegate OnZombieMutationsChanged; // 0x150(0x10)
	struct FMulticastInlineDelegate OnZombieCommunalMutationPointsChanged; // 0x160(0x10)
	struct FMulticastInlineDelegate OnPlayerStateZombieMutationPointsChanged; // 0x170(0x10)
	char pad_180[0x10]; // 0x180(0x10)
	struct FMulticastInlineDelegate OnRandomDraw; // 0x190(0x10)
	struct FMulticastInlineDelegate OnPlayerStateGameplayCardAdded; // 0x1a0(0x10)
	struct FMulticastInlineDelegate OnPlayerSlotGameplayCardAdded; // 0x1b0(0x10)
	struct FMulticastInlineDelegate OnPlayerStateZombieCardAdded; // 0x1c0(0x10)
	struct FMulticastInlineDelegate OnPlayerSlotZombieCardAdded; // 0x1d0(0x10)
	struct FMulticastInlineDelegate OnPlayerStateGameplayCardRemoved; // 0x1e0(0x10)
	struct FMulticastInlineDelegate OnPlayerSlotGameplayCardRemoved; // 0x1f0(0x10)
	struct FMulticastInlineDelegate OnPlayerStateZombieCardRemoved; // 0x200(0x10)
	struct FMulticastInlineDelegate OnPlayerSlotZombieCardRemoved; // 0x210(0x10)
	struct FMulticastInlineDelegate OnPhaseApplication; // 0x220(0x10)
	char pad_230[0x28]; // 0x230(0x28)
	struct TArray<struct FPlayerActiveGameplayCardData> PlayerActiveGameplayCardDataArray; // 0x258(0x10)
	char pad_268[0x10]; // 0x268(0x10)
	struct TArray<struct FActiveGameplayCard> StaticCardsFromDifficulty; // 0x278(0x10)
	char pad_288[0x10]; // 0x288(0x10)
	struct TArray<struct FActiveGameplayCard> DynamicCardsFromDifficulty; // 0x298(0x10)
	char pad_2A8[0x20]; // 0x2a8(0x20)
	struct FDataTableRowHandle QueuedMissionRowHandle; // 0x2c8(0x20)
	bool bProcessedQueuedMission; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct TArray<struct FZombieMutationTeamData> ZombieMutationTeamDataArray; // 0x2f0(0x10)
	char pad_300[0x20]; // 0x300(0x20)
	uint64_t RandomStreamSeed; // 0x320(0x08)
	char pad_328[0x70]; // 0x328(0x70)
	struct UGameplayDataSet* GameplayDataSet; // 0x398(0x08)
	struct TArray<struct FModInstance> InstancedMods; // 0x3a0(0x10)
	struct TMap<struct UObject*, struct UGameplayMod*> SharedMods; // 0x3b0(0x50)
	struct TArray<struct FDataTableRowHandle> AllCards; // 0x400(0x10)
	struct TArray<struct FDataTableRowHandle> StarterCards; // 0x410(0x10)
	struct TArray<struct FDataTableRowHandle> BasicCards; // 0x420(0x10)
	struct TSet<struct FDataTableRowHandle> PresetCards; // 0x430(0x50)
	struct TSet<struct FDataTableRowHandle> PresetCardsPvP; // 0x480(0x50)
	struct TSet<struct FDataTableRowHandle> ProductCards; // 0x4d0(0x50)
	char pad_520[0x50]; // 0x520(0x50)
	struct TMap<struct FName, struct FDataTableRowHandle> CardNameToProductHandles; // 0x570(0x50)
	struct TArray<struct FGameplayCardPreset> BuiltInHeroCardPresetsPvE; // 0x5c0(0x10)
	struct TArray<struct FGameplayCardPreset> BuiltInHeroCardPresetsPvP; // 0x5d0(0x10)
	struct TArray<struct FDataTableRowHandle> AllMutations; // 0x5e0(0x10)
	char pad_5F0[0x60]; // 0x5f0(0x60)

	void WriteHeroCardPresetForSlot(struct APlayerSlot* PlayerSlot, enum class EGameplayCardDeckType DeckType, int32_t PresetId, struct FString PresetName, struct TArray<struct FDataTableRowHandle> PresetHeroCards); // Function Gobi.GameplayCardManager.WriteHeroCardPresetForSlot // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayCardTravelSubsystem
// Size: 0x80 (Inherited: 0x38)
struct UGameplayCardTravelSubsystem : UGameInstanceSubsystem {
	struct FGameplayCardTravelData TravelData; // 0x38(0x48)
};

// Class Gobi.GameplayContext_ActorComponent
// Size: 0x68 (Inherited: 0x50)
struct UGameplayContext_ActorComponent : UGameplayContext {
	char pad_50[0x8]; // 0x50(0x08)
	struct FGameplayTag ComponentTag; // 0x58(0x08)
	bool bIncludeParentTags; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Gobi.GameplayContext_AIStimulus
// Size: 0xb8 (Inherited: 0x90)
struct UGameplayContext_AIStimulus : UAnimContext_Actor {
	struct UAnimContext_Actor* StimuliSourceActor; // 0x90(0x08)
	char pad_98[0x20]; // 0x98(0x20)
};

// Class Gobi.GameplayContext_AvatarAimRot
// Size: 0x60 (Inherited: 0x60)
struct UGameplayContext_AvatarAimRot : UAnimContext_Rotation {
};

// Class Gobi.GameplayContext_Climb
// Size: 0xe0 (Inherited: 0x50)
struct UGameplayContext_Climb : UGameplayContext {
	char pad_50[0x90]; // 0x50(0x90)
};

// Class Gobi.GameplayContext_EnemyActorComponent
// Size: 0x70 (Inherited: 0x68)
struct UGameplayContext_EnemyActorComponent : UGameplayContext_ActorComponent {
	char pad_68[0x8]; // 0x68(0x08)
};

// Class Gobi.GameplayContext_HeroHealthState
// Size: 0x60 (Inherited: 0x50)
struct UGameplayContext_HeroHealthState : UGameplayContext {
	struct UAnimContext_Actor* SubjectHero; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
};

// Class Gobi.GameplayContext_HeroIsInCombat
// Size: 0x1e8 (Inherited: 0x50)
struct UGameplayContext_HeroIsInCombat : UGameplayContext {
	char pad_50[0x18]; // 0x50(0x18)
	struct FDamageInfo LastDamageReceived; // 0x68(0xb8)
	char pad_120[0x8]; // 0x120(0x08)
	struct FDamageInfo LastDamageInflicted; // 0x128(0xb8)
	char pad_1E0[0x8]; // 0x1e0(0x08)
};

// Class Gobi.GameplayContext_HeroUseTransform
// Size: 0x78 (Inherited: 0x70)
struct UGameplayContext_HeroUseTransform : UAnimContext_Transform {
	struct FGameplayTag ComponentTag; // 0x70(0x08)
};

// Class Gobi.GameplayContext_Ladder
// Size: 0xa0 (Inherited: 0x50)
struct UGameplayContext_Ladder : UGameplayContext {
	char pad_50[0x50]; // 0x50(0x50)
};

// Class Gobi.GameplayContext_LadderTransform
// Size: 0x78 (Inherited: 0x70)
struct UGameplayContext_LadderTransform : UAnimContext_Transform {
	bool bGetLadderTop; // 0x70(0x01)
	bool bWithCapsuleOffset; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
};

// Class Gobi.GameplayContext_LeapLaunchDirection
// Size: 0x60 (Inherited: 0x60)
struct UGameplayContext_LeapLaunchDirection : UAnimContext_Rotation {
};

// Class Gobi.GameplayContext_LeapShortcut
// Size: 0x1b0 (Inherited: 0x70)
struct UGameplayContext_LeapShortcut : UAnimContext_Transform {
	float MinShortCuttingDistance; // 0x70(0x04)
	float MaxShortCuttingDistance; // 0x74(0x04)
	float ArcParam; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FPredictProjectilePathParams ProjectileParams; // 0x80(0x70)
	char pad_F0[0xc0]; // 0xf0(0xc0)
};

// Class Gobi.GameplayContext_MeleeImpactLocation
// Size: 0x80 (Inherited: 0x70)
struct UGameplayContext_MeleeImpactLocation : UAnimContext_Transform {
	char pad_70[0x8]; // 0x70(0x08)
	struct FGameplayTag MeleeComponentGameplayTag; // 0x78(0x08)
};

// Class Gobi.GameplayContext_MeleeTarget
// Size: 0x80 (Inherited: 0x70)
struct UGameplayContext_MeleeTarget : UAnimContext_Transform {
	char pad_70[0x8]; // 0x70(0x08)
	struct FGameplayTag MeleeComponentGameplayTag; // 0x78(0x08)
};

// Class Gobi.GameplayContext_NearbyCharacters
// Size: 0xc0 (Inherited: 0x50)
struct UGameplayContext_NearbyCharacters : UGameplayContext {
	struct FGameplayTagQuery CharacterTags; // 0x50(0x48)
	float MinDistance; // 0x98(0x04)
	float MaxDistance; // 0x9c(0x04)
	bool bCheckViewAngle; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float ViewAngle; // 0xa4(0x04)
	char pad_A8[0x18]; // 0xa8(0x18)
};

// Class Gobi.GameplayContext_NextDestructible
// Size: 0xc0 (Inherited: 0x90)
struct UGameplayContext_NextDestructible : UAnimContext_NavLinkLocation {
	float DestructibleLinkWidth; // 0x90(0x04)
	float DestructibleLinkEdgePct; // 0x94(0x04)
	float DistructibleDirectionClampAngle; // 0x98(0x04)
	char pad_9C[0x24]; // 0x9c(0x24)
};

// Class Gobi.GameplayContext_NextDestructibleNavLink
// Size: 0x98 (Inherited: 0x90)
struct UGameplayContext_NextDestructibleNavLink : UAnimContext_NavLinkLocation {
	char pad_90[0x8]; // 0x90(0x08)
};

// Class Gobi.GameplayContext_NextPathCornerOfNavArea
// Size: 0xa0 (Inherited: 0x90)
struct UGameplayContext_NextPathCornerOfNavArea : UAnimContext_NavLinkLocation {
	struct UNavArea* NavArea; // 0x90(0x08)
	char pad_98[0x8]; // 0x98(0x08)
};

// Class Gobi.GameplayContext_NextUsable
// Size: 0xc0 (Inherited: 0x90)
struct UGameplayContext_NextUsable : UAnimContext_Actor {
	struct UAnimContext_NavLinkLocation* BaseNavLink; // 0x90(0x08)
	struct FGameplayTagContainer UsableTags; // 0x98(0x20)
	bool bSkipActivatableUsables; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float SearchDist; // 0xbc(0x04)
};

// Class Gobi.GameplayContext_PlayerStaminaState
// Size: 0x60 (Inherited: 0x50)
struct UGameplayContext_PlayerStaminaState : UGameplayContext {
	struct UAnimContext_Actor* SubjectPlayer; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
};

// Class Gobi.GameplayContext_RescueStartComponent
// Size: 0x70 (Inherited: 0x68)
struct UGameplayContext_RescueStartComponent : UGameplayContext_ActorComponent {
	char pad_68[0x8]; // 0x68(0x08)
};

// Class Gobi.GameplayContext_RescueStartTransform
// Size: 0x78 (Inherited: 0x70)
struct UGameplayContext_RescueStartTransform : UAnimContext_Transform {
	char pad_70[0x8]; // 0x70(0x08)
};

// Class Gobi.GameplayContext_SelectedItemComp
// Size: 0x68 (Inherited: 0x68)
struct UGameplayContext_SelectedItemComp : UGameplayContext_ActorComponent {
};

// Class Gobi.GameplayContext_SmartActorNavLoc
// Size: 0x70 (Inherited: 0x70)
struct UGameplayContext_SmartActorNavLoc : UAnimContext_Transform {
};

// Class Gobi.GameplayContext_UsableComponent
// Size: 0x68 (Inherited: 0x50)
struct UGameplayContext_UsableComponent : UGameplayContext {
	char pad_50[0x8]; // 0x50(0x08)
	struct FGameplayTag ComponentTag; // 0x58(0x08)
	bool bIncludeParentTags; // 0x60(0x01)
	bool bUseBotInteract; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// Class Gobi.GameplayContext_UsingActorComponent
// Size: 0x70 (Inherited: 0x68)
struct UGameplayContext_UsingActorComponent : UGameplayContext_ActorComponent {
	char pad_68[0x8]; // 0x68(0x08)
};

// Class Gobi.GameplayContextComponent
// Size: 0x180 (Inherited: 0xd8)
struct UGameplayContextComponent : UActorComponent {
	struct TArray<struct UGameplayContext*> Contexts; // 0xd8(0x10)
	char pad_E8[0x50]; // 0xe8(0x50)
	struct FRepContextLocation RepContextLocation; // 0x138(0x18)
	struct FRepContextRotation RepContextRotation; // 0x150(0x18)
	struct TArray<struct UGameplayContext*> InitialContexts; // 0x168(0x10)
	char pad_178[0x8]; // 0x178(0x08)
};

// Class Gobi.GameplayCue
// Size: 0x30 (Inherited: 0x30)
struct UGameplayCue : UGobiObject {
};

// Class Gobi.GameplayCue_Audio_OneShot
// Size: 0x38 (Inherited: 0x30)
struct UGameplayCue_Audio_OneShot : UGameplayCue {
	enum class ESharedSurvivorAnimSound SoundLookup; // 0x30(0x01)
	bool bPrepSurface; // 0x31(0x01)
	bool bShouldFollow; // 0x32(0x01)
	bool bStopOnDestroy; // 0x33(0x01)
	bool bFPOnly; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// Class Gobi.GameplayCue_Blueprintable
// Size: 0x30 (Inherited: 0x30)
struct UGameplayCue_Blueprintable : UGameplayCue {

	void K2_TriggerCue(struct FGameplayTag CueTag, struct FGameplayCueContext CueContext); // Function Gobi.GameplayCue_Blueprintable.K2_TriggerCue // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayCue_BulletImpact
// Size: 0x40 (Inherited: 0x30)
struct UGameplayCue_BulletImpact : UGameplayCue {
	struct UImpactEffectConfig* ImpactTable; // 0x30(0x08)
	bool bThirdPersonOnly; // 0x38(0x01)
	bool bGetCharacterMeshImpactResultFromHitResult; // 0x39(0x01)
	bool bOverrideImpactDirectionWithInstigatorForward; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
};

// Class Gobi.GameplayCue_FloorImpact
// Size: 0x30 (Inherited: 0x30)
struct UGameplayCue_FloorImpact : UGameplayCue {
};

// Class Gobi.GameplayCue_ProjectileImpact
// Size: 0x30 (Inherited: 0x30)
struct UGameplayCue_ProjectileImpact : UGameplayCue {
};

// Class Gobi.GameplayCue_WeaponFired
// Size: 0x30 (Inherited: 0x30)
struct UGameplayCue_WeaponFired : UGameplayCue {
};

// Class Gobi.GameplayCueManager
// Size: 0x40 (Inherited: 0x38)
struct UGameplayCueManager : UDataAsset {
	struct UGameplayCueSet* GameplayCueSet; // 0x38(0x08)

	bool TriggerCue(struct UObject* WorldContextObject, struct FGameplayTag CueTag, struct FGameplayCueContext CueContext); // Function Gobi.GameplayCueManager.TriggerCue // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayCueSet
// Size: 0x98 (Inherited: 0x38)
struct UGameplayCueSet : UDataAsset {
	struct TArray<struct FGameplayCueData> GameplayCues; // 0x38(0x10)
	char pad_48[0x50]; // 0x48(0x50)
};

// Class Gobi.GameplayDataSet
// Size: 0xc0 (Inherited: 0x38)
struct UGameplayDataSet : UDataAsset {
	struct TArray<struct FPerThreatCatchUpBonus> PerThreatCatchUpBonuses; // 0x38(0x10)
	struct TArray<struct FDataTableRowHandle> AlwaysUnlockedCards; // 0x48(0x10)
	struct TArray<struct FDataTableRowHandle> AlwaysUnlockedCardsPvP; // 0x58(0x10)
	struct TMap<enum class EGameplayCardCategory, struct FGameplayCardUIData> GameplayCardCategoryData; // 0x68(0x50)
	int32_t MaxCardsToDrawOnCharacterTransfer; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class Gobi.MapMeshConfigMod
// Size: 0x58 (Inherited: 0x38)
struct UMapMeshConfigMod : UDataAsset {
	struct FSkeletalMeshConfigMod MeshConfigMod; // 0x38(0x20)
};

// Class Gobi.GameplayDeveloperSettings
// Size: 0xee8 (Inherited: 0x40)
struct UGameplayDeveloperSettings : UDeveloperSettings {
	enum class EPerfScalingMethod ImpactQualityScaling; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FImpactQualitySettings ImpactQualitySettings[0x5]; // 0x44(0x8c)
	struct TSoftObjectPtr<UDataTable> DecalCategoryTable; // 0xd0(0x28)
	int32_t DecalMaxCountPerQuality[0x5]; // 0xf8(0x14)
	float DecalMaxCountFadeEarlyRatio; // 0x10c(0x04)
	float DecalInsignificantMinDistance; // 0x110(0x04)
	enum class EPerfScalingMethod DecalQualityScaling; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	struct FDecalQualitySettings DecalQualitySettings[0x5]; // 0x118(0x118)
	float ParticleSpawnCullSizeMinDistance; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
	struct FParticleQualitySettings ParticleQuality[0x5]; // 0x238(0xc8)
	struct TMap<struct FName, struct FParticleSpawnCullingGroup> ParticleCullGroups; // 0x300(0x50)
	int32_t SurvivorHealthPerPip; // 0x350(0x04)
	int32_t SurvivorMaxPipHealth; // 0x354(0x04)
	int32_t RiddenHealthPerPip; // 0x358(0x04)
	int32_t RiddenMaxPipHealth; // 0x35c(0x04)
	int32_t StaminaPerPip; // 0x360(0x04)
	char pad_364[0x4]; // 0x364(0x04)
	struct TSoftObjectPtr<UDataTable> TableOfGameplayCardTables; // 0x368(0x28)
	struct TArray<struct TSoftObjectPtr<UDataTable>> PerkTables; // 0x390(0x10)
	struct TSoftObjectPtr<UDataTable> GameplayCardPresetsTable; // 0x3a0(0x28)
	struct TSoftObjectPtr<UDataTable> GameplayCardPresetsTablePvP; // 0x3c8(0x28)
	struct TSoftObjectPtr<UDataTable> GameplayCardsTable; // 0x3f0(0x28)
	struct TSoftObjectPtr<UDataTable> AIDirectorCardsTable; // 0x418(0x28)
	struct TSoftObjectPtr<UDataTable> AIDirectorCardWeightsTable; // 0x440(0x28)
	struct TSoftObjectPtr<UDataTable> AIDirectorCardWeightsShowDemoTable; // 0x468(0x28)
	struct TArray<struct TSoftObjectPtr<UDataTable>> DynamicCardOverrideTables; // 0x490(0x10)
	struct TSoftObjectPtr<UDataTable> ZombieMutationGameplayCardsTable; // 0x4a0(0x28)
	struct TSoftObjectPtr<UDataTable> ZombieMutationTreesTable; // 0x4c8(0x28)
	struct TSoftObjectPtr<UStaticCaravans> StaticCaravans; // 0x4f0(0x28)
	struct TSoftObjectPtr<UDataTable> CaravanMerchantsTable; // 0x518(0x28)
	struct TSoftObjectPtr<UDataTable> CaravanSchemasTable; // 0x540(0x28)
	struct TSoftObjectPtr<UDataTable> ProductsTable; // 0x568(0x28)
	struct TSoftObjectPtr<UDataTable> SpraysTable; // 0x590(0x28)
	struct TSoftObjectPtr<UDataTable> HeroDefinitionsTable; // 0x5b8(0x28)
	struct TSoftObjectPtr<UDataTable> EntitlementsTable; // 0x5e0(0x28)
	struct TSoftObjectPtr<UGameplayDataSet> GameplayDataSet; // 0x608(0x28)
	struct TSoftObjectPtr<UHealthDamageRanges> HealthDamageRanges; // 0x630(0x28)
	struct TSoftObjectPtr<UHealthDamageRanges> HealthPercentRanges; // 0x658(0x28)
	int32_t DeckLoadoutCards; // 0x680(0x04)
	int32_t DeckLoadoutCardsPvP; // 0x684(0x04)
	int32_t MaxDeckSize; // 0x688(0x04)
	int32_t MaxDeckSizePvP; // 0x68c(0x04)
	int32_t PvPStartCurrency; // 0x690(0x04)
	int32_t PvPNextMapCurrency; // 0x694(0x04)
	struct FDataTableRowHandle DroppedCurrencyItem; // 0x698(0x20)
	float FOVMin; // 0x6b8(0x04)
	float FOVMax; // 0x6bc(0x04)
	float FOVDefault; // 0x6c0(0x04)
	float FOVConsoles; // 0x6c4(0x04)
	float AimAssistDefault; // 0x6c8(0x04)
	float LeftStickInnerDeadZoneDefault; // 0x6cc(0x04)
	float LeftStickOuterDeadZoneDefault; // 0x6d0(0x04)
	float RightStickInnerDeadZoneDefault; // 0x6d4(0x04)
	float RightStickOuterDeadZoneDefault; // 0x6d8(0x04)
	float RightStickSensitivityCurveDefault; // 0x6dc(0x04)
	struct TMap<struct FGameplayTag, struct FSignificanceCategory> SignificanceCategories; // 0x6e0(0x50)
	struct TMap<struct FGameplayTag, struct FUpdateRateOptimizationCategory> UpdateRateOptimizationCategories; // 0x730(0x50)
	struct TMap<struct FGameplayTag, struct FFootplantCategory> FootplantCategories; // 0x780(0x50)
	struct FCorpseSettings CorpseSettings; // 0x7d0(0x70)
	enum class EPerfScalingMethod MutilationQualityScaling; // 0x840(0x01)
	char pad_841[0x3]; // 0x841(0x03)
	struct FMutilationScalability MutilationScalability[0x5]; // 0x844(0xa0)
	char pad_8E4[0x4]; // 0x8e4(0x04)
	struct TMap<struct FGameplayTag, struct FMutilationCategory> MutilationCategories; // 0x8e8(0x50)
	struct TMap<struct AEffectActor*, struct FEffectActorSettings> EffectActorSettings; // 0x938(0x50)
	float WaterMaxDepth; // 0x988(0x04)
	float WaterDeepDepth; // 0x98c(0x04)
	float WaterProjectileDeepDepth; // 0x990(0x04)
	float WaterDeepExitTime; // 0x994(0x04)
	struct UGameplayEffect* WaterEffectDefault; // 0x998(0x08)
	struct UGameplayEffect* WaterDeepEffectDefault; // 0x9a0(0x08)
	struct FSoftObjectPath WaterPhysicsMaterialDefault; // 0x9a8(0x18)
	struct TSoftObjectPtr<UWaterRipplerDef> WaterRipplerGenericSmallDef; // 0x9c0(0x28)
	struct TSoftObjectPtr<UWaterVolumeDef> WaterVolumeDefault; // 0x9e8(0x28)
	struct TSoftObjectPtr<UWaterSurfaceDef> WaterSurfaceDefault; // 0xa10(0x28)
	struct FNavAgentProperties PathToObjectiveAgentProperties; // 0xa38(0x30)
	struct UNavigationQueryFilter* PathToObjectiveNavFilterClass; // 0xa68(0x08)
	struct TSoftObjectPtr<UForceFeedbackEffect> UIEnableForceFeedbackEffect; // 0xa70(0x28)
	float StaticResolutionScaleMin; // 0xa98(0x04)
	float DynamicResolutionScaleMin; // 0xa9c(0x04)
	struct TSoftObjectPtr<UDataTable> GameplayAudioCaptionsTable; // 0xaa0(0x28)
	struct TSoftObjectPtr<UDataTable> MissionMapsTable; // 0xac8(0x28)
	struct TSoftObjectPtr<UDataTable> MissionMapChainsTable; // 0xaf0(0x28)
	struct TSoftObjectPtr<UAssetTable> MissionChapterAssets; // 0xb18(0x28)
	struct TSoftObjectPtr<UAssetTable> MissionTabelAssets; // 0xb40(0x28)
	struct TSoftObjectPtr<UAssetTable> MissionObjectiveAssets; // 0xb68(0x28)
	struct TSoftObjectPtr<UDataTable> MissionDifficultiesTable; // 0xb90(0x28)
	struct TSoftObjectPtr<UDataTable> ChallengeSetsTable; // 0xbb8(0x28)
	struct TSoftObjectPtr<UDataTable> ChallengeRanksTable; // 0xbe0(0x28)
	struct FDataTableRowHandle HoldoutMission; // 0xc08(0x20)
	struct FGobiAnimGraphTags AnimGraphTags; // 0xc28(0x28)
	struct FHighlightPalette HighlightPalette; // 0xc50(0x50)
	struct UCameraModifier_WeaponRecoil* RecoilCameraModifier; // 0xca0(0x08)
	float LowAmmoStateRecentTime; // 0xca8(0x04)
	enum class EPerfScalingMethod WeaponQualityScalingMethod; // 0xcac(0x01)
	char pad_CAD[0x3]; // 0xcad(0x03)
	struct FWeaponSimulatedQualitySettings WeaponSimulatedQualitySettings[0x5]; // 0xcb0(0x28)
	int32_t FirstMapPvEDrawBonus; // 0xcd8(0x04)
	int32_t BasePvEDraws; // 0xcdc(0x04)
	int32_t FirstMapPvPDrawBonus; // 0xce0(0x04)
	int32_t BasePvPDraws; // 0xce4(0x04)
	struct TArray<struct FDataTableRowHandle> DefaultGameplayCards; // 0xce8(0x10)
	struct FName DistanceMatchingCurveName; // 0xcf8(0x08)
	struct TSoftObjectPtr<USkeleton> CommonZombieSkeleton; // 0xd00(0x28)
	struct TSoftObjectPtr<UPhysicsAsset> CommonZombiePhysicsAsset; // 0xd28(0x28)
	struct TSoftObjectPtr<UMaterialInterface> CommonZombieMeshHideMaterial; // 0xd50(0x28)
	int32_t MaxZombieMergedMeshPoolSize; // 0xd78(0x04)
	char pad_D7C[0x4]; // 0xd7c(0x04)
	struct TSoftObjectPtr<UDataTable> CommonZombiesMapMeshTable; // 0xd80(0x28)
	struct TSoftObjectPtr<UCurveFloat> MinFogUIDistanceCutoffCurve; // 0xda8(0x28)
	struct TSoftObjectPtr<UMaterialParameterCollection> GlobalGameplayMaterialParamCollection; // 0xdd0(0x28)
	struct TSoftObjectPtr<UDataTable> GenericAggregationTable; // 0xdf8(0x28)
	char pad_E20[0xc8]; // 0xe20(0xc8)
};

// Class Gobi.GameplayEffect
// Size: 0x228 (Inherited: 0x30)
struct UGameplayEffect : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct UGameplayEffect*> ChildEffectClasses; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFinished; // 0x48(0x10)
	struct TArray<struct UGameplayEffect*> ChildEffects; // 0x58(0x10)
	enum class EGameplayEffectApplicationScheme ApplicationScheme; // 0x68(0x01)
	bool bResetChildrenLifetimeOnLifetimeReset; // 0x69(0x01)
	bool bInheritEffectSourceFromTargetsRecentDamage; // 0x6a(0x01)
	char pad_6B[0x1]; // 0x6b(0x01)
	uint16_t MaxStackOrInstanceCount; // 0x6c(0x02)
	bool bOnlyOneActivePerTarget; // 0x6e(0x01)
	enum class EGameplayEffectResetLifetimeScheme ResetLifetimeScheme; // 0x6f(0x01)
	float Duration; // 0x70(0x04)
	float MinDuration; // 0x74(0x04)
	float MaxDuration; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FGameplayTagQuery GameplayTagsQuery; // 0x80(0x48)
	struct FGameplayTagQuery InstigatorTagsQuery; // 0xc8(0x48)
	struct FGameplayTagContainer PausingGameplayTags; // 0x110(0x20)
	struct TArray<struct UGameplayEffect*> RemoveEffectsOfTypeOnApplication; // 0x130(0x10)
	enum class EGameplayEffectStackRemovalRules ApplicationEffectRemovalStackRules; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	struct TArray<struct UGameplayEffect*> ApplyEffectsOnRemoval; // 0x148(0x10)
	bool bRemoveOnInstigatorDestroyed; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct UGameplayEffectsComponent* OwningGameplayEffectComponent; // 0x160(0x08)
	struct FGameplayEffectContext EffectContext; // 0x168(0x80)
	char pad_1E8[0x8]; // 0x1e8(0x08)
	struct AActor* TargetActor; // 0x1f0(0x08)
	char pad_1F8[0x30]; // 0x1f8(0x30)

	void OnInstigatorDestroyed(struct AActor* DestroyedActor); // Function Gobi.GameplayEffect.OnInstigatorDestroyed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayEffectAbilityComponent
// Size: 0x258 (Inherited: 0x228)
struct UGameplayEffectAbilityComponent : UGameplayEffect {
	char pad_228[0x8]; // 0x228(0x08)
	struct FGameplayTag AbilityComponentTag; // 0x230(0x08)
	struct FGamePropertyFloatMod CooldownMod; // 0x238(0x10)
	struct FGamePropertyFloatMod DurationMod; // 0x248(0x10)
};

// Class Gobi.GameplayEffectAccumStumble
// Size: 0x230 (Inherited: 0x228)
struct UGameplayEffectAccumStumble : UGameplayEffect {
	float StumbleAmount; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
};

// Class Gobi.GameplayEffectAddComponent
// Size: 0x240 (Inherited: 0x228)
struct UGameplayEffectAddComponent : UGameplayEffect {
	char pad_228[0x8]; // 0x228(0x08)
	struct UActorComponent* ActorComponentClass; // 0x230(0x08)
	struct FGameplayTag GameplayTag; // 0x238(0x08)
};

// Class Gobi.GameplayEffectAdjustIncapStrikes
// Size: 0x230 (Inherited: 0x228)
struct UGameplayEffectAdjustIncapStrikes : UGameplayEffect {
	int32_t IncapStrikesToApply; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
};

// Class Gobi.GameplayEffectADSComponent
// Size: 0x258 (Inherited: 0x228)
struct UGameplayEffectADSComponent : UGameplayEffect {
	char pad_228[0x10]; // 0x228(0x10)
	struct FGamePropertyFloatMod ADSSpeedScaleMod; // 0x238(0x10)
	struct FGameplayTag ADSConfigAssetLookupTag; // 0x248(0x08)
	enum class EAimSensitivitySpace ZoomLevelOverride; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)

	void OnEquipmentSlotChanged(enum class EEquipmentSlot EquipmentSlot, struct AItem* OldItem, struct AItem* NewItem); // Function Gobi.GameplayEffectADSComponent.OnEquipmentSlotChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayEffectAISense
// Size: 0x240 (Inherited: 0x228)
struct UGameplayEffectAISense : UGameplayEffect {
	char pad_228[0x8]; // 0x228(0x08)
	struct TArray<struct FAISenseModInfo> SenseMods; // 0x230(0x10)
};

// Class Gobi.GameplayEffectApplyGE
// Size: 0x230 (Inherited: 0x228)
struct UGameplayEffectApplyGE : UGameplayEffect {
	struct UGameplayEffect* EffectClass; // 0x228(0x08)
};

// Class Gobi.GameplayEffectApplyPerk
// Size: 0x248 (Inherited: 0x228)
struct UGameplayEffectApplyPerk : UGameplayEffect {
	char pad_228[0x10]; // 0x228(0x10)
	struct TArray<struct FDataTableRowHandle> PerksToApply; // 0x238(0x10)
};

// Class Gobi.GameplayEffectApplyPingEffects
// Size: 0x2e8 (Inherited: 0x228)
struct UGameplayEffectApplyPingEffects : UGameplayEffect {
	char pad_228[0x20]; // 0x228(0x20)
	struct FGameplayTagQuery PingTargetQuery; // 0x248(0x48)
	struct FGameplayTagQuery CancelTagsQuery; // 0x290(0x48)
	struct TArray<struct UGameplayEffect*> EffectClasses; // 0x2d8(0x10)

	void OnTagChanged(struct FGameplayTag Tag, bool bTagExists); // Function Gobi.GameplayEffectApplyPingEffects.OnTagChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayEffectApplyTrait
// Size: 0x240 (Inherited: 0x228)
struct UGameplayEffectApplyTrait : UGameplayEffect {
	char pad_228[0x8]; // 0x228(0x08)
	struct TArray<struct UTrait*> Traits; // 0x230(0x10)
};

// Class Gobi.GameplayEffectAudio
// Size: 0x258 (Inherited: 0x228)
struct UGameplayEffectAudio : UGameplayEffect {
	struct TArray<struct UAkAudioEvent*> StartAkAudioEvents; // 0x228(0x10)
	struct TArray<struct UAkAudioEvent*> StopAkAudioEvents; // 0x238(0x10)
	bool bLocallyControlledOnly; // 0x248(0x01)
	bool bPostAtLocation; // 0x249(0x01)
	char pad_24A[0xe]; // 0x24a(0x0e)
};

// Class Gobi.GameplayEffectBulletPenetrationComponent
// Size: 0x248 (Inherited: 0x228)
struct UGameplayEffectBulletPenetrationComponent : UGameplayEffect {
	char pad_228[0x10]; // 0x228(0x10)
	struct FGamePropertyFloatMod BulletPenetrationScaleMod; // 0x238(0x10)

	void OnEquipmentSlotChanged(enum class EEquipmentSlot EquipmentSlot, struct AItem* OldItem, struct AItem* NewItem); // Function Gobi.GameplayEffectBulletPenetrationComponent.OnEquipmentSlotChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayEffectCameraShake
// Size: 0x278 (Inherited: 0x228)
struct UGameplayEffectCameraShake : UGameplayEffect {
	bool bPlayAsWorldCameraShake; // 0x228(0x01)
	char pad_229[0x3]; // 0x229(0x03)
	float InnerRadius; // 0x22c(0x04)
	float OuterRadius; // 0x230(0x04)
	struct FVector EpicenterOffset; // 0x234(0x0c)
	bool bUseBoneLocationAsEpicenter; // 0x240(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	struct FName EpicenterBone; // 0x244(0x08)
	float Falloff; // 0x24c(0x04)
	bool bOrientShakeTowardsEpicenter; // 0x250(0x01)
	bool bLocalPlayerOnly; // 0x251(0x01)
	char pad_252[0x6]; // 0x252(0x06)
	struct UCameraShake* Shake; // 0x258(0x08)
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x260(0x08)
	bool bForceFeedbackIsLooping; // 0x268(0x01)
	char pad_269[0xf]; // 0x269(0x0f)
};

// Class Gobi.GameplayEffectCharacterEmitter
// Size: 0x330 (Inherited: 0x228)
struct UGameplayEffectCharacterEmitter : UGameplayEffect {
	char pad_228[0x8]; // 0x228(0x08)
	struct FCharacterEmitterDef CharacterEmitterDef; // 0x230(0x100)
};

// Class Gobi.GameplayEffectClipAmmoComponent
// Size: 0x248 (Inherited: 0x228)
struct UGameplayEffectClipAmmoComponent : UGameplayEffect {
	char pad_228[0x10]; // 0x228(0x10)
	struct FGamePropertyFloatMod MaxClipAmountScaleMod; // 0x238(0x10)

	void OnEquipmentSlotChanged(enum class EEquipmentSlot EquipmentSlot, struct AItem* OldItem, struct AItem* NewItem); // Function Gobi.GameplayEffectClipAmmoComponent.OnEquipmentSlotChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayEffectDamage
// Size: 0x280 (Inherited: 0x228)
struct UGameplayEffectDamage : UGameplayEffect {
	char pad_228[0x10]; // 0x228(0x10)
	float InstantDamage; // 0x238(0x04)
	float InstantPermanentDamage; // 0x23c(0x04)
	float RecurringDamage; // 0x240(0x04)
	float RecurringPermanentDamage; // 0x244(0x04)
	float RecurringDamageFrequency; // 0x248(0x04)
	float BeginDamageRampTime; // 0x24c(0x04)
	float EndDamageRampTime; // 0x250(0x04)
	float RecurringDamageStart; // 0x254(0x04)
	struct TArray<struct UGameplayEffect*> ApplyEffectsOnRecurringDamage; // 0x258(0x10)
	bool bApplyAccumulatedDamageOnStop; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	float MinAccumulatedDamageOnStop; // 0x26c(0x04)
	struct UGobiDamageType* DamageTypeClass; // 0x270(0x08)
	bool bAllowZeroInstantDamage; // 0x278(0x01)
	bool bCalculatePermanentDamageAsPctOfDamage; // 0x279(0x01)
	char pad_27A[0x6]; // 0x27a(0x06)
};

// Class Gobi.GameplayEffectDamageAccumulatorComponent
// Size: 0x240 (Inherited: 0x228)
struct UGameplayEffectDamageAccumulatorComponent : UGameplayEffect {
	char pad_228[0x8]; // 0x228(0x08)
	struct FGamePropertyFloatMod StumbleDamageScalarMod; // 0x230(0x10)
};

// Class Gobi.GameplayEffectDamageFilter
// Size: 0x268 (Inherited: 0x228)
struct UGameplayEffectDamageFilter : UGameplayEffect {
	char pad_228[0x10]; // 0x228(0x10)
	struct UDamageFilter* OutgoingDamageFilter; // 0x238(0x08)
	struct UDamageFilter* IncomingDamageFilter; // 0x240(0x08)
	struct FGamePropertyFloatMod WeakSpotDamageMultiplierMod; // 0x248(0x10)
	struct FGamePropertyFloatMod OutgoingFriendlyFireScaleMod; // 0x258(0x10)
};

// Class Gobi.GameplayEffectDamageNumbers
// Size: 0x238 (Inherited: 0x228)
struct UGameplayEffectDamageNumbers : UGameplayEffect {
	char pad_228[0x8]; // 0x228(0x08)
	bool bDamageNumbersVisible; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
};

// Class Gobi.GameplayEffectDrench
// Size: 0x248 (Inherited: 0x228)
struct UGameplayEffectDrench : UGameplayEffect {
	bool bDisableDrenchComponent; // 0x228(0x01)
	char pad_229[0x3]; // 0x229(0x03)
	struct FGameplayTag DrenchTag; // 0x22c(0x08)
	enum class EDrenchDistanceMode DistanceMode; // 0x234(0x01)
	bool bChainEffect; // 0x235(0x01)
	char pad_236[0x2]; // 0x236(0x02)
	struct TArray<struct FDrenchStrengthSettings> StrengthSettings; // 0x238(0x10)
};

// Class Gobi.GameplayEffectEmitterActor
// Size: 0x278 (Inherited: 0x250)
struct AGameplayEffectEmitterActor : AActor {
	struct UGameplayEffectEmitterComponent* EmitterComponent; // 0x250(0x08)
	struct USceneComponent* DefaultRootComponent; // 0x258(0x08)
	struct UBoxComponent* EmitterVolume; // 0x260(0x08)
	struct UStaticMeshComponent* MeshComponent; // 0x268(0x08)
	bool bStartActive; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)

	void DeactivateEmitter(); // Function Gobi.GameplayEffectEmitterActor.DeactivateEmitter // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayEffectEmitterComponent
// Size: 0x340 (Inherited: 0xd8)
struct UGameplayEffectEmitterComponent : UActorComponent {
	bool bStartActive; // 0xd8(0x01)
	char pad_D9[0x17]; // 0xd9(0x17)
	struct FGameplayEffectContext EffectContext; // 0xf0(0x80)
	struct FGameplayEffectsEmitterTestConfig Config; // 0x170(0x50)
	struct UAkComponent* AkComponent; // 0x1c0(0x08)
	bool bUseShapeComponent; // 0x1c8(0x01)
	char pad_1C9[0x3]; // 0x1c9(0x03)
	float TickInterval; // 0x1cc(0x04)
	struct FEffectEmitterSphere CollisionSphere; // 0x1d0(0x0c)
	struct FName ShapeComponentTag; // 0x1dc(0x08)
	struct FGameplayTag ShapeComponentGameplayTag; // 0x1e4(0x08)
	bool bEmitOnlyOnce; // 0x1ec(0x01)
	bool bRemoveEffectOnEndOverlap; // 0x1ed(0x01)
	bool bRemoveEffectOnStop; // 0x1ee(0x01)
	bool bRemoveActiveEffectOnTestFail; // 0x1ef(0x01)
	bool bRefreshActiveEffectOnTestPass; // 0x1f0(0x01)
	bool bUseComponentLocationAsEffectSource; // 0x1f1(0x01)
	bool bRequiresLineOfSight; // 0x1f2(0x01)
	bool bRequiresDotProductCheck; // 0x1f3(0x01)
	float MinTargetDotProduct; // 0x1f4(0x04)
	struct FGameplayTagQuery OverlapTagQuery; // 0x1f8(0x48)
	bool bIgnoreOwnerOverlaps; // 0x240(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	struct FName LineOfSightTargetComponentTag; // 0x244(0x08)
	bool bUseTargetEyePosForLoS; // 0x24c(0x01)
	char pad_24D[0x3b]; // 0x24d(0x3b)
	struct UGameplayEffect* EffectClass; // 0x288(0x08)
	struct UGameplayEffect* OwnerEffectClass; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)
	struct FParticleSet ParticleSet; // 0x2a0(0x80)
	struct UAkAudioEvent* StartAkEvent; // 0x320(0x08)
	struct UAkAudioEvent* StopAkEvent; // 0x328(0x08)
	struct UShapeComponent* ShapeComponent; // 0x330(0x08)
	char pad_338[0x8]; // 0x338(0x08)

	void Stop(); // Function Gobi.GameplayEffectEmitterComponent.Stop // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayEffectEmitterRadius
// Size: 0x248 (Inherited: 0x228)
struct UGameplayEffectEmitterRadius : UGameplayEffect {
	struct FGameplayTag EmitterComponentTag; // 0x228(0x08)
	struct FGamePropertyFloatMod Radius; // 0x230(0x10)
	char pad_240[0x8]; // 0x240(0x08)
};

// Class Gobi.GameplayEffectFireModeComponent
// Size: 0x2d0 (Inherited: 0x228)
struct UGameplayEffectFireModeComponent : UGameplayEffect {
	char pad_228[0x10]; // 0x228(0x10)
	struct FGamePropertyFloatMod AlertRadiusScaleMod; // 0x238(0x10)
	struct FGamePropertyFloatMod BulletDamageScaleMod; // 0x248(0x10)
	struct FGamePropertyFloatMod BulletRangeScaleMod; // 0x258(0x10)
	struct FGamePropertyFloatMod StumbleDamageScaleMod; // 0x268(0x10)
	struct FGamePropertyFloatMod UnalertDamageScale; // 0x278(0x10)
	struct FGamePropertyFloatMod DelayBetweenShotsScale; // 0x288(0x10)
	struct FGamePropertyFloatMod WeakSpotDamageMultiplierMod; // 0x298(0x10)
	struct FGameplayTag FireAnimAssetLookupTag; // 0x2a8(0x08)
	struct FGameplayTag RechamberAnimAssetLookupTag; // 0x2b0(0x08)
	struct FGameplayTag FireAudioAssetLookupTag; // 0x2b8(0x08)
	struct FGameplayTag MuzzleSocketAssetLookupTag; // 0x2c0(0x08)
	struct FGameplayTag WeaponTracerAssetLookupTag; // 0x2c8(0x08)

	void OnEquipmentSlotChanged(enum class EEquipmentSlot Slot, struct AItem* OldItem, struct AItem* NewItem); // Function Gobi.GameplayEffectFireModeComponent.OnEquipmentSlotChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayEffectForceFeedback
// Size: 0x240 (Inherited: 0x228)
struct UGameplayEffectForceFeedback : UGameplayEffect {
	float MaxRadius; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x230(0x08)
	bool bForceFeedbackIsLooping; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
};

// Class Gobi.GameplayEffectGrappleComponent
// Size: 0x268 (Inherited: 0x228)
struct UGameplayEffectGrappleComponent : UGameplayEffect {
	char pad_228[0x8]; // 0x228(0x08)
	struct FGamePropertyIntMod BreakoutCountPerLevelMod; // 0x230(0x10)
	struct FGamePropertyFloatMod BreakoutCooldownSecsMod; // 0x240(0x10)
	struct FGamePropertyFloatMod BreakoutRequiredInputHeldTimeMod; // 0x250(0x10)
	bool bEnableBreakout; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
};

// Class Gobi.GameplayEffectHeal
// Size: 0x288 (Inherited: 0x228)
struct UGameplayEffectHeal : UGameplayEffect {
	char pad_228[0xc]; // 0x228(0x0c)
	bool bAutoHealOutOfCriticalState; // 0x234(0x01)
	char pad_235[0x3]; // 0x235(0x03)
	float InstantHealing; // 0x238(0x04)
	float InstantPermanentHealing; // 0x23c(0x04)
	float RecurringHealing; // 0x240(0x04)
	float RecurringPermanentHealing; // 0x244(0x04)
	float RecurringHealingFrequency; // 0x248(0x04)
	float MinHealAmount; // 0x24c(0x04)
	bool bStackTemporaryHealth; // 0x250(0x01)
	char pad_251[0x3]; // 0x251(0x03)
	float TemporaryHealth; // 0x254(0x04)
	struct FTemporaryHealthParams TemporaryHealthParams; // 0x258(0x18)
	bool bSourcePawnPerkBonusHealing; // 0x270(0x01)
	bool bSourcePawnPerkCriticalHeal; // 0x271(0x01)
	char pad_272[0x6]; // 0x272(0x06)
	struct TArray<struct UGameplayEffect*> CritHealGameplayEffects; // 0x278(0x10)
};

// Class Gobi.GameplayEffectHealthComponent
// Size: 0x2e0 (Inherited: 0x228)
struct UGameplayEffectHealthComponent : UGameplayEffect {
	char pad_228[0x10]; // 0x228(0x10)
	struct FGamePropertyFloatMod InitialMaxHealthMod; // 0x238(0x10)
	struct FGamePropertyFloatMod PermanentDamageScaleMod; // 0x248(0x10)
	struct FGamePropertyFloatMod HealthRegenPerSecondMod; // 0x258(0x10)
	float HealthRegenWhenHealthBelow; // 0x268(0x04)
	struct FGamePropertyFloatMod HealingScaleMod; // 0x26c(0x10)
	struct FGamePropertyFloatMod FriendlyFireOverrideMod; // 0x27c(0x10)
	struct FGamePropertyFloatMod CriticalHealChanceMod; // 0x28c(0x10)
	struct FGamePropertyFloatMod CriticalHealMultiplierMod; // 0x29c(0x10)
	struct FGamePropertyFloatMod HealthDepletedMaxHealthPenaltyMod; // 0x2ac(0x10)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct TArray<struct UGameplayEffect*> HealthRegenEffects; // 0x2c0(0x10)
	bool bDisableDamage; // 0x2d0(0x01)
	bool bDisableDeath; // 0x2d1(0x01)
	char pad_2D2[0x2]; // 0x2d2(0x02)
	float DisableHealthRegenOnRecentDamageTime; // 0x2d4(0x04)
	bool bEnableOverheal; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)

	void OnDamage(struct FDamageInfo InDamageInfo); // Function Gobi.GameplayEffectHealthComponent.OnDamage // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayEffectHeroIncapReviveBonus
// Size: 0x240 (Inherited: 0x228)
struct UGameplayEffectHeroIncapReviveBonus : UGameplayEffect {
	char pad_228[0x8]; // 0x228(0x08)
	struct FGamePropertyFloatMod IncapReviveHealingMod; // 0x230(0x10)
};

// Class Gobi.GameplayEffectHeroLightComponent
// Size: 0x2f0 (Inherited: 0x228)
struct UGameplayEffectHeroLightComponent : UGameplayEffect {
	char pad_228[0x8]; // 0x228(0x08)
	struct FFlashlightViewConfig FirstPersonLightConfig; // 0x230(0x60)
	struct FFlashlightViewConfig ThirdPersonLightConfig; // 0x290(0x60)
};

// Class Gobi.GameplayEffectHeroUseComponent
// Size: 0x278 (Inherited: 0x228)
struct UGameplayEffectHeroUseComponent : UGameplayEffect {
	char pad_228[0x8]; // 0x228(0x08)
	struct TSoftClassPtr<UObject> ApplicableUsableClass; // 0x230(0x28)
	struct FGamePropertyFloatMod UsableTimeScaleMod; // 0x258(0x10)
	int32_t MaxUseCount; // 0x268(0x04)
	float Cooldown; // 0x26c(0x04)
	char pad_270[0x8]; // 0x270(0x08)

	void OnSuccessfulUse(struct AActor* UsedActor); // Function Gobi.GameplayEffectHeroUseComponent.OnSuccessfulUse // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayEffectInventoryComponent
// Size: 0x318 (Inherited: 0x228)
struct UGameplayEffectInventoryComponent : UGameplayEffect {
	char pad_228[0x8]; // 0x228(0x08)
	struct FGamePropertyFloatMod AmmoReservesRefillPct[0x7]; // 0x230(0x70)
	struct FGamePropertyIntMod AmmoReservesMax[0x7]; // 0x2a0(0x70)
	bool bAllowPrimariesInSecondarySlot; // 0x310(0x01)
	bool bDisableSpawningDroppedItems; // 0x311(0x01)
	char pad_312[0x6]; // 0x312(0x06)
};

// Class Gobi.GameplayEffectItemCycleComponent
// Size: 0x270 (Inherited: 0x228)
struct UGameplayEffectItemCycleComponent : UGameplayEffect {
	char pad_228[0x18]; // 0x228(0x18)
	struct FGamePropertyFloatMod WeaponSwapSpeedScaleMod; // 0x240(0x10)
	struct TArray<struct UGameplayEffect*> PowerSwapEffects; // 0x250(0x10)
	struct TArray<struct UGameplayEffect*> PowerSwapPlayerEffects; // 0x260(0x10)

	void OnEquipmentSlotChanged(enum class EEquipmentSlot EquipmentSlot, struct AItem* OldItem, struct AItem* NewItem); // Function Gobi.GameplayEffectItemCycleComponent.OnEquipmentSlotChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayEffectKill
// Size: 0x228 (Inherited: 0x228)
struct UGameplayEffectKill : UGameplayEffect {
};

// Class Gobi.GameplayEffectKnockback
// Size: 0x280 (Inherited: 0x228)
struct UGameplayEffectKnockback : UGameplayEffect {
	struct FGameplayEffectKnockbackData Knockback; // 0x228(0x58)
};

// Class Gobi.GameplayEffectLadderMovementModeComponent
// Size: 0x250 (Inherited: 0x228)
struct UGameplayEffectLadderMovementModeComponent : UGameplayEffect {
	char pad_228[0x8]; // 0x228(0x08)
	struct FGamePropertyFloatMod AscendSpeedMod; // 0x230(0x10)
	struct FGamePropertyFloatMod DescendSpeedMod; // 0x240(0x10)
};

// Class Gobi.GameplayEffectLifeStateBase
// Size: 0x258 (Inherited: 0x228)
struct UGameplayEffectLifeStateBase : UGameplayEffect {
	char pad_228[0x8]; // 0x228(0x08)
	struct ULifeStateBase* LifeStateToAffect; // 0x230(0x08)
	struct FGameplayTagContainer TagsToStripFromAppliedTags; // 0x238(0x20)
};

// Class Gobi.GameplayEffectLifeStateIncap
// Size: 0x270 (Inherited: 0x258)
struct UGameplayEffectLifeStateIncap : UGameplayEffectLifeStateBase {
	char pad_258[0x8]; // 0x258(0x08)
	struct FGamePropertyIntMod MaxIncapCountMod; // 0x260(0x10)
};

// Class Gobi.GameplayEffectMeleeComponent
// Size: 0x268 (Inherited: 0x228)
struct UGameplayEffectMeleeComponent : UGameplayEffect {
	char pad_228[0x8]; // 0x228(0x08)
	struct FGameplayTag MeleeComponentTag; // 0x230(0x08)
	struct FGamePropertyFloatMod CookPlayRateMod; // 0x238(0x10)
	struct FGamePropertyFloatMod AttackPlayRateMod; // 0x248(0x10)
	struct FGamePropertyFloatMod ImpactPlayRateMod; // 0x258(0x10)
};

// Class Gobi.GameplayEffectMoveInputScale
// Size: 0x238 (Inherited: 0x228)
struct UGameplayEffectMoveInputScale : UGameplayEffect {
	struct FName ScaleLabel; // 0x228(0x08)
	float MoveInputScale; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
};

// Class Gobi.GameplayEffectMovementComponent
// Size: 0x3d8 (Inherited: 0x228)
struct UGameplayEffectMovementComponent : UGameplayEffect {
	char pad_228[0x10]; // 0x228(0x10)
	struct FDirectionalMoveSpeedModifier StandingBaseMoveSpeedScaleMod; // 0x238(0x30)
	struct FDirectionalMoveSpeedModifier StandingADSMoveSpeedScaleMod; // 0x268(0x30)
	struct FDirectionalMoveSpeedModifier StandingHipFiringMoveSpeedScaleMod; // 0x298(0x30)
	struct FDirectionalMoveSpeedModifier StandingADSFiringMoveSpeedScaleMod; // 0x2c8(0x30)
	struct FDirectionalMoveSpeedModifier CrouchedBaseMoveSpeedScaleMod; // 0x2f8(0x30)
	struct FDirectionalMoveSpeedModifier CrouchedADSMoveSpeedScaleMod; // 0x328(0x30)
	struct FDirectionalMoveSpeedModifier CrouchedHipFiringMoveSpeedScaleMod; // 0x358(0x30)
	struct FDirectionalMoveSpeedModifier CrouchedADSFiringMoveSpeedScaleMod; // 0x388(0x30)
	struct FGamePropertyFloatMod SprintingMoveSpeedScaleMod; // 0x3b8(0x10)
	struct FGamePropertyFloatMod MovementNoiseScaleMod; // 0x3c8(0x10)

	void OnTargetItemPickedUp(); // Function Gobi.GameplayEffectMovementComponent.OnTargetItemPickedUp // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayEffectMoveSpeedScale
// Size: 0x240 (Inherited: 0x228)
struct UGameplayEffectMoveSpeedScale : UGameplayEffect {
	struct FCustomDataProviderFloat BaseSpeedMod; // 0x228(0x08)
	float AdditionalSpeedModPerStack; // 0x230(0x04)
	char pad_234[0xc]; // 0x234(0x0c)
};

// Class Gobi.GameplayEffectOmenSensor
// Size: 0x288 (Inherited: 0x228)
struct UGameplayEffectOmenSensor : UGameplayEffect {
	struct FGameplayTagQuery OmenQuery; // 0x228(0x48)
	char pad_270[0x18]; // 0x270(0x18)
};

// Class Gobi.GameplayEffectParticle
// Size: 0x380 (Inherited: 0x228)
struct UGameplayEffectParticle : UGameplayEffect {
	struct USceneComponent* TargetSceneComponent; // 0x228(0x08)
	struct FComponentLookup TargetSceneComponentLookup; // 0x230(0x40)
	struct FParticleSet ParticleSet; // 0x270(0x80)
	struct FParticleSet OnStopParticleSet; // 0x2f0(0x80)
	bool bTurnOffOnTargetDeath; // 0x370(0x01)
	char pad_371[0xf]; // 0x371(0x0f)

	void OnDeath(struct UHealthComponent* HealthComponent); // Function Gobi.GameplayEffectParticle.OnDeath // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayEffectParticleInstant
// Size: 0x230 (Inherited: 0x228)
struct UGameplayEffectParticleInstant : UGameplayEffect {
	struct UParticleSystem* ParticleSystem; // 0x228(0x08)
};

// Class Gobi.GameplayEffectPathMoveScale
// Size: 0x230 (Inherited: 0x228)
struct UGameplayEffectPathMoveScale : UGameplayEffect {
	struct FGameplayTag Tag; // 0x228(0x08)
};

// Class Gobi.GameplayEffectPlayerStaminaComponent
// Size: 0x250 (Inherited: 0x228)
struct UGameplayEffectPlayerStaminaComponent : UGameplayEffect {
	char pad_228[0x8]; // 0x228(0x08)
	struct FGamePropertyFloatMod MaxStaminaMod; // 0x230(0x10)
	struct FGamePropertyFloatMod StaminaRegenPerSecondMod; // 0x240(0x10)
};

// Class Gobi.GameplayEffectProjectileThrowComponent
// Size: 0x288 (Inherited: 0x228)
struct UGameplayEffectProjectileThrowComponent : UGameplayEffect {
	char pad_228[0x8]; // 0x228(0x08)
	struct FGameplayTag ThrowComponentTag; // 0x230(0x08)
	struct TMap<struct UAnimMontage*, struct FGamePropertyFloatMod> PlayRateMods; // 0x238(0x50)
};

// Class Gobi.GameplayEffectQuickUse
// Size: 0x228 (Inherited: 0x228)
struct UGameplayEffectQuickUse : UGameplayEffect {
};

// Class Gobi.GameplayEffectRadialDamage
// Size: 0x258 (Inherited: 0x228)
struct UGameplayEffectRadialDamage : UGameplayEffect {
	struct FRadialDamageSet RadialDamageSet; // 0x228(0x20)
	struct UGobiDamageType* DamageTypeClass; // 0x248(0x08)
	bool bCalculatePermanentDamageAsPctOfDamage; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
};

// Class Gobi.GameplayEffectRecoilComponent
// Size: 0x2d8 (Inherited: 0x228)
struct UGameplayEffectRecoilComponent : UGameplayEffect {
	char pad_228[0x10]; // 0x228(0x10)
	struct FGamePropertyFloatMod RecoilYawScaleMod; // 0x238(0x10)
	struct FGamePropertyFloatMod RecoilPitchScaleMod; // 0x248(0x10)
	struct FGamePropertyFloatMod RecoilMinRequiredYawScaleMod; // 0x258(0x10)
	struct FGamePropertyFloatMod RecoilMinRequiredPitchScaleMod; // 0x268(0x10)
	struct FGamePropertyFloatMod GunKickYawScaleMod; // 0x278(0x10)
	struct FGamePropertyFloatMod GunKickPitchScaleMod; // 0x288(0x10)
	struct FGamePropertyFloatMod GunKickRollScaleMod; // 0x298(0x10)
	struct FGamePropertyFloatMod GunKickMaxAngleScaleMod; // 0x2a8(0x10)
	struct FGamePropertyFloatMod PushbackInitialOffsetScaleMod; // 0x2b8(0x10)
	struct FGamePropertyFloatMod PushbackStabilizedOffsetScaleMod; // 0x2c8(0x10)

	void OnEquipmentSlotChanged(enum class EEquipmentSlot Slot, struct AItem* OldItem, struct AItem* NewItem); // Function Gobi.GameplayEffectRecoilComponent.OnEquipmentSlotChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayEffectReloadComponent
// Size: 0x270 (Inherited: 0x228)
struct UGameplayEffectReloadComponent : UGameplayEffect {
	char pad_228[0x18]; // 0x228(0x18)
	struct FGamePropertyFloatMod ReloadSpeedScaleMod; // 0x240(0x10)
	struct TArray<struct UGameplayEffect*> PowerReloadEffects; // 0x250(0x10)
	struct TArray<struct UGameplayEffect*> PowerReloadPlayerEffects; // 0x260(0x10)

	void OnEquipmentSlotChanged(enum class EEquipmentSlot EquipmentSlot, struct AItem* OldItem, struct AItem* NewItem); // Function Gobi.GameplayEffectReloadComponent.OnEquipmentSlotChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayEffectRevive
// Size: 0x240 (Inherited: 0x228)
struct UGameplayEffectRevive : UGameplayEffect {
	struct FReviveEffectData ReviveData; // 0x228(0x18)
};

// Class Gobi.GameplayEffectsComponent
// Size: 0x370 (Inherited: 0xd8)
struct UGameplayEffectsComponent : UActorComponent {
	struct TArray<struct UGameplayEffect*> OwnedEffects; // 0xd8(0x10)
	char pad_E8[0x28]; // 0xe8(0x28)
	struct FNetGameplayEffectArray NetEffects_OwnerOnly; // 0x110(0x118)
	struct TArray<struct FNetGameplayEffect> ClientEffects_OwnerOnly; // 0x228(0x10)
	struct FNetGameplayEffectArray NetEffects_NoCond; // 0x238(0x118)
	struct TArray<struct FNetGameplayEffect> ClientEffects_NoCond; // 0x350(0x10)
	char pad_360[0x10]; // 0x360(0x10)

	void Remove(struct UGameplayEffect* Effect, enum class EGameplayEffectStackRemovalRules RemovalType); // Function Gobi.GameplayEffectsComponent.Remove // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayEffectSetMaterialParams
// Size: 0x240 (Inherited: 0x228)
struct UGameplayEffectSetMaterialParams : UGameplayEffect {
	struct UMeshMaterialParamSet* MaterialParamSet; // 0x228(0x08)
	struct UMeshMaterialParamSet* OnStopMaterialParamSet; // 0x230(0x08)
	bool bRestoreParamValuesOnStop; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
};

// Class Gobi.GameplayEffectSetTags
// Size: 0x268 (Inherited: 0x228)
struct UGameplayEffectSetTags : UGameplayEffect {
	char pad_228[0x18]; // 0x228(0x18)
	struct FGameplayTagContainer Tags; // 0x240(0x20)
	int32_t CountDelta; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
};

// Class Gobi.GameplayEffectSpawnImpact
// Size: 0x240 (Inherited: 0x228)
struct UGameplayEffectSpawnImpact : UGameplayEffect {
	bool bThirdPersonOnly; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
	struct UImpactEffectConfig* ImpactEffectConfig; // 0x230(0x08)
	bool bGetCharacterMeshImpactResultFromHitResult; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
};

// Class Gobi.GameplayEffectSpreadComponent
// Size: 0x288 (Inherited: 0x228)
struct UGameplayEffectSpreadComponent : UGameplayEffect {
	char pad_228[0x10]; // 0x228(0x10)
	struct FGamePropertyFloatMod SpreadMinScaleMod; // 0x238(0x10)
	struct FGamePropertyFloatMod SpreadMaxScaleMod; // 0x248(0x10)
	struct FGamePropertyFloatMod SpreadDecayRateScaleMod; // 0x258(0x10)
	struct FGamePropertyFloatMod FiringSpreadAddScaleMod; // 0x268(0x10)
	struct FGamePropertyFloatMod MovingSpreadAddScaleMod; // 0x278(0x10)

	void OnEquipmentSlotChanged(enum class EEquipmentSlot Slot, struct AItem* OldItem, struct AItem* NewItem); // Function Gobi.GameplayEffectSpreadComponent.OnEquipmentSlotChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayEffectSprintComponent
// Size: 0x248 (Inherited: 0x228)
struct UGameplayEffectSprintComponent : UGameplayEffect {
	char pad_228[0x8]; // 0x228(0x08)
	struct FGamePropertyFloatMod SprintStaminaCostScaleMod; // 0x230(0x10)
	bool bAllowFiringWhileSprinting; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
};

// Class Gobi.GameplayEffectStamina
// Size: 0x248 (Inherited: 0x228)
struct UGameplayEffectStamina : UGameplayEffect {
	char pad_228[0xc]; // 0x228(0x0c)
	bool bAsPercentOfMax; // 0x234(0x01)
	char pad_235[0x3]; // 0x235(0x03)
	float MinStaminaAmount; // 0x238(0x04)
	float InstantStamina; // 0x23c(0x04)
	float RecurringStamina; // 0x240(0x04)
	float RecurringStaminaFrequency; // 0x244(0x04)
};

// Class Gobi.GameplayEffectStumbleComponent
// Size: 0x280 (Inherited: 0x228)
struct UGameplayEffectStumbleComponent : UGameplayEffect {
	char pad_228[0x8]; // 0x228(0x08)
	struct TMap<struct UAnimMontage*, struct FGamePropertyFloatMod> PlayRateMods; // 0x230(0x50)
};

// Class Gobi.GameplayEffectSubsystem
// Size: 0xa0 (Inherited: 0x38)
struct UGameplayEffectSubsystem : UWorldSubsystem {
	char pad_38[0x68]; // 0x38(0x68)
};

// Class Gobi.GameplayEffectThreatModifier
// Size: 0x228 (Inherited: 0x228)
struct UGameplayEffectThreatModifier : UGameplayEffect {
};

// Class Gobi.GameplayEffectTraceMeleeComponent
// Size: 0x2c0 (Inherited: 0x228)
struct UGameplayEffectTraceMeleeComponent : UGameplayEffect {
	char pad_228[0x10]; // 0x228(0x10)
	struct FGamePropertyFloatMod MeleeDamageScaleMod; // 0x238(0x10)
	struct FGamePropertyFloatMod MeleeSwingSpeedScaleMod; // 0x248(0x10)
	struct FGamePropertyFloatMod MeleeStaminaScaleMod; // 0x258(0x10)
	struct FGamePropertyFloatMod MeleeStumbleDamageScaleMod; // 0x268(0x10)
	struct FGamePropertyFloatMod MeleeCleavePowerScaleMod; // 0x278(0x10)
	struct TArray<struct UGameplayEffect*> BlockingStateAppliedEffects; // 0x288(0x10)
	struct TArray<struct UGameplayEffect*> BlockedDamageSelfAppliedEffects; // 0x298(0x10)
	struct TArray<struct UGameplayEffect*> BlockedDamageInstigatorAppliedEffects; // 0x2a8(0x10)
	bool bAllowCollateralDamage; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)

	void OnEquipmentSlotChanged(enum class EEquipmentSlot EquipmentSlot, struct AItem* OldItem, struct AItem* NewItem); // Function Gobi.GameplayEffectTraceMeleeComponent.OnEquipmentSlotChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayEffectTriggerHorde
// Size: 0x238 (Inherited: 0x228)
struct UGameplayEffectTriggerHorde : UGameplayEffect {
	struct FString HordeLabel; // 0x228(0x10)
};

// Class Gobi.GameplayEffectWater
// Size: 0x230 (Inherited: 0x228)
struct UGameplayEffectWater : UGameplayEffect {
	char pad_228[0x8]; // 0x228(0x08)
};

// Class Gobi.GameplayEffectWaterDeep
// Size: 0x238 (Inherited: 0x230)
struct UGameplayEffectWaterDeep : UGameplayEffectWater {
	char pad_230[0x8]; // 0x230(0x08)
};

// Class Gobi.GameplayEffectWeakspot
// Size: 0x420 (Inherited: 0x228)
struct UGameplayEffectWeakspot : UGameplayEffect {
	char pad_228[0x8]; // 0x228(0x08)
	struct FWeakSpotAttachment AppliedWeakspot; // 0x230(0x1e0)
	struct FGamePropertyFloatMod WeakSpotMaxHealthMod; // 0x410(0x10)
};

// Class Gobi.GameplayObjective
// Size: 0x260 (Inherited: 0x250)
struct AGameplayObjective : AActor {
	struct UDistanceMapSourceComponent* DistanceMapSourceComp; // 0x250(0x08)
	char pad_258[0x8]; // 0x258(0x08)

	void SetEnabled(bool bShouldEnable); // Function Gobi.GameplayObjective.SetEnabled // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayOptionsPanelUserWidget
// Size: 0x480 (Inherited: 0x460)
struct UGameplayOptionsPanelUserWidget : UOptionsPanelUserWidget {
	char pad_460[0x20]; // 0x460(0x20)

	void OnReticleColorChanged(struct UGobiUserWidget* Widget); // Function Gobi.GameplayOptionsPanelUserWidget.OnReticleColorChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayTagsComponent
// Size: 0x268 (Inherited: 0xd8)
struct UGameplayTagsComponent : UActorComponent {
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FMulticastInlineDelegate OnTagChanged; // 0xe0(0x10)
	char pad_F0[0x30]; // 0xf0(0x30)
	struct FGameplayTagContainer GameplayTags; // 0x120(0x20)
	char pad_140[0x128]; // 0x140(0x128)

	void GetOwnedGameplayTags(struct FGameplayTagContainer TagContainer); // Function Gobi.GameplayTagsComponent.GetOwnedGameplayTags // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayTagsRndSelectionTrait
// Size: 0x48 (Inherited: 0x30)
struct UGameplayTagsRndSelectionTrait : UTrait {
	struct TArray<struct FGameplayTagSet> TagSets; // 0x30(0x10)
	bool bAddAllTagSets; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float RandomChance; // 0x44(0x04)
};

// Class Gobi.GameplayTagsTrait
// Size: 0x58 (Inherited: 0x30)
struct UGameplayTagsTrait : UTrait {
	struct FGameplayTagContainer Tags; // 0x30(0x20)
	float RandomChance; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Gobi.GameThreatMod
// Size: 0x90 (Inherited: 0x88)
struct UGameThreatMod : UGameplayMod {
	enum class EModifyOp ModifyOp; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	int32_t ModValue; // 0x8c(0x04)
};

// Class Gobi.GameThreatModifier
// Size: 0x40 (Inherited: 0x30)
struct UGameThreatModifier : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class Gobi.GameThreatSystem
// Size: 0xb8 (Inherited: 0x30)
struct UGameThreatSystem : UObject {
	struct TArray<struct UGameThreatModifier*> ThreatModifierProfile; // 0x30(0x10)
	float GameThreatStartAmount; // 0x40(0x04)
	float ThreatLevels[0x6]; // 0x44(0x18)
	float StressScalePerLevel[0x6]; // 0x5c(0x18)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct UGameThreatModifier*> ThreatModifiers; // 0x78(0x10)
	char pad_88[0x30]; // 0x88(0x30)
};

// Class Gobi.GenericAggregationComponent
// Size: 0x1e0 (Inherited: 0xd8)
struct UGenericAggregationComponent : UActorComponent {
	struct UDataTable* AggregationConfiguration; // 0xd8(0x08)
	struct AGameplayAnalyticsManager* GameplayAnalyticsManager; // 0xe0(0x08)
	char pad_E8[0xa0]; // 0xe8(0xa0)
	struct TMap<struct FName, struct FSystemRecord> TrackedSystems; // 0x188(0x50)
	char pad_1D8[0x8]; // 0x1d8(0x08)

	void HandleSendAggregation(struct FName System, bool bReportZero); // Function Gobi.GenericAggregationComponent.HandleSendAggregation // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GhostModeIndicatorUserWidget
// Size: 0x458 (Inherited: 0x450)
struct UGhostModeIndicatorUserWidget : UGobiUserWidget {
	char pad_450[0x8]; // 0x450(0x08)

	void OnScreenOpenedOrClosed(struct UUIScreen* UIScreen); // Function Gobi.GhostModeIndicatorUserWidget.OnScreenOpenedOrClosed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GlobalAnalyticsManager
// Size: 0xb0 (Inherited: 0x30)
struct UGlobalAnalyticsManager : UObject {
	char pad_30[0x60]; // 0x30(0x60)
	struct UMatchmakingAnalytics* MatchmakingAnalytics; // 0x90(0x08)
	struct UPcHwAnalytics* PcHwAnalyticsComponent; // 0x98(0x08)
	struct UProfileDeltaAnalytics* ProfileDeltaAnalytics; // 0xa0(0x08)
	struct USurveyPopup* SurveyPopup; // 0xa8(0x08)

	void UpdateContextWithProvider(); // Function Gobi.GlobalAnalyticsManager.UpdateContextWithProvider // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GlobalAssetLoader
// Size: 0xe0 (Inherited: 0x30)
struct UGlobalAssetLoader : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct FGlobalAssetLoaderAsset> ConfigAssets; // 0x38(0x10)
	struct TArray<struct TSoftObjectPtr<UObject>> WeaponTableClasses; // 0x48(0x10)
	struct TArray<struct UAssetTable*> GeneratedAssetTables; // 0x58(0x10)
	struct TArray<struct UAssetTable*> RequestedAssetTables; // 0x68(0x10)
	struct TArray<struct UObject*> LoadedObjects; // 0x78(0x10)
	struct TArray<struct UObject*> AppLaunchUIAssets; // 0x88(0x10)
	char pad_98[0x48]; // 0x98(0x48)

	bool AreAllAssetLoadsQueued(struct UObject* WorldContextObject); // Function Gobi.GlobalAssetLoader.AreAllAssetLoadsQueued // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GlobalAssetLoaderV2
// Size: 0x60 (Inherited: 0x30)
struct UGlobalAssetLoaderV2 : UObject {
	struct UDataTable* GlobalAssetTable; // 0x30(0x08)
	struct TArray<struct UAssetTable*> RequestedAssetTables; // 0x38(0x10)
	struct TArray<struct UAssetTable*> LoadedAssetTables; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)

	void LoadAssetsForPhase(struct UObject* WorldContextObject, enum class EGlobalAssetPhase LoadingPhase); // Function Gobi.GlobalAssetLoaderV2.LoadAssetsForPhase // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GlobalLoadingSettings
// Size: 0x68 (Inherited: 0x40)
struct UGlobalLoadingSettings : UDeveloperSettings {
	struct TSoftObjectPtr<UDataTable> GlobalAssetTable; // 0x40(0x28)
};

// Class Gobi.GlobalSafeZoneUserWidget
// Size: 0x2e0 (Inherited: 0x2d8)
struct UGlobalSafeZoneUserWidget : UUserWidget {
	char pad_2D8[0x8]; // 0x2d8(0x08)
};

// Class Gobi.GobiAnimationBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UGobiAnimationBlueprintLibrary : UBlueprintFunctionLibrary {

	void StopReplicatedMontage(struct UReplicatedMontageComponent* ReplicatedMontageComponent, struct UAnimMontage* Montage); // Function Gobi.GobiAnimationBlueprintLibrary.StopReplicatedMontage // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameplayTagObserver
// Size: 0x50 (Inherited: 0x30)
struct UGameplayTagObserver : UObject {
	char pad_30[0x20]; // 0x30(0x20)

	void OnTagChanged(struct FGameplayTag Tag, bool TagExists); // Function Gobi.GameplayTagObserver.OnTagChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiBehaviorTreeComponent
// Size: 0x478 (Inherited: 0x298)
struct UGobiBehaviorTreeComponent : UBehaviorTreeComponent {
	char pad_298[0x1e0]; // 0x298(0x1e0)

	void OnObservedDestroyed(struct AActor* DestroyedActor); // Function Gobi.GobiBehaviorTreeComponent.OnObservedDestroyed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiButton
// Size: 0x4d0 (Inherited: 0x4c8)
struct UGobiButton : UButton {
	struct UAkAudioEvent* DefaultClickSound; // 0x4c8(0x08)

	void PlayClickAudio(); // Function Gobi.GobiButton.PlayClickAudio // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiCameraShake
// Size: 0x180 (Inherited: 0x170)
struct UGobiCameraShake : UCameraShake {
	struct UCurveFloat* OscillationBlendCurve; // 0x168(0x08)
	char pad_178[0x8]; // 0x178(0x08)
};

// Class Gobi.GobiCharacter
// Size: 0xf80 (Inherited: 0x580)
struct AGobiCharacter : ACharacter {
	char pad_580[0x38]; // 0x580(0x38)
	struct TArray<struct UTraitCollection*> CharacterTraits; // 0x5b8(0x10)
	bool bUsesZombieMergeMeshPool; // 0x5c8(0x01)
	char pad_5C9[0x7]; // 0x5c9(0x07)
	struct TArray<struct FGobiCharacterConfig> CharacterConfigs; // 0x5d0(0x10)
	char pad_5E0[0x30]; // 0x5e0(0x30)
	struct FMulticastInlineDelegate OnPossessedBy; // 0x610(0x10)
	struct FMulticastInlineDelegate OnUnpossessed; // 0x620(0x10)
	struct FMulticastInlineDelegate OnSpectateStart; // 0x630(0x10)
	struct FMulticastInlineDelegate OnSpectateStop; // 0x640(0x10)
	struct FMulticastInlineDelegate OnPlayerStateChanged; // 0x650(0x10)
	struct FMulticastInlineDelegate OnFellOutOfWorld; // 0x660(0x10)
	char pad_670[0x60]; // 0x670(0x60)
	struct UGameplayActionsComponent* GameplayActionsComponent; // 0x6d0(0x08)
	bool bCharacterAvoidanceMovementEnabled; // 0x6d8(0x01)
	char pad_6D9[0x3]; // 0x6d9(0x03)
	float CharacterAvoidanceMinDistance; // 0x6dc(0x04)
	float CharacterAvoidanceWakeUpDelay; // 0x6e0(0x04)
	char pad_6E4[0x4]; // 0x6e4(0x04)
	struct FCharacterAvoidanceTuning EnemyCharacterAvoidance; // 0x6e8(0x30)
	struct FCharacterAvoidanceTuning FriendlyCharacterAvoidance; // 0x718(0x30)
	struct TMap<struct FGameplayTag, struct FCharacterImpactTableConfig> ImpactTableMap; // 0x748(0x50)
	struct FGobiCharacterMoveEffects MoveEffects; // 0x798(0x78)
	char pad_810[0x210]; // 0x810(0x210)
	struct FGobiCharacterLoadout Loadout; // 0xa20(0x48)
	char pad_A68[0x10]; // 0xa68(0x10)
	struct FGameplayTag UpdateRateOptimizationCategory; // 0xa78(0x08)
	struct FGameplayTag SignificanceCategory; // 0xa80(0x08)
	float SignificanceDistanceWeight; // 0xa88(0x04)
	struct FGameplayTag FootplantIKLODCategory; // 0xa8c(0x08)
	struct FGameplayTag MutilationCategory; // 0xa94(0x08)
	bool bDisableUpdatingCharactersPhysicsVolume; // 0xa9c(0x01)
	char pad_A9D[0x3]; // 0xa9d(0x03)
	struct UMoveIgnoreActorsComponent* MoveIgnoreActorsComponent; // 0xaa0(0x08)
	struct UAIScriptingComponent* ScriptingComponent; // 0xaa8(0x08)
	char pad_AB0[0x68]; // 0xab0(0x68)
	struct FMulticastInlineDelegate OnTriggeredHorde; // 0xb18(0x10)
	struct ULifeStateComponent* LifeStateComp; // 0xb28(0x08)
	char pad_B30[0x90]; // 0xb30(0x90)
	bool bDamageNumbersVisible; // 0xbc0(0x01)
	char pad_BC1[0x27]; // 0xbc1(0x27)
	struct FLocoVariationConfig LocoVariationConfig; // 0xbe8(0x18)
	struct TArray<struct FSelectedLocoInfo> CurrentLocoVariations; // 0xc00(0x10)
	struct ULadderMovementModeComponent* LadderMovementModeComponent; // 0xc10(0x08)
	struct AActor* Enemy; // 0xc18(0x08)
	bool bIsAggro; // 0xc20(0x01)
	char pad_C21[0x7]; // 0xc21(0x07)
	struct FGameplayTagContainer HordingTags; // 0xc28(0x20)
	struct FText CharacterDisplayName; // 0xc48(0x18)
	struct UEnvQuery* SpawnEnvQuery; // 0xc60(0x08)
	struct UEnvQuery* BackfillSpawnEnvQuery; // 0xc68(0x08)
	struct TArray<struct FMaterialParamOverride> MaterialParamOverrideConfigs; // 0xc70(0x10)
	struct FWasRenderedClientInfo WasRenderedClientInfo; // 0xc80(0x20)
	char pad_CA0[0x18]; // 0xca0(0x18)
	enum class EIntensityMode IntensityMode; // 0xcb8(0x01)
	char pad_CB9[0x3]; // 0xcb9(0x03)
	float MaxDistanceToAffectIntensity; // 0xcbc(0x04)
	bool bProlongHordeCleanup; // 0xcc0(0x01)
	char pad_CC1[0x3]; // 0xcc1(0x03)
	struct FName GlowingEyesMaterialSlotName; // 0xcc4(0x08)
	struct FName GlowingEyesSocketName; // 0xccc(0x08)
	struct FName GlowingEyesFwdVectorParamName; // 0xcd4(0x08)
	struct FName GlowingEyesStrengthParamName; // 0xcdc(0x08)
	char pad_CE4[0x24]; // 0xce4(0x24)
	struct UGameplayTagsComponent* GameplayTagsComponent; // 0xd08(0x08)
	struct UTraitsComponent* TraitsComponent; // 0xd10(0x08)
	struct UCharacterEmitterComponent* CharacterEmitterComponent; // 0xd18(0x08)
	struct UGameplayContextComponent* GameplayContextComponent; // 0xd20(0x08)
	struct UReplicatedMontageComponent* ReplicatedMontageComponent; // 0xd28(0x08)
	struct UTuningDataComponent* TuningDataComponent; // 0xd30(0x08)
	struct URagdollComponent* RagdollComponent; // 0xd38(0x08)
	struct TArray<struct UMovementTickableComponent*> MovementTickableComponents; // 0xd40(0x10)
	struct TArray<struct UCapsuleComponent*> DamageVolumeComponents; // 0xd50(0x10)
	struct FGameplayTagContainer GameplayTags; // 0xd60(0x20)
	struct FGameplayTagContainer CrouchingTags; // 0xd80(0x20)
	struct UAkSkeletalComponent* SkeletalAudioEmitter; // 0xda0(0x08)
	struct UCharacterAudioComponent* CharacterAudioComponent; // 0xda8(0x08)
	struct FGameplayTag DisableYawRotationTag; // 0xdb0(0x08)
	struct FGameplayTagQuery NonCapableGrappleTags; // 0xdb8(0x48)
	float PlayerAimPitchOffset; // 0xe00(0x04)
	struct FName DamageComponentCollisionName; // 0xe04(0x08)
	bool bApplyGameplayCardAISpawnPhase; // 0xe0c(0x01)
	bool bTrackHeroCanSee; // 0xe0d(0x01)
	char pad_E0E[0x2]; // 0xe0e(0x02)
	struct FName EyeSocket; // 0xe10(0x08)
	bool bWasBotControlled; // 0xe18(0x01)
	char pad_E19[0x97]; // 0xe19(0x97)
	struct FName Slug; // 0xeb0(0x08)
	struct AGobiPlayerController* LastKnownController; // 0xeb8(0x08)
	char pad_EC0[0x38]; // 0xec0(0x38)
	struct FFallDamageData FallDamage; // 0xef8(0x30)
	struct FCharacterRandomizationData CharacterRandomizationData; // 0xf28(0x08)
	char pad_F30[0x50]; // 0xf30(0x50)

	void SetMeshCollisionProfile(struct UObject* Requester, struct FName CollisionProfile, bool bUpdateOverlaps); // Function Gobi.GobiCharacter.SetMeshCollisionProfile // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiCheckBox
// Size: 0x818 (Inherited: 0x818)
struct UGobiCheckBox : UCheckBox {
};

// Class Gobi.GobiCollectionsSubsystem
// Size: 0x6f8 (Inherited: 0x38)
struct UGobiCollectionsSubsystem : UWorldSubsystem {
	char pad_38[0x6c0]; // 0x38(0x6c0)

	void UnregisterDialogueComponent(struct UDialogueComponent* DialogueComponent); // Function Gobi.GobiCollectionsSubsystem.UnregisterDialogueComponent // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiComboBox
// Size: 0xf30 (Inherited: 0xf30)
struct UGobiComboBox : UComboBoxString {
};

// Class Gobi.GobiCooldownSubsystem
// Size: 0x90 (Inherited: 0x38)
struct UGobiCooldownSubsystem : UWorldSubsystem {
	char pad_38[0x58]; // 0x38(0x58)
};

// Class Gobi.GobiCustomScalingRule
// Size: 0x30 (Inherited: 0x30)
struct UGobiCustomScalingRule : UDPICustomScalingRule {
};

// Class Gobi.GobiPlayerControllerBase
// Size: 0x798 (Inherited: 0x5d0)
struct AGobiPlayerControllerBase : APlayerController {
	struct FMulticastInlineDelegate OnLastInputDeviceChanged; // 0x5d0(0x10)
	char pad_5E0[0x18]; // 0x5e0(0x18)
	struct FMulticastInlineDelegate OnInputDisabled; // 0x5f8(0x10)
	struct FMulticastInlineDelegate OnInputEnabled; // 0x608(0x10)
	char pad_618[0x58]; // 0x618(0x58)
	struct FMulticastInlineDelegate OnChatMessageReceived; // 0x670(0x10)
	char pad_680[0x10]; // 0x680(0x10)
	struct FMulticastInlineDelegate OnSystemMessageReceived; // 0x690(0x10)
	struct UGobiPlayerInput* GobiPlayerInput; // 0x6a0(0x08)
	char pad_6A8[0x8]; // 0x6a8(0x08)
	struct UBugReporterComponent* BugReporter; // 0x6b0(0x08)
	struct UMaterialInstance* WatermarkMaterial; // 0x6b8(0x08)
	struct UCanvasRenderTarget2D* WatermarkRenderTarget; // 0x6c0(0x08)
	struct UMaterialInterface* WatermarkMaterialClass; // 0x6c8(0x08)
	struct UFont* WatermarkFont; // 0x6d0(0x08)
	struct UUIScreenManager* UIScreenManagerClass; // 0x6d8(0x08)
	struct UUIScreenManager* UIScreenManager; // 0x6e0(0x08)
	struct UGlobalSafeZoneUserWidget* GlobalSafeZoneWidget; // 0x6e8(0x08)
	struct UPushToTalkComponent* PushToTalkComponent; // 0x6f0(0x08)
	struct UVoiceTalkersComponent* VoiceTalkersComponent; // 0x6f8(0x08)
	struct UTRSSubtitleComponent* SubtitleComponent; // 0x700(0x08)
	struct UGobiPlayerProfileComponent* GobiPlayerProfileComponent; // 0x708(0x08)
	struct UPlayerStatsComponent* PlayerStatsComponent; // 0x710(0x08)
	struct UGobiPlayerChallengeComponent* GobiPlayerChallengeComponent; // 0x718(0x08)
	char pad_720[0x78]; // 0x720(0x78)

	bool WasLastInputGamepad(); // Function Gobi.GobiPlayerControllerBase.WasLastInputGamepad // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiDemoSpectator
// Size: 0x7c8 (Inherited: 0x798)
struct AGobiDemoSpectator : AGobiPlayerControllerBase {
	struct FMulticastInlineDelegate OnReplayPaused; // 0x798(0x10)
	struct FMulticastInlineDelegate OnReplayUnpaused; // 0x7a8(0x10)
	char pad_7B8[0x8]; // 0x7b8(0x08)
	struct UDemoHUDUserWidget* DemoHUD; // 0x7c0(0x08)

	void TogglePause(); // Function Gobi.GobiDemoSpectator.TogglePause // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiDestructibleActor
// Size: 0x278 (Inherited: 0x250)
struct AGobiDestructibleActor : AActor {
	struct USceneComponent* InternalRootComponent; // 0x250(0x08)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x258(0x08)
	struct UBoxComponent* DamageVolumeComponent; // 0x260(0x08)
	struct UGobiNavModifierComponent* NavModifierComponent; // 0x268(0x08)
	struct UHealthComponent* HealthComponent; // 0x270(0x08)

	void OnDestruction(struct UHealthComponent* InHealthComponent); // Function Gobi.GobiDestructibleActor.OnDestruction // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiDestructibleComponent
// Size: 0xe8 (Inherited: 0xd8)
struct UGobiDestructibleComponent : UActorComponent {
	struct UGobiNavModifierComponent* NavModComponent; // 0xd8(0x08)
	struct UHealthComponent* HealthComponent; // 0xe0(0x08)

	struct UGobiNavModifierComponent* GetNavModComponent(); // Function Gobi.GobiDestructibleComponent.GetNavModComponent // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiDialogueBankManager
// Size: 0x2e8 (Inherited: 0x2e8)
struct AGobiDialogueBankManager : ADialogueBankManger {
};

// Class Gobi.GobiDialogueEvaluatorSet
// Size: 0x78 (Inherited: 0x30)
struct UGobiDialogueEvaluatorSet : UObject {
	char pad_30[0x48]; // 0x30(0x48)
};

// Class Gobi.GobiDialoguePlayback
// Size: 0x370 (Inherited: 0x370)
struct UGobiDialoguePlayback : UDialoguePlayback {
};

// Class Gobi.CharacterDialogueTrigger
// Size: 0x58 (Inherited: 0x48)
struct UCharacterDialogueTrigger : UPersonalEventTrigger {
	char pad_48[0x10]; // 0x48(0x10)
};

// Class Gobi.HeroDialogueTrigger
// Size: 0x60 (Inherited: 0x58)
struct UHeroDialogueTrigger : UCharacterDialogueTrigger {
	char pad_58[0x8]; // 0x58(0x08)
};

// Class Gobi.OnItemAddRemoveTrigger
// Size: 0x58 (Inherited: 0x58)
struct UOnItemAddRemoveTrigger : UCharacterDialogueTrigger {

	void OnItemDropped(struct UInventoryComponent* InventoryComponent, struct AItemPickup* DroppedItem, bool bManuallyDropped); // Function Gobi.OnItemAddRemoveTrigger.OnItemDropped // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.OnInflictDamageTrigger
// Size: 0x240 (Inherited: 0x58)
struct UOnInflictDamageTrigger : UCharacterDialogueTrigger {
	int32_t KillCountL1; // 0x58(0x04)
	int32_t KillCountL2; // 0x5c(0x04)
	int32_t KillCountL3; // 0x60(0x04)
	int32_t KillCountL4; // 0x64(0x04)
	float MinTimeForEngagingEnemy; // 0x68(0x04)
	float MinTimeForEngagingSpecial; // 0x6c(0x04)
	int32_t HitsRequiredForAimHead; // 0x70(0x04)
	int32_t HitsRequiredForFindWeakSpot; // 0x74(0x04)
	struct FGameplayTagQuery SpecialDownedTags; // 0x78(0x48)
	struct FGameplayTagQuery AllSpecialTags; // 0xc0(0x48)
	struct FGameplayTagQuery MeleeKillTag; // 0x108(0x48)
	struct FGameplayTagQuery HeadshotWeaponTag; // 0x150(0x48)
	struct FGameplayTagQuery SpecialHeadWeakspotTags; // 0x198(0x48)
	struct FGameplayTagQuery SpecialShootWeakspotTags; // 0x1e0(0x48)
	char pad_228[0x18]; // 0x228(0x18)
};

// Class Gobi.DialogueEvaluatorTrigger
// Size: 0xd0 (Inherited: 0x58)
struct UDialogueEvaluatorTrigger : UCharacterDialogueTrigger {
	struct UGobiDialogueEvaluatorSet* EvalSet; // 0x58(0x08)
	float TestInterval; // 0x60(0x04)
	struct FName OnPassedEventName; // 0x64(0x08)
	struct FName OnContinueEventName; // 0x6c(0x08)
	struct FName OnFailedEventName; // 0x74(0x08)
	bool OwningCharacterAsEventTarget; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	struct UGobiDialogueEvaluatorSet* ActiveEvalSet; // 0x80(0x08)
	char pad_88[0x48]; // 0x88(0x48)
};

// Class Gobi.OnSaferoomStateChangeTrigger
// Size: 0xd0 (Inherited: 0x60)
struct UOnSaferoomStateChangeTrigger : UHeroDialogueTrigger {
	float TimerInterval; // 0x60(0x04)
	float InSaferoomDelay; // 0x64(0x04)
	float InitialEndingSaferoomDelay; // 0x68(0x04)
	struct FVector2D SaferoonWaitingDelayMinMax; // 0x6c(0x08)
	float InjuredChance; // 0x74(0x04)
	struct TWeakObjectPtr<struct ASafeRoom> StartingSaferoom; // 0x78(0x08)
	char pad_80[0x50]; // 0x80(0x50)

	void OnPlayerSaferoomChanged(struct ASafeRoom* SafeRoom); // Function Gobi.OnSaferoomStateChangeTrigger.OnPlayerSaferoomChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.TeamPositionTrigger
// Size: 0x78 (Inherited: 0x40)
struct UTeamPositionTrigger : UWorldDialogueTrigger {
	float TestInterval; // 0x40(0x04)
	float TakeLeadSeparationDistance; // 0x44(0x04)
	float TakeLeadMaxDistFromGoldenPath; // 0x48(0x04)
	float TeamClusterDistance; // 0x4c(0x04)
	float SeparatedFromTeamDistance; // 0x50(0x04)
	char pad_54[0x24]; // 0x54(0x24)
};

// Class Gobi.OnHealthChangeTrigger
// Size: 0x110 (Inherited: 0x58)
struct UOnHealthChangeTrigger : UCharacterDialogueTrigger {
	char pad_58[0x10]; // 0x58(0x10)
	float TimerInterval; // 0x68(0x04)
	float MinHealthForOnHealed; // 0x6c(0x04)
	struct FGameplayTagContainer OnHeroDamagedTagExceptions; // 0x70(0x20)
	float HealthMaxPercentageForNag; // 0x90(0x04)
	float HealthMaxPercentageForLowHealth; // 0x94(0x04)
	float HealthMaxPercentageForLowHealthBig; // 0x98(0x04)
	float DoomCoughChance; // 0x9c(0x04)
	float FriendlyFireDelay; // 0xa0(0x04)
	float FriendlyFireCooldown; // 0xa4(0x04)
	char pad_A8[0x8]; // 0xa8(0x08)
	struct FGameplayTagQuery HealingItemTagQuery; // 0xb0(0x48)
	struct FGameplayTag BulletDamageTypeTag; // 0xf8(0x08)
	char pad_100[0x10]; // 0x100(0x10)

	void OnPlayerHealthChanged(float NewHealth, float DeltaHealth); // Function Gobi.OnHealthChangeTrigger.OnPlayerHealthChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.OnLifeStateChangeTrigger
// Size: 0xa0 (Inherited: 0x58)
struct UOnLifeStateChangeTrigger : UCharacterDialogueTrigger {
	char pad_58[0x10]; // 0x58(0x10)
	float IncapBeatDelay; // 0x68(0x04)
	float DeathBeatDelay; // 0x6c(0x04)
	float DeathLaterDelay; // 0x70(0x04)
	float IncapInterval; // 0x74(0x04)
	int32_t RescueCalloutsBeforeLong; // 0x78(0x04)
	float ChanceForRescueCallout; // 0x7c(0x04)
	float ChanceForRescueCalloutLong; // 0x80(0x04)
	float RescueInterval; // 0x84(0x04)
	float LedgeHangInterval; // 0x88(0x04)
	char pad_8C[0x14]; // 0x8c(0x14)

	void OnLifeStateChanged(struct FGameplayTag NewStateTag, struct FGameplayTag PreviousStateTag); // Function Gobi.OnLifeStateChangeTrigger.OnLifeStateChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.OnGameplayTagChangedTrigger
// Size: 0x110 (Inherited: 0x58)
struct UOnGameplayTagChangedTrigger : UCharacterDialogueTrigger {
	char pad_58[0x10]; // 0x58(0x10)
	struct FGameplayTagContainer PinnedTagContainer; // 0x68(0x20)
	float PinnedCalloutInterval; // 0x88(0x04)
	float ChanceForPinnedCallout; // 0x8c(0x04)
	int32_t MaxStruggleBeforePinnedCallout; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FGameplayTagContainer PukedTagContainer; // 0x98(0x20)
	float PukedCalloutDelay; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FGameplayTagContainer SqueezedTagContainer; // 0xc0(0x20)
	float SqueezedCalloutInterval; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FGameplayTagContainer OutOfSafezoneTagContainer; // 0xe8(0x20)
	float OutOfSafezoneCoughInterval; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)

	void OnTagChanged(struct FGameplayTag NewTag, bool TagExists); // Function Gobi.OnGameplayTagChangedTrigger.OnTagChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.OnPlayerStaminaStateChangedTrigger
// Size: 0xc0 (Inherited: 0x58)
struct UOnPlayerStaminaStateChangedTrigger : UCharacterDialogueTrigger {
	struct TArray<struct FCharacterStaminaInfo> AllCharacterStaminaInfo; // 0x58(0x10)
	float TickTimerInterval; // 0x68(0x04)
	char pad_6C[0x54]; // 0x6c(0x54)
};

// Class Gobi.OnAchievementCompletedTrigger
// Size: 0x60 (Inherited: 0x58)
struct UOnAchievementCompletedTrigger : UCharacterDialogueTrigger {
	char pad_58[0x8]; // 0x58(0x08)

	void OnAchievementCompleted(struct UAchievement* Achievement); // Function Gobi.OnAchievementCompletedTrigger.OnAchievementCompleted // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.NPCBanterDialogueTrigger
// Size: 0xb8 (Inherited: 0x58)
struct UNPCBanterDialogueTrigger : UCharacterDialogueTrigger {
	char pad_58[0x8]; // 0x58(0x08)
	struct UDataTable* NPCBanterDataTable; // 0x60(0x08)
	float MaxConversationDistance; // 0x68(0x04)
	struct FVector2D TimerInterval; // 0x6c(0x08)
	float BackupBanterStartTimer; // 0x74(0x04)
	char pad_78[0x40]; // 0x78(0x40)
};

// Class Gobi.ObjectiveTrigger
// Size: 0x50 (Inherited: 0x40)
struct UObjectiveTrigger : UWorldDialogueTrigger {
	char pad_40[0x10]; // 0x40(0x10)

	void OnObjectiveStart(struct APlayerState* PlayerState, struct FDataTableRowHandle ObjectiveHandle); // Function Gobi.ObjectiveTrigger.OnObjectiveStart // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.BossPositionTrigger
// Size: 0xe0 (Inherited: 0x40)
struct UBossPositionTrigger : UWorldDialogueTrigger {
	float TestInterval; // 0x40(0x04)
	float WarningNameCooldown; // 0x44(0x04)
	char pad_48[0x4]; // 0x48(0x04)
	float SpottedByEnemyCooldown; // 0x4c(0x04)
	char pad_50[0x8]; // 0x50(0x08)
	struct TSoftClassPtr<UObject> CommonFilterClass; // 0x58(0x28)
	struct TMap<struct TSoftClassPtr<UObject>, struct FBossReqsData> BossReqsMapData; // 0x80(0x50)
	char pad_D0[0x10]; // 0xd0(0x10)
};

// Class Gobi.GobiEnemyDamageComponent
// Size: 0x178 (Inherited: 0xd8)
struct UGobiEnemyDamageComponent : UActorComponent {
	struct UBlackboardData* BlackboardAsset; // 0xd8(0x08)
	struct FBlackboardKeySelector EnemyBBKey; // 0xe0(0x28)
	struct AGobiCharacter* CharacterOwner; // 0x108(0x08)
	struct TMap<struct AGobiCharacter*, struct FGobiEnemyDamage> EnemyDamage; // 0x110(0x50)
	struct AGobiCharacter* CurrentEnemy; // 0x160(0x08)
	char pad_168[0x8]; // 0x168(0x08)
	struct UBlackboardComponent* BlackboardComp; // 0x170(0x08)

	void RegisterEnemyAttackAttempt(struct AGobiCharacter* Enemy); // Function Gobi.GobiEnemyDamageComponent.RegisterEnemyAttackAttempt // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiGameCoach
// Size: 0x160 (Inherited: 0x160)
struct UGobiGameCoach : UGameCoach {

	void OnResetMission(); // Function Gobi.GobiGameCoach.OnResetMission // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiGameCoachEvaluatorSet
// Size: 0x78 (Inherited: 0x30)
struct UGobiGameCoachEvaluatorSet : UObject {
	char pad_30[0x48]; // 0x30(0x48)
};

// Class Gobi.GobiGameInstance
// Size: 0xa60 (Inherited: 0x1b0)
struct UGobiGameInstance : UGameInstance {
	struct FMulticastInlineDelegate OnLocalTeamChanged; // 0x1b0(0x10)
	char pad_1C0[0x728]; // 0x1c0(0x728)
	struct TMap<struct FString, struct UObject*> SeamlessTravelData; // 0x8e8(0x50)
	struct UPlayerSettingsSystem* PlayerSettingsSystem; // 0x938(0x08)
	struct USecondarySignInInputProcessor* SecondarySignInInputProcessor; // 0x940(0x08)
	struct UDistanceMapManager* DistanceMapManagerClass; // 0x948(0x08)
	struct UDistanceMapManager* DistanceMapManager; // 0x950(0x08)
	struct UDifficultyManager* DifficultyManager; // 0x958(0x08)
	struct UClaimManager* ClaimManager; // 0x960(0x08)
	struct UCorpseManager* CorpseManagerClass; // 0x968(0x08)
	struct UCampaignRunManager* CampaignRunManagerClass; // 0x970(0x08)
	struct UCorpseManager* CorpseManager; // 0x978(0x08)
	struct UOnlineSessions* OnlineSessions; // 0x980(0x08)
	struct UDedicatedServerManager* DedicatedServerManager; // 0x988(0x08)
	struct UGobiPlayerProfileManager* GobiPlayerProfileManager; // 0x990(0x08)
	struct UMatchmaking* Matchmaking; // 0x998(0x08)
	struct UMatchmakingPoolManager* MatchmakingPoolManager; // 0x9a0(0x08)
	struct UOnlineFlow* OnlineFlow; // 0x9a8(0x08)
	struct UFriendsManager* FriendsManager; // 0x9b0(0x08)
	struct UGobiWebServices* GobiWebServices; // 0x9b8(0x08)
	struct UDedicatedServerConsole* DedicatedServerConsole; // 0x9c0(0x08)
	struct UDataTable* MissionMapsTable; // 0x9c8(0x08)
	struct UGlobalAssetLoader* GlobalAssetLoader; // 0x9d0(0x08)
	struct UGlobalAssetLoaderV2* GlobalAssetLoaderV2; // 0x9d8(0x08)
	struct UTeamRelationshipMap* TeamRelationshipMapClass; // 0x9e0(0x08)
	struct UPlatformInputIcons* InputIconsClass; // 0x9e8(0x08)
	struct UItemPreLoader* ItemPreLoader; // 0x9f0(0x08)
	struct UGobiMusicSystem* MusicSystemClass; // 0x9f8(0x08)
	struct UAudioMutilationManager* AudioMutilationManagerClass; // 0xa00(0x08)
	struct USharedSoundManager* SharedSoundManagerClass; // 0xa08(0x08)
	struct TArray<struct UAudioZombieManagerSystem*> AudioZombieManagerSystemClasses; // 0xa10(0x10)
	struct UCampaignRunManager* CampaignRunManager; // 0xa20(0x08)
	struct UGlobalAnalyticsManager* GlobalAnalyticsManager; // 0xa28(0x08)
	struct UCustomCollisionChannelMap* CustomCollisionChannelMap; // 0xa30(0x08)
	char pad_A38[0x10]; // 0xa38(0x10)
	struct UAutomatedClient* AutomatedClient; // 0xa48(0x08)
	struct AAudioController* AudioController; // 0xa50(0x08)
	char pad_A58[0x8]; // 0xa58(0x08)

	bool TryPlayAkAudioEvent(struct UObject* SoundObject, int32_t UserIndex); // Function Gobi.GobiGameInstance.TryPlayAkAudioEvent // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GameStateBaseSeamessTravelData
// Size: 0x40 (Inherited: 0x30)
struct UGameStateBaseSeamessTravelData : UObject {
	struct TArray<int32_t> TeamScores; // 0x30(0x10)
};

// Class Gobi.GobiGameStateDebugger
// Size: 0x260 (Inherited: 0x250)
struct AGobiGameStateDebugger : AInfo {
	struct AGobiGameStateBase* GameState; // 0x250(0x08)
	char pad_258[0x8]; // 0x258(0x08)

	void DebugDrawHandler(struct UCanvas* Canvas, struct APlayerController* InPlayerController); // Function Gobi.GobiGameStateDebugger.DebugDrawHandler // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiHighlightSubsystem
// Size: 0x90 (Inherited: 0x38)
struct UGobiHighlightSubsystem : UWorldSubsystem {
	char pad_38[0x58]; // 0x38(0x58)
};

// Class Gobi.GobiLightingSubsystem
// Size: 0x70 (Inherited: 0x38)
struct UGobiLightingSubsystem : UEngineSubsystem {
	char pad_38[0x38]; // 0x38(0x38)
};

// Class Gobi.GobiListenerManager
// Size: 0xe0 (Inherited: 0xd8)
struct UGobiListenerManager : UTRSListenerManager {
	char pad_D8[0x8]; // 0xd8(0x08)
};

// Class Gobi.GobiLocalPlayer
// Size: 0x2f0 (Inherited: 0x260)
struct UGobiLocalPlayer : ULocalPlayer {
	struct FMulticastInlineDelegate OnSettingsInitialized; // 0x260(0x10)
	char pad_270[0x48]; // 0x270(0x48)
	struct UPlayerSettingsGame* PlayerSettings; // 0x2b8(0x08)
	struct UGameCoachSettings* GameCoachSettings; // 0x2c0(0x08)
	struct UFTUESettings* FTUESettings; // 0x2c8(0x08)
	struct UPlayerProfileSettings* PlayerProfileSettings; // 0x2d0(0x08)
	struct UOnlineSettings* OnlineSettings; // 0x2d8(0x08)
	struct URelationshipSettings* RelationshipSettings; // 0x2e0(0x08)
	struct UPlayerAnalyticsSettings* PlayerAnalyticsSettings; // 0x2e8(0x08)

	struct UPlayerSettingsGame* GetPlayerSettingsForOwner(struct AActor* LocalPlayerOwner); // Function Gobi.GobiLocalPlayer.GetPlayerSettingsForOwner // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiMediaBlueprintFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UGobiMediaBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	int32_t GetLocalizedAudioTrackForMediaPlayer(struct UObject* WorldContextObject); // Function Gobi.GobiMediaBlueprintFunctionLibrary.GetLocalizedAudioTrackForMediaPlayer // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiMediaSubtitleHelperSubsystem
// Size: 0x68 (Inherited: 0x38)
struct UGobiMediaSubtitleHelperSubsystem : UGameInstanceSubsystem {
	char pad_38[0x8]; // 0x38(0x08)
	struct UDataTable* SubtitleTimingTable; // 0x40(0x08)
	char pad_48[0x20]; // 0x48(0x20)

	void UnregisterMediaPlayer(); // Function Gobi.GobiMediaSubtitleHelperSubsystem.UnregisterMediaPlayer // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiMusicSubsystem
// Size: 0x40 (Inherited: 0x38)
struct UGobiMusicSubsystem : UGameInstanceSubsystem {
	struct UGobiMusicSystem* MusicSystem; // 0x38(0x08)

	struct UGobiMusicSystem* GetMusicSystem(); // Function Gobi.GobiMusicSubsystem.GetMusicSystem // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiMusicSystem
// Size: 0x440 (Inherited: 0x30)
struct UGobiMusicSystem : UObject {
	char pad_30[0x30]; // 0x30(0x30)
	float TickInterval; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct UAkAudioBank* MusicBank; // 0x68(0x08)
	struct UAkAudioEvent* MusicEvent; // 0x70(0x08)
	struct UAkAudioEvent* MusicStopEvent; // 0x78(0x08)
	struct UDataTable* MusicStateBehaviorTable; // 0x80(0x08)
	struct FDataTableRowHandle LegalScreenStateRowHandle; // 0x88(0x20)
	struct FDataTableRowHandle SignInScreenStateRowHandle; // 0xa8(0x20)
	struct FDataTableRowHandle MovieStateRowHandle; // 0xc8(0x20)
	struct FDataTableRowHandle PreRoundStateRowHandle; // 0xe8(0x20)
	struct FDataTableRowHandle MissionFailStateRowHandle; // 0x108(0x20)
	struct FDataTableRowHandle MissionCompleteStateRowHandle; // 0x128(0x20)
	struct FDataTableRowHandle CreditsStateRowHandle; // 0x148(0x20)
	struct FDataTableRowHandle SafeRoomStateRowHandle; // 0x168(0x20)
	struct FDataTableRowHandle ExploreStateRowHandle; // 0x188(0x20)
	struct FDataTableRowHandle CombatStateRowHandle; // 0x1a8(0x20)
	struct FDataTableRowHandle IncapStateRowHandle; // 0x1c8(0x20)
	struct FDataTableRowHandle RevivingStateRowHandle; // 0x1e8(0x20)
	struct FDataTableRowHandle SnitcherHordeStateRowHandle; // 0x208(0x20)
	struct FDataTableRowHandle EndlessHordeStateRowHandle; // 0x228(0x20)
	struct FDataTableRowHandle PVPPrepStateRowHandle; // 0x248(0x20)
	struct FDataTableRowHandle PVPCollapseStateRowHandle; // 0x268(0x20)
	struct FDataTableRowHandle PVPHordeStateRowHandle; // 0x288(0x20)
	struct FDataTableRowHandle PVPSurvivalStateRowHandle; // 0x2a8(0x20)
	struct FDataTableRowHandle PVPEndedStateRowHandle; // 0x2c8(0x20)
	struct FDataTableRowHandle PVPEndNeutralStateRowHandle; // 0x2e8(0x20)
	struct FDataTableRowHandle PVPEndPositiveStateRowHandle; // 0x308(0x20)
	struct FDataTableRowHandle PVPEndNegativeStateRowHandle; // 0x328(0x20)
	struct FDataTableRowHandle MissionLoadingStateRowHandle; // 0x348(0x20)
	struct UDataTable* MusicEventTable; // 0x368(0x08)
	struct UDataTable* TRSGenericMusicEvents; // 0x370(0x08)
	struct TArray<struct UCharacterMusicInfo*> CharacterMusics; // 0x378(0x10)
	float HordeThreatThreshold; // 0x388(0x04)
	float HordeDuration; // 0x38c(0x04)
	enum class EMusicHordeState MusicHordeState; // 0x390(0x01)
	char pad_391[0x8f]; // 0x391(0x8f)
	struct FDelegate MusicEventCallback; // 0x420(0x10)
	char pad_430[0x10]; // 0x430(0x10)

	void SetMusicRTPCValue(struct FString RTPC, float Value, int32_t InterpolationTimeMs); // Function Gobi.GobiMusicSystem.SetMusicRTPCValue // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiNavLink
// Size: 0x260 (Inherited: 0x250)
struct AGobiNavLink : AActor {
	char pad_250[0x8]; // 0x250(0x08)
	struct UGobiNavLinkComponent* NavLinkComponent; // 0x258(0x08)
};

// Class Gobi.GobiNavLinkComponent
// Size: 0x5e0 (Inherited: 0x4c0)
struct UGobiNavLinkComponent : UNavLinkComponent {
	struct FNavLinkGenerator NavGenerationData; // 0x4c0(0xb0)
	uint32_t CustomUserID; // 0x570(0x04)
	char pad_574[0x4]; // 0x574(0x04)
	struct TArray<struct FNavLinkOffset> RelativeLinkOffsets; // 0x578(0x10)
	struct UNavArea* EnabledNavAreaClass; // 0x588(0x08)
	char pad_590[0x18]; // 0x590(0x18)
	struct UNavArea* BeginPlayNavAreaClass; // 0x5a8(0x08)
	bool bEnableBeginPlayNavAreaClass; // 0x5b0(0x01)
	char pad_5B1[0x3]; // 0x5b1(0x03)
	float HighClimbDistance; // 0x5b4(0x04)
	struct TArray<struct FVector> ContextLocations; // 0x5b8(0x10)
	struct TArray<float> ContextDistances; // 0x5c8(0x10)
	float ErrorTolerance; // 0x5d8(0x04)
	char pad_5DC[0x4]; // 0x5dc(0x04)

	void SetLinksEnabled(bool bEnable); // Function Gobi.GobiNavLinkComponent.SetLinksEnabled // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiNavLinkProxy
// Size: 0x260 (Inherited: 0x260)
struct AGobiNavLinkProxy : AGobiNavLink {
};

// Class Gobi.GobiNavMesh
// Size: 0x500 (Inherited: 0x4e8)
struct AGobiNavMesh : ARecastNavMesh {
	char pad_4E8[0x18]; // 0x4e8(0x18)
};

// Class Gobi.GobiNavModifierComponent
// Size: 0x178 (Inherited: 0x108)
struct UGobiNavModifierComponent : UNavRelevantComponent {
	struct UNavArea* AreaClass; // 0x108(0x08)
	struct UNavArea* InactiveAreaClass; // 0x110(0x08)
	struct FNavAgentSelector SupportedAgents; // 0x118(0x04)
	struct FGameplayTag CustomNavBoundsVolumesTag; // 0x11c(0x08)
	char pad_124[0x4]; // 0x124(0x04)
	struct UNavArea* AreaClassToRemoveHordeBlockingTagOnSpawnActors; // 0x128(0x08)
	struct FGameplayTag HordeBlockingTagToRemoveOnSpawnActors; // 0x130(0x08)
	char bIncludeAgentHeight : 1; // 0x138(0x01)
	char pad_138_1 : 7; // 0x138(0x01)
	char pad_139[0x3f]; // 0x139(0x3f)

	void SetAreaClass(struct UNavArea* NewAreaClass); // Function Gobi.GobiNavModifierComponent.SetAreaClass // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiPathFollowingComponent
// Size: 0x3d8 (Inherited: 0x280)
struct UGobiPathFollowingComponent : UPathFollowingComponent {
	char pad_280[0x1]; // 0x280(0x01)
	bool bShouldAvoidObstacles; // 0x281(0x01)
	bool bShouldAnticipateTurns; // 0x282(0x01)
	bool bShouldSlowdownAtGoal; // 0x283(0x01)
	bool bShouldUsePathOffset; // 0x284(0x01)
	bool bEnableAgentSeparation; // 0x285(0x01)
	char pad_286[0x2]; // 0x286(0x02)
	float AgentSeparationWeight; // 0x288(0x04)
	struct FGameplayTag TraversalTag; // 0x28c(0x08)
	struct FGameplayTag ShortcuttingTag; // 0x294(0x08)
	struct FGameplayTag DestructibleTag; // 0x29c(0x08)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct USteeringControl* DefaultSteeringControl; // 0x2a8(0x08)
	struct USteeringBehavior* DefaultSteeringBehavior; // 0x2b0(0x08)
	float PathingWalkableFloorAngle; // 0x2b8(0x04)
	char pad_2BC[0x11c]; // 0x2bc(0x11c)

	void OnTraversalActionDeactivated(struct UGameplayAction* Action, enum class EDeactivationReason DeactivationReason); // Function Gobi.GobiPathFollowingComponent.OnTraversalActionDeactivated // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiPerformanceMetricTestActor
// Size: 0x250 (Inherited: 0x250)
struct AGobiPerformanceMetricTestActor : AActor {
};

// Class Gobi.GobiPerformanceMetricTestController
// Size: 0x70 (Inherited: 0x38)
struct UGobiPerformanceMetricTestController : UGauntletTestController {
	char pad_38[0x30]; // 0x38(0x30)
	struct AActor* CurrentActor; // 0x68(0x08)
};

// Class Gobi.GobiPixelStreaming
// Size: 0x40 (Inherited: 0x30)
struct UGobiPixelStreaming : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class Gobi.GobiPlayerCameraManager
// Size: 0x2840 (Inherited: 0x2830)
struct AGobiPlayerCameraManager : APlayerCameraManager {
	struct ACameraManagerDebugger* CameraManagerDebugger; // 0x2828(0x08)
	char pad_2838[0x8]; // 0x2838(0x08)

	void OnResetMission(); // Function Gobi.GobiPlayerCameraManager.OnResetMission // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiPlayerChallengeComponent
// Size: 0xf8 (Inherited: 0xd8)
struct UGobiPlayerChallengeComponent : UActorComponent {
	struct FMulticastInlineDelegate OnPlayerChallengeRankUpdated; // 0xd8(0x10)
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FGobiPlayerChallengeRank ChallengeRank; // 0xf0(0x08)

	void OnRep_ChallengeRank(); // Function Gobi.GobiPlayerChallengeComponent.OnRep_ChallengeRank // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiPlayerController
// Size: 0x838 (Inherited: 0x798)
struct AGobiPlayerController : AGobiPlayerControllerBase {
	struct UPlayerSpraysComponent* PlayerSprays; // 0x798(0x08)
	struct UPlayerWaypointsComponent* PlayerWaypoints; // 0x7a0(0x08)
	char pad_7A8[0x10]; // 0x7a8(0x10)
	struct FMulticastInlineDelegate OnBeginPlayingState; // 0x7b8(0x10)
	struct FMulticastInlineDelegate OnEndPlayingState; // 0x7c8(0x10)
	struct FMulticastInlineDelegate OnBeginSpectatingState; // 0x7d8(0x10)
	struct FMulticastInlineDelegate OnEndSpectatingState; // 0x7e8(0x10)
	struct UScreenFXComponent* ScreenFXComponent; // 0x7f8(0x08)
	char pad_800[0x4]; // 0x800(0x04)
	struct FSyncedClientPlayerControllerCVars SyncedClientCVars; // 0x804(0x10)
	char pad_814[0x4]; // 0x814(0x04)
	struct UTriggerEffectsHandler* TriggerEffectsHandler; // 0x818(0x08)
	struct AActor* CheatBoomClass; // 0x820(0x08)
	struct AActor* CheatMolotovClass; // 0x828(0x08)
	struct UTriggerEffectsHandler* TriggerEffectsHandlerClass; // 0x830(0x08)

	void ToggleInfiniteStamina(); // Function Gobi.GobiPlayerController.ToggleInfiniteStamina // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiPlayerInput
// Size: 0x430 (Inherited: 0x3b0)
struct UGobiPlayerInput : UPlayerInput {
	float LeftStickInnerDeadZone; // 0x3b0(0x04)
	float LeftStickOuterDeadZone; // 0x3b4(0x04)
	float RightStickInnerDeadZone; // 0x3b8(0x04)
	float RightStickOuterDeadZone; // 0x3bc(0x04)
	char pad_3C0[0x4]; // 0x3c0(0x04)
	float AxialDeadzoneRequiredMin; // 0x3c4(0x04)
	float AxialDeadzoneRequiredMax; // 0x3c8(0x04)
	float AxialDeadzoneGrowthMin; // 0x3cc(0x04)
	float AxialDeadzoneGrowthMax; // 0x3d0(0x04)
	float MaxSmoothingTime; // 0x3d4(0x04)
	char pad_3D8[0x58]; // 0x3d8(0x58)
};

// Class Gobi.GobiPlayerMovementComponent
// Size: 0xcc0 (Inherited: 0x900)
struct UGobiPlayerMovementComponent : UGobiCharacterMovementComponent {
	struct FMulticastInlineDelegate OnJump; // 0x900(0x10)
	char pad_910[0x8]; // 0x910(0x08)
	struct APlayerCharacter* OwningPlayer; // 0x918(0x08)
	struct ULifeStateComponent* LifeStateComponent; // 0x920(0x08)
	struct UCameraComponent* CameraComponent; // 0x928(0x08)
	bool bIsJumping; // 0x930(0x01)
	char pad_931[0x7]; // 0x931(0x07)
	struct FGameplayTagQuery LookDisabledTags; // 0x938(0x48)
	char pad_980[0x68]; // 0x980(0x68)
	enum class EEquipmentSlot InputSelectedEquipmentSlot; // 0x9e8(0x01)
	char pad_9E9[0x7]; // 0x9e9(0x07)
	struct AItem* InputSelectedEquipmentActor; // 0x9f0(0x08)
	struct AActor* PotentialUsableActor; // 0x9f8(0x08)
	struct FVector_NetQuantize NetAccel; // 0xa00(0x0c)
	float DebugFlySpeed; // 0xa0c(0x04)
	float MaxSprintSpeed; // 0xa10(0x04)
	bool CrouchedJumpCancelsCrouch; // 0xa14(0x01)
	char pad_A15[0x3]; // 0xa15(0x03)
	struct TArray<struct FCustomDataProviderFloat> MantleVerticalSpeedMods; // 0xa18(0x10)
	struct TArray<struct FCustomDataProviderFloat> MaxSpeedMods; // 0xa28(0x10)
	float JumpOffLadderLateralSpeed; // 0xa38(0x04)
	float MovementInputScaleLowerLimit; // 0xa3c(0x04)
	struct FLookInputHandler LookInputHandler; // 0xa40(0xa0)
	char pad_AE0[0x8]; // 0xae0(0x08)
	struct FGameplayTagContainer DisableInputMovementTags; // 0xae8(0x20)
	struct FGameplayTagQuery DisableJumpInputTags; // 0xb08(0x48)
	bool bTickSpringArms; // 0xb50(0x01)
	char pad_B51[0x37]; // 0xb51(0x37)
	bool bServerEnforcedFixedTimestep; // 0xb88(0x01)
	char pad_B89[0x7]; // 0xb89(0x07)
	struct UPrimitiveComponent* ServerMovementBase; // 0xb90(0x08)
	char pad_B98[0x108]; // 0xb98(0x108)
	struct TArray<struct FQueuedClientAdjustment> QueuedClientAdjustments; // 0xca0(0x10)
	char pad_CB0[0x10]; // 0xcb0(0x10)

	void ServerMoves(struct TArray<char> Buffer, struct TArray<struct FHitResult> HitResults); // Function Gobi.GobiPlayerMovementComponent.ServerMoves // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiPlayerProfileComponent
// Size: 0x1a8 (Inherited: 0xd8)
struct UGobiPlayerProfileComponent : UActorComponent {
	char pad_D8[0xa0]; // 0xd8(0xa0)
	bool bPlayerProfileServiceHealthy; // 0x178(0x01)
	char pad_179[0x2f]; // 0x179(0x2f)

	void SetChallengeSetProgress(int32_t Rank, int32_t Score); // Function Gobi.GobiPlayerProfileComponent.SetChallengeSetProgress // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiPlayerProfileManager
// Size: 0x1a0 (Inherited: 0x30)
struct UGobiPlayerProfileManager : UObject {
	char pad_30[0xf8]; // 0x30(0xf8)
	struct UDataTable* ProductsTable; // 0x128(0x08)
	struct UDataTable* MerchantsTable; // 0x130(0x08)
	struct UDataTable* CaravanSchemasTable; // 0x138(0x08)
	struct UDataTable* GameplayCardsTable; // 0x140(0x08)
	char pad_148[0x58]; // 0x148(0x58)

	int32_t MaxCustomDecks(); // Function Gobi.GobiPlayerProfileManager.MaxCustomDecks // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiPlayerStart
// Size: 0x2a0 (Inherited: 0x280)
struct AGobiPlayerStart : APlayerStart {
	struct FDataTableRowHandle MissionHandle; // 0x280(0x20)
};

// Class Gobi.GobiPlayerState
// Size: 0x730 (Inherited: 0x350)
struct AGobiPlayerState : APlayerState {
	struct FMulticastInlineDelegate OnCharacterSelected; // 0x350(0x10)
	struct FMulticastInlineDelegate OnCharacterSelectionFailed; // 0x360(0x10)
	struct FMulticastInlineDelegate OnCardDrawFailed; // 0x370(0x10)
	struct FMulticastInlineDelegate OnPvPEvent; // 0x380(0x10)
	struct FMulticastInlineDelegate OnStartMissionObjective; // 0x390(0x10)
	struct FMulticastInlineDelegate OnEndMissionObjective; // 0x3a0(0x10)
	struct FMulticastInlineDelegate OnCurrentPawnChanged; // 0x3b0(0x10)
	char pad_3C0[0x18]; // 0x3c0(0x18)
	struct FMulticastInlineDelegate OnQueuedZombieRespawnTurnStart; // 0x3d8(0x10)
	struct FMulticastInlineDelegate OnQueuedZombieRespawnTurnEnd; // 0x3e8(0x10)
	struct FMulticastInlineDelegate OnPreRoundStepChanged; // 0x3f8(0x10)
	struct FMulticastInlineDelegate OnOwnedSlotChanged; // 0x408(0x10)
	struct FMulticastInlineDelegate OnControlledSlotChanged; // 0x418(0x10)
	char pad_428[0x10]; // 0x428(0x10)
	struct FMulticastInlineDelegate OnPostRoundBonusSPChanged; // 0x438(0x10)
	char pad_448[0x18]; // 0x448(0x18)
	struct FMulticastInlineDelegate OnCardGiverApplied; // 0x460(0x10)
	char pad_470[0x30]; // 0x470(0x30)
	struct FMulticastInlineDelegate OnBadgeDirty; // 0x4a0(0x10)
	char pad_4B0[0x4]; // 0x4b0(0x04)
	struct TWeakObjectPtr<struct APawn> RecentPawn; // 0x4b4(0x08)
	struct TWeakObjectPtr<struct APawn> CurrentPawn; // 0x4bc(0x08)
	struct TWeakObjectPtr<struct APlayerSlot> OwnedPlayerSlot; // 0x4c4(0x08)
	struct TWeakObjectPtr<struct APlayerSlot> ControlledPlayerSlot; // 0x4cc(0x08)
	char pad_4D4[0x4]; // 0x4d4(0x04)
	struct FDataTableRowHandle BotRowHandle; // 0x4d8(0x20)
	struct FString HydraDisplayName; // 0x4f8(0x10)
	char pad_508[0x10]; // 0x508(0x10)
	struct UPlayerCutsceneSynchronizationComponent* PlayerCutsceneSynchronizationComponent; // 0x518(0x08)
	struct UPlayerLevelStreamingComponent* PlayerLevelStreamingComponent; // 0x520(0x08)
	struct UPlayerLevelResetComponent* PlayerLevelResetComponent; // 0x528(0x08)
	float DistanceTraveledToObjective; // 0x530(0x04)
	float DistanceTraveledToObjectivePct; // 0x534(0x04)
	float PVPHoldoutTime; // 0x538(0x04)
	char pad_53C[0xc]; // 0x53c(0x0c)
	float MutationPointsAtLastSpawn; // 0x548(0x04)
	char pad_54C[0x54]; // 0x54c(0x54)
	struct TArray<struct FZombieRespawnTime> ZombieRespawnTimes; // 0x5a0(0x10)
	float NextZombieMinRespawnTime; // 0x5b0(0x04)
	struct FRespawnSnapshot_Zombie ZombieRespawnSnapshot; // 0x5b4(0x08)
	char pad_5BC[0x4]; // 0x5bc(0x04)
	int32_t PlayerRespawnCount; // 0x5c0(0x04)
	char pad_5C4[0x4]; // 0x5c4(0x04)
	struct TArray<struct FString> UnmutedTalkers; // 0x5c8(0x10)
	struct UMatchmaking* Matchmaking; // 0x5d8(0x08)
	char pad_5E0[0x1]; // 0x5e0(0x01)
	bool bGroupLeader; // 0x5e1(0x01)
	char pad_5E2[0x6]; // 0x5e2(0x06)
	struct FString GroupSessionId; // 0x5e8(0x10)
	struct FString GroupSessionCluster; // 0x5f8(0x10)
	enum class ESessionPrivacy GroupSessionPrivacy; // 0x608(0x01)
	bool bIsPlayingTutorial; // 0x609(0x01)
	char pad_60A[0x6]; // 0x60a(0x06)
	struct FPlayerStateUserIds UserIds; // 0x610(0x38)
	enum class EGobiTeam CurrentTeam; // 0x648(0x01)
	enum class EGobiTeam PrevTeam; // 0x649(0x01)
	char pad_64A[0x2]; // 0x64a(0x02)
	float DeadToSpectatorDelay; // 0x64c(0x04)
	struct APawn* CurrentPawnClass; // 0x650(0x08)
	int32_t BotGameCardsPicked; // 0x658(0x04)
	enum class EPreRoundStep PreRoundStep; // 0x65c(0x01)
	char pad_65D[0x2b]; // 0x65d(0x2b)
	struct FBadgeData BadgeData; // 0x688(0x0c)
	char pad_694[0x4]; // 0x694(0x04)
	struct UPlayerStatsComponent* PlayerStatsComponent; // 0x698(0x08)
	char pad_6A0[0x18]; // 0x6a0(0x18)
	struct TArray<struct FPostRoundStatConfig> PostRoundStatConfigs; // 0x6b8(0x10)
	struct TArray<double> PostRoundStatValues; // 0x6c8(0x10)
	int32_t PostRoundBonusSP; // 0x6d8(0x04)
	char pad_6DC[0x4]; // 0x6dc(0x04)
	double PostRoundLineupStats[0x7]; // 0x6e0(0x38)
	double ScoreboardStats[0x2]; // 0x718(0x10)
	char pad_728[0x8]; // 0x728(0x08)

	void UpdateDistanceTraveledToObjectiveForHeroes(struct UObject* WorldContextObject, float DistancePct); // Function Gobi.GobiPlayerState.UpdateDistanceTraveledToObjectiveForHeroes // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiProjectileMovementComponent
// Size: 0x220 (Inherited: 0x200)
struct UGobiProjectileMovementComponent : UProjectileMovementComponent {
	struct FRotator RotationRate; // 0x200(0x0c)
	struct FVector RotationPositionOffset; // 0x20c(0x0c)
	char bRotationInLocalSpace : 1; // 0x218(0x01)
	char pad_218_1 : 7; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)

	void SetRotationRate(struct FRotator NewRotationRate); // Function Gobi.GobiProjectileMovementComponent.SetRotationRate // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiPropertyModifierSubsystem
// Size: 0xd8 (Inherited: 0x38)
struct UGobiPropertyModifierSubsystem : UWorldSubsystem {
	char pad_38[0xa0]; // 0x38(0xa0)
};

// Class Gobi.RadioButton
// Size: 0x5f8 (Inherited: 0x160)
struct URadioButton : UContentWidget {
	struct FRadioButtonStyle WidgetStyle; // 0x160(0x408)
	bool bIsChecked; // 0x568(0x01)
	bool bIsContentInside; // 0x569(0x01)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x56a(0x01)
	bool IsFocusable; // 0x56b(0x01)
	bool bIsFocusedOnHover; // 0x56c(0x01)
	char pad_56D[0x3]; // 0x56d(0x03)
	struct FName RadioButtonGroup; // 0x570(0x08)
	struct FMulticastInlineDelegate OnCheckStateChanged; // 0x578(0x10)
	struct FMulticastInlineDelegate OnClicked; // 0x588(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x598(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x5a8(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x5b8(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x5c8(0x10)
	enum class EButtonClickMethod ClickMethod; // 0x5d8(0x01)
	char pad_5D9[0x1f]; // 0x5d9(0x1f)

	void SetIsFocusedOnHover(bool bEnabled); // Function Gobi.RadioButton.SetIsFocusedOnHover // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiRadioButton
// Size: 0x5f8 (Inherited: 0x5f8)
struct UGobiRadioButton : URadioButton {
};

// Class Gobi.GobiReticle
// Size: 0x288 (Inherited: 0x250)
struct AGobiReticle : AActor {
	struct USceneComponent* TargetRoot; // 0x250(0x08)
	struct USplineComponent* SplineComponent; // 0x258(0x08)
	struct TArray<struct USplineMeshComponent*> SplineMeshComponents; // 0x260(0x10)
	int32_t MaxSplinePoints; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct UStaticMesh* SplineMesh; // 0x278(0x08)
	float RadiusScale; // 0x280(0x04)
	float RadiusBuffer; // 0x284(0x04)
};

// Class Gobi.GobiSafeZone
// Size: 0x178 (Inherited: 0x160)
struct UGobiSafeZone : UContentWidget {
	bool PadLeft; // 0x160(0x01)
	bool PadRight; // 0x161(0x01)
	bool PadTop; // 0x162(0x01)
	bool PadBottom; // 0x163(0x01)
	char pad_164[0x14]; // 0x164(0x14)

	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom); // Function Gobi.GobiSafeZone.SetSidesToPad // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiSafeZoneSlot
// Size: 0x68 (Inherited: 0x40)
struct UGobiSafeZoneSlot : UPanelSlot {
	struct FMargin SafeAreaScale; // 0x40(0x10)
	enum class EHorizontalAlignment HAlign; // 0x50(0x01)
	enum class EVerticalAlignment VAlign; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	struct FMargin Padding; // 0x54(0x10)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class Gobi.GobiSlider
// Size: 0x5b8 (Inherited: 0x5b0)
struct UGobiSlider : USlider {
	struct UAkAudioEvent* DefaultClickSound; // 0x5b0(0x08)

	void PlayClickAudio(); // Function Gobi.GobiSlider.PlayClickAudio // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiSpatialAudioVolumePreset
// Size: 0xa0 (Inherited: 0x38)
struct UGobiSpatialAudioVolumePreset : UDataAsset {
	float Priority; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString AuxBusName; // 0x40(0x10)
	struct FString ExteriorDelayAux; // 0x50(0x10)
	struct UAkAudioEvent* AmbienceLoopStart; // 0x60(0x08)
	struct UAkAudioEvent* AmbienceLoopStop; // 0x68(0x08)
	float WallOcclusion; // 0x70(0x04)
	enum class EWeaponDecayEnum WeaponDecay; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct FAkRTPCTransition ThreatSoundOcclusion; // 0x78(0x18)
	float SendLevel; // 0x90(0x04)
	float FadeRate; // 0x94(0x04)
	bool bEnableRoom; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// Class Gobi.GobiSpatialAudioVolume
// Size: 0x348 (Inherited: 0x2c8)
struct AGobiSpatialAudioVolume : AAcousticVolume {
	struct UAkLateReverbComponent* LateReverbComp; // 0x2c8(0x08)
	struct UAkRoomComponent* RoomComp; // 0x2d0(0x08)
	char pad_2D8[0x8]; // 0x2d8(0x08)
	float Priority; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct FString AuxBusName; // 0x2e8(0x10)
	struct FString ExteriorDelayAux; // 0x2f8(0x10)
	struct UAkAudioEvent* AmbienceLoopStart; // 0x308(0x08)
	struct UAkAudioEvent* AmbienceLoopStop; // 0x310(0x08)
	float WallOcclusion; // 0x318(0x04)
	enum class EWeaponDecayEnum WeaponDecay; // 0x31c(0x01)
	char pad_31D[0x3]; // 0x31d(0x03)
	struct FAkRTPCTransition ThreatSoundOcclusion; // 0x320(0x18)
	float SendLevel; // 0x338(0x04)
	float FadeRate; // 0x33c(0x04)
	bool bEnableRoom; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)

	bool IsRoomEnabled(); // Function Gobi.GobiSpatialAudioVolume.IsRoomEnabled // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiSpectatorMovementComponent
// Size: 0x1c8 (Inherited: 0x180)
struct UGobiSpectatorMovementComponent : USpectatorPawnMovement {
	struct USpringArmComponent* SpringArmComponent; // 0x180(0x08)
	char pad_188[0x20]; // 0x188(0x20)
	float GamepadLookHorzRate; // 0x1a8(0x04)
	float GamepadLookVertRate; // 0x1ac(0x04)
	float MouseLookHorzScale; // 0x1b0(0x04)
	float MouseLookVertScale; // 0x1b4(0x04)
	bool bAllowFirstPerson; // 0x1b8(0x01)
	char pad_1B9[0x3]; // 0x1b9(0x03)
	float AutoFollowPitchOffset; // 0x1bc(0x04)
	float AutoFollowDelaySeconds; // 0x1c0(0x04)
	float AutoFollowFadeoutSeconds; // 0x1c4(0x04)

	int32_t GetNumCameraModes(); // Function Gobi.GobiSpectatorMovementComponent.GetNumCameraModes // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiSpectatorPawn
// Size: 0x308 (Inherited: 0x2d0)
struct AGobiSpectatorPawn : ASpectatorPawn {
	struct FMulticastInlineDelegate OnSpectateTargetChanged; // 0x2d0(0x10)
	struct AActor* TargetActor; // 0x2e0(0x08)
	struct AActor* LocalHeroActor; // 0x2e8(0x08)
	struct TArray<struct AActor*> PotentialTargets; // 0x2f0(0x10)
	char pad_300[0x8]; // 0x300(0x08)

	void OnSpectateTargetChanged__DelegateSignature(struct AActor* TargetActor); // DelegateFunction Gobi.GobiSpectatorPawn.OnSpectateTargetChanged__DelegateSignature // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiSplineMeshActor
// Size: 0x380 (Inherited: 0x250)
struct AGobiSplineMeshActor : AActor {
	struct USplineComponent* EditableSpline; // 0x250(0x08)
	struct TArray<struct USplineMeshComponent*> GeneratedSubObjects; // 0x258(0x10)
	struct TArray<struct UTextRenderComponent*> PointNumbers; // 0x268(0x10)
	bool bFinalized; // 0x278(0x01)
	bool bUseCollisionProfile; // 0x279(0x01)
	char pad_27A[0x2]; // 0x27a(0x02)
	struct FName CollisionProfile; // 0x27c(0x08)
	enum class ECollisionChannel CollisionChannelToUse; // 0x284(0x01)
	enum class ECollisionEnabled CollisionEnabled; // 0x285(0x01)
	enum class ESplineMeshMode SplineMeshMode; // 0x286(0x01)
	enum class ESplineMeshAxis ForwardAxis; // 0x287(0x01)
	float Padding; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct UStaticMesh* Mesh; // 0x290(0x08)
	bool bCastShadows; // 0x298(0x01)
	int8_t ForceLOD; // 0x299(0x01)
	bool bLockCurrentMeshArray; // 0x29a(0x01)
	bool bContiguous; // 0x29b(0x01)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct TArray<struct FSplineMeshElement> AvailableMeshes; // 0x2a0(0x10)
	bool bSequential; // 0x2b0(0x01)
	bool bPreventAdjancency; // 0x2b1(0x01)
	char pad_2B2[0x2]; // 0x2b2(0x02)
	struct FVector GlobalScale; // 0x2b4(0x0c)
	struct FVector CachedGlobalScale; // 0x2c0(0x0c)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct TArray<struct FPerInstanceData> PerInstanceData; // 0x2d0(0x10)
	struct TArray<struct FVector> PerInstanceRotation; // 0x2e0(0x10)
	bool bUseCapMeshes; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct FCapData CapMeshes; // 0x2f8(0x20)
	bool bDrawOnlySpline; // 0x318(0x01)
	bool bShowDebugMaterials; // 0x319(0x01)
	char pad_31A[0x6]; // 0x31a(0x06)
	struct TArray<struct UMaterialInterface*> DebugMaterials; // 0x320(0x10)
	bool bDrawDebugNumbers; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	struct FDebugNumbersPrefs DebugNumbersPrefs; // 0x334(0x0c)
	struct TArray<struct FSplineMeshElement> MeshesToUse; // 0x340(0x10)
	struct TArray<float> Distances; // 0x350(0x10)
	struct TArray<struct UMaterialInterface*> DebugMaterialsToUse; // 0x360(0x10)
	struct TArray<struct FSplineMeshElement> MeshesCache; // 0x370(0x10)
};

// Class Gobi.GobiSwitchActor
// Size: 0x2b8 (Inherited: 0x250)
struct AGobiSwitchActor : AActor {
	struct FMulticastInlineDelegate SwitchedOn; // 0x250(0x10)
	struct USceneComponent* SceneRoot; // 0x260(0x08)
	struct UBoxComponent* UsableVolume; // 0x268(0x08)
	struct UStaticMeshComponent* UsableMesh; // 0x270(0x08)
	struct UWaypointSpawnerComponent* WaypointSpawner; // 0x278(0x08)
	struct UUsableComponent* Usable; // 0x280(0x08)
	struct UAkComponent* AKComp; // 0x288(0x08)
	struct UMaterialInterface* MeshMaterial; // 0x290(0x08)
	struct UMaterialInterface* HologramMeshMaterial; // 0x298(0x08)
	struct UAkAudioEvent* ActivationSound; // 0x2a0(0x08)
	struct UAkAudioEvent* ActivationLoop; // 0x2a8(0x08)
	struct UAkAudioEvent* ActivationLoopStop; // 0x2b0(0x08)

	void Used(struct AActor* UsingActor); // Function Gobi.GobiSwitchActor.Used // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiTeleportMarker
// Size: 0x258 (Inherited: 0x250)
struct AGobiTeleportMarker : AActor {
	struct USceneComponent* InternalRootComponent; // 0x250(0x08)
};

// Class Gobi.GobiTextBlock
// Size: 0x320 (Inherited: 0x320)
struct UGobiTextBlock : UTextBlock {
};

// Class Gobi.GobiTextParser
// Size: 0x30 (Inherited: 0x30)
struct UGobiTextParser : UBlueprintFunctionLibrary {

	struct FText ParsePerkDescription(struct FDataTableRowHandle PerkRowHandle, int32_t Count); // Function Gobi.GobiTextParser.ParsePerkDescription // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiViewportClient
// Size: 0x398 (Inherited: 0x340)
struct UGobiViewportClient : UGameViewportClient {
	char pad_340[0x48]; // 0x340(0x48)
	struct AFOVManager* FOVManager; // 0x388(0x08)
	char pad_390[0x8]; // 0x390(0x08)
};

// Class Gobi.GobiWBP1
// Size: 0xb0 (Inherited: 0x30)
struct UGobiWBP1 : UObject {
	char pad_30[0x80]; // 0x30(0x80)
};

// Class Gobi.GobiWebServices
// Size: 0xb8 (Inherited: 0x30)
struct UGobiWebServices : UObject {
	struct UWebServiceMatchmakingAPI* WebServiceMatchmakingAPI; // 0x30(0x08)
	struct UWebServiceSessionAPI* WebServiceSessionAPI; // 0x38(0x08)
	struct UWebServiceAgoraHydraLeaderboards* AgoraLeaderboardsClient; // 0x40(0x08)
	struct UWebServiceAgoraHydraCommerce* AgoraCommerceClient; // 0x48(0x08)
	struct UWebServiceAgoraHydraAuthAPI* WebServiceAgoraHydraAuthAPI; // 0x50(0x08)
	struct UWebServiceAgoraHydraSSC* AgoraSSCClient; // 0x58(0x08)
	char pad_60[0x58]; // 0x60(0x58)
};

// Class Gobi.GobiWorldSettings
// Size: 0x440 (Inherited: 0x3d8)
struct AGobiWorldSettings : AWorldSettings {
	bool bOnlineInventoryEnabled; // 0x3d8(0x01)
	bool bSignInInputProcessing; // 0x3d9(0x01)
	bool bMainMenu; // 0x3da(0x01)
	bool bSharedScreen; // 0x3db(0x01)
	bool bSupportsBots; // 0x3dc(0x01)
	bool bNeedsCommonZombieMeshMerge; // 0x3dd(0x01)
	char pad_3DE[0x2]; // 0x3de(0x02)
	struct FDataTableRowHandle Chapter; // 0x3e0(0x20)
	struct TArray<struct FAutoStartMapMission> AutoStartMapMissions; // 0x400(0x10)
	struct TSoftObjectPtr<UWorld> CharacterLineupLevel; // 0x410(0x28)
	bool bSectorsAndPortalsEnabled; // 0x438(0x01)
	char pad_439[0x3]; // 0x439(0x03)
	int32_t FoliageSectorsAndPortalsMode; // 0x43c(0x04)
};

// Class Gobi.GPEvalSet_FilterNavLink
// Size: 0x1c8 (Inherited: 0x78)
struct UGPEvalSet_FilterNavLink : UGameplayEvaluatorSet {
	struct TArray<struct UNavArea*> AllowedNavAreas; // 0x78(0x10)
	struct FGameplayEval_Distance MaxStartRangeEval; // 0x88(0xd0)
	struct FGameplayEval_NavArea AllowedNavAreaEval; // 0x158(0x70)
};

// Class Gobi.GraphicsOptionsPanelUserWidget
// Size: 0x608 (Inherited: 0x460)
struct UGraphicsOptionsPanelUserWidget : UOptionsPanelUserWidget {
	char pad_460[0x1a8]; // 0x460(0x1a8)

	void OnWindowModeChanged(struct UGobiUserWidget* Widget); // Function Gobi.GraphicsOptionsPanelUserWidget.OnWindowModeChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GrappleComponent
// Size: 0x288 (Inherited: 0xd8)
struct UGrappleComponent : UActorComponent {
	struct FMulticastInlineDelegate OnGrappleStateChanged; // 0xd8(0x10)
	char pad_E8[0xd]; // 0xe8(0x0d)
	bool bCanBreakout; // 0xf5(0x01)
	bool bBreakingOut; // 0xf6(0x01)
	char pad_F7[0x51]; // 0xf7(0x51)
	struct TArray<struct FActiveGrappler> ActiveGrapplers; // 0x148(0x10)
	enum class EGrappleState State; // 0x158(0x01)
	bool bAutoBreakout; // 0x159(0x01)
	char pad_15A[0x2]; // 0x15a(0x02)
	float DelayBeforeBreakoutSecs; // 0x15c(0x04)
	struct FGamePropertyFloat BreakoutInputRequiredHoldTime; // 0x160(0x38)
	struct FGamePropertyInt BreakoutCountPerLevel; // 0x198(0x38)
	struct FGamePropertyFloat BreakoutCooldownSecs; // 0x1d0(0x38)
	struct TArray<struct UGameplayEffect*> BreakoutTargetGameplayEffects; // 0x208(0x10)
	char pad_218[0x18]; // 0x218(0x18)
	struct TArray<struct UGameplayEffect*> BreakoutSelfGameplayEffects; // 0x230(0x10)
	struct UAnimMontage* BreakoutFPAnimMontage; // 0x240(0x08)
	struct UAnimMontage* Breakout3PAnimMontage; // 0x248(0x08)
	struct UAnimMontage* BreakingOutAdditiveMontage; // 0x250(0x08)
	struct FGameplayTagContainer BreakoutEnabledTags; // 0x258(0x20)
	struct UAkAudioEvent* AKEBreakout; // 0x278(0x08)
	struct UDamageFilter* GrappledDamageFilter; // 0x280(0x08)

	void Server_SetBreakingOutStatus(bool bBreakingOutStatus); // Function Gobi.GrappleComponent.Server_SetBreakingOutStatus // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GravelFiller
// Size: 0x488 (Inherited: 0x250)
struct AGravelFiller : AActor {
	struct USceneComponent* InternalRootComponent; // 0x250(0x08)
	struct UStaticMeshComponent* SwitchStaticMeshComponent; // 0x258(0x08)
	struct UStaticMeshComponent* GravelMoundMeshComponent; // 0x260(0x08)
	struct UParticleSystemComponent* GravelPourParticleSystemComponent; // 0x268(0x08)
	struct UUsableComponent* UsableComponent; // 0x270(0x08)
	struct UBoxComponent* UsableTriggerComponent; // 0x278(0x08)
	struct UBoxComponent* StartGravelLessonTriggerBox; // 0x280(0x08)
	struct UBoxComponent* EndGravelLessonTriggerBox; // 0x288(0x08)
	struct USceneComponent* AudioMachinerySceneComponent; // 0x290(0x08)
	struct UUsableHighlightComponent* UsableHighlightComp; // 0x298(0x08)
	struct AActor* GravelNavBuilder; // 0x2a0(0x08)
	struct FDataTableRowHandle GravelFillerStartRowHandle; // 0x2a8(0x20)
	struct FDataTableRowHandle GravelFillerStopRowHandle; // 0x2c8(0x20)
	struct FName GravelMusicScenario; // 0x2e8(0x08)
	struct UAkAudioEvent* ButtonActivateAudioEvent; // 0x2f0(0x08)
	struct UAkAudioEvent* ConveyorStartLoopAudioEvent; // 0x2f8(0x08)
	struct UAkAudioEvent* ConveyorStopLoopAudioEvent; // 0x300(0x08)
	struct UAkAudioEvent* FactoryStartLoopAudioEvent; // 0x308(0x08)
	struct UAkAudioEvent* FactoryStopLoopAudioEvent; // 0x310(0x08)
	struct UAkAudioEvent* SwitchStartLoopAudioEvent; // 0x318(0x08)
	struct UAkAudioEvent* SwitchStopLoopAudioEvent; // 0x320(0x08)
	struct UAkAudioEvent* GravelMoundTrickleStartLoopAudioEvent; // 0x328(0x08)
	struct UAkAudioEvent* GravelMoundTrickleStopLoopAudioEvent; // 0x330(0x08)
	struct UAkAudioEvent* ChuteHornAudioEvent; // 0x338(0x08)
	struct FMulticastInlineDelegate OnGravelPileStateChange; // 0x340(0x10)
	float DelayAfterSwitchUse; // 0x350(0x04)
	float GravelTotalFillTime; // 0x354(0x04)
	float GravelTotalHeightGrowth; // 0x358(0x04)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct UCurveFloat* GravelHeightGrowthFloatCurve; // 0x360(0x08)
	struct FQueuedConversation ReachGravelConversation; // 0x368(0x68)
	struct UObject* FirstGameCoachLessonsClass; // 0x3d0(0x08)
	float FirstGameCoachLessonDelay; // 0x3d8(0x04)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct UObject* SecondGameCoachLessonsClass; // 0x3e0(0x08)
	float SecondGameCoachLessonDelay; // 0x3e8(0x04)
	char pad_3EC[0x4]; // 0x3ec(0x04)
	struct FGameplayTagContainer HighlightGameplayTagContainer; // 0x3f0(0x20)
	float HintOneTimer; // 0x410(0x04)
	float HintTwoTimer; // 0x414(0x04)
	float PercentInEventForStatusDialogue; // 0x418(0x04)
	float MinHealthPctForWinning; // 0x41c(0x04)
	int32_t MinHeroesNeededForWinning; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)
	struct UGameCoachLessonsComponent* FirstLesson; // 0x428(0x08)
	struct UGameCoachLessonsComponent* SecondLesson; // 0x430(0x08)
	struct UAkComponent* ConveyorAkComponent; // 0x438(0x08)
	struct UAkComponent* FactoryAkComponent; // 0x440(0x08)
	struct UAkComponent* SwitchAkComponent; // 0x448(0x08)
	struct UAkComponent* GravelMoundAkComponent; // 0x450(0x08)
	float MoundHeight; // 0x458(0x04)
	bool bPlayersEnteredArea; // 0x45c(0x01)
	bool bPlayersOverMound; // 0x45d(0x01)
	char pad_45E[0x2a]; // 0x45e(0x2a)

	void PlayerOverMound(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Gobi.GravelFiller.PlayerOverMound // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HagAnimInstance
// Size: 0x800 (Inherited: 0x7f0)
struct UHagAnimInstance : UZombieAnimInstance {
	struct FHagAnimState HagAnimState; // 0x7e8(0x02)
	char pad_7F2[0xe]; // 0x7f2(0x0e)
};

// Class Gobi.HagBerserkGameCoachLesson
// Size: 0x490 (Inherited: 0x488)
struct UHagBerserkGameCoachLesson : UGobiGameCoachLesson {
	char pad_488[0x8]; // 0x488(0x08)
};

// Class Gobi.HagComponent
// Size: 0x310 (Inherited: 0xd8)
struct UHagComponent : UActorComponent {
	char pad_D8[0x18]; // 0xd8(0x18)
	struct FGameplayTag HagStateTags[0x5]; // 0xf0(0x28)
	float TimeToInvestigate; // 0x118(0x04)
	float AlertBerserkDistance; // 0x11c(0x04)
	char pad_120[0x8]; // 0x120(0x08)
	struct FGameplayTagQuery FleeTags; // 0x128(0x48)
	struct UBlackboardData* BlackboardAsset; // 0x170(0x08)
	struct FBlackboardKeySelector EnemyBBKey; // 0x178(0x28)
	struct FBlackboardKeySelector MadAnimPlayedBBKey; // 0x1a0(0x28)
	char pad_1C8[0xf0]; // 0x1c8(0xf0)
	struct AGobiCharacter* HagOwner; // 0x2b8(0x08)
	struct AHeroCharacter* BerserkTarget; // 0x2c0(0x08)
	enum class EHagState CurrentHagState; // 0x2c8(0x01)
	enum class EHagState PreviousHagState; // 0x2c9(0x01)
	char pad_2CA[0x46]; // 0x2ca(0x46)

	void OnRep_CurrentHagState(enum class EHagState OldState); // Function Gobi.HagComponent.OnRep_CurrentHagState // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HalfSpaceComponent
// Size: 0x4c0 (Inherited: 0x4a0)
struct UHalfSpaceComponent : UPrimitiveComponent {
	struct TArray<struct FRotator> HalfSpaces; // 0x4a0(0x10)
	char pad_4B0[0x10]; // 0x4b0(0x10)
};

// Class Gobi.HealingAnalyticsComponent
// Size: 0x138 (Inherited: 0xd8)
struct UHealingAnalyticsComponent : UActorComponent {
	char pad_D8[0x60]; // 0xd8(0x60)

	void FlushTrackedStats(); // Function Gobi.HealingAnalyticsComponent.FlushTrackedStats // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HealOtherGameCoachLesson
// Size: 0x510 (Inherited: 0x488)
struct UHealOtherGameCoachLesson : UGobiGameCoachLesson {
	struct FGameplayTagQuery SelectedItemTags; // 0x488(0x48)
	struct FText OutOfRangeText; // 0x4d0(0x18)
	struct FText InRangeText; // 0x4e8(0x18)
	char pad_500[0x10]; // 0x500(0x10)

	void OnSelectedItemChanged(struct AItem* OldItem, struct AItem* NewItem); // Function Gobi.HealOtherGameCoachLesson.OnSelectedItemChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HealthBarComponent
// Size: 0x120 (Inherited: 0xd8)
struct UHealthBarComponent : UActorComponent {
	char pad_D8[0x10]; // 0xd8(0x10)
	bool bEnabled; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct FText DisplayName; // 0xf0(0x18)
	bool bEnableHealthbarOnlyForTaggedLocalPlayer; // 0x108(0x01)
	bool bDisplayHealthbarWhenTeammatesDoDamage; // 0x109(0x01)
	char pad_10A[0x2]; // 0x10a(0x02)
	float ClearOwnerTime; // 0x10c(0x04)
	char pad_110[0x10]; // 0x110(0x10)

	void OnUnpossessed(struct AGobiCharacter* GobiCharacter); // Function Gobi.HealthBarComponent.OnUnpossessed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HealthBarUserWidget
// Size: 0x4a0 (Inherited: 0x450)
struct UHealthBarUserWidget : UGobiUserWidget {
	float MaxHealth; // 0x450(0x04)
	float CurrentMaxHealth; // 0x454(0x04)
	float Health; // 0x458(0x04)
	float HealingHealth; // 0x45c(0x04)
	float TempHealth; // 0x460(0x04)
	char pad_464[0x4]; // 0x464(0x04)
	struct UHealthPipUserWidget* PipClass; // 0x468(0x08)
	char pad_470[0x30]; // 0x470(0x30)

	void ShowLowHealthPulse_K2(bool bShow); // Function Gobi.HealthBarUserWidget.ShowLowHealthPulse_K2 // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HealthBlueprintFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UHealthBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	bool ReplicatedDamageInfoHasDamageFlags(int32_t DamageFlagsMask, struct FReplicatedDamageInfo DamageInfo); // Function Gobi.HealthBlueprintFunctionLibrary.ReplicatedDamageInfoHasDamageFlags // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HealthComponent
// Size: 0x718 (Inherited: 0xd8)
struct UHealthComponent : UActorComponent {
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FMulticastInlineDelegate OnDamage; // 0xe0(0x10)
	char pad_F0[0x60]; // 0xf0(0x60)
	struct FMulticastInlineDelegate OnDeath; // 0x150(0x10)
	struct FMulticastInlineDelegate OnHeal; // 0x160(0x10)
	char pad_170[0x18]; // 0x170(0x18)
	struct FMulticastInlineDelegate OnHealthChanged; // 0x188(0x10)
	struct FMulticastInlineDelegate OnTemporaryHealthChanged; // 0x198(0x10)
	struct FMulticastInlineDelegate OnRecentDamageInfoChanged; // 0x1a8(0x10)
	char pad_1B8[0xc8]; // 0x1b8(0xc8)
	struct FGamePropertyFloat CriticalHealMultiplier; // 0x280(0x38)
	struct FGamePropertyFloat PermanentDamageScale; // 0x2b8(0x38)
	struct FGamePropertyFloat HealthRegenPerSecond; // 0x2f0(0x38)
	struct FGamePropertyFloat HealthDepletedMaxHealthPenalty; // 0x328(0x38)
	float InitialHealthPercent; // 0x360(0x04)
	char pad_364[0x4]; // 0x364(0x04)
	struct FGamePropertyFloat InitialMaxHealth; // 0x368(0x38)
	float MaxHealthLowerLimit; // 0x3a0(0x04)
	char pad_3A4[0x4]; // 0x3a4(0x04)
	struct FHealthTuning HealthTuning; // 0x3a8(0x148)
	float CurrentMaxHealth; // 0x4f0(0x04)
	char pad_4F4[0x4]; // 0x4f4(0x04)
	struct UDamageFilter* DamageFilterClass; // 0x4f8(0x08)
	char pad_500[0x10]; // 0x500(0x10)
	int32_t MaxRecentDamageInfo; // 0x510(0x04)
	char pad_514[0x4]; // 0x514(0x04)
	struct FTemporaryHealthParams DefaultTempHealthParams; // 0x518(0x18)
	struct TArray<struct FReplicatedDamageInfo> RecentDamageInfo; // 0x530(0x10)
	char pad_540[0x8]; // 0x540(0x08)
	struct UArmorComponent* ArmorComponent; // 0x548(0x08)
	struct UWeakSpotsComponent* WeakSpotsComponent; // 0x550(0x08)
	float Health; // 0x558(0x04)
	float TemporaryHealth; // 0x55c(0x04)
	char pad_560[0x8]; // 0x560(0x08)
	struct FTemporaryHealthParams TemporaryHealthParams; // 0x568(0x18)
	int32_t HealEventCounter; // 0x580(0x04)
	char pad_584[0xd4]; // 0x584(0xd4)
	struct FGameplayTagQuery PermanentDamageBlockingTagQuery; // 0x658(0x48)
	struct FGameplayTagQuery WeakSpotOnlyDamageTagQuery; // 0x6a0(0x48)
	struct FGameplayTagContainer TemporaryHealthGrantedTags; // 0x6e8(0x20)
	struct FName PersistentHealthName; // 0x708(0x08)
	bool bAllowDamageNumbers; // 0x710(0x01)
	char pad_711[0x7]; // 0x711(0x07)

	void SetHealth(float Health); // Function Gobi.HealthComponent.SetHealth // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HealthHitMarkerComponent
// Size: 0x180 (Inherited: 0xd8)
struct UHealthHitMarkerComponent : UActorComponent {
	struct FGameplayTagQuery DamageTagQuery; // 0xd8(0x48)
	struct FGameplayTagQuery DamageSourceTagQuery; // 0x120(0x48)
	float MaxRecentDamageInfoAge; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct UHealthComponent* HealthComponent; // 0x170(0x08)
	struct AGobiGameStateBase* GobiGameState; // 0x178(0x08)

	void OnHealthChanged(float NewHealth, float DeltaHealth); // Function Gobi.HealthHitMarkerComponent.OnHealthChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HealthMaterialModifier
// Size: 0x118 (Inherited: 0xd8)
struct UHealthMaterialModifier : UActorComponent {
	struct FGameplayTag MeshTag; // 0xd8(0x08)
	struct FMeshMaterialParamValueMapper Modifier; // 0xe0(0x28)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x108(0x08)
	struct UHealthComponent* HealthComponent; // 0x110(0x08)

	void OnHealthChanged(float NewHealth, float DeltaHealth); // Function Gobi.HealthMaterialModifier.OnHealthChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HealthPipUserWidget
// Size: 0x470 (Inherited: 0x450)
struct UHealthPipUserWidget : UGobiUserWidget {
	float Health; // 0x450(0x04)
	float HealingHealth; // 0x454(0x04)
	float TempHealth; // 0x458(0x04)
	float MaxHealth; // 0x45c(0x04)
	float CurWidth; // 0x460(0x04)
	char pad_464[0x4]; // 0x464(0x04)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x468(0x08)

	void UpdateWidth(); // Function Gobi.HealthPipUserWidget.UpdateWidth // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.GobiDamageType
// Size: 0x60 (Inherited: 0x30)
struct UGobiDamageType : UObject {
	struct FGameplayTagContainer DamageTagContainer; // 0x30(0x20)
	struct TArray<struct UGameplayEffect*> GameplayEffects; // 0x50(0x10)
};

// Class Gobi.HealthDamageRanges
// Size: 0x58 (Inherited: 0x38)
struct UHealthDamageRanges : UDataAsset {
	struct TArray<struct FHealthDamageRange> Ranges; // 0x38(0x10)
	struct TArray<struct FOverrideHealthDamageRanges> GobiCharTagOverrides; // 0x48(0x10)
};

// Class Gobi.Helicopter
// Size: 0x2c0 (Inherited: 0x250)
struct AHelicopter : AActor {
	struct FMulticastInlineDelegate OnCharacterEnteredHelicopter; // 0x250(0x10)
	struct FMulticastInlineDelegate OnAllCharactersEnteredHelicopter; // 0x260(0x10)
	struct UBoxComponent* TriggerVolume; // 0x270(0x08)
	struct USceneComponent* DefaultRootComponent; // 0x278(0x08)
	struct TArray<struct UGameplayEffect*> ApplyEffectsToCharacter; // 0x280(0x10)
	struct FName GiveCharactersPrimaryWeapon; // 0x290(0x08)
	char pad_298[0x1c]; // 0x298(0x1c)
	float CharacterAttachPointDistThreshold; // 0x2b4(0x04)
	float CharacterAttachPointUpdateRate; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)

	void OnPlayerExited(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComponent, int32_t OtherBodyIndex); // Function Gobi.Helicopter.OnPlayerExited // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HeroAnimInstance3P
// Size: 0xba0 (Inherited: 0x7b0)
struct UHeroAnimInstance3P : UAnimInstance3P {
	char pad_7B0[0x20]; // 0x7b0(0x20)
	struct FHeroAnimData3P HeroAnimData; // 0x7d0(0x248)
	struct FHeroAnimState3P HeroAnimState; // 0xa18(0x28)
	struct FHeroDraggedAnimData3P HeroDraggedAnimData; // 0xa40(0x14)
	char pad_A54[0x4]; // 0xa54(0x04)
	struct UPoseAsset* FacePoseAsset; // 0xa58(0x08)
	struct FGobiAnimationCurveData FemaleScaleCurve; // 0xa60(0x10)
	float FemaleCharacterScale; // 0xa70(0x04)
	struct FOffHandIK ThirdPersonLeftHandIK; // 0xa74(0x34)
	struct FOffHandIK ThirdPersonRightHandIK; // 0xaa8(0x34)
	char pad_ADC[0x4]; // 0xadc(0x04)
	struct UHeroLocoStances* LocoStances; // 0xae0(0x08)
	struct FCachedGameplayTagQuery ForceUnarmedQuery; // 0xae8(0xb0)
	char pad_B98[0x8]; // 0xb98(0x08)

	void OnSelectedItemChanged(struct AItem* OldItem, struct AItem* NewItem); // Function Gobi.HeroAnimInstance3P.OnSelectedItemChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HeroAnimInstanceFP
// Size: 0x620 (Inherited: 0x3c0)
struct UHeroAnimInstanceFP : UAnimInstanceFP {
	struct FFirstPersonAdditiveState FirstPersonAdditiveState; // 0x3b8(0x70)
	struct FFirstPersonAdditiveConfig FirstPersonAdditiveConfig; // 0x428(0x2c)
	float CameraMotionStrength; // 0x454(0x04)
	struct FVector MeshOffset; // 0x458(0x0c)
	struct FVector CameraOffset; // 0x464(0x0c)
	struct FHeroAnimDataFP HeroAnimData; // 0x470(0x68)
	struct FHeroAnimStateFP HeroAnimState; // 0x4d8(0x2c)
	struct FLadderAnimStateFP LadderAnimState; // 0x504(0x10)
	struct FVector VerticalSplitscreenFPMeshOffset; // 0x514(0x0c)
	struct FVector HorizontalSplitscreenFPMeshOffset; // 0x520(0x0c)
	struct FWeaponAnimData WeaponAnimData; // 0x530(0x20)
	struct FWeaponAnimState WeaponAnimState; // 0x550(0x44)
	struct FWeaponAnimsFP WeaponAnims; // 0x598(0x40)
	char pad_5D8[0x40]; // 0x5d8(0x40)
	float TurnInPlaceBlendTime; // 0x618(0x04)
	char pad_61C[0x4]; // 0x61c(0x04)

	void OnSelectedItemStatsUpdated(); // Function Gobi.HeroAnimInstanceFP.OnSelectedItemStatsUpdated // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HeroAudioComponent
// Size: 0x700 (Inherited: 0x2d8)
struct UHeroAudioComponent : UCharacterAudioComponent {
	int32_t TempTestFootsteps; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct UAkAudioEvent* WetStep; // 0x2e0(0x08)
	float WetStepMinDuration; // 0x2e8(0x04)
	float WetStepMaxDuration; // 0x2ec(0x04)
	float LowHealthPercentage; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct FDataTableRowHandle IncappedRowHandle; // 0x2f8(0x20)
	struct FDataTableRowHandle RevivedRowHandle; // 0x318(0x20)
	struct FDataTableRowHandle FullHealthReachedRowHandle; // 0x338(0x20)
	struct FDataTableRowHandle LowHealthReachedRowHandle; // 0x358(0x20)
	struct TArray<struct USoundCollectionAsset*> PossibleSoundCollections; // 0x378(0x10)
	char pad_388[0x8]; // 0x388(0x08)
	struct TArray<struct FAudioDamageTypeEvent> AudioDamageTypeEvents; // 0x390(0x10)
	struct FGameplayTag DefaultDamageType; // 0x3a0(0x08)
	struct TWeakObjectPtr<struct AAudioController> AudioController; // 0x3a8(0x08)
	struct UAkAudioEvent* LadderGrabHardAudioEvent; // 0x3b0(0x08)
	struct UAkAudioEvent* LadderGrabSoftAudioEvent; // 0x3b8(0x08)
	struct UAkAudioEvent* LadderDismountAudioEvent; // 0x3c0(0x08)
	float SpeedRTPCRequiredForLadderGrabHard; // 0x3c8(0x04)
	float LadderMvmtThresholdScalar; // 0x3cc(0x04)
	struct UCurveFloat* FootstepThresholdCurve; // 0x3d0(0x08)
	float MaxSpeedForFootsteps; // 0x3d8(0x04)
	float FoleyDuckingScalar; // 0x3dc(0x04)
	float FoleyDuckReleaseTimeScale; // 0x3e0(0x04)
	float PlayerMaxSpeedSquared; // 0x3e4(0x04)
	float PivotThresholdSquared; // 0x3e8(0x04)
	float PivotScuffAudioCooldown; // 0x3ec(0x04)
	struct FVector2D ItemMvmtFoleyMinMaxDelay; // 0x3f0(0x08)
	struct TMap<struct AItem*, struct UAkAudioEvent*> ItemMovementFoleyMap; // 0x3f8(0x50)
	struct TMap<struct FName, float> MovementFoleyDelayMap; // 0x448(0x50)
	struct TMap<struct FName, float> ItemMovementFoleyDelayMap; // 0x498(0x50)
	struct UDataTable* WeaponAnimDataTable; // 0x4e8(0x08)
	bool bIsMovementDisabled; // 0x4f0(0x01)
	bool bIsSprinting; // 0x4f1(0x01)
	bool bIsCrouching; // 0x4f2(0x01)
	bool bIsADSing; // 0x4f3(0x01)
	char pad_4F4[0x6c]; // 0x4f4(0x6c)
	struct UAkAudioEvent* ReviveFromIncapLocalAudioEvent; // 0x560(0x08)
	struct UAkAudioEvent* ReviveFromIncapWorldAudioEvent; // 0x568(0x08)
	struct UAkAudioEvent* UtilityStopAllAudioEvent; // 0x570(0x08)
	struct UAkAudioEvent* PlayerDeathAudioEvent; // 0x578(0x08)
	struct UAkAudioEvent* PlayerDeath2DAudioEvent; // 0x580(0x08)
	char pad_588[0x20]; // 0x588(0x20)
	struct UAkAudioEvent* OverhealAudioEvent; // 0x5a8(0x08)
	struct UAkAudioEvent* BodyfallSwtAudioEvent; // 0x5b0(0x08)
	struct UAkAudioEvent* HeartbeatLoopAudioEvent; // 0x5b8(0x08)
	struct UAkAudioEvent* HeartbeatLoopStopAudioEvent; // 0x5c0(0x08)
	float HeartbeatUpdateRate; // 0x5c8(0x04)
	float HeartbeatCooldown; // 0x5cc(0x04)
	float HeartbeatHealthRatioMultiplier; // 0x5d0(0x04)
	float HeartbeatRTPCDivider; // 0x5d4(0x04)
	float LowHealthTime; // 0x5d8(0x04)
	char pad_5DC[0x24]; // 0x5dc(0x24)
	struct UAkAudioEvent* HitMarkerAudioEvent; // 0x600(0x08)
	struct UAkAudioEvent* HitMarkerFriendlyAudioEvent; // 0x608(0x08)
	struct FGameplayTagContainer HitMarkerDamageTypeTagContainer; // 0x610(0x20)
	struct UAkAudioEvent* HitMarkerArmorAudioEvent; // 0x630(0x08)
	struct UAkAudioEvent* HitMarkerMeleeArmorAudioEvent; // 0x638(0x08)
	struct UAkAudioEvent* HitMarkerArmorDestroyedAudioEvent; // 0x640(0x08)
	struct FGameplayTagContainer KevlarArmoredTagContainer; // 0x648(0x20)
	struct UAkAudioEvent* HitMarkerKevlarAudioEvent; // 0x668(0x08)
	struct UAkAudioEvent* HeadPopMinorAudioEvent; // 0x670(0x08)
	struct UAkAudioEvent* HeadshotAudioEvent; // 0x678(0x08)
	struct UAkAudioEvent* NonCharacterWeakspot; // 0x680(0x08)
	struct UAkAudioEvent* PVPRiddenDeathAudioEvent; // 0x688(0x08)
	struct UAkAudioEvent* FlashlightOnAudioEvent; // 0x690(0x08)
	struct UAkAudioEvent* FlashlightOffAudioEvent; // 0x698(0x08)
	struct UAkAudioEvent* CurrencyEarnedAudioEvent; // 0x6a0(0x08)
	struct TMap<struct FString, struct UAkAudioEvent*> AdditionalCurrencyAKE; // 0x6a8(0x50)
	char pad_6F8[0x8]; // 0x6f8(0x08)

	void PlayMovementSound(struct FName SoundLookup); // Function Gobi.HeroAudioComponent.PlayMovementSound // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HeroBlockingNoMantleVolume
// Size: 0x288 (Inherited: 0x288)
struct AHeroBlockingNoMantleVolume : ABlockingVolume {
};

// Class Gobi.PlayerCharacter
// Size: 0x1060 (Inherited: 0xf80)
struct APlayerCharacter : AGobiCharacter {
	struct FMulticastInlineDelegate OnPlayerCharacterSlotChanged; // 0xf80(0x10)
	char pad_F90[0x10]; // 0xf90(0x10)
	bool bApplyControllerYawRotationRate; // 0xfa0(0x01)
	char pad_FA1[0x3]; // 0xfa1(0x03)
	float ControllerYawRotationRate; // 0xfa4(0x04)
	float ControllerYawRotationRateStartDistance; // 0xfa8(0x04)
	float ControllerYawRotationRateStopDistance; // 0xfac(0x04)
	struct APlayerSlot* OccupiedPlayerSlot; // 0xfb0(0x08)
	char pad_FB8[0x14]; // 0xfb8(0x14)
	float CrouchTransitionTime; // 0xfcc(0x04)
	char pad_FD0[0x8]; // 0xfd0(0x08)
	struct FCameraViewModifier CrouchViewModifier; // 0xfd8(0x38)
	struct FGameplayTagQuery CanJumpTagQuery; // 0x1010(0x48)
	char pad_1058[0x8]; // 0x1058(0x08)

	void OnRep_OccupiedPlayerSlot(); // Function Gobi.PlayerCharacter.OnRep_OccupiedPlayerSlot // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HeroCharacter
// Size: 0x12f0 (Inherited: 0x1060)
struct AHeroCharacter : APlayerCharacter {
	char pad_1060[0x10]; // 0x1060(0x10)
	struct FMulticastInlineDelegate OnHeroWalkOffLedge; // 0x1070(0x10)
	char pad_1080[0x18]; // 0x1080(0x18)
	struct UAlertComponent* AlertComponent; // 0x1098(0x08)
	struct FMulticastInlineDelegate OnHeroDefinitionChanged; // 0x10a0(0x10)
	struct FMulticastInlineDelegate OnSafeRoomChanged; // 0x10b0(0x10)
	struct ASafeRoom* CurSafeRoom; // 0x10c0(0x08)
	struct UBotPlaystyleConfigCollection* BotPlaystyleConfigSet; // 0x10c8(0x08)
	char pad_10D0[0x160]; // 0x10d0(0x160)
	float IncappedEyeHeight; // 0x1230(0x04)
	char pad_1234[0x4]; // 0x1234(0x04)
	struct FDataTableRowHandle HeroDefinitionRowHandle; // 0x1238(0x20)
	struct FGameplayTag CameraRootGameplayTag; // 0x1258(0x08)
	struct FGameplayTagContainer FiringTags; // 0x1260(0x20)
	struct UItemObserverComponent* ItemObserverComponent; // 0x1280(0x08)
	struct UHeroLedgeHangComponent* HeroLedgeHangComponent; // 0x1288(0x08)
	struct FHeroFirstPersonMeshConfig FirstPersonMeshConfig; // 0x1290(0x58)
	bool bMainHero; // 0x12e8(0x01)
	char pad_12E9[0x7]; // 0x12e9(0x07)

	void ServerStartMissionAtState(struct FDataTableRowHandle MissionHandle, struct TArray<struct FDataTableRowHandle> CompletedObjectives); // Function Gobi.HeroCharacter.ServerStartMissionAtState // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HeroDialogueComponent
// Size: 0x218 (Inherited: 0x218)
struct UHeroDialogueComponent : UCharacterDialogueComponent {
};

// Class Gobi.HeroFacialAnimationComponent
// Size: 0x218 (Inherited: 0x1a0)
struct UHeroFacialAnimationComponent : UFacialAnimationComponent {
	float FlinchExpressionTime; // 0x1a0(0x04)
	float FlinchCooldown; // 0x1a4(0x04)
	float MinPctDamageForExpression; // 0x1a8(0x04)
	float MaxPctLowDamage; // 0x1ac(0x04)
	float MaxPctMedDamage; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct TArray<struct FacialExpressionCombos> GrappledFacialExpressions; // 0x1b8(0x10)
	struct TArray<struct FacialExpressionCombos> LowDamageFacialExpressions; // 0x1c8(0x10)
	struct TArray<struct FacialExpressionCombos> MedDamageFacialExpressions; // 0x1d8(0x10)
	struct TArray<struct FacialExpressionCombos> HighDamageFacialExpressions; // 0x1e8(0x10)
	float ExertBlendTime; // 0x1f8(0x04)
	float ExertMaxAHValue; // 0x1fc(0x04)
	char pad_200[0x18]; // 0x200(0x18)

	void SetHeroData(struct FDataTableRowHandle HeroDefinitionRowHandle); // Function Gobi.HeroFacialAnimationComponent.SetHeroData // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HighlightComponent
// Size: 0x138 (Inherited: 0xd8)
struct UHighlightComponent : UActorComponent {
	struct FHighlightState ActiveState; // 0xd8(0x04)
	bool bDisableWhenVisible; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	struct FGameplayTagContainer CustomHighlightMeshTags; // 0xe0(0x20)
	struct AGobiCharacter* GobiCharacterOwner; // 0x100(0x08)
	char pad_108[0x30]; // 0x108(0x30)

	void OnRep_ActiveState(); // Function Gobi.HighlightComponent.OnRep_ActiveState // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HeroHighlightComponent
// Size: 0x1b8 (Inherited: 0x138)
struct UHeroHighlightComponent : UHighlightComponent {
	struct FGameplayTagContainer ImpairedHighlightTags; // 0x138(0x20)
	struct FName VisibilityBone; // 0x158(0x08)
	struct UHeroLifeStateComponent* HeroLifeStateComponent; // 0x160(0x08)
	bool bHeroHighlightEnabled; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct FGameplayTagQuery DeadHighlightItemTagQuery; // 0x170(0x48)

	void SetHeroHighlightEnabled(bool bNewState); // Function Gobi.HeroHighlightComponent.SetHeroHighlightEnabled // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HeroLedgeHangComponent
// Size: 0x2f0 (Inherited: 0x120)
struct UHeroLedgeHangComponent : UMovementTickableComponent {
	struct FHeroLedgeHangConfig Config; // 0x120(0x90)
	struct FHeroLedgeHangData MoveTickData; // 0x1b0(0x58)
	char pad_208[0xe8]; // 0x208(0xe8)

	void OnRescueUseSuccess(struct AActor* UsingActor); // Function Gobi.HeroLedgeHangComponent.OnRescueUseSuccess // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.LifeStateComponent
// Size: 0x200 (Inherited: 0xd8)
struct ULifeStateComponent : UActorComponent {
	struct TArray<struct UMontageSet*> ReviveMontageSets; // 0xd8(0x10)
	float ReviveAnimationTime; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FMulticastInlineDelegate OnLifeStateChanged; // 0xf0(0x10)
	char pad_100[0x70]; // 0x100(0x70)
	struct FGameplayTag ActiveLifeStateTag; // 0x170(0x08)
	char pad_178[0x10]; // 0x178(0x10)
	struct FLifeStateChangeInfo ReplicatedLifeStateChangeInfo; // 0x188(0x10)
	struct TArray<struct FLifeStateMap> LifeStates; // 0x198(0x10)
	struct ULifeStateBase* ActiveLifeState; // 0x1a8(0x08)
	struct TArray<struct ULifeStateBase*> ReplicatedLifeStates; // 0x1b0(0x10)
	char pad_1C0[0x20]; // 0x1c0(0x20)
	struct UAnimMontage* CurrentReviveMontage; // 0x1e0(0x08)
	char pad_1E8[0x18]; // 0x1e8(0x18)

	void SetState(struct FGameplayTag StateTag, struct AActor* InstigatingActor); // Function Gobi.LifeStateComponent.SetState // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HeroLifeStateComponent
// Size: 0x200 (Inherited: 0x200)
struct UHeroLifeStateComponent : ULifeStateComponent {

	void RequestRescueFromRespawn(); // Function Gobi.HeroLifeStateComponent.RequestRescueFromRespawn // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.LifeStateBase
// Size: 0xa8 (Inherited: 0x30)
struct ULifeStateBase : UGobiObject {
	char pad_30[0x20]; // 0x30(0x20)
	struct FGameplayTagContainer AppliedTags; // 0x50(0x20)
	struct TArray<struct UGameplayEffect*> AppliedGameplayEffects; // 0x70(0x10)
	struct TArray<struct UGameplayEffect*> ExitGameplayEffects; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)
	struct TArray<struct TWeakObjectPtr<struct UGameplayEffect>> ActiveEffects; // 0x98(0x10)
};

// Class Gobi.LifeStateAlive
// Size: 0xf8 (Inherited: 0xa8)
struct ULifeStateAlive : ULifeStateBase {
	float StartInjuredHealthPct; // 0xa8(0x04)
	float StartCriticalHealthPct; // 0xac(0x04)
	struct FName CriticalHealthMoveInputScaleLabel; // 0xb0(0x08)
	float CriticalHealthMoveInputScale; // 0xb8(0x04)
	enum class EHealthState HealthState; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	struct FGameplayTag CriticallyInjuredScreenFXTag; // 0xc0(0x08)
	bool bRevertCollisionProfileOnEnter; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	struct FName AliveCapsuleCollisionProfile; // 0xcc(0x08)
	struct FGameplayTag HealthStateTags[0x4]; // 0xd4(0x20)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// Class Gobi.LifeStateHeroAlive
// Size: 0xf8 (Inherited: 0xf8)
struct ULifeStateHeroAlive : ULifeStateAlive {
};

// Class Gobi.LifeStateRescueFromRespawn
// Size: 0x1a8 (Inherited: 0xa8)
struct ULifeStateRescueFromRespawn : ULifeStateBase {
	char pad_A8[0xc]; // 0xa8(0x0c)
	struct TWeakObjectPtr<struct ARescuePlayerStart> CurrentRescueStart; // 0xb4(0x08)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct TMap<enum class ERescueSpawnPointType, struct UAnimMontage*> InNeedOfRescueMontages; // 0xc0(0x50)
	struct TMap<enum class ERescueSpawnPointType, struct UAnimMontage*> RescuedMontages; // 0x110(0x50)
	bool bApplyCameraSocketOffset; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	struct FVector CameraSocketOffset; // 0x164(0x0c)
	char pad_170[0xc]; // 0x170(0x0c)
	bool bApplyCameraTargetArmLength; // 0x17c(0x01)
	char pad_17D[0x3]; // 0x17d(0x03)
	float CameraTargetArmLength; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	bool bApplyViewYawLimit; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	float ViewYawLimit; // 0x18c(0x04)
	bool bApplyViewPitchLimit; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	struct FVector2D ViewPitchLimit; // 0x194(0x08)
	char pad_19C[0xc]; // 0x19c(0x0c)

	void OnRescuedMontageFinished(struct UAnimMontage* Montage, bool bInterrupted); // Function Gobi.LifeStateRescueFromRespawn.OnRescuedMontageFinished // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.LifeStateHeroLedgeHang
// Size: 0xe0 (Inherited: 0xa8)
struct ULifeStateHeroLedgeHang : ULifeStateBase {
	float HelpInteractionTime; // 0xa8(0x04)
	struct FName UsableComponentTag; // 0xac(0x08)
	float TwoArmsHangHealthPct; // 0xb4(0x04)
	float OneArmsHangHealthPct; // 0xb8(0x04)
	char pad_BC[0x14]; // 0xbc(0x14)
	struct UAnimMontage* FallDeathMontage; // 0xd0(0x08)
	char pad_D8[0x8]; // 0xd8(0x08)
};

// Class Gobi.HeroLightComponent
// Size: 0x200 (Inherited: 0xd8)
struct UHeroLightComponent : UActorComponent {
	struct FMulticastInlineDelegate OnHeroLightStatusChanged; // 0xd8(0x10)
	bool bLightStatus; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct AActor* FlashLightBPs[0x6]; // 0xf0(0x30)
	float SmoothAlpha; // 0x120(0x04)
	struct FName FPFlashlightPoseName; // 0x124(0x08)
	char pad_12C[0xc]; // 0x12c(0x0c)
	struct FName TPFlashlightPoseName; // 0x138(0x08)
	char pad_140[0x8]; // 0x140(0x08)
	struct UPlayerViewComponent* PlayerViewComponent; // 0x148(0x08)
	char pad_150[0x78]; // 0x150(0x78)
	struct TArray<struct FLightParameterFlickerModifier> FlickerModifiers; // 0x1c8(0x10)
	struct TArray<struct FLightParameterConfig> FlashLightConfig; // 0x1d8(0x10)
	struct TArray<struct USpotLightComponent*> FlashLightComponents; // 0x1e8(0x10)
	char pad_1F8[0x8]; // 0x1f8(0x08)

	void ServerUpdateLightStatus(); // Function Gobi.HeroLightComponent.ServerUpdateLightStatus // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HeroLocoStances
// Size: 0x48 (Inherited: 0x38)
struct UHeroLocoStances : UDataAsset {
	struct TArray<struct FLocomotionStance> LocoStances; // 0x38(0x10)
};

// Class Gobi.HeroLOSVolumeComponent
// Size: 0x4c0 (Inherited: 0x4a0)
struct UHeroLOSVolumeComponent : UPrimitiveComponent {
	struct TArray<struct FVector> LOSVolumeExtents; // 0x4a0(0x10)
	struct TArray<struct FVector> LOSTestPositions; // 0x4b0(0x10)
};

// Class Gobi.HeroMovementComponent
// Size: 0x14e0 (Inherited: 0xcc0)
struct UHeroMovementComponent : UGobiPlayerMovementComponent {
	char pad_CC0[0x4]; // 0xcc0(0x04)
	struct FHarpoonData Harpoon; // 0xcc4(0x34)
	struct AActor* NextHarpoonSource; // 0xcf8(0x08)
	char pad_D00[0x8]; // 0xd00(0x08)
	struct FMovementForceData MovementForceData; // 0xd08(0x40)
	struct FMovementForceData PendingMovementForceData; // 0xd48(0x40)
	struct FMoveToTargetData MoveToTargetData; // 0xd88(0x10)
	char pad_D98[0x5b0]; // 0xd98(0x5b0)
	struct FMovementSpeedConfig MovementSpeedConfig; // 0x1348(0x60)
	char pad_13A8[0x88]; // 0x13a8(0x88)
	float MaxIncapSpeed; // 0x1430(0x04)
	char pad_1434[0x4]; // 0x1434(0x04)
	struct UInventoryComponent* Inventory; // 0x1438(0x08)
	struct AHeroCharacter* OwningHero; // 0x1440(0x08)
	struct FGameplayTagQuery BlockingKnockbackTags; // 0x1448(0x48)
	struct FMovementForcePhysConfig KnockbackPhysConfig; // 0x1490(0x0c)
	struct FMovementForcePhysConfig MeleeMovementForcePhysConfig; // 0x149c(0x0c)
	char pad_14A8[0x8]; // 0x14a8(0x08)
	float AlertRadiusCrouch; // 0x14b0(0x04)
	float AlertRadiusWalk; // 0x14b4(0x04)
	float AlertRadiusSprint; // 0x14b8(0x04)
	float AlertLoudnessCrouch; // 0x14bc(0x04)
	float AlertLoudnessWalk; // 0x14c0(0x04)
	float AlertLoudnessSprint; // 0x14c4(0x04)
	float DelayBetweenAlerts; // 0x14c8(0x04)
	float DefaultPrimaryInputThreshold; // 0x14cc(0x04)
	char pad_14D0[0x10]; // 0x14d0(0x10)

	void RequestStopHarpoon(); // Function Gobi.HeroMovementComponent.RequestStopHarpoon // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.UIScreenManager
// Size: 0x218 (Inherited: 0x30)
struct UUIScreenManager : UGobiObject {
	char pad_30[0x20]; // 0x30(0x20)
	struct FMulticastInlineDelegate OnInitialized; // 0x50(0x10)
	struct FMulticastInlineDelegate OnScreenOpened; // 0x60(0x10)
	struct FMulticastInlineDelegate OnScreenOpenedExDynamic; // 0x70(0x10)
	struct FMulticastInlineDelegate OnScreenClosed; // 0x80(0x10)
	char pad_90[0x60]; // 0x90(0x60)
	struct UAkAudioEvent* OpenScreenSound; // 0xf0(0x08)
	struct UAkAudioEvent* CloseScreenSound; // 0xf8(0x08)
	struct UUISpeakerTest* SpeakerTest; // 0x100(0x08)
	struct TArray<struct FHubScreenInfo> HubScreens; // 0x108(0x10)
	bool bCanShowCorruptSavePopup; // 0x118(0x01)
	bool bLoadGlobalAssets; // 0x119(0x01)
	bool bBlockInput; // 0x11a(0x01)
	char pad_11B[0x1]; // 0x11b(0x01)
	int32_t InputPriority; // 0x11c(0x04)
	struct UPopupManager* PopupManager; // 0x120(0x08)
	struct TArray<struct UUIScreen*> Screens; // 0x128(0x10)
	struct TArray<struct UUIScreen*> ScreensWaitingForPawn; // 0x138(0x10)
	struct UInputComponent* InputComponent; // 0x148(0x08)
	struct ATweenManagerActor* TweenManager; // 0x150(0x08)
	struct UCardTooltipUserWidget* CardTooltip; // 0x158(0x08)
	char pad_160[0x50]; // 0x160(0x50)
	struct TMap<struct UUIScreen*, struct FScreenStateWrapper> SavedScreenStates; // 0x1b0(0x50)
	char pad_200[0x10]; // 0x200(0x10)
	struct UVivoxListener* VivoxListener; // 0x210(0x08)

	void UnlockInput(); // Function Gobi.UIScreenManager.UnlockInput // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HeroScreenManager
// Size: 0x280 (Inherited: 0x218)
struct UHeroScreenManager : UUIScreenManager {
	struct FMulticastInlineDelegate OnNewHeroCardAdded; // 0x218(0x10)
	struct FMulticastInlineDelegate OnNewHeroCardsCleared; // 0x228(0x10)
	struct TArray<struct FDataTableRowHandle> KnownAIDirectorCards; // 0x238(0x10)
	struct TArray<struct FDataTableRowHandle> NewHeroCards; // 0x248(0x10)
	char pad_258[0x28]; // 0x258(0x28)

	bool SkipPreRound(); // Function Gobi.HeroScreenManager.SkipPreRound // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HeroStatTracker
// Size: 0x48 (Inherited: 0x40)
struct UHeroStatTracker : UStatTrackerBase {
	struct AHeroCharacter* CurrentCharacter; // 0x40(0x08)

	void HandleTreasureDoorOpened(); // Function Gobi.HeroStatTracker.HandleTreasureDoorOpened // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HeroUseComponent
// Size: 0x2b0 (Inherited: 0xd8)
struct UHeroUseComponent : UActorComponent {
	struct FMulticastInlineDelegate OnBeginUse; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnEndUse; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnSuccessfulUse; // 0xf8(0x10)
	float InitialProbeRadius; // 0x108(0x04)
	float InitialProbeLength; // 0x10c(0x04)
	float SecondaryProbeRadius; // 0x110(0x04)
	float SecondaryProbeLength; // 0x114(0x04)
	float SpottingHeightIncrease; // 0x118(0x04)
	float PotentialUsableAngle; // 0x11c(0x04)
	float ReachoutAnimationDelay; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct AActor* ActorBeingUsed; // 0x128(0x08)
	struct AActor* PotentialUsableActor; // 0x130(0x08)
	struct UUsableComponent* ActiveUsableComponent; // 0x138(0x08)
	struct UUsableComponent* PotentialUsableComponent; // 0x140(0x08)
	struct UUsableComponent* SpottingUsableComponent; // 0x148(0x08)
	struct UUsableComponent* LastUsePressUsable; // 0x150(0x08)
	struct UAnimMontage* CurrentUseAnimation; // 0x158(0x08)
	enum class EHeroUseState CurrentHeroUseState; // 0x160(0x01)
	char pad_161[0x14f]; // 0x161(0x14f)

	void ServerEndUse(struct FName Reason, struct AActor* ActorToStopUsing); // Function Gobi.HeroUseComponent.ServerEndUse // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HideBoneComponent
// Size: 0x130 (Inherited: 0xd8)
struct UHideBoneComponent : UActorComponent {
	char pad_D8[0x58]; // 0xd8(0x58)
};

// Class Gobi.HitMarkerComponent
// Size: 0x130 (Inherited: 0xd8)
struct UHitMarkerComponent : UActorComponent {
	struct FMulticastInlineDelegate OnHitMarkerRequested; // 0xd8(0x10)
	struct FGameplayTagQuery RequiredVictimTags; // 0xe8(0x48)
};

// Class Gobi.HitMarkerUserWidget
// Size: 0x638 (Inherited: 0x450)
struct UHitMarkerUserWidget : UGobiUserWidget {
	char pad_450[0x70]; // 0x450(0x70)
	struct UWidgetAnimation* Show; // 0x4c0(0x08)
	struct UTexture2D* ArmorHitTexture; // 0x4c8(0x08)
	struct UTexture2D* ArmorBrokenTexture; // 0x4d0(0x08)
	float LineThickness; // 0x4d8(0x04)
	float ExtendedLength; // 0x4dc(0x04)
	float ShortLength; // 0x4e0(0x04)
	char pad_4E4[0x4]; // 0x4e4(0x04)
	struct FSlateColor GeneralDamageColor; // 0x4e8(0x30)
	struct FSlateColor FriendlyFireColor; // 0x518(0x30)
	struct FSlateColor HitArmorColor; // 0x548(0x30)
	struct FSlateColor DestroyedArmorColor; // 0x578(0x30)
	struct FSlateColor HitWeakSpotColor; // 0x5a8(0x30)
	struct FSlateColor DestroyedWeakSpotColor; // 0x5d8(0x30)
	struct FSlateColor KilledColor; // 0x608(0x30)

	void OnHitMarkerRequested(struct FHitMarkerInfo HitMarkerInfo); // Function Gobi.HitMarkerUserWidget.OnHitMarkerRequested // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HitReplicationInterface
// Size: 0x30 (Inherited: 0x30)
struct UHitReplicationInterface : UInterface {
};

// Class Gobi.HubHeaderEntryUserWidget
// Size: 0x468 (Inherited: 0x450)
struct UHubHeaderEntryUserWidget : UGobiUserWidget {
	struct TArray<struct FDataTableRowHandle> TrackedObjectives; // 0x450(0x10)
	char pad_460[0x8]; // 0x460(0x08)

	void SetTrackedObjectives(struct TArray<struct FDataTableRowHandle> InTrackedObjectives); // Function Gobi.HubHeaderEntryUserWidget.SetTrackedObjectives // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HubScreen
// Size: 0x560 (Inherited: 0x560)
struct UHubScreen : UInGameScreen {

	struct UGobiUserWidget* GetCalloutsWidget(); // Function Gobi.HubScreen.GetCalloutsWidget // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HUDAmmoUserWidget
// Size: 0x4b8 (Inherited: 0x450)
struct UHUDAmmoUserWidget : UGobiUserWidget {
	char pad_450[0x58]; // 0x450(0x58)
	bool bIsLowAmmo; // 0x4a8(0x01)
	char pad_4A9[0xf]; // 0x4a9(0x0f)

	void UpdateItemInfo(struct AItem* Item); // Function Gobi.HUDAmmoUserWidget.UpdateItemInfo // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HUDEquipmentEntryUserWidget
// Size: 0x4b0 (Inherited: 0x450)
struct UHUDEquipmentEntryUserWidget : UGobiUserWidget {
	char pad_450[0x50]; // 0x450(0x50)
	bool bIsLowAmmo; // 0x4a0(0x01)
	char pad_4A1[0xf]; // 0x4a1(0x0f)

	void UpdateItemInfo(struct AItem* Item); // Function Gobi.HUDEquipmentEntryUserWidget.UpdateItemInfo // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HUDEquipmentPanelUserWidget
// Size: 0x488 (Inherited: 0x450)
struct UHUDEquipmentPanelUserWidget : UGobiUserWidget {
	char pad_450[0x38]; // 0x450(0x38)

	void OnEquipmentSlotChanged(enum class EEquipmentSlot ChangedSlot, struct AItem* OldItemInSlot, struct AItem* NewItemInSlot); // Function Gobi.HUDEquipmentPanelUserWidget.OnEquipmentSlotChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HUDEquipSlotUserWidget
// Size: 0x450 (Inherited: 0x450)
struct UHUDEquipSlotUserWidget : UGobiUserWidget {

	void ShowVendorHighlight(bool bShow); // Function Gobi.HUDEquipSlotUserWidget.ShowVendorHighlight // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HUDHintTextUserWidget
// Size: 0x450 (Inherited: 0x450)
struct UHUDHintTextUserWidget : UGobiUserWidget {
};

// Class Gobi.HUDMissionEntryUserWidget
// Size: 0x488 (Inherited: 0x450)
struct UHUDMissionEntryUserWidget : UGobiUserWidget {
	struct UHUDMissionObjectiveEntryUserWidget* ObjectiveWidget; // 0x450(0x08)
	struct FDataTableRowHandle MissionHandle; // 0x458(0x20)
	char pad_478[0x10]; // 0x478(0x10)

	void OnMissionObjectivesChanged(); // Function Gobi.HUDMissionEntryUserWidget.OnMissionObjectivesChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HUDMissionObjectiveEntryUserWidget
// Size: 0x4f0 (Inherited: 0x450)
struct UHUDMissionObjectiveEntryUserWidget : UGobiUserWidget {
	struct FDataTableRowHandle ObjectiveHandle; // 0x450(0x20)
	enum class EObjectiveState ObjectiveState; // 0x470(0x01)
	char pad_471[0x7]; // 0x471(0x07)
	struct TMap<enum class EObjectiveState, struct UAkAudioEvent*> StateToSound; // 0x478(0x50)
	int32_t LOW_TIMER_THRESHOLD; // 0x4c8(0x04)
	char pad_4CC[0x24]; // 0x4cc(0x24)

	void OnObjectiveTimerChanged(bool bTimerLow); // Function Gobi.HUDMissionObjectiveEntryUserWidget.OnObjectiveTimerChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HUDMissionObjectiveTipsUserWidget
// Size: 0x460 (Inherited: 0x450)
struct UHUDMissionObjectiveTipsUserWidget : UGobiUserWidget {
	struct UHUDMissionObjectiveTipUserWidget* ObjectiveTipClass; // 0x450(0x08)
	char pad_458[0x8]; // 0x458(0x08)

	void UpdateMissionObjectives(); // Function Gobi.HUDMissionObjectiveTipsUserWidget.UpdateMissionObjectives // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HUDMissionObjectiveTipUserWidget
// Size: 0x470 (Inherited: 0x450)
struct UHUDMissionObjectiveTipUserWidget : UGobiUserWidget {
	char pad_450[0x20]; // 0x450(0x20)

	void OnTextCritical(bool Critical); // Function Gobi.HUDMissionObjectiveTipUserWidget.OnTextCritical // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HUDMissionsUserWidget
// Size: 0x460 (Inherited: 0x450)
struct UHUDMissionsUserWidget : UGobiUserWidget {
	struct UHUDMissionEntryUserWidget* MissionWidget; // 0x450(0x08)
	char pad_458[0x8]; // 0x458(0x08)

	void OnPlayerSlotChanged(struct AGobiPlayerState* GobiPlayerState, struct APlayerSlot* PlayerSlot); // Function Gobi.HUDMissionsUserWidget.OnPlayerSlotChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HUDNotificationShelfEntryUserWidget
// Size: 0x5b0 (Inherited: 0x450)
struct UHUDNotificationShelfEntryUserWidget : UGobiUserWidget {
	struct FMulticastInlineDelegate OnNotificationActionCompleted; // 0x450(0x10)
	struct UTexture2D* PartyInviteIcon; // 0x460(0x08)
	char pad_468[0x148]; // 0x468(0x148)
};

// Class Gobi.HUDScreen
// Size: 0x6d8 (Inherited: 0x530)
struct UHUDScreen : UUIScreen {
	struct FMulticastInlineDelegate OnHealingStart; // 0x530(0x10)
	struct FMulticastInlineDelegate OnHealingEnd; // 0x540(0x10)
	struct UAkAudioEvent* MissionStartEvent; // 0x550(0x08)
	struct UAkAudioEvent* MissionEndEvent; // 0x558(0x08)
	struct UAkAudioEvent* ObjectiveStartEvent; // 0x560(0x08)
	struct UAkAudioEvent* ObjectiveEndEvent; // 0x568(0x08)
	struct FMulticastInlineDelegate OnCommWheelVisibilityChanged; // 0x570(0x10)
	struct TArray<struct FCenterBannerMessage> CenterBannerMessages; // 0x580(0x10)
	struct TArray<struct FDamageNumberInfo> DamageNumberInfos; // 0x590(0x10)
	char pad_5A0[0x138]; // 0x5a0(0x138)

	void UpdatePlayerModuleAndPartyStatusVisibility(); // Function Gobi.HUDScreen.UpdatePlayerModuleAndPartyStatusVisibility // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ImpactEffectConfig
// Size: 0x158 (Inherited: 0x38)
struct UImpactEffectConfig : UDataAsset {
	bool bEnableOnDedicatedServer; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct UAkAudioEvent*> AudioEvents; // 0x40(0x10)
	struct FExplosionJostler Jostler; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TMap<struct FGameplayTag, struct FImpactDefinition> GameplayTagDefinitions; // 0x60(0x50)
	struct TArray<struct FImpactGameplayTagContainerDefinition> GameplayTagContainerDefinitions; // 0xb0(0x10)
	struct TMap<enum class EPhysicalSurface, struct FImpactDefinition> ImpactDefinitions; // 0xc0(0x50)
	bool bOverrideScalabilitySettings; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	struct FImpactOverrideQuality OverrideQualities[0x5]; // 0x114(0x3c)
	uint32_t DeferredImpactFlags; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
};

// Class Gobi.ImpactSubsystem
// Size: 0x140 (Inherited: 0x38)
struct UImpactSubsystem : UWorldSubsystem {
	char pad_38[0x108]; // 0x38(0x108)
};

// Class Gobi.ImpostorGroupManager
// Size: 0x308 (Inherited: 0x250)
struct AImpostorGroupManager : AActor {
	struct USceneComponent* SceneRoot; // 0x250(0x08)
	struct UBoxComponent* BoxComponent; // 0x258(0x08)
	struct TArray<struct UStaticMesh*> ImpostorStationaryStaticMeshs; // 0x260(0x10)
	struct TArray<struct UStaticMesh*> ImpostorSplineStaticMeshs; // 0x270(0x10)
	struct TArray<struct UMaterialInterface*> StationaryImpostorMaterials; // 0x280(0x10)
	struct TArray<struct UMaterialInterface*> SplineImpostorMaterials; // 0x290(0x10)
	bool bStartPopulated; // 0x2a0(0x01)
	char pad_2A1[0x67]; // 0x2a1(0x67)

	void DestroyPopulation(); // Function Gobi.ImpostorGroupManager.DestroyPopulation // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ImpostorProxy
// Size: 0x258 (Inherited: 0x250)
struct AImpostorProxy : AActor {
	struct USceneComponent* DefaultRootComponent; // 0x250(0x08)
};

// Class Gobi.ImpostorProxySpline
// Size: 0x270 (Inherited: 0x258)
struct AImpostorProxySpline : AImpostorProxy {
	struct USplineComponent* SplineComponent; // 0x258(0x08)
	float MinSpawnDelay; // 0x260(0x04)
	float MaxSpawnDelay; // 0x264(0x04)
	float MovementSpeed; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
};

// Class Gobi.IncapHealthUserWidget
// Size: 0x4d0 (Inherited: 0x450)
struct UIncapHealthUserWidget : UGobiUserWidget {
	struct FGameplayTagQuery SelectedItemTags; // 0x450(0x48)
	char pad_498[0x38]; // 0x498(0x38)

	void UpdateHealthVisibility(); // Function Gobi.IncapHealthUserWidget.UpdateHealthVisibility // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.IncapUsableComponent
// Size: 0x530 (Inherited: 0x4b8)
struct UIncapUsableComponent : UUsableComponent {
	float DamageForMinProgressLost; // 0x4b8(0x04)
	float DamageForMaxProgressLost; // 0x4bc(0x04)
	float MinProgressLostFromDamage; // 0x4c0(0x04)
	float MaxProgressLostFromDamage; // 0x4c4(0x04)
	struct FGameplayTagQuery DamageTagsToIgnore; // 0x4c8(0x48)
	struct TArray<struct UGameplayEffect*> ReviveEffects; // 0x510(0x10)
	char pad_520[0x10]; // 0x520(0x10)

	void OnOwnerDamaged(struct FDamageInfo DamageInfo); // Function Gobi.IncapUsableComponent.OnOwnerDamaged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.InfectedHighlightComponent
// Size: 0x168 (Inherited: 0x138)
struct UInfectedHighlightComponent : UHighlightComponent {
	struct FGameplayTagContainer HighlightTags; // 0x138(0x20)
	struct FGameplayTag GhostTag; // 0x158(0x08)
	bool bHighlightForZombies; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)

	void OnOwnerPossessed(struct AController* Controller); // Function Gobi.InfectedHighlightComponent.OnOwnerPossessed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.InputKeySelectorImage
// Size: 0x568 (Inherited: 0x148)
struct UInputKeySelectorImage : UWidget {
	struct FButtonStyle WidgetStyle; // 0x148(0x298)
	struct FVector2D IconSize; // 0x3e0(0x08)
	struct FSlateBrush EmptyImage; // 0x3e8(0x90)
	struct FName ActionOrAxisName; // 0x478(0x08)
	bool IsAxis; // 0x480(0x01)
	char pad_481[0x3]; // 0x481(0x03)
	float AxisScale; // 0x484(0x04)
	float AnalogBindThreshold; // 0x488(0x04)
	float BindingTimerDuration; // 0x48c(0x04)
	struct FInputChord SelectedKey; // 0x490(0x20)
	struct FMargin Margin; // 0x4b0(0x10)
	bool bAllowGamepadKeys; // 0x4c0(0x01)
	bool bAllowPCKeys; // 0x4c1(0x01)
	bool bRightMouseClear; // 0x4c2(0x01)
	bool bCanRebind; // 0x4c3(0x01)
	char pad_4C4[0x4]; // 0x4c4(0x04)
	struct TArray<struct FKey> EscapeKeys; // 0x4c8(0x10)
	char pad_4D8[0x10]; // 0x4d8(0x10)
	struct TArray<struct FKey> ClearKeys; // 0x4e8(0x10)
	struct FMulticastInlineDelegate OnPreviewSelectKey; // 0x4f8(0x10)
	struct FMulticastInlineDelegate OnKeySelected; // 0x508(0x10)
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x518(0x10)
	struct FMulticastInlineDelegate OnCantRebind; // 0x528(0x10)
	struct FMulticastInlineDelegate OnKeyBlocked; // 0x538(0x10)
	char pad_548[0x20]; // 0x548(0x20)

	void SetSelectedKey(struct FInputChord InSelectedKey); // Function Gobi.InputKeySelectorImage.SetSelectedKey // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.InstantInventoryUpgradeMod
// Size: 0xd8 (Inherited: 0x88)
struct UInstantInventoryUpgradeMod : UGameplayMod {
	struct FGameplayTagQuery TagQuery; // 0x88(0x48)
	char pad_D0[0x8]; // 0xd0(0x08)
};

// Class Gobi.InstantSpawnedLootUpgradeMod
// Size: 0x120 (Inherited: 0x88)
struct UInstantSpawnedLootUpgradeMod : UGameplayMod {
	struct FGameplayTagQuery ItemQuery; // 0x88(0x48)
	struct FGameplayTagQuery SpawnerQuery; // 0xd0(0x48)
	bool bApplyOnlyToItemsAtSpawners; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
};

// Class Gobi.InteractiveCarMicroManager
// Size: 0x90 (Inherited: 0x58)
struct UInteractiveCarMicroManager : UMicroManager {
	char pad_58[0x38]; // 0x58(0x38)
};

// Class Gobi.InteractiveCarMod
// Size: 0xd0 (Inherited: 0x90)
struct UInteractiveCarMod : UMicroManagerMod {
	struct FGamePropertyFloatMod DestroyableChance; // 0x90(0x10)
	char pad_A0[0x30]; // 0xa0(0x30)
};

// Class Gobi.InteractiveCar
// Size: 0x360 (Inherited: 0xd8)
struct UInteractiveCar : UActorComponent {
	float LootDoorUseTime; // 0xd8(0x04)
	float DoorPartialOpenAlpha; // 0xdc(0x04)
	struct UCurveFloat* DoorOpenCurve; // 0xe0(0x08)
	struct UCurveFloat* DoorCloseCurve; // 0xe8(0x08)
	float CarDamageDialogueMaxRange; // 0xf0(0x04)
	float CarAlarmDialogueMaxRange; // 0xf4(0x04)
	bool bInvulnerable; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	struct FGameplayTag OnFireLifeStateTag; // 0xfc(0x08)
	struct FGameplayTag DestroyedLifeStateTag; // 0x104(0x08)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct FGameplayTagContainer CrushedDamageTypes; // 0x110(0x20)
	struct UAkAudioEvent* Crushed; // 0x130(0x08)
	float AlarmChance; // 0x138(0x04)
	float AlarmDuration; // 0x13c(0x04)
	float AlarmDamageActivationRange; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct FGameplayTagContainer AlarmOmenTags; // 0x148(0x20)
	struct UCurveFloat* AlarmVfxIdleCurve; // 0x168(0x08)
	struct UCurveFloat* AlarmVfxActiveCurve; // 0x170(0x08)
	float AlarmLightIntensityIdle; // 0x178(0x04)
	float AlarmLightIntensityActive; // 0x17c(0x04)
	struct TArray<struct FInteractiveCarAlarmMaterialParams> AlarmMaterialParams; // 0x180(0x10)
	struct UAkAudioEvent* AlarmLightClick; // 0x190(0x08)
	struct TMap<struct UAkAudioEvent*, struct UAkAudioEvent*> AlarmLoops; // 0x198(0x50)
	struct FGameplayTag HordeStartCue; // 0x1e8(0x08)
	struct UMeshComponent* BodyMeshComponent; // 0x1f0(0x08)
	struct UMeshComponent* DestroyedBodyMeshComponent; // 0x1f8(0x08)
	struct UMeshComponent* GasCapMeshComponent; // 0x200(0x08)
	struct UHealthComponent* HealthComponent; // 0x208(0x08)
	struct UAkComponent* AudioComponent; // 0x210(0x08)
	struct UAlertComponent* AlertComponent; // 0x218(0x08)
	struct UPingableComponent* PingableComponent; // 0x220(0x08)
	struct TArray<struct ULightComponent*> Lights; // 0x228(0x10)
	struct TArray<enum class EInteractiveCarDoorState> DoorStates; // 0x238(0x10)
	char pad_248[0x10]; // 0x248(0x10)
	struct TArray<enum class EInteractiveCarWindowState> WindowStates; // 0x258(0x10)
	char pad_268[0xb0]; // 0x268(0xb0)
	struct UAkAudioEvent* AlarmLoop; // 0x318(0x08)
	struct UAkAudioEvent* AlarmLoopStop; // 0x320(0x08)
	bool bHasAlarm; // 0x328(0x01)
	bool bAlarmUsed; // 0x329(0x01)
	char pad_32A[0x36]; // 0x32a(0x36)

	void OnSuccessfulUseDetailed(struct FUsableSuccessfulUsePayload UsablePayload); // Function Gobi.InteractiveCar.OnSuccessfulUseDetailed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.InteractiveCarSpawnerMicroManager
// Size: 0x100 (Inherited: 0x58)
struct UInteractiveCarSpawnerMicroManager : UMicroManager {
	char pad_58[0xa8]; // 0x58(0xa8)
};

// Class Gobi.InteractiveCarSpawnerMod
// Size: 0xf0 (Inherited: 0x90)
struct UInteractiveCarSpawnerMod : UMicroManagerMod {
	struct FGamePropertyFloatMod ClassWeights[0x3]; // 0x90(0x30)
	char pad_C0[0x30]; // 0xc0(0x30)
};

// Class Gobi.InteractiveCarSpawner
// Size: 0x170 (Inherited: 0xd8)
struct UInteractiveCarSpawner : UActorComponent {
	struct TMap<struct TSoftClassPtr<UObject>, enum class EInteractiveCarType> ClassTypes; // 0xd8(0x50)
	struct TArray<struct UObject*> PrecachedClasses; // 0x128(0x10)
	struct AActor* SpawnedCar; // 0x138(0x08)
	char pad_140[0x30]; // 0x140(0x30)

	void OnRep_SpawnedCar(); // Function Gobi.InteractiveCarSpawner.OnRep_SpawnedCar // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.InterestingMomentComponent
// Size: 0x138 (Inherited: 0xd8)
struct UInterestingMomentComponent : UActorComponent {
	struct AGameplayAnalyticsManager* GameplayAnalyticsManager; // 0xd8(0x08)
	char pad_E0[0x58]; // 0xe0(0x58)

	void SetupTrackingFromPlayerState(struct AGobiPlayerState* GobiPlayerState); // Function Gobi.InterestingMomentComponent.SetupTrackingFromPlayerState // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.InventoryComponent
// Size: 0x958 (Inherited: 0x120)
struct UInventoryComponent : UMovementTickableComponent {
	struct TMap<enum class EEquipmentSlot, float> LastConsumableActivations; // 0x120(0x50)
	struct FMulticastInlineDelegate OnAddRemoveItemServer; // 0x170(0x10)
	struct FMulticastInlineDelegate OnDroppedItem; // 0x180(0x10)
	struct FMulticastInlineDelegate OnSelectedItemChanged; // 0x190(0x10)
	struct FMulticastInlineDelegate OnCurrencyChanged; // 0x1a0(0x10)
	char pad_1B0[0x18]; // 0x1b0(0x18)
	struct FMulticastInlineDelegate OnAdjustCurrency; // 0x1c8(0x10)
	struct FMulticastInlineDelegate OnItemUseFailed; // 0x1d8(0x10)
	struct FMulticastInlineDelegate OnConsumableSlotSelected; // 0x1e8(0x10)
	struct FMulticastInlineDelegate EquipmentSlotChanged; // 0x1f8(0x10)
	enum class EEquipmentSlot InputSelectedSlot; // 0x208(0x01)
	char pad_209[0x7]; // 0x209(0x07)
	struct TArray<struct AItem*> EquipmentSlots; // 0x210(0x10)
	int32_t PostRoundBonusCurrency; // 0x220(0x04)
	int32_t Currency; // 0x224(0x04)
	struct TWeakObjectPtr<struct APlayerState> LootingPlayerState; // 0x228(0x08)
	struct AItemPickup* DeathItemContainer; // 0x230(0x08)
	struct TArray<enum class EEquipmentSlot> SelectableEquipmentSlots; // 0x238(0x10)
	struct TArray<struct FDataTableRowHandle> PerkItems; // 0x248(0x10)
	struct FGameplayTagContainer ItemsDisabledTags; // 0x258(0x20)
	struct FGameplayTagContainer ItemsDisabledInstantTags; // 0x278(0x20)
	struct FGameplayTagContainer PrimaryWeaponDisabledTags; // 0x298(0x20)
	struct FGameplayTagContainer SecondaryWeaponDisabledTags; // 0x2b8(0x20)
	struct AItem* SelectedItemActor; // 0x2d8(0x08)
	struct AItem* MoveTickSelectedActor; // 0x2e0(0x08)
	struct UGameplayTagsComponent* GameplayTagsComponent; // 0x2e8(0x08)
	struct ULifeStateComponent* LifeStateComponent; // 0x2f0(0x08)
	struct APawn* OwnerPawn; // 0x2f8(0x08)
	struct FAmmoReserve AmmoReserves[0x7]; // 0x300(0x5e8)
	struct AItem* ServerSelectionActor; // 0x8e8(0x08)
	char pad_8F0[0x1]; // 0x8f0(0x01)
	char ServerSelectionParity; // 0x8f1(0x01)
	char pad_8F2[0x56]; // 0x8f2(0x56)
	struct UAkAudioEvent* LowAmmoEffectAudioCue; // 0x948(0x08)
	struct FGameplayTag LowAmmoEffectScreenEffectCue; // 0x950(0x08)

	void SetCurrency(int32_t NewCurrency); // Function Gobi.InventoryComponent.SetCurrency // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.InventoryMatchInfoPanelUserWidget
// Size: 0x480 (Inherited: 0x450)
struct UInventoryMatchInfoPanelUserWidget : UGobiUserWidget {
	char pad_450[0x30]; // 0x450(0x30)

	void HandleDifficultySet(enum class EMissionDifficulty InDifficulty); // Function Gobi.InventoryMatchInfoPanelUserWidget.HandleDifficultySet // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.InventoryScreen
// Size: 0x560 (Inherited: 0x560)
struct UInventoryScreen : UHubChildScreen {

	void OnDragStarted(); // Function Gobi.InventoryScreen.OnDragStarted // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.InvitePromptUserWidget
// Size: 0x468 (Inherited: 0x450)
struct UInvitePromptUserWidget : UGobiUserWidget {
	char pad_450[0x18]; // 0x450(0x18)

	void UnlockInput(); // Function Gobi.InvitePromptUserWidget.UnlockInput // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.InWorldLeaderboardUserWidget
// Size: 0x308 (Inherited: 0x2d8)
struct UInWorldLeaderboardUserWidget : UUserWidget {
	char pad_2D8[0x30]; // 0x2d8(0x30)

	void SetRegion(enum class ELeaderboardRegion InRegion); // Function Gobi.InWorldLeaderboardUserWidget.SetRegion // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.Item
// Size: 0x448 (Inherited: 0x250)
struct AItem : AActor {
	char pad_250[0x78]; // 0x250(0x78)
	struct FDataTableRowHandle RowHandle; // 0x2c8(0x20)
	struct FName Name; // 0x2e8(0x08)
	enum class EEquipmentSlot EquipmentSlot; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct USceneComponent* InternalRootComponent; // 0x2f8(0x08)
	struct UItemMeshManagementComponent* MeshManagementComponent; // 0x300(0x08)
	char pad_308[0xb8]; // 0x308(0xb8)
	struct TArray<struct UMovementTickableComponent*> MovementTickableComponents; // 0x3c0(0x10)
	struct FDataTableRowHandle ItemToReturnWhenDropped; // 0x3d0(0x20)
	struct FFPFOVConfiguration BaseFirstPersonFoV; // 0x3f0(0x24)
	char pad_414[0x4]; // 0x414(0x04)
	struct TArray<struct FFirstPersonFoVAttachmentConfiguration> AttachmentFoVConfigurations; // 0x418(0x10)
	struct FDataTableRowHandle AdditionalItemGrantedWhenPickedUp; // 0x428(0x20)

	void PlayFPMontage(struct UAnimMontage* MontageAsset, float MontageLength, bool bPlayOnOwner); // Function Gobi.Item.PlayFPMontage // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ItemAkBankComponent
// Size: 0x100 (Inherited: 0xd8)
struct UItemAkBankComponent : UActorComponent {
	struct UAkAudioBank* AkBank; // 0xd8(0x08)
	struct TArray<struct UAkAudioBank*> AdditionalBanks; // 0xe0(0x10)
	float MaxDistanceForLoad; // 0xf0(0x04)
	bool bStopLoadWhenHealthIsZero; // 0xf4(0x01)
	char pad_F5[0xb]; // 0xf5(0x0b)

	void StopLoadingBank(); // Function Gobi.ItemAkBankComponent.StopLoadingBank // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ItemAmmoMod
// Size: 0x98 (Inherited: 0x88)
struct UItemAmmoMod : UGameplayMod {
	struct FGameplayTag RequiredAssociatedItemTag; // 0x88(0x08)
	int32_t Count; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class Gobi.ItemAnimationDataComponent
// Size: 0x1d8 (Inherited: 0x150)
struct UItemAnimationDataComponent : UItemBaseComponent {
	struct FWeaponAnimationConfig WeaponAnimationConfig; // 0x150(0x20)
	struct UAnimInstance* FirstPersonLocomotionAnimInstance; // 0x170(0x08)
	struct UAnimInstance* FirstPersonAdditiveAnimInstance; // 0x178(0x08)
	struct UAnimInstance* FirstPersonPostProcessAnimInstance; // 0x180(0x08)
	struct TArray<struct UAnimMontage*> FirstPersonMantleMontages; // 0x188(0x10)
	struct FGameplayTag ThirdPersonAnimationStance; // 0x198(0x08)
	struct UMontageSet* ThirdPersonGrabItemMontageSet; // 0x1a0(0x08)
	struct FItemAnimationDataTuning ItemAnimationDataTuning; // 0x1a8(0x2c)
	char pad_1D4[0x4]; // 0x1d4(0x04)
};

// Class Gobi.ItemAudioComponent
// Size: 0x178 (Inherited: 0xd8)
struct UItemAudioComponent : UActorComponent {
	bool bDebug; // 0xd8(0x01)
	bool bStopAttractOnBeginUse; // 0xd9(0x01)
	bool bStopAttractOnEndUse; // 0xda(0x01)
	char pad_DB[0x1]; // 0xdb(0x01)
	float MinSpeedForBounceAudio; // 0xdc(0x04)
	float MaxSpeedForRollAudio; // 0xe0(0x04)
	float BounceCooldown; // 0xe4(0x04)
	char pad_E8[0x8]; // 0xe8(0x08)
	struct UAkAudioEvent* AKESpawn; // 0xf0(0x08)
	struct UAkAudioEvent* AKEAttractLoop; // 0xf8(0x08)
	struct UAkAudioEvent* AKEAttractLoopStop; // 0x100(0x08)
	struct UAkAudioEvent* AKEInteractStart; // 0x108(0x08)
	struct UAkAudioEvent* AKEInteractEnd; // 0x110(0x08)
	struct UAkAudioEvent* AKEInteractSuccess; // 0x118(0x08)
	struct UAkAudioEvent* AKESpawnedFromKill; // 0x120(0x08)
	char pad_128[0x50]; // 0x128(0x50)

	void PostAttractStopAudio(); // Function Gobi.ItemAudioComponent.PostAttractStopAudio // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ItemBankLoaderSubsystem
// Size: 0x138 (Inherited: 0x38)
struct UItemBankLoaderSubsystem : UWorldSubsystem {
	char pad_38[0x100]; // 0x38(0x100)
};

// Class Gobi.ItemComponentCopyConverter
// Size: 0x50 (Inherited: 0x38)
struct UItemComponentCopyConverter : UDataAsset {
	bool bUpdate; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct AActor* ItemClass; // 0x40(0x08)
	struct UItemBaseComponent* ItemBaseComponentClass; // 0x48(0x08)
};

// Class Gobi.ItemCycleComponent
// Size: 0x298 (Inherited: 0x150)
struct UItemCycleComponent : UItemBaseComponent {
	char pad_150[0x88]; // 0x150(0x88)
	struct TArray<struct UGameplayEffect*> PowerSwapEffects; // 0x1d8(0x10)
	struct TArray<struct UGameplayEffect*> PowerSwapPlayerEffects; // 0x1e8(0x10)
	struct FItemCycleSpec RaiseSpec; // 0x1f8(0x40)
	struct FItemCycleSpec LowerSpec; // 0x238(0x40)
	struct FName CharacterItemCycleSoundTag; // 0x278(0x08)
	struct FItemCycleTuning ItemCycleTuning; // 0x280(0x14)
	char pad_294[0x4]; // 0x294(0x04)
};

// Class Gobi.ItemDragPayload
// Size: 0x38 (Inherited: 0x30)
struct UItemDragPayload : UObject {
	struct AItem* Item; // 0x30(0x08)
};

// Class Gobi.AttachmentDragPayload
// Size: 0x60 (Inherited: 0x38)
struct UAttachmentDragPayload : UItemDragPayload {
	struct FDataTableRowHandle Attachment; // 0x38(0x20)
	int32_t SlotIndex; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Gobi.AmmoDragPayload
// Size: 0x40 (Inherited: 0x38)
struct UAmmoDragPayload : UItemDragPayload {
	enum class EAmmoType AmmoType; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t NumToDrop; // 0x3c(0x04)
};

// Class Gobi.CurrencyDragPayload
// Size: 0x40 (Inherited: 0x38)
struct UCurrencyDragPayload : UItemDragPayload {
	int32_t NumToDrop; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Gobi.ItemDragVisualUserWidget
// Size: 0x460 (Inherited: 0x450)
struct UItemDragVisualUserWidget : UGobiUserWidget {
	char pad_450[0x10]; // 0x450(0x10)

	void SetPayload(struct UItemDragPayload* InPayload); // Function Gobi.ItemDragVisualUserWidget.SetPayload // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ItemDropTargetUserWidget
// Size: 0x450 (Inherited: 0x450)
struct UItemDropTargetUserWidget : UGobiUserWidget {
};

// Class Gobi.ItemFilterUserWidget
// Size: 0x478 (Inherited: 0x450)
struct UItemFilterUserWidget : UGobiUserWidget {
	struct FMulticastInlineDelegate OnFilterChanged; // 0x450(0x10)
	struct TArray<enum class EItemFilter> Filters; // 0x460(0x10)
	enum class EItemFilter DefaultFilter; // 0x470(0x01)
	char pad_471[0x7]; // 0x471(0x07)

	void SelectFilter(enum class EItemFilter NewFilter, bool bForceUpdate); // Function Gobi.ItemFilterUserWidget.SelectFilter // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ItemFinder_Mod
// Size: 0x140 (Inherited: 0x88)
struct UItemFinder_Mod : UGameplayMod {
	float EntropyChance; // 0x88(0x04)
	float ChancePerKill; // 0x8c(0x04)
	struct FGameplayTagContainer ItemTags; // 0x90(0x20)
	struct FGameplayTagQuery DamageTypeTagQuery; // 0xb0(0x48)
	struct FGameplayTagQuery KilledCharacterTagQuery; // 0xf8(0x48)
};

// Class Gobi.ItemMeshManagementComponent
// Size: 0x2e0 (Inherited: 0x150)
struct UItemMeshManagementComponent : UItemBaseComponent {
	struct FMulticastInlineDelegate OnFirstPersonMeshInitialized; // 0x150(0x10)
	struct FMulticastInlineDelegate OnFirstPersonMeshShutdown; // 0x160(0x10)
	struct TArray<struct UPrimitiveComponent*> ThirdPersonMeshComponents; // 0x170(0x10)
	struct TArray<struct UPrimitiveComponent*> FirstPersonMeshComponents; // 0x180(0x10)
	struct TArray<struct FWeaponAttachmentMeshConfig> AppliedAttachmentMeshConfigs; // 0x190(0x10)
	struct FDataTableRowHandle CustomizationRow; // 0x1a0(0x20)
	char pad_1C0[0xe8]; // 0x1c0(0xe8)
	struct TArray<struct FName> FirstPersonBonesHiddenByDefault; // 0x2a8(0x10)
	struct UPhysicsAsset* FirstPersonPhysicsAssetOverride; // 0x2b8(0x08)
	struct FGameplayTag BaseThirdPersonMeshTag; // 0x2c0(0x08)
	struct FName ThirdPersonAttachBoneName; // 0x2c8(0x08)
	struct FGameplayTag SecondaryThirdPersonMeshTag; // 0x2d0(0x08)
	struct FName SecondaryThirdPersonAttachBoneName; // 0x2d8(0x08)

	void UnregisterThirdPersonComponent(struct UPrimitiveComponent* InComponent); // Function Gobi.ItemMeshManagementComponent.UnregisterThirdPersonComponent // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ItemObservableComponent
// Size: 0x5e0 (Inherited: 0x530)
struct UItemObservableComponent : UObservableComponent {
	char pad_530[0x10]; // 0x530(0x10)
	struct FItemObservableToolTipOverride TooltipOverride; // 0x540(0x60)
	int32_t SimpleCollisionFlags; // 0x5a0(0x04)
	struct FVector BoxExtents; // 0x5a4(0x0c)
	struct TArray<struct FItemObservableState> ObservableStates; // 0x5b0(0x10)
	char pad_5C0[0x20]; // 0x5c0(0x20)

	void OnItemClaimed(); // Function Gobi.ItemObservableComponent.OnItemClaimed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ItemObserverComponent
// Size: 0x158 (Inherited: 0x128)
struct UItemObserverComponent : UObserverComponent {
	char pad_128[0x30]; // 0x128(0x30)

	void OnViewChanged(bool bThirdPerson); // Function Gobi.ItemObserverComponent.OnViewChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ItemPickup
// Size: 0x428 (Inherited: 0x250)
struct AItemPickup : AActor {
	struct UBoxComponent* PingableVolume; // 0x250(0x08)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x258(0x08)
	struct USphereComponent* UsableVolumeComponent; // 0x260(0x08)
	struct UItemPickupUsableComponent* UsableComponent; // 0x268(0x08)
	struct UItemObservableComponent* ItemObservableComponent; // 0x270(0x08)
	struct UUsableHighlightComponent* UsableHighlightComponent; // 0x278(0x08)
	char pad_280[0x8]; // 0x280(0x08)
	struct FMulticastInlineDelegate OnItemsClaimed; // 0x288(0x10)
	struct FMulticastInlineDelegate OnItemsClaimedDetailed; // 0x298(0x10)
	enum class EItemPickupCreationContext CreationContext; // 0x2a8(0x01)
	char pad_2A9[0x17]; // 0x2a9(0x17)
	bool bGivesCard; // 0x2c0(0x01)
	bool bGivesBasicCard; // 0x2c1(0x01)
	char pad_2C2[0x6]; // 0x2c2(0x06)
	struct FDataTableRowHandle GivenCardHandle; // 0x2c8(0x20)
	bool bApplyUsableConditionForGivenCard; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct FGameplayCardCondition GameplayCardCondition; // 0x2f0(0x48)
	enum class EPickupCountType CountType; // 0x338(0x01)
	enum class EPickupSlot PickupSlot; // 0x339(0x01)
	char pad_33A[0x2]; // 0x33a(0x02)
	struct FGameplayTag UpgradeOverrideTag; // 0x33c(0x08)
	bool bDestroyWhenLastItemLooted; // 0x344(0x01)
	bool bAddItemAmmoOnPickup; // 0x345(0x01)
	char pad_346[0x2]; // 0x346(0x02)
	struct TArray<struct FItemRowAndQuantity> ItemRowsAndQuantities; // 0x348(0x10)
	struct TArray<struct FRandomItemTableRoll> RandomItemRolls; // 0x358(0x10)
	struct FGameplayTag ItemPickedUpCue; // 0x368(0x08)
	float DroppedSpeed; // 0x370(0x04)
	struct FRotator DroppedRotationOffset; // 0x374(0x0c)
	struct FVector DroppedTranslationOffset; // 0x380(0x0c)
	bool bEnablePingableVolume; // 0x38c(0x01)
	char pad_38D[0x3]; // 0x38d(0x03)
	struct UTexture2D* PingIconOverride; // 0x390(0x08)
	struct FSlateColor PingIconTint; // 0x398(0x30)
	char pad_3C8[0x10]; // 0x3c8(0x10)
	struct TMap<enum class EItemQuality, struct FLinearColor> QualityColor; // 0x3d8(0x50)

	void SetGivenCard(struct FDataTableRowHandle CardHandle); // Function Gobi.ItemPickup.SetGivenCard // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ItemPickupToolTipUserWidget
// Size: 0x5c0 (Inherited: 0x450)
struct UItemPickupToolTipUserWidget : UGobiUserWidget {
	char pad_450[0x170]; // 0x450(0x170)

	void ShowInfiniteAmmo(); // Function Gobi.ItemPickupToolTipUserWidget.ShowInfiniteAmmo // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ItemPickupUsableComponent
// Size: 0x4c8 (Inherited: 0x4b8)
struct UItemPickupUsableComponent : UUsableComponent {
	char pad_4B8[0x10]; // 0x4b8(0x10)
};

// Class Gobi.ItemPreLoader
// Size: 0x40 (Inherited: 0x30)
struct UItemPreLoader : UObject {
	struct TArray<struct FDataTableRowHandle> ItemRows; // 0x30(0x10)
};

// Class Gobi.ItemSlotUserWidget
// Size: 0x460 (Inherited: 0x450)
struct UItemSlotUserWidget : UGobiUserWidget {
	bool bSmallIcon; // 0x450(0x01)
	char pad_451[0xf]; // 0x451(0x0f)

	void SetTransferState(enum class EItemTransferState TransferState); // Function Gobi.ItemSlotUserWidget.SetTransferState // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ItemSpawningAnalyticsComponent
// Size: 0x160 (Inherited: 0xd8)
struct UItemSpawningAnalyticsComponent : UActorComponent {
	char pad_D8[0x50]; // 0xd8(0x50)
	struct AGameplayAnalyticsManager* AnalyticsManager; // 0x128(0x08)
	char pad_130[0x30]; // 0x130(0x30)

	void HandleTrackedItemClaimed(struct AItemPickup* ItemPickup, struct APawn* LootingPawn, int32_t ItemIndex, int32_t Quantity, int32_t Remaining); // Function Gobi.ItemSpawningAnalyticsComponent.HandleTrackedItemClaimed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ItemUtils
// Size: 0x30 (Inherited: 0x30)
struct UItemUtils : UBlueprintFunctionLibrary {

	struct FItemRowAndQuantity GetCompressedItem(struct AItem* InItem); // Function Gobi.ItemUtils.GetCompressedItem // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.Jukebox
// Size: 0x2e0 (Inherited: 0x250)
struct AJukebox : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x250(0x08)
	struct UUsableComponent* UsableComponent; // 0x258(0x08)
	struct UBoxComponent* UsableTriggerComponent; // 0x260(0x08)
	struct UAkComponent* AkComponent; // 0x268(0x08)
	struct UJukeboxMusicComponent* JukeboxMusicComp; // 0x270(0x08)
	bool bAutoLoadNextSong; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct FText TurnOnText; // 0x280(0x18)
	struct FText TurnOffText; // 0x298(0x18)
	float TurnOnUseTime; // 0x2b0(0x04)
	float TurnOffUseTime; // 0x2b4(0x04)
	struct UAkAudioEvent* AKEBeginUse; // 0x2b8(0x08)
	struct UAkAudioEvent* AKEEndUse; // 0x2c0(0x08)
	struct FMulticastInlineDelegate OnButtonPressed; // 0x2c8(0x10)
	bool bIsPlaying; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)

	void OnSuccessfullyUsed(struct AActor* UsingActor); // Function Gobi.Jukebox.OnSuccessfullyUsed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.JukeboxMusicComponent
// Size: 0x1b0 (Inherited: 0xd8)
struct UJukeboxMusicComponent : UActorComponent {
	bool bAutoLoadNextSong; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct TSet<struct UAkAudioEvent*> TrackList; // 0xe0(0x50)
	struct UAkAudioEvent* AKEStartTrack; // 0x130(0x08)
	struct UAkAudioEvent* AKEStopTrack; // 0x138(0x08)
	struct FName MusicScenarioName; // 0x140(0x08)
	bool bInvokeMusicState; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct FMulticastInlineDelegate OnNewTrackSelected; // 0x150(0x10)
	int32_t TimescaleRampTimeMs; // 0x160(0x04)
	struct TWeakObjectPtr<struct UAkComponent> AkComponent; // 0x164(0x08)
	int32_t TrackNumber; // 0x16c(0x04)
	enum class EJukeboxMusicState State; // 0x170(0x01)
	char pad_171[0x3]; // 0x171(0x03)
	int32_t CurrentTrackStartTimeStamp; // 0x174(0x04)
	char pad_178[0x38]; // 0x178(0x38)

	void StopMusic(); // Function Gobi.JukeboxMusicComponent.StopMusic // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.KeybindEntryUserWidget
// Size: 0x478 (Inherited: 0x450)
struct UKeybindEntryUserWidget : UGobiUserWidget {
	struct FMulticastInlineDelegate OnEntryFocusGained; // 0x450(0x10)
	char pad_460[0x18]; // 0x460(0x18)

	void OnItemFocusChanged(struct UWidget* Widget, bool bIsFocused, enum class EFocusCause Cause); // Function Gobi.KeybindEntryUserWidget.OnItemFocusChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.KeybindListUserWidget
// Size: 0x458 (Inherited: 0x450)
struct UKeybindListUserWidget : UGobiUserWidget {
	char pad_450[0x8]; // 0x450(0x08)

	void HandleConflictUnbound(struct FName BindingName, struct FKey Key); // Function Gobi.KeybindListUserWidget.HandleConflictUnbound // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.KillFeedUserWidget
// Size: 0x560 (Inherited: 0x450)
struct UKillFeedUserWidget : UGobiUserWidget {
	struct TMap<struct TWeakObjectPtr<struct APlayerSlot>, enum class EKillFeedState> PlayerStates; // 0x450(0x50)
	char pad_4A0[0xc0]; // 0x4a0(0xc0)

	void AddKillFeedMessage(struct FText Message, bool bIsNegative); // Function Gobi.KillFeedUserWidget.AddKillFeedMessage // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.KillHandlerComponent
// Size: 0xd8 (Inherited: 0xd8)
struct UKillHandlerComponent : UActorComponent {
};

// Class Gobi.Ladder
// Size: 0x288 (Inherited: 0x250)
struct ALadder : AActor {
	struct USceneComponent* InternalRootComponent; // 0x250(0x08)
	struct UBoxComponent* LadderTouchVolume; // 0x258(0x08)
	struct UBoxComponent* LadderUsableVolume; // 0x260(0x08)
	struct USceneComponent* LadderTop; // 0x268(0x08)
	struct USceneComponent* LadderBottom; // 0x270(0x08)
	struct UUsableComponent* LadderUsable; // 0x278(0x08)
	struct UGameplayTagsComponent* GameplayTagsComponent; // 0x280(0x08)

	void OnSuccessfulUse(struct AActor* UsingActor); // Function Gobi.Ladder.OnSuccessfulUse // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.LadderMovementModeComponent
// Size: 0x420 (Inherited: 0x120)
struct ULadderMovementModeComponent : UMovementTickableComponent {
	struct TArray<struct UAnimMontage*> ApproachMontages; // 0x120(0x10)
	struct TArray<struct UAnimMontage*> DismountMontages; // 0x130(0x10)
	struct FLadderMovementModeConfig Config; // 0x140(0x1b8)
	struct FLadderMovementModeData MoveTickData; // 0x2f8(0x4c)
	char pad_344[0xdc]; // 0x344(0xdc)

	void OnRootMotionMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function Gobi.LadderMovementModeComponent.OnRootMotionMontageEnded // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.LadderUsableComponent
// Size: 0x4d0 (Inherited: 0x4b8)
struct ULadderUsableComponent : UUsableComponent {
	struct FText ReleasePromptText; // 0x4b8(0x18)
};

// Class Gobi.LaserSightComponent
// Size: 0x200 (Inherited: 0x150)
struct ULaserSightComponent : UItemBaseComponent {
	char pad_150[0x30]; // 0x150(0x30)
	struct UParticleSystemComponent* FirstPersonDotParticle; // 0x180(0x08)
	struct UParticleSystemComponent* ThirdPersonDotParticle; // 0x188(0x08)
	struct FLaserSightConfig FirstPersonLaserSightConfig; // 0x190(0x38)
	struct FLaserSightConfig ThirdPersonLaserSightConfig; // 0x1c8(0x38)
};

// Class Gobi.LeaderboardListItem
// Size: 0x78 (Inherited: 0x30)
struct ULeaderboardListItem : UObject {
	struct FLeaderboardData Data; // 0x30(0x18)
	int32_t Index; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FText ChallengeRankName; // 0x50(0x18)
	struct UTexture2D* ChallengeRankIcon; // 0x68(0x08)
	bool bIsLocalPlayer; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class Gobi.LeaderboardScreen
// Size: 0x580 (Inherited: 0x530)
struct ULeaderboardScreen : UUIScreen {
	char pad_530[0x40]; // 0x530(0x40)
	struct TArray<struct ULeaderboardListItem*> ListItems; // 0x570(0x10)

	void SetRegion_Internal(enum class ELeaderboardRegion InRegion); // Function Gobi.LeaderboardScreen.SetRegion_Internal // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.OpenScreenUsableComponent
// Size: 0x4f0 (Inherited: 0x4b8)
struct UOpenScreenUsableComponent : UUsableComponent {
	struct FMulticastInlineDelegate OnScreenClosedEvent; // 0x4b8(0x10)
	struct UUIScreen* ScreenClass; // 0x4c8(0x08)
	enum class EMatchmakingScreenMode MatchmakingScreenMode; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)
	struct UUIScreen* DependencyScreenClass; // 0x4d8(0x08)
	bool bDisabledForTradeShow; // 0x4e0(0x01)
	char pad_4E1[0xf]; // 0x4e1(0x0f)

	void ScreenUsableClosedSignature__DelegateSignature(); // DelegateFunction Gobi.OpenScreenUsableComponent.ScreenUsableClosedSignature__DelegateSignature // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.LeaderboardUsableComponent
// Size: 0x4f8 (Inherited: 0x4f0)
struct ULeaderboardUsableComponent : UOpenScreenUsableComponent {
	enum class ELeaderboardRegion Region; // 0x4f0(0x01)
	char pad_4F1[0x7]; // 0x4f1(0x07)
};

// Class Gobi.LeapComponent
// Size: 0x640 (Inherited: 0x1c8)
struct ULeapComponent : UAbilityComponent {
	char pad_1C8[0x20]; // 0x1c8(0x20)
	struct FMulticastInlineDelegate OnLeapEnded; // 0x1e8(0x10)
	bool bLeapEnabled; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	struct FLeapTuning LeapTuning; // 0x200(0x198)
	struct FPlayerLeapConfig Player; // 0x398(0x88)
	bool bCrouchWhenCooking; // 0x420(0x01)
	bool bCrouchWhenLeaping; // 0x421(0x01)
	char pad_422[0x6]; // 0x422(0x06)
	struct TArray<struct UAnimMontage*> CookingMontages; // 0x428(0x10)
	struct TArray<struct UAnimMontage*> LeapFromWallMontages; // 0x438(0x10)
	struct TArray<struct UAnimMontage*> LeapFromWallCookingMontages; // 0x448(0x10)
	struct TArray<struct UGameplayEffect*> ApplyEffects; // 0x458(0x10)
	struct TArray<struct UGameplayEffect*> CookingEffects; // 0x468(0x10)
	struct FGameplayTagQuery MoveIgnoreCharacters; // 0x478(0x48)
	struct TArray<struct FEnemyAudioEvent> AudioCookingStopEvents; // 0x4c0(0x10)
	struct TArray<struct FEnemyAudioEvent> AudioCookingInterruptedEvents; // 0x4d0(0x10)
	char pad_4E0[0x160]; // 0x4e0(0x160)

	void StopLeap(); // Function Gobi.LeapComponent.StopLeap // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.LeapMovementModeComponent
// Size: 0x170 (Inherited: 0x120)
struct ULeapMovementModeComponent : UMovementTickableComponent {
	float MaxLeapDuration; // 0x120(0x04)
	float LeapSlideableDuration; // 0x124(0x04)
	float MinLeapImpactDotToStepUp; // 0x128(0x04)
	float MinLeapImpactDotToSlide; // 0x12c(0x04)
	char pad_130[0x40]; // 0x130(0x40)
};

// Class Gobi.LedgeHangTriggerVolume
// Size: 0x2a0 (Inherited: 0x298)
struct ALedgeHangTriggerVolume : APhysicsVolume {
	bool bTriggerLedgeHang; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
};

// Class Gobi.LedgeHangUsableComponent
// Size: 0x4b8 (Inherited: 0x4b8)
struct ULedgeHangUsableComponent : UUsableComponent {
};

// Class Gobi.LegalScreen
// Size: 0x530 (Inherited: 0x530)
struct ULegalScreen : UUIScreen {
};

// Class Gobi.LevelResetCoordinator
// Size: 0x2a8 (Inherited: 0x250)
struct ALevelResetCoordinator : AActor {
	char pad_250[0x20]; // 0x250(0x20)
	struct TArray<struct ULevelStreamingDynamic*> LevelsToReset; // 0x270(0x10)
	char pad_280[0x28]; // 0x280(0x28)

	void UpdateNumUnloadedLevels(); // Function Gobi.LevelResetCoordinator.UpdateNumUnloadedLevels // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ScenarioActor
// Size: 0x250 (Inherited: 0x250)
struct AScenarioActor : AActor {
};

// Class Gobi.LevelSequenceScenarioActorBase
// Size: 0x380 (Inherited: 0x250)
struct ALevelSequenceScenarioActorBase : AScenarioActor {
	struct USceneComponent* SceneRoot; // 0x250(0x08)
	struct UTextRenderComponent* TextRender; // 0x258(0x08)
	bool bIsEnabled; // 0x260(0x01)
	bool bForceSequenceActorDespawn; // 0x261(0x01)
	char pad_262[0x6]; // 0x262(0x06)
	struct FGameplayTagQuery ForceDespawnOfCharactersThatMatch; // 0x268(0x48)
	bool bOnlyOnePlayerIsRequiredToStart; // 0x2b0(0x01)
	bool bTriggerWhenAllPlayersAreOutOfTriggerVolume; // 0x2b1(0x01)
	char pad_2B2[0x6]; // 0x2b2(0x06)
	struct ATriggerVolume* StartSequenceTriggerVolume; // 0x2b8(0x08)
	struct AGobiCharacter* SequenceCharacterClass; // 0x2c0(0x08)
	bool bSequenceActorIsUnkillable; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct FGameplayTagContainer TagsToAddToSpawnedCharacter; // 0x2d0(0x20)
	struct FGameplayTagContainer InPlaySequenceActorTagContainer; // 0x2f0(0x20)
	struct ACharacterSpawnActor* CharacterSpawnActor; // 0x310(0x08)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x318(0x08)
	struct AAISmartActor* HighPrioritySmartActor; // 0x320(0x08)
	struct ALevelSequenceScenarioActorBase* OnCompletedActivateLinkedLSSAB; // 0x328(0x08)
	struct TArray<struct ALevelSequenceScenarioActorBase*> GetSavedHealthFromTheseLSSABs; // 0x330(0x10)
	float OnCompletedLinkDelayTime; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct FMulticastInlineDelegate OnSpawnSequenceCharacter; // 0x348(0x10)
	char pad_358[0xc]; // 0x358(0x0c)
	bool bSequenceActorsKilled; // 0x364(0x01)
	bool bSequenceActorIsActing; // 0x365(0x01)
	char pad_366[0x2]; // 0x366(0x02)
	struct ULevelSequenceScenarioComponent* LevelSequenceScenario; // 0x368(0x08)
	char pad_370[0x10]; // 0x370(0x10)

	void SetIsEnabled(bool bNewIsEnabled); // Function Gobi.LevelSequenceScenarioActorBase.SetIsEnabled // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.LevelSequenceScenarioComponent
// Size: 0x328 (Inherited: 0x328)
struct ULevelSequenceScenarioComponent : UBlueprintableScenarioComponent {
};

// Class Gobi.LevelSequenceSmartActor
// Size: 0x3b8 (Inherited: 0x3b0)
struct ALevelSequenceSmartActor : AAISmartActor {
	struct AActor* ProxyActorToReplace; // 0x3b0(0x08)
};

// Class Gobi.LevelStreamingCoordinator
// Size: 0x330 (Inherited: 0x250)
struct ALevelStreamingCoordinator : AActor {
	struct TArray<struct FGameModeStreamingVolumes> GameModeStreamingVolumes; // 0x250(0x10)
	struct TArray<struct FCardStreamingVolumes> CardStreamingVolumes; // 0x260(0x10)
	struct TArray<struct ALevelStreamingVolume*> LevelStreamingVolumes; // 0x270(0x10)
	struct TArray<struct ALevelStreamingVolume*> InMatchLevelStreamingVolumes; // 0x280(0x10)
	struct TArray<struct FGameModeStreamingVolume> GameModeLevelStreamingVolumes; // 0x290(0x10)
	struct TArray<struct FGameModeStreamingVolume> GameModeInMatchLevelStreamingVolumes; // 0x2a0(0x10)
	struct TArray<struct FCardDependentStreamingVolume> CardDependentStreamingVolumes; // 0x2b0(0x10)
	struct TArray<struct ALevelStreamingVolume*> ActiveGameModeStreamingVolumes; // 0x2c0(0x10)
	struct TArray<struct ALevelStreamingVolume*> ActiveSafeRoomStreamingVolumes; // 0x2d0(0x10)
	char pad_2E0[0x50]; // 0x2e0(0x50)

	void UpdateNumLoadedLevels(); // Function Gobi.LevelStreamingCoordinator.UpdateNumLoadedLevels // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.LevelStreamingMod
// Size: 0x90 (Inherited: 0x88)
struct ULevelStreamingMod : UGameplayMod {
	struct FName LevelStreamingKeyToAdd; // 0x88(0x08)
};

// Class Gobi.LicensePopupUserWidget
// Size: 0x4d8 (Inherited: 0x470)
struct ULicensePopupUserWidget : UPopupUserWidget {
	char pad_470[0x68]; // 0x470(0x68)

	void OnActiveWidgetChanged(int32_t ActiveIndex, struct UWidget* ActiveWidget); // Function Gobi.LicensePopupUserWidget.OnActiveWidgetChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.LifeStateIncap
// Size: 0x148 (Inherited: 0xa8)
struct ULifeStateIncap : ULifeStateBase {
	char pad_A8[0x10]; // 0xa8(0x10)
	struct FGamePropertyInt MaxIncapCount; // 0xb8(0x38)
	float IncapHealthPool; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FTemporaryHealthParams TemporaryHealthParams; // 0xf8(0x18)
	bool bCanDie; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FGameplayTagContainer PermanentAppliedTags; // 0x118(0x20)
	int32_t CurrentIncapCount; // 0x138(0x04)
	struct FCollisionProfileName CollisionProfile; // 0x13c(0x08)
	char pad_144[0x4]; // 0x144(0x04)

	int32_t GetMaxIncapCount(); // Function Gobi.LifeStateIncap.GetMaxIncapCount // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.LifeStateFakeDead
// Size: 0x140 (Inherited: 0xa8)
struct ULifeStateFakeDead : ULifeStateBase {
	struct FName AutoRagdollFromBoneName; // 0xa8(0x08)
	struct FName DeadCapsuleCollisionProfile; // 0xb0(0x08)
	struct TArray<struct FGameplayTag> TurnOffCollisionOnComponents; // 0xb8(0x10)
	float HealthResetPct; // 0xc8(0x04)
	bool bShouldRagdoll; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	int32_t MaxFakeDeathCount; // 0xd0(0x04)
	bool bOnFinalDeathBecomeInvulnerable; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	struct FGameplayTagContainer RemovedTags; // 0xd8(0x20)
	struct FGameplayTagContainer FinalDeathAppliedTags; // 0xf8(0x20)
	char pad_118[0x28]; // 0x118(0x28)

	void OnSenseUnWatched(bool bIsSomeoneInRange); // Function Gobi.LifeStateFakeDead.OnSenseUnWatched // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.LifeStateDead
// Size: 0xf0 (Inherited: 0xa8)
struct ULifeStateDead : ULifeStateBase {
	struct FName AutoRagdollFromBoneName; // 0xa8(0x08)
	struct FName DeadCapsuleCollisionProfile; // 0xb0(0x08)
	bool bRegisterWithCorpseManager; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct TArray<struct FGameplayTag> TurnOffCollisionOnComponents; // 0xc0(0x10)
	struct TArray<struct UMontageSet*> MontageSets; // 0xd0(0x10)
	struct UAnimMontage* PlayingDeathMontage; // 0xe0(0x08)
	struct UAnimMontage* DeathMontage; // 0xe8(0x08)

	void OnOwnerSetToRagdoll(); // Function Gobi.LifeStateDead.OnOwnerSetToRagdoll // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.LifeStateHealth
// Size: 0xd0 (Inherited: 0xa8)
struct ULifeStateHealth : ULifeStateBase {
	struct TArray<struct FLifeStateTransitionRuleHealth> EnterRules; // 0xa8(0x10)
	struct TArray<struct FLifeStateTransitionRuleHealth> ExitRules; // 0xb8(0x10)
	char pad_C8[0x8]; // 0xc8(0x08)

	void OnHealthChanged(float NewHealth, float DeltaHealth); // Function Gobi.LifeStateHealth.OnHealthChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.LifetimeStatsScreen
// Size: 0x540 (Inherited: 0x530)
struct ULifetimeStatsScreen : UUIScreen {
	struct TArray<struct FUIPlayerStat> Stats; // 0x530(0x10)

	void InitializeStats(); // Function Gobi.LifetimeStatsScreen.InitializeStats // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.LightweightNPC
// Size: 0x2c8 (Inherited: 0x250)
struct ALightweightNPC : AActor {
	struct USkeletalMeshComponent* Mesh; // 0x250(0x08)
	struct UAkSkeletalComponent* AudioEmitter; // 0x258(0x08)
	struct UGobiDialogueComponent* DialogueComponent; // 0x260(0x08)
	struct ULiteCharacterAudioComponent* AudioComponent; // 0x268(0x08)
	struct UFacialAnimationComponent* FacialAnimationComponent; // 0x270(0x08)
	struct UGameplayTagsComponent* GameplayTagsComponent; // 0x278(0x08)
	struct FDataTableRowHandle VoiceRowHandle; // 0x280(0x20)
	bool bIsFemale; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct TArray<struct UFacialAnimationData*> MaleFacialAnimationData; // 0x2a8(0x10)
	struct TArray<struct UFacialAnimationData*> FemaleFacialAnimationData; // 0x2b8(0x10)
};

// Class Gobi.LineOfSightSubsystem
// Size: 0x158 (Inherited: 0x38)
struct ULineOfSightSubsystem : UWorldSubsystem {
	char pad_38[0x120]; // 0x38(0x120)
};

// Class Gobi.LipSyncBPLib
// Size: 0x30 (Inherited: 0x30)
struct ULipSyncBPLib : UBlueprintFunctionLibrary {

	bool ImportLipSync(struct FString Filename, struct TArray<int32_t> StartMilliseconds, struct TArray<struct FString> Phonemes); // Function Gobi.LipSyncBPLib.ImportLipSync // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.LiteCharacterAudioComponent
// Size: 0x158 (Inherited: 0xd8)
struct ULiteCharacterAudioComponent : UActorComponent {
	char pad_D8[0x18]; // 0xd8(0x18)
	struct FName DialogueBoneName; // 0xf0(0x08)
	struct UAkAudioEvent* DialogueStopEvent; // 0xf8(0x08)
	struct USoundCollectionAsset* SoundCollection; // 0x100(0x08)
	struct FDelegate VoiceLineFinishedCallback; // 0x108(0x10)
	struct TWeakObjectPtr<struct UAkSkeletalComponent> AudioEmitter; // 0x118(0x08)
	struct TWeakObjectPtr<struct USkeletalMeshComponent> MeshComp; // 0x120(0x08)
	char pad_128[0x8]; // 0x128(0x08)
	struct FString CurrentVoiceLine; // 0x130(0x10)
	char pad_140[0x18]; // 0x140(0x18)

	void VoiceLineFinished(enum class EAkCallbackType CallbackType, struct UAkCallbackInfo* CallbackInfo); // Function Gobi.LiteCharacterAudioComponent.VoiceLineFinished // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.LoadingScreen
// Size: 0x530 (Inherited: 0x530)
struct ULoadingScreen : UUIScreen {
};

// Class Gobi.LoadoutMod
// Size: 0xd8 (Inherited: 0x88)
struct ULoadoutMod : UGameplayMod {
	enum class ELoadoutModAdjustmentType LoadoutAdjustmentType; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FInventoryLoadout Loadout; // 0x90(0x38)
	struct TArray<struct FLoadoutCharacterOverride> LoadoutCharacterOverrides; // 0xc8(0x10)
};

// Class Gobi.LoadoutTrait
// Size: 0x70 (Inherited: 0x30)
struct ULoadoutTrait : UTrait {
	struct FInventoryLoadout Loadout; // 0x30(0x38)
	enum class ELoadoutSource LoadoutSource; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Gobi.LockpickItemComponent
// Size: 0x4e8 (Inherited: 0x4e0)
struct ULockpickItemComponent : UApplyEffectItemComponent {
	char pad_4E0[0x8]; // 0x4e0(0x08)
};

// Class Gobi.LootBlockingVolume
// Size: 0x288 (Inherited: 0x288)
struct ALootBlockingVolume : ABlockingVolume {
};

// Class Gobi.LootSpawnCountMod
// Size: 0x98 (Inherited: 0x88)
struct ULootSpawnCountMod : UGameplayMod {
	struct FLootSpawnCountModifier SpawnCountModifier; // 0x88(0x10)
};

// Class Gobi.LootSpawnerComponent
// Size: 0x2e0 (Inherited: 0x220)
struct ULootSpawnerComponent : USceneComponent {
	struct FMulticastInlineDelegate OnSpawnItem; // 0x220(0x10)
	uint32_t SupportedGameModes; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
	struct FGameplayTagContainer SupportedTags; // 0x238(0x20)
	struct FGameplayTagContainer DisallowedTags; // 0x258(0x20)
	struct FGameplayTagContainer ConfigRequiredTags; // 0x278(0x20)
	enum class EPickupCountType ItemQuantity; // 0x298(0x01)
	bool bAddAttachments; // 0x299(0x01)
	bool RequiresCurrency; // 0x29a(0x01)
	char pad_29B[0x5]; // 0x29b(0x05)
	struct TSoftObjectPtr<ULootScenario> LootScenario; // 0x2a0(0x28)
	struct AActor* SpawnedItem; // 0x2c8(0x08)
	char pad_2D0[0x10]; // 0x2d0(0x10)

	void OnSpawnItem__DelegateSignature(struct ULootSpawnerComponent* Spawner, struct AActor* Item); // DelegateFunction Gobi.LootSpawnerComponent.OnSpawnItem__DelegateSignature // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.LootSpawnerCrate
// Size: 0x428 (Inherited: 0x250)
struct ALootSpawnerCrate : AActor {
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	struct UStaticMeshComponent* Crate; // 0x258(0x08)
	struct UStaticMeshComponent* Lid; // 0x260(0x08)
	struct ULootSpawnerComponent* LootSpawner; // 0x268(0x08)
	struct TArray<struct USceneComponent*> ItemLocations; // 0x270(0x10)
	struct USceneComponent* ItemLocation0; // 0x280(0x08)
	struct USceneComponent* ItemLocation1; // 0x288(0x08)
	struct USceneComponent* ItemLocation2; // 0x290(0x08)
	struct USceneComponent* ItemLocation3; // 0x298(0x08)
	struct USceneComponent* ItemLocation4; // 0x2a0(0x08)
	struct USceneComponent* ItemLocation5; // 0x2a8(0x08)
	struct USceneComponent* ItemLocation6; // 0x2b0(0x08)
	struct USceneComponent* ItemLocation7; // 0x2b8(0x08)
	struct USceneComponent* ItemLocation8; // 0x2c0(0x08)
	struct UBoxComponent* NavModifierVolume; // 0x2c8(0x08)
	struct UPingableComponent* Pingable; // 0x2d0(0x08)
	struct UBoxComponent* PingableVolume; // 0x2d8(0x08)
	struct USphereComponent* UsableSphere; // 0x2e0(0x08)
	struct UUsableComponent* Usable; // 0x2e8(0x08)
	struct UGobiNavModifierComponent* GobiNavModifier; // 0x2f0(0x08)
	struct UItemAkBankComponent* ItemAkBank; // 0x2f8(0x08)
	struct UUsableHighlightComponent* UsableHighlight; // 0x300(0x08)
	struct UGameplayEffectsComponent* GameplayEffects; // 0x308(0x08)
	struct UItemAudioComponent* ItemAudio; // 0x310(0x08)
	bool bDynamicLoot; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct FGameplayTagContainer ValidItemTags; // 0x320(0x20)
	struct FGameplayTagContainer DisallowedItemTags; // 0x340(0x20)
	struct UStaticMesh* OpenedCrateMesh; // 0x360(0x08)
	struct UMeshMaterialParamSet* OpenedCrateMeshMaterialParamSet; // 0x368(0x08)
	char pad_370[0x4]; // 0x370(0x04)
	struct FVector2D ItemCountRange; // 0x374(0x08)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct TArray<struct FGameplayTagContainer> ItemPickupTagsArray; // 0x380(0x10)
	struct FGameplayTagQuery ItemShortageQuery; // 0x390(0x48)
	float ItemShortageScalar; // 0x3d8(0x04)
	bool bAlwaysSpawned; // 0x3dc(0x01)
	char pad_3DD[0x3]; // 0x3dd(0x03)
	struct AItemPickup* SeedItemClass; // 0x3e0(0x08)
	bool bContainerOpened; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct TArray<struct AItemPickup*> ItemPickups; // 0x3f0(0x10)
	struct FGameplayTagContainer SpawnedItemsTags; // 0x400(0x20)
	bool bContainerVisible; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)

	void UpdateItemPickups(); // Function Gobi.LootSpawnerCrate.UpdateItemPickups // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.LootSpawnSubsystem
// Size: 0x588 (Inherited: 0x38)
struct ULootSpawnSubsystem : UWorldSubsystem {
	char pad_38[0x10]; // 0x38(0x10)
	struct TArray<struct UDataTable*> LootTables; // 0x48(0x10)
	struct TArray<struct ULootSpawnCountMod*> Mods; // 0x58(0x10)
	struct TArray<struct ULootUpgradeMod*> Upgrades; // 0x68(0x10)
	struct TArray<struct ULootScenario*> LootScenarios; // 0x78(0x10)
	struct TArray<struct UScenarioComponent*> ScenarioRefs; // 0x88(0x10)
	char pad_98[0x4f0]; // 0x98(0x4f0)

	struct FItemRow WeightedRandomItem(struct UObject* WorldContextObject, struct FGameplayTagContainer SupportedTags, struct FGameplayTagContainer DisallowedTags, struct ULootSpawnerComponent* ReferenceSpawner, struct ULootSpawnSubsystem* Subsystem); // Function Gobi.LootSpawnSubsystem.WeightedRandomItem // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.LootSpawnSeamlessTravelData
// Size: 0x30 (Inherited: 0x30)
struct ULootSpawnSeamlessTravelData : UObject {
};

// Class Gobi.LootSpawnConfigAsset
// Size: 0x58 (Inherited: 0x38)
struct ULootSpawnConfigAsset : UDataAsset {
	struct TArray<float> AttachmentCountWeights; // 0x38(0x10)
	struct TArray<struct FLootSpawnConfig> SpawnConfigs; // 0x48(0x10)
};

// Class Gobi.LootSystemMapConfigAsset
// Size: 0x88 (Inherited: 0x38)
struct ULootSystemMapConfigAsset : UDataAsset {
	struct TMap<struct FFilePath, struct FLootSystemConfig> SystemConfigs; // 0x38(0x50)
};

// Class Gobi.LootScenario
// Size: 0xe8 (Inherited: 0x38)
struct ULootScenario : UDataAsset {
	struct TSoftClassPtr<UObject> ScenarioClass; // 0x38(0x28)
	bool bStartWithScenario; // 0x60(0x01)
	bool bStopWithScenario; // 0x61(0x01)
	bool bAutoSpawnItems; // 0x62(0x01)
	bool bRemoveUnusedItems; // 0x63(0x01)
	float SpawnDistanceThreshold; // 0x64(0x04)
	struct TArray<struct FLootScenarioItemMaintenance> ItemsToMaintain; // 0x68(0x10)
	char pad_78[0x70]; // 0x78(0x70)
};

// Class Gobi.LootData
// Size: 0x50 (Inherited: 0x38)
struct ULootData : UDataAsset {
	struct TArray<struct UDataTable*> LootTables; // 0x38(0x10)
	struct ULootSystemMapConfigAsset* LootSystemMapConfig; // 0x48(0x08)
};

// Class Gobi.LootSystem
// Size: 0x288 (Inherited: 0x250)
struct ALootSystem : AActor {
	struct ULootSpawnConfigAsset* LootConfig; // 0x250(0x08)
	struct ULootSpawnConfigAsset* LootConfigPVPClassic; // 0x258(0x08)
	struct ULootSpawnConfigAsset* LootConfigPVPHoldout; // 0x260(0x08)
	struct ULootSpawnConfigAsset* TradeShowLootConfig; // 0x268(0x08)
	struct ULootSpawnConfigAsset* TradeShowLootConfigPVPClassic; // 0x270(0x08)
	struct ULootSpawnConfigAsset* TradeShowLootConfigPVPHoldout; // 0x278(0x08)
	struct FSpawnCountRange TreasureRooms; // 0x280(0x08)
};

// Class Gobi.LootSystemDebugger
// Size: 0x278 (Inherited: 0x250)
struct ALootSystemDebugger : AActor {
	struct TArray<struct FDebugLootCategoryInfo> CategoryPool; // 0x250(0x10)
	struct TArray<struct FDebugLootSpawnCountMod> DebugSpawnCountMods; // 0x260(0x10)
	char pad_270[0x8]; // 0x270(0x08)

	void DebugDrawHandler(struct UCanvas* Canvas, struct APlayerController* InPlayerController); // Function Gobi.LootSystemDebugger.DebugDrawHandler // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.LootUpgradeMod
// Size: 0xc0 (Inherited: 0x88)
struct ULootUpgradeMod : UGameplayMod {
	struct TArray<struct FLootUpgradeConfig> LootUpgradeConfigs; // 0x88(0x10)
	struct TArray<struct FLootSpawnCountModifier> StackedSpawnCountModifiers; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)
};

// Class Gobi.LullSystem
// Size: 0x2b8 (Inherited: 0x250)
struct ALullSystem : AActor {
	int32_t RequiredSurvivorCount; // 0x250(0x04)
	float NearbyBossMonsterDistance; // 0x254(0x04)
	struct FGameplayTagContainer BossMonsterTags; // 0x258(0x20)
	struct FMulticastInlineDelegate OnLullBegin; // 0x278(0x10)
	struct FMulticastInlineDelegate OnLullEnd; // 0x288(0x10)
	bool LullActive; // 0x298(0x01)
	char LullStatus; // 0x299(0x01)
	char pad_29A[0x6]; // 0x29a(0x06)
	struct UGameDirector* GameDirector; // 0x2a0(0x08)
	struct UGobiCollectionsSubsystem* Collections; // 0x2a8(0x08)
	char pad_2B0[0x8]; // 0x2b0(0x08)

	void OnRep_LullActive(); // Function Gobi.LullSystem.OnRep_LullActive // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MainMenuDevOptionsUserWidget
// Size: 0x488 (Inherited: 0x450)
struct UMainMenuDevOptionsUserWidget : UGobiUserWidget {
	char pad_450[0x38]; // 0x450(0x38)

	void RefreshMapOptions(); // Function Gobi.MainMenuDevOptionsUserWidget.RefreshMapOptions // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MainMenuGameMode
// Size: 0x440 (Inherited: 0x438)
struct AMainMenuGameMode : AGobiGameModeBase {
	bool bLoadGlobalAssets; // 0x438(0x01)
	char pad_439[0x3]; // 0x439(0x03)
	float RespawnTime; // 0x43c(0x04)
};

// Class Gobi.MainMenuPawn
// Size: 0x2a8 (Inherited: 0x2a8)
struct AMainMenuPawn : APawn {
};

// Class Gobi.MainMenuPlayerController
// Size: 0x7c0 (Inherited: 0x798)
struct AMainMenuPlayerController : AGobiPlayerControllerBase {
	char pad_798[0x8]; // 0x798(0x08)
	struct FMulticastInlineDelegate OnSignedIn; // 0x7a0(0x10)
	struct FMulticastInlineDelegate OnSignedOut; // 0x7b0(0x10)

	void SignedInOutDelegate__DelegateSignature(); // DelegateFunction Gobi.MainMenuPlayerController.SignedInOutDelegate__DelegateSignature // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MainMenuScreen
// Size: 0x550 (Inherited: 0x530)
struct UMainMenuScreen : UUIScreen {
	struct FMulticastInlineDelegate OnReturnToSignIn; // 0x530(0x10)
	char pad_540[0x10]; // 0x540(0x10)

	void UpdateMatchmakingButtons(); // Function Gobi.MainMenuScreen.UpdateMatchmakingButtons // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MOTDPopupPayload
// Size: 0x40 (Inherited: 0x30)
struct UMOTDPopupPayload : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class Gobi.MainMenuScreenManager
// Size: 0x280 (Inherited: 0x218)
struct UMainMenuScreenManager : UUIScreenManager {
	char pad_218[0x38]; // 0x218(0x38)
	struct UCaravanManager* CaravanManager; // 0x250(0x08)
	struct TArray<struct FMOTDTab> StaticMOTDEntries; // 0x258(0x10)
	char pad_268[0x18]; // 0x268(0x18)

	void ShowSignInTutorial(); // Function Gobi.MainMenuScreenManager.ShowSignInTutorial // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MantleBlockingVolume
// Size: 0x288 (Inherited: 0x288)
struct AMantleBlockingVolume : AVolume {
};

// Class Gobi.MantleComponent
// Size: 0x3d8 (Inherited: 0x120)
struct UMantleComponent : UMovementTickableComponent {
	struct FMulticastInlineDelegate OnMantleStateChanged; // 0x120(0x10)
	char pad_130[0x130]; // 0x130(0x130)
	struct FMantleMontageConfig Config; // 0x260(0xc8)
	bool bActivateOnJump; // 0x328(0x01)
	bool bActivateOnMovement; // 0x329(0x01)
	bool bActivateOnMovementWhileFalling; // 0x32a(0x01)
	char pad_32B[0x1]; // 0x32b(0x01)
	float ActivationFallSpeedMin; // 0x32c(0x04)
	float ActivationFallSpeedMax; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct FGameplayTagContainer BlockingTags; // 0x338(0x20)
	float MinDetectionHeight; // 0x358(0x04)
	float MaxDetectionHeight; // 0x35c(0x04)
	float MaxHorizontalDistance; // 0x360(0x04)
	float MaxLedgeExtrusion; // 0x364(0x04)
	float OpeningTestStepHeight; // 0x368(0x04)
	float LandDistance; // 0x36c(0x04)
	float RestrictSurfaceInclineWhenHeightBelow; // 0x370(0x04)
	float SurfaceInclineRestriction; // 0x374(0x04)
	float RelaxedSurfaceInclineRestriction; // 0x378(0x04)
	bool bCalculateMantleDepth; // 0x37c(0x01)
	char pad_37D[0x3]; // 0x37d(0x03)
	float MaxDepthCalculationSize; // 0x380(0x04)
	float GroundCheckDistance; // 0x384(0x04)
	float MinMantleHeightFromGround; // 0x388(0x04)
	float WallHitRequiredAngle; // 0x38c(0x04)
	bool bUseMovementDirectionForWallDetection; // 0x390(0x01)
	bool bUseWallNormalAsMantleDirection; // 0x391(0x01)
	char pad_392[0x2]; // 0x392(0x02)
	struct FMantleProceduralClimbParameters DefaultClimbParameters; // 0x394(0x0c)
	bool bMoveToWall; // 0x3a0(0x01)
	char pad_3A1[0x3]; // 0x3a1(0x03)
	float MoveToWallTime; // 0x3a4(0x04)
	float ClimbTimeout; // 0x3a8(0x04)
	bool bAutoCrouch; // 0x3ac(0x01)
	char pad_3AD[0x3]; // 0x3ad(0x03)
	float SnapToWallYawRotationOnHeightAbove; // 0x3b0(0x04)
	char pad_3B4[0x4]; // 0x3b4(0x04)
	struct TArray<struct FMantleClimbHeightConfig> ClimbParametersHeightOverrides; // 0x3b8(0x10)
	struct UMontageSet* MontageSet; // 0x3c8(0x08)
	struct UMontageSet* LeapMontageSet; // 0x3d0(0x08)

	void OnMontageNotifyBegin(struct FName NotifyName, struct FBranchingPointNotifyPayload BranchingPointNotifyPayload); // Function Gobi.MantleComponent.OnMontageNotifyBegin // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MantleHeroBlockingVolume
// Size: 0x288 (Inherited: 0x288)
struct AMantleHeroBlockingVolume : AVolume {
};

// Class Gobi.MantleSpeedMod
// Size: 0x90 (Inherited: 0x88)
struct UMantleSpeedMod : UGameplayMod {
	struct FCustomDataProviderFloat MantleSpeed; // 0x88(0x08)
};

// Class Gobi.MapMetrics
// Size: 0x260 (Inherited: 0x250)
struct AMapMetrics : AActor {
	bool bRebuildMetrics; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct UMapMetricsDataAsset* MapMetricsData; // 0x258(0x08)
};

// Class Gobi.MapMetricsDataAsset
// Size: 0x90 (Inherited: 0x38)
struct UMapMetricsDataAsset : UDataAsset {
	bool bLogOutResults; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float ClimbMetricStepDist; // 0x3c(0x04)
	float JumpMetricStepDist; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FMapMetricData MapMetricsCombined; // 0x48(0x38)
	struct TArray<struct FMapMetricData> MapMetrics; // 0x80(0x10)
};

// Class Gobi.MapSelectUserWidget
// Size: 0x528 (Inherited: 0x450)
struct UMapSelectUserWidget : UGobiUserWidget {
	struct FMulticastInlineDelegate OnMapSelected; // 0x450(0x10)
	struct FMulticastInlineDelegate OnMapFocused; // 0x460(0x10)
	struct TSet<struct UGobiUserWidget*> HeaderWidgets; // 0x470(0x50)
	struct TSet<struct UMatchmakingSettingEntryUserWidget*> MapWidgets; // 0x4c0(0x50)
	char pad_510[0x18]; // 0x510(0x18)

	void SetMapHeader(struct UGobiUserWidget* Widget, struct FText InText); // Function Gobi.MapSelectUserWidget.SetMapHeader // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MapSpatialInfoComponent
// Size: 0x650 (Inherited: 0x4a0)
struct UMapSpatialInfoComponent : UPrimitiveComponent {
	char pad_4A0[0x18]; // 0x4a0(0x18)
	struct TArray<char> SerializedCellInfo; // 0x4b8(0x10)
	char pad_4C8[0x70]; // 0x4c8(0x70)
	float GoldenPathLength; // 0x538(0x04)
	bool bRestrictToNavPlacementVolumes; // 0x53c(0x01)
	char pad_53D[0x3]; // 0x53d(0x03)
	float DistanceFromNavPlacementVolumes; // 0x540(0x04)
	float VisibilityMaxDistanceForward; // 0x544(0x04)
	float VisibilityMaxDistanceBackward; // 0x548(0x04)
	float NearbyDistance; // 0x54c(0x04)
	float MaxAudibleDistance; // 0x550(0x04)
	bool bGenerateMergedCells; // 0x554(0x01)
	bool bGenerateGoldenPathDistances; // 0x555(0x01)
	bool bGenerateVisibility; // 0x556(0x01)
	char pad_557[0x1]; // 0x557(0x01)
	struct FName GenerationBoundsTag; // 0x558(0x08)
	bool bRestrictMergedCellsBasedOnVisibility; // 0x560(0x01)
	char pad_561[0x3]; // 0x561(0x03)
	int32_t MaxMergeTestVisMismatches; // 0x564(0x04)
	bool bGenerateDebugMergeTestVisInfo; // 0x568(0x01)
	bool bGenerateDebugNonVisibleAreaInfo; // 0x569(0x01)
	bool bGenerateNearbyCells; // 0x56a(0x01)
	bool bGenerateAudibleCells; // 0x56b(0x01)
	bool bGenerateWallsOnlyAtTestActor; // 0x56c(0x01)
	bool bGenerateWallsNorth; // 0x56d(0x01)
	bool bGenerateWallsEast; // 0x56e(0x01)
	bool bGenerateWallsSouth; // 0x56f(0x01)
	bool bGenerateWallsWest; // 0x570(0x01)
	bool bDrawOnlyIfSelected; // 0x571(0x01)
	bool bDrawBehindWalls; // 0x572(0x01)
	bool bDrawConnections; // 0x573(0x01)
	bool bDrawVisibilityLocations; // 0x574(0x01)
	bool bDrawInViewFromSafeRoom; // 0x575(0x01)
	bool bDrawWalls; // 0x576(0x01)
	bool bDrawWallSources; // 0x577(0x01)
	bool bDrawWallTestPoints; // 0x578(0x01)
	enum class ECollisionChannel MovementChannel; // 0x579(0x01)
	enum class ECollisionChannel VisiblityChannel; // 0x57a(0x01)
	char pad_57B[0x5]; // 0x57b(0x05)
	struct TArray<struct AActor*> TraceActorBaseClassesToIgnore; // 0x580(0x10)
	struct TArray<struct FName> CollisionProfileNamesToIgnore; // 0x590(0x10)
	enum class EMapSpatialInfoDrawType DrawType; // 0x5a0(0x01)
	char pad_5A1[0x4f]; // 0x5a1(0x4f)
	struct TArray<struct AActor*> NavMeshSpawnActorClasses; // 0x5f0(0x10)
	struct TArray<char> SerializedSonicProperties; // 0x600(0x10)
	char pad_610[0x10]; // 0x610(0x10)
	bool EnableSonicPropertyGeneration; // 0x620(0x01)
	char pad_621[0x7]; // 0x621(0x07)
	struct FString SonicFootprintReport; // 0x628(0x10)
	float SonicPropertiesSize; // 0x638(0x04)
	float MaxTotalSonicPathlength; // 0x63c(0x04)
	float GoldenPathCullingDistance; // 0x640(0x04)
	float MaxObstructionToExclude; // 0x644(0x04)
	bool EnableMirrorReduction; // 0x648(0x01)
	char pad_649[0x7]; // 0x649(0x07)
};

// Class Gobi.MapSpatialInfoActor
// Size: 0x260 (Inherited: 0x250)
struct AMapSpatialInfoActor : AActor {
	struct UMapSpatialInfoComponent* MapSpatialInfoComponent; // 0x250(0x08)
	struct UActiveAreaSetComponent* ActiveAreaSetComponent; // 0x258(0x08)
};

// Class Gobi.MapSpatialInfoTestActor
// Size: 0x250 (Inherited: 0x250)
struct AMapSpatialInfoTestActor : AActor {
};

// Class Gobi.Matchmaking
// Size: 0xff0 (Inherited: 0x30)
struct UMatchmaking : UObject {
	struct UGobiWebServices* GobiWebServices; // 0x30(0x08)
	struct UMatchmakingPoolManager* MatchmakingPoolManager; // 0x38(0x08)
	struct UOnlineSessions* OnlineSessions; // 0x40(0x08)
	char pad_48[0x18]; // 0x48(0x18)
	struct TArray<struct FTaskTimerConfig> TimerConfigs; // 0x60(0x10)
	char pad_70[0xa28]; // 0x70(0xa28)
	double GameServerAutoConnectTime; // 0xa98(0x08)
	double GameServerWaitForFirstPartySessionTime; // 0xaa0(0x08)
	struct TArray<struct FMatchmakingUIBucket> UIBuckets; // 0xaa8(0x10)
	struct TArray<struct FMatchmakingUIAtuinEnvironment> UIAtuinEnvironments; // 0xab8(0x10)
	struct TArray<struct UMatchmakingLocalUserSlot*> LocalUserSlots; // 0xac8(0x10)
	char pad_AD8[0x150]; // 0xad8(0x150)
	double WaitForJoinersToLeaveDuration; // 0xc28(0x08)
	char pad_C30[0xd8]; // 0xc30(0xd8)
	double PacketRelayGracePeriod; // 0xd08(0x08)
	char pad_D10[0x30]; // 0xd10(0x30)
	double StartupReconnectGracePeriod; // 0xd40(0x08)
	char pad_D48[0x1c0]; // 0xd48(0x1c0)
	struct FMulticastInlineDelegate OnPoolJoined; // 0xf08(0x10)
	struct FMulticastInlineDelegate OnPoolLeft; // 0xf18(0x10)
	struct FMulticastInlineDelegate OnPoolServerAllocated; // 0xf28(0x10)
	char pad_F38[0xb8]; // 0xf38(0xb8)

	void TeamSizeChanged__DelegateSignature(int32_t NumTeams, int32_t TeamSize); // DelegateFunction Gobi.Matchmaking.TeamSizeChanged__DelegateSignature // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MatchmakingAnalytics
// Size: 0x208 (Inherited: 0x30)
struct UMatchmakingAnalytics : UObject {
	char pad_30[0x1d8]; // 0x30(0x1d8)

	void HandleMatchmakingStateChanged(enum class EMatchmakingState State, bool bCanStartMatchmaking, bool bCanStopMatchmaking); // Function Gobi.MatchmakingAnalytics.HandleMatchmakingStateChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MatchmakingDifficultyUserWidget
// Size: 0x468 (Inherited: 0x450)
struct UMatchmakingDifficultyUserWidget : UGobiUserWidget {
	struct FMulticastInlineDelegate OnDifficultyFocused; // 0x450(0x10)
	char pad_460[0x8]; // 0x460(0x08)

	void OnDifficultySelected__DelegateSignature(enum class EMissionDifficulty Difficulty); // DelegateFunction Gobi.MatchmakingDifficultyUserWidget.OnDifficultySelected__DelegateSignature // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MatchmakingIndicatorUserWidget
// Size: 0x480 (Inherited: 0x450)
struct UMatchmakingIndicatorUserWidget : UGobiUserWidget {
	char pad_450[0x30]; // 0x450(0x30)

	void OnPoolServerAllocated(struct FMatchmakingPool Pool); // Function Gobi.MatchmakingIndicatorUserWidget.OnPoolServerAllocated // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MatchmakingLocalUserSlot
// Size: 0x310 (Inherited: 0x30)
struct UMatchmakingLocalUserSlot : UObject {
	struct UGobiWebServices* GobiWebServices; // 0x30(0x08)
	struct UMatchmaking* Matchmaking; // 0x38(0x08)
	struct UOnlineSessions* OnlineSessions; // 0x40(0x08)
	struct UGobiWBP1* GobiWBP1; // 0x48(0x08)
	struct UGameInstance* GameInstance; // 0x50(0x08)
	struct TArray<struct FTaskTimerConfig> TimerConfigs; // 0x58(0x10)
	char pad_68[0x230]; // 0x68(0x230)
	struct FSignInTasks SignInTasks; // 0x298(0x20)
	char pad_2B8[0x40]; // 0x2b8(0x40)
	struct UVivoxListener* VivoxListener; // 0x2f8(0x08)
	struct UBroadcastMessageManager* BroadcastMessageManager; // 0x300(0x08)
	char pad_308[0x8]; // 0x308(0x08)

	void OnControllerUnpluggedPopupClosed(struct UPopupUserWidget* Popup, struct FName Command); // Function Gobi.MatchmakingLocalUserSlot.OnControllerUnpluggedPopupClosed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MatchmakingModeUserWidget
// Size: 0x468 (Inherited: 0x450)
struct UMatchmakingModeUserWidget : UGobiUserWidget {
	struct FMulticastInlineDelegate OnViewSwitched; // 0x450(0x10)
	bool bIsActive; // 0x460(0x01)
	char pad_461[0x7]; // 0x461(0x07)

	void OnViewSwitched__DelegateSignature(bool bIsAtEnd); // DelegateFunction Gobi.MatchmakingModeUserWidget.OnViewSwitched__DelegateSignature // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MatchmakingMOTDUserWidget
// Size: 0x468 (Inherited: 0x450)
struct UMatchmakingMOTDUserWidget : UGobiUserWidget {
	struct TArray<struct FMOTDHubInfo> Tabs; // 0x450(0x10)
	struct UTexture2D* DynamicIcon; // 0x460(0x08)

	void SetTabCount(int32_t Count); // Function Gobi.MatchmakingMOTDUserWidget.SetTabCount // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MatchmakingPartyPromptUserWidget
// Size: 0x450 (Inherited: 0x450)
struct UMatchmakingPartyPromptUserWidget : UGobiUserWidget {

	void UpdateTeamSize(int32_t NumTeams, int32_t TeamSize); // Function Gobi.MatchmakingPartyPromptUserWidget.UpdateTeamSize // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MatchmakingPlayerListUserWidget
// Size: 0x458 (Inherited: 0x450)
struct UMatchmakingPlayerListUserWidget : UGobiUserWidget {
	char pad_450[0x8]; // 0x450(0x08)

	void OnSlotsUpdated(); // Function Gobi.MatchmakingPlayerListUserWidget.OnSlotsUpdated // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MatchmakingPoolManager
// Size: 0xb0 (Inherited: 0x30)
struct UMatchmakingPoolManager : UObject {
	struct TArray<struct FMatchmakingPoolConfig> PoolConfigs; // 0x30(0x10)
	struct UGobiWebServices* GobiWebServices; // 0x40(0x08)
	char pad_48[0x18]; // 0x48(0x18)
	float SequenceMessagesTimeout; // 0x60(0x04)
	float SequenceSessionJoinTimeout; // 0x64(0x04)
	char pad_68[0x48]; // 0x68(0x48)
};

// Class Gobi.MatchmakingPrefsPopupUserWidget
// Size: 0x480 (Inherited: 0x470)
struct UMatchmakingPrefsPopupUserWidget : UPopupUserWidget {
	char pad_470[0x10]; // 0x470(0x10)

	void SetPrefs(struct FUIMatchmakingPrefs InPrefs); // Function Gobi.MatchmakingPrefsPopupUserWidget.SetPrefs // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MatchmakingScreen
// Size: 0x6d8 (Inherited: 0x560)
struct UMatchmakingScreen : UHubChildScreen {
	struct FMulticastInlineDelegate OnModeChanged; // 0x560(0x10)
	char pad_570[0x160]; // 0x570(0x160)
	bool bCanMatchmake; // 0x6d0(0x01)
	char pad_6D1[0x7]; // 0x6d1(0x07)

	void UpdateTeamSize(int32_t NumTeams, int32_t TeamSize); // Function Gobi.MatchmakingScreen.UpdateTeamSize // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MatchmakingSelectionUserWidget
// Size: 0x458 (Inherited: 0x450)
struct UMatchmakingSelectionUserWidget : UGobiUserWidget {
	enum class EMatchmakingScreenMode Mode; // 0x450(0x01)
	bool bIsSelected; // 0x451(0x01)
	char pad_452[0x6]; // 0x452(0x06)

	void SetIsSelected(bool bInIsSelected); // Function Gobi.MatchmakingSelectionUserWidget.SetIsSelected // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MatchSettingToggleButtonUserWidget
// Size: 0x478 (Inherited: 0x450)
struct UMatchSettingToggleButtonUserWidget : UGobiUserWidget {
	char pad_450[0x1]; // 0x450(0x01)
	bool bIsToggle; // 0x451(0x01)
	char pad_452[0x6]; // 0x452(0x06)
	struct UTexture2D* CheckBoxCheckedImage; // 0x458(0x08)
	struct UTexture2D* CheckBoxUncheckedImage; // 0x460(0x08)
	char pad_468[0x10]; // 0x468(0x10)

	void SetIsToggle(bool bInIsToggle); // Function Gobi.MatchSettingToggleButtonUserWidget.SetIsToggle // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MatchmakingSettingEntryUserWidget
// Size: 0x5c8 (Inherited: 0x478)
struct UMatchmakingSettingEntryUserWidget : UMatchSettingToggleButtonUserWidget {
	char pad_478[0xf0]; // 0x478(0xf0)
	struct FSlateColor UnlockedTextColor; // 0x568(0x30)
	struct FSlateColor LockedTextColor; // 0x598(0x30)

	void SetRunState(enum class ECampaignRunState InState); // Function Gobi.MatchmakingSettingEntryUserWidget.SetRunState // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MatchmakingSettingsInfoUserWidget
// Size: 0x4f8 (Inherited: 0x450)
struct UMatchmakingSettingsInfoUserWidget : UGobiUserWidget {
	char pad_450[0xa8]; // 0x450(0xa8)

	void SetRunState(enum class ECampaignRunState InState); // Function Gobi.MatchmakingSettingsInfoUserWidget.SetRunState // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MatchmakingSettingsPanelUserWidget
// Size: 0x558 (Inherited: 0x450)
struct UMatchmakingSettingsPanelUserWidget : UGobiUserWidget {
	char pad_450[0x10]; // 0x450(0x10)
	enum class EMatchmakingScreenMode Mode; // 0x460(0x01)
	char pad_461[0x1]; // 0x461(0x01)
	bool bIsReadOnly; // 0x462(0x01)
	char pad_463[0xf5]; // 0x463(0xf5)

	void SetMode(enum class EMatchmakingScreenMode InMode); // Function Gobi.MatchmakingSettingsPanelUserWidget.SetMode // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MatchmakingStateUserWidget
// Size: 0x4a0 (Inherited: 0x450)
struct UMatchmakingStateUserWidget : UGobiUserWidget {
	char pad_450[0x50]; // 0x450(0x50)

	void SetDifficultyIcon(struct UImage* ImageWidget, enum class EMissionDifficulty Difficulty); // Function Gobi.MatchmakingStateUserWidget.SetDifficultyIcon // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MeleeComponent
// Size: 0x638 (Inherited: 0x1c8)
struct UMeleeComponent : UAbilityComponent {
	char pad_1C8[0x8]; // 0x1c8(0x08)
	struct FMulticastInlineDelegate OnStartMelee; // 0x1d0(0x10)
	struct FMulticastInlineDelegate OnStopMelee; // 0x1e0(0x10)
	char pad_1F0[0x1b8]; // 0x1f0(0x1b8)
	struct TArray<struct FHitResult> PerFrameOverlapResults; // 0x3a8(0x10)
	struct FHitResult ImpactHitResult; // 0x3b8(0x88)
	struct TArray<struct AActor*> OverlappedActors; // 0x440(0x10)
	struct FGameplayCueHandle ImpactCueHandle; // 0x450(0x18)
	struct TArray<struct FMeleeAttack> MeleeAttacks; // 0x468(0x10)
	struct FCollisionProfileName ImpactVolumeCollisionProfile; // 0x478(0x08)
	bool bUseMeleeTarget; // 0x480(0x01)
	char pad_481[0x7]; // 0x481(0x07)
	struct UAnimMontage* CookingMontage; // 0x488(0x08)
	struct TArray<struct UAnimMontage*> PrepReattackMontages; // 0x490(0x10)
	struct FName ComboWindowMontageNotifyName; // 0x4a0(0x08)
	struct FName CollisionWindowMontageNotifyname; // 0x4a8(0x08)
	struct FName ImpactWindowMontageNotifyName; // 0x4b0(0x08)
	struct FName ReattackWindowMontageNotifyName; // 0x4b8(0x08)
	struct FName MoveToMeleeTargetNotifyName; // 0x4c0(0x08)
	struct FName AttackMontagesName; // 0x4c8(0x08)
	struct FName ImpactMontagesName; // 0x4d0(0x08)
	struct FName CalculateMeleeTargetTraceName; // 0x4d8(0x08)
	struct FName MeleeHitValidationTraceCheckName; // 0x4e0(0x08)
	struct FName CollisionMeshTag; // 0x4e8(0x08)
	enum class EMeleeCollisionMode CollisionMode; // 0x4f0(0x01)
	bool bRequiresClearTraceCheck; // 0x4f1(0x01)
	enum class ECollisionChannel ClearTraceChannel; // 0x4f2(0x01)
	char pad_4F3[0x1]; // 0x4f3(0x01)
	struct FCollisionProfileName ImpactSweepCollisionProfile; // 0x4f4(0x08)
	struct FGameplayTag ImpactCue; // 0x4fc(0x08)
	char pad_504[0x4]; // 0x504(0x04)
	struct UAkAudioEvent* MeleeSwipeSound; // 0x508(0x08)
	struct UAkAudioEvent* MeleeHitSound; // 0x510(0x08)
	struct FGameplayTag AppliedTag; // 0x518(0x08)
	struct FGameplayTagContainer BlockingTags; // 0x520(0x20)
	struct FGameplayTagContainer SkipCookingTags; // 0x540(0x20)
	struct FGameplayTagQuery CancelTagsQuery; // 0x560(0x48)
	bool bReactivateIfInputHeld; // 0x5a8(0x01)
	char pad_5A9[0x3]; // 0x5a9(0x03)
	float ServerVolumePadding; // 0x5ac(0x04)
	struct TArray<struct UGameplayEffect*> CookingEffects; // 0x5b0(0x10)
	struct TArray<struct UGameplayEffect*> ApplyEffectsToSelf; // 0x5c0(0x10)
	struct TArray<struct UGameplayEffect*> ApplyEffects; // 0x5d0(0x10)
	struct AGobiReticle* MeleeTargetClass; // 0x5e0(0x08)
	struct AGobiReticle* MeleeTargetLockedOnClass; // 0x5e8(0x08)
	bool bSetReticleRadiusToImpactRadius; // 0x5f0(0x01)
	char pad_5F1[0x3]; // 0x5f1(0x03)
	struct FMeleeTuning MeleeTuning; // 0x5f4(0x44)

	void OnStopMelee__DelegateSignature(struct UMeleeComponent* MeleeComponent); // DelegateFunction Gobi.MeleeComponent.OnStopMelee__DelegateSignature // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MeleeGameCoachLesson
// Size: 0x4b0 (Inherited: 0x488)
struct UMeleeGameCoachLesson : UGobiGameCoachLesson {
	struct UGameplayContext_NearbyCharacters* NearbyCharactersContext; // 0x488(0x08)
	char pad_490[0x20]; // 0x490(0x20)

	void OnHitMarkerRequested(struct FHitMarkerInfo HitMarkerInfo); // Function Gobi.MeleeGameCoachLesson.OnHitMarkerRequested // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MeshApplicationTrait
// Size: 0x50 (Inherited: 0x30)
struct UMeshApplicationTrait : UTrait {
	struct TArray<struct FSkeletalMeshConfig> SkeletalMeshConfigs; // 0x30(0x10)
	struct TArray<struct FStaticMeshConfig> StaticMeshConfigs; // 0x40(0x10)
};

// Class Gobi.MeshMaterialParamSet
// Size: 0xf8 (Inherited: 0x38)
struct UMeshMaterialParamSet : UDataAsset {
	struct TArray<struct FName> SlotNames; // 0x38(0x10)
	struct FGameplayTagQuery TagRequirements; // 0x48(0x48)
	struct TArray<struct FMeshMaterialParamValuesSet> ParamValuesSet; // 0x90(0x10)
	char pad_A0[0x58]; // 0xa0(0x58)
};

// Class Gobi.MeshMaterialParamsTrait
// Size: 0x38 (Inherited: 0x30)
struct UMeshMaterialParamsTrait : UTrait {
	struct UMeshMaterialParamSet* MaterialParamSet; // 0x30(0x08)
};

// Class Gobi.MeshMaterialSwapTrait
// Size: 0x40 (Inherited: 0x30)
struct UMeshMaterialSwapTrait : UTrait {
	struct TArray<struct FMeshMaterialConfig> Configs; // 0x30(0x10)
};

// Class Gobi.MessagePopupButtonUserWidget
// Size: 0x2f0 (Inherited: 0x2d8)
struct UMessagePopupButtonUserWidget : UUserWidget {
	char pad_2D8[0x18]; // 0x2d8(0x18)

	void SetData(struct FText InText, struct FName InCommand); // Function Gobi.MessagePopupButtonUserWidget.SetData // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MessagePopupUserWidget
// Size: 0x4b8 (Inherited: 0x470)
struct UMessagePopupUserWidget : UPopupUserWidget {
	char pad_470[0x20]; // 0x470(0x20)
	struct TSoftClassPtr<UObject> ButtonClass; // 0x490(0x28)

	void SetText(struct FText Title, struct FText Message); // Function Gobi.MessagePopupUserWidget.SetText // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MicroManagerSubsystem
// Size: 0x1d0 (Inherited: 0x38)
struct UMicroManagerSubsystem : UWorldSubsystem {
	struct TMap<struct UMicroManager*, struct UMicroManager*> ManagerMap; // 0x38(0x50)
	char pad_88[0x148]; // 0x88(0x148)

	void OnMatchStateChanged(struct FName MatchState, bool bPre); // Function Gobi.MicroManagerSubsystem.OnMatchStateChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MicroManagerDefaultsAsset
// Size: 0x48 (Inherited: 0x38)
struct UMicroManagerDefaultsAsset : UDataAsset {
	struct TArray<struct FMicroManagerDefault> Defaults; // 0x38(0x10)
};

// Class Gobi.MicroManagerDefaults
// Size: 0x2a8 (Inherited: 0x250)
struct AMicroManagerDefaults : AActor {
	struct UMicroManagerDefaultsAsset* MicroManagerDefaults; // 0x250(0x08)
	char pad_258[0x50]; // 0x258(0x50)

	void ApplyDefaults(enum class EMissionDifficulty Difficulty); // Function Gobi.MicroManagerDefaults.ApplyDefaults // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MindControlComponent
// Size: 0x238 (Inherited: 0xd8)
struct UMindControlComponent : UActorComponent {
	struct AGobiCharacter* AttachedHeroTargetReplicated; // 0xd8(0x08)
	char pad_E0[0x8]; // 0xe0(0x08)
	bool bKillOnTick; // 0xe8(0x01)
	char pad_E9[0x5f]; // 0xe9(0x5f)
	struct FGameplayTag TgtToMCAIAttachPrimitiveComponentTag; // 0x148(0x08)
	struct FName TgtToMCAIAttachPoint; // 0x150(0x08)
	struct FVector TgtToMCAIAttachRelativeLocation; // 0x158(0x0c)
	struct FRotator TgtToMCAIAttachRelativeRotation; // 0x164(0x0c)
	struct FGameplayTag TgtAttachMeshTag; // 0x170(0x08)
	struct FName MCAIToTgtAttachPoint; // 0x178(0x08)
	struct FGameplayTagContainer InterruptDmgTypeTags; // 0x180(0x20)
	int32_t InterruptDmgAttempts; // 0x1a0(0x04)
	struct FGameplayTag NoApplyDmgTag; // 0x1a4(0x08)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct TArray<struct UGameplayEffect*> ApplyEffectsToTarget; // 0x1b0(0x10)
	struct FGameplayTagContainer BlockingTargetTags; // 0x1c0(0x20)
	struct FGameplayTagContainer CancelBlockingTargetTags; // 0x1e0(0x20)
	struct TArray<struct UGameplayEffect*> ApplyInstigatorEffects; // 0x200(0x10)
	struct UGameplayEffect* ApplyInstigatorEffectOnEnd; // 0x210(0x08)
	float MaxDurationAfterSrcDies; // 0x218(0x04)
	char pad_21C[0x4]; // 0x21c(0x04)
	struct UParticleSystem* DeathPSTemplate; // 0x220(0x08)
	struct FVector DeathPSRelativeLocation; // 0x228(0x0c)
	char pad_234[0x4]; // 0x234(0x04)

	void OnUnpossessed(struct AGobiCharacter* GobiCharacter); // Function Gobi.MindControlComponent.OnUnpossessed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SphereProjectile
// Size: 0x608 (Inherited: 0x600)
struct ASphereProjectile : ABaseProjectile {
	struct USphereComponent* CollisionComponent; // 0x600(0x08)
};

// Class Gobi.MindControlProjectile
// Size: 0x698 (Inherited: 0x608)
struct AMindControlProjectile : ASphereProjectile {
	struct USphereComponent* BumpCollisionComponent; // 0x608(0x08)
	struct FMulticastInlineDelegate OnHit; // 0x610(0x10)
	struct UHealthComponent* Health; // 0x620(0x08)
	struct AActor* MoveToTarget; // 0x628(0x08)
	struct FMulticastInlineDelegate OnMiss; // 0x630(0x10)
	struct AGobiCharacter* MCAI_Class; // 0x640(0x08)
	struct UParticleSystem* MissPSTemplate; // 0x648(0x08)
	struct UGameplayEffect* CooldownEffectOnSuccess; // 0x650(0x08)
	struct UGameplayEffect* CooldownEffectOnFailed; // 0x658(0x08)
	struct FGameplayTagContainer BlockingTargetTags; // 0x660(0x20)
	struct UGobiDamageType* DamageTypeToFriendlies; // 0x680(0x08)
	char pad_688[0x10]; // 0x688(0x10)

	void OnDestroyedCallback(struct AActor* Actor); // Function Gobi.MindControlProjectile.OnDestroyedCallback // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MiniCardUserWidget
// Size: 0x450 (Inherited: 0x450)
struct UMiniCardUserWidget : UGobiUserWidget {

	void SetCard(struct FDataTableRowHandle CardRowHandle, int32_t Count); // Function Gobi.MiniCardUserWidget.SetCard // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MissionLaunchPanelUserWidget
// Size: 0x450 (Inherited: 0x450)
struct UMissionLaunchPanelUserWidget : UGobiUserWidget {

	void SetPlayerSlotAt(struct APlayerSlot* PlayerSlot, int32_t Index); // Function Gobi.MissionLaunchPanelUserWidget.SetPlayerSlotAt // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MissionLoadoutScreen
// Size: 0x530 (Inherited: 0x530)
struct UMissionLoadoutScreen : UUIScreen {

	void HandleSubScreenClosed(); // Function Gobi.MissionLoadoutScreen.HandleSubScreenClosed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MissionManager
// Size: 0x430 (Inherited: 0xd8)
struct UMissionManager : UActorComponent {
	struct FMulticastInlineDelegate OnMissionStartServer; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnMissionEndServer; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnStartObjectiveServer; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnObjectiveCountChangedServer; // 0x108(0x10)
	struct FMulticastInlineDelegate OnEndObjectiveServer; // 0x118(0x10)
	struct FMulticastInlineDelegate OnServerMissionChangedClient; // 0x128(0x10)
	char pad_138[0x20]; // 0x138(0x20)
	struct FMulticastInlineDelegate OnMissionSublevelsLoadedServer; // 0x158(0x10)
	char pad_168[0x8]; // 0x168(0x08)
	struct TArray<struct APlayerState*> PlayersAwaitingServerMission; // 0x170(0x10)
	struct TArray<struct APlayerState*> PlayersAwaitingTeam; // 0x180(0x10)
	char pad_190[0x8]; // 0x190(0x08)
	struct TArray<struct UDataTable*> ChapterDataTables; // 0x198(0x10)
	struct TArray<struct UDataTable*> MissionDataTables; // 0x1a8(0x10)
	struct TArray<struct UDataTable*> ObjectiveDataTables; // 0x1b8(0x10)
	char pad_1C8[0x1c0]; // 0x1c8(0x1c0)
	struct TSet<struct FDataTableRowHandle> ActiveMissions; // 0x388(0x50)
	struct TArray<struct FPlayerLiveMissionData> PlayerLiveMissionDataArray; // 0x3d8(0x10)
	struct TArray<int32_t> LiveObjectiveTimersReplicated; // 0x3e8(0x10)
	struct TArray<struct FObjectiveTimerData> LiveObjectiveTimers; // 0x3f8(0x10)
	struct FDataTableRowHandle ServerMissionRowHandle; // 0x408(0x20)
	char pad_428[0x8]; // 0x428(0x08)

	void SetTimerPaused(struct APlayerState* PlayerState, struct FDataTableRowHandle ObjectiveHandle, bool bPaused); // Function Gobi.MissionManager.SetTimerPaused // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MissionOverviewFooterUserWidget
// Size: 0x460 (Inherited: 0x450)
struct UMissionOverviewFooterUserWidget : UGobiUserWidget {
	struct UMissionOverviewMapChainUserWidget* MapChainUserWidget; // 0x450(0x08)
	char pad_458[0x8]; // 0x458(0x08)

	void ConstructMapChains(); // Function Gobi.MissionOverviewFooterUserWidget.ConstructMapChains // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MissionOverviewMapChainUserWidget
// Size: 0x470 (Inherited: 0x450)
struct UMissionOverviewMapChainUserWidget : UGobiUserWidget {
	struct UMissionOverviewMapPipUserWidget* PipUserWidget; // 0x450(0x08)
	struct UUserWidget* SubChainSpacerUserWidget; // 0x458(0x08)
	char pad_460[0x10]; // 0x460(0x10)
};

// Class Gobi.MissionOverviewMapPipUserWidget
// Size: 0x500 (Inherited: 0x450)
struct UMissionOverviewMapPipUserWidget : UGobiUserWidget {
	struct FSlateColor PastTint; // 0x450(0x30)
	struct FSlateColor CurrentTint; // 0x480(0x30)
	struct FSlateColor FutureTint; // 0x4b0(0x30)
	struct UTexture2D* PastImage; // 0x4e0(0x08)
	struct UTexture2D* CurrentImage; // 0x4e8(0x08)
	struct UTexture2D* FutureImage; // 0x4f0(0x08)
	char pad_4F8[0x8]; // 0x4f8(0x08)
};

// Class Gobi.MissionOverviewPvPRoundUserWidget
// Size: 0x450 (Inherited: 0x450)
struct UMissionOverviewPvPRoundUserWidget : UGobiUserWidget {

	void OnRoundInfo(int32_t NumRounds, int32_t CurrentRound); // Function Gobi.MissionOverviewPvPRoundUserWidget.OnRoundInfo // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MissionOverviewScreen
// Size: 0x580 (Inherited: 0x530)
struct UMissionOverviewScreen : UUIScreen {
	struct TSoftObjectPtr<UTexture2D> FallbackImage; // 0x530(0x28)
	struct UDataTable* TipTable; // 0x558(0x08)
	char pad_560[0x20]; // 0x560(0x20)
};

// Class Gobi.MissionOverviewTeamUserWidget
// Size: 0x458 (Inherited: 0x450)
struct UMissionOverviewTeamUserWidget : UGobiUserWidget {
	bool bEnemyTeam; // 0x450(0x01)
	enum class EMatchmakingTeam WidgetMatchmakingTeam; // 0x451(0x01)
	char pad_452[0x2]; // 0x452(0x02)
	int32_t TeamScore; // 0x454(0x04)

	void SetEnemyTeam(bool InEnemyTeam); // Function Gobi.MissionOverviewTeamUserWidget.SetEnemyTeam // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MissionsCompletedAchievement
// Size: 0xe8 (Inherited: 0xb8)
struct UMissionsCompletedAchievement : UAchievement {
	struct TArray<struct FDataTableRowHandle> Maps; // 0xb8(0x10)
	struct TArray<enum class EMissionDifficulty> Difficulties; // 0xc8(0x10)
	char pad_D8[0x10]; // 0xd8(0x10)
};

// Class Gobi.ModifyViewComponent
// Size: 0x1a8 (Inherited: 0x120)
struct UModifyViewComponent : UMovementTickableComponent {
	char pad_120[0x8]; // 0x120(0x08)
	struct FCameraViewModifier ViewModifier; // 0x128(0x38)
	struct FGameplayTagQuery RequiredTags; // 0x160(0x48)
};

// Class Gobi.MolotovFlame
// Size: 0x278 (Inherited: 0x250)
struct AMolotovFlame : AActor {
	struct UParticleSystemComponent* ParticleSystemComponent; // 0x250(0x08)
	struct FVector AudioSourceOffset; // 0x258(0x0c)
	float AudioInitialDelay; // 0x264(0x04)
	struct UAkAudioEvent* FireStartLoopSound; // 0x268(0x08)
	struct UAkAudioEvent* FireStopLoopSound; // 0x270(0x08)
};

// Class Gobi.MolotovGrowthComponent
// Size: 0x1a8 (Inherited: 0xd8)
struct UMolotovGrowthComponent : UActorComponent {
	struct FMulticastInlineDelegate AllSequencesComplete; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnFlamesStopped; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnSequenceComplete; // 0xf8(0x10)
	struct AMolotovFlame* ActorToSpawn; // 0x108(0x08)
	struct FCollisionProfileName TraceProfileName; // 0x110(0x08)
	struct FVector LaunchPositionOffset; // 0x118(0x0c)
	char MaxLaunchesPerFrame; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	float AdditionalDelayForEachChildStep; // 0x128(0x04)
	float LaunchStepHeight; // 0x12c(0x04)
	float MaxFlameDistanceFromGround; // 0x130(0x04)
	bool bUseInitialLaunchDirForAllLaunches; // 0x134(0x01)
	char pad_135[0x3]; // 0x135(0x03)
	struct FLaunchConfig ForwardLaunchConfig; // 0x138(0x14)
	bool bLaunchInReverseDirection; // 0x14c(0x01)
	char pad_14D[0x3]; // 0x14d(0x03)
	struct FLaunchConfig ReverseLaunchConfig; // 0x150(0x14)
	float MaxLifetime; // 0x164(0x04)
	bool bAlignFlamesToSurface; // 0x168(0x01)
	char pad_169[0x2f]; // 0x169(0x2f)
	struct TArray<struct AMolotovFlame*> SpawnedActors; // 0x198(0x10)

	void SetInitialLaunchDirection(struct FVector InFavoredDirection); // Function Gobi.MolotovGrowthComponent.SetInitialLaunchDirection // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MolotovProjectile
// Size: 0x6d8 (Inherited: 0x608)
struct AMolotovProjectile : ACapsuleProjectile {
	float MaxExplodeAngleDegrees; // 0x608(0x04)
	int32_t MaximumBounces; // 0x60c(0x04)
	float AcceptableCharacterImpactZOffset; // 0x610(0x04)
	char pad_614[0x4]; // 0x614(0x04)
	struct TArray<struct UGameplayEffect*> AboveImpactZOffsetEffects; // 0x618(0x10)
	struct FGameplayTagQuery CharacterTagQueryToAllowAOE; // 0x628(0x48)
	struct FGameplayEffectsEmitterTestConfig AOEGameplayEffects; // 0x670(0x50)
	struct AActor* InitialFlameToSpawn; // 0x6c0(0x08)
	struct UAkAudioEvent* BounceAudioEvent; // 0x6c8(0x08)
	char pad_6D0[0x4]; // 0x6d0(0x04)
	int32_t NumberOfBouncesAccrued; // 0x6d4(0x04)

	void OnRep_NumberOfBouncesAccrued(); // Function Gobi.MolotovProjectile.OnRep_NumberOfBouncesAccrued // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MontageSet
// Size: 0x50 (Inherited: 0x38)
struct UMontageSet : UDataAsset {
	struct UGameplayEvaluatorSet* FilterSet; // 0x38(0x08)
	struct TArray<struct UAnimMontage*> Montages; // 0x40(0x10)
};

// Class Gobi.MOTDPopupUserWidget
// Size: 0x4a8 (Inherited: 0x470)
struct UMOTDPopupUserWidget : UPopupUserWidget {
	float ButtonDelayTime; // 0x470(0x04)
	char pad_474[0x34]; // 0x474(0x34)

	void UpdateDeepLinkButton(int32_t TabIndex); // Function Gobi.MOTDPopupUserWidget.UpdateDeepLinkButton // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MOTDTiledTabUserWidget
// Size: 0x480 (Inherited: 0x470)
struct UMOTDTiledTabUserWidget : UPopupUserWidget {
	char pad_470[0x10]; // 0x470(0x10)

	void InitLayout(struct FMOTDTiledLayout TiledLayout); // Function Gobi.MOTDTiledTabUserWidget.InitLayout // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MountedGunAnimInstance
// Size: 0x2e0 (Inherited: 0x2c0)
struct UMountedGunAnimInstance : UAnimInstance {
	struct FRotator DesiredRotation; // 0x2b8(0x0c)
	float DesiredBarrelRotation; // 0x2c4(0x04)
	float BarrelRotationRate; // 0x2c8(0x04)
	float BarrelRotationFalloffRate; // 0x2cc(0x04)
	float GunRotationInterpSpeed; // 0x2d0(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
};

// Class Gobi.MountedWeaponComponent
// Size: 0x1e0 (Inherited: 0xd8)
struct UMountedWeaponComponent : UActorComponent {
	struct FDataTableRowHandle MountedWeaponItemHandle; // 0xd8(0x20)
	struct FGameplayTag RotatedComponentTag; // 0xf8(0x08)
	struct FGameplayTag AttachComponentGameplayTag; // 0x100(0x08)
	struct FName AttachComponentBoneName; // 0x108(0x08)
	struct FVector AttachmentRelativeLocation; // 0x110(0x0c)
	struct FRotator AttachmentRelativeRotation; // 0x11c(0x0c)
	bool bTeleportToPreMountLocation; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	struct FVector2D ViewPitchClampRange; // 0x12c(0x08)
	struct FVector2D ViewYawClampRange; // 0x134(0x08)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct FMulticastInlineDelegate OnWeaponMounted; // 0x140(0x10)
	struct FMulticastInlineDelegate OnWeaponDismounted; // 0x150(0x10)
	float RemoteViewYaw; // 0x160(0x04)
	char pad_164[0x7c]; // 0x164(0x7c)

	void OnControllingPawnUnPossessed(struct AGobiCharacter* GobiChar); // Function Gobi.MountedWeaponComponent.OnControllingPawnUnPossessed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MountedWeaponInteractComponent
// Size: 0x188 (Inherited: 0xd8)
struct UMountedWeaponInteractComponent : UActorComponent {
	struct FGameplayTagQuery ValidMountQuery; // 0xd8(0x48)
	struct TArray<struct UGameplayEffect*> EffectsToApplyOnMount; // 0x120(0x10)
	struct AActor* CurrentMountedWeapon; // 0x130(0x08)
	struct UMountedWeaponComponent* MountedWeaponComponent; // 0x138(0x08)
	char pad_140[0x48]; // 0x140(0x48)

	void SetAllowDismount(bool bNewAllowDismount); // Function Gobi.MountedWeaponInteractComponent.SetAllowDismount // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MoveIgnoreActorsComponent
// Size: 0x140 (Inherited: 0x120)
struct UMoveIgnoreActorsComponent : UMovementTickableComponent {
	float OverlapPadding; // 0x120(0x04)
	char pad_124[0x1c]; // 0x124(0x1c)
};

// Class Gobi.MultiplayerFeaturesSubsystem
// Size: 0x50 (Inherited: 0x38)
struct UMultiplayerFeaturesSubsystem : UGameInstanceSubsystem {
	char pad_38[0x18]; // 0x38(0x18)
};

// Class Gobi.MutilationHitReactionSet
// Size: 0x50 (Inherited: 0x38)
struct UMutilationHitReactionSet : UDataAsset {
	struct UGameplayEvaluatorSet* FilterSet; // 0x38(0x08)
	struct TArray<struct FMutilationHitReaction> HitReactions; // 0x40(0x10)
};

// Class Gobi.MutilationHitReactionConfig
// Size: 0x48 (Inherited: 0x38)
struct UMutilationHitReactionConfig : UDataAsset {
	struct TArray<struct UMutilationHitReactionSet*> HitReactionSets; // 0x38(0x10)
};

// Class Gobi.MutilationComponent
// Size: 0x250 (Inherited: 0xd8)
struct UMutilationComponent : UActorComponent {
	struct FMulticastInlineDelegate OnMutilated; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnExploded; // 0xe8(0x10)
	struct UMutilationConfig* Config; // 0xf8(0x08)
	struct UMutilationWoundConfigData* WoundConfigsData; // 0x100(0x08)
	struct UMutilationHitReactionConfig* HitReactionsData; // 0x108(0x08)
	int32_t MaxRuptureWounds; // 0x110(0x04)
	int32_t MaxWounds; // 0x114(0x04)
	char pad_118[0x68]; // 0x118(0x68)
	struct TArray<struct FMutilationInfo> MutilationState; // 0x180(0x10)
	struct FExplodeInfo ExplodeState; // 0x190(0x38)
	char pad_1C8[0x58]; // 0x1c8(0x58)
	struct TArray<struct FDismembermentMeshPiece> DismembermentMeshPieces; // 0x220(0x10)
	char pad_230[0x20]; // 0x230(0x20)

	void OnRep_MutilationState(); // Function Gobi.MutilationComponent.OnRep_MutilationState // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.MutilationSubsystem
// Size: 0xc0 (Inherited: 0x38)
struct UMutilationSubsystem : UWorldSubsystem {
	char pad_38[0x88]; // 0x38(0x88)
};

// Class Gobi.MutilationConfig
// Size: 0xa0 (Inherited: 0x38)
struct UMutilationConfig : UDataAsset {
	struct TMap<enum class EMutilationRegion, struct FMutilationPieceConfig> Pieces; // 0x38(0x50)
	bool bSkelPiecesCanStopTicking; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	int32_t ExplodeRegions; // 0x8c(0x04)
	struct AActor* DismemberedPieceSkelMeshActor; // 0x90(0x08)
	struct AActor* DismemberedPieceStaticMeshActor; // 0x98(0x08)
};

// Class Gobi.MutilationWoundConfigData
// Size: 0x48 (Inherited: 0x38)
struct UMutilationWoundConfigData : UDataAsset {
	struct TArray<struct FMutilationWoundsConfig> Configs; // 0x38(0x10)
};

// Class Gobi.MuxySubsystem
// Size: 0x88 (Inherited: 0x38)
struct UMuxySubsystem : UGameInstanceSubsystem {
	char pad_38[0x50]; // 0x38(0x50)

	void MuxyAddCard(struct AGobiPlayerState* PlayerState); // Function Gobi.MuxySubsystem.MuxyAddCard // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.NameChangerPopupUserWidget
// Size: 0x4a0 (Inherited: 0x470)
struct UNameChangerPopupUserWidget : UPopupUserWidget {
	char pad_470[0x30]; // 0x470(0x30)

	void HandleContinueClicked(struct UGobiUserWidget* Widget); // Function Gobi.NameChangerPopupUserWidget.HandleContinueClicked // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.NameplateManagerUserWidget
// Size: 0x4a8 (Inherited: 0x450)
struct UNameplateManagerUserWidget : UGobiUserWidget {
	float ADSOpacity; // 0x450(0x04)
	float IncapOffset; // 0x454(0x04)
	struct TMap<struct TWeakObjectPtr<struct APlayerSlot>, struct UNameplateUserWidget*> Nameplates; // 0x458(0x50)

	void OnSlotsUpdated(); // Function Gobi.NameplateManagerUserWidget.OnSlotsUpdated // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.NameplateUserWidget
// Size: 0x458 (Inherited: 0x450)
struct UNameplateUserWidget : UGobiUserWidget {
	char pad_450[0x8]; // 0x450(0x08)

	void UpdateGameCoachText(); // Function Gobi.NameplateUserWidget.UpdateGameCoachText // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.NavAgentLocationComponent
// Size: 0xe8 (Inherited: 0xd8)
struct UNavAgentLocationComponent : UActorComponent {
	float TestForFloorDistance; // 0xd8(0x04)
	char pad_DC[0xc]; // 0xdc(0x0c)
};

// Class Gobi.NavArea_Jump
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_Jump : UNavArea {
};

// Class Gobi.NavArea_Jump_Vista
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_Jump_Vista : UNavArea_Jump {
};

// Class Gobi.NavArea_JumpAcross
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_JumpAcross : UNavArea_Jump {
};

// Class Gobi.NavArea_Door
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_Door : UNavArea {
};

// Class Gobi.NavArea_DoorDisabled
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_DoorDisabled : UNavArea_Door {
};

// Class Gobi.NavArea_Ladder
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_Ladder : UNavArea {
};

// Class Gobi.NavArea_Ground
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_Ground : UNavArea {
};

// Class Gobi.NavArea_OutOfBounds
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_OutOfBounds : UNavArea_Ground {
};

// Class Gobi.NavArea_Fire
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_Fire : UNavArea {
};

// Class Gobi.NavArea_Climb
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_Climb : UNavArea {
};

// Class Gobi.NavArea_Climb_Vista
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_Climb_Vista : UNavArea_Climb {
};

// Class Gobi.NavArea_ClimbUpAndOver
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_ClimbUpAndOver : UNavArea {
};

// Class Gobi.NavArea_ClimbUpAndOver_Vista
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_ClimbUpAndOver_Vista : UNavArea_ClimbUpAndOver {
};

// Class Gobi.NavArea_ClimbHigh
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_ClimbHigh : UNavArea_Climb {
};

// Class Gobi.NavArea_ClimbHigh_Vista
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_ClimbHigh_Vista : UNavArea_ClimbHigh {
};

// Class Gobi.NavArea_ClimbUpAndOverHigh
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_ClimbUpAndOverHigh : UNavArea_ClimbUpAndOver {
};

// Class Gobi.NavArea_ClimbUpAndOverHigh_Vista
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_ClimbUpAndOverHigh_Vista : UNavArea_ClimbUpAndOverHigh {
};

// Class Gobi.NavArea_Fall
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_Fall : UNavArea {
};

// Class Gobi.NavArea_Fall_Vista
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_Fall_Vista : UNavArea_Fall {
};

// Class Gobi.NavArea_ClimbWithRail
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_ClimbWithRail : UNavArea_Climb {
};

// Class Gobi.NavArea_Choke
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_Choke : UNavArea {
};

// Class Gobi.NavArea_Crawl
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_Crawl : UNavArea {
};

// Class Gobi.NavArea_Crawl_Vista
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_Crawl_Vista : UNavArea_Crawl {
};

// Class Gobi.NavArea_TinyCrawl
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_TinyCrawl : UNavArea_Crawl {
};

// Class Gobi.NavArea_BruteObstacle
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_BruteObstacle : UNavArea_Obstacle {
};

// Class Gobi.NavArea_Destructible
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_Destructible : UNavArea {
};

// Class Gobi.NavArea_DestructibleLink
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_DestructibleLink : UNavArea_Destructible {
};

// Class Gobi.NavArea_Crouch
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_Crouch : UNavArea {
};

// Class Gobi.NavArea_Crouch_Vista
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_Crouch_Vista : UNavArea_Crouch {
};

// Class Gobi.NavArea_Fence
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_Fence : UNavArea_Climb {
};

// Class Gobi.NavArea_Mantle
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_Mantle : UNavArea_Climb {
};

// Class Gobi.NavArea_Disabled
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_Disabled : UNavArea {
};

// Class Gobi.NavArea_DisabledNoBrute
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_DisabledNoBrute : UNavArea_Disabled {
};

// Class Gobi.NavArea_Invalid
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_Invalid : UNavArea_Disabled {
};

// Class Gobi.NavArea_GobiDefault
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_GobiDefault : UNavArea {
};

// Class Gobi.NavArea_GobiDefaultNoBrute
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_GobiDefaultNoBrute : UNavArea_GobiDefault {
};

// Class Gobi.NavArea_GobiDefault2
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_GobiDefault2 : UNavArea_GobiDefault {
};

// Class Gobi.NavArea_GobiDefaultHighCost
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_GobiDefaultHighCost : UNavArea_GobiDefault {
};

// Class Gobi.NavArea_Objective
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_Objective : UNavArea_Disabled {
};

// Class Gobi.NavArea_Unreachable
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_Unreachable : UNavArea_Disabled {
};

// Class Gobi.NavInterface
// Size: 0x30 (Inherited: 0x30)
struct UNavInterface : UInterface {
};

// Class Gobi.NavLocationComponent
// Size: 0x510 (Inherited: 0x4a0)
struct UNavLocationComponent : UPrimitiveComponent {
	char pad_4A0[0x8]; // 0x4a0(0x08)
	struct FVector NavmeshQueryExtent; // 0x4a8(0x0c)
	char pad_4B4[0x5c]; // 0x4b4(0x5c)

	void OnNavDataRegistered(struct ANavigationData* NavData); // Function Gobi.NavLocationComponent.OnNavDataRegistered // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlacementComponent
// Size: 0x158 (Inherited: 0xd8)
struct UPlacementComponent : UActorComponent {
	char pad_D8[0x8]; // 0xd8(0x08)
	struct AActor* ActorClass; // 0xe0(0x08)
	enum class EProceduralBuildPhase ProceduralPhase; // 0xe8(0x01)
	bool bGenerateRandomSeed; // 0xe9(0x01)
	char pad_EA[0x2]; // 0xea(0x02)
	int32_t RandomSeed; // 0xec(0x04)
	enum class EPlacementOffsetMode OffsetMode; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	struct FVector Translation; // 0xf4(0x0c)
	struct FRotator Rotation; // 0x100(0x0c)
	struct FVector MinTranslation; // 0x10c(0x0c)
	struct FVector MaxTranslation; // 0x118(0x0c)
	struct FRotator MinRotation; // 0x124(0x0c)
	struct FRotator MaxRotation; // 0x130(0x0c)
	char pad_13C[0x1c]; // 0x13c(0x1c)
};

// Class Gobi.NavMeshBasedPlacementComp
// Size: 0x180 (Inherited: 0x158)
struct UNavMeshBasedPlacementComp : UPlacementComponent {
	struct FGameplayTag ShapeCompTag; // 0x158(0x08)
	struct FGameplayTag ExclusionShapeCompTag; // 0x160(0x08)
	struct FNavAgentSelector SupportedNavmesh; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct UNavigationQueryFilter* QueryFilter; // 0x170(0x08)
	float SeparationDistance; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
};

// Class Gobi.NavReachabilitySeed
// Size: 0x250 (Inherited: 0x250)
struct ANavReachabilitySeed : AActor {
};

// Class Gobi.NavRedirectorComponent
// Size: 0xf0 (Inherited: 0xd8)
struct UNavRedirectorComponent : UActorComponent {
	struct UGobiNavLinkComponent* NavLink; // 0xd8(0x08)
	struct UGobiNavModifierComponent* NavMod; // 0xe0(0x08)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class Gobi.NestBoilComponent
// Size: 0x178 (Inherited: 0x170)
struct UNestBoilComponent : UClusterBoilComponent {
	struct UAkAudioEvent* DamageSound; // 0x170(0x08)

	void NestBoilTakeDamage(struct FDamageInfo DamageInfo); // Function Gobi.NestBoilComponent.NestBoilTakeDamage // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ScenarioManagerMod
// Size: 0x98 (Inherited: 0x88)
struct UScenarioManagerMod : UGameplayMod {
	int32_t MinNumToEnabledAdjustment; // 0x88(0x04)
	int32_t MaxNumToEnabledAdjustment; // 0x8c(0x04)
	struct FGameplayTag ScenarioManagerModTag; // 0x90(0x08)
};

// Class Gobi.NestMod
// Size: 0xa0 (Inherited: 0x98)
struct UNestMod : UScenarioManagerMod {
	int32_t NumPodsAdjustment; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class Gobi.NestsComponent
// Size: 0x540 (Inherited: 0xd8)
struct UNestsComponent : UActorComponent {
	bool bHasFinishedSetup; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct TArray<struct FClusterBoils> HiddenNestClusterBoils; // 0xe0(0x10)
	bool bIsNestDead; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct TArray<struct FClusterBoils> VisibleNestClusterBoils; // 0xf8(0x10)
	int32_t HordeTriggeredCount; // 0x108(0x04)
	char pad_10C[0x24]; // 0x10c(0x24)
	struct AActor* WaypointLessonActorClass; // 0x130(0x08)
	float WaypointLessonActorZoffset; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct TArray<struct AActor*> SpawnedBoils; // 0x140(0x10)
	struct FMulticastInlineDelegate OnBoilShrink; // 0x150(0x10)
	struct FMulticastInlineDelegate OnClusterDestroyed; // 0x160(0x10)
	struct FMulticastInlineDelegate OnNestDestroyed; // 0x170(0x10)
	struct FMulticastInlineDelegate OnPlayedCards; // 0x180(0x10)
	bool bAllowScenarioToAffectNest; // 0x190(0x01)
	bool bClusterDeathDropsLoot; // 0x191(0x01)
	bool bClusterDeathAddsCards; // 0x192(0x01)
	bool bNestDeathDropsLoot; // 0x193(0x01)
	bool bNestDeathAddsCards; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
	struct AActor* BoilsToSpawn; // 0x198(0x08)
	struct AActor* NestBoilToSpawn; // 0x1a0(0x08)
	int32_t TotalOfClustersVisible; // 0x1a8(0x04)
	int32_t NumberOfClusterDestroyed; // 0x1ac(0x04)
	struct FGameplayTag ClusterTag; // 0x1b0(0x08)
	struct FGameplayTag NestBoilBaseTag; // 0x1b8(0x08)
	struct FGameplayTag NestBaseTag; // 0x1c0(0x08)
	int32_t NumberOfArmsforEasyDifficulty; // 0x1c8(0x04)
	int32_t NumberOfArmsforNormalDifficulty; // 0x1cc(0x04)
	int32_t NumberOfArmsforHardDifficulty; // 0x1d0(0x04)
	int32_t NumberOfArmsforLegendaryDifficulty; // 0x1d4(0x04)
	struct AAISpawnActorVolume* AISpawnActorVolume; // 0x1d8(0x08)
	struct TArray<struct AAISpawnActorVolume*> SpawnedAISpawnActorVolumes; // 0x1e0(0x10)
	struct FVector AISpawnActorVolumeScale; // 0x1f0(0x0c)
	struct FGameplayTag HordeBlockTag; // 0x1fc(0x08)
	char pad_204[0x4]; // 0x204(0x04)
	struct FGameplayTagContainer ClusterLootTag; // 0x208(0x20)
	struct FGameplayTagContainer DisallowedClusterLootTag; // 0x228(0x20)
	struct FGameplayTagContainer NestLootTag; // 0x248(0x20)
	struct FGameplayTagContainer DisallowedNestLootTag; // 0x268(0x20)
	struct USceneComponent* NestLootSpawn; // 0x288(0x08)
	struct FName NestLootSpawnTag; // 0x290(0x08)
	float ClusterTransformZOffset; // 0x298(0x04)
	float ClusterTransformZGroundOffset; // 0x29c(0x04)
	struct FVector NavBoundsExtents; // 0x2a0(0x0c)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct UParticleSystem* FliesParticle; // 0x2b0(0x08)
	float ClusterParticleOffset; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct UParticleSystem* ClusterExplodeParticle; // 0x2c0(0x08)
	struct UParticleSystem* NestPodExplosion; // 0x2c8(0x08)
	struct TArray<struct UAkComponent*> ClustersAkComponents; // 0x2d0(0x10)
	struct TArray<struct USplineComponent*> VisibleSplines; // 0x2e0(0x10)
	struct FName AKBasePodTag; // 0x2f0(0x08)
	struct FName AkTentacleTag; // 0x2f8(0x08)
	struct FName HordeRoarLocationTag; // 0x300(0x08)
	struct FName NearBasePodTag; // 0x308(0x08)
	struct UAkAudioEvent* NestIdleAudio; // 0x310(0x08)
	struct UAkAudioEvent* TentacleIdleAudio; // 0x318(0x08)
	struct UAkAudioEvent* TentacleIdleStopAudio; // 0x320(0x08)
	float TentacleLocationUpdateRate; // 0x328(0x04)
	char pad_32C[0x4]; // 0x32c(0x04)
	struct UAkAudioEvent* NestHurtAudio; // 0x330(0x08)
	struct UAkAudioEvent* ClusterDestroyedAudio; // 0x338(0x08)
	struct UAkAudioEvent* NestSmallIdleAudio; // 0x340(0x08)
	struct UAkAudioEvent* BoilsDestoryedAudio; // 0x348(0x08)
	struct UAkAudioEvent* BoilsShrinkAudioEvent; // 0x350(0x08)
	struct UAkAudioEvent* BoilsGrowAudioEvent; // 0x358(0x08)
	struct UAkAudioEvent* NestPodDeathAudioEvent; // 0x360(0x08)
	struct UAkAudioEvent* NestPodExplosionAudioEvent; // 0x368(0x08)
	float DialogueDelay; // 0x370(0x04)
	char pad_374[0x4]; // 0x374(0x04)
	struct FDataTableRowHandle LastClusterAliveDialogueTable; // 0x378(0x20)
	struct FDataTableRowHandle TwoClusterAliveDialogueTable; // 0x398(0x20)
	struct TArray<struct FDataTableRowHandle> ThreePlusClusterAliveDialogueTableArray; // 0x3b8(0x10)
	struct FDataTableRowHandle HordeDialogueTable; // 0x3c8(0x20)
	struct FGameplayTag HordeTag; // 0x3e8(0x08)
	struct FDataTableRowHandle NestDefeatedDialogueTable; // 0x3f0(0x20)
	struct FDataTableRowHandle NestEncounterDialogueTable; // 0x410(0x20)
	struct FDataTableRowHandle NestEncounterHint1DialogueTable; // 0x430(0x20)
	struct FDataTableRowHandle NestEncounterHint2DialogueTable; // 0x450(0x20)
	float Hint1CountdownTimer; // 0x470(0x04)
	float Hint2CountdownTimer; // 0x474(0x04)
	float ExcitationRadius; // 0x478(0x04)
	float SpeedOfPropagation; // 0x47c(0x04)
	float LifeSpanWhenDestroyed; // 0x480(0x04)
	char pad_484[0x4]; // 0x484(0x04)
	struct UAkComponent* AKBasePod; // 0x488(0x08)
	struct UAkComponent* AKTentacle; // 0x490(0x08)
	struct UBillboardComponent* HordeRoarLocation; // 0x498(0x08)
	struct UBoxComponent* NearBasePodBox; // 0x4a0(0x08)
	struct TArray<struct FDataTableRowHandle> ActiveCardsInPlay; // 0x4a8(0x10)
	struct TArray<struct FNestChallengeCards> EasyDifficultyCardsArray; // 0x4b8(0x10)
	struct TArray<struct FNestChallengeCards> NormalDifficultyCardsArray; // 0x4c8(0x10)
	struct TArray<struct FNestChallengeCards> HardDifficultyCardsArray; // 0x4d8(0x10)
	struct TArray<struct FNestChallengeCards> LegendaryDifficultyCardsArray; // 0x4e8(0x10)
	struct TArray<int32_t> NumOfCardDraws; // 0x4f8(0x10)
	struct FDifficultyInt ScenarioDifficultyCardDraw; // 0x508(0x14)
	char pad_51C[0x4]; // 0x51c(0x04)
	struct FString ClusterDestroyedText; // 0x520(0x10)
	struct FString NestDestroyedText; // 0x530(0x10)

	void OnWaitingToResetMatch(); // Function Gobi.NestsComponent.OnWaitingToResetMatch // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.NetworkHealthUserWidget
// Size: 0x458 (Inherited: 0x450)
struct UNetworkHealthUserWidget : UGobiUserWidget {
	char pad_450[0x8]; // 0x450(0x08)

	void HandleServerConnectionChanged(bool bServerProblem); // Function Gobi.NetworkHealthUserWidget.HandleServerConnectionChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.NonBlockingLoadingScreenSubsystem
// Size: 0x50 (Inherited: 0x38)
struct UNonBlockingLoadingScreenSubsystem : UGameInstanceSubsystem {
	char pad_38[0x18]; // 0x38(0x18)
};

// Class Gobi.NotificationBoxComponent
// Size: 0x4e0 (Inherited: 0x4d0)
struct UNotificationBoxComponent : UBoxComponent {
	struct TArray<struct FNotificationItem> Notifications; // 0x4c8(0x10)
	float FacingAngle; // 0x4d8(0x04)
};

// Class Gobi.NPCComponent
// Size: 0x110 (Inherited: 0xd8)
struct UNPCComponent : UActorComponent {
	float MaxHeroFocusDistance; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	float FocusTrackingUpdateRate; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct AGobiCharacter* NPCOwner; // 0xe8(0x08)
	char pad_F0[0x19]; // 0xf0(0x19)
	bool bCanFocusEnable; // 0x109(0x01)
	char pad_10A[0x6]; // 0x10a(0x06)

	void OnOwnerPossessed(struct AController* NewController); // Function Gobi.NPCComponent.OnOwnerPossessed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.NPCMissionComponent
// Size: 0xe8 (Inherited: 0xd8)
struct UNPCMissionComponent : UActorComponent {
	struct UDataTable* NPCMissionDataTable; // 0xd8(0x08)
	struct UDataTable* NPCObjectiveDataTable; // 0xe0(0x08)

	void OnSuccessfulUse(struct AActor* UsingActor); // Function Gobi.NPCMissionComponent.OnSuccessfulUse // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ObjectPoolSubsystem
// Size: 0x90 (Inherited: 0x38)
struct UObjectPoolSubsystem : UWorldSubsystem {
	struct TMap<struct UObject*, struct FClassPool> Pools; // 0x38(0x50)
	char pad_88[0x8]; // 0x88(0x08)
};

// Class Gobi.OmenSubsystem
// Size: 0x280 (Inherited: 0x38)
struct UOmenSubsystem : UWorldSubsystem {
	char pad_38[0x8]; // 0x38(0x08)
	struct TArray<struct UOmenConfigAsset*> Configs; // 0x40(0x10)
	char pad_50[0x230]; // 0x50(0x230)

	void RemoveOmen(struct UObject* WorldContextObject, struct AActor* Omen); // Function Gobi.OmenSubsystem.RemoveOmen // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.OmenConfigAsset
// Size: 0xd0 (Inherited: 0x38)
struct UOmenConfigAsset : UDataAsset {
	struct FGameplayTagQuery OmenQuery; // 0x38(0x48)
	float Range; // 0x80(0x04)
	enum class EStencilChannel HighlightChannel; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	struct FGameplayTag ScreenEffectTag; // 0x88(0x08)
	float ScreenEffectDuration; // 0x90(0x04)
	float ScreenEffectCooldown; // 0x94(0x04)
	struct FDataTableRowHandle Dialogue; // 0x98(0x20)
	float DialogueCooldown; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct TArray<struct FOmenConfig> Overrides; // 0xc0(0x10)
};

// Class Gobi.OmenConfigSetAsset
// Size: 0x48 (Inherited: 0x38)
struct UOmenConfigSetAsset : UDataAsset {
	struct TArray<struct UOmenConfigAsset*> OmenConfigs; // 0x38(0x10)
};

// Class Gobi.OnlineConfiguration
// Size: 0x98 (Inherited: 0x38)
struct UOnlineConfiguration : UGameInstanceSubsystem {
	char pad_38[0x60]; // 0x38(0x60)
};

// Class Gobi.OnlineFlow
// Size: 0x138 (Inherited: 0x30)
struct UOnlineFlow : UObject {
	char pad_30[0x30]; // 0x30(0x30)
	struct UMatchmaking* Matchmaking; // 0x60(0x08)
	char pad_68[0xc0]; // 0x68(0xc0)
	struct FMulticastInlineDelegate OnMatchmakingStateChanged; // 0x128(0x10)

	void OnPopupClosed(struct UPopupUserWidget* Popup, struct FName Command); // Function Gobi.OnlineFlow.OnPopupClosed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.OnlineSessions
// Size: 0x2e8 (Inherited: 0x30)
struct UOnlineSessions : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	struct FTaskTimerConfig TimerConfig; // 0x48(0x70)
	char pad_B8[0x230]; // 0xb8(0x230)

	bool IsInPartySession(); // Function Gobi.OnlineSessions.IsInPartySession // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.OnlineSettings
// Size: 0xa0 (Inherited: 0x88)
struct UOnlineSettings : UPlayerSettingsBase {
	char pad_88[0x10]; // 0x88(0x10)
	bool bPrivateCampaignLobbyEnabled; // 0x98(0x01)
	enum class EMatchmakingVoicePreference VoicePreference; // 0x99(0x01)
	bool bCrossPlayEnabled; // 0x9a(0x01)
	enum class EGroupInvitePrivacy GroupInvitePrivacy; // 0x9b(0x01)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class Gobi.OptionDefaultsDeveloperSettings
// Size: 0x80 (Inherited: 0x40)
struct UOptionDefaultsDeveloperSettings : UDeveloperSettings {
	float VoiceVolume; // 0x40(0x04)
	float MicBoost; // 0x44(0x04)
	float MicThreshold; // 0x48(0x04)
	bool bVOIPSideChainEnabled; // 0x4c(0x01)
	bool bSuppressAudioOnFocusLost; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	struct FName MixProfileName; // 0x50(0x08)
	struct TSoftObjectPtr<UDataTable> GPUSettingsTable; // 0x58(0x28)
};

// Class Gobi.OptionsBindingTextLabelUserWidget
// Size: 0x4c0 (Inherited: 0x450)
struct UOptionsBindingTextLabelUserWidget : UGobiUserWidget {
	struct TArray<struct FOptionsBindingTextLabelInputType> InputList; // 0x450(0x10)
	bool bShowIcon; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	float CalloutIconHeight; // 0x464(0x04)
	struct TArray<struct UDataTable*> HumanAxisDataTableList; // 0x468(0x10)
	struct TArray<struct UDataTable*> ZombieAxisDataTableList; // 0x478(0x10)
	struct TArray<struct UDataTable*> HumanActionsDataTableList; // 0x488(0x10)
	struct TArray<struct UDataTable*> ZombieActionsDataTableList; // 0x498(0x10)
	char pad_4A8[0x18]; // 0x4a8(0x18)

	void SetDisplayMode(bool bZombie); // Function Gobi.OptionsBindingTextLabelUserWidget.SetDisplayMode // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.OptionsComboBoxBaseUserWidget
// Size: 0x478 (Inherited: 0x450)
struct UOptionsComboBoxBaseUserWidget : UGobiUserWidget {
	char pad_450[0x24]; // 0x450(0x24)
	int32_t DefaultIndex; // 0x474(0x04)

	void SetSelectedOption(struct FString SelectedText, bool bPlaySound, bool bIgnoreChangeDelegate); // Function Gobi.OptionsComboBoxBaseUserWidget.SetSelectedOption // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.OptionsColorComboBoxWidget
// Size: 0x488 (Inherited: 0x478)
struct UOptionsColorComboBoxWidget : UOptionsComboBoxBaseUserWidget {
	struct TArray<struct FLinearColor> ComboOptions; // 0x478(0x10)
};

// Class Gobi.OptionsGamepadLayoutUserWidget
// Size: 0x488 (Inherited: 0x450)
struct UOptionsGamepadLayoutUserWidget : UGobiUserWidget {
	enum class EGamepadLayoutDisplayMode DisplayMode; // 0x450(0x01)
	char pad_451[0x37]; // 0x451(0x37)

	void UpdateModeVisibility(); // Function Gobi.OptionsGamepadLayoutUserWidget.UpdateModeVisibility // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.OptionsScreen
// Size: 0x5a8 (Inherited: 0x560)
struct UOptionsScreen : UInGameScreen {
	char pad_560[0x48]; // 0x560(0x48)

	void TryToClose(); // Function Gobi.OptionsScreen.TryToClose // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.OptionsSelectableButtonUserWidget
// Size: 0x478 (Inherited: 0x450)
struct UOptionsSelectableButtonUserWidget : UGobiUserWidget {
	struct FMulticastInlineDelegate OnSelected; // 0x450(0x10)
	struct FMulticastInlineDelegate OnDeselected; // 0x460(0x10)
	char pad_470[0x8]; // 0x470(0x08)

	void SetSelected(bool bSelect); // Function Gobi.OptionsSelectableButtonUserWidget.SetSelected // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.OptionsSliderWidget
// Size: 0x478 (Inherited: 0x450)
struct UOptionsSliderWidget : UGobiUserWidget {
	char pad_450[0x28]; // 0x450(0x28)

	void UpdateFocusTTSMessage(struct FText InOptionName); // Function Gobi.OptionsSliderWidget.UpdateFocusTTSMessage // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.OptionsSpinnerUserWidget
// Size: 0x4b8 (Inherited: 0x450)
struct UOptionsSpinnerUserWidget : UGobiUserWidget {
	struct UAkAudioEvent* ValueChangedSound; // 0x450(0x08)
	struct TMap<int32_t, struct FString> TTSValueOverrides; // 0x458(0x50)
	char pad_4A8[0x10]; // 0x4a8(0x10)

	void UpdateTTSMessage(struct FText InOptionName); // Function Gobi.OptionsSpinnerUserWidget.UpdateTTSMessage // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.OptionsTextComboBoxWidget
// Size: 0x4c8 (Inherited: 0x478)
struct UOptionsTextComboBoxWidget : UOptionsComboBoxBaseUserWidget {
	struct TMap<struct FString, struct FText> ComboOptions; // 0x478(0x50)

	void RefreshOptions(); // Function Gobi.OptionsTextComboBoxWidget.RefreshOptions // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.OptionsTextSpinnerWidget
// Size: 0x4b0 (Inherited: 0x450)
struct UOptionsTextSpinnerWidget : UGobiUserWidget {
	char pad_450[0x10]; // 0x450(0x10)
	struct TMap<int32_t, struct FString> TTSValueOverrides; // 0x460(0x50)

	void SetValueNative(int32_t InIndex, bool bFireDelegate); // Function Gobi.OptionsTextSpinnerWidget.SetValueNative // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.OptionsToggleSpinnerWidget
// Size: 0x468 (Inherited: 0x450)
struct UOptionsToggleSpinnerWidget : UGobiUserWidget {
	struct FMulticastInlineDelegate SpinnerChanged; // 0x450(0x10)
	char pad_460[0x8]; // 0x460(0x08)

	void SetValueNative(bool bValue, bool bFireDelegate); // Function Gobi.OptionsToggleSpinnerWidget.SetValueNative // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.P1AccountButtonUserWidget
// Size: 0x4e0 (Inherited: 0x450)
struct UP1AccountButtonUserWidget : UGobiUserWidget {
	int32_t AccountNameTruncateWidth; // 0x450(0x04)
	char pad_454[0x3c]; // 0x454(0x3c)
	struct TSoftClassPtr<UObject> P1IconWidgetClass; // 0x490(0x28)
	struct TSoftClassPtr<UObject> P1SignInScreenClass; // 0x4b8(0x28)

	void OpenWBP1SignInScreen(); // Function Gobi.P1AccountButtonUserWidget.OpenWBP1SignInScreen // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PaperDollDragUserWidget
// Size: 0x458 (Inherited: 0x450)
struct UPaperDollDragUserWidget : UGobiUserWidget {
	struct UItemDragVisualUserWidget* DragVisualClass; // 0x450(0x08)

	void HandleItemDragFinished(struct UDragDropOperation* Operation); // Function Gobi.PaperDollDragUserWidget.HandleItemDragFinished // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PaperDollAmmoUserWidget
// Size: 0x460 (Inherited: 0x458)
struct UPaperDollAmmoUserWidget : UPaperDollDragUserWidget {
	enum class EAmmoType AmmoType; // 0x458(0x01)
	char pad_459[0x7]; // 0x459(0x07)

	bool IsEmpty(); // Function Gobi.PaperDollAmmoUserWidget.IsEmpty // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PaperDollAttachmentDragUserWidget
// Size: 0x488 (Inherited: 0x458)
struct UPaperDollAttachmentDragUserWidget : UPaperDollDragUserWidget {
	struct AItem* ParentItem; // 0x458(0x08)
	struct FDataTableRowHandle AttachmentRowHandle; // 0x460(0x20)
	char pad_480[0x8]; // 0x480(0x08)

	bool TryEquipAttachment(struct UAttachmentDragPayload* AttachmentPayload); // Function Gobi.PaperDollAttachmentDragUserWidget.TryEquipAttachment // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PaperDollAttachmentSlotUserWidget
// Size: 0x758 (Inherited: 0x488)
struct UPaperDollAttachmentSlotUserWidget : UPaperDollAttachmentDragUserWidget {
	char pad_488[0x2d0]; // 0x488(0x2d0)

	struct FItemRow GetItemRow(); // Function Gobi.PaperDollAttachmentSlotUserWidget.GetItemRow // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PaperDollCurrencyUserWidget
// Size: 0x460 (Inherited: 0x458)
struct UPaperDollCurrencyUserWidget : UPaperDollDragUserWidget {
	char pad_458[0x8]; // 0x458(0x08)

	void OnCurrencyChanged(int32_t OldCurrency, int32_t NewCurrency); // Function Gobi.PaperDollCurrencyUserWidget.OnCurrencyChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PaperDollItemDragVisualUserWidget
// Size: 0x468 (Inherited: 0x460)
struct UPaperDollItemDragVisualUserWidget : UItemDragVisualUserWidget {
	char pad_460[0x8]; // 0x460(0x08)

	void SetDragDropState(enum class EPaperDollItemDragDropState InState); // Function Gobi.PaperDollItemDragVisualUserWidget.SetDragDropState // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PaperDollItemUserWidget
// Size: 0x460 (Inherited: 0x458)
struct UPaperDollItemUserWidget : UPaperDollDragUserWidget {
	struct AItem* Item; // 0x458(0x08)

	void SetItem(struct AItem* InItem); // Function Gobi.PaperDollItemUserWidget.SetItem // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerLifeStateUserWidget
// Size: 0x458 (Inherited: 0x450)
struct UPlayerLifeStateUserWidget : UGobiUserWidget {
	char pad_450[0x8]; // 0x450(0x08)

	void UpdateLifeStateComponent(struct APawn* TargetPawn); // Function Gobi.PlayerLifeStateUserWidget.UpdateLifeStateComponent // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PaperDollUserWidget
// Size: 0x460 (Inherited: 0x458)
struct UPaperDollUserWidget : UPlayerLifeStateUserWidget {
	char pad_458[0x8]; // 0x458(0x08)

	void OnEquipmentSlotChanged(enum class EEquipmentSlot InSlot, struct AItem* OldItem, struct AItem* NewItem); // Function Gobi.PaperDollUserWidget.OnEquipmentSlotChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PaperDollWeaponSlotUserWidget
// Size: 0x480 (Inherited: 0x460)
struct UPaperDollWeaponSlotUserWidget : UPaperDollItemUserWidget {
	struct FDelegate OnCanEquipAttachment; // 0x460(0x10)
	struct FDelegate OnTryEquipAttachment; // 0x470(0x10)

	void SetAmmo(struct FItemRow AmmoItemRow, enum class EAmmoType AmmoType, int32_t Count); // Function Gobi.PaperDollWeaponSlotUserWidget.SetAmmo // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PaperDollWeaponUserWidget
// Size: 0x450 (Inherited: 0x450)
struct UPaperDollWeaponUserWidget : UGobiUserWidget {

	void OnDragStarted(); // Function Gobi.PaperDollWeaponUserWidget.OnDragStarted // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ParticleColliderActor
// Size: 0x268 (Inherited: 0x250)
struct AParticleColliderActor : AActor {
	struct UParticleColliderComponent* ParticleColliderComponent; // 0x250(0x08)
	struct UParticleSystemComponent* ParticleSystemComponent; // 0x258(0x08)
	char pad_260[0x8]; // 0x260(0x08)

	void SetupParticleEvents(struct UParticleSystem* ParticleSystem, struct TMap<struct FName, struct UImpactEffectConfig*> Events, bool bMaterialNormalParam, bool bMaterialLocationParam, struct APawn* ParamInstigator); // Function Gobi.ParticleColliderActor.SetupParticleEvents // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ParticleColliderComponent
// Size: 0x140 (Inherited: 0xd8)
struct UParticleColliderComponent : UActorComponent {
	struct TMap<struct FName, struct UImpactEffectConfig*> Events; // 0xd8(0x50)
	bool bMaterialNormalParam; // 0x128(0x01)
	bool bMaterialLocationParam; // 0x129(0x01)
	char pad_12A[0x16]; // 0x12a(0x16)

	void OnParticleCollide(struct FName EventName, float EmitterTime, int32_t ParticleTime, struct FVector Location, struct FVector Velocity, struct FVector Direction, struct FVector Normal, struct FName BoneName, struct UPhysicalMaterial* PhysMat); // Function Gobi.ParticleColliderComponent.OnParticleCollide // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ParticleCullSubsystem
// Size: 0xc8 (Inherited: 0x38)
struct UParticleCullSubsystem : UWorldSubsystem {
	char pad_38[0x90]; // 0x38(0x90)
};

// Class Gobi.ParticleEffectTrait
// Size: 0x40 (Inherited: 0x30)
struct UParticleEffectTrait : UTrait {
	struct TArray<struct FParticleEffectTraitDef> ParticleEffectDefinitions; // 0x30(0x10)
};

// Class Gobi.ParticleSpawnDef
// Size: 0x68 (Inherited: 0x38)
struct UParticleSpawnDef : UDataAsset {
	struct TArray<struct FGobiParticleParam> Params; // 0x38(0x10)
	struct TArray<struct FImpactEmitterSet> EmitterSets; // 0x48(0x10)
	struct TArray<struct FImpactSourceEmitterSet> SourceItemEmitterSets; // 0x58(0x10)
};

// Class Gobi.ParticleSubsystem
// Size: 0x38 (Inherited: 0x38)
struct UParticleSubsystem : UWorldSubsystem {

	void OnFinished(struct UParticleSystemComponent* InPSystem); // Function Gobi.ParticleSubsystem.OnFinished // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PartyToolTipHolderUserWidget
// Size: 0x458 (Inherited: 0x450)
struct UPartyToolTipHolderUserWidget : UGobiUserWidget {
	struct UPartyToolTipUserWidget* PartyTooltip; // 0x450(0x08)

	void OnScreenClosed(struct UUIScreen* Screen); // Function Gobi.PartyToolTipHolderUserWidget.OnScreenClosed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PartyPlayerCardExpandedUserWidget
// Size: 0x4a8 (Inherited: 0x458)
struct UPartyPlayerCardExpandedUserWidget : UPartyToolTipHolderUserWidget {
	char pad_458[0x50]; // 0x458(0x50)

	void SetPlayerSlot(struct APlayerSlot* InPlayerSlot); // Function Gobi.PartyPlayerCardExpandedUserWidget.SetPlayerSlot // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PartyPlayerCardUserWidget
// Size: 0x628 (Inherited: 0x458)
struct UPartyPlayerCardUserWidget : UPartyToolTipHolderUserWidget {
	struct FPartyPlayer Player; // 0x458(0x110)
	bool bIsEnemy; // 0x568(0x01)
	bool bIsInGroup; // 0x569(0x01)
	bool bIsGroupLeader; // 0x56a(0x01)
	bool bIsPlayingGobi; // 0x56b(0x01)
	bool bShowGroupMarker; // 0x56c(0x01)
	bool bIsEmpty; // 0x56d(0x01)
	bool bCharacterNameVisible; // 0x56e(0x01)
	enum class EPartyScreenTab PartyScreenTab; // 0x56f(0x01)
	struct FSlateColor StatusNormalColor; // 0x570(0x30)
	struct FSlateColor StatusNotInGameColor; // 0x5a0(0x30)
	struct FSlateColor StatusInPartyColor; // 0x5d0(0x30)
	char pad_600[0x28]; // 0x600(0x28)

	void SetPlayer(struct FPartyPlayer InPlayer, enum class EPartyScreenTab Tab); // Function Gobi.PartyPlayerCardUserWidget.SetPlayer // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PartyPrivacyOptionsPopup
// Size: 0x470 (Inherited: 0x470)
struct UPartyPrivacyOptionsPopup : UPopupUserWidget {

	void SetSessionPrivacy(enum class ESessionPrivacy Privacy); // Function Gobi.PartyPrivacyOptionsPopup.SetSessionPrivacy // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PartyScreen
// Size: 0x5a0 (Inherited: 0x560)
struct UPartyScreen : UInGameScreen {
	char pad_560[0x30]; // 0x560(0x30)
	struct UPartyPrivacyOptionsPopup* PartyPrivacyOptionsPtr; // 0x590(0x08)
	char pad_598[0x8]; // 0x598(0x08)

	void UpdateWBP1Players(); // Function Gobi.PartyScreen.UpdateWBP1Players // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PartyStatusEntryUserWidget
// Size: 0x4c8 (Inherited: 0x458)
struct UPartyStatusEntryUserWidget : UPlayerLifeStateUserWidget {
	char pad_458[0x70]; // 0x458(0x70)

	void UpdateWidgetsWithSlot(struct APlayerSlot* InPlayerSlot); // Function Gobi.PartyStatusEntryUserWidget.UpdateWidgetsWithSlot // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PartyStatusUserWidget
// Size: 0x468 (Inherited: 0x450)
struct UPartyStatusUserWidget : UGobiUserWidget {
	char pad_450[0x18]; // 0x450(0x18)

	void SetPlayerAt(int32_t Index, struct APlayerSlot* PlayerSlot, bool bShouldDimFromFog); // Function Gobi.PartyStatusUserWidget.SetPlayerAt // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PartyToolTipUserWidget
// Size: 0x590 (Inherited: 0x450)
struct UPartyToolTipUserWidget : UGobiUserWidget {
	struct FPartyPlayer Player; // 0x450(0x110)
	struct TArray<struct FMenuCommand> Commands; // 0x560(0x10)
	char pad_570[0x20]; // 0x570(0x20)

	void ViewProfile(); // Function Gobi.PartyToolTipUserWidget.ViewProfile // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PassageSpawnerMicroManager
// Size: 0x598 (Inherited: 0x58)
struct UPassageSpawnerMicroManager : UMicroManager {
	char pad_58[0x540]; // 0x58(0x540)
};

// Class Gobi.PassageSpawnerMod
// Size: 0x240 (Inherited: 0x90)
struct UPassageSpawnerMod : UMicroManagerMod {
	struct FGamePropertyFloatMod AlarmCountsMin[0x4]; // 0x90(0x40)
	struct FGamePropertyFloatMod AlarmCountsMax[0x4]; // 0xd0(0x40)
	struct FGamePropertyFloatMod ClassCountsMin[0x4]; // 0x110(0x40)
	struct FGamePropertyFloatMod ClassCountsMax[0x4]; // 0x150(0x40)
	struct FGamePropertyFloatMod AlarmWeights[0x4]; // 0x190(0x40)
	struct FGamePropertyFloatMod ClassWeights[0x4]; // 0x1d0(0x40)
	char pad_210[0x30]; // 0x210(0x30)
};

// Class Gobi.PassageSpawner
// Size: 0x4d8 (Inherited: 0x250)
struct APassageSpawner : AActor {
	struct UObject* SyncedClass; // 0x250(0x08)
	struct TArray<struct UObject*> PrecachedClasses; // 0x258(0x10)
	uint32_t AllowedTypes; // 0x268(0x04)
	bool bMirrored; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct TSoftClassPtr<UObject> PassageClasses[0x4]; // 0x270(0xa0)
	struct TSoftClassPtr<UObject> SpecialClasses[0x2]; // 0x310(0x50)
	struct TSoftClassPtr<UObject> PassageClassesMirrored[0x4]; // 0x360(0xa0)
	struct TSoftClassPtr<UObject> SpecialClassesMirrored[0x2]; // 0x400(0x50)
	enum class EAlarmMode AlarmMode; // 0x450(0x01)
	bool bAkAudioPortalEnabled; // 0x451(0x01)
	char pad_452[0x6]; // 0x452(0x06)
	struct TArray<struct FDoorAlarmAudio> AlarmAudioEvents; // 0x458(0x10)
	struct APassageSpawner* SyncedPassageSpawner; // 0x468(0x08)
	struct UGobiNavLinkComponent* NavLinkComponent; // 0x470(0x08)
	struct UGobiNavModifierComponent* NavModifierComponent; // 0x478(0x08)
	struct UAkAcousticPortalComponent* AkAcousticPortalComponent; // 0x480(0x08)
	struct AActor* SpawnedPassage; // 0x488(0x08)
	struct FMulticastInlineDelegate OnPassageSpawned; // 0x490(0x10)
	char pad_4A0[0x38]; // 0x4a0(0x38)

	void OnRep_SpawnedPassage(); // Function Gobi.PassageSpawner.OnRep_SpawnedPassage // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.DummyPassage
// Size: 0x250 (Inherited: 0x250)
struct ADummyPassage : AActor {
};

// Class Gobi.PasswordPopupUserWidget
// Size: 0x4d8 (Inherited: 0x4b8)
struct UPasswordPopupUserWidget : UMessagePopupUserWidget {
	char pad_4B8[0x20]; // 0x4b8(0x20)

	void OnPasswordCommitted(struct FText Text, enum class ETextCommit CommitMethod); // Function Gobi.PasswordPopupUserWidget.OnPasswordCommitted // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PathfindingSubsystem
// Size: 0xa0 (Inherited: 0x38)
struct UPathfindingSubsystem : UWorldSubsystem {
	char pad_38[0x68]; // 0x38(0x68)
};

// Class Gobi.PathMoveScaleMod
// Size: 0x90 (Inherited: 0x88)
struct UPathMoveScaleMod : UGameplayMod {
	struct FGameplayTag Tag; // 0x88(0x08)
};

// Class Gobi.PathToObjectiveActor
// Size: 0x260 (Inherited: 0x250)
struct APathToObjectiveActor : AActor {
	struct USceneComponent* DefaultRootComponent; // 0x250(0x08)
	struct USplineComponent* PathToObjectiveSpline; // 0x258(0x08)
};

// Class Gobi.PathToObjectiveLocComponent
// Size: 0x4c0 (Inherited: 0x4c0)
struct UPathToObjectiveLocComponent : UBillboardComponent {
};

// Class Gobi.PawnBlockingVolume
// Size: 0x288 (Inherited: 0x288)
struct APawnBlockingVolume : ABlockingVolume {
};

// Class Gobi.PcHwAnalytics
// Size: 0xa0 (Inherited: 0x30)
struct UPcHwAnalytics : UObject {
	char pad_30[0x70]; // 0x30(0x70)

	void GatherAndTransmitPcData(struct UObject* WorldContext); // Function Gobi.PcHwAnalytics.GatherAndTransmitPcData // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PerfStatsAnalyticsComponent
// Size: 0x350 (Inherited: 0xd8)
struct UPerfStatsAnalyticsComponent : UActorComponent {
	char pad_D8[0x278]; // 0xd8(0x278)
};

// Class Gobi.PerkComponent
// Size: 0x148 (Inherited: 0xd8)
struct UPerkComponent : UActorComponent {
	struct FMulticastInlineDelegate OnPerkChange; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnPerkAdded; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnPerkRemoved; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnPerkExpirationTimeChanged; // 0x108(0x10)
	char pad_118[0x10]; // 0x118(0x10)
	struct TArray<struct FActivePerk> ActivePerks; // 0x128(0x10)
	char pad_138[0x10]; // 0x138(0x10)

	void SetPerkExpirationTime(struct FDataTableRowHandle PerkItemRowHandle, float ExpirationTime); // Function Gobi.PerkComponent.SetPerkExpirationTime // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PerkDetailsEntryUserWidget
// Size: 0x450 (Inherited: 0x450)
struct UPerkDetailsEntryUserWidget : UGobiUserWidget {

	void SetWrapWidth(float InWrapWidth); // Function Gobi.PerkDetailsEntryUserWidget.SetWrapWidth // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PerkWatcherUserWidget
// Size: 0x458 (Inherited: 0x450)
struct UPerkWatcherUserWidget : UGobiUserWidget {
	char pad_450[0x8]; // 0x450(0x08)

	void UpdatePerkExpirationTime(struct FDataTableRowHandle RowHandle, struct FPerkItemRow PerkRow, float ExpirationTime); // Function Gobi.PerkWatcherUserWidget.UpdatePerkExpirationTime // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PerkDetailsUserWidget
// Size: 0x458 (Inherited: 0x458)
struct UPerkDetailsUserWidget : UPerkWatcherUserWidget {

	void AddPerks(enum class EPerkCategory Category, struct TArray<struct FPerkDetailEntry> Perks, int32_t Count); // Function Gobi.PerkDetailsUserWidget.AddPerks // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SprayWidget
// Size: 0x450 (Inherited: 0x450)
struct USprayWidget : UGobiUserWidget {

	void OnUserSprayLoaded(struct FSprayData SprayData); // Function Gobi.SprayWidget.OnUserSprayLoaded // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PersonalizationScreen
// Size: 0x550 (Inherited: 0x530)
struct UPersonalizationScreen : UUIScreen {
	struct FSprayData SprayData; // 0x530(0x10)
	struct FSprayData TempSprayData; // 0x540(0x10)

	void SaveSpray(); // Function Gobi.PersonalizationScreen.SaveSpray // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PhysPropComponent
// Size: 0x168 (Inherited: 0xd8)
struct UPhysPropComponent : UActorComponent {
	char pad_D8[0x30]; // 0xd8(0x30)
	struct UStaticMesh* MeshSwapOnImpulse; // 0x108(0x08)
	struct TArray<struct UStaticMesh*> SpawnAdditionalMeshesOnDeath; // 0x110(0x10)
	struct FCollisionProfileName SpawnedMeshCollisionProfile; // 0x120(0x08)
	bool bDeleteOnImpulse; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	float DeletionDelay; // 0x12c(0x04)
	bool bActivateParticleOnFirstImpulseOnly; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct UAkAudioEvent* BounceAudioEvent; // 0x138(0x08)
	struct UAkAudioEvent* BaseMeshDestructionAudioEvent; // 0x140(0x08)
	float MinSpeedForBounceAudio; // 0x148(0x04)
	float BounceCooldown; // 0x14c(0x04)
	char pad_150[0x4]; // 0x150(0x04)
	bool bSingleImpactSound; // 0x154(0x01)
	char pad_155[0x3]; // 0x155(0x03)
	float LinearStrengthScale; // 0x158(0x04)
	float LinearStrengthBias; // 0x15c(0x04)
	float RadialStrengthScale; // 0x160(0x04)
	float RadialStrengthBias; // 0x164(0x04)

	void OnRootComponentHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function Gobi.PhysPropComponent.OnRootComponentHit // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PingableComponent
// Size: 0xe8 (Inherited: 0xd8)
struct UPingableComponent : UActorComponent {
	float OffsetHeight; // 0xd8(0x04)
	struct FGameplayTag IdentifierTag; // 0xdc(0x08)
	enum class EGobiTeam OwningTeam; // 0xe4(0x01)
	enum class EPingType Type; // 0xe5(0x01)
	bool bAutoPosition; // 0xe6(0x01)
	bool bEnabled; // 0xe7(0x01)

	void SetIsEnabled(bool bNewEnabled); // Function Gobi.PingableComponent.SetIsEnabled // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ProjectileThrowComponent
// Size: 0x618 (Inherited: 0x1c8)
struct UProjectileThrowComponent : UAbilityComponent {
	char pad_1C8[0x8]; // 0x1c8(0x08)
	struct FMulticastInlineDelegate OnThrowEnded; // 0x1d0(0x10)
	struct FProjectileThrowTickData MoveTickData; // 0x1e0(0x20)
	char pad_200[0x8]; // 0x200(0x08)
	bool bUsesTuningDataTable; // 0x208(0x01)
	char pad_209[0x3]; // 0x209(0x03)
	struct FName TuningDataIdentifier; // 0x20c(0x08)
	char pad_214[0x4]; // 0x214(0x04)
	struct FProjectileThrowTuning ProjectileThrowTuning; // 0x218(0xf8)
	struct FProjectileThrowConfig ThrowConfig; // 0x310(0x160)
	struct AActor* ThrowTarget; // 0x470(0x08)
	char pad_478[0x28]; // 0x478(0x28)
	uint16_t ReplicatedSpawnProjectileCount; // 0x4a0(0x02)
	char pad_4A2[0x2]; // 0x4a2(0x02)
	struct FReplicatedThrowInfo ReplicatedThrow; // 0x4a4(0x18)
	char pad_4BC[0x15c]; // 0x4bc(0x15c)

	void ThrowProjectile(); // Function Gobi.ProjectileThrowComponent.ThrowProjectile // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PinProjectileThrowComponent
// Size: 0x628 (Inherited: 0x618)
struct UPinProjectileThrowComponent : UProjectileThrowComponent {
	char pad_618[0x10]; // 0x618(0x10)

	bool IsProjectilePinning(); // Function Gobi.PinProjectileThrowComponent.IsProjectilePinning // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlantableGhostComponent
// Size: 0x100 (Inherited: 0xd8)
struct UPlantableGhostComponent : UActorComponent {
	struct FMulticastInlineDelegate OnSetToValidLocation; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnSetToInvalidLocation; // 0xe8(0x10)
	char pad_F8[0x8]; // 0xf8(0x08)
};

// Class Gobi.PlantableItemComponent
// Size: 0x2e0 (Inherited: 0x150)
struct UPlantableItemComponent : UItemBaseComponent {
	struct FMulticastInlineDelegate OnSuccessfulPlant; // 0x150(0x10)
	char pad_160[0x4]; // 0x160(0x04)
	struct FHitResult LastKnownTraceResult; // 0x164(0x88)
	char pad_1EC[0x4]; // 0x1ec(0x04)
	struct AActor* SpawnedGhostActor; // 0x1f0(0x08)
	char pad_1F8[0x30]; // 0x1f8(0x30)
	struct AActor* PlantedActor; // 0x228(0x08)
	struct AActor* PlantableGhostActor; // 0x230(0x08)
	float CoolDownPeriod; // 0x238(0x04)
	bool bRequireNavMeshToPlant; // 0x23c(0x01)
	char pad_23D[0x3]; // 0x23d(0x03)
	struct UNavigationQueryFilter* NavFilter; // 0x240(0x08)
	float NavMeshTolerance; // 0x248(0x04)
	float MaxPlantDistance; // 0x24c(0x04)
	struct FRotator DesiredPlantRotation; // 0x250(0x0c)
	struct FCollisionProfileName TraceProfileName; // 0x25c(0x08)
	struct FVector BoxHalfExtents; // 0x264(0x0c)
	struct FVector BoxOverlapLocalOffset; // 0x270(0x0c)
	struct FCollisionProfileName InvalidOverlapProfileName; // 0x27c(0x08)
	bool bOverlapWithComplex; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	float MaxTraceDownDistance; // 0x288(0x04)
	float AdditionalPlantRadius; // 0x28c(0x04)
	struct TArray<struct FAdditionalPlantData> AdditionalPlants1; // 0x290(0x10)
	struct TArray<struct FAdditionalPlantData> AdditionalPlants2; // 0x2a0(0x10)
	struct FPlantableRangeDefinition PlantableSurfaceTypes; // 0x2b0(0x0c)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct UAnimMontage* UseMontageFP; // 0x2c0(0x08)
	struct UAnimMontage* UseMontage3P; // 0x2c8(0x08)
	float ChanceToExpendAmmoOnUse; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct UAkAudioEvent* AKENotExpended; // 0x2d8(0x08)
};

// Class Gobi.PlatformCalloutButtonUserWidget
// Size: 0x458 (Inherited: 0x450)
struct UPlatformCalloutButtonUserWidget : UGobiUserWidget {
	bool bExecutePressReleaseActions; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)

	void SetVisibilityFlags(bool bInShowGamepad, bool bInShowKey); // Function Gobi.PlatformCalloutButtonUserWidget.SetVisibilityFlags // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlatformCalloutImageUserWidget
// Size: 0x468 (Inherited: 0x450)
struct UPlatformCalloutImageUserWidget : UGobiUserWidget {
	struct UTexture2D* PCTextureOverride; // 0x450(0x08)
	char pad_458[0x10]; // 0x458(0x10)

	void UpdateIcon(); // Function Gobi.PlatformCalloutImageUserWidget.UpdateIcon // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlatformCalloutsUserWidget
// Size: 0x450 (Inherited: 0x450)
struct UPlatformCalloutsUserWidget : UGobiUserWidget {

	void SetCalloutVisibility_Internal(struct FName Action, bool bIsVisible); // Function Gobi.PlatformCalloutsUserWidget.SetCalloutVisibility_Internal // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlatformIconUserWidget
// Size: 0x450 (Inherited: 0x450)
struct UPlatformIconUserWidget : UGobiUserWidget {

	void SetPlatform(enum class EHydraAuthType AuthType); // Function Gobi.PlatformIconUserWidget.SetPlatform // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlatformInputIcons
// Size: 0x80 (Inherited: 0x30)
struct UPlatformInputIcons : UObject {
	struct TMap<struct FKey, struct FInputIcons> Keys; // 0x30(0x50)

	struct UTexture2D* GetPlatformIcon(struct FInputIcons Icons, bool bWasLastInputGamepad); // Function Gobi.PlatformInputIcons.GetPlatformIcon // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlatformUtils
// Size: 0x30 (Inherited: 0x30)
struct UPlatformUtils : UBlueprintFunctionLibrary {

	enum class EPlatform GetPlatform(); // Function Gobi.PlatformUtils.GetPlatform // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayDeathReactionComponent
// Size: 0x130 (Inherited: 0xd8)
struct UPlayDeathReactionComponent : UActorComponent {
	struct TArray<struct UMontageSet*> MontageSets; // 0xd8(0x10)
	float CheckTrulyDeadTime; // 0xe8(0x04)
	char pad_EC[0x34]; // 0xec(0x34)
	struct UAnimMontage* ReplicatedDeathReactionMontage; // 0x120(0x08)
	char pad_128[0x8]; // 0x128(0x08)

	void OnRep_ReplicatedMontage(); // Function Gobi.PlayDeathReactionComponent.OnRep_ReplicatedMontage // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayedCardsGridUserWidget
// Size: 0x4f0 (Inherited: 0x450)
struct UPlayedCardsGridUserWidget : UGobiUserWidget {
	int32_t NumRows; // 0x450(0x04)
	int32_t NumColumns; // 0x454(0x04)
	struct UMiniCardUserWidget* MiniCardClass; // 0x458(0x08)
	struct TMap<struct FDataTableRowHandle, int32_t> CardCounts; // 0x460(0x50)
	char pad_4B0[0x40]; // 0x4b0(0x40)

	void SetNumPages(int32_t NumPages); // Function Gobi.PlayedCardsGridUserWidget.SetNumPages // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerAimAssistComponent
// Size: 0x260 (Inherited: 0xd8)
struct UPlayerAimAssistComponent : UActorComponent {
	float MaxTargetingRange; // 0xd8(0x04)
	float MaxTargetingAngle; // 0xdc(0x04)
	float PreviousTargetScoreWeight; // 0xe0(0x04)
	float DistanceScoreWeight; // 0xe4(0x04)
	float AngleScoreWeight; // 0xe8(0x04)
	bool bFrictionEnabled; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	float VerticalInputFriction; // 0xf0(0x04)
	float HorizontalInputFriction; // 0xf4(0x04)
	float ADSFrictionScalar; // 0xf8(0x04)
	bool bADSSnapEnabled; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	float ADSSnapStrength; // 0x100(0x04)
	float MaxADSSnapAngle; // 0x104(0x04)
	float MaxBotADSSnapAngle; // 0x108(0x04)
	bool bTrackingEnabled; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	float ADSTrackingStrength; // 0x110(0x04)
	float NonADSTrackingStrength; // 0x114(0x04)
	float TrackingPitchBlendInPercent; // 0x118(0x04)
	float SprintingTrackingStrengthScalar; // 0x11c(0x04)
	float MinimumDeltaAngle; // 0x120(0x04)
	char pad_124[0x13c]; // 0x124(0x13c)

	void OnPossessedBy(struct AController* Controller); // Function Gobi.PlayerAimAssistComponent.OnPossessedBy // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerAnalyticsSettings
// Size: 0xa8 (Inherited: 0x88)
struct UPlayerAnalyticsSettings : UPlayerSettingsBase {
	char pad_88[0x10]; // 0x88(0x10)
	struct TArray<struct FString> PreviouslySentEntitlements; // 0x98(0x10)
};

// Class Gobi.PlayerAssetLoader
// Size: 0x278 (Inherited: 0x250)
struct APlayerAssetLoader : AInfo {
	struct UAsyncAssetSet* MannequinAssetSet; // 0x250(0x08)
	struct UAsyncAssetSet* SelectedCharactersAssetSet; // 0x258(0x08)
	struct UAsyncAssetSet* HeroBotAssetSet; // 0x260(0x08)
	char pad_268[0x10]; // 0x268(0x10)

	void OnLocalSlotsUpdated(); // Function Gobi.PlayerAssetLoader.OnLocalSlotsUpdated // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerCutsceneSynchronizationComponent
// Size: 0xe0 (Inherited: 0xd8)
struct UPlayerCutsceneSynchronizationComponent : UActorComponent {
	char pad_D8[0x1]; // 0xd8(0x01)
	bool bVotingToSkip; // 0xd9(0x01)
	enum class ECutscenePhase CutscenePhase; // 0xda(0x01)
	char pad_DB[0x5]; // 0xdb(0x05)

	void ServerSetVoteToSkip(bool bNewVoteToSkip); // Function Gobi.PlayerCutsceneSynchronizationComponent.ServerSetVoteToSkip // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerHealthUserWidget
// Size: 0x4d0 (Inherited: 0x450)
struct UPlayerHealthUserWidget : UGobiUserWidget {
	struct FMulticastInlineDelegate OnPlayerHealthChanged; // 0x450(0x10)
	struct FMulticastInlineDelegate OnCurrentMaxHealthChanged; // 0x460(0x10)
	float HealAnimHealthPerSecond; // 0x470(0x04)
	char pad_474[0x5c]; // 0x474(0x5c)

	void SetPlayerSlot(struct APlayerSlot* InPlayerSlot); // Function Gobi.PlayerHealthUserWidget.SetPlayerSlot // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerLevelResetComponent
// Size: 0x100 (Inherited: 0xd8)
struct UPlayerLevelResetComponent : UActorComponent {
	char pad_D8[0x20]; // 0xd8(0x20)
	int32_t NumResetLevels; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)

	void ServerSetNumResetLevels(int32_t Num); // Function Gobi.PlayerLevelResetComponent.ServerSetNumResetLevels // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerLevelStreamingComponent
// Size: 0xf8 (Inherited: 0xd8)
struct UPlayerLevelStreamingComponent : UActorComponent {
	char pad_D8[0x18]; // 0xd8(0x18)
	int32_t NumLoadedLevels; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)

	void ServerSetNumLoadedLevels(int32_t Num); // Function Gobi.PlayerLevelStreamingComponent.ServerSetNumLoadedLevels // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerLoadoutsEntryUserWidget
// Size: 0x498 (Inherited: 0x450)
struct UPlayerLoadoutsEntryUserWidget : UGobiUserWidget {
	char pad_450[0x48]; // 0x450(0x48)

	void SetPlayerSlot(struct APlayerSlot* InPlayerSlot); // Function Gobi.PlayerLoadoutsEntryUserWidget.SetPlayerSlot // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerLoadoutsUserWidget
// Size: 0x458 (Inherited: 0x450)
struct UPlayerLoadoutsUserWidget : UGobiUserWidget {
	char pad_450[0x8]; // 0x450(0x08)

	void OnSlotsUpdated(); // Function Gobi.PlayerLoadoutsUserWidget.OnSlotsUpdated // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerMicIconUserWidget
// Size: 0x468 (Inherited: 0x450)
struct UPlayerMicIconUserWidget : UGobiUserWidget {
	char pad_450[0x18]; // 0x450(0x18)

	void SetPlayerState(struct AGobiPlayerState* InPlayerState); // Function Gobi.PlayerMicIconUserWidget.SetPlayerState // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerMoneyAnimUserWidget
// Size: 0x460 (Inherited: 0x450)
struct UPlayerMoneyAnimUserWidget : UGobiUserWidget {
	char pad_450[0x10]; // 0x450(0x10)

	void StartAnim(int32_t MoneyCount, struct FText Context); // Function Gobi.PlayerMoneyAnimUserWidget.StartAnim // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerMoneyUserWidget
// Size: 0x528 (Inherited: 0x450)
struct UPlayerMoneyUserWidget : UGobiUserWidget {
	bool bAnimate; // 0x450(0x01)
	bool bAlwaysVisible; // 0x451(0x01)
	char pad_452[0x2]; // 0x452(0x02)
	struct FVector2D AnimStartCoordinates; // 0x454(0x08)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct FGobiEasingAnim CenterToDest; // 0x460(0x20)
	struct FGobiCountAnim CountAnim; // 0x480(0x28)
	struct UAkAudioEvent* PositiveMoneyLoopAudioEvent; // 0x4a8(0x08)
	struct UAkAudioEvent* PositiveMoneyLoopStopAudioEvent; // 0x4b0(0x08)
	struct UAkAudioEvent* NegativeMoneyLoopAudioEvent; // 0x4b8(0x08)
	struct UAkAudioEvent* NegativeMoneyLoopStopAudioEvent; // 0x4c0(0x08)
	char pad_4C8[0x60]; // 0x4c8(0x60)

	void StartFadeOut(); // Function Gobi.PlayerMoneyUserWidget.StartFadeOut // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerMovementDebugComponent
// Size: 0xe8 (Inherited: 0xd8)
struct UPlayerMovementDebugComponent : UActorComponent {
	struct UGobiPlayerMovementComponent* GobiPlayerMovementComponent; // 0xd8(0x08)
	struct ACharacter* CharacterOwner; // 0xe0(0x08)

	void ServerSetCharacterRecording(struct ACharacter* Character, bool bEnabled); // Function Gobi.PlayerMovementDebugComponent.ServerSetCharacterRecording // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerMoveSpeedMod
// Size: 0x90 (Inherited: 0x88)
struct UPlayerMoveSpeedMod : UGameplayMod {
	struct FCustomDataProviderFloat Speed; // 0x88(0x08)
};

// Class Gobi.PlayerNameUserWidget
// Size: 0x598 (Inherited: 0x450)
struct UPlayerNameUserWidget : UGobiUserWidget {
	char pad_450[0x18]; // 0x450(0x18)
	int32_t TruncateWidth; // 0x468(0x04)
	bool bShowPlatformIcon; // 0x46c(0x01)
	char pad_46D[0x3]; // 0x46d(0x03)
	struct FPartyPlayer Player; // 0x470(0x110)
	char pad_580[0x18]; // 0x580(0x18)

	void UpdatePlatformIcon(struct FPartyPlayer InPlayer); // Function Gobi.PlayerNameUserWidget.UpdatePlatformIcon // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerOutOfBoundsVolume
// Size: 0x288 (Inherited: 0x288)
struct APlayerOutOfBoundsVolume : ABlockingVolume {
};

// Class Gobi.PlayerPerkMod
// Size: 0xa0 (Inherited: 0x88)
struct UPlayerPerkMod : UGameplayMod {
	struct TArray<struct FPerkSet> PerkSets; // 0x88(0x10)
	char DesiredPerkCount; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// Class Gobi.PlayerProfileSettings
// Size: 0x408 (Inherited: 0x88)
struct UPlayerProfileSettings : UPlayerSettingsBase {
	char pad_88[0x10]; // 0x88(0x10)
	struct FPlayerProfileData OfflineData; // 0x98(0x1b8)
	struct FPlayerProfileData OnlineDataCache; // 0x250(0x1b8)
};

// Class Gobi.PlayerSettingsGame
// Size: 0x288 (Inherited: 0x88)
struct UPlayerSettingsGame : UPlayerSettingsBase {
	char pad_88[0x70]; // 0x88(0x70)
	bool bGamePadInvert; // 0xf8(0x01)
	bool bGamePadInvertHoriz; // 0xf9(0x01)
	bool bForceFeedbackEnabled; // 0xfa(0x01)
	bool bMouseInvert; // 0xfb(0x01)
	bool bMouseSmoothing; // 0xfc(0x01)
	bool bAutoRecenterRecoil; // 0xfd(0x01)
	bool bCycleAccessories; // 0xfe(0x01)
	bool bHoldToSprintKeyboard; // 0xff(0x01)
	bool bHoldToSprintGamepad; // 0x100(0x01)
	bool bHoldToCrouchKeyboard; // 0x101(0x01)
	bool bHoldToCrouchGamepad; // 0x102(0x01)
	bool bHoldToADSKeyboard; // 0x103(0x01)
	bool bHoldToADSGamepad; // 0x104(0x01)
	bool bTreatSemiAutoWeaponsAsFullAuto; // 0x105(0x01)
	bool bAutoSelectWeaponsOnPickup; // 0x106(0x01)
	bool bDepletedAmmoWeaponSwitchEnabled; // 0x107(0x01)
	float LeftStickInnerDeadZone; // 0x108(0x04)
	float LeftStickOuterDeadZone; // 0x10c(0x04)
	float RightStickInnerDeadZone; // 0x110(0x04)
	float RightStickOuterDeadZone; // 0x114(0x04)
	float RightStickSensitivityCurve; // 0x118(0x04)
	float CameraAnimationStrength; // 0x11c(0x04)
	float ForceFeedbackScale; // 0x120(0x04)
	struct FAimSensitivitySettings AimSensitivitySettings; // 0x124(0x24)
	struct FString DefaultOfflineMapName; // 0x148(0x10)
	struct TArray<struct FInputActionKeyMapping> ActionMappings; // 0x158(0x10)
	struct TArray<struct FInputAxisKeyMapping> AxisMappings; // 0x168(0x10)
	struct TArray<struct FInputActionKeyMapping> DefaultActionMappings; // 0x178(0x10)
	struct TArray<struct FInputAxisKeyMapping> DefaultAxisMappings; // 0x188(0x10)
	enum class EKeyLayout KeyLayout; // 0x198(0x01)
	enum class EColorBlindMode ColorBlindMode; // 0x199(0x01)
	char pad_19A[0x6]; // 0x19a(0x06)
	struct FColorBlindGroupPalette ColorBlindCustomColorPalette; // 0x1a0(0x50)
	float WaypointOpacity; // 0x1f0(0x04)
	bool bGameCoachEnabled; // 0x1f4(0x01)
	bool bHitMarkersEnabled; // 0x1f5(0x01)
	bool bTextToSpeechEnabled; // 0x1f6(0x01)
	enum class ETextToSpeechVoice TextToSpeechVoice; // 0x1f7(0x01)
	bool bSpeechToText; // 0x1f8(0x01)
	enum class ECaptioning Captioning; // 0x1f9(0x01)
	enum class EColorBlindMode CaptionColorBlindMode; // 0x1fa(0x01)
	char pad_1FB[0x1]; // 0x1fb(0x01)
	int32_t CaptionFontSize; // 0x1fc(0x04)
	float CaptionBackgroundOpacity; // 0x200(0x04)
	bool bProfanityFilterEnabled; // 0x204(0x01)
	bool bTakeABreakEnabled; // 0x205(0x01)
	char pad_206[0x2]; // 0x206(0x02)
	int32_t GamepadStickConfigIndex; // 0x208(0x04)
	int32_t GamepadButtonHumanConfigIndex; // 0x20c(0x04)
	int32_t GamepadButtonZombieConfigIndex; // 0x210(0x04)
	enum class EReticleOptionType ReticleType; // 0x214(0x01)
	char pad_215[0x3]; // 0x215(0x03)
	struct FLinearColor ReticleColor; // 0x218(0x10)
	bool bAimAssistEnabled; // 0x228(0x01)
	char pad_229[0x3]; // 0x229(0x03)
	float AimAssistStrength; // 0x22c(0x04)
	bool bTargetSnappingEnabled; // 0x230(0x01)
	char pad_231[0x57]; // 0x231(0x57)

	void SetWaypointOpacity(float InOpacity); // Function Gobi.PlayerSettingsGame.SetWaypointOpacity // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerSettingsSystem
// Size: 0x270 (Inherited: 0x148)
struct UPlayerSettingsSystem : UGameUserSettings {
	struct FMulticastInlineDelegate OnApplySettings; // 0x148(0x10)
	char pad_158[0x18]; // 0x158(0x18)
	struct UGameInstance* GameInstance; // 0x170(0x08)
	struct UDataTable* GPUSettingsTable; // 0x178(0x08)
	char pad_180[0x8]; // 0x180(0x08)
	int32_t SettingsVersion; // 0x188(0x04)
	bool bSplitscreenVertical; // 0x18c(0x01)
	bool bPushToTalk; // 0x18d(0x01)
	char pad_18E[0x2]; // 0x18e(0x02)
	float MasterVolume; // 0x190(0x04)
	float VoiceVolume; // 0x194(0x04)
	float SFXVolume; // 0x198(0x04)
	float DialogVolume; // 0x19c(0x04)
	float MusicVolume; // 0x1a0(0x04)
	float MicBoost; // 0x1a4(0x04)
	float MicThreshold; // 0x1a8(0x04)
	struct FName MixProfile; // 0x1ac(0x08)
	bool bVOIPSideChainEnabled; // 0x1b4(0x01)
	bool bSuppressAudioOnFocusLost; // 0x1b5(0x01)
	char pad_1B6[0x2]; // 0x1b6(0x02)
	struct FString TargetMonitorName; // 0x1b8(0x10)
	enum class EAAMode AAMode; // 0x1c8(0x01)
	enum class EDLSSMode DLSSMode; // 0x1c9(0x01)
	enum class EFramerateCapMode FramerateCapMode; // 0x1ca(0x01)
	char pad_1CB[0x1]; // 0x1cb(0x01)
	int32_t GraphicsQuality; // 0x1cc(0x04)
	float FieldOfView; // 0x1d0(0x04)
	float LDRBrightness; // 0x1d4(0x04)
	float LDRContrast; // 0x1d8(0x04)
	float HDRBrightness; // 0x1dc(0x04)
	float HDRContrast; // 0x1e0(0x04)
	float Saturation; // 0x1e4(0x04)
	bool bStaticResolutionScaleOverriden; // 0x1e8(0x01)
	char pad_1E9[0x3]; // 0x1e9(0x03)
	float StaticResolutionScale; // 0x1ec(0x04)
	float TargetFramerate; // 0x1f0(0x04)
	bool bMotionBlurEnabled; // 0x1f4(0x01)
	char pad_1F5[0x3]; // 0x1f5(0x03)
	float Sharpening; // 0x1f8(0x04)
	uint32_t PcHardwareHash; // 0x1fc(0x04)
	bool bHasBeenSentSurvey; // 0x200(0x01)
	char pad_201[0x3]; // 0x201(0x03)
	float SafeZoneScale; // 0x204(0x04)
	bool bChromaticAberration; // 0x208(0x01)
	bool bAdaptiveFXQualityEnabled; // 0x209(0x01)
	bool bSkipLegalScreen; // 0x20a(0x01)
	bool bCompletedFirstSignIn; // 0x20b(0x01)
	char pad_20C[0x4]; // 0x20c(0x04)
	struct FString StoredHydraId; // 0x210(0x10)
	int64_t LastSurveyDisplayTimestamp; // 0x220(0x08)
	struct FString TextLanguageCode; // 0x228(0x10)
	struct FString DialogueLanguageCode; // 0x238(0x10)
	struct FString LastSystemLanguageCode; // 0x248(0x10)
	struct FString MuxyGameLinkRefreshToken; // 0x258(0x10)
	int32_t DetectedGraphicsQuality; // 0x268(0x04)
	int32_t DetectedSyntheticBenchmarkQuality; // 0x26c(0x04)

	void SetVOIPSideChainBehavior(bool InEnableVOIPSideChain); // Function Gobi.PlayerSettingsSystem.SetVOIPSideChainBehavior // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerSlot
// Size: 0x898 (Inherited: 0x250)
struct APlayerSlot : AInfo {
	struct FSlotIndex SlotIdx; // 0x250(0x08)
	struct FString ReservedPlayerId; // 0x258(0x10)
	bool bReserved; // 0x268(0x01)
	bool bAllowBots; // 0x269(0x01)
	enum class EGobiTeam Team; // 0x26a(0x01)
	bool bHasReceivedInitialSpawn; // 0x26b(0x01)
	bool bHasChosenLoadout; // 0x26c(0x01)
	bool bNeedsQuickPlayCharacterTransfer; // 0x26d(0x01)
	char pad_26E[0x2]; // 0x26e(0x02)
	int32_t CharacterTransferOwedDraws; // 0x270(0x04)
	float TimeSpentDead; // 0x274(0x04)
	bool bIsCurrentlyAlive; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct FDataTableRowHandle CurrentHeroRowHandle; // 0x280(0x20)
	char pad_2A0[0x20]; // 0x2a0(0x20)
	struct FCharacterCustomizationSet CurrentCustomizationSet; // 0x2c0(0x88)
	struct TArray<struct FPostRoundSummaryStatValue> CachedPostRoundBonuses; // 0x348(0x10)
	struct FRespawnSnapshot_Hero HeroRespawnSnapshot; // 0x358(0x1c8)
	char pad_520[0x1]; // 0x520(0x01)
	bool bHasEverBeenAlive; // 0x521(0x01)
	char pad_522[0x6]; // 0x522(0x06)
	struct FMulticastInlineDelegate OnSlotSelectedCharacterChanged; // 0x528(0x10)
	struct FMulticastInlineDelegate OnOwningPlayerChanged; // 0x538(0x10)
	struct FMulticastInlineDelegate OnControllingPlayerChanged; // 0x548(0x10)
	struct FMulticastInlineDelegate OnAssignedPawnChanged; // 0x558(0x10)
	struct FMulticastInlineDelegate OnPlayerNameChanged; // 0x568(0x10)
	char pad_578[0x80]; // 0x578(0x80)
	struct APawn* AssignedPawn; // 0x5f8(0x08)
	struct AGobiPlayerState* OwningPlayer; // 0x600(0x08)
	struct AGobiPlayerState* ControllingPlayer; // 0x608(0x08)
	struct FPlayerLoadout PlayerLoadout; // 0x610(0xa8)
	struct FRespawnSnapshot_Hero SaferoomSnapshot; // 0x6b8(0x1c8)
	char pad_880[0x18]; // 0x880(0x18)

	void OnRep_OwningPlayer(); // Function Gobi.PlayerSlot.OnRep_OwningPlayer // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerSlotManagerSeamlessTravelData
// Size: 0x60 (Inherited: 0x30)
struct UPlayerSlotManagerSeamlessTravelData : UObject {
	struct TArray<struct FTeamSlots> TeamSlots; // 0x30(0x10)
	struct TArray<struct FCharacterSelectMapping> TeamAMapping; // 0x40(0x10)
	struct TArray<struct FCharacterSelectMapping> TeamBMapping; // 0x50(0x10)
};

// Class Gobi.PlayerSlotManager
// Size: 0x308 (Inherited: 0x250)
struct APlayerSlotManager : AInfo {
	struct FSlotManagerConfig Config; // 0x250(0x10)
	bool bSupportsBots; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct TArray<struct FTeamSlots> TeamSlots; // 0x268(0x10)
	char pad_278[0x8]; // 0x278(0x08)
	struct FMulticastInlineDelegate OnPlayerSlotClaimed; // 0x280(0x10)
	struct FMulticastInlineDelegate OnSlotReplacedWithBot; // 0x290(0x10)
	struct FMulticastInlineDelegate OnPlayerSlotControlled; // 0x2a0(0x10)
	struct FMulticastInlineDelegate OnPlayerSlotReleased; // 0x2b0(0x10)
	struct FMulticastInlineDelegate OnPlayerSlotControlReleased; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnTeamsSwitched; // 0x2d0(0x10)
	char pad_2E0[0x20]; // 0x2e0(0x20)
	struct UDedicatedServerManager* DedicatedServerManager; // 0x300(0x08)

	bool TeamSupportsBots(enum class EGobiTeam GobiTeam); // Function Gobi.PlayerSlotManager.TeamSupportsBots // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerSpawnManagerBase
// Size: 0x3b8 (Inherited: 0x250)
struct APlayerSpawnManagerBase : AActor {
	char pad_250[0x10]; // 0x250(0x10)
	struct UEnvQuery* RescueStartPointQueryTemplate; // 0x260(0x08)
	float RescueRespawnSearchRadius; // 0x268(0x04)
	enum class ECollisionChannel RescueStartLoSChannel; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct UEnvQuery* RescueRepositionQueryTemplate; // 0x270(0x08)
	float TimeRequiredForReposition; // 0x278(0x04)
	float RepositionCheckInterval; // 0x27c(0x04)
	char pad_280[0x20]; // 0x280(0x20)
	struct UEnvQuery* ZombieStartPointQueryTemplate; // 0x2a0(0x08)
	struct UEnvQuery* ZombieStartPointNoHeroesQueryTemplate; // 0x2a8(0x08)
	char pad_2B0[0x60]; // 0x2b0(0x60)
	struct AZombiePlayerStart* ZombieTestStart; // 0x310(0x08)
	struct TArray<struct FVector> PossibleZombieStarts; // 0x318(0x10)
	struct TArray<struct FSpawnRequestContext> DeferredSpawnRequests; // 0x328(0x10)
	struct TArray<struct FSpawnRequestContext> InitialSpawnRequests; // 0x338(0x10)
	char pad_348[0x60]; // 0x348(0x60)
	struct APlayerSpawnManagerDebugger* SpawnManagerDebugger; // 0x3a8(0x08)
	char pad_3B0[0x8]; // 0x3b0(0x08)

	void SetSpawnTag(struct FName SpawnTag); // Function Gobi.PlayerSpawnManagerBase.SetSpawnTag // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerSpawnManagerDebugger
// Size: 0x280 (Inherited: 0x250)
struct APlayerSpawnManagerDebugger : AInfo {
	struct FPlayerDebugInfo FurthestAlongDebugInfo; // 0x250(0x18)
	struct TArray<struct FPlayerDebugInfo> DeadPlayerDebugInfo; // 0x268(0x10)
	float RequiredGoldenPathDelta; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)

	void DebugDraw2D(struct UCanvas* Canvas, struct APlayerController* InPlayerController); // Function Gobi.PlayerSpawnManagerDebugger.DebugDraw2D // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerSpray
// Size: 0x278 (Inherited: 0x258)
struct APlayerSpray : ADecalActor {
	struct FSprayData SprayData; // 0x258(0x10)
	struct UAkAudioEvent* SprayAudioEvent; // 0x268(0x08)
	char pad_270[0x8]; // 0x270(0x08)

	void OnRep_PlayerSpray(); // Function Gobi.PlayerSpray.OnRep_PlayerSpray // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerSpraysComponent
// Size: 0xf8 (Inherited: 0xd8)
struct UPlayerSpraysComponent : UActorComponent {
	char pad_D8[0x20]; // 0xd8(0x20)

	void ServerSpawnSpray(struct AGobiPlayerController* OwnerController, struct FTransform Transform, struct FSprayData SprayData); // Function Gobi.PlayerSpraysComponent.ServerSpawnSpray // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerSprintComponent
// Size: 0x280 (Inherited: 0x120)
struct UPlayerSprintComponent : UMovementTickableComponent {
	struct FSprintConfig SprintConfig; // 0x120(0x98)
	struct FSprintStateData SprintMoveTickData; // 0x1b8(0x08)
	char pad_1C0[0xc0]; // 0x1c0(0xc0)

	void OnCharacterJumped(); // Function Gobi.PlayerSprintComponent.OnCharacterJumped // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerStaminaComponent
// Size: 0x288 (Inherited: 0x120)
struct UPlayerStaminaComponent : UMovementTickableComponent {
	struct FMulticastInlineDelegate OnStaminaExhaustionStarted; // 0x120(0x10)
	struct FMulticastInlineDelegate OnStaminaExhaustionFinished; // 0x130(0x10)
	struct FMulticastInlineDelegate OnStaminaStateChanged; // 0x140(0x10)
	float CurrentStamina; // 0x150(0x04)
	char pad_154[0xc]; // 0x154(0x0c)
	struct FGamePropertyFloat MaxStamina; // 0x160(0x38)
	struct FGamePropertyFloat StaminaRegenPerSecond; // 0x198(0x38)
	float StaminaRegenerationDelay; // 0x1d0(0x04)
	float LowStaminaPercent; // 0x1d4(0x04)
	struct FCachedGameplayTagQuery InfiniteStaminaTagQuery; // 0x1d8(0xb0)

	float GetStaminaPct(); // Function Gobi.PlayerStaminaComponent.GetStaminaPct // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerStandIn
// Size: 0x3b8 (Inherited: 0x250)
struct APlayerStandIn : AActor {
	struct FMulticastInlineDelegate OnAppearanceChanged; // 0x250(0x10)
	enum class EPlayerStandInGender OnlyValidIfSlotMatchesGender; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct FDataTableRowHandle OnlyValidIfSlotMatchesCharacter; // 0x268(0x20)
	struct FDataTableRowHandle ConfigureForNonPartyCharacter; // 0x288(0x20)
	struct FDataTableRowHandle CharacterRowHandle; // 0x2a8(0x20)
	struct FCharacterCustomizationSet CustomizationSet; // 0x2c8(0x88)
	enum class EDrenchSettings DrenchSettings; // 0x350(0x01)
	char pad_351[0x1f]; // 0x351(0x1f)
	struct UAnimSequence* MaleDefaultAnimation; // 0x370(0x08)
	struct UAnimSequence* FemaleDefaultAnimation; // 0x378(0x08)
	struct UMeshMaterialParamSet* IncappedMeshMaterialParamSet; // 0x380(0x08)
	struct UMeshMaterialParamSet* DeadMeshMaterialParamSet; // 0x388(0x08)
	char pad_390[0x28]; // 0x390(0x28)

	void SetSelectedCharacter(struct FDataTableRowHandle InCharacterRowHandle); // Function Gobi.PlayerStandIn.SetSelectedCharacter // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerStateAnalyticsComponent
// Size: 0xe8 (Inherited: 0xd8)
struct UPlayerStateAnalyticsComponent : UActorComponent {
	char pad_D8[0x10]; // 0xd8(0x10)
};

// Class Gobi.PlayerStatsComponent
// Size: 0x2c0 (Inherited: 0xd8)
struct UPlayerStatsComponent : UActorComponent {
	struct TArray<struct UStatTrackerBase*> StatTrackers; // 0xd8(0x10)
	struct TArray<struct UStatTrackerBase*> StatTrackerClasses; // 0xe8(0x10)
	struct AController* OwningController; // 0xf8(0x08)
	struct UGobiPlayerProfileComponent* PlayerProfileComponent; // 0x100(0x08)
	char pad_108[0x1b8]; // 0x108(0x1b8)

	void HandleResetMission(); // Function Gobi.PlayerStatsComponent.HandleResetMission // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerViewComponent
// Size: 0x230 (Inherited: 0xd8)
struct UPlayerViewComponent : UActorComponent {
	struct FMulticastInlineDelegate OnViewChanged; // 0xd8(0x10)
	char pad_E8[0x10]; // 0xe8(0x10)
	bool bSupportsFirstPerson; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	struct FPlayerViewConfig FirstPersonViewConfig; // 0xfc(0x3c)
	struct FPlayerViewConfig ThirdPersonViewConfig; // 0x138(0x3c)
	char pad_174[0x4]; // 0x174(0x04)
	struct FGameplayTagContainer ThirdPersonTags; // 0x178(0x20)
	struct FGameplayTagContainer ThirdPersonOrbitTags; // 0x198(0x20)
	struct FGameplayTagContainer ThirdPersonOccludedTags; // 0x1b8(0x20)
	bool bThirdPersonOrbitResetsToFirstPersonRotation; // 0x1d8(0x01)
	char pad_1D9[0x3]; // 0x1d9(0x03)
	float CharacterFadeOutDistance; // 0x1dc(0x04)
	float CharacterFadeOutOpacity; // 0x1e0(0x04)
	float CharacterHideDistance; // 0x1e4(0x04)
	char pad_1E8[0x28]; // 0x1e8(0x28)
	struct ULifeStateComponent* LifeStateComponent; // 0x210(0x08)
	struct UGameplayTagsComponent* GameplayTagsComponent; // 0x218(0x08)
	struct FPlayerViewData RepViewData; // 0x220(0x0c)
	char pad_22C[0x4]; // 0x22c(0x04)

	void OnOwnerTagChange(struct FGameplayTag Tag, bool bExists); // Function Gobi.PlayerViewComponent.OnOwnerTagChange // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayerWaypointsComponent
// Size: 0xd8 (Inherited: 0xd8)
struct UPlayerWaypointsComponent : UActorComponent {

	void SpawnWaypoint(struct FWaypointDefinition WaypointDef, struct FVector Location); // Function Gobi.PlayerWaypointsComponent.SpawnWaypoint // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayHitReactionComponent
// Size: 0x1e0 (Inherited: 0xd8)
struct UPlayHitReactionComponent : UActorComponent {
	struct FMulticastInlineDelegate OnHitReaction; // 0xd8(0x10)
	char pad_E8[0x78]; // 0xe8(0x78)
	struct TArray<struct UMontageSet*> MontageSets; // 0x160(0x10)
	struct FVector2D TimeBetweenReactions; // 0x170(0x08)
	bool bAutoTriggerHitReactsOnRecentDamage; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	struct UGameplayEvaluatorSet* DeathFilterSet; // 0x180(0x08)
	struct FGameplayTagQuery CameraShakeRequiredDamageQuery; // 0x188(0x48)
	struct TArray<struct FCameraShakeReaction> CameraShakeReactions; // 0x1d0(0x10)

	void TriggerReactionFromReplicatedDamage(); // Function Gobi.PlayHitReactionComponent.TriggerReactionFromReplicatedDamage // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayMontageAndWaitProxy
// Size: 0xa8 (Inherited: 0x30)
struct UPlayMontageAndWaitProxy : UObject {
	struct FMulticastInlineDelegate OnCompleted; // 0x30(0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x40(0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0x50(0x10)
	struct FMulticastInlineDelegate OnNotifyBegin; // 0x60(0x10)
	struct FMulticastInlineDelegate OnNotifyEnd; // 0x70(0x10)
	char pad_80[0x28]; // 0x80(0x28)

	void OnNotifyEndReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload BranchingPointNotifyPayload); // Function Gobi.PlayMontageAndWaitProxy.OnNotifyEndReceived // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PlayReplicatedMontageCallbackProxy
// Size: 0xb0 (Inherited: 0x30)
struct UPlayReplicatedMontageCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnCompleted; // 0x30(0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x40(0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0x50(0x10)
	struct FMulticastInlineDelegate OnNotifyBegin; // 0x60(0x10)
	struct FMulticastInlineDelegate OnNotifyEnd; // 0x70(0x10)
	char pad_80[0x30]; // 0x80(0x30)

	void OnNotifyEndReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload BranchingPointNotifyPayload); // Function Gobi.PlayReplicatedMontageCallbackProxy.OnNotifyEndReceived // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PooledObjectInterface
// Size: 0x30 (Inherited: 0x30)
struct UPooledObjectInterface : UInterface {
};

// Class Gobi.PopupManager
// Size: 0x78 (Inherited: 0x30)
struct UPopupManager : UGobiObject {
	struct FMulticastInlineDelegate OnPopupOpened; // 0x30(0x10)
	struct FMulticastInlineDelegate OnPopupClosed; // 0x40(0x10)
	struct TArray<struct UPopupUserWidget*> PopupQueue; // 0x50(0x10)
	char pad_60[0x18]; // 0x60(0x18)

	struct UPopupUserWidget* OpenPopup(struct UPopupUserWidget* PopupClass, bool bDeferredOpen); // Function Gobi.PopupManager.OpenPopup // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PopupPromptVolume
// Size: 0x310 (Inherited: 0x288)
struct APopupPromptVolume : ATriggerVolume {
	char pad_288[0x50]; // 0x288(0x50)
	struct FText PopupTitle; // 0x2d8(0x18)
	struct FText PopupMessage; // 0x2f0(0x18)
	enum class EPopupButtonCombo ButtonCombo; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)

	void OnPopupClosed(struct UPopupUserWidget* Popup, struct FName Command); // Function Gobi.PopupPromptVolume.OnPopupClosed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PostRoundAccoladeUserWidget
// Size: 0x460 (Inherited: 0x450)
struct UPostRoundAccoladeUserWidget : UGobiUserWidget {
	char pad_450[0x10]; // 0x450(0x10)
};

// Class Gobi.PostRoundChallengeObjectiveUserWidget
// Size: 0x4d8 (Inherited: 0x450)
struct UPostRoundChallengeObjectiveUserWidget : UGobiUserWidget {
	char pad_450[0x10]; // 0x450(0x10)
	struct FGobiCountAnim PointCountAnim; // 0x460(0x28)
	struct FGobiCountAnim DiffCountAnim; // 0x488(0x28)
	char pad_4B0[0x28]; // 0x4b0(0x28)

	void StartObjectiveAnimation(float Delay); // Function Gobi.PostRoundChallengeObjectiveUserWidget.StartObjectiveAnimation // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PostRoundChallengeResultsUserWidget
// Size: 0x5e0 (Inherited: 0x450)
struct UPostRoundChallengeResultsUserWidget : UGobiUserWidget {
	struct FGobiCountAnim ScoreCountAnim; // 0x450(0x28)
	struct FGobiCountAnim ScoreDiffCountAnim; // 0x478(0x28)
	struct FGobiCountAnim NewBestScoreCountAnim; // 0x4a0(0x28)
	struct FGobiCountAnim RankCountAnim; // 0x4c8(0x28)
	struct FGobiCountAnim RankDiffCountAnim; // 0x4f0(0x28)
	struct FGobiCountAnim SupplyPointsCountAnim; // 0x518(0x28)
	float ObjectiveDelay; // 0x540(0x04)
	char pad_544[0x9c]; // 0x544(0x9c)

	void StartRankFadeIn(); // Function Gobi.PostRoundChallengeResultsUserWidget.StartRankFadeIn // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PostRoundLineupUserWidget
// Size: 0x470 (Inherited: 0x450)
struct UPostRoundLineupUserWidget : UGobiUserWidget {
	struct FMulticastInlineDelegate OnShowLineup; // 0x450(0x10)
	char pad_460[0x10]; // 0x460(0x10)

	void OnShowLineup__DelegateSignature(bool bShow); // DelegateFunction Gobi.PostRoundLineupUserWidget.OnShowLineup__DelegateSignature // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PostRoundReadyButtonUserWidget
// Size: 0x458 (Inherited: 0x450)
struct UPostRoundReadyButtonUserWidget : UGobiUserWidget {
	char pad_450[0x8]; // 0x450(0x08)

	void SetReadyPip(struct UWidget* PipWidget, bool bIsReady); // Function Gobi.PostRoundReadyButtonUserWidget.SetReadyPip // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PostRoundResultsSplashUserWidget
// Size: 0x458 (Inherited: 0x450)
struct UPostRoundResultsSplashUserWidget : UGobiUserWidget {
	char pad_450[0x8]; // 0x450(0x08)

	void ShowStat(struct FPostRoundSummaryStatValue StatValue); // Function Gobi.PostRoundResultsSplashUserWidget.ShowStat // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PostRoundScreen
// Size: 0x560 (Inherited: 0x530)
struct UPostRoundScreen : UUIScreen {
	struct TArray<struct FPostRoundPanelInfo> PanelInfoArray; // 0x530(0x10)
	char pad_540[0x20]; // 0x540(0x20)

	int32_t VisiblePanelIndex(); // Function Gobi.PostRoundScreen.VisiblePanelIndex // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PostRoundStatsUserWidget
// Size: 0x450 (Inherited: 0x450)
struct UPostRoundStatsUserWidget : UGobiUserWidget {

	void InitializeStats(); // Function Gobi.PostRoundStatsUserWidget.InitializeStats // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PostRoundSummaryUserWidget
// Size: 0x4b0 (Inherited: 0x450)
struct UPostRoundSummaryUserWidget : UGobiUserWidget {
	struct TArray<struct FUIPlayerStat> Stats; // 0x450(0x10)
	struct FSlateColor FailureTextColor; // 0x460(0x30)
	char pad_490[0x20]; // 0x490(0x20)

	void ShowStat(struct FPostRoundSummaryStatValue StatValue); // Function Gobi.PostRoundSummaryUserWidget.ShowStat // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PounceComponent
// Size: 0x938 (Inherited: 0x1c8)
struct UPounceComponent : UAbilityComponent {
	char pad_1C8[0x8]; // 0x1c8(0x08)
	struct FMulticastInlineDelegate OnPounceCookStarted; // 0x1d0(0x10)
	struct FMulticastInlineDelegate OnPounceCookEnded; // 0x1e0(0x10)
	struct FMulticastInlineDelegate OnPounceEnded; // 0x1f0(0x10)
	bool bUsesTuningData; // 0x200(0x01)
	char pad_201[0x3]; // 0x201(0x03)
	struct FName TuningDataIdentifier; // 0x204(0x08)
	char pad_20C[0x4]; // 0x20c(0x04)
	struct FPounceTuning PounceTuning; // 0x210(0xe0)
	struct FName GrabCollisionMeshTag; // 0x2f0(0x08)
	struct TArray<struct UAnimMontage*> LeapMontages; // 0x2f8(0x10)
	struct TArray<struct UAnimMontage*> LeapFromWallMontages; // 0x308(0x10)
	bool bLeapMontagePlaysLoop; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct TArray<struct UAnimMontage*> LandMontages; // 0x320(0x10)
	struct FAttackStumbleMontage AttackStumbleMontage; // 0x330(0x10)
	struct FAttackStumbleMontage AttackStumbleIncapMontage; // 0x340(0x10)
	struct TArray<struct UAnimMontage*> AttackMontages; // 0x350(0x10)
	struct TArray<struct UAnimMontage*> CookingMontages; // 0x360(0x10)
	struct TArray<struct UAnimMontage*> LeapFromWallCookingMontages; // 0x370(0x10)
	struct TArray<struct UAnimMontage*> ReleaseDeadCharacterMontages; // 0x380(0x10)
	struct TArray<struct UGameplayEffect*> ApplyEffects; // 0x390(0x10)
	struct TArray<struct UGameplayEffect*> ApplyAttackingEffects; // 0x3a0(0x10)
	struct TArray<struct UGameplayEffect*> ApplyEndingEffects; // 0x3b0(0x10)
	struct TArray<struct UGameplayEffect*> ApplyEndingEffectsToTarget; // 0x3c0(0x10)
	struct TArray<struct UGameplayEffect*> ApplyEffectsToPouncedTarget; // 0x3d0(0x10)
	struct TArray<struct UGameplayEffect*> CookingEffects; // 0x3e0(0x10)
	struct FGameplayTagContainer AppliedTags; // 0x3f0(0x20)
	struct FGameplayTagContainer AppliedLeapingTags; // 0x410(0x20)
	struct FGameplayTagContainer LeapInterruptTags; // 0x430(0x20)
	struct FGameplayTagContainer BlockingTags; // 0x450(0x20)
	struct FGameplayTagContainer BlockingTargetTags; // 0x470(0x20)
	struct FGameplayTagQuery RequiredTargetMoveTagQuery; // 0x490(0x48)
	struct FGameplayTagQuery CancelTags; // 0x4d8(0x48)
	struct FGameplayTagQuery CancelTargetTags; // 0x520(0x48)
	struct TArray<struct FEnemyAudioEvent> AudioCookingStopEvents; // 0x568(0x10)
	struct TArray<struct FEnemyAudioEvent> AudioCookingInterruptedEvents; // 0x578(0x10)
	struct FGameplayTagQuery MoveIgnoreCharacters; // 0x588(0x48)
	bool bCrouchWhenCooking; // 0x5d0(0x01)
	bool bCrouchWhenLeaping; // 0x5d1(0x01)
	bool bDamageInterruptsLeap; // 0x5d2(0x01)
	char pad_5D3[0x5]; // 0x5d3(0x05)
	struct UCurveFloat* SpeedMultiplierCurve; // 0x5d8(0x08)
	float MaxDistanceFromGrabbedTarget; // 0x5e0(0x04)
	char pad_5E4[0x4]; // 0x5e4(0x04)
	struct UGobiDamageType* ChargeDamageTypeToFriendlies; // 0x5e8(0x08)
	struct FName LineOfSightTargetComponentTag; // 0x5f0(0x08)
	float LineOfSightSweepRadius; // 0x5f8(0x04)
	float LineOfSightSweepHalfHeight; // 0x5fc(0x04)
	struct FCollisionProfileName PounceCollisionProfileName; // 0x600(0x08)
	float LandCheckAheadDotThreshold; // 0x608(0x04)
	bool bIsBunnyKick; // 0x60c(0x01)
	char pad_60D[0x3]; // 0x60d(0x03)
	struct FPounceBunnyKick BunnyKick; // 0x610(0x60)
	struct AGobiCharacter* MCAI_Class; // 0x670(0x08)
	bool bSetVictimCameraDownwards; // 0x678(0x01)
	char pad_679[0x7]; // 0x679(0x07)
	struct FPounceAIConfig AI; // 0x680(0x10)
	struct FPouncePlayerConfig Player; // 0x690(0xd8)
	struct AGobiCharacter* GameplayGrabbedCharacter; // 0x768(0x08)
	bool bLeapInterrupted; // 0x770(0x01)
	char pad_771[0x1c7]; // 0x771(0x1c7)

	void StopPounce(); // Function Gobi.PounceComponent.StopPounce // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PouncePropertyMod
// Size: 0xa8 (Inherited: 0xa8)
struct UPouncePropertyMod : UObjectPropertyMod {
};

// Class Gobi.PreparationArea
// Size: 0x278 (Inherited: 0x250)
struct APreparationArea : AActor {
	struct USceneComponent* DefaultRootComponent; // 0x250(0x08)
	uint32_t SupportedGameModes; // 0x258(0x04)
	char pad_25C[0x1c]; // 0x25c(0x1c)

	void OnPlayerExited(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComponent, int32_t OtherBodyIndex); // Function Gobi.PreparationArea.OnPlayerExited // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PreRenderedCinematicScreen
// Size: 0x588 (Inherited: 0x530)
struct UPreRenderedCinematicScreen : UUIScreen {
	struct FDataTableRowHandle CinematicRowHandle; // 0x530(0x20)
	struct UMediaPlayer* MediaPlayer; // 0x550(0x08)
	char pad_558[0x30]; // 0x558(0x30)

	void StopCinematic(); // Function Gobi.PreRenderedCinematicScreen.StopCinematic // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PreRoundDeckSelectUserWidget
// Size: 0x450 (Inherited: 0x450)
struct UPreRoundDeckSelectUserWidget : UGobiUserWidget {
};

// Class Gobi.PrespawnComponent
// Size: 0x130 (Inherited: 0xd8)
struct UPrespawnComponent : UActorComponent {
	struct FPreSpawnInfo PreSpawnInfo; // 0xd8(0x38)
	char pad_110[0x8]; // 0x110(0x08)
	struct AActor* PreSpawnActorClass; // 0x118(0x08)
	struct USkeletalMeshComponent* PreSpawnSKMComp; // 0x120(0x08)
	struct TWeakObjectPtr<struct AActor> PreSpawnActor; // 0x128(0x08)

	void OnRep_PreSpawnInfo(); // Function Gobi.PrespawnComponent.OnRep_PreSpawnInfo // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ProceduralSnapToGroundComponent
// Size: 0xf8 (Inherited: 0xd8)
struct UProceduralSnapToGroundComponent : UActorComponent {
	char pad_D8[0x9]; // 0xd8(0x09)
	enum class EProceduralBuildPhase ProceduralPhase; // 0xe1(0x01)
	char pad_E2[0x2]; // 0xe2(0x02)
	float TraceZOffset; // 0xe4(0x04)
	float TraceDistance; // 0xe8(0x04)
	struct FCollisionProfileName TraceProfileName; // 0xec(0x08)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// Class Gobi.ProfileDeltaAnalytics
// Size: 0x1f8 (Inherited: 0x30)
struct UProfileDeltaAnalytics : UObject {
	char pad_30[0x1c8]; // 0x30(0x1c8)
};

// Class Gobi.ProfilePhysicsCaster
// Size: 0x280 (Inherited: 0x250)
struct AProfilePhysicsCaster : AActor {
	int32_t NumCasts; // 0x250(0x04)
	enum class EPhysicsCasterType CasterType; // 0x254(0x01)
	enum class EPhysicsCasterPosition CasterStart; // 0x255(0x01)
	enum class EPhysicsCasterPosition CasterEnd; // 0x256(0x01)
	bool bTraceComplex; // 0x257(0x01)
	enum class EPhysicsCasterTraceType TraceType; // 0x258(0x01)
	enum class ECollisionChannel Channel; // 0x259(0x01)
	char pad_25A[0x2]; // 0x25a(0x02)
	struct FName TraceTypeProfileName; // 0x25c(0x08)
	bool bTraceHitOnly; // 0x264(0x01)
	bool bGetMaterial; // 0x265(0x01)
	char pad_266[0x2]; // 0x266(0x02)
	float InitialDelay; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct UStaticMeshComponent* UserBounds; // 0x270(0x08)
	char pad_278[0x8]; // 0x278(0x08)
};

// Class Gobi.ProfileScreen
// Size: 0x560 (Inherited: 0x560)
struct UProfileScreen : UHubChildScreen {
};

// Class Gobi.ProfilingCharacter
// Size: 0x1060 (Inherited: 0x1060)
struct AProfilingCharacter : APlayerCharacter {
};

// Class Gobi.ProfilingGameMode
// Size: 0x5c0 (Inherited: 0x438)
struct AProfilingGameMode : AGobiGameModeBase {
	struct AGameplayAnalyticsManager* AnalyticsManager; // 0x438(0x08)
	char pad_440[0x180]; // 0x440(0x180)
};

// Class Gobi.ProfilingPlayerController
// Size: 0x8a0 (Inherited: 0x838)
struct AProfilingPlayerController : AGobiPlayerController {
	char pad_838[0x8]; // 0x838(0x08)
	struct AActor* HoveredActor; // 0x840(0x08)
	struct UActorComponent* HoveredComponent; // 0x848(0x08)
	struct TArray<struct AActor*> HiddenActorStack; // 0x850(0x10)
	char pad_860[0x28]; // 0x860(0x28)
	struct TArray<struct AProfileCamera*> ProfileCameras; // 0x888(0x10)
	char pad_898[0x8]; // 0x898(0x08)

	void DebugDrawHandler(struct UCanvas* Canvas, struct APlayerController* InPlayerController); // Function Gobi.ProfilingPlayerController.DebugDrawHandler // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ProgressionDeveloperSettings
// Size: 0x40 (Inherited: 0x40)
struct UProgressionDeveloperSettings : UDeveloperSettings {
};

// Class Gobi.ProgressionUtils
// Size: 0x30 (Inherited: 0x30)
struct UProgressionUtils : UBlueprintFunctionLibrary {

	int32_t ProductUnlockCount(struct APlayerController* Controller, struct TArray<struct FDataTableRowHandle> RowHandles); // Function Gobi.ProgressionUtils.ProductUnlockCount // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ProjectileImpactEmitterComponent
// Size: 0xe8 (Inherited: 0xd8)
struct UProjectileImpactEmitterComponent : UActorComponent {
	struct FName GameplayEffectEmitterComponentTag; // 0xd8(0x08)
	bool bEmitOnFirstImpactOnly; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)

	void OnImpact(struct FHitResult HitResult); // Function Gobi.ProjectileImpactEmitterComponent.OnImpact // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ProjectilePin
// Size: 0x338 (Inherited: 0x250)
struct AProjectilePin : AActor {
	struct FGameplayTagQuery BlockingTargetTags; // 0x250(0x48)
	float MaxPinTime; // 0x298(0x04)
	bool bUseOwnerChargePinTime; // 0x29c(0x01)
	bool bDestroyOnInstigatorDeath; // 0x29d(0x01)
	char pad_29E[0x2]; // 0x29e(0x02)
	struct FGameplayTag OwnerThrowComponentTag; // 0x2a0(0x08)
	struct FName AttachBone; // 0x2a8(0x08)
	bool bIgnoreParentRotation; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct FGameplayTagContainer VictimCancelTags; // 0x2b8(0x20)
	struct TArray<struct UGameplayEffect*> ApplyPinnedEffects; // 0x2d8(0x10)
	struct TArray<struct UGameplayEffect*> ApplyInstigatorEffects; // 0x2e8(0x10)
	struct UParticleSystem* SpawnEmitterOnDestroy; // 0x2f8(0x08)
	char pad_300[0x4]; // 0x300(0x04)
	enum class EProjectilePinState CurrentState; // 0x304(0x04)
	char pad_308[0x30]; // 0x308(0x30)

	void OnVictimTagChanged(struct FGameplayTag Tag, bool bTagExists); // Function Gobi.ProjectilePin.OnVictimTagChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ProjectileSimple
// Size: 0x110 (Inherited: 0x30)
struct UProjectileSimple : UObject {
	char pad_30[0x64]; // 0x30(0x64)
	float MaxLifetime; // 0x94(0x04)
	float CollisionRadius; // 0x98(0x04)
	enum class ECollisionChannel CollisionChannel; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	float CharacterCollisionRadius; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FGameplayTagQuery ContinueMovingIfHitActorWithTags; // 0xa8(0x48)
	struct UImpactEffectConfig* ImpactEffectConfig; // 0xf0(0x08)
	bool bSpawnImpactDeferred; // 0xf8(0x01)
	bool bAlsoImpactGroundIfImpactedCharacter; // 0xf9(0x01)
	char pad_FA[0x2]; // 0xfa(0x02)
	float GroundTraceDownDistance; // 0xfc(0x04)
	bool bApplyDamage; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	float DamageAmount; // 0x104(0x04)
	struct UGobiDamageType* DamageType; // 0x108(0x08)
};

// Class Gobi.ProjectileSprayComponent
// Size: 0x3f0 (Inherited: 0x1c8)
struct UProjectileSprayComponent : UAbilityComponent {
	struct FMulticastInlineDelegate OnSprayEnded; // 0x1c8(0x10)
	struct FProjectileSprayConfig SprayConfig; // 0x1d8(0x130)
	struct FProjectileSprayMoveTickData MoveTickData; // 0x308(0x0c)
	char pad_314[0x4]; // 0x314(0x04)
	struct TArray<struct UProjectileSimple*> Projectiles; // 0x318(0x10)
	char pad_328[0x8c]; // 0x328(0x8c)
	struct FVector SprayTarget; // 0x3b4(0x0c)
	char pad_3C0[0x30]; // 0x3c0(0x30)

	void StopSpray(); // Function Gobi.ProjectileSprayComponent.StopSpray // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ProjectileSprayTrait
// Size: 0x168 (Inherited: 0x30)
struct UProjectileSprayTrait : UTrait {
	struct FProjectileSprayConfig Config; // 0x30(0x130)
	struct UProjectileSprayComponent* ProjectileSprayComponentClass; // 0x160(0x08)
};

// Class Gobi.PushToTalkComponent
// Size: 0xe8 (Inherited: 0xd8)
struct UPushToTalkComponent : UActorComponent {
	struct UInputComponent* InputComponent; // 0xd8(0x08)
	char pad_E0[0x8]; // 0xe0(0x08)

	void UpdateTalkingState(); // Function Gobi.PushToTalkComponent.UpdateTalkingState // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PVPGameMode
// Size: 0x558 (Inherited: 0x520)
struct APVPGameMode : AMissionGameMode {
	struct TArray<struct APawn*> DefaultZombiePawnClasses; // 0x520(0x10)
	float ZombieRespawnEQSTimerMax; // 0x530(0x04)
	char pad_534[0x4]; // 0x534(0x04)
	float MutationPointTrickleRate; // 0x538(0x04)
	int32_t MutationPointTrickleAmount; // 0x53c(0x04)
	struct TArray<int32_t> ZombieMutationPointsPerRound; // 0x540(0x10)
	char pad_550[0x8]; // 0x550(0x08)
};

// Class Gobi.PVPClassicGameMode
// Size: 0x5c0 (Inherited: 0x558)
struct APVPClassicGameMode : APVPGameMode {
	float ZombieRelocateOnDistanceFromHeroes; // 0x558(0x04)
	int32_t MaxDistancePointsToObjective; // 0x55c(0x04)
	float ExpGrowthFactor; // 0x560(0x04)
	float BonusScoreForRemainingCapable; // 0x564(0x04)
	struct FGameplayTagQuery HasBeenIncapacitatedQuery; // 0x568(0x48)
	float DistanceTraveledUpdateInterval; // 0x5b0(0x04)
	char pad_5B4[0xc]; // 0x5b4(0x0c)

	void SetMaxDistancePointsToObjective(int32_t NewMaxDistancePointsToObjective); // Function Gobi.PVPClassicGameMode.SetMaxDistancePointsToObjective // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PVPGameState
// Size: 0x670 (Inherited: 0x610)
struct APVPGameState : AGobiGameState {
	struct TArray<struct FQueuedZombieRespawnState> QueuedZombieRespawnState; // 0x610(0x10)
	struct TMap<struct APawn*, struct AGobiPlayerState*> LastQueueZombiePlayerTurns; // 0x620(0x50)

	void ServerRequestQueueZombieRespawn(struct APawn* PawnClass, struct APlayerState* PlayerState); // Function Gobi.PVPGameState.ServerRequestQueueZombieRespawn // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PVPClassicGameState
// Size: 0x670 (Inherited: 0x670)
struct APVPClassicGameState : APVPGameState {
};

// Class Gobi.PvPEventsFeedUserWidget
// Size: 0x478 (Inherited: 0x450)
struct UPvPEventsFeedUserWidget : UGobiUserWidget {
	struct UGobiUserWidget* EntryWidget; // 0x450(0x08)
	int32_t MaxEntries; // 0x458(0x04)
	float EntryExpireSeconds; // 0x45c(0x04)
	struct TArray<struct FPvPEventData> PvPEventEntries; // 0x460(0x10)
	char pad_470[0x8]; // 0x470(0x08)

	void OnPvPEvent(struct FText EventText); // Function Gobi.PvPEventsFeedUserWidget.OnPvPEvent // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PVPGameModeSeamessTravelData
// Size: 0x38 (Inherited: 0x30)
struct UPVPGameModeSeamessTravelData : UObject {
	bool bTeamAHero; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Gobi.PVPHoldoutActor
// Size: 0x408 (Inherited: 0x250)
struct APVPHoldoutActor : AActor {
	struct USceneComponent* DefaultRootComponent; // 0x250(0x08)
	bool bUsePlayAreaVolume; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct UBoxComponent* PlayAreaBox; // 0x260(0x08)
	struct AVolume* PlayAreaVolume; // 0x268(0x08)
	struct USceneComponent* SafeZoneRoot; // 0x270(0x08)
	struct UCapsuleComponent* SafeZoneCollisionCapsule; // 0x278(0x08)
	struct UStaticMeshComponent* SafeZoneVisibleCylinder; // 0x280(0x08)
	struct UStaticMeshComponent* SafeZoneCenterMarker; // 0x288(0x08)
	struct USplineComponent* SafeZoneWallSpline; // 0x290(0x08)
	struct UAkComponent* SafeZoneWallAK; // 0x298(0x08)
	float SafeZoneVisibleCylinderRadiusScale; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct TArray<struct FGameplayTag> ScenarioComponentTags; // 0x2a8(0x10)
	struct FGameplayTag FinalPhaseScenarioComponentTag; // 0x2b8(0x08)
	enum class EHoldoutState CurrentState; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	float StateStartTime; // 0x2c4(0x04)
	struct FHoldoutCollapseStateData CollapseStateData; // 0x2c8(0x24)
	char pad_2EC[0x10c]; // 0x2ec(0x10c)
	struct UHoldoutConfig* HoldoutConfig; // 0x3f8(0x08)
	char pad_400[0x8]; // 0x400(0x08)

	void OnRep_State(enum class EHoldoutState PrevState); // Function Gobi.PVPHoldoutActor.OnRep_State // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PVPHoldoutAnalyticsComponent
// Size: 0x198 (Inherited: 0xd8)
struct UPVPHoldoutAnalyticsComponent : UActorComponent {
	char pad_D8[0xc0]; // 0xd8(0xc0)
};

// Class Gobi.PVPHoldOutAreaVolume
// Size: 0x288 (Inherited: 0x288)
struct APVPHoldOutAreaVolume : AVolume {
};

// Class Gobi.PVPHoldoutGameMode
// Size: 0x578 (Inherited: 0x558)
struct APVPHoldoutGameMode : APVPGameMode {
	struct FPVPHoldoutSupplyPointsConfig SupplyPointsConfig; // 0x558(0x18)
	char pad_570[0x8]; // 0x570(0x08)
};

// Class Gobi.PVPHoldoutGameState
// Size: 0x6a8 (Inherited: 0x670)
struct APVPHoldoutGameState : APVPGameState {
	struct FMulticastInlineDelegate OnHoldoutStateChanged; // 0x670(0x10)
	int32_t MaxRounds; // 0x680(0x04)
	float SurvivalStartTime; // 0x684(0x04)
	float SurvivalEndTime; // 0x688(0x04)
	char pad_68C[0x4]; // 0x68c(0x04)
	struct TArray<int32_t> TeamSurvivalTimes; // 0x690(0x10)
	char pad_6A0[0x8]; // 0x6a0(0x08)

	float GetTeamSurvivalTime(enum class EMatchmakingTeam Team); // Function Gobi.PVPHoldoutGameState.GetTeamSurvivalTime // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PvPHoldoutPhaseUserWidget
// Size: 0x470 (Inherited: 0x450)
struct UPvPHoldoutPhaseUserWidget : UGobiUserWidget {
	char pad_450[0x20]; // 0x450(0x20)

	void OnHoldoutStateChanged(enum class EHoldoutState NewState); // Function Gobi.PvPHoldoutPhaseUserWidget.OnHoldoutStateChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PVPHoldoutPlayerSpawnManager
// Size: 0x400 (Inherited: 0x3b8)
struct APVPHoldoutPlayerSpawnManager : APlayerSpawnManagerBase {
	struct UEnvQuery* HeroStartPointQueryTemplate; // 0x3b8(0x08)
	char pad_3C0[0x8]; // 0x3c0(0x08)
	struct AGobiPlayerStart* HeroTestStart; // 0x3c8(0x08)
	char pad_3D0[0x30]; // 0x3d0(0x30)

	void RetryHeroSpawnEQS(); // Function Gobi.PVPHoldoutPlayerSpawnManager.RetryHeroSpawnEQS // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.PvPHoldoutStateUserWidget
// Size: 0x4c0 (Inherited: 0x450)
struct UPvPHoldoutStateUserWidget : UGobiUserWidget {
	struct UAkAudioEvent* PhaseEndAudio; // 0x450(0x08)
	struct UAkAudioEvent* PhaseTransitionAudio; // 0x458(0x08)
	struct UAkAudioEvent* TimerClickStartAudio; // 0x460(0x08)
	struct UAkAudioEvent* TimerClickAudio; // 0x468(0x08)
	struct UAkAudioEvent* TimerSurpassPositiveAudio; // 0x470(0x08)
	struct UAkAudioEvent* TimerSurpassNegativeAudio; // 0x478(0x08)
	int32_t ALARM_THRESHOLD_SECONDS; // 0x480(0x04)
	char pad_484[0x3c]; // 0x484(0x3c)

	void OnHoldoutStateChanged(enum class EHoldoutState NewState); // Function Gobi.PvPHoldoutStateUserWidget.OnHoldoutStateChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.HoldoutConfig
// Size: 0x80 (Inherited: 0x38)
struct UHoldoutConfig : UDataAsset {
	float SafeZoneFinalRadius; // 0x38(0x04)
	float PrepPhaseDuration; // 0x3c(0x04)
	struct TArray<float> CollapsePhaseDurations; // 0x40(0x10)
	float HordePhaseDuration; // 0x50(0x04)
	float HordePhaseHordeDelay; // 0x54(0x04)
	struct TArray<struct UGameplayEffect*> HeroPrepPhaseGameplayEffects; // 0x58(0x10)
	float FinalPhaseScenarioLoopTime; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FHoldoutCollapsePhase> CollapsePhases; // 0x70(0x10)
};

// Class Gobi.PVPStatTracker
// Size: 0x40 (Inherited: 0x40)
struct UPVPStatTracker : UStatTrackerBase {

	void HandlePVPHoldoutEnd(bool bWon); // Function Gobi.PVPStatTracker.HandlePVPHoldoutEnd // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.QADashBoundary
// Size: 0x268 (Inherited: 0x250)
struct AQADashBoundary : AActor {
	struct UTextRenderComponent* TextRenderDottedLine; // 0x250(0x08)
	struct UTextRenderComponent* TextRenderSection; // 0x258(0x08)
	struct UTextRenderComponent* TextRenderSector; // 0x260(0x08)
};

// Class Gobi.QuickInvitePopupUserWidget
// Size: 0x470 (Inherited: 0x470)
struct UQuickInvitePopupUserWidget : UPopupUserWidget {

	void UpdateListFocus(); // Function Gobi.QuickInvitePopupUserWidget.UpdateListFocus // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.RadioSpeakerUserWidget
// Size: 0x478 (Inherited: 0x450)
struct URadioSpeakerUserWidget : UGobiUserWidget {
	char pad_450[0x28]; // 0x450(0x28)

	void OnCommsDialoguePosted(struct FText Speaker, bool bIsSpeaking); // Function Gobi.RadioSpeakerUserWidget.OnCommsDialoguePosted // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.RadiusHordeScenarioComponent
// Size: 0x3e0 (Inherited: 0x328)
struct URadiusHordeScenarioComponent : UBlueprintableScenarioComponent {
	float AffectCharactersRadius; // 0x328(0x04)
	char pad_32C[0x4]; // 0x32c(0x04)
	struct FGameplayTagQuery CharacterMatchTags; // 0x330(0x48)
	bool bActivateOnOwnerCharacterDeath; // 0x378(0x01)
	char pad_379[0x3]; // 0x379(0x03)
	float OnDeathActivateDelay; // 0x37c(0x04)
	struct AGobiCharacter* HordeOnCharacterClass; // 0x380(0x08)
	enum class EPlayerHordeTriggerTypes AlertTriggerHordeType; // 0x388(0x01)
	char pad_389[0x57]; // 0x389(0x57)

	void OnOwnerDeath(struct UHealthComponent* HealthComponent); // Function Gobi.RadiusHordeScenarioComponent.OnOwnerDeath // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.WaterRagdollSettings
// Size: 0x90 (Inherited: 0x38)
struct UWaterRagdollSettings : UDataAsset {
	struct FName CenterOfMassBoneName; // 0x38(0x08)
	float CenterOfMassBodyRadius; // 0x40(0x04)
	float MaxForceDepth; // 0x44(0x04)
	float Force; // 0x48(0x04)
	float LinearDampening; // 0x4c(0x04)
	float AngularDampening; // 0x50(0x04)
	float CollisionSphereRadius; // 0x54(0x04)
	struct FName CollisionSocketName; // 0x58(0x08)
	struct TArray<struct FRagdollWaterBoneSettings> Bones; // 0x60(0x10)
	struct UParticleSystem* SplashParticleEffect; // 0x70(0x08)
	struct UParticleSystem* SplashBoneParticleEffect; // 0x78(0x08)
	struct UWaterRipplerDef* WaterRipplerDef; // 0x80(0x08)
	struct UWaterRipplerDef* WaterRipplerBoneDef; // 0x88(0x08)
};

// Class Gobi.RagdollComponent
// Size: 0x208 (Inherited: 0xd8)
struct URagdollComponent : UActorComponent {
	char pad_D8[0x18]; // 0xd8(0x18)
	struct FMulticastInlineDelegate OnSetToRagdoll; // 0xf0(0x10)
	char pad_100[0x18]; // 0x100(0x18)
	struct FMulticastInlineDelegate OnUnsetFromRagdoll; // 0x118(0x10)
	char pad_128[0x8]; // 0x128(0x08)
	struct AVFXCorpse* VFXCorpseActorType; // 0x130(0x08)
	struct UDecalDefinition* BloodPoolDecalDef; // 0x138(0x08)
	struct UAkAudioEvent* DissolveAudioEvent; // 0x140(0x08)
	struct FName MeshTag; // 0x148(0x08)
	bool bPhysicalizeDeathAnimations; // 0x150(0x01)
	char pad_151[0x3]; // 0x151(0x03)
	struct FName PhysicalAnimProfile; // 0x154(0x08)
	struct FName PhysicalizeBoneName; // 0x15c(0x08)
	char pad_164[0x24]; // 0x164(0x24)
	struct FRagdollReplicatedData ReplicatedRagdollData; // 0x188(0x14)
	char pad_19C[0x1c]; // 0x19c(0x1c)
	struct FRagdollWaterData Water; // 0x1b8(0x40)
	bool bHasBegunPhysicalizedDeath; // 0x1f8(0x01)
	char pad_1F9[0xf]; // 0x1f9(0x0f)

	void UnsetFromRagdoll(); // Function Gobi.RagdollComponent.UnsetFromRagdoll // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ReceiveCharacterEmitterEffects
// Size: 0xd8 (Inherited: 0xd8)
struct UReceiveCharacterEmitterEffects : UActorComponent {
};

// Class Gobi.RecoilComponent
// Size: 0x540 (Inherited: 0x150)
struct URecoilComponent : UItemBaseComponent {
	char pad_150[0x2b0]; // 0x150(0x2b0)
	struct FRecoilTuning RecoilTuning; // 0x400(0x140)

	void OnOwningCharacterPossessed(struct AController* NewController); // Function Gobi.RecoilComponent.OnOwningCharacterPossessed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.RelationshipSettings
// Size: 0x138 (Inherited: 0x88)
struct URelationshipSettings : UPlayerSettingsBase {
	char pad_88[0x10]; // 0x88(0x10)
	struct TMap<struct FString, struct FRelationshipOutgoingFriendInvite> OutgoingFriendInvites; // 0x98(0x50)
	struct TMap<struct FString, struct FRelationshipIncomingFriendInvite> IncomingFriendInvites; // 0xe8(0x50)
};

// Class Gobi.ReplicatedMontageComponent
// Size: 0x2a0 (Inherited: 0x120)
struct UReplicatedMontageComponent : UMovementTickableComponent {
	struct TArray<struct FName> IgnoreRootMotionSlots; // 0x120(0x10)
	char pad_130[0x78]; // 0x130(0x78)
	struct FReplicatedMontageData RepData; // 0x1a8(0x14)
	char pad_1BC[0x1c]; // 0x1bc(0x1c)
	struct UAnimInstance* AnimInstance; // 0x1d8(0x08)
	char pad_1E0[0x90]; // 0x1e0(0x90)
	struct AGobiCharacter* GobiCharacter; // 0x270(0x08)
	struct UGobiCharacterMovementComponent* Movement; // 0x278(0x08)
	struct TArray<struct UAnimMontage*> SerializableMontages; // 0x280(0x10)
	struct UPlayDeathReactionComponent* PlayDeathReactionComponent; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)

	void OnRep_Data(); // Function Gobi.ReplicatedMontageComponent.OnRep_Data // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ReportPlayerPopupUserWidget
// Size: 0x598 (Inherited: 0x470)
struct UReportPlayerPopupUserWidget : UPopupUserWidget {
	struct TArray<struct FReportPlayerEntry> ReportOptions; // 0x470(0x10)
	char pad_480[0x118]; // 0x480(0x118)

	void SendReport(int32_t ButtonIndex); // Function Gobi.ReportPlayerPopupUserWidget.SendReport // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.RescuePlayerStart
// Size: 0x2e0 (Inherited: 0x2a0)
struct ARescuePlayerStart : AGobiPlayerStart {
	char pad_2A0[0x20]; // 0x2a0(0x20)
	struct UNavLocationComponent* NavLocationComponent; // 0x2c0(0x08)
	enum class ERescueSpawnPointType SpawnPointType; // 0x2c8(0x01)
	bool bEnabled; // 0x2c9(0x01)
	char pad_2CA[0x6]; // 0x2ca(0x06)
	struct APawn* CurrentPawn; // 0x2d0(0x08)
	char pad_2D8[0x8]; // 0x2d8(0x08)

	void SetEnabled(bool bNewEnabled); // Function Gobi.RescuePlayerStart.SetEnabled // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.RichTextBlockCalloutDecorator
// Size: 0x30 (Inherited: 0x30)
struct URichTextBlockCalloutDecorator : URichTextBlockDecorator {
};

// Class Gobi.RichTextBlockStyleDecorator
// Size: 0x30 (Inherited: 0x30)
struct URichTextBlockStyleDecorator : URichTextBlockDecorator {
};

// Class Gobi.RigidBodyDynamicsComponent
// Size: 0x100 (Inherited: 0xd8)
struct URigidBodyDynamicsComponent : UActorComponent {
	struct USkeletalMesh* RigidBodySkelMesh; // 0xd8(0x08)
	struct USkeletalMeshComponent* RigidBodySkelMeshComponent; // 0xe0(0x08)
	float RigidBodyLifetime; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct UAnimationAsset* AnimationToPlay; // 0xf0(0x08)
	float ImpulseMagnitude; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// Class Gobi.RoomVolume
// Size: 0x2b0 (Inherited: 0x288)
struct ARoomVolume : AVolume {
	uint32_t Type; // 0x288(0x04)
	char pad_28C[0x24]; // 0x28c(0x24)
};

// Class Gobi.RoundAnalyticsComponent
// Size: 0x160 (Inherited: 0xd8)
struct URoundAnalyticsComponent : UActorComponent {
	char pad_D8[0x78]; // 0xd8(0x78)
	struct TArray<struct TWeakObjectPtr<struct AGobiPlayerState>> LateJoinersAwaitingProfileLoad; // 0x150(0x10)

	void RecordLateJoinRound(struct AGameModeBase* GameMode, struct APlayerController* Player); // Function Gobi.RoundAnalyticsComponent.RecordLateJoinRound // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SaferoomConfigurationAsset
// Size: 0x88 (Inherited: 0x38)
struct USaferoomConfigurationAsset : UDataAsset {
	struct TMap<enum class EPartySafeRoomState, struct FGameplayTag> DoorIdentifierMapping; // 0x38(0x50)
};

// Class Gobi.SafeRoom
// Size: 0x408 (Inherited: 0x250)
struct ASafeRoom : AActor {
	struct USaferoomConfigurationAsset* ConfigAsset; // 0x250(0x08)
	struct USceneComponent* DefaultRootComponent; // 0x258(0x08)
	struct UBoxComponent* DefaultSaferoomVolume; // 0x260(0x08)
	char pad_268[0x10]; // 0x268(0x10)
	struct TArray<struct ADoor*> SaferoomDoors; // 0x278(0x10)
	struct TArray<struct AGameplayEffectEmitterActor*> EffectEmitters; // 0x288(0x10)
	enum class EPartySafeRoomState OccupiedState; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	struct FName SpawnTag; // 0x29c(0x08)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct FLevelTravelDetails FinalSaferoomDetails; // 0x2a8(0x38)
	struct FCheckpointSaferoomConfig CheckpointSaferoomConfig; // 0x2e0(0x10)
	char pad_2F0[0x50]; // 0x2f0(0x50)
	struct FName CurrentMissionObjectiveScheme; // 0x340(0x08)
	struct TMap<struct FName, struct FSafeRoomMissionObjectiveConfig> MissionObjectiveSchemes; // 0x348(0x50)
	float DoorLockedDuration; // 0x398(0x04)
	float DoorOpenDuration; // 0x39c(0x04)
	struct FName StartingConvo; // 0x3a0(0x08)
	struct FName StartingConvoResponseGroup; // 0x3a8(0x08)
	bool bCanPostEnterExitDialogue; // 0x3b0(0x01)
	char pad_3B1[0x31]; // 0x3b1(0x31)
	enum class EPartySafeRoomState CurrentSaferoomState; // 0x3e2(0x01)
	char pad_3E3[0x5]; // 0x3e3(0x05)
	struct FMulticastInlineDelegate OnOccupancyChanged; // 0x3e8(0x10)
	char pad_3F8[0x10]; // 0x3f8(0x10)

	void SetCurrentMissionObjectiveScheme(struct FName MissionObjectiveScheme); // Function Gobi.SafeRoom.SetCurrentMissionObjectiveScheme // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SaferoomCurrencyMod
// Size: 0xb0 (Inherited: 0x88)
struct USaferoomCurrencyMod : UGameplayMod {
	char pad_88[0x10]; // 0x88(0x10)
	int32_t CurrencyGrantedPerSaferoom; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString AdjustCurrencyCause; // 0xa0(0x10)

	void OnPreRoundStepChanged(); // Function Gobi.SaferoomCurrencyMod.OnPreRoundStepChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SafeRoomDoorGameCoachLessonComponent
// Size: 0x108 (Inherited: 0x108)
struct USafeRoomDoorGameCoachLessonComponent : UGameCoachLessonsComponent {
};

// Class Gobi.SafeRoomVendor
// Size: 0x278 (Inherited: 0x250)
struct ASafeRoomVendor : AActor {
	struct FMatchStartedCondition MatchStartedCondition; // 0x250(0x28)
};

// Class Gobi.SafeZoneOptionsUserWidget
// Size: 0x498 (Inherited: 0x498)
struct USafeZoneOptionsUserWidget : UFTUEOptionsPanelUserWidget {

	void ModifySafeZone(bool bGrow); // Function Gobi.SafeZoneOptionsUserWidget.ModifySafeZone // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SaveGameSubsystem
// Size: 0x98 (Inherited: 0x38)
struct USaveGameSubsystem : UGameInstanceSubsystem {
	char pad_38[0x60]; // 0x38(0x60)
};

// Class Gobi.SaveSlotListUserWidget
// Size: 0x490 (Inherited: 0x450)
struct USaveSlotListUserWidget : UGobiUserWidget {
	struct FMulticastInlineDelegate OnSlotSelected; // 0x450(0x10)
	struct FMulticastInlineDelegate OnSlotFocused; // 0x460(0x10)
	char pad_470[0x20]; // 0x470(0x20)

	void SetCallouts(struct UWidget* InCallouts); // Function Gobi.SaveSlotListUserWidget.SetCallouts // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ScenarioEvaluatorSet
// Size: 0x78 (Inherited: 0x30)
struct UScenarioEvaluatorSet : UObject {
	char pad_30[0x48]; // 0x30(0x48)

	struct UScenarioEvaluatorSet* AddTimeSinceActivationEvaluator(struct FScenarioEval_TimeSinceActivation Evaluator); // Function Gobi.ScenarioEvaluatorSet.AddTimeSinceActivationEvaluator // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ScenarioHeroEvaluatorSet
// Size: 0x78 (Inherited: 0x30)
struct UScenarioHeroEvaluatorSet : UObject {
	char pad_30[0x48]; // 0x30(0x48)

	struct UScenarioHeroEvaluatorSet* AddPathDistanceEvaluator(struct FScenarioHeroEval_PathDistance Evaluator); // Function Gobi.ScenarioHeroEvaluatorSet.AddPathDistanceEvaluator // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ScenarioManager
// Size: 0x268 (Inherited: 0x250)
struct AScenarioManager : AActor {
	enum class EScenarioManagerPhase StartupPhase; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct TArray<struct FScenarioCollection> ScenarioCollections; // 0x258(0x10)

	void ProcessScenarios(); // Function Gobi.ScenarioManager.ProcessScenarios // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ScoreboardEntryUserWidget
// Size: 0x4a0 (Inherited: 0x458)
struct UScoreboardEntryUserWidget : UPartyToolTipHolderUserWidget {
	char pad_458[0x48]; // 0x458(0x48)

	void SetPlayerSlot(struct APlayerSlot* InPlayerSlot); // Function Gobi.ScoreboardEntryUserWidget.SetPlayerSlot // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ScoreboardUserWidget
// Size: 0x4a0 (Inherited: 0x450)
struct UScoreboardUserWidget : UGobiUserWidget {
	struct TArray<struct APlayerSlot*> MyTeamSlots; // 0x450(0x10)
	struct TArray<struct APlayerSlot*> EnemyTeamSlots; // 0x460(0x10)
	char pad_470[0x30]; // 0x470(0x30)

	void SetMyTeam(struct TArray<struct APlayerSlot*> PlayerSlots); // Function Gobi.ScoreboardUserWidget.SetMyTeam // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ScreenEffect
// Size: 0x98 (Inherited: 0x30)
struct UScreenEffect : UObject {
	struct FGameplayTag ScreenEffectTag; // 0x30(0x08)
	struct UCameraModifier_ScreenEffect* CameraModifierClass; // 0x38(0x08)
	struct FGameplayTagContainer ActivationGameplayTags; // 0x40(0x20)
	bool bStartActive; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct UAkAudioEvent* StartAkEvent; // 0x68(0x08)
	float StartAkEventCooldown; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct UAkAudioEvent* LoopAkEvent; // 0x78(0x08)
	struct UAkAudioEvent* StopAkEvent; // 0x80(0x08)
	struct TWeakObjectPtr<struct UCameraModifier> CameraModifier; // 0x88(0x08)
	float ActivatedTimestamp; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)

	bool IsActivated(); // Function Gobi.ScreenEffect.IsActivated // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ScreenFXComponent
// Size: 0x1b0 (Inherited: 0xd8)
struct UScreenFXComponent : UActorComponent {
	struct TArray<struct UScreenEffect*> ScreenFXData; // 0xd8(0x10)
	struct UScreenEffect* DefaultDamageEffectClass; // 0xe8(0x08)
	struct UScreenEffect* DefaultDamageScreenEffect; // 0xf0(0x08)
	struct TArray<struct FDamageScreenEffectMapping> DamageTypeFXOverrides; // 0xf8(0x10)
	struct TArray<struct UScreenEffect*> ScreenEffectInstances; // 0x108(0x10)
	struct TWeakObjectPtr<struct APlayerCharacter> OwnerPlayer; // 0x118(0x08)
	struct TWeakObjectPtr<struct APlayerController> OwningPlayerController; // 0x120(0x08)
	struct TWeakObjectPtr<struct APlayerCameraManager> CameraManager; // 0x128(0x08)
	struct TWeakObjectPtr<struct UHealthComponent> HealthComponent; // 0x130(0x08)
	char pad_138[0x10]; // 0x138(0x10)
	struct FMulticastInlineDelegate OnScreenEffectActiveChanged; // 0x148(0x10)
	char pad_158[0x58]; // 0x158(0x58)

	bool StopScreenEffect(struct FGameplayTag ScreenEffectTag); // Function Gobi.ScreenFXComponent.StopScreenEffect // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SegmentedReloadComponent
// Size: 0x300 (Inherited: 0x200)
struct USegmentedReloadComponent : UReloadComponent {
	bool bReloadPressed; // 0x200(0x01)
	char pad_201[0x4f]; // 0x201(0x4f)
	float ReloadEnterLength; // 0x250(0x04)
	float ReloadAddTime; // 0x254(0x04)
	float ReloadLoopLength; // 0x258(0x04)
	float ReloadExitLength; // 0x25c(0x04)
	float ReloadExitAnimationLength; // 0x260(0x04)
	bool AutoReloadWhenEmpty; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	struct FGameplayTagContainer AppliedTags; // 0x268(0x20)
	struct FGameplayTagContainer BlockingTags; // 0x288(0x20)
	struct FGameplayTagContainer InterruptingTags; // 0x2a8(0x20)
	struct FGameplayTagContainer CancellingTags; // 0x2c8(0x20)
	int8_t MinRequiredAmmoForReloadInterrupt; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct UAnimMontage* ReloadMontageFP; // 0x2f0(0x08)
	struct UAnimMontage* ReloadMontage3P; // 0x2f8(0x08)
};

// Class Gobi.SelectableGameplayCardUserWidget
// Size: 0x4c8 (Inherited: 0x450)
struct USelectableGameplayCardUserWidget : UGobiUserWidget {
	struct FDataTableRowHandle ProductRowHandle; // 0x450(0x20)
	struct FDataTableRowHandle CardRowHandle; // 0x470(0x20)
	struct FMulticastInlineDelegate OnFlipAnimFinished; // 0x490(0x10)
	bool bShowTooltip; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct FMulticastInlineDelegate OnDragDrop; // 0x4a8(0x10)
	enum class EGameplayCardDeckType DeckType; // 0x4b8(0x01)
	char pad_4B9[0x7]; // 0x4b9(0x07)
	struct USmallDeckEntryDragVisualUserWidget* DragVisualClass; // 0x4c0(0x08)

	void SetPurchaseable(bool Purchaseable); // Function Gobi.SelectableGameplayCardUserWidget.SetPurchaseable // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ServerStatusComponent
// Size: 0x130 (Inherited: 0xd8)
struct UServerStatusComponent : UActorComponent {
	struct FServerStatus ServerStatus; // 0xd8(0x2c)
	char pad_104[0x2c]; // 0x104(0x2c)
};

// Class Gobi.SharedSoundManager
// Size: 0x318 (Inherited: 0x30)
struct USharedSoundManager : UObject {
	int32_t MaxNumSharedSoundPerFrame; // 0x30(0x04)
	int32_t MaxNumVocalizationsPerFrame; // 0x34(0x04)
	struct TSet<struct FName> VocalizationSharedSoundFilter; // 0x38(0x50)
	int32_t MaxNumFootstepsPerFrame; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct TSet<struct FName> FootstepSharedSoundFilter; // 0x90(0x50)
	struct TSet<struct FName> LowPrioritySharedSoundFilter; // 0xe0(0x50)
	int32_t MaxNumMeleeSoundsPerFrame; // 0x130(0x04)
	int32_t MaxNumMeleeComponentsToSpawnPerFrame; // 0x134(0x04)
	char pad_138[0x1e0]; // 0x138(0x1e0)
};

// Class Gobi.SignInInputProcessorBase
// Size: 0x40 (Inherited: 0x30)
struct USignInInputProcessorBase : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class Gobi.SecondarySignInInputProcessor
// Size: 0x48 (Inherited: 0x40)
struct USecondarySignInInputProcessor : USignInInputProcessorBase {
	char pad_40[0x8]; // 0x40(0x08)

	void OnSignInFailedPopupClosed(struct UPopupUserWidget* Popup, struct FName Command); // Function Gobi.SecondarySignInInputProcessor.OnSignInFailedPopupClosed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SignInPopupUserWidget
// Size: 0x470 (Inherited: 0x470)
struct USignInPopupUserWidget : UPopupUserWidget {
};

// Class Gobi.SignInScreen
// Size: 0x620 (Inherited: 0x530)
struct USignInScreen : UUIScreen {
	char pad_530[0x8]; // 0x530(0x08)
	struct FMulticastInlineDelegate OnPlayerSignedIn; // 0x538(0x10)
	struct FSignInFailedPopupData MatchmakingFailedPopupData; // 0x548(0x78)
	struct UAkAudioEvent* RoboSignInKBMAudio; // 0x5c0(0x08)
	struct UAkAudioEvent* RoboSignInPSAudio; // 0x5c8(0x08)
	struct UAkAudioEvent* RoboSignInSteamContAudio; // 0x5d0(0x08)
	struct UAkAudioEvent* RoboSignInSwitchAudio; // 0x5d8(0x08)
	struct UAkAudioEvent* RoboSignInXboxAudio; // 0x5e0(0x08)
	struct UAkAudioEvent* RoboSignInStopAudio; // 0x5e8(0x08)
	char pad_5F0[0x20]; // 0x5f0(0x20)
	struct UMatchmaking* Matchmaking; // 0x610(0x08)
	char pad_618[0x8]; // 0x618(0x08)

	void StartSignIn(); // Function Gobi.SignInScreen.StartSignIn // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SignInTask
// Size: 0x88 (Inherited: 0x30)
struct USignInTask : UObject {
	char pad_30[0x20]; // 0x30(0x20)
	struct UGobiWebServices* GobiWebServices; // 0x50(0x08)
	struct UGobiWBP1* GobiWBP1; // 0x58(0x08)
	struct UGobiGameInstance* GameInstance; // 0x60(0x08)
	struct TArray<struct FSignInTaskDependency> Dependencies; // 0x68(0x10)
	char pad_78[0x10]; // 0x78(0x10)
};

// Class Gobi.SignInTask_Barrier
// Size: 0x88 (Inherited: 0x88)
struct USignInTask_Barrier : USignInTask {
};

// Class Gobi.SignInTask_OnlineOfflinePopup
// Size: 0x88 (Inherited: 0x88)
struct USignInTask_OnlineOfflinePopup : USignInTask {

	void OnPopupClosed(struct UPopupUserWidget* Popup, struct FName Command); // Function Gobi.SignInTask_OnlineOfflinePopup.OnPopupClosed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SignInTask_LicensePopup
// Size: 0x88 (Inherited: 0x88)
struct USignInTask_LicensePopup : USignInTask {

	void OnPopupClosed(struct UPopupUserWidget* Popup, struct FName Command); // Function Gobi.SignInTask_LicensePopup.OnPopupClosed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SignInTask_StartupOptionsPopup
// Size: 0x88 (Inherited: 0x88)
struct USignInTask_StartupOptionsPopup : USignInTask {

	void OnPopupClosed(struct UPopupUserWidget* Popup, struct FName Command); // Function Gobi.SignInTask_StartupOptionsPopup.OnPopupClosed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SignInTask_EOSLogin
// Size: 0x88 (Inherited: 0x88)
struct USignInTask_EOSLogin : USignInTask {
};

// Class Gobi.SignInTask_UserLogin
// Size: 0x90 (Inherited: 0x88)
struct USignInTask_UserLogin : USignInTask {
	char pad_88[0x8]; // 0x88(0x08)
};

// Class Gobi.SignInTask_PSNUpgradeLogin
// Size: 0x98 (Inherited: 0x88)
struct USignInTask_PSNUpgradeLogin : USignInTask {
	struct USignInTask_UserLogin* UserLoginTask; // 0x88(0x08)
	char pad_90[0x8]; // 0x90(0x08)
};

// Class Gobi.SignInTask_OfflinePermission
// Size: 0x88 (Inherited: 0x88)
struct USignInTask_OfflinePermission : USignInTask {
};

// Class Gobi.SignInTask_UserPrivilege
// Size: 0x90 (Inherited: 0x88)
struct USignInTask_UserPrivilege : USignInTask {
	char pad_88[0x8]; // 0x88(0x08)
};

// Class Gobi.SignInTask_SystemSettings
// Size: 0x88 (Inherited: 0x88)
struct USignInTask_SystemSettings : USignInTask {
};

// Class Gobi.SignInTask_Settings
// Size: 0x90 (Inherited: 0x88)
struct USignInTask_Settings : USignInTask {
	char pad_88[0x8]; // 0x88(0x08)
};

// Class Gobi.SignInTask_OnlineConfiguration
// Size: 0x88 (Inherited: 0x88)
struct USignInTask_OnlineConfiguration : USignInTask {
};

// Class Gobi.SignInTask_BeaconRefresh
// Size: 0x88 (Inherited: 0x88)
struct USignInTask_BeaconRefresh : USignInTask {
};

// Class Gobi.SignInTask_HydraAllowList
// Size: 0x98 (Inherited: 0x88)
struct USignInTask_HydraAllowList : USignInTask {
	char pad_88[0x10]; // 0x88(0x10)

	void OnPopupClosed(struct UPopupUserWidget* Popup, struct FName Command); // Function Gobi.SignInTask_HydraAllowList.OnPopupClosed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SignInTask_HydraAuth
// Size: 0x90 (Inherited: 0x88)
struct USignInTask_HydraAuth : USignInTask {
	struct USignInTask_HydraAllowList* HydraAllowListTask; // 0x88(0x08)
};

// Class Gobi.SignInTask_HydraNamePopup
// Size: 0x88 (Inherited: 0x88)
struct USignInTask_HydraNamePopup : USignInTask {

	void OnPopupClosed(struct UPopupUserWidget* Popup, struct FName Command); // Function Gobi.SignInTask_HydraNamePopup.OnPopupClosed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SignInTask_WBP1
// Size: 0x88 (Inherited: 0x88)
struct USignInTask_WBP1 : USignInTask {
};

// Class Gobi.SignInTask_HydraProfileLoad
// Size: 0x88 (Inherited: 0x88)
struct USignInTask_HydraProfileLoad : USignInTask {
};

// Class Gobi.SignInTask_AtuinAuth
// Size: 0xe0 (Inherited: 0x88)
struct USignInTask_AtuinAuth : USignInTask {
	char pad_88[0x58]; // 0x88(0x58)
};

// Class Gobi.SignInTask_GroupSession
// Size: 0x88 (Inherited: 0x88)
struct USignInTask_GroupSession : USignInTask {
};

// Class Gobi.MeshMaterialSet
// Size: 0x58 (Inherited: 0x38)
struct UMeshMaterialSet : UDataAsset {
	struct TArray<struct FName> SlotNames; // 0x38(0x10)
	struct TArray<struct UMaterialInterface*> Materials; // 0x48(0x10)
};

// Class Gobi.SkeletalMeshRegion
// Size: 0xa0 (Inherited: 0x38)
struct USkeletalMeshRegion : UDataAsset {
	struct TArray<struct FSkeletalMeshSet> MeshSets; // 0x38(0x10)
	struct FGameplayTag SkelMeshMasterGameplayTag; // 0x48(0x08)
	bool bStartHidden; // 0x50(0x01)
	bool bCastShadow; // 0x51(0x01)
	bool bRelativeTransform; // 0x52(0x01)
	char pad_53[0xd]; // 0x53(0x0d)
	struct FTransform RelativeTransform; // 0x60(0x30)
	struct FGameplayTag RegionIdentifier; // 0x90(0x08)
	char pad_98[0x8]; // 0x98(0x08)
};

// Class Gobi.SkeletalMeshRegionConfig
// Size: 0xa8 (Inherited: 0x38)
struct USkeletalMeshRegionConfig : UDataAsset {
	struct TArray<struct USkeletalMeshRegion*> Regions; // 0x38(0x10)
	struct TArray<struct UMeshMaterialParamSet*> MaterialParamSets; // 0x48(0x10)
	struct FGameplayTagQuery TagRequirements; // 0x58(0x48)
	struct FGameplayTag ConfigIdentifier; // 0xa0(0x08)
};

// Class Gobi.SkeletalMeshPieceTrait
// Size: 0x80 (Inherited: 0x30)
struct USkeletalMeshPieceTrait : UTrait {
	struct TArray<struct FMeshesConfig> MeshPieces; // 0x30(0x10)
	struct FGameplayTag SkelMeshMasterGameplayTag; // 0x40(0x08)
	bool bStartHidden; // 0x48(0x01)
	bool bCastShadow; // 0x49(0x01)
	bool bRelativeTransform; // 0x4a(0x01)
	char pad_4B[0x5]; // 0x4b(0x05)
	struct FTransform RelativeTransform; // 0x50(0x30)
};

// Class Gobi.SkinnedDamageTextureComponent
// Size: 0x170 (Inherited: 0xd8)
struct USkinnedDamageTextureComponent : UActorComponent {
	struct USkinnedMeshComponent* SkeletalMesh; // 0xd8(0x08)
	struct UTextureRenderTarget2D* DamageTexture; // 0xe0(0x08)
	uint32_t TextureSize; // 0xe8(0x04)
	float DamageScalar; // 0xec(0x04)
	float DamageInfluenceArea; // 0xf0(0x04)
	uint32_t UVSetToUse; // 0xf4(0x04)
	float InnerGradient; // 0xf8(0x04)
	float OutterGradient; // 0xfc(0x04)
	bool bUseNormalsForNegativeValues; // 0x100(0x01)
	char pad_101[0x6f]; // 0x101(0x6f)

	void SetSkinnedMeshToUse(struct USkinnedMeshComponent* SkinnedMesh); // Function Gobi.SkinnedDamageTextureComponent.SetSkinnedMeshToUse // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.Sleeper
// Size: 0x3b0 (Inherited: 0x250)
struct ASleeper : AActor {
	struct USceneComponent* SceneRoot; // 0x250(0x08)
	struct USkeletalMeshComponent* PodMeshComponent; // 0x258(0x08)
	struct USceneComponent* ProjectileSpawnLocation; // 0x260(0x08)
	struct USphereComponent* SensorySphereComponent; // 0x268(0x08)
	struct UPingableComponent* PingableComponent; // 0x270(0x08)
	struct UHealthComponent* HealthComponent; // 0x278(0x08)
	struct UGameplayEffectsComponent* GameplayEffectsComponent; // 0x280(0x08)
	struct UGameplayTagsComponent* GameplayTagsComponent; // 0x288(0x08)
	struct UThreatComponent* ThreatComponent; // 0x290(0x08)
	float AggroTimeDelay; // 0x298(0x04)
	float AttackAimConeAngleDegrees; // 0x29c(0x04)
	struct ASleeperProjectile* ProjectileClass; // 0x2a0(0x08)
	float ProjectileSpeed; // 0x2a8(0x04)
	float PredictiveAimingScalar; // 0x2ac(0x04)
	float MinTargetLocationChangeForPredicitveAiming; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct FGameplayTagQuery TargetValidTagQuery; // 0x2b8(0x48)
	struct UParticleSystem* DeathVFX; // 0x300(0x08)
	struct UAkAudioEvent* IdleLoopAudioEvent; // 0x308(0x08)
	struct UAkAudioEvent* IdleLoopStopAudioEvent; // 0x310(0x08)
	struct UAkAudioEvent* ReleaseAudioEvent; // 0x318(0x08)
	float ProjectileSpawnOffset; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct FDataTableRowHandle SleeperBurstMusicStinger; // 0x328(0x20)
	struct FMulticastInlineDelegate OnLaunch; // 0x348(0x10)
	bool bLaunched; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct ASleeperProjectile* LiveProjectile; // 0x360(0x08)
	char pad_368[0x2c]; // 0x368(0x2c)
	struct TWeakObjectPtr<struct AGobiCharacter> AttackTarget; // 0x394(0x08)
	char pad_39C[0x14]; // 0x39c(0x14)

	void TriggerDelayedDeath(); // Function Gobi.Sleeper.TriggerDelayedDeath // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SleeperAnimInstance
// Size: 0x2f0 (Inherited: 0x2c0)
struct USleeperAnimInstance : UAnimInstance {
	enum class ESleeperAnimBehaviorState CurrentBehaviorState; // 0x2b8(0x01)
	struct FTransform TetherLocation; // 0x2c0(0x30)

	enum class ESleeperAnimBehaviorState GetCurrentState(); // Function Gobi.SleeperAnimInstance.GetCurrentState // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SleeperPodUsableComponent
// Size: 0x4b8 (Inherited: 0x4b8)
struct USleeperPodUsableComponent : UUsableComponent {
};

// Class Gobi.SleeperProjectile
// Size: 0x730 (Inherited: 0x600)
struct ASleeperProjectile : ABaseProjectile {
	struct USphereComponent* CollisionComponent; // 0x600(0x08)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x608(0x08)
	struct UHealthComponent* Health; // 0x610(0x08)
	struct UGameplayEffectsComponent* GameplayEffectsComponent; // 0x618(0x08)
	struct UGameplayTagsComponent* GameplayTagsComponent; // 0x620(0x08)
	struct UPingableComponent* PingableComponent; // 0x628(0x08)
	struct ULifeStateComponent* LifeStateComponent; // 0x630(0x08)
	struct URagdollComponent* RagdollComponent; // 0x638(0x08)
	struct FMulticastInlineDelegate OnSleeperTargetSnared; // 0x640(0x10)
	struct FMulticastInlineDelegate OnSleeperSnareRelease; // 0x650(0x10)
	struct FString HordeLabel; // 0x660(0x10)
	float SnareDuration; // 0x670(0x04)
	float DeathDuration; // 0x674(0x04)
	struct TArray<struct UGameplayEffect*> ApplyHitEffectsToTarget; // 0x678(0x10)
	struct FGameplayTagContainer BlockingTargetTags; // 0x688(0x20)
	struct FGameplayTag TriggerHordeCue; // 0x6a8(0x08)
	struct ASleeper* OwnerSleeper; // 0x6b0(0x08)
	struct AGobiCharacter* SnaredTarget; // 0x6b8(0x08)
	enum class ESleeperAnimBehaviorState AnimState; // 0x6c0(0x01)
	char pad_6C1[0x3]; // 0x6c1(0x03)
	struct FName CollisionComponentAttachSocketName; // 0x6c4(0x08)
	struct FName AttachSkeletalMeshBone; // 0x6cc(0x08)
	struct FVector AttachRelativeLocation; // 0x6d4(0x0c)
	struct FRotator AttachRelativeRotation; // 0x6e0(0x0c)
	float CollisionEnableDelay; // 0x6ec(0x04)
	char pad_6F0[0x38]; // 0x6f0(0x38)
	bool bTriggerHordeOnSnare; // 0x728(0x01)
	char pad_729[0x7]; // 0x729(0x07)

	void SnareTimeUp(); // Function Gobi.SleeperProjectile.SnareTimeUp // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SmallDeckEntryDragVisualUserWidget
// Size: 0x460 (Inherited: 0x450)
struct USmallDeckEntryDragVisualUserWidget : UGobiUserWidget {
	char pad_450[0x10]; // 0x450(0x10)

	void SetPayload(struct UCardDragPayload* InPayload); // Function Gobi.SmallDeckEntryDragVisualUserWidget.SetPayload // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SmallDeckEntryUserWidget
// Size: 0x488 (Inherited: 0x450)
struct USmallDeckEntryUserWidget : UGobiUserWidget {
	struct FMulticastInlineDelegate OnDragDrop; // 0x450(0x10)
	struct FDataTableRowHandle CardRowHandle; // 0x460(0x20)
	struct USmallDeckEntryDragVisualUserWidget* DragVisualClass; // 0x480(0x08)

	void SmallDeckDragDrop__DelegateSignature(struct UGobiUserWidget* FromWidget, struct UGobiUserWidget* ToWidget); // DelegateFunction Gobi.SmallDeckEntryUserWidget.SmallDeckDragDrop__DelegateSignature // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SneakVolume
// Size: 0x288 (Inherited: 0x288)
struct ASneakVolume : AVolume {
};

// Class Gobi.SnitchComponent
// Size: 0x108 (Inherited: 0xd8)
struct USnitchComponent : UActorComponent {
	struct FMulticastInlineDelegate OnSnitched; // 0xd8(0x10)
	bool bSnitchOnDeath; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	struct FGameplayTag SnitchedTag; // 0xec(0x08)
	char pad_F4[0x14]; // 0xf4(0x14)

	void OnOwnerLifeStateChanged(struct FGameplayTag NewStateTag, struct FGameplayTag PreviousStateTag); // Function Gobi.SnitchComponent.OnOwnerLifeStateChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SnitcherAlertedGameCoachLesson
// Size: 0x490 (Inherited: 0x488)
struct USnitcherAlertedGameCoachLesson : UGobiGameCoachLesson {
	char pad_488[0x8]; // 0x488(0x08)
};

// Class Gobi.SocialSpaceGameState
// Size: 0x530 (Inherited: 0x500)
struct ASocialSpaceGameState : AGobiGameStateBase {
	struct FMulticastInlineDelegate OnSocialSpaceMatchStarted; // 0x500(0x10)
	struct FMulticastInlineDelegate OnSocialSpaceMatchEnded; // 0x510(0x10)
	char pad_520[0x8]; // 0x520(0x08)
	struct UGameplayCueManager* GameplayCueManager; // 0x528(0x08)
};

// Class Gobi.SocialSpacePlayerController
// Size: 0x860 (Inherited: 0x838)
struct ASocialSpacePlayerController : AGobiPlayerController {
	char pad_838[0x8]; // 0x838(0x08)
	struct FMulticastInlineDelegate OnSignedIn; // 0x840(0x10)
	struct FMulticastInlineDelegate OnSignedOut; // 0x850(0x10)

	void SwapTeams(); // Function Gobi.SocialSpacePlayerController.SwapTeams // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SocialSpacePlayerSlot
// Size: 0x898 (Inherited: 0x898)
struct ASocialSpacePlayerSlot : APlayerSlot {
};

// Class Gobi.SocialSpacePlayerState
// Size: 0x730 (Inherited: 0x730)
struct ASocialSpacePlayerState : AGobiPlayerState {
};

// Class Gobi.SocialSpaceUsableComponent
// Size: 0x4f0 (Inherited: 0x4f0)
struct USocialSpaceUsableComponent : UOpenScreenUsableComponent {
};

// Class Gobi.SoundCollectionAsset
// Size: 0x98 (Inherited: 0x38)
struct USoundCollectionAsset : UDataAsset {
	struct UEnum* UserDefinedEnum; // 0x38(0x08)
	enum class ESharedSoundCollectionMode SoundCollectionMode; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TMap<struct FName, struct FSharedSoundBehavior> Sounds; // 0x48(0x50)
};

// Class Gobi.SoundCollectionAssetAnimPreview
// Size: 0x48 (Inherited: 0x38)
struct USoundCollectionAssetAnimPreview : UDataAsset {
	struct USoundCollectionAsset* SCAHumanAnimPreview; // 0x38(0x08)
	struct USoundCollectionAsset* SCAEnemyAnimPreview; // 0x40(0x08)
};

// Class Gobi.SpawnEQSInfluencer
// Size: 0x270 (Inherited: 0x250)
struct ASpawnEQSInfluencer : AActor {
	int32_t Influence; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct USceneComponent* DefaultRootComponent; // 0x258(0x08)
	char pad_260[0x10]; // 0x260(0x10)
};

// Class Gobi.SpawningEQSData
// Size: 0xb0 (Inherited: 0x38)
struct USpawningEQSData : UDataAsset {
	struct UEnvQuery* SpawnEQS; // 0x38(0x08)
	struct FGameplayTagQuery TagQuery; // 0x40(0x48)
	float MaxSpawnDistanceFromPlayers; // 0x88(0x04)
	enum class EGameplayContainerMatchType RequiredTagCheckOption; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	struct FGameplayTagContainer RequiredTags; // 0x90(0x20)
};

// Class Gobi.SpawnLocalitySubsystem
// Size: 0x48 (Inherited: 0x38)
struct USpawnLocalitySubsystem : UWorldSubsystem {
	char pad_38[0x10]; // 0x38(0x10)
};

// Class Gobi.SpawnLocalityVolume
// Size: 0x2f8 (Inherited: 0x288)
struct ASpawnLocalityVolume : AVolume {
	float DefaultWeight; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct FGameplayTagQuery TagRequirements; // 0x290(0x48)
	struct TArray<struct FSpawnLocalityCharacterSet> CharacterSets; // 0x2d8(0x10)
	char pad_2E8[0x10]; // 0x2e8(0x10)
};

// Class Gobi.SpawnVisibilityBlockingVolume
// Size: 0x288 (Inherited: 0x288)
struct ASpawnVisibilityBlockingVolume : ABlockingVolume {
};

// Class Gobi.SpectateSwitcherUserWidget
// Size: 0x470 (Inherited: 0x450)
struct USpectateSwitcherUserWidget : UGobiUserWidget {
	char pad_450[0x20]; // 0x450(0x20)

	void SetPlayer(struct AGobiPlayerState* PlayerState); // Function Gobi.SpectateSwitcherUserWidget.SetPlayer // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SplineBasedActorPlacer
// Size: 0x260 (Inherited: 0x250)
struct ASplineBasedActorPlacer : AActor {
	struct USplineComponent* SplineComponent; // 0x250(0x08)
	enum class ESplinePointType ForcePointType; // 0x258(0x01)
	bool bForcePointType; // 0x259(0x01)
	bool bClosedLoop; // 0x25a(0x01)
	char pad_25B[0x5]; // 0x25b(0x05)
};

// Class Gobi.SplineBasedPlacementComp
// Size: 0x178 (Inherited: 0x158)
struct USplineBasedPlacementComp : UPlacementComponent {
	struct FGameplayTag SplineCompTag; // 0x158(0x08)
	int32_t SegmentStartIndex; // 0x160(0x04)
	int32_t SegmentEndIndex; // 0x164(0x04)
	float DistanceInterval; // 0x168(0x04)
	float CornerSpacing; // 0x16c(0x04)
	bool InheritSplineRotation; // 0x170(0x01)
	bool bInheritSplineYawRotation; // 0x171(0x01)
	char pad_172[0x6]; // 0x172(0x06)
};

// Class Gobi.SplineMeshMergeComponent
// Size: 0xe8 (Inherited: 0xd8)
struct USplineMeshMergeComponent : UActorComponent {
	struct FName StaticMeshToReplaceTag; // 0xd8(0x08)
	char pad_E0[0x8]; // 0xe0(0x08)

	void UndoMerge(); // Function Gobi.SplineMeshMergeComponent.UndoMerge // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SplineMeshMergeUtility
// Size: 0x30 (Inherited: 0x30)
struct USplineMeshMergeUtility : UBlueprintFunctionLibrary {

	void BuildMergedMeshFromSplines(struct TArray<struct USplineMeshComponent*> Splines, struct UStaticMeshComponent* TargetStaticMesh, struct FString FilePath, struct FString Filename, bool bWantsCollision); // Function Gobi.SplineMeshMergeUtility.BuildMergedMeshFromSplines // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SplitscreenPromptUserWidget
// Size: 0x450 (Inherited: 0x450)
struct USplitscreenPromptUserWidget : UGobiUserWidget {

	struct FText GetPromptText(); // Function Gobi.SplitscreenPromptUserWidget.GetPromptText // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SpreadComponent
// Size: 0x2e8 (Inherited: 0x150)
struct USpreadComponent : UItemBaseComponent {
	char pad_150[0x130]; // 0x150(0x130)
	bool bStartSpreadAtMax; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	struct FSpreadTuning SpreadTuning; // 0x284(0x60)
	char pad_2E4[0x4]; // 0x2e4(0x04)

	float CalculateTotalSpread(); // Function Gobi.SpreadComponent.CalculateTotalSpread // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SqueezeComponent
// Size: 0x528 (Inherited: 0x1c8)
struct USqueezeComponent : UAbilityComponent {
	char pad_1C8[0x8]; // 0x1c8(0x08)
	struct FMulticastInlineDelegate OnSqueezeEnded; // 0x1d0(0x10)
	char pad_1E0[0x18]; // 0x1e0(0x18)
	struct AGobiCharacter* ReplicatedTargetCharacter; // 0x1f8(0x08)
	struct FSqueezeMoveTickData MoveTickData; // 0x200(0x1c)
	char pad_21C[0xf4]; // 0x21c(0xf4)
	bool bGameplayTargetAttached; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct TArray<struct UAnimMontage*> SqueezeMontages; // 0x318(0x10)
	struct TArray<struct UAnimMontage*> PinMontages; // 0x328(0x10)
	struct TArray<struct UAnimMontage*> MissMontages; // 0x338(0x10)
	struct TArray<struct UAnimMontage*> PinMissMontages; // 0x348(0x10)
	struct TArray<struct UAnimMontage*> StopMontages; // 0x358(0x10)
	struct TArray<struct UAnimMontage*> PinStopMontages; // 0x368(0x10)
	struct FGameplayTagContainer AppliedTags; // 0x378(0x20)
	struct FGameplayTagQuery BlockingTags; // 0x398(0x48)
	struct FGameplayTagQuery BlockingTargetTags; // 0x3e0(0x48)
	struct FGameplayTagContainer CooldownTags; // 0x428(0x20)
	struct FGameplayTag GrabPrimitiveComponentTag; // 0x448(0x08)
	struct TArray<struct UGameplayEffect*> ApplyEffectsToTarget; // 0x450(0x10)
	struct TArray<struct UGameplayEffect*> ApplyNotifyEffectsToTarget; // 0x460(0x10)
	struct TArray<struct UGameplayEffect*> ApplyEffectsWhileGrabbing; // 0x470(0x10)
	struct TArray<struct UGameplayEffect*> ApplyMissedEffects; // 0x480(0x10)
	bool bUsesSecondaryButton; // 0x490(0x01)
	bool bUseTargetingReticle; // 0x491(0x01)
	bool bCancelOnSprintPressed; // 0x492(0x01)
	char pad_493[0x1]; // 0x493(0x01)
	float SqueezeVolumeTestPadding; // 0x494(0x04)
	float SqueezeMoveBackDuration; // 0x498(0x04)
	float SqueezeMoveBackMaxDistance; // 0x49c(0x04)
	struct FName GrabBone; // 0x4a0(0x08)
	struct FName SqueezeMontagesName; // 0x4a8(0x08)
	struct FName ViewLimitLabel; // 0x4b0(0x08)
	struct FSqueezeTuning SqueezeTuning; // 0x4b8(0x6c)
	char pad_524[0x4]; // 0x524(0x04)

	void OnTargetUnPossessed(struct AGobiCharacter* GobiCharacter); // Function Gobi.SqueezeComponent.OnTargetUnPossessed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.StaminaBarUserWidget
// Size: 0x490 (Inherited: 0x450)
struct UStaminaBarUserWidget : UGobiUserWidget {
	struct UStaminaPipUserWidget* PipClass; // 0x450(0x08)
	float CurrentStamina; // 0x458(0x04)
	float MaxStamina; // 0x45c(0x04)
	char pad_460[0x30]; // 0x460(0x30)

	void ShowLowStaminaPulse_K2(bool bShow); // Function Gobi.StaminaBarUserWidget.ShowLowStaminaPulse_K2 // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.StaminaPipUserWidget
// Size: 0x458 (Inherited: 0x450)
struct UStaminaPipUserWidget : UGobiUserWidget {
	float Stamina; // 0x450(0x04)
	float CurWidth; // 0x454(0x04)

	void UpdateWidth(); // Function Gobi.StaminaPipUserWidget.UpdateWidth // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.StartupOptionsPopupUserWidget
// Size: 0x4a0 (Inherited: 0x470)
struct UStartupOptionsPopupUserWidget : UPopupUserWidget {
	char pad_470[0x30]; // 0x470(0x30)

	void PlayForwardSound(); // Function Gobi.StartupOptionsPopupUserWidget.PlayForwardSound // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.StatEntryUserWidget
// Size: 0x478 (Inherited: 0x450)
struct UStatEntryUserWidget : UGobiUserWidget {
	bool bCanShowDiff; // 0x450(0x01)
	char pad_451[0x27]; // 0x451(0x27)

	void ShowStatDiff(bool bIsPositive, struct FText InDiffText); // Function Gobi.StatEntryUserWidget.ShowStatDiff // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SteeringBehavior
// Size: 0x58 (Inherited: 0x38)
struct USteeringBehavior : UDataAsset {
	enum class EChildBehaviorMode ChildBehaviorMode; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FSteeringBehaviorChild> ChildBehaviors; // 0x40(0x10)
	bool bNormalizeChildWeights; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class Gobi.SteeringBehavior_Arrive
// Size: 0x78 (Inherited: 0x58)
struct USteeringBehavior_Arrive : USteeringBehavior {
	struct UAnimContext_Transform* TargetLocation; // 0x58(0x08)
	enum class EArrivalMode ArrivalMode; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float ArrivedDistance; // 0x64(0x04)
	float SlowdownDistance; // 0x68(0x04)
	struct FVector FocusOffsetFromTarget; // 0x6c(0x0c)
};

// Class Gobi.SteeringBehavior_PathFollowing
// Size: 0x80 (Inherited: 0x58)
struct USteeringBehavior_PathFollowing : USteeringBehavior {
	struct FVector2D MaxTurnAngleRange; // 0x58(0x08)
	float MaxRotationRateWhenStationary; // 0x60(0x04)
	float SlowdownDistance; // 0x64(0x04)
	struct UAnimContext_Rotation* SpeedAdjustmentContext; // 0x68(0x08)
	float MaxAngleFromSpeedAdjContext; // 0x70(0x04)
	bool bUseLookAheadLocation; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	float LookAheadDistance; // 0x78(0x04)
	float LinkFocusDistanceThreshold; // 0x7c(0x04)
};

// Class Gobi.SteeringBehavior_Charge
// Size: 0x80 (Inherited: 0x80)
struct USteeringBehavior_Charge : USteeringBehavior_PathFollowing {
};

// Class Gobi.SteeringBehavior_Distance
// Size: 0x90 (Inherited: 0x58)
struct USteeringBehavior_Distance : USteeringBehavior {
	struct UAnimContext_Distance* DistanceContextClass; // 0x58(0x08)
	struct FFloatRange DistanceRange; // 0x60(0x10)
	struct USteeringBehavior* MinDistSteeringBehaviorOld; // 0x70(0x08)
	struct USteeringBehavior* MaxDistSteeringBehaviorOld; // 0x78(0x08)
	struct USteeringBehavior* MinDistSteeringBehavior; // 0x80(0x08)
	struct USteeringBehavior* MaxDistSteeringBehavior; // 0x88(0x08)
};

// Class Gobi.SteeringBehavior_Seek
// Size: 0x68 (Inherited: 0x58)
struct USteeringBehavior_Seek : USteeringBehavior {
	struct UAnimContext_Transform* TargetLocation; // 0x58(0x08)
	bool bIgnoreZ; // 0x60(0x01)
	bool bUseCharacterEyeHeightForFocusOffset; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// Class Gobi.SteeringBehavior_Flee
// Size: 0x68 (Inherited: 0x68)
struct USteeringBehavior_Flee : USteeringBehavior_Seek {
};

// Class Gobi.SteeringBehavior_Focus
// Size: 0x58 (Inherited: 0x58)
struct USteeringBehavior_Focus : USteeringBehavior {
};

// Class Gobi.SteeringBehavior_FocusLocation
// Size: 0xa8 (Inherited: 0x58)
struct USteeringBehavior_FocusLocation : USteeringBehavior_Focus {
	float DistanceThreshold; // 0x58(0x04)
	float MovementConeAngle; // 0x5c(0x04)
	bool bUseDifferentConeAngleWhenStationary; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float StationaryConeAngle; // 0x64(0x04)
	struct UAnimContext_Transform* FocusFromLocation; // 0x68(0x08)
	struct UAnimContext_Transform* FocusToLocation; // 0x70(0x08)
	float MaxVisibleAge; // 0x78(0x04)
	bool bUseDifferentMaxVisibleAgeWhenStationary; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	float MaxStationaryVisibleAge; // 0x80(0x04)
	bool bInterpFromPrevFocusLoc; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float FocusInterpRate; // 0x88(0x04)
	bool bUseRotationLimiter; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	struct UAnimContext_Rotation* RotationLimiter; // 0x90(0x08)
	float MaxAngleFromRotationLimiter; // 0x98(0x04)
	char pad_9C[0xc]; // 0x9c(0x0c)
};

// Class Gobi.SteeringBehavior_FocusLookAhead
// Size: 0x60 (Inherited: 0x58)
struct USteeringBehavior_FocusLookAhead : USteeringBehavior_Focus {
	float LookAheadTime; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Gobi.SteeringBehavior_MeleeCircle
// Size: 0x68 (Inherited: 0x58)
struct USteeringBehavior_MeleeCircle : USteeringBehavior {
	float AttackDistance; // 0x58(0x04)
	float SlowdownDistance; // 0x5c(0x04)
	float EnemyFrontConeDeg; // 0x60(0x04)
	float StrafeSpeed; // 0x64(0x04)
};

// Class Gobi.SteeringBehavior_Oscillate
// Size: 0x90 (Inherited: 0x58)
struct USteeringBehavior_Oscillate : USteeringBehavior {
	struct UAnimContext_Distance* DistanceContextClass; // 0x58(0x08)
	struct UAnimContext_Actor* TargetActor; // 0x60(0x08)
	float Period; // 0x68(0x04)
	struct FFloatRange OscillationOuterRange; // 0x6c(0x10)
	struct FFloatRange MaxOscillationRange; // 0x7c(0x10)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class Gobi.SteeringBehavior_Pursue
// Size: 0x68 (Inherited: 0x58)
struct USteeringBehavior_Pursue : USteeringBehavior {
	struct UAnimContext_Actor* TargetActor; // 0x58(0x08)
	bool bIgnoreZ; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Gobi.SteeringBehavior_ReturnToNavmesh
// Size: 0x60 (Inherited: 0x58)
struct USteeringBehavior_ReturnToNavmesh : USteeringBehavior {
	float SearchExtentScale; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Gobi.SteeringBehavior_SeekDir
// Size: 0x70 (Inherited: 0x58)
struct USteeringBehavior_SeekDir : USteeringBehavior {
	struct UAnimContext_Transform* SourceLocation; // 0x58(0x08)
	struct UAnimContext_Transform* TargetLocation; // 0x60(0x08)
	bool bIgnoreZ; // 0x68(0x01)
	bool bUseCharacterEyeHeightForFocusOffset; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
};

// Class Gobi.SteeringBehavior_Separation
// Size: 0x128 (Inherited: 0x58)
struct USteeringBehavior_Separation : USteeringBehavior {
	float Strength; // 0x58(0x04)
	float ArrivalStrength; // 0x5c(0x04)
	float QueryDistance; // 0x60(0x04)
	float StrengthExponent; // 0x64(0x04)
	float ArrivalThreshold; // 0x68(0x04)
	bool bSeparateWhenNotMoving; // 0x6c(0x01)
	bool bSteerAroundDoors; // 0x6d(0x01)
	char pad_6E[0x2]; // 0x6e(0x02)
	float DoorRelevantDistXY; // 0x70(0x04)
	float DoorRelevantDistZ; // 0x74(0x04)
	struct FVector2D DoorAvoidanceMultiplesOfCharacterRadius; // 0x78(0x08)
	bool bDoorDebugDraw; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float DoorDebugSpeedScalar; // 0x84(0x04)
	struct UAISeparationGroups* IgnoreGroups; // 0x88(0x08)
	struct FGameplayTagQuery AvoidTagQuery; // 0x90(0x48)
	struct FGameplayTagQuery AllowSteeringTagQuery; // 0xd8(0x48)
	uint32_t MaxCharacters; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
};

// Class Gobi.SteeringControl
// Size: 0x50 (Inherited: 0x38)
struct USteeringControl : UDataAsset {
	struct TArray<struct FMovementSpeedStance> MovementSpeedStances; // 0x38(0x10)
	struct FVector2D CognitiveAbilityRange; // 0x48(0x08)
};

// Class Gobi.SteeringControl_Charging
// Size: 0x50 (Inherited: 0x50)
struct USteeringControl_Charging : USteeringControl {
};

// Class Gobi.StepOnComponent
// Size: 0xf0 (Inherited: 0xd8)
struct UStepOnComponent : UActorComponent {
	char pad_D8[0x8]; // 0xd8(0x08)
	struct TArray<struct FStepOnActorConfig> StepOnActorConfigs; // 0xe0(0x10)
};

// Class Gobi.StumbleComponent
// Size: 0x210 (Inherited: 0xd8)
struct UStumbleComponent : UActorComponent {
	struct FStumbleConfig StumbleConfig; // 0xd8(0x90)
	char pad_168[0xa8]; // 0x168(0xa8)

	void OnStumbleMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function Gobi.StumbleComponent.OnStumbleMontageEnded // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.StumbleOthersComponent
// Size: 0x1f8 (Inherited: 0xd8)
struct UStumbleOthersComponent : UActorComponent {
	char pad_D8[0x68]; // 0xd8(0x68)
	float StumbleFrequency; // 0x140(0x04)
	float MinDistance; // 0x144(0x04)
	float AngleThreshold; // 0x148(0x04)
	float FrontImpactAngle; // 0x14c(0x04)
	float FrontAngle; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FGameplayTagQuery TagRequirements; // 0x158(0x48)
	struct FGameplayTagQuery TargetTagRequirements; // 0x1a0(0x48)
	struct TArray<struct UGameplayEffect*> ApplyEffects; // 0x1e8(0x10)
};

// Class Gobi.StumbleTrait
// Size: 0xc8 (Inherited: 0x30)
struct UStumbleTrait : UTrait {
	struct FStumbleConfig Config; // 0x30(0x90)
	struct UStumbleComponent* StumbleComponentClass; // 0xc0(0x08)
};

// Class Gobi.SubtitleListUserWidget
// Size: 0x4a0 (Inherited: 0x450)
struct USubtitleListUserWidget : UGobiUserWidget {
	struct UGobiUserWidget* SubtitleClass; // 0x450(0x08)
	int32_t MaxSubtitles; // 0x458(0x04)
	float DefaultDisplayTime; // 0x45c(0x04)
	struct FText SpeakerTextFormat; // 0x460(0x18)
	struct TArray<struct FSubtitleWidgetList> CurrentSubtitles; // 0x478(0x10)
	int32_t MaxEntries; // 0x488(0x04)
	char pad_48C[0x14]; // 0x48c(0x14)

	void ShowSubtitle(enum class EDialogueAudioResult AudioResult, struct FText Text, struct FSlateColor Color, float DisplayTime); // Function Gobi.SubtitleListUserWidget.ShowSubtitle // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SuicideComponent
// Size: 0x340 (Inherited: 0x1c8)
struct USuicideComponent : UAbilityComponent {
	struct FMulticastInlineDelegate OnSuicideCookStarted; // 0x1c8(0x10)
	struct FMulticastInlineDelegate OnSuicideCookEnded; // 0x1d8(0x10)
	char pad_1E8[0x20]; // 0x1e8(0x20)
	struct FSuicideConfig SuicideConfig; // 0x208(0x120)
	struct UGobiCharacterMovementComponent* MovementComponent; // 0x328(0x08)
	char pad_330[0x10]; // 0x330(0x10)

	void StopCooking(); // Function Gobi.SuicideComponent.StopCooking // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SupplyPointsUserWidget
// Size: 0x458 (Inherited: 0x450)
struct USupplyPointsUserWidget : UGobiUserWidget {
	int32_t SupplyPoints; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)

	void OnSupplyPointsChanged(int32_t InSupplyPoints); // Function Gobi.SupplyPointsUserWidget.OnSupplyPointsChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SurfaceTypeDebugActor
// Size: 0x270 (Inherited: 0x250)
struct ASurfaceTypeDebugActor : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x250(0x08)
	struct UTextRenderComponent* TextRendererComponent; // 0x258(0x08)
	struct USceneComponent* InternalRootComponent; // 0x260(0x08)
	struct FGameplayTag ImpactGameplayTag; // 0x268(0x08)

	void UpdateTextRendererComponent(struct FVector2D Offset); // Function Gobi.SurfaceTypeDebugActor.UpdateTextRendererComponent // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SurveyPopup
// Size: 0x58 (Inherited: 0x30)
struct USurveyPopup : UObject {
	char pad_30[0x28]; // 0x30(0x28)

	void HandleOnMatchStarted(); // Function Gobi.SurveyPopup.HandleOnMatchStarted // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SurveyPopupUserWidget
// Size: 0x478 (Inherited: 0x470)
struct USurveyPopupUserWidget : UPopupUserWidget {
	char pad_470[0x8]; // 0x470(0x08)
};

// Class Gobi.SurvivorCrosshairUserWidget
// Size: 0x4b8 (Inherited: 0x450)
struct USurvivorCrosshairUserWidget : UGobiUserWidget {
	char pad_450[0x68]; // 0x450(0x68)

	void OnSettingsChange(); // Function Gobi.SurvivorCrosshairUserWidget.OnSettingsChange // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.SurvivorsScreen
// Size: 0x560 (Inherited: 0x560)
struct USurvivorsScreen : UHubChildScreen {
};

// Class Gobi.SwapTeamVolume
// Size: 0x318 (Inherited: 0x310)
struct ASwapTeamVolume : APopupPromptVolume {
	bool bDisabledForShip; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
};

// Class Gobi.SystemSettingsScreen
// Size: 0x530 (Inherited: 0x530)
struct USystemSettingsScreen : UUIScreen {

	void TakeABreak(); // Function Gobi.SystemSettingsScreen.TakeABreak // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.TakeOverBotPromptUserWidget
// Size: 0x458 (Inherited: 0x450)
struct UTakeOverBotPromptUserWidget : UGobiUserWidget {
	char pad_450[0x8]; // 0x450(0x08)

	void TakeOverBot(); // Function Gobi.TakeOverBotPromptUserWidget.TakeOverBot // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.TargetingReticleComponent
// Size: 0x2b8 (Inherited: 0xd8)
struct UTargetingReticleComponent : UActorComponent {
	char pad_D8[0x58]; // 0xd8(0x58)
	struct FTargetingReticleTuning TuningData; // 0x130(0x24)
	char pad_154[0x4]; // 0x154(0x04)
	struct AGobiReticle* TargetReticleClass; // 0x158(0x08)
	struct AGobiReticle* TargetReticleLockedOnClass; // 0x160(0x08)
	struct AGobiReticle* TargetReticleGhostClass; // 0x168(0x08)
	struct FGameplayTagQuery ShowReticleTagQuery; // 0x170(0x48)
	struct FGameplayTagQuery UpdateTargetTagQuery; // 0x1b8(0x48)
	struct FGameplayTagQuery ExcludeAngleChecksTagQuery; // 0x200(0x48)
	struct FName TargetHitValidationTraceCheckName; // 0x248(0x08)
	struct FName CalculateTargetTraceName; // 0x250(0x08)
	bool bLockOnCharacters; // 0x258(0x01)
	char pad_259[0x57]; // 0x259(0x57)
	bool bUseActorLocationForTraceStart; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)

	void PushShowGhostReticle(); // Function Gobi.TargetingReticleComponent.PushShowGhostReticle // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.TaskManRelayStatusUserWidget
// Size: 0x468 (Inherited: 0x450)
struct UTaskManRelayStatusUserWidget : UGobiUserWidget {
	struct FString DisabledText; // 0x450(0x10)
	char pad_460[0x8]; // 0x460(0x08)
};

// Class Gobi.TeamRelationshipMap
// Size: 0x98 (Inherited: 0x30)
struct UTeamRelationshipMap : UObject {
	struct TArray<struct FTeamRelationship> Relationships; // 0x30(0x10)
	char pad_40[0x58]; // 0x40(0x58)

	enum class ETeamAttitude GetAttitude(struct AActor* FromActor, struct AActor* ToActor); // Function Gobi.TeamRelationshipMap.GetAttitude // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.TempPerkEntryUserWidget
// Size: 0x488 (Inherited: 0x450)
struct UTempPerkEntryUserWidget : UGobiUserWidget {
	char pad_450[0x38]; // 0x450(0x38)

	void SetTimer(float Percentage); // Function Gobi.TempPerkEntryUserWidget.SetTimer // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.TempPerksUserWidget
// Size: 0x460 (Inherited: 0x458)
struct UTempPerksUserWidget : UPerkWatcherUserWidget {
	char pad_458[0x8]; // 0x458(0x08)

	struct UTempPerkEntryUserWidget* FindPerkEntry(struct FDataTableRowHandle RowHandle, bool bCreateIfNotFound); // Function Gobi.TempPerksUserWidget.FindPerkEntry // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.TerrainFollowerComponent
// Size: 0xf0 (Inherited: 0xd8)
struct UTerrainFollowerComponent : UActorComponent {
	bool bOrientMesh; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	float LerpSpeed; // 0xdc(0x04)
	char pad_E0[0x10]; // 0xe0(0x10)
};

// Class Gobi.TestAnimInstance
// Size: 0x7c0 (Inherited: 0x7b0)
struct UTestAnimInstance : UAnimInstance3P {
	struct TWeakObjectPtr<struct AHeroCharacter> TargetCharacter; // 0x7b0(0x08)
	char pad_7B8[0x8]; // 0x7b8(0x08)
};

// Class Gobi.ThreatComponent
// Size: 0x140 (Inherited: 0xd8)
struct UThreatComponent : UActorComponent {
	bool bIsEnabled; // 0xd8(0x01)
	enum class EThreatLevel ThreatLevel; // 0xd9(0x01)
	bool bStartsEnabled; // 0xda(0x01)
	char pad_DB[0x1]; // 0xdb(0x01)
	float DefaultAlertRadius; // 0xdc(0x04)
	float NoiseLoudness; // 0xe0(0x04)
	float NoiseEventFrequency; // 0xe4(0x04)
	char pad_E8[0x4]; // 0xe8(0x04)
	bool bValidOnlyForAllBotTeams; // 0xec(0x01)
	bool bDynamicProximityChecks; // 0xed(0x01)
	char pad_EE[0x2]; // 0xee(0x02)
	float ProximityChkFreq; // 0xf0(0x04)
	char pad_F4[0xc]; // 0xf4(0x0c)
	float FriendlyProximityDist; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	int32_t NumFriendliesToDisable; // 0x108(0x04)
	float EnemyProximityDist; // 0x10c(0x04)
	char pad_110[0x4]; // 0x110(0x04)
	int32_t NumEnemiesToEnable; // 0x114(0x04)
	char pad_118[0x28]; // 0x118(0x28)

	void SetThreatLevel(enum class EThreatLevel NewThreatLevel); // Function Gobi.ThreatComponent.SetThreatLevel // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ThreatMod_ChangeOverTime
// Size: 0x48 (Inherited: 0x40)
struct UThreatMod_ChangeOverTime : UGameThreatModifier {
	float ChangeRate; // 0x40(0x04)
	enum class EThreatChange_Mode Mode; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// Class Gobi.ThreatMod_SafeRoom
// Size: 0x48 (Inherited: 0x40)
struct UThreatMod_SafeRoom : UGameThreatModifier {
	float ChangeRate; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Gobi.ThrowableComponent
// Size: 0x338 (Inherited: 0x150)
struct UThrowableComponent : UItemBaseComponent {
	struct FMulticastInlineDelegate OnItemThrown; // 0x150(0x10)
	bool bActivationPressed; // 0x160(0x01)
	char pad_161[0x67]; // 0x161(0x67)
	struct AActor* Projectile; // 0x1c8(0x08)
	struct FThrowableStateConfig PullBackStateConfig; // 0x1d0(0x28)
	struct FThrowableStateConfig PullBackLoopStateConfig; // 0x1f8(0x28)
	struct FThrowableStateConfig ThrowingStateConfig; // 0x220(0x28)
	float ThrowTime; // 0x248(0x04)
	struct FVector LaunchVelocity; // 0x24c(0x0c)
	struct FGameplayTagContainer AppliedTags; // 0x258(0x20)
	struct FGameplayTagQuery InitialTagQuery; // 0x278(0x48)
	struct FGameplayTagQuery ContinuousTagQuery; // 0x2c0(0x48)
	struct AActor* TargetingReticleActor; // 0x308(0x08)
	float TargetingReticlePredictTime; // 0x310(0x04)
	int32_t RequiredAmmo; // 0x314(0x04)
	struct FName HiddenBoneOnThrow; // 0x318(0x08)
	struct FVector SpawnPositionOffset; // 0x320(0x0c)
	struct FRotator SpawnRotationOffset; // 0x32c(0x0c)
};

// Class Gobi.TierStarsUserWidget
// Size: 0x478 (Inherited: 0x450)
struct UTierStarsUserWidget : UGobiUserWidget {
	struct UMaterialInstanceDynamic* StarMaterialInstance; // 0x450(0x08)
	char pad_458[0x20]; // 0x458(0x20)

	void SetStarMaterialInstance(struct UMaterialInstanceDynamic* InMaterialInstance); // Function Gobi.TierStarsUserWidget.SetStarMaterialInstance // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.TimedActivationComponent
// Size: 0x118 (Inherited: 0xd8)
struct UTimedActivationComponent : UActorComponent {
	bool bStartCountdownOnBeginPlay; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	float Countdown; // 0xdc(0x04)
	struct UAkAudioEvent* CountdownIntervalSound; // 0xe0(0x08)
	float LongestIntervalDelay; // 0xe8(0x04)
	float ShortestIntervalDelay; // 0xec(0x04)
	float CountdownPctForShortestInterval; // 0xf0(0x04)
	float CountdownPctForLongestInterval; // 0xf4(0x04)
	struct FMulticastInlineDelegate OnCountdownFinished; // 0xf8(0x10)
	char pad_108[0x10]; // 0x108(0x10)

	void TimedActivationEvent__DelegateSignature(); // DelegateFunction Gobi.TimedActivationComponent.TimedActivationEvent__DelegateSignature // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.TitanAnimInstance
// Size: 0x400 (Inherited: 0x2c0)
struct UTitanAnimInstance : UAnimInstance {
	struct UTitanComponent* TitanComponent; // 0x2c0(0x08)
	bool bIdle; // 0x2c8(0x01)
	bool bTailOnLeft; // 0x2c9(0x01)
	bool bDead; // 0x2ca(0x01)
	char pad_2CB[0x5]; // 0x2cb(0x05)
	struct FTitanTentacleAnimInfo TentacleFrontLeft; // 0x2d0(0x48)
	struct FTitanTentacleAnimInfo TentacleFrontRight; // 0x318(0x48)
	struct FTitanTentacleAnimInfo TentacleBackLeft; // 0x360(0x48)
	struct FTitanTentacleAnimInfo TentacleBackRight; // 0x3a8(0x48)
	struct UAnimSequence* IdleAnimSequence; // 0x3f0(0x08)
	char pad_3F8[0x8]; // 0x3f8(0x08)
};

// Class Gobi.TitanComponent
// Size: 0x1a8 (Inherited: 0xd8)
struct UTitanComponent : UActorComponent {
	struct FMulticastInlineDelegate OnPhaseKilled; // 0xd8(0x10)
	enum class ETitanState State; // 0xe8(0x01)
	char pad_E9[0x6f]; // 0xe9(0x6f)
	struct TArray<struct UTitanTentacleComponent*> TentacleComponents; // 0x158(0x10)
	int32_t PhaseIdx; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct UAnimMontage* DeathMontage; // 0x170(0x08)
	struct UAnimMontage* TurnRight90Montage; // 0x178(0x08)
	struct UAnimMontage* TurnLeft90Montage; // 0x180(0x08)
	struct UAnimMontage* TurnRight180Montage; // 0x188(0x08)
	struct UAnimMontage* TurnLeft180Montage; // 0x190(0x08)
	struct TArray<struct FTitanPhase> Phases; // 0x198(0x10)

	void OnRep_State(enum class ETitanState OldState); // Function Gobi.TitanComponent.OnRep_State // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.TitanMouthComponent
// Size: 0x180 (Inherited: 0xd8)
struct UTitanMouthComponent : UActorComponent {
	char pad_D8[0x40]; // 0xd8(0x40)
	struct TArray<struct AActor*> Tongues; // 0x118(0x10)
	struct TArray<struct UTitanTongueComponent*> TongueComponents; // 0x128(0x10)
	struct UAnimMontage* GrabTellMontage; // 0x138(0x08)
	struct UAnimMontage* GrabMontage; // 0x140(0x08)
	struct UAnimMontage* PullMontage; // 0x148(0x08)
	struct UAnimMontage* BiteMontage; // 0x150(0x08)
	struct UAnimMontage* AllTonguesDestroyedMontage; // 0x158(0x08)
	struct UAnimMontage* MouthWeakSpotDestroyedMontage; // 0x160(0x08)
	struct TArray<struct AActor*> TongueClasses; // 0x168(0x10)
	struct FName TongueAttachSocket; // 0x178(0x08)
};

// Class Gobi.TitanStage1Component
// Size: 0x198 (Inherited: 0xd8)
struct UTitanStage1Component : UActorComponent {
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FMulticastInlineDelegate OnTitanPainRoarStart; // 0xe0(0x10)
	enum class ETitanStage1State State; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float MaxAttackRange; // 0xf4(0x04)
	bool bAutoAttackOnBegin; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FTitanStage1Tuning TitanStage1Tuning; // 0x100(0x40)
	int8_t NumEmergeAnimSequences; // 0x140(0x01)
	int8_t NumRetractAnimSequences; // 0x141(0x01)
	char pad_142[0x46]; // 0x142(0x46)
	struct TArray<struct UTitanStage1TentacleComponent*> TentacleComponents; // 0x188(0x10)

	void OnTitanPainRoarStartSignature__DelegateSignature(int32_t NumTentaclesHurt); // DelegateFunction Gobi.TitanStage1Component.OnTitanPainRoarStartSignature__DelegateSignature // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.TitanStage1TentacleAnimInstance
// Size: 0x380 (Inherited: 0x2c0)
struct UTitanStage1TentacleAnimInstance : UAnimInstance {
	struct UTitanStage1TentacleComponent* TentacleComponent; // 0x2c0(0x08)
	bool bDormant; // 0x2c8(0x01)
	bool bIdle; // 0x2c9(0x01)
	bool bEmerge; // 0x2ca(0x01)
	bool bSlapAttackWindUp; // 0x2cb(0x01)
	bool bSlapAttack; // 0x2cc(0x01)
	bool bSlapAttackGroundLoop; // 0x2cd(0x01)
	char pad_2CE[0x2]; // 0x2ce(0x02)
	float SlapAttackPlayRate; // 0x2d0(0x04)
	bool bSlapAttackRecover; // 0x2d4(0x01)
	bool bPainRoar; // 0x2d5(0x01)
	bool bAcidSprayAttackWindUp; // 0x2d6(0x01)
	bool bAcidSprayAttackEnter; // 0x2d7(0x01)
	bool bAcidSprayAttackLoop; // 0x2d8(0x01)
	bool bAcidSprayAttackExit; // 0x2d9(0x01)
	char pad_2DA[0x2]; // 0x2da(0x02)
	float EmergePlayRate; // 0x2dc(0x04)
	bool bRetract; // 0x2e0(0x01)
	char pad_2E1[0x3]; // 0x2e1(0x03)
	float AngleToTarget; // 0x2e4(0x04)
	bool bFlinching1; // 0x2e8(0x01)
	bool bFlinching2; // 0x2e9(0x01)
	bool bSlapAttackWindUpStumble; // 0x2ea(0x01)
	char pad_2EB[0x5]; // 0x2eb(0x05)
	struct UAnimSequence* EmergeAnimSequence; // 0x2f0(0x08)
	struct UAnimSequence* RetractAnimSequence; // 0x2f8(0x08)
	struct UAnimSequence* IdleAnimSequence; // 0x300(0x08)
	struct UAnimSequence* HurtIdleAnimSequence; // 0x308(0x08)
	struct UBlendSpace1D* SlapAttackWindUpEnterBlendSpace; // 0x310(0x08)
	struct UBlendSpace1D* SlapAttackWindUpLoopBlendSpace; // 0x318(0x08)
	struct UBlendSpace1D* SlapAttackWindUpStumbleBlendSpace; // 0x320(0x08)
	struct UBlendSpace1D* SlapAttackEnterBlendSpace; // 0x328(0x08)
	struct UBlendSpace1D* SlapAttackGroundLoopBlendSpace; // 0x330(0x08)
	struct UBlendSpace1D* SlapAttackRecoverBlendSpace; // 0x338(0x08)
	struct UAnimSequence* PainRoarAnimSequence; // 0x340(0x08)
	struct UAnimSequence* AcidSprayAttackWindUpEnterAnimSequence; // 0x348(0x08)
	struct UAnimSequence* AcidSprayAttackWindUpLoopAnimSequence; // 0x350(0x08)
	struct UAnimSequence* AcidSprayAttackEnterAnimSequence; // 0x358(0x08)
	struct UAnimSequence* AcidSprayAttackLoopAnimSequence; // 0x360(0x08)
	struct UAnimSequence* AcidSprayAttackExitAnimSequence; // 0x368(0x08)
	struct UAnimSequence* FlinchAnimSequence; // 0x370(0x08)
	char pad_378[0x8]; // 0x378(0x08)
};

// Class Gobi.TitanStage1TentacleComponent
// Size: 0x310 (Inherited: 0xd8)
struct UTitanStage1TentacleComponent : UActorComponent {
	struct FMulticastInlineDelegate OnTentaclePainRoarStart; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnTentaclePainRoarEnd; // 0xe8(0x10)
	enum class ETitanStage1TentacleState State; // 0xf8(0x01)
	char pad_F9[0xb]; // 0xf9(0x0b)
	enum class ETitanStage1TentacleFlinchState FlinchState; // 0x104(0x01)
	char pad_105[0x23]; // 0x105(0x23)
	struct TWeakObjectPtr<struct AActor> TargetActor; // 0x128(0x08)
	enum class ETitanTentacleId ID; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct TArray<struct UAnimSequence*> EmergeAnimSequenceVariants; // 0x138(0x10)
	char pad_148[0x8]; // 0x148(0x08)
	int8_t EmergeAnimSequenceIndex; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct TArray<struct UAnimSequence*> RetractAnimSequenceVariants; // 0x158(0x10)
	char pad_168[0x8]; // 0x168(0x08)
	int8_t RetractAnimSequenceIndex; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)
	struct TArray<struct UAnimSequence*> IdleAnimSequenceVariants; // 0x178(0x10)
	char pad_188[0x8]; // 0x188(0x08)
	int8_t IdleAnimSequenceIndex; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct TArray<struct UAnimSequence*> WoundedIdleAnimSequenceVariants; // 0x198(0x10)
	char pad_1A8[0x8]; // 0x1a8(0x08)
	int8_t WoundedIdleAnimSequenceIndex; // 0x1b0(0x01)
	char pad_1B1[0x7]; // 0x1b1(0x07)
	struct UBlendSpace1D* SlapAttackWindUpEnterBlendSpace; // 0x1b8(0x08)
	struct UBlendSpace1D* SlapAttackWindUpLoopBlendSpace; // 0x1c0(0x08)
	struct UBlendSpace1D* SlapAttackWindUpStumbleBlendSpace; // 0x1c8(0x08)
	struct UBlendSpace1D* SlapAttackEnterBlendSpace; // 0x1d0(0x08)
	struct UBlendSpace1D* SlapAttackGroundLoopBlendSpace; // 0x1d8(0x08)
	struct UBlendSpace1D* SlapAttackRecoverBlendSpace; // 0x1e0(0x08)
	struct TArray<struct UAnimSequence*> PainRoarAnimSequenceVariants; // 0x1e8(0x10)
	char pad_1F8[0x8]; // 0x1f8(0x08)
	int8_t PainRoarAnimSequenceIndex; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)
	struct UAnimSequence* AcidSprayAttackEnterAnimSequence; // 0x208(0x08)
	struct UAnimSequence* AcidSprayAttackLoopAnimSequence; // 0x210(0x08)
	struct UAnimSequence* AcidSprayAttackExitAnimSequence; // 0x218(0x08)
	struct UAnimSequence* AcidSprayAttackWindUpEnterAnimSequence; // 0x220(0x08)
	struct UAnimSequence* AcidSprayAttackWindUpLoopAnimSequence; // 0x228(0x08)
	float EmergeSeconds; // 0x230(0x04)
	float RetractSeconds; // 0x234(0x04)
	float SlapAttackWindUpSeconds; // 0x238(0x04)
	float SlapAttackWindUpStumbleSeconds; // 0x23c(0x04)
	float SlapAttackSeconds; // 0x240(0x04)
	float SlapAttackRecoverSeconds; // 0x244(0x04)
	float SlapAttackGroundLoopSeconds; // 0x248(0x04)
	float SlapAttackAOEDelaySeconds; // 0x24c(0x04)
	float AcidSprayAttackWindUpSeconds; // 0x250(0x04)
	float AcidSprayAttackLoopSeconds; // 0x254(0x04)
	float MaxAttackDistance; // 0x258(0x04)
	struct FGameplayTag AttackVolumeTag; // 0x25c(0x08)
	char pad_264[0x4]; // 0x264(0x04)
	struct TArray<struct UGameplayEffect*> SlapAttackGameplayEffects; // 0x268(0x10)
	struct TWeakObjectPtr<struct AActor> EmergeActor; // 0x278(0x08)
	struct UAnimSequence* EmergeSKMAnimSequence; // 0x280(0x08)
	struct TArray<struct UAnimSequence*> WindUpFlinchVariants; // 0x288(0x10)
	struct TArray<struct UAnimSequence*> GroundLoopFlinchVariants; // 0x298(0x10)
	char pad_2A8[0x8]; // 0x2a8(0x08)
	int8_t WindUpFlinchIndex; // 0x2b0(0x01)
	int8_t GroundLoopFlinchIndex; // 0x2b1(0x01)
	char pad_2B2[0x6]; // 0x2b2(0x06)
	struct FVector2D FlinchCooldownMinMax; // 0x2b8(0x08)
	float WindUpAccumulatedDamageForStumble; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct TArray<struct FGameplayTag> SlapAttackAOEEmitterTags; // 0x2c8(0x10)
	struct FName TentacleEndBoneName; // 0x2d8(0x08)
	char pad_2E0[0x30]; // 0x2e0(0x30)

	void OnTentaclePainRoarStartSignature__DelegateSignature(struct UTitanStage1TentacleComponent* TentacleComponent); // DelegateFunction Gobi.TitanStage1TentacleComponent.OnTentaclePainRoarStartSignature__DelegateSignature // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.TitanStage2And3AnimInstance
// Size: 0x3a0 (Inherited: 0x2c0)
struct UTitanStage2And3AnimInstance : UAnimInstance {
	struct UTitanStage2And3Component* TitanStage2And3Component; // 0x2c0(0x08)
	bool bDormant; // 0x2c8(0x01)
	bool bIdle; // 0x2c9(0x01)
	bool bBiteTell; // 0x2ca(0x01)
	bool bBiting; // 0x2cb(0x01)
	bool bDead; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	float BiteAngle; // 0x2d0(0x04)
	bool bRetreat; // 0x2d4(0x01)
	bool bDig; // 0x2d5(0x01)
	bool bTailThrash; // 0x2d6(0x01)
	bool bTailThrashLeft; // 0x2d7(0x01)
	bool bTailThrashRight; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FTitanStage3TentacleAnimInfo TentacleFrontLeft; // 0x2e0(0x28)
	struct FTitanStage3TentacleAnimInfo TentacleFrontRight; // 0x308(0x28)
	struct FTitanStage3TentacleAnimInfo TentacleBackLeft; // 0x330(0x28)
	struct FTitanStage3TentacleAnimInfo TentacleBackRight; // 0x358(0x28)
	struct UAnimSequence* AcidSprayAttackExitAnimSequence; // 0x380(0x08)
	struct UAnimSequence* TailThrashLeftAnimSequence; // 0x388(0x08)
	struct UAnimSequence* TailThrashRightAnimSequence; // 0x390(0x08)
	struct UAnimSequence* DeathAnimSequence; // 0x398(0x08)
};

// Class Gobi.TitanStage2And3Component
// Size: 0x310 (Inherited: 0xd8)
struct UTitanStage2And3Component : UActorComponent {
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FMulticastInlineDelegate OnStageKilled; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnEscape; // 0xf0(0x10)
	char pad_100[0x14]; // 0x100(0x14)
	int32_t RemainingWeakSpots; // 0x114(0x04)
	char pad_118[0x78]; // 0x118(0x78)
	struct FReplicatedTitanStateInfo ReplicatedStateInfo; // 0x190(0x08)
	char pad_198[0x4]; // 0x198(0x04)
	int32_t Stage; // 0x19c(0x04)
	int32_t Stage2PhaseIdx; // 0x1a0(0x04)
	int32_t Stage3PhaseIdx; // 0x1a4(0x04)
	int32_t Stage3SegmentIdx; // 0x1a8(0x04)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct TArray<struct AActor*> Stage2Tentacles; // 0x1b0(0x10)
	char pad_1C0[0x10]; // 0x1c0(0x10)
	struct TArray<struct UTitanStage3TentacleComponent*> Stage3TentacleComponents; // 0x1d0(0x10)
	char pad_1E0[0x10]; // 0x1e0(0x10)
	bool bAutoAttackOnBegin; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct UAnimSequence* DeathAnimSequence; // 0x1f8(0x08)
	struct FName RightWeakSpotSocketName; // 0x200(0x08)
	struct FName LeftWeakSpotSocketName; // 0x208(0x08)
	float Stage2Health; // 0x210(0x04)
	char pad_214[0x4]; // 0x214(0x04)
	struct AActor* Stage2TentacleClass; // 0x218(0x08)
	int32_t Stage2WeakSpotCount; // 0x220(0x04)
	float Stage3Health; // 0x224(0x04)
	struct TWeakObjectPtr<struct AActor> Stage3ScenarioActor; // 0x228(0x08)
	struct TWeakObjectPtr<struct AActor> FallBehindTrigger; // 0x230(0x08)
	int32_t Stage3WeakSpotCount; // 0x238(0x04)
	struct FName PathRootBone; // 0x23c(0x08)
	char pad_244[0x4]; // 0x244(0x04)
	struct FTitanStage2Tuning TitanStage2Tuning; // 0x248(0x18)
	struct FTitanStage3Tuning TitanStage3Tuning; // 0x260(0x30)
	struct FDataTableRowHandle Phase2WeakspotOneDestroyed; // 0x290(0x20)
	struct FDataTableRowHandle Phase2WeakspotTwoDestroyed; // 0x2b0(0x20)
	struct FDataTableRowHandle Phase3WeakspotHit; // 0x2d0(0x20)
	struct FDataTableRowHandle Phase3WeakspotDestroyed; // 0x2f0(0x20)

	void OnWeakSpotAttachmentDestroyed(struct FName SocketName, struct FDamageInfo DamageInfo); // Function Gobi.TitanStage2And3Component.OnWeakSpotAttachmentDestroyed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.TitanStage2MouthComponent
// Size: 0x1e0 (Inherited: 0xd8)
struct UTitanStage2MouthComponent : UActorComponent {
	struct FMulticastInlineDelegate OnMouthOpenEvent; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnMouthCloseEvent; // 0xe8(0x10)
	char pad_F8[0x58]; // 0xf8(0x58)
	enum class ETitanStage2MouthState State; // 0x150(0x01)
	char pad_151[0x3]; // 0x151(0x03)
	float BiteAngle; // 0x154(0x04)
	struct UBlendSpace1D* BiteBlendSpace; // 0x158(0x08)
	float BiteRange; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct UAnimMontage* RoarMontage; // 0x168(0x08)
	struct UAnimMontage* FlinchMontage; // 0x170(0x08)
	struct UAnimMontage* RoarExitMontage; // 0x178(0x08)
	struct TArray<struct UGameplayEffect*> BiteGameplayEffects; // 0x180(0x10)
	struct FGameplayTag AttackVolumeTag; // 0x190(0x08)
	struct FName PivotSocket; // 0x198(0x08)
	struct UGobiDamageType* TitanBiteDamageClass; // 0x1a0(0x08)
	char pad_1A8[0x18]; // 0x1a8(0x18)
	struct FDataTableRowHandle RoarInterruptMusicHandle; // 0x1c0(0x20)

	void OnWeakSpotAttachmentDestroyed(struct FName SocketName, struct FDamageInfo DamageInfo); // Function Gobi.TitanStage2MouthComponent.OnWeakSpotAttachmentDestroyed // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.TitanStage2TentacleAnimInstance
// Size: 0x300 (Inherited: 0x2c0)
struct UTitanStage2TentacleAnimInstance : UAnimInstance {
	struct UTitanStage2TentacleComponent* TentacleComponent; // 0x2c0(0x08)
	bool bDormant; // 0x2c8(0x01)
	bool bSmashTell; // 0x2c9(0x01)
	bool bSmashAttack; // 0x2ca(0x01)
	bool bSmashRetract; // 0x2cb(0x01)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct UAnimSequence* SmashTellBeginAnimSequence; // 0x2d0(0x08)
	struct UAnimSequence* SmashTellLoopAnimSequence; // 0x2d8(0x08)
	struct UAnimSequence* SmashAttackBeginAnimSequence; // 0x2e0(0x08)
	struct UAnimSequence* SmashAttackLoopAnimSequence; // 0x2e8(0x08)
	struct UAnimSequence* SmashRetractAnimSequence; // 0x2f0(0x08)
	char pad_2F8[0x8]; // 0x2f8(0x08)
};

// Class Gobi.TitanStage2TentacleComponent
// Size: 0x120 (Inherited: 0xd8)
struct UTitanStage2TentacleComponent : UActorComponent {
	char pad_D8[0x30]; // 0xd8(0x30)
	struct FTitanStage2StateInfo StateInfo; // 0x108(0x02)
	char pad_10A[0x6]; // 0x10a(0x06)
	struct TArray<struct FTitanStage2TentacleZoneAnims> ZoneAnims; // 0x110(0x10)

	void OnRep_StateInfo(struct FTitanStage2StateInfo OldState); // Function Gobi.TitanStage2TentacleComponent.OnRep_StateInfo // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.TitanStage3TailComponent
// Size: 0x120 (Inherited: 0xd8)
struct UTitanStage3TailComponent : UActorComponent {
	char pad_D8[0x18]; // 0xd8(0x18)
	enum class ETitanStage3TailState State; // 0xf0(0x01)
	enum class ETitanStage3TailThrashMode CurrentThrashMode; // 0xf1(0x01)
	char pad_F2[0x2]; // 0xf2(0x02)
	struct FGameplayTag AttackVolumeTag; // 0xf4(0x08)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct TArray<struct UGameplayEffect*> ThrashGameplayEffects; // 0x100(0x10)
	struct UAnimSequence* ThrashLeftAnimSequence; // 0x110(0x08)
	struct UAnimSequence* ThrashRightAnimSequence; // 0x118(0x08)

	void PushThrashModeDisabled(enum class ETitanStage3TailThrashMode Mode); // Function Gobi.TitanStage3TailComponent.PushThrashModeDisabled // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.TitanStage3TentacleComponent
// Size: 0x160 (Inherited: 0xd8)
struct UTitanStage3TentacleComponent : UActorComponent {
	enum class ETitanStage3TentacleState State; // 0xd8(0x01)
	char pad_D9[0x53]; // 0xd9(0x53)
	int32_t CurrentAttackZoneId; // 0x12c(0x04)
	enum class ETitanTentacleId ID; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	struct FGameplayTag SprayComponentTag; // 0x134(0x08)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct TArray<struct FTitanStage3AcidSprayAttackZone> AcidSprayAttackZones; // 0x140(0x10)
	struct FName PathRootBone; // 0x150(0x08)
	struct UAnimSequence* DeathAnimSequence; // 0x158(0x08)

	void OnRep_State(enum class ETitanStage3TentacleState OldState); // Function Gobi.TitanStage3TentacleComponent.OnRep_State // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.TitanTailComponent
// Size: 0x1a8 (Inherited: 0xd8)
struct UTitanTailComponent : UActorComponent {
	char pad_D8[0x38]; // 0xd8(0x38)
	bool bOnLeft; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	struct FGameplayTag AttackVolumeTag; // 0x114(0x08)
	float SwipeAttackAngle; // 0x11c(0x04)
	struct TArray<struct UGameplayEffect*> SwipeGameplayEffects; // 0x120(0x10)
	struct UAnimMontage* SwipeLeftTellMontage; // 0x130(0x08)
	struct UAnimMontage* SwipeLeftAttackMontage; // 0x138(0x08)
	struct UAnimMontage* SwipeRightTellMontage; // 0x140(0x08)
	struct UAnimMontage* SwipeRightAttackMontage; // 0x148(0x08)
	float SweepForwardAngleMin; // 0x150(0x04)
	float SweepForwardAngleMax; // 0x154(0x04)
	struct TArray<struct UGameplayEffect*> SweepForwardGameplayEffects; // 0x158(0x10)
	struct UAnimMontage* SweepForwardLeftTailOnLeftTellMontage; // 0x168(0x08)
	struct UAnimMontage* SweepForwardLeftTailOnLeftAttackMontage; // 0x170(0x08)
	struct UAnimMontage* SweepForwardLeftTailOnRightTellMontage; // 0x178(0x08)
	struct UAnimMontage* SweepForwardLeftTailOnRightAttackMontage; // 0x180(0x08)
	struct UAnimMontage* SweepForwardRightTailOnLeftTellMontage; // 0x188(0x08)
	struct UAnimMontage* SweepForwardRightTailOnLeftAttackMontage; // 0x190(0x08)
	struct UAnimMontage* SweepForwardRightTailOnRightTellMontage; // 0x198(0x08)
	struct UAnimMontage* SweepForwardRightTailOnRightAttackMontage; // 0x1a0(0x08)
};

// Class Gobi.TitanTentacleComponent
// Size: 0x188 (Inherited: 0xd8)
struct UTitanTentacleComponent : UActorComponent {
	enum class ETitanTentacleState State; // 0xd8(0x01)
	char pad_D9[0x77]; // 0xd9(0x77)
	struct AActor* TargetActor; // 0x150(0x08)
	float AttackAngle; // 0x158(0x04)
	enum class ETitanTentacleId ID; // 0x15c(0x01)
	char pad_15D[0x3]; // 0x15d(0x03)
	struct FGameplayTag AttackVolumeTag; // 0x160(0x08)
	struct TArray<struct UGameplayEffect*> SmashGameplayEffects; // 0x168(0x10)
	struct TArray<struct UGameplayEffect*> SwipeGameplayEffects; // 0x178(0x10)

	void OnRep_State(enum class ETitanTentacleState OldState); // Function Gobi.TitanTentacleComponent.OnRep_State // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.TitanTongueAnimInstance
// Size: 0x2f0 (Inherited: 0x2c0)
struct UTitanTongueAnimInstance : UAnimInstance {
	struct UTitanTongueComponent* TitanTongueComponent; // 0x2c0(0x08)
	bool bIdle; // 0x2c8(0x01)
	bool bGrabbing; // 0x2c9(0x01)
	char pad_2CA[0x2]; // 0x2ca(0x02)
	float GrabPlayRate; // 0x2cc(0x04)
	bool bMissing; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	float MissPlayRate; // 0x2d4(0x04)
	bool bPulling; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	float PullPlayRate; // 0x2dc(0x04)
	bool bHolding; // 0x2e0(0x01)
	bool bBiting; // 0x2e1(0x01)
	bool bReleasing; // 0x2e2(0x01)
	bool bEating; // 0x2e3(0x01)
	float TargetDist; // 0x2e4(0x04)
	char pad_2E8[0x8]; // 0x2e8(0x08)
};

// Class Gobi.TitanTongueComponent
// Size: 0x1a8 (Inherited: 0xd8)
struct UTitanTongueComponent : UActorComponent {
	enum class ETitanTongueState State; // 0xd8(0x01)
	char pad_D9[0x57]; // 0xd9(0x57)
	struct AActor* TargetActor; // 0x130(0x08)
	float PullSecs; // 0x138(0x04)
	float GrabRange; // 0x13c(0x04)
	float PullNearDist; // 0x140(0x04)
	float PullFarDist; // 0x144(0x04)
	struct TArray<struct UGameplayEffect*> GrabbedEffects; // 0x148(0x10)
	float GrabSecs; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct UBlendSpace1D* GrabBlendSpace; // 0x160(0x08)
	float MissSecs; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct UBlendSpace1D* MissBlendSpace; // 0x170(0x08)
	struct UBlendSpace1D* PullBlendSpace; // 0x178(0x08)
	struct UBlendSpace1D* ReleaseBlendSpace; // 0x180(0x08)
	struct UAnimSequence* BiteAnimSequence; // 0x188(0x08)
	struct UAnimSequence* EatAnimSequence; // 0x190(0x08)
	struct FGameplayTag AttachComponentTag; // 0x198(0x08)
	struct FName AttachBone; // 0x1a0(0x08)

	void OnRep_State(enum class ETitanTongueState OldState); // Function Gobi.TitanTongueComponent.OnRep_State // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.TraceMeleeComponent
// Size: 0x678 (Inherited: 0x150)
struct UTraceMeleeComponent : UItemBaseComponent {
	char pad_150[0x80]; // 0x150(0x80)
	struct FTraceMeleeActiveMontage ActiveMontages; // 0x1d0(0x10)
	struct TArray<struct AActor*> OverlappedActors; // 0x1e0(0x10)
	struct TArray<struct AActor*> DamagedCharacters; // 0x1f0(0x10)
	struct FGameplayCueHandle ImpactCueHandle; // 0x200(0x18)
	enum class EHeroMeleeState CurrentState_MoveTick; // 0x218(0x01)
	char pad_219[0x1]; // 0x219(0x01)
	char ComboCount_MoveTick; // 0x21a(0x01)
	char pad_21B[0x1]; // 0x21b(0x01)
	struct FReplicatedAttackData ReplicatedAttackData; // 0x21c(0x02)
	char pad_21E[0x152]; // 0x21e(0x152)
	struct UAkAudioEvent* StartBuildUpSound; // 0x370(0x08)
	struct UAkAudioEvent* BuildUpMaxSound; // 0x378(0x08)
	char pad_380[0x8]; // 0x380(0x08)
	struct UAkAudioEvent* ExitBuildUpSound; // 0x388(0x08)
	bool bAlwaysPlayExitBuildUpSound; // 0x390(0x01)
	char pad_391[0x3]; // 0x391(0x03)
	float ExertBigOnReleaseChance; // 0x394(0x04)
	char pad_398[0x8]; // 0x398(0x08)
	struct UAkAudioEvent* MeleeSwipeSound; // 0x3a0(0x08)
	struct UAkAudioEvent* LowStamMeleeSwipeSwt; // 0x3a8(0x08)
	struct UAkAudioEvent* BuildUpMeleeSwipeSound; // 0x3b0(0x08)
	struct UAkAudioEvent* NoCleavePowerSound; // 0x3b8(0x08)
	struct UAkAudioEvent* MeleeHitSound; // 0x3c0(0x08)
	struct TArray<struct UAkAudioEvent*> HeavyHitterMeleeHitSounds; // 0x3c8(0x10)
	struct TArray<struct UAkAudioEvent*> BuildUpMeleeHitSounds; // 0x3d8(0x10)
	struct FName SharedMeleeSwipeSound; // 0x3e8(0x08)
	struct FGameplayTag ImpactCue; // 0x3f0(0x08)
	struct FDataTableRowHandle BashOverrideDialogue; // 0x3f8(0x20)
	struct UForceFeedbackEffect* AttackStartForceFeedback; // 0x418(0x08)
	struct UForceFeedbackEffect* InitialHitForceFeedback; // 0x420(0x08)
	struct FTriggerEffectsDefinition TriggerEffects; // 0x428(0x0c)
	char pad_434[0x4]; // 0x434(0x04)
	struct FGameplayTagContainer MeleeActiveAppliedTags; // 0x438(0x20)
	struct FGameplayTagContainer BlockingTags; // 0x458(0x20)
	bool bUsesPrimaryButton; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct TArray<struct UGameplayEffect*> EffectsAppliedToHitActor; // 0x480(0x10)
	struct UBulletPenetrationDefense* CleaveDefense; // 0x490(0x08)
	struct UGobiDamageType* DamageType; // 0x498(0x08)
	struct UGobiDamageType* HeavyAttackDamageType; // 0x4a0(0x08)
	struct TArray<struct FTraceMeleeAttack> LightAttackSequence; // 0x4a8(0x10)
	struct TArray<struct FHeavyHeroMeleeAttack> HeavyAttackSequence; // 0x4b8(0x10)
	struct UAnimMontage* BlockMontageFP; // 0x4c8(0x08)
	struct UAnimMontage* BlockMontage3P; // 0x4d0(0x08)
	struct TArray<struct UGameplayEffect*> BlockingStateAppliedEffects; // 0x4d8(0x10)
	struct TArray<struct UGameplayEffect*> BlockedDamageSelfAppliedEffects; // 0x4e8(0x10)
	struct TArray<struct UGameplayEffect*> BlockedDamageInstigatorAppliedEffects; // 0x4f8(0x10)
	struct FTraceMeleeTuning TraceMeleeTuning; // 0x508(0x98)
	struct FGameplayTagQuery HeavyAttackRequiredQuery; // 0x5a0(0x48)
	struct FGameplayTagQuery BlockedDamageInstigatorQuery; // 0x5e8(0x48)
	struct FGameplayTagQuery BlockedDamageDamageTypeQuery; // 0x630(0x48)

	void OnRep_CurrentState(enum class EHeroMeleeState PreviousState); // Function Gobi.TraceMeleeComponent.OnRep_CurrentState // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.TraitCollection
// Size: 0x48 (Inherited: 0x38)
struct UTraitCollection : UDataAsset {
	struct TArray<struct UTrait*> Traits; // 0x38(0x10)
};

// Class Gobi.TraitsComponent
// Size: 0x198 (Inherited: 0xd8)
struct UTraitsComponent : UActorComponent {
	char pad_D8[0x18]; // 0xd8(0x18)
	struct FMulticastInlineDelegate OnTraitsAppliedDynamic; // 0xf0(0x10)
	char pad_100[0x30]; // 0x100(0x30)
	struct TArray<struct FTraitMapping> TraitMap; // 0x130(0x10)
	struct TArray<struct UTraitCollection*> AppliedTraitCollections; // 0x140(0x10)
	struct TArray<struct UTraitCollection*> Replicated_AppliedTraitCollections; // 0x150(0x10)
	struct TArray<struct FSingularTraitMapping> SingularTraitMap; // 0x160(0x10)
	struct TArray<struct UTrait*> AppliedSingularTraits; // 0x170(0x10)
	struct TArray<struct UTrait*> Replicated_AppliedSingularTraits; // 0x180(0x10)
	int32_t RandomSeed; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)

	void TraitsAppliedDynamicSignature__DelegateSignature(); // DelegateFunction Gobi.TraitsComponent.TraitsAppliedDynamicSignature__DelegateSignature // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.TraitsMod
// Size: 0xe8 (Inherited: 0x88)
struct UTraitsMod : UGameplayMod {
	struct TArray<struct UTrait*> Traits; // 0x88(0x10)
	bool bSelf; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FGameplayTagQuery TagQuery; // 0xa0(0x48)
};

// Class Gobi.TraumaKitBase
// Size: 0x338 (Inherited: 0x250)
struct ATraumaKitBase : AActor {
	struct USceneComponent* SceneRoot; // 0x250(0x08)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x258(0x08)
	struct UBoxComponent* UseTriggerVolumeComponent; // 0x260(0x08)
	struct UAnimContextLocatorComponent* AnimContextLocatorComponent; // 0x268(0x08)
	struct UPingableComponent* PingableComponent; // 0x270(0x08)
	struct UStaticMeshComponent* StaticMeshTemp1Component; // 0x278(0x08)
	struct UStaticMeshComponent* StaticMeshTemp2Component; // 0x280(0x08)
	struct UUsableComponent* UsableComponent; // 0x288(0x08)
	struct UUsableHighlightComponent* UsableHighlightComponent; // 0x290(0x08)
	struct UItemAudioComponent* ItemAudioComponent; // 0x298(0x08)
	struct FText CostText; // 0x2a0(0x18)
	struct FText UsableCurrencyCostTextMsg; // 0x2b8(0x18)
	struct FText ChargeText; // 0x2d0(0x18)
	struct FName HeroCardCompareName; // 0x2e8(0x08)
	int32_t FreeChargesPerDifficulty[0x5]; // 0x2f0(0x14)
	int32_t CurrencyChargeCost; // 0x304(0x04)
	float ChanceOfSpawning; // 0x308(0x04)
	float HealthHealAmt; // 0x30c(0x04)
	float TraumaHealAmt; // 0x310(0x04)
	int32_t StrikesHealAmt; // 0x314(0x04)
	struct TArray<struct UGameplayEffect*> ApplyEffectsToTarget; // 0x318(0x10)
	bool bIsEnabled; // 0x328(0x01)
	char pad_329[0x3]; // 0x329(0x03)
	int32_t CurrentChargeCnt; // 0x32c(0x04)
	char pad_330[0x8]; // 0x330(0x08)

	void SetIsEnabled(bool bNewIsEnabled); // Function Gobi.TraumaKitBase.SetIsEnabled // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.TriggerEffectsHandler
// Size: 0x58 (Inherited: 0x30)
struct UTriggerEffectsHandler : UObject {
	char pad_30[0x28]; // 0x30(0x28)
};

// Class Gobi.TriggerHordeComponent
// Size: 0x248 (Inherited: 0x1c8)
struct UTriggerHordeComponent : UAbilityComponent {
	char pad_1C8[0x8]; // 0x1c8(0x08)
	struct FMulticastInlineDelegate OnTriggerHordeEnded; // 0x1d0(0x10)
	struct FGameplayTag TriggerHordeCue; // 0x1e0(0x08)
	struct FTriggerHordeTuning TriggerHordeTuning; // 0x1e8(0x20)
	struct FString HordeLabel; // 0x208(0x10)
	struct FName TriggerHordeMontagesName; // 0x218(0x08)
	char pad_220[0x20]; // 0x220(0x20)
	int32_t HordeCounter; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)

	void StopTriggerHorde(); // Function Gobi.TriggerHordeComponent.StopTriggerHorde // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.TumorTossComponent
// Size: 0x630 (Inherited: 0x618)
struct UTumorTossComponent : UProjectileThrowComponent {
	struct TArray<struct AActor*> AlternateTargetClasses; // 0x618(0x10)
	float SweepRadius; // 0x628(0x04)
	int32_t AvailableAimModes; // 0x62c(0x04)

	struct FVector GetAlternateTargetLocation(struct AActor* AltTarget); // Function Gobi.TumorTossComponent.GetAlternateTargetLocation // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.TuningDataComponent
// Size: 0x110 (Inherited: 0xd8)
struct UTuningDataComponent : UActorComponent {
	char pad_D8[0x18]; // 0xd8(0x18)
	struct FDataTableRowHandle DataTableRow; // 0xf0(0x20)
};

// Class Gobi.TuningDataConverter
// Size: 0x58 (Inherited: 0x38)
struct UTuningDataConverter : UDataAsset {
	bool bUpdate; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UActorComponent* ActorComponentClass; // 0x40(0x08)
	struct TArray<struct AActor*> ActorClasses; // 0x48(0x10)
};

// Class Gobi.TuningData
// Size: 0x30 (Inherited: 0x30)
struct UTuningData : UInterface {
};

// Class Gobi.TurretGobiSwitchActor
// Size: 0x320 (Inherited: 0x2b8)
struct ATurretGobiSwitchActor : AGobiSwitchActor {
	struct FMulticastInlineDelegate FlameTurretFilled; // 0x2b8(0x10)
	char pad_2C8[0x10]; // 0x2c8(0x10)
	struct UParticleSystemComponent* FlameJet; // 0x2d8(0x08)
	struct UParticleSystemComponent* PilotLight; // 0x2e0(0x08)
	struct UBoxComponent* DamageVolume; // 0x2e8(0x08)
	struct TArray<struct UGameplayEffect*> EffectClass; // 0x2f0(0x10)
	struct UGobiDamageType* DamageType; // 0x300(0x08)
	float TurretDamageCooldown; // 0x308(0x04)
	float DeactivateFireCooldown; // 0x30c(0x04)
	float AboveMinHealthDamageModifier; // 0x310(0x04)
	float BelowMinHealthDamageModifier; // 0x314(0x04)
	float MinHealthModifierThreshold; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)

	void TurretFireDamage(); // Function Gobi.TurretGobiSwitchActor.TurretFireDamage // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.TutorialPopupUserWidget
// Size: 0x4a8 (Inherited: 0x470)
struct UTutorialPopupUserWidget : UPopupUserWidget {
	float ButtonDelayTime; // 0x470(0x04)
	char pad_474[0x34]; // 0x474(0x34)

	void AddTile(struct FTutorialTile InTile); // Function Gobi.TutorialPopupUserWidget.AddTile // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.TutorialTipUserWidget
// Size: 0x468 (Inherited: 0x450)
struct UTutorialTipUserWidget : UGobiUserWidget {
	char pad_450[0x10]; // 0x450(0x10)
	enum class EFTUETutorial Tutorial; // 0x460(0x01)
	bool bAlwaysShowDuringTutorialLevels; // 0x461(0x01)
	char pad_462[0x6]; // 0x462(0x06)

	void OnTutorialChanged(enum class EFTUETutorial InTutorial, bool bIsCompleted); // Function Gobi.TutorialTipUserWidget.OnTutorialChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.UIBlueprintFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UUIBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	bool ZombieAbilityValid(struct FZombieAbilityData ZombieAbilityData); // Function Gobi.UIBlueprintFunctionLibrary.ZombieAbilityValid // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.UIDataSet
// Size: 0x358 (Inherited: 0x38)
struct UUIDataSet : UDataAsset {
	struct UAkAudioEvent* LowClickAudioEvent; // 0x38(0x08)
	struct UAkAudioEvent* ClickAudioEvent; // 0x40(0x08)
	struct UAkAudioEvent* BeepAudioEvent; // 0x48(0x08)
	struct UAkAudioEvent* ObjectiveCountChangeDefaultAudioEvent; // 0x50(0x08)
	struct UUISpeakerTest* UISpeakerTestClass; // 0x58(0x08)
	struct FSlateSound WidgetFocusedSound; // 0x60(0x18)
	struct FSlateBrush FocusBrush; // 0x78(0x90)
	struct FSlateBrush CalloutTextBrush; // 0x108(0x90)
	struct TMap<struct FGameplayTag, struct UTexture2D*> GameplayTagsToStatusIcons; // 0x198(0x50)
	struct UTexture2D* DefaultCardIcon; // 0x1e8(0x08)
	struct UTexture2D* DefaultCardBackground; // 0x1f0(0x08)
	struct TMap<enum class EGameplayCardAffinity, struct UTexture2D*> CardAffinitiesToIcons; // 0x1f8(0x50)
	struct UTexture2D* DefaultAchievementIcon; // 0x248(0x08)
	struct UTexture2D* DefaultRewardIconSmall; // 0x250(0x08)
	struct UTexture2D* DefaultRewardIconShowcase; // 0x258(0x08)
	struct UTexture2D* DefaultSprayIcon; // 0x260(0x08)
	struct UTexture2D* DefaultWeaponSkinIcon; // 0x268(0x08)
	struct UTexture2D* DefaultCharacterSkinIcon; // 0x270(0x08)
	struct UTexture2D* DefaultTitleIcon; // 0x278(0x08)
	struct UTexture2D* DefaultEmblemIcon; // 0x280(0x08)
	struct UTexture2D* DefaultBannerIcon; // 0x288(0x08)
	struct UTexture2D* CheckBoxCheckedImage; // 0x290(0x08)
	struct UTexture2D* CheckBoxUncheckedImage; // 0x298(0x08)
	struct TMap<enum class EObjectiveState, struct UTexture2D*> ObjectiveStateToIcon; // 0x2a0(0x50)
	struct TMap<enum class EObjectiveState, struct FSlateColor> ObjectiveStateToColor; // 0x2f0(0x50)
	struct UGlobalSafeZoneUserWidget* GlobalSafeZoneWidgetClass; // 0x340(0x08)
	struct UColorBlindGroupData* ColorBlindGroupDataSet; // 0x348(0x08)
	struct UColorBlindOutlineHighlightData* ColorBlindPlayerOutlineHighlightData; // 0x350(0x08)
};

// Class Gobi.UIDeveloperSettings
// Size: 0x958 (Inherited: 0x40)
struct UUIDeveloperSettings : UDeveloperSettings {
	struct TSoftObjectPtr<UUIDataSet> DataSet; // 0x40(0x28)
	struct TArray<struct TSoftClassPtr<UObject>> ScreenClasses; // 0x68(0x10)
	struct TArray<struct FSoftObjectPath> AppLaunchScreenClasses; // 0x78(0x10)
	struct TSoftClassPtr<UObject> MutationScreenClass; // 0x88(0x28)
	struct FIntPoint StandardScreenResolution; // 0xb0(0x08)
	struct TSoftObjectPtr<UWorld> BrightnessOptionsLevel; // 0xb8(0x28)
	float SafeZoneStepSize; // 0xe0(0x04)
	float SafeZoneMinValue; // 0xe4(0x04)
	struct TSoftObjectPtr<UWaypointDataSet> WaypointDataSet; // 0xe8(0x28)
	struct TSoftClassPtr<UObject> PingWaypointClass; // 0x110(0x28)
	struct TSoftClassPtr<UObject> DefaultWaypointClass; // 0x138(0x28)
	float PingLifetime; // 0x160(0x04)
	float ItemPingLifetime; // 0x164(0x04)
	float PingDistance; // 0x168(0x04)
	float PingHeightOffset; // 0x16c(0x04)
	int32_t PerPlayerPingLimit; // 0x170(0x04)
	struct FVector2D PingOldNewScaleRange; // 0x174(0x08)
	struct FMargin WaypointBounds; // 0x17c(0x10)
	float AnalogBindThreshold; // 0x18c(0x04)
	float GamepadPauseHoldThreshold; // 0x190(0x04)
	float GamepadAxisThreshold; // 0x194(0x04)
	float DoubleClickThreshold; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct FSlateFontInfo CalloutTextFont; // 0x1a0(0x60)
	struct FMargin CalloutTextPadding; // 0x200(0x10)
	struct FSlateColor CalloutTextColor; // 0x210(0x30)
	int32_t CalloutIconHeight; // 0x240(0x04)
	int32_t CalloutIconTextWidth; // 0x244(0x04)
	struct FVector2D ItemToolTipOffset; // 0x248(0x08)
	struct TSoftClassPtr<UObject> ItemPickupTooltipClass; // 0x250(0x28)
	float ItemObservationDistance; // 0x278(0x04)
	float ItemObservationSphereRadius; // 0x27c(0x04)
	float ItemPickupTooltipOffset; // 0x280(0x04)
	struct FMargin ItemPickupTooltipBounds; // 0x284(0x10)
	float ItemPickupUseDuration; // 0x294(0x04)
	int32_t NumAmmoToDrop; // 0x298(0x04)
	int32_t NumCurrencyToDrop; // 0x29c(0x04)
	struct FRotator ItemDropRandomRotationMin; // 0x2a0(0x0c)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct TArray<enum class EItemAttributeType> ItemAttributeSortOrder; // 0x2b0(0x10)
	struct TMap<enum class EItemAttributeType, enum class EItemAttributeDisplayType> ItemAttributeDisplayTypes; // 0x2c0(0x50)
	struct FSlateColor PositiveAttributeColor; // 0x310(0x30)
	struct FSlateColor NegativeAttributeColor; // 0x340(0x30)
	struct FRotator ItemDropRandomRotationMax; // 0x370(0x0c)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct TSoftClassPtr<UObject> DefaultMessagePopupClass; // 0x380(0x28)
	struct TSoftClassPtr<UObject> CalloutTooltipClass; // 0x3a8(0x28)
	struct TSoftClassPtr<UObject> CardTooltipClass; // 0x3d0(0x28)
	struct TSoftClassPtr<UObject> TutorialPopupClass; // 0x3f8(0x28)
	struct TSoftClassPtr<UObject> MOTDPopupClass; // 0x420(0x28)
	struct TSoftClassPtr<UObject> PasswordPopupClass; // 0x448(0x28)
	struct TSoftClassPtr<UObject> LicensePopupClass; // 0x470(0x28)
	struct TSoftClassPtr<UObject> StartupOptionsPopupClass; // 0x498(0x28)
	struct TSoftClassPtr<UObject> NameChangerPopupClass; // 0x4c0(0x28)
	struct TSoftClassPtr<UObject> SignInPopupClass; // 0x4e8(0x28)
	struct TSoftClassPtr<UObject> ReportPlayerPopupClass; // 0x510(0x28)
	struct TSoftClassPtr<UObject> SurveyPopupClass; // 0x538(0x28)
	int32_t TooltipZOrder; // 0x560(0x04)
	float InvitePromptDuration; // 0x564(0x04)
	float ZombieStuckRespawnDuration; // 0x568(0x04)
	char pad_56C[0x4]; // 0x56c(0x04)
	struct TSoftObjectPtr<UCommWheelActionsData> CommWheelActionsDataSet; // 0x570(0x28)
	float CommWheelHoldDuration; // 0x598(0x04)
	float CommWheelPingLifetime; // 0x59c(0x04)
	float CommWheelAnalogSelectionThreshold; // 0x5a0(0x04)
	float CommWheelMouseSelectionThreshold; // 0x5a4(0x04)
	float CommWheelAnalogLockThreshold; // 0x5a8(0x04)
	float ScrollSpeed; // 0x5ac(0x04)
	struct TMap<enum class EGameplayCardAffinity, struct FText> CardAffinitiesToNames; // 0x5b0(0x50)
	struct TMap<enum class EGameplayCardAffinity, struct FSlateColor> CardAffinitiesToColors; // 0x600(0x50)
	struct TMap<enum class EItemCategory, struct FText> ItemCategoriesToNames; // 0x650(0x50)
	struct TSoftClassPtr<UObject> TestAchievementClass; // 0x6a0(0x28)
	int32_t LowClickThreshold; // 0x6c8(0x04)
	int32_t ClickThreshold; // 0x6cc(0x04)
	int32_t BeepThreshold; // 0x6d0(0x04)
	int32_t ChatMessageCacheSize; // 0x6d4(0x04)
	struct TSoftObjectPtr<UWorld> PreRoundCharacterSelectLevel; // 0x6d8(0x28)
	struct TSoftObjectPtr<UWorld> PostRoundCharacterSelectLevel; // 0x700(0x28)
	float SplashFailureDuration; // 0x728(0x04)
	float DefaultPostroundPanelDuration; // 0x72c(0x04)
	struct TMap<enum class EPostRoundPanel, float> PostroundPanelDurations; // 0x730(0x50)
	struct TSoftClassPtr<UObject> PlayerSprayActor; // 0x780(0x28)
	struct FSprayData DefaultUserSpray; // 0x7a8(0x10)
	struct TSoftObjectPtr<UDataTable> UnockableSpraysTable; // 0x7b8(0x28)
	float SprayDistance; // 0x7e0(0x04)
	struct FBadgeData DefaultUserBadge; // 0x7e4(0x0c)
	struct TSoftObjectPtr<UDataTable> UnlockableTitlesTable; // 0x7f0(0x28)
	struct TSoftObjectPtr<UDataTable> UnlockableEmblemsTable; // 0x818(0x28)
	struct TSoftObjectPtr<UDataTable> UnlockableBannersTable; // 0x840(0x28)
	int32_t MaxUserSprays; // 0x868(0x04)
	char pad_86C[0x4]; // 0x86c(0x04)
	struct TSoftObjectPtr<UDataTable> MixProfileTable; // 0x870(0x28)
	struct TSoftObjectPtr<UDataTable> MOTDTable; // 0x898(0x28)
	float MediumDamageThreshold; // 0x8c0(0x04)
	float LargeDamageThreshold; // 0x8c4(0x04)
	char MaxDamageIndicators; // 0x8c8(0x01)
	char pad_8C9[0x7]; // 0x8c9(0x07)
	struct TArray<enum class EDamageContext> HitMarkerContextPriority; // 0x8d0(0x10)
	float LateJoinerCinematicThreshold; // 0x8e0(0x04)
	char pad_8E4[0x4]; // 0x8e4(0x04)
	struct FSlateColor SelectedPipOnColor; // 0x8e8(0x30)
	struct FSlateColor SelectedPipOffColor; // 0x918(0x30)
	struct TArray<struct FDataTableRowHandle> TutorialMaps; // 0x948(0x10)
};

// Class Gobi.PartyPlayerBlueprintFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UPartyPlayerBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	bool IsPartyPlayerValid(struct FPartyPlayer PartyPlayer); // Function Gobi.PartyPlayerBlueprintFunctionLibrary.IsPartyPlayerValid // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.UISpeakerTest
// Size: 0xb8 (Inherited: 0x30)
struct UUISpeakerTest : UObject {
	struct UAkAudioBank* Bank; // 0x30(0x08)
	struct UAkAudioEvent* FrontLeftEvent; // 0x38(0x08)
	struct UAkAudioEvent* FrontCenterEvent; // 0x40(0x08)
	struct UAkAudioEvent* FrontRightEvent; // 0x48(0x08)
	struct UAkAudioEvent* SideLeftEvent; // 0x50(0x08)
	struct UAkAudioEvent* SideRightEvent; // 0x58(0x08)
	struct UAkAudioEvent* BackLeftEvent; // 0x60(0x08)
	struct UAkAudioEvent* BackRightEvent; // 0x68(0x08)
	struct UAkAudioEvent* LFEEvent; // 0x70(0x08)
	struct UAkAudioEvent* StopEvent; // 0x78(0x08)
	struct FMulticastInlineDelegate OnSpeakerTestStateChanged; // 0x80(0x10)
	char pad_90[0x28]; // 0x90(0x28)

	void StopSpeakerTest(); // Function Gobi.UISpeakerTest.StopSpeakerTest // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.UpdateHealthBarEnabledMod
// Size: 0x90 (Inherited: 0x88)
struct UUpdateHealthBarEnabledMod : UGameplayMod {
	bool bEnabled; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Gobi.UsableHighlightComponent
// Size: 0x180 (Inherited: 0x138)
struct UUsableHighlightComponent : UHighlightComponent {
	char pad_138[0x48]; // 0x138(0x48)
};

// Class Gobi.UtilsBlueprintFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UUtilsBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	int32_t WeightedRandomSelection(struct TArray<float> Weights); // Function Gobi.UtilsBlueprintFunctionLibrary.WeightedRandomSelection // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.VendorAnimInstance
// Size: 0x340 (Inherited: 0x2c0)
struct UVendorAnimInstance : UAnimInstance {
	enum class EVendorAnimBehaviorState CurrentBehaviorState; // 0x2b8(0x01)
	struct UAnimSequence* LonelyAnim; // 0x2c0(0x08)
	struct UAnimSequence* NagAnim; // 0x2c8(0x08)
	struct UAnimSequence* InteractAnim; // 0x2d0(0x08)
	struct UAnimSequence* InteractToLonelyAnim; // 0x2d8(0x08)
	struct UAnimSequence* LonelyToNagAnim; // 0x2e0(0x08)
	struct UAnimSequence* NagToLonelyAnim; // 0x2e8(0x08)
	struct UAnimSequence* NagToInteractAnim; // 0x2f0(0x08)
	struct FLookAtInfo LookAtInfo; // 0x2f8(0x34)
	char pad_32D[0x13]; // 0x32d(0x13)

	enum class EVendorAnimBehaviorState GetCurrentState(); // Function Gobi.VendorAnimInstance.GetCurrentState // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.VendorComponent
// Size: 0x160 (Inherited: 0xd8)
struct UVendorComponent : UActorComponent {
	struct TArray<struct FVendorStockItem> VendorStock; // 0xd8(0x10)
	struct TArray<struct FRolledVendorStockItemParams> RandomItemStockParams; // 0xe8(0x10)
	struct TArray<struct FRolledVendorStockCardParams> RandomCardStockParams; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnUserClosedVendorScreen; // 0x108(0x10)
	struct FMulticastInlineDelegate OnPurchaseMade; // 0x118(0x10)
	char pad_128[0x10]; // 0x128(0x10)
	struct TArray<struct FVendorStockItem> ReplicatedVendorStock; // 0x138(0x10)
	char pad_148[0x18]; // 0x148(0x18)

	void VendorStockChanged__DelegateSignature(); // DelegateFunction Gobi.VendorComponent.VendorStockChanged__DelegateSignature // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.VendorItemUserWidget
// Size: 0x558 (Inherited: 0x450)
struct UVendorItemUserWidget : UGobiUserWidget {
	struct UVendorRefillTrackerUserWidget* RefillTrackerWidget; // 0x450(0x08)
	struct TArray<enum class EEquipmentSlot> WatchedEquipSlots; // 0x458(0x10)
	char pad_468[0xf0]; // 0x468(0xf0)

	struct FVector2D SizeOfWidget(struct FVendorStockItem StockItem); // Function Gobi.VendorItemUserWidget.SizeOfWidget // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.VendorNPC
// Size: 0x308 (Inherited: 0x250)
struct AVendorNPC : AActor {
	bool bDisableNags; // 0x250(0x01)
	char pad_251[0x3]; // 0x251(0x03)
	float DelayForAttract; // 0x254(0x04)
	struct FVector2D DialogueAmbientRate; // 0x258(0x08)
	struct FVector2D DialogueNagRate; // 0x260(0x08)
	bool bIsSaferoomVendor; // 0x268(0x01)
	bool bEndingSaferoom; // 0x269(0x01)
	char pad_26A[0x2]; // 0x26a(0x02)
	float FocusTrackingUpdateRate; // 0x26c(0x04)
	struct USceneComponent* DefaultRootComponent; // 0x270(0x08)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x278(0x08)
	struct UAkSkeletalComponent* AudioEmitterComponent; // 0x280(0x08)
	struct UGobiDialogueComponent* DialogueComponent; // 0x288(0x08)
	struct ULiteCharacterAudioComponent* AudioComponent; // 0x290(0x08)
	struct UFacialAnimationComponent* FacialAnimationComponent; // 0x298(0x08)
	struct FDataTableRowHandle VoiceRowHandle; // 0x2a0(0x20)
	struct UBoxComponent* NagBoxComponent; // 0x2c0(0x08)
	char pad_2C8[0x20]; // 0x2c8(0x20)
	enum class EVendorAnimBehaviorState State; // 0x2e8(0x01)
	char pad_2E9[0x1f]; // 0x2e9(0x1f)

	void ServerEndInteraction(); // Function Gobi.VendorNPC.ServerEndInteraction // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.VendorPaginatorUserWidget
// Size: 0x4f8 (Inherited: 0x450)
struct UVendorPaginatorUserWidget : UGobiUserWidget {
	struct FMulticastInlineDelegate OnItemFocusReceived; // 0x450(0x10)
	struct FMulticastInlineDelegate OnItemFocusLost; // 0x460(0x10)
	struct FMulticastInlineDelegate OnItemClicked; // 0x470(0x10)
	struct FMulticastInlineDelegate OnPageInfoChanged; // 0x480(0x10)
	struct UVendorItemUserWidget* WidgetClass; // 0x490(0x08)
	char pad_498[0x60]; // 0x498(0x60)

	void SetVendorItems(struct TArray<struct FIndexedVendorStockItem> InVendorItems); // Function Gobi.VendorPaginatorUserWidget.SetVendorItems // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.VendorRefillTrackerUserWidget
// Size: 0x478 (Inherited: 0x450)
struct UVendorRefillTrackerUserWidget : UGobiUserWidget {
	char pad_450[0x28]; // 0x450(0x28)

	void OnTrackingTypeChanged(enum class EAmmoType AmmoType); // Function Gobi.VendorRefillTrackerUserWidget.OnTrackingTypeChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.VendorSaleMod
// Size: 0xb8 (Inherited: 0x88)
struct UVendorSaleMod : UGameplayMod {
	struct FVendorSaleParams SaleParams; // 0x88(0x30)
};

// Class Gobi.VendorScreen
// Size: 0x640 (Inherited: 0x560)
struct UVendorScreen : UInGameScreen {
	struct UVendorSubcategoryUserWidget* ItemSubcategoryWidget; // 0x560(0x08)
	struct TArray<struct FCategoryGroup> CategoryGroups; // 0x568(0x10)
	char pad_578[0x50]; // 0x578(0x50)
	struct TArray<struct FVendorStockItem> LastSeenVendorStock; // 0x5c8(0x10)
	struct FSlateSound ErrorSound; // 0x5d8(0x18)
	struct TSoftObjectPtr<UInventoryComponent> InventoryComponent; // 0x5f0(0x28)
	char pad_618[0x28]; // 0x618(0x28)

	void UpdateCurrency(); // Function Gobi.VendorScreen.UpdateCurrency // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.VendorSubcategoryUserWidget
// Size: 0x498 (Inherited: 0x450)
struct UVendorSubcategoryUserWidget : UGobiUserWidget {
	struct FMulticastInlineDelegate OnItemFocusReceived; // 0x450(0x10)
	struct FMulticastInlineDelegate OnItemFocusLost; // 0x460(0x10)
	struct FMulticastInlineDelegate OnItemClicked; // 0x470(0x10)
	char pad_480[0x18]; // 0x480(0x18)

	void HandleSubcategoryFocusReceived__DelegateSignature(struct UVendorSubcategoryUserWidget* Subcategory, struct UUserWidget* Widget); // DelegateFunction Gobi.VendorSubcategoryUserWidget.HandleSubcategoryFocusReceived__DelegateSignature // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.VertexAnimationComponent
// Size: 0xf8 (Inherited: 0xd8)
struct UVertexAnimationComponent : UActorComponent {
	struct UStaticMesh* VertexAnimationMesh; // 0xd8(0x08)
	struct UStaticMeshComponent* VertexAnimationMeshComponent; // 0xe0(0x08)
	struct UMaterialInstanceDynamic* DynamicVertexAnimMeshMaterial; // 0xe8(0x08)
	float VertexAnimationLifetime; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// Class Gobi.VFXCorpse
// Size: 0x2a8 (Inherited: 0x250)
struct AVFXCorpse : AActor {
	struct UAkAudioEvent* DissolveAudioEvent; // 0x250(0x08)
	float FadeDuration; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct UParticleSystem* FadeParticleSystem; // 0x260(0x08)
	char pad_268[0x18]; // 0x268(0x18)
	struct UPoseableMeshComponent* MainMeshComponent; // 0x280(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> FadeDynamicMaterials; // 0x288(0x10)
	char pad_298[0x10]; // 0x298(0x10)
};

// Class Gobi.VFXCorpseManager
// Size: 0x60 (Inherited: 0x30)
struct UVFXCorpseManager : UObject {
	char pad_30[0x30]; // 0x30(0x30)
};

// Class Gobi.VFXCorpseSubsystem
// Size: 0x40 (Inherited: 0x38)
struct UVFXCorpseSubsystem : UWorldSubsystem {
	struct UVFXCorpseManager* VFXCorpseManager; // 0x38(0x08)

	void OnResetMission(); // Function Gobi.VFXCorpseSubsystem.OnResetMission // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.VisibilityMapSubsystem
// Size: 0xa8 (Inherited: 0x38)
struct UVisibilityMapSubsystem : UWorldSubsystem {
	char pad_38[0x70]; // 0x38(0x70)
};

// Class Gobi.VisibilityNavMapQueryFilter
// Size: 0x58 (Inherited: 0x50)
struct UVisibilityNavMapQueryFilter : UDistanceMapNavQueryFilter {
	float VisibilityCountInfluence; // 0x50(0x04)
	float PartialVisibilityScalar; // 0x54(0x04)
};

// Class Gobi.VistaCharacterSpawner
// Size: 0x2f0 (Inherited: 0x250)
struct AVistaCharacterSpawner : AActor {
	struct FMulticastInlineDelegate OnVistaCharacteSpawn; // 0x250(0x10)
	struct AGobiCharacter* GobiCharacterClass; // 0x260(0x08)
	struct TArray<struct USkeletalMeshRegionConfig*> PreloadMeshConfigs; // 0x268(0x10)
	int32_t NumCharactersToSpawn; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	bool bFillOnStart; // 0x280(0x01)
	bool bRespawnOnDeath; // 0x281(0x01)
	char pad_282[0x2]; // 0x282(0x02)
	float SpawnDelay; // 0x284(0x04)
	float SpawnRadius; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct UNavigationQueryFilter* SpawnNavigationFilterClass; // 0x290(0x08)
	struct UGobiDamageType* KillPopDamageType; // 0x298(0x08)
	struct TArray<struct UObject*> LoadedAssets; // 0x2a0(0x10)
	char pad_2B0[0x40]; // 0x2b0(0x40)

	void StopSpawning(bool bKillOffPopulation); // Function Gobi.VistaCharacterSpawner.StopSpawning // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.VivoxListener
// Size: 0xf8 (Inherited: 0x88)
struct UVivoxListener : UAkAudioInputObject {
	char pad_88[0x70]; // 0x88(0x70)
};

// Class Gobi.VoiceRoutingComponent
// Size: 0x100 (Inherited: 0xd8)
struct UVoiceRoutingComponent : UActorComponent {
	struct UMatchmaking* Matchmaking; // 0xd8(0x08)
	char pad_E0[0x20]; // 0xe0(0x20)
};

// Class Gobi.VoiceTalkersComponent
// Size: 0x110 (Inherited: 0xd8)
struct UVoiceTalkersComponent : UActorComponent {
	struct UMatchmaking* Matchmaking; // 0xd8(0x08)
	struct APlayerController* Controller; // 0xe0(0x08)
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FMulticastInlineDelegate OnAnyLocalPlayerTalkingChanged; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnAnyRemotePlayerTalkingChanged; // 0x100(0x10)

	void SetTextMuted(struct APlayerState* PlayerState, bool bMuted); // Function Gobi.VoiceTalkersComponent.SetTextMuted // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.VoipOverlayUserWidget
// Size: 0x458 (Inherited: 0x450)
struct UVoipOverlayUserWidget : UGobiUserWidget {
	char pad_450[0x8]; // 0x450(0x08)

	void OnSlotsUpdated(); // Function Gobi.VoipOverlayUserWidget.OnSlotsUpdated // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.WallGrabComponent
// Size: 0x300 (Inherited: 0x120)
struct UWallGrabComponent : UMovementTickableComponent {
	struct FWallGrabConfig WallGrabConfig; // 0x120(0x148)
	struct FWallGrabMoveTickData MoveTickData; // 0x268(0x24)
	char pad_28C[0x74]; // 0x28c(0x74)

	void OnGrabMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function Gobi.WallGrabComponent.OnGrabMontageEnded // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.WallGrabTrait
// Size: 0x180 (Inherited: 0x30)
struct UWallGrabTrait : UTrait {
	struct FWallGrabConfig Config; // 0x30(0x148)
	struct UWallGrabComponent* WallGrabComponentClass; // 0x178(0x08)
};

// Class Gobi.WanderPopulationDensityConfig
// Size: 0x88 (Inherited: 0x38)
struct UWanderPopulationDensityConfig : UDataAsset {
	struct TMap<enum class EWanderBucketDensityLevel, struct FWanderPopulationBucketDensityLevel> WanderPopulationBucketDensityLevels; // 0x38(0x50)
};

// Class Gobi.WaterMapper
// Size: 0x30 (Inherited: 0x30)
struct UWaterMapper : UObject {
};

// Class Gobi.WaterRippler
// Size: 0x258 (Inherited: 0x250)
struct AWaterRippler : AActor {
	struct UWaterRipplerComponent* WaterRipplerComponent; // 0x250(0x08)
};

// Class Gobi.WaterRipplerStatic
// Size: 0x258 (Inherited: 0x258)
struct AWaterRipplerStatic : AWaterRippler {
};

// Class Gobi.WaterRipplerDynamic
// Size: 0x258 (Inherited: 0x258)
struct AWaterRipplerDynamic : AWaterRippler {
};

// Class Gobi.WaterRipplerComponent
// Size: 0x250 (Inherited: 0x220)
struct UWaterRipplerComponent : USceneComponent {
	struct UWaterRipplerDef* RipplerDefinition; // 0x220(0x08)
	struct AWaterVolume* WaterVolume; // 0x228(0x08)
	struct FWaterRipplerRuntime RuntimeData; // 0x230(0x20)
};

// Class Gobi.WaterRipplerDef
// Size: 0x70 (Inherited: 0x38)
struct UWaterRipplerDef : UDataAsset {
	struct FVector2D MovingHeightRange; // 0x38(0x08)
	struct FVector2D MovingWidthRange; // 0x40(0x08)
	struct FVector2D Strength; // 0x48(0x08)
	struct FVector2D Size; // 0x50(0x08)
	struct FVector2D Lifetime; // 0x58(0x08)
	struct FVector2D Frequency; // 0x60(0x08)
	enum class EWaterRippleStartType ForceType; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Gobi.WaterRippleMakers
// Size: 0x90 (Inherited: 0x38)
struct UWaterRippleMakers : UDataAsset {
	struct UWaterRipplerDef* DefaultDef; // 0x38(0x08)
	struct TMap<struct AGobiCharacter*, struct UWaterRipplerDef*> ActorTypes; // 0x40(0x50)
};

// Class Gobi.WaterSimSurfaceMesh
// Size: 0x278 (Inherited: 0x260)
struct AWaterSimSurfaceMesh : AStaticMeshActor {
	bool bStandaloneWaterSim; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct UWaterSimulation* WaterSim; // 0x268(0x08)
	struct UWaterSurfaceComponent* WaterSurfaceComponent; // 0x270(0x08)

	void SetStandaloneWaterSim(bool bEnabledIn); // Function Gobi.WaterSimSurfaceMesh.SetStandaloneWaterSim // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.WaterSurfaceDef
// Size: 0xb0 (Inherited: 0x38)
struct UWaterSurfaceDef : UDataAsset {
	struct UMaterialInterface* HeightSimMaterial; // 0x38(0x08)
	struct UMaterialInterface* NormalMaterial; // 0x40(0x08)
	struct UMaterialInterface* ForceMaterial; // 0x48(0x08)
	struct UWaterRippleMakers* RippleMakers; // 0x50(0x08)
	float ProceduralFPS; // 0x58(0x04)
	float NormalHeightScale; // 0x5c(0x04)
	float TravelSpeed; // 0x60(0x04)
	int32_t NumSimulationSteps; // 0x64(0x04)
	float Dampening; // 0x68(0x04)
	int32_t RenderTargetSize; // 0x6c(0x04)
	float RenderTargetWorldSize; // 0x70(0x04)
	int32_t EdgePixelsReservedForScroll; // 0x74(0x04)
	float MaskPixelDistance; // 0x78(0x04)
	float MovementPredictionMult; // 0x7c(0x04)
	float MaxWaveHeight; // 0x80(0x04)
	float WaterLineAtten; // 0x84(0x04)
	struct FString WaterSimSharedVolumePrefix; // 0x88(0x10)
	struct UWaterRipplerDef* BuoyantRippleDef; // 0x98(0x08)
	bool UseFlowingWater; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct UTextureCube* CubemapOverride; // 0xa8(0x08)
};

// Class Gobi.WaterSurface
// Size: 0x190 (Inherited: 0x30)
struct UWaterSurface : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct UWaterSurfaceDef* Definition; // 0x40(0x08)
	struct UMaterialInstanceDynamic* HeightMID; // 0x48(0x08)
	struct UMaterialInstanceDynamic* ForceMID; // 0x50(0x08)
	struct UMaterialInstanceDynamic* NormalMID; // 0x58(0x08)
	struct UMaterialInterface* OriginalMeshMaterial; // 0x60(0x08)
	struct TArray<struct UTextureRenderTarget2D*> RenderTargets; // 0x68(0x10)
	struct TArray<struct UTextureRenderTarget2D*> NormalRenderTargets; // 0x78(0x10)
	char pad_88[0x8]; // 0x88(0x08)
	struct UStaticMeshComponent* RTMeshComponent; // 0x90(0x08)
	struct UMaterialInstanceDynamic* WaterMID; // 0x98(0x08)
	struct UTextureRenderTarget2D* ShiftRTTempTarget; // 0xa0(0x08)
	struct FWaterMapperData MapperData; // 0xa8(0x30)
	struct TArray<struct FWaterRipplerProxy> RipplerProxies; // 0xd8(0x10)
	struct TArray<struct FWaterRipplerHit> RipplerHits; // 0xe8(0x10)
	char pad_F8[0x98]; // 0xf8(0x98)
};

// Class Gobi.WaterSurfaceMesh
// Size: 0x268 (Inherited: 0x260)
struct AWaterSurfaceMesh : AStaticMeshActor {
	struct AWaterVolume* WaterVolume; // 0x260(0x08)
};

// Class Gobi.WaterVolumeDef
// Size: 0x80 (Inherited: 0x38)
struct UWaterVolumeDef : UDataAsset {
	struct UGameplayEffect* EffectShallowClass; // 0x38(0x08)
	struct UGameplayEffect* EffectDeepClass; // 0x40(0x08)
	struct UGameplayEffect* EffectDeepRecentClass; // 0x48(0x08)
	struct UParticleSystem* DeepMovementEmitter; // 0x50(0x08)
	struct UParticleSystem* DeepSplashEmitter; // 0x58(0x08)
	struct UParticleSystem* ShallowMovementEmitter; // 0x60(0x08)
	struct UParticleSystem* ShallowSplashEmitter; // 0x68(0x08)
	float BuoyantForceMultiplier; // 0x70(0x04)
	float SkeletalLinearDampening; // 0x74(0x04)
	float SkeletalAngularDampening; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class Gobi.WaterVolume
// Size: 0x3d0 (Inherited: 0x288)
struct AWaterVolume : ATriggerVolume {
	char pad_288[0x20]; // 0x288(0x20)
	struct TArray<struct AGobiCharacter*> Characters; // 0x2a8(0x10)
	char pad_2B8[0xa0]; // 0x2b8(0xa0)
	struct UWaterVolumeDef* Definition; // 0x358(0x08)
	struct UWaterSurface* Surface; // 0x360(0x08)
	char pad_368[0x58]; // 0x368(0x58)
	bool bSurfaceHeightModifiable; // 0x3c0(0x01)
	char pad_3C1[0x3]; // 0x3c1(0x03)
	float WaterSurfaceZ; // 0x3c4(0x04)
	char pad_3C8[0x8]; // 0x3c8(0x08)

	void OnOverlapEnd(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function Gobi.WaterVolume.OnOverlapEnd // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.Waypoint
// Size: 0x368 (Inherited: 0x250)
struct AWaypoint : AActor {
	char pad_250[0x8]; // 0x250(0x08)
	struct FWaypointDefinition WaypointDef; // 0x258(0xd0)
	struct UActorComponent* PingTarget; // 0x328(0x08)
	float Scale; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct UWaypointDataSet* DataSet; // 0x338(0x08)
	struct TArray<struct UWaypointUserWidget*> Widgets; // 0x340(0x10)
	char pad_350[0x18]; // 0x350(0x18)

	void OnTargetLifeStateChanged(struct FGameplayTag NewStateTag, struct FGameplayTag PreviousStateTag); // Function Gobi.Waypoint.OnTargetLifeStateChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.WaypointDataSet
// Size: 0xc8 (Inherited: 0x38)
struct UWaypointDataSet : UDataAsset {
	struct UAkAudioEvent* SurvivorPingCreatedSound; // 0x38(0x08)
	struct UAkAudioEvent* ZombiePingCreatedSound; // 0x40(0x08)
	struct UAkAudioEvent* WaypointCreatedSound; // 0x48(0x08)
	struct UAkAudioEvent* WaypointDestroyedSound; // 0x50(0x08)
	struct TMap<enum class EPingType, struct UTexture2D*> PingIcons; // 0x58(0x50)
	struct UTexture2D* WideItemPingBackground; // 0xa8(0x08)
	struct UTexture2D* WideItemPingBorder; // 0xb0(0x08)
	struct UTexture2D* SquareItemPingBackground; // 0xb8(0x08)
	struct UTexture2D* SquareItemPingBorder; // 0xc0(0x08)
};

// Class Gobi.WaypointManager
// Size: 0xf8 (Inherited: 0xd8)
struct UWaypointManager : UActorComponent {
	char pad_D8[0x20]; // 0xd8(0x20)

	void UpdateMissionWaypoints(); // Function Gobi.WaypointManager.UpdateMissionWaypoints // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.WaypointSpawnerComponent
// Size: 0x5a0 (Inherited: 0x4c0)
struct UWaypointSpawnerComponent : UBillboardComponent {
	struct FWaypointDefinition WaypointDef; // 0x4c0(0xd0)
	struct AWaypoint* Waypoint; // 0x590(0x08)
	char pad_598[0x8]; // 0x598(0x08)

	void SetWaypointVisibility(bool bIsVisible); // Function Gobi.WaypointSpawnerComponent.SetWaypointVisibility // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.WaypointUserWidget
// Size: 0x338 (Inherited: 0x2d8)
struct UWaypointUserWidget : UUserWidget {
	float ADSOpacity; // 0x2d8(0x04)
	char pad_2DC[0x8]; // 0x2dc(0x08)
	float ArrowOffsetFromIcon; // 0x2e4(0x04)
	char pad_2E8[0x50]; // 0x2e8(0x50)

	void SetType(enum class EWaypointType Type); // Function Gobi.WaypointUserWidget.SetType // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.WeakSpotsComponent
// Size: 0x1b0 (Inherited: 0xd8)
struct UWeakSpotsComponent : UActorComponent {
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FMulticastInlineDelegate OnWeakSpotAttachmentDestroyed; // 0xe0(0x10)
	struct FWeakSpotsTuning WeakSpotsTuning; // 0xf0(0x28)
	struct TArray<struct FWeakSpotAttachment> InitialWeakSpotAttachments; // 0x118(0x10)
	struct TArray<struct FWeakSpotSurface> WeakSpotSurfaces; // 0x128(0x10)
	char pad_138[0x10]; // 0x138(0x10)
	struct TArray<struct FWeakSpotAttachment> WeakSpotAttachments; // 0x148(0x10)
	struct TArray<struct FWeakSpotAttachment> CachedWeakSpotAttachments; // 0x158(0x10)
	char pad_168[0x3c]; // 0x168(0x3c)
	int32_t MaxRecentHitTags; // 0x1a4(0x04)
	bool bDestroyWeakSpotsOnDeath; // 0x1a8(0x01)
	bool bWeakspotsUseAttachParentBound; // 0x1a9(0x01)
	char pad_1AA[0x6]; // 0x1aa(0x06)

	void OnRep_WeakSpotSurfaces(); // Function Gobi.WeakSpotsComponent.OnRep_WeakSpotSurfaces // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.AttachmentMeshConfigurations
// Size: 0x48 (Inherited: 0x38)
struct UAttachmentMeshConfigurations : UDataAsset {
	struct TArray<struct FWeaponAttachmentMeshConfig> MeshConfigurations; // 0x38(0x10)
};

// Class Gobi.WeaponAttachmentComponent
// Size: 0x238 (Inherited: 0x150)
struct UWeaponAttachmentComponent : UItemBaseComponent {
	struct FMulticastInlineDelegate OnAttachmentsChanged; // 0x150(0x10)
	struct FMulticastInlineDelegate OnAttachmentAdded; // 0x160(0x10)
	struct FMulticastInlineDelegate OnAttachmentRemoved; // 0x170(0x10)
	char pad_180[0x30]; // 0x180(0x30)
	struct TArray<struct FDataTableRowHandle> PendingAttachmentApplications; // 0x1b0(0x10)
	struct TArray<struct FDataTableRowHandle> PendingAttachmentRemovals; // 0x1c0(0x10)
	struct TArray<struct FDataTableRowHandle> AppliedAttachments; // 0x1d0(0x10)
	struct TArray<struct FDataTableRowHandle> AppliedAttachments_Client; // 0x1e0(0x10)
	struct FGameplayTagContainer UnsupportedAttachments; // 0x1f0(0x20)
	struct TArray<struct FGameplayTagContainer> AttachmentSlots; // 0x210(0x10)
	struct UAttachmentMeshConfigurations* DefaultMeshConfigurations; // 0x220(0x08)
	struct TArray<struct FWeaponAttachmentMeshConfig> MeshConfigurationOverrides; // 0x228(0x10)

	void OnRep_AppliedAttachments(); // Function Gobi.WeaponAttachmentComponent.OnRep_AppliedAttachments // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.WeaponCustomizationMannequin
// Size: 0x350 (Inherited: 0x250)
struct AWeaponCustomizationMannequin : AActor {
	char pad_250[0x60]; // 0x250(0x60)
	struct USkeletalMesh* BaseSkeletalMesh; // 0x2b0(0x08)
	struct FDataTableRowHandle DesiredItemRowHandle; // 0x2b8(0x20)
	struct FDataTableRowHandle CurrentLoadingRowHandle; // 0x2d8(0x20)
	struct FDataTableRowHandle DesiredCustomizationRowHandle; // 0x2f8(0x20)
	struct FDataTableRowHandle CurrentLoadingCustomizationRowHandle; // 0x318(0x20)
	struct TArray<struct FName> BonesHiddenByDefault; // 0x338(0x10)
	float WeaponCameraDistance; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)

	void SetCustomizationSelection(struct FDataTableRowHandle InDataTableRowHandle); // Function Gobi.WeaponCustomizationMannequin.SetCustomizationSelection // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.WeaponCustomizationScreen
// Size: 0x5f0 (Inherited: 0x530)
struct UWeaponCustomizationScreen : UUIScreen {
	char pad_530[0x10]; // 0x530(0x10)
	struct FDataTableRowHandle CurrentItem; // 0x540(0x20)
	struct FDataTableRowHandle EquippedCustomization; // 0x560(0x20)
	char pad_580[0x8]; // 0x580(0x08)
	struct TArray<struct FDataTableRowHandle> ItemRowHandles; // 0x588(0x10)
	char pad_598[0x58]; // 0x598(0x58)

	void UpdateCategoryButton(enum class EWeaponCustomizationType InType, struct FText EquippedName); // Function Gobi.WeaponCustomizationScreen.UpdateCategoryButton // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.WeaponEntryUserWidget
// Size: 0x488 (Inherited: 0x450)
struct UWeaponEntryUserWidget : UGobiUserWidget {
	char pad_450[0x38]; // 0x450(0x38)

	struct FDataTableRowHandle GetItemRowHandle(); // Function Gobi.WeaponEntryUserWidget.GetItemRowHandle // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.WeaponMovementSpeedComponent
// Size: 0x1c0 (Inherited: 0x150)
struct UWeaponMovementSpeedComponent : UItemBaseComponent {
	struct FWeaponMoveSpeedTuning WeaponMoveSpeedTuning; // 0x150(0x6c)
	char pad_1BC[0x4]; // 0x1bc(0x04)
};

// Class Gobi.WeaponTracer
// Size: 0x50 (Inherited: 0x38)
struct UWeaponTracer : UDataAsset {
	struct UParticleSystem* ParticleSystem; // 0x38(0x08)
	float FadeDuration; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UMaterialInterface* Material; // 0x48(0x08)
};

// Class Gobi.WeaponUsageAnalyticsComponent
// Size: 0x148 (Inherited: 0xd8)
struct UWeaponUsageAnalyticsComponent : UActorComponent {
	char pad_D8[0x70]; // 0xd8(0x70)

	void TrackItem(enum class EEquipmentSlot Slot, struct AItem* OldItem, struct AItem* NewItem); // Function Gobi.WeaponUsageAnalyticsComponent.TrackItem // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.WeaponUtils
// Size: 0x30 (Inherited: 0x30)
struct UWeaponUtils : UBlueprintFunctionLibrary {
};

// Class Gobi.WoundComponent
// Size: 0x6a0 (Inherited: 0x5b0)
struct UWoundComponent : UStaticMeshComponent {
	struct FWoundData Config; // 0x5b0(0xf0)
};

// Class Gobi.WoundConfigActor
// Size: 0x268 (Inherited: 0x250)
struct AWoundConfigActor : AActor {
	struct USceneComponent* InternalRootComponent; // 0x250(0x08)
	struct USkeletalMeshComponent* Mesh; // 0x258(0x08)
	struct UMutilationWoundConfigData* WoundConfigsData; // 0x260(0x08)
};

// Class Gobi.WoundRootComponent
// Size: 0x230 (Inherited: 0x220)
struct UWoundRootComponent : USceneComponent {
	struct FGameplayTag WoundTag; // 0x220(0x08)
	char pad_228[0x8]; // 0x228(0x08)
};

// Class Gobi.ZombieAbilityUserWidget
// Size: 0x490 (Inherited: 0x450)
struct UZombieAbilityUserWidget : UGobiUserWidget {
	struct UAbilityComponent* AbilityComponent; // 0x450(0x08)
	struct FZombieAbilityData AbilityData; // 0x458(0x38)

	void SetAbility(struct UAbilityComponent* InAbilityComponent, struct FZombieAbilityData InAbilityData); // Function Gobi.ZombieAbilityUserWidget.SetAbility // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ZombieCancelChannelHintUserWidget
// Size: 0x4a0 (Inherited: 0x450)
struct UZombieCancelChannelHintUserWidget : UGobiUserWidget {
	struct FGameplayTagQuery VisibilityTagQuery; // 0x450(0x48)
	char pad_498[0x8]; // 0x498(0x08)

	void OnTagChanged(struct FGameplayTag Tag, bool bTagExists); // Function Gobi.ZombieCancelChannelHintUserWidget.OnTagChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ZombieCharacter
// Size: 0x1200 (Inherited: 0x1060)
struct AZombieCharacter : APlayerCharacter {
	struct FMulticastInlineDelegate OnLockedInSafeRoom; // 0x1058(0x10)
	struct FMulticastInlineDelegate OutOfRangeStateChanged; // 0x1068(0x10)
	bool bLockedInSafeRoom; // 0x1078(0x01)
	bool bInSafeRoom; // 0x1079(0x01)
	bool bOutOfRange; // 0x107a(0x01)
	struct UZombieGhostComponent* ZombieGhostComponent; // 0x1080(0x08)
	char pad_108B[0x3d]; // 0x108b(0x3d)
	struct FZombieUIData ZombieUIData; // 0x10c8(0x120)
	float FloatingReticleInterpolationSpeed; // 0x11e8(0x04)
	float DamageInflictedMutationPoints; // 0x11ec(0x04)
	int32_t KillInflictedMutationPoints; // 0x11f0(0x04)
	int32_t IncapInflictedMutationPoints; // 0x11f4(0x04)
	char pad_11F8[0x8]; // 0x11f8(0x08)

	bool WasGhost(); // Function Gobi.ZombieCharacter.WasGhost // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ZombieCrosshairUserWidget
// Size: 0x4a8 (Inherited: 0x450)
struct UZombieCrosshairUserWidget : UGobiUserWidget {
	struct FLinearColor SavedReticleColor; // 0x450(0x10)
	struct FGameplayTag SupportedGameplayTags; // 0x460(0x08)
	char pad_468[0x40]; // 0x468(0x40)

	void SetChargeProgress(float Percent); // Function Gobi.ZombieCrosshairUserWidget.SetChargeProgress // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ZombieFacialAnimationData
// Size: 0xb8 (Inherited: 0x38)
struct UZombieFacialAnimationData : UDataAsset {
	struct UPoseAsset* FacePoseAsset; // 0x38(0x08)
	struct FName ExpressionCurves[0xf]; // 0x40(0x78)
};

// Class Gobi.ZombieFacialAnimationComponent
// Size: 0x130 (Inherited: 0xd8)
struct UZombieFacialAnimationComponent : UActorComponent {
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FName CurveSourceBindingName; // 0xe0(0x08)
	float ExpressionBlendTime; // 0xe8(0x04)
	float MinDamageForPainExpression; // 0xec(0x04)
	float PainExpressionTime; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct UZombieFacialAnimationData* ZombieFacialAnimationData; // 0xf8(0x08)
	char pad_100[0x30]; // 0x100(0x30)

	void SetCurrentFacialExpression(enum class EZombieFacialExpression InZombieFacialExpression); // Function Gobi.ZombieFacialAnimationComponent.SetCurrentFacialExpression // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ZombieFamilyPipUserWidget
// Size: 0x4b8 (Inherited: 0x450)
struct UZombieFamilyPipUserWidget : UGobiUserWidget {
	struct FSlateColor CurrentColor; // 0x450(0x30)
	struct FSlateColor DefaultColor; // 0x480(0x30)
	char pad_4B0[0x8]; // 0x4b0(0x08)
};

// Class Gobi.ZombieFamilyUserWidget
// Size: 0x4c0 (Inherited: 0x450)
struct UZombieFamilyUserWidget : UGobiUserWidget {
	struct UGobiUserWidget* TeamPipWidget; // 0x450(0x08)
	struct FText MutationPointsFormatText; // 0x458(0x18)
	struct UZombieUpgradePreviewUserWidget* UpgradePreviewWidget; // 0x470(0x08)
	char pad_478[0x48]; // 0x478(0x48)

	void ZombieMutationPointsChanged(struct AGobiPlayerState* GobiPlayerState, int32_t OldPoints, int32_t NewPoints); // Function Gobi.ZombieFamilyUserWidget.ZombieMutationPointsChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ZombieGhostComponent
// Size: 0x180 (Inherited: 0xd8)
struct UZombieGhostComponent : UActorComponent {
	char pad_D8[0x10]; // 0xd8(0x10)
	float UpdateCanSpawnInterval; // 0xe8(0x04)
	float MinSpawnDistanceFromHeroes; // 0xec(0x04)
	float MinTeleportDistanceFromHeroes; // 0xf0(0x04)
	float MinSecondsUnseenToTeleport; // 0xf4(0x04)
	float MinSecondsUndamagedToTeleport; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct UAnimMontage* SpawnInMontage; // 0x100(0x08)
	struct TArray<struct TSoftClassPtr<UObject>> FortificationsThatCollide; // 0x108(0x10)
	struct TArray<struct FName> LOSCheckBoneNames; // 0x118(0x10)
	struct TArray<struct UGameplayEffect*> CanSpawnEffects; // 0x128(0x10)
	struct UAkAudioEvent* AKESpawnError; // 0x138(0x08)
	enum class ECanSpawnResult CanSpawnResult; // 0x140(0x01)
	enum class ECanSpawnResult CanTeleportResult; // 0x141(0x01)
	char pad_142[0x3e]; // 0x142(0x3e)

	void ServerTrySpawnIn(); // Function Gobi.ZombieGhostComponent.ServerTrySpawnIn // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ZombieLadder
// Size: 0x288 (Inherited: 0x288)
struct AZombieLadder : ALadder {
};

// Class Gobi.ZombieLifeStateComponent
// Size: 0x200 (Inherited: 0x200)
struct UZombieLifeStateComponent : ULifeStateComponent {

	bool WasGhost(); // Function Gobi.ZombieLifeStateComponent.WasGhost // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.LifeStateZombieGhost
// Size: 0xc8 (Inherited: 0xa8)
struct ULifeStateZombieGhost : ULifeStateBase {
	struct TArray<struct FGhostMaterial> GhostMaterials; // 0xa8(0x10)
	char pad_B8[0x10]; // 0xb8(0x10)
};

// Class Gobi.ZombieMeshConfigMod
// Size: 0xa8 (Inherited: 0x88)
struct UZombieMeshConfigMod : UGameplayMod {
	struct FSkeletalMeshConfigMod MeshConfigMod; // 0x88(0x20)
};

// Class Gobi.ZombieMovementComponent
// Size: 0xee0 (Inherited: 0xcc0)
struct UZombieMovementComponent : UGobiPlayerMovementComponent {
	struct FZombieMovementForceProperties ChargeProps; // 0xcb8(0x08)
	struct FZombieMovementForceAttributes ChargeAttributes; // 0xcc0(0x0c)
	float MaxGhostStepHeight; // 0xccc(0x04)
	float AutoMantleHeight; // 0xcd4(0x04)
	float GhostAutoMantleHeight; // 0xcd8(0x04)
	char pad_CE0[0x150]; // 0xce0(0x150)
	struct FZombieMovementSpeedConfig MovementSpeedConfig; // 0xe30(0x30)
	struct FGameplayTagQuery DisableCrouchInputTags; // 0xe60(0x48)
	float MinTimeBeforeSprintCanRelease; // 0xea8(0x04)
	char pad_EAC[0x4]; // 0xeac(0x04)
	struct FZombieMovementForce ZombieMovementForce; // 0xeb0(0x1c)
	char pad_ECC[0x4]; // 0xecc(0x04)
	float MantleRequiresJumpPressedAfterHeight; // 0xed0(0x04)
	char pad_ED4[0xc]; // 0xed4(0x0c)

	void OnLifeStateChanged(struct FGameplayTag NewLifeStateTag, struct FGameplayTag PreviousStateTag); // Function Gobi.ZombieMovementComponent.OnLifeStateChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ZombieMutationLinkUserWidget
// Size: 0x450 (Inherited: 0x450)
struct UZombieMutationLinkUserWidget : UGobiUserWidget {
};

// Class Gobi.ZombieMutationManager
// Size: 0x60 (Inherited: 0x38)
struct UZombieMutationManager : UDataAsset {
	struct UDataTable* Table; // 0x38(0x08)
	struct TArray<float> MinRespawnTimes; // 0x40(0x10)
	float DefaultRespawnTime; // 0x50(0x04)
	float QueuedZombieRespawnTurnWaitTime; // 0x54(0x04)
	bool bVariantLocksEnabled; // 0x58(0x01)
	bool bIgnoreOnFieldLimits; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)

	bool VariantLocksEnabled(); // Function Gobi.ZombieMutationManager.VariantLocksEnabled // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ZombieMutationNodeUserWidget
// Size: 0x490 (Inherited: 0x450)
struct UZombieMutationNodeUserWidget : UGobiUserWidget {
	struct FDataTableRowHandle ZombieCardRowHandle; // 0x450(0x20)
	bool bPurchased; // 0x470(0x01)
	bool bPrereqsSatisfied; // 0x471(0x01)
	bool bOwningPlayerCanAfford; // 0x472(0x01)
	bool bOwningPlayerCanSpendOn; // 0x473(0x01)
	char pad_474[0x1c]; // 0x474(0x1c)

	void ZombieMutationPointsChanged(struct AGobiPlayerState* GobiPlayerState, int32_t OldPoints, int32_t NewPoints); // Function Gobi.ZombieMutationNodeUserWidget.ZombieMutationPointsChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ZombieMutationProgressUserWidget
// Size: 0x4e0 (Inherited: 0x450)
struct UZombieMutationProgressUserWidget : UGobiUserWidget {
	struct FText MutationPointsFormatText; // 0x450(0x18)
	char pad_468[0x78]; // 0x468(0x78)

	void ZombieMutationPointsChanged(struct AGobiPlayerState* GobiPlayerState, int32_t OldPoints, int32_t NewPoints); // Function Gobi.ZombieMutationProgressUserWidget.ZombieMutationPointsChanged // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ZombieMutationScreen
// Size: 0x7c8 (Inherited: 0x560)
struct UZombieMutationScreen : UInGameScreen {
	char pad_560[0xc0]; // 0x560(0xc0)
	float CalloutTooltipXOffset; // 0x620(0x04)
	char pad_624[0x4]; // 0x624(0x04)
	struct TSoftObjectPtr<UAkAudioEvent> DefaultPurchaseSound; // 0x628(0x28)
	struct TSoftObjectPtr<UAkAudioEvent> ProgressUpgradeSound; // 0x650(0x28)
	struct TSoftObjectPtr<UAkAudioEvent> ErrorSound; // 0x678(0x28)
	struct TSoftObjectPtr<UAkAudioEvent> OpenPopupSound; // 0x6a0(0x28)
	struct UCalloutTooltipUserWidget* CalloutTooltipWidget; // 0x6c8(0x08)
	struct UZombieFamilyUserWidget* ZombieFamilyUserWidget; // 0x6d0(0x08)
	struct UZombieMutationProgressUserWidget* MutationProgressWidget; // 0x6d8(0x08)
	struct UZombieVariantEntryUserWidget* VariantWidget; // 0x6e0(0x08)
	struct UZombiePopupAbilityUserWidget* PopupAbilityWidget; // 0x6e8(0x08)
	struct UZombiePopupMutationUserWidget* PopupMutationWidget; // 0x6f0(0x08)
	struct UZombiePopupMutationProgressBarUserWidget* PopupMutationProgressBarWidget; // 0x6f8(0x08)
	struct UZombieFamilyPipUserWidget* FamilyPipWidget; // 0x700(0x08)
	struct FDataTableRowHandle FocusedTreeHandle; // 0x708(0x20)
	struct APawn* FocusedVariantPawnClass; // 0x728(0x08)
	struct TWeakObjectPtr<struct UGobiUserWidget> FocusedWidget; // 0x730(0x08)
	char pad_738[0x8]; // 0x738(0x08)
	struct UCalloutTooltipUserWidget* CalloutTooltip; // 0x740(0x08)
	char pad_748[0x80]; // 0x748(0x80)

	void SetVariantMode(bool bVariantMode); // Function Gobi.ZombieMutationScreen.SetVariantMode // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ZombieMutationTreeUserWidget
// Size: 0x468 (Inherited: 0x450)
struct UZombieMutationTreeUserWidget : UGobiUserWidget {
	struct UZombieMutationLinkUserWidget* TreeLinkWidget; // 0x450(0x08)
	char pad_458[0x10]; // 0x458(0x10)

	bool FocusFirstNode(); // Function Gobi.ZombieMutationTreeUserWidget.FocusFirstNode // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ZombiePlayerStart
// Size: 0x2b0 (Inherited: 0x2a0)
struct AZombiePlayerStart : AGobiPlayerStart {
	char pad_2A0[0x8]; // 0x2a0(0x08)
	struct UNavLocationComponent* NavLocationComponent; // 0x2a8(0x08)
};

// Class Gobi.ZombiePopupAbilityUserWidget
// Size: 0x468 (Inherited: 0x450)
struct UZombiePopupAbilityUserWidget : UGobiUserWidget {
	char pad_450[0x18]; // 0x450(0x18)
};

// Class Gobi.ZombiePopupMutationProgressBarUserWidget
// Size: 0x458 (Inherited: 0x450)
struct UZombiePopupMutationProgressBarUserWidget : UGobiUserWidget {
	char pad_450[0x8]; // 0x450(0x08)
};

// Class Gobi.ZombiePopupMutationUserWidget
// Size: 0x478 (Inherited: 0x450)
struct UZombiePopupMutationUserWidget : UGobiUserWidget {
	char pad_450[0x28]; // 0x450(0x28)
};

// Class Gobi.ZombieStandIn
// Size: 0x2d8 (Inherited: 0x250)
struct AZombieStandIn : AActor {
	bool bIsMale; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct FMulticastInlineDelegate OnAppearanceChanged; // 0x258(0x10)
	struct UAnimSequence* MaleDefaultAnimation; // 0x268(0x08)
	struct UAnimSequence* FemaleDefaultAnimation; // 0x270(0x08)
	struct FGobiCharacterConfig MaleConfig; // 0x278(0x28)
	struct FGobiCharacterConfig FemaleConfig; // 0x2a0(0x28)
	struct FCharacterRandomizationData CharacterRandomizationData; // 0x2c8(0x08)
	char pad_2D0[0x8]; // 0x2d0(0x08)

	void OnRep_CharacterRandomizationData(); // Function Gobi.ZombieStandIn.OnRep_CharacterRandomizationData // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ZombieUpgradePreviewUserWidget
// Size: 0x468 (Inherited: 0x450)
struct UZombieUpgradePreviewUserWidget : UGobiUserWidget {
	char pad_450[0x18]; // 0x450(0x18)
};

// Class Gobi.ZombieVariantEntryUserWidget
// Size: 0x490 (Inherited: 0x450)
struct UZombieVariantEntryUserWidget : UGobiUserWidget {
	char pad_450[0x10]; // 0x450(0x10)
	struct UGobiUserWidget* TeamPipWidget; // 0x460(0x08)
	char pad_468[0x28]; // 0x468(0x28)

	struct APawn* GetVariantPawnClass(); // Function Gobi.ZombieVariantEntryUserWidget.GetVariantPawnClass // (None) // @ game+0xfffffffec0000000
};

// Class Gobi.ZombieViewComponent
// Size: 0x238 (Inherited: 0x230)
struct UZombieViewComponent : UPlayerViewComponent {
	char pad_230[0x8]; // 0x230(0x08)
};

// Class Gobi.ZombieViewNonClimbable
// Size: 0x250 (Inherited: 0x250)
struct AZombieViewNonClimbable : AActor {
};

// Class Gobi.ZombieWallAttachLocation
// Size: 0x2f0 (Inherited: 0x278)
struct AZombieWallAttachLocation : ANavigationObjectBase {
	struct UBillboardComponent* BadLocatorSpriteComponent; // 0x278(0x08)
	struct FVector2D VerticalDistanceRange; // 0x280(0x08)
	struct FVector2D HorizontalDistanceRange; // 0x288(0x08)
	struct FMulticastInlineDelegate OnSetLocationVisible; // 0x290(0x10)
	struct FMulticastInlineDelegate OnSetLocationFocused; // 0x2a0(0x10)
	enum class EZombieAttachLocationType LocationType; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	struct FGameplayTag PrimitiveComponentTag; // 0x2b4(0x08)
	bool bIgnorePrimitiveOffset; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
	struct UPrimitiveComponent* Primitive; // 0x2c0(0x08)
	struct USplineComponent* Spline; // 0x2c8(0x08)
	struct UStaticMeshComponent* VisualizationMesh; // 0x2d0(0x08)
	struct UNavLocationComponent* NavLocationComponent; // 0x2d8(0x08)
	char pad_2E0[0x10]; // 0x2e0(0x10)

	void SetWallAttachEnabled(bool bInWallAttachEnabled); // Function Gobi.ZombieWallAttachLocation.SetWallAttachEnabled // (None) // @ game+0xfffffffec0000000
};

