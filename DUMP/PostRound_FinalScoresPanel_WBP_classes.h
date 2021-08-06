// WidgetBlueprintGeneratedClass PostRound_FinalScoresPanel_WBP.PostRound_FinalScoresPanel_WBP_C
// Size: 0x47c (Inherited: 0x450)
struct UPostRound_FinalScoresPanel_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UWidgetAnimation* Intro; // 0x458(0x08)
	struct UPostRound_TeamScore_WBP_C* LeftTeamScore; // 0x460(0x08)
	struct UPostRound_TeamScore_WBP_C* RightTeamScore; // 0x468(0x08)
	struct UBaseTextBlock_C* StatusText; // 0x470(0x08)
	float AnimFlipTime; // 0x478(0x04)

	void GetTeamName(enum class EGobiTeam InTeam, struct FText OutTeamName); // Function PostRound_FinalScoresPanel_WBP.PostRound_FinalScoresPanel_WBP_C.GetTeamName // (None) // @ game+0xfffffffec0000000
};

