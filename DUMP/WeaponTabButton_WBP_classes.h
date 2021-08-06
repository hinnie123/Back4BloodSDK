// WidgetBlueprintGeneratedClass WeaponTabButton_WBP.WeaponTabButton_WBP_C
// Size: 0x4a0 (Inherited: 0x450)
struct UWeaponTabButton_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UImage* BG; // 0x458(0x08)
	struct UTextBlock* CountText; // 0x460(0x08)
	struct UImage* HoveredBG; // 0x468(0x08)
	struct UImage* SelectedBG; // 0x470(0x08)
	struct UTextBlock* TabNameText; // 0x478(0x08)
	struct URadioButton* TabRadioButton; // 0x480(0x08)
	enum class EItemCategory Category; // 0x488(0x01)
	bool bIsChecked; // 0x489(0x01)
	char pad_48A[0x6]; // 0x48a(0x06)
	struct UTweenContainer* TweenHoverContainer; // 0x490(0x08)
	struct UTweenContainer* TweenSelectedContainer; // 0x498(0x08)

	void GetCategory(enum class EItemCategory OutCategory); // Function WeaponTabButton_WBP.WeaponTabButton_WBP_C.GetCategory // (None) // @ game+0xfffffffec0000000
};

