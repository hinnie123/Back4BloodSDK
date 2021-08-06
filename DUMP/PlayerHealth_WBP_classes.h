// WidgetBlueprintGeneratedClass PlayerHealth_WBP.PlayerHealth_WBP_C
// Size: 0x4f4 (Inherited: 0x4d0)
struct UPlayerHealth_WBP_C : UPlayerHealthUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d0(0x08)
	struct UImage* HealthBackground; // 0x4d8(0x08)
	struct UHealthBar_WBP_C* HealthBar; // 0x4e0(0x08)
	struct UImage* HealthOverlay; // 0x4e8(0x08)
	float PipSpacing; // 0x4f0(0x04)

	void GetHealthBar(struct UHealthBar_WBP_C* HealthBar); // Function PlayerHealth_WBP.PlayerHealth_WBP_C.GetHealthBar // (None) // @ game+0xfffffffec0000000
};

