// WidgetBlueprintGeneratedClass PartyTabButton_WBP.PartyTabButton_WBP_C
// Size: 0x4d1 (Inherited: 0x450)
struct UPartyTabButton_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UImage* BG; // 0x458(0x08)
	struct UImage* HoveredBG; // 0x460(0x08)
	struct UImage* SelectedBG; // 0x468(0x08)
	struct UTabRadioButton_C* TabButton; // 0x470(0x08)
	struct UBaseTextBlock_C* TabText; // 0x478(0x08)
	struct FMulticastInlineDelegate OnSelected; // 0x480(0x10)
	struct FText Text; // 0x490(0x18)
	float HoverOpacity; // 0x4a8(0x04)
	float PressOpacity; // 0x4ac(0x04)
	int32_t NumOnline; // 0x4b0(0x04)
	struct FName RadioButtonGroupName; // 0x4b4(0x08)
	char pad_4BC[0x4]; // 0x4bc(0x04)
	struct UTweenContainer* TweenHoverContainer; // 0x4c0(0x08)
	struct UTweenContainer* TweenSelectedContainer; // 0x4c8(0x08)
	bool bIsChecked; // 0x4d0(0x01)

	void SetCheckedState(bool IsChecked); // Function PartyTabButton_WBP.PartyTabButton_WBP_C.SetCheckedState // (None) // @ game+0xfffffffec0000000
};

