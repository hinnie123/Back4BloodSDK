// WidgetBlueprintGeneratedClass CardFilterButton_WBP.CardFilterButton_WBP_C
// Size: 0x538 (Inherited: 0x450)
struct UCardFilterButton_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UOverlay* BG; // 0x458(0x08)
	struct UGenericButton_C* Button; // 0x460(0x08)
	struct UImage* Button_BG; // 0x468(0x08)
	struct UImage* Button_Border; // 0x470(0x08)
	struct UImage* Icon; // 0x478(0x08)
	struct TMap<enum class ECardFilter, struct UTexture2D*> FilterToIcon; // 0x480(0x50)
	enum class ECardFilter Filter; // 0x4d0(0x01)
	bool IsChecked; // 0x4d1(0x01)
	char pad_4D2[0x6]; // 0x4d2(0x06)
	struct FMulticastInlineDelegate OnSelected; // 0x4d8(0x10)
	struct TMap<enum class ECardFilter, enum class EGameplayCardAffinity> FilterToAffinity; // 0x4e8(0x50)

	void OnFilterChanged(enum class ECardFilter InFilter); // Function CardFilterButton_WBP.CardFilterButton_WBP_C.OnFilterChanged // (None) // @ game+0xfffffffec0000000
};

