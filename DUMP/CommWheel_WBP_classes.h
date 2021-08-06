// WidgetBlueprintGeneratedClass CommWheel_WBP.CommWheel_WBP_C
// Size: 0x558 (Inherited: 0x4b0)
struct UCommWheel_WBP_C : UCommWheelUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UWidgetAnimation* CommFadeOut; // 0x4b8(0x08)
	struct UWidgetAnimation* CommFadeIn; // 0x4c0(0x08)
	struct UCommAction_WBP_C* Action1; // 0x4c8(0x08)
	struct UCommAction_WBP_C* Action2; // 0x4d0(0x08)
	struct UCommAction_WBP_C* Action3; // 0x4d8(0x08)
	struct UCommAction_WBP_C* Action4; // 0x4e0(0x08)
	struct UCommAction_WBP_C* Action5; // 0x4e8(0x08)
	struct UCommAction_WBP_C* Action6; // 0x4f0(0x08)
	struct UCommAction_WBP_C* Action7; // 0x4f8(0x08)
	struct UCommAction_WBP_C* Action8; // 0x500(0x08)
	struct UCanvasPanel* ActionsPanel; // 0x508(0x08)
	struct UTextBlock* ActionText; // 0x510(0x08)
	struct UImage* BG; // 0x518(0x08)
	struct UImage* BG_Lines; // 0x520(0x08)
	struct UPlatformCalloutButton_WBP_C* CancelCallout; // 0x528(0x08)
	struct UImage* CurrentIcon; // 0x530(0x08)
	struct UPlatformCalloutButton_WBP_C* ExecuteCallout; // 0x538(0x08)
	struct TArray<struct UCommAction_WBP_C*> WidgetOrder; // 0x540(0x10)
	struct UCommAction_WBP_C* SelectedAction; // 0x550(0x08)

	struct FCommWheelAction GetSelectedAction(); // Function CommWheel_WBP.CommWheel_WBP_C.GetSelectedAction // (None) // @ game+0xfffffffec0000000
};

