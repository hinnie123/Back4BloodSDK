// WidgetBlueprintGeneratedClass MatchmakingChallengesButton_WBP.MatchmakingChallengesButton_WBP_C
// Size: 0x558 (Inherited: 0x458)
struct UMatchmakingChallengesButton_WBP_C : UMatchmakingSelectionUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	struct UImage* BG; // 0x460(0x08)
	struct UChallengeDuration_WBP_C* ChallengeDuration; // 0x468(0x08)
	struct UImage* Frame; // 0x470(0x08)
	struct UTextButton_WBP_C* LeaderboardsButton; // 0x478(0x08)
	struct UImage* RankIcon; // 0x480(0x08)
	struct UTextBlock* ScoreText; // 0x488(0x08)
	struct UTextBlock* Title; // 0x490(0x08)
	struct FSlateColor HoveredColor; // 0x498(0x30)
	struct FSlateColor NormalColor; // 0x4c8(0x30)
	struct FSlateColor PressedColor; // 0x4f8(0x30)
	struct FMulticastInlineDelegate OnDisabled; // 0x528(0x10)
	struct UMaterialInstanceDynamic* HoverMaterial; // 0x538(0x08)
	struct FMulticastInlineDelegate OnOpenLeaderboard; // 0x540(0x10)
	float FrameFocusedRenderOpacity; // 0x550(0x04)
	float FrameUnfocusedRenderOpacity; // 0x554(0x04)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function MatchmakingChallengesButton_WBP.MatchmakingChallengesButton_WBP_C.OnFocusReceived // (None) // @ game+0xfffffffec0000000
};

