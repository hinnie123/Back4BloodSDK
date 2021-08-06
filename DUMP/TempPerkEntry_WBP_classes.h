// WidgetBlueprintGeneratedClass TempPerkEntry_WBP.TempPerkEntry_WBP_C
// Size: 0x538 (Inherited: 0x488)
struct UTempPerkEntry_WBP_C : UTempPerkEntryUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UImage* BGshadow; // 0x490(0x08)
	struct UOverlay* BuffContainer; // 0x498(0x08)
	struct UTextBlock* CountText; // 0x4a0(0x08)
	struct UImage* PerkIcon; // 0x4a8(0x08)
	struct UImage* ProgressImage; // 0x4b0(0x08)
	struct UMaterialInstanceDynamic* ProgressMaterial; // 0x4b8(0x08)
	struct FSlateColor ProgressColor; // 0x4c0(0x30)
	struct UTweenContainer* LowTimePulse; // 0x4f0(0x08)
	struct FSlateColor PulseColor; // 0x4f8(0x30)
	float LowTimePercentage; // 0x528(0x04)
	char pad_52C[0x4]; // 0x52c(0x04)
	struct UTweenContainer* TweenInitiateContainer; // 0x530(0x08)

	void SetPerk(struct FPerkItemRow PerkItemRow); // Function TempPerkEntry_WBP.TempPerkEntry_WBP_C.SetPerk // (None) // @ game+0xfffffffec0000000
};

