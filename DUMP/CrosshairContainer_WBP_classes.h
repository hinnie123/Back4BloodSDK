// WidgetBlueprintGeneratedClass CrosshairContainer_WBP.CrosshairContainer_WBP_C
// Size: 0x480 (Inherited: 0x458)
struct UCrosshairContainer_WBP_C : UCrosshairContainerUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	struct UDamageIndicator_WBP_C* DamageIndicator; // 0x460(0x08)
	struct UOverlay* RootPanel; // 0x468(0x08)
	struct USurvivorCrosshairs_WBP_C* SurvivorCrosshairs; // 0x470(0x08)
	struct UZombieCrosshairs_WBP_C* ZombieCrosshairs; // 0x478(0x08)

	void SetIsGhost(bool bIsGhost); // Function CrosshairContainer_WBP.CrosshairContainer_WBP_C.SetIsGhost // (None) // @ game+0xfffffffec0000000
};

