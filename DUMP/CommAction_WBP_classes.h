// WidgetBlueprintGeneratedClass CommAction_WBP.CommAction_WBP_C
// Size: 0x508 (Inherited: 0x450)
struct UCommAction_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UImage* Icon; // 0x458(0x08)
	struct UTextBlock* Name; // 0x460(0x08)
	bool bIsSelected; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)
	struct FCommWheelAction Action; // 0x470(0x60)
	struct FSlateColor IconTint; // 0x4d0(0x30)
	struct UTweenContainer* TweenSelectedContainer; // 0x500(0x08)

	void Set Tint(struct FSlateColor InTint); // Function CommAction_WBP.CommAction_WBP_C.Set Tint // (None) // @ game+0xfffffffec0000000
};

