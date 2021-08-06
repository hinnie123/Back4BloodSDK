// WidgetBlueprintGeneratedClass HealthPip_WBP.HealthPip_WBP_C
// Size: 0x4a0 (Inherited: 0x470)
struct UHealthPip_WBP_C : UHealthPipUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	struct UWidgetAnimation* LowHealthPulse; // 0x478(0x08)
	struct UWidgetAnimation* Incap; // 0x480(0x08)
	struct UWidgetAnimation* HealPulse; // 0x488(0x08)
	struct UBorder* HealingBorder; // 0x490(0x08)
	struct UImage* MaterialTarget; // 0x498(0x08)

	void UpdateBorder(); // Function HealthPip_WBP.HealthPip_WBP_C.UpdateBorder // (None) // @ game+0xfffffffec0000000
};

