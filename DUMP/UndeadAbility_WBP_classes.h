// WidgetBlueprintGeneratedClass UndeadAbility_WBP.UndeadAbility_WBP_C
// Size: 0x4ec (Inherited: 0x490)
struct UUndeadAbility_WBP_C : UZombieAbilityUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct USizeBox* AbilityContainer; // 0x498(0x08)
	struct UImage* BG; // 0x4a0(0x08)
	struct UPlatformCalloutImage_WBP_C* Callout; // 0x4a8(0x08)
	struct UImage* ChargeEffect; // 0x4b0(0x08)
	struct UCircularProgressBar_WBP_C* Cooldown; // 0x4b8(0x08)
	struct UTextBlock* CooldownText; // 0x4c0(0x08)
	struct UImage* Icon; // 0x4c8(0x08)
	struct FName MouseKeyboardAction; // 0x4d0(0x08)
	bool bAudioChargeOn; // 0x4d8(0x01)
	char pad_4D9[0x3]; // 0x4d9(0x03)
	float CooldownDuration; // 0x4dc(0x04)
	bool bIsCharging; // 0x4e0(0x01)
	bool bIsAbility; // 0x4e1(0x01)
	char pad_4E2[0x2]; // 0x4e2(0x02)
	struct FName GamepadAction; // 0x4e4(0x08)

	void RegisterForInputDeviceChanges(); // Function UndeadAbility_WBP.UndeadAbility_WBP_C.RegisterForInputDeviceChanges // (None) // @ game+0xfffffffec0000000
};

