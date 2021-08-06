// WidgetBlueprintGeneratedClass HoldCalloutButton_WBP.HoldCalloutButton_WBP_C
// Size: 0x4c8 (Inherited: 0x458)
struct UHoldCalloutButton_WBP_C : UPlatformCalloutButtonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	struct UImage* BG; // 0x460(0x08)
	struct UImage* BGHover; // 0x468(0x08)
	struct URichTextBlock* CalloutText; // 0x470(0x08)
	struct UImage* Frame; // 0x478(0x08)
	struct UImage* HoldFill; // 0x480(0x08)
	struct FText Text; // 0x488(0x18)
	struct FName Action; // 0x4a0(0x08)
	bool bShowBackground; // 0x4a8(0x01)
	enum class ESlateVisibility GamepadVisibility; // 0x4a9(0x01)
	enum class ESlateVisibility KeyVisibility; // 0x4aa(0x01)
	bool bEnableVisibilityToggles; // 0x4ab(0x01)
	float HoldTimeRemaining; // 0x4ac(0x04)
	float HoldDuration; // 0x4b0(0x04)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct FMulticastInlineDelegate OnHoldFinished; // 0x4b8(0x10)

	void SetHoldProgress(float Percent); // Function HoldCalloutButton_WBP.HoldCalloutButton_WBP_C.SetHoldProgress // (None) // @ game+0xfffffffec0000000
};

