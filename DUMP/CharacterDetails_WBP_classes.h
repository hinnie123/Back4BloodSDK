// WidgetBlueprintGeneratedClass CharacterDetails_WBP.CharacterDetails_WBP_C
// Size: 0x4b8 (Inherited: 0x460)
struct UCharacterDetails_WBP_C : UCharacterDetailsUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UWidgetAnimation* IntroAnim; // 0x468(0x08)
	struct UVerticalBox* PerksPanel; // 0x470(0x08)
	struct UVerticalBox* RootPanel; // 0x478(0x08)
	struct UMissionLoadout_WeaponImage_WBP_C* WeaponImage; // 0x480(0x08)
	struct UBaseTextBlock_C* WeaponName; // 0x488(0x08)
	struct UOverlay* WeaponPanel; // 0x490(0x08)
	struct UMissionLoadout_WeaponTooltip_WBP_C* WeaponTooltip; // 0x498(0x08)
	struct FName CharacterRowName; // 0x4a0(0x08)
	struct FMulticastInlineDelegate OnIntroAnimFinished; // 0x4a8(0x10)

	void ClearCharacter(); // Function CharacterDetails_WBP.CharacterDetails_WBP_C.ClearCharacter // (None) // @ game+0xfffffffec0000000
};

