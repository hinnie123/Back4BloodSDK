// WidgetBlueprintGeneratedClass PlayerAssisting_WBP.PlayerAssisting_WBP_C
// Size: 0x498 (Inherited: 0x450)
struct UPlayerAssisting_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UImage* AssistIcon; // 0x458(0x08)
	struct UProgressBar* AssistProgress; // 0x460(0x08)
	struct UBaseTextBlock_C* AssistText; // 0x468(0x08)
	struct UImage* BG; // 0x470(0x08)
	struct UOverlay* OuterOverlay; // 0x478(0x08)
	struct UUsableComponent* Usable; // 0x480(0x08)
	struct UIncapUsableComponent* IncapUsable; // 0x488(0x08)
	struct UHeroUseComponent* HeroUse; // 0x490(0x08)

	void SetState(bool Invisible, struct FText InText, float InProgress); // Function PlayerAssisting_WBP.PlayerAssisting_WBP_C.SetState // (None) // @ game+0xfffffffec0000000
};

