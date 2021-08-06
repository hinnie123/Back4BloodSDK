// WidgetBlueprintGeneratedClass ChallengeHUD_WBP.ChallengeHUD_WBP_C
// Size: 0x468 (Inherited: 0x450)
struct UChallengeHUD_WBP_C : UChallengeHUDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UTextBlock* ChallengeName; // 0x458(0x08)
	struct UVerticalBox* ObjectiveList; // 0x460(0x08)

	void FindOrCreateEntry(struct UChallengeObjectiveTracker* InTracker, struct UChallengeHUDEntry_WBP_C* OutEntryWidget); // Function ChallengeHUD_WBP.ChallengeHUD_WBP_C.FindOrCreateEntry // (None) // @ game+0xfffffffec0000000
};

