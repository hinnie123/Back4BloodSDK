// WidgetBlueprintGeneratedClass CharacterSelectEntry_WBP.CharacterSelectEntry_WBP_C
// Size: 0x540 (Inherited: 0x450)
struct UCharacterSelectEntry_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UImage* Background; // 0x458(0x08)
	struct UBackgroundBlur* BackgroundBlur; // 0x460(0x08)
	struct UImage* ClaimedOverlay; // 0x468(0x08)
	struct UImage* FocusBar; // 0x470(0x08)
	struct UImage* FocusBG; // 0x478(0x08)
	struct UOverlay* FocusContainer; // 0x480(0x08)
	struct UImage* FocusGradient; // 0x488(0x08)
	struct UImage* Frame; // 0x490(0x08)
	struct UImage* LockIcon; // 0x498(0x08)
	struct UImage* OwnerClaimedFill; // 0x4a0(0x08)
	struct UImage* OwnerClaimedFrame; // 0x4a8(0x08)
	struct UImage* Portrait; // 0x4b0(0x08)
	struct UCircularThrobber* WaitingForServerThrobber; // 0x4b8(0x08)
	struct FName CharacterRowName; // 0x4c0(0x08)
	struct UTexture2D* PortraitTexture; // 0x4c8(0x08)
	struct FMulticastInlineDelegate OnCharacterSelected; // 0x4d0(0x10)
	bool bIsClaimed; // 0x4e0(0x01)
	char pad_4E1[0x7]; // 0x4e1(0x07)
	struct UMaterialInstanceDynamic* HoverMaterial; // 0x4e8(0x08)
	bool bIsClaimedByOwner; // 0x4f0(0x01)
	bool bIsUnlocked; // 0x4f1(0x01)
	bool bIsHighlighted; // 0x4f2(0x01)
	char pad_4F3[0x5]; // 0x4f3(0x05)
	struct UTweenContainer* TweenFocusContainer; // 0x4f8(0x08)
	struct UTweenContainer* TweenFocusLostContainer; // 0x500(0x08)
	struct FSlateColor DefaultPortraitColor; // 0x508(0x30)
	struct UTweenContainer* TweenClaimContainer; // 0x538(0x08)

	void SetClaimTween(); // Function CharacterSelectEntry_WBP.CharacterSelectEntry_WBP_C.SetClaimTween // (None) // @ game+0xfffffffec0000000
};

