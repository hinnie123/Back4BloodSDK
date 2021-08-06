// WidgetBlueprintGeneratedClass PostRound_LineupPanel_WBP.PostRound_LineupPanel_WBP_C
// Size: 0x4c0 (Inherited: 0x470)
struct UPostRound_LineupPanel_WBP_C : UPostRoundLineupUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	struct UPostRound_AccoladesEntry_WBP_C* Accolades1; // 0x478(0x08)
	struct UPostRound_AccoladesEntry_WBP_C* Accolades2; // 0x480(0x08)
	struct UPostRound_AccoladesEntry_WBP_C* Accolades3; // 0x488(0x08)
	struct UPostRound_AccoladesEntry_WBP_C* Accolades4; // 0x490(0x08)
	struct UImage* Fader; // 0x498(0x08)
	struct UHorizontalBox* RootPanel; // 0x4a0(0x08)
	float IntroOutroDuration; // 0x4a8(0x04)
	float CharacterLoadDelay; // 0x4ac(0x04)
	float ListAnimDelay; // 0x4b0(0x04)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct UTweenContainer* TweenContainer; // 0x4b8(0x08)

	void AnimatePanelTween(); // Function PostRound_LineupPanel_WBP.PostRound_LineupPanel_WBP_C.AnimatePanelTween // (None) // @ game+0xfffffffec0000000
};

