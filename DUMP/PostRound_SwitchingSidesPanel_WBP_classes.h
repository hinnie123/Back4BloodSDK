// WidgetBlueprintGeneratedClass PostRound_SwitchingSidesPanel_WBP.PostRound_SwitchingSidesPanel_WBP_C
// Size: 0x48c (Inherited: 0x450)
struct UPostRound_SwitchingSidesPanel_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UPostRound_TeamScore_WBP_C* LeftTeamScore; // 0x458(0x08)
	struct UBaseTextBlock_C* MapNameText; // 0x460(0x08)
	struct UPvP_Progress_WBP_C* PvP_Progress_WBP; // 0x468(0x08)
	struct UPostRound_TeamScore_WBP_C* RightTeamScore; // 0x470(0x08)
	struct UBaseTextBlock_C* StatusText; // 0x478(0x08)
	struct UVerticalBox* StatusVBox; // 0x480(0x08)
	float AnimFlipTime; // 0x488(0x04)

	void UpdateAnimation(); // Function PostRound_SwitchingSidesPanel_WBP.PostRound_SwitchingSidesPanel_WBP_C.UpdateAnimation // (None) // @ game+0xfffffffec0000000
};

