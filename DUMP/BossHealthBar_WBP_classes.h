// WidgetBlueprintGeneratedClass BossHealthBar_WBP.BossHealthBar_WBP_C
// Size: 0x470 (Inherited: 0x450)
struct UBossHealthBar_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UBaseTextBlock_C* BossNameText; // 0x458(0x08)
	struct UProgressBar* HealthProgressBar; // 0x460(0x08)
	float HideTime; // 0x468(0x04)
	float SHOW_DURATION; // 0x46c(0x04)

	void SetName(struct FText InName); // Function BossHealthBar_WBP.BossHealthBar_WBP_C.SetName // (None) // @ game+0xfffffffec0000000
};

