// WidgetBlueprintGeneratedClass PerkDetailsEntry_WBP.PerkDetailsEntry_WBP_C
// Size: 0x4a8 (Inherited: 0x450)
struct UPerkDetailsEntry_WBP_C : UPerkDetailsEntryUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UAttachmentComparisonIcon_WBP_C* AttachmentComparisonIcon; // 0x458(0x08)
	struct UTextBlock* CountText; // 0x460(0x08)
	struct UImage* PerkDebuff; // 0x468(0x08)
	struct URichTextBlock* PerkDescRichText; // 0x470(0x08)
	struct UImage* PerkIcon; // 0x478(0x08)
	struct UTextBlock* PerkNameNCount; // 0x480(0x08)
	struct UTextBlock* PerkNameText; // 0x488(0x08)
	float WrapWidth; // 0x490(0x04)
	char pad_494[0x4]; // 0x494(0x04)
	struct TArray<struct FString> PerkDescriptionTTS; // 0x498(0x10)

	void UpdateTTSFocusMessage(); // Function PerkDetailsEntry_WBP.PerkDetailsEntry_WBP_C.UpdateTTSFocusMessage // (None) // @ game+0xfffffffec0000000
};

