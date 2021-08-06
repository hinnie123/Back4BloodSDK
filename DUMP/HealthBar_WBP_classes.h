// WidgetBlueprintGeneratedClass HealthBar_WBP.HealthBar_WBP_C
// Size: 0x4c8 (Inherited: 0x4a0)
struct UHealthBar_WBP_C : UHealthBarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a0(0x08)
	struct UHorizontalBox* PipPanel; // 0x4a8(0x08)
	float CurrentHealth; // 0x4b0(0x04)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct FMulticastInlineDelegate ShowDamageIndicator; // 0x4b8(0x10)

	void SetPipSpacing(float Spacing); // Function HealthBar_WBP.HealthBar_WBP_C.SetPipSpacing // (None) // @ game+0xfffffffec0000000
};

