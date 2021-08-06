// WidgetBlueprintGeneratedClass AnotherGameplayCard_WBP.AnotherGameplayCard_WBP_C
// Size: 0x599 (Inherited: 0x4c8)
struct UAnotherGameplayCard_WBP_C : USelectableGameplayCardUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c8(0x08)
	struct UWidgetAnimation* Flip; // 0x4d0(0x08)
	struct UBurnCardCount_WBP_C* BurnCardCount_WBP; // 0x4d8(0x08)
	struct UImage* CardBack; // 0x4e0(0x08)
	struct UCardInsert_WBP_C* CardInsert; // 0x4e8(0x08)
	struct UImage* CostBG; // 0x4f0(0x08)
	struct UImage* EquippedFrame; // 0x4f8(0x08)
	struct UImage* hoverFrame; // 0x500(0x08)
	struct UImage* MoneyIcon; // 0x508(0x08)
	struct UBaseTextBlock_C* MoneyText; // 0x510(0x08)
	struct UNewCardOverlay_WBP_C* NewCardOverlay; // 0x518(0x08)
	struct UPlatformCalloutImage_WBP_C* PlatformCalloutImage; // 0x520(0x08)
	struct UImage* UnequipBG; // 0x528(0x08)
	struct UOverlay* UnequipContainer; // 0x530(0x08)
	struct UImage* UnequipFrame; // 0x538(0x08)
	struct UOverlay* VendorCostPanel; // 0x540(0x08)
	struct FMulticastInlineDelegate LeftClicked; // 0x548(0x10)
	bool IgnoreRequirements; // 0x558(0x01)
	char pad_559[0x3]; // 0x559(0x03)
	float FlipAnimDelay; // 0x55c(0x04)
	float AnimationSpeed; // 0x560(0x04)
	bool bIsCardDraw; // 0x564(0x01)
	char pad_565[0x3]; // 0x565(0x03)
	struct UTweenContainer* TweenFocusLostContainer; // 0x568(0x08)
	struct UTweenContainer* TweenFocusContainer; // 0x570(0x08)
	struct UTweenContainer* TweenEquippedContainer; // 0x578(0x08)
	struct UTweenContainer* TweenUnequippedContainer; // 0x580(0x08)
	bool bIsEquipped; // 0x588(0x01)
	bool bIsEquippedDirty; // 0x589(0x01)
	bool bIsHighlighted; // 0x58a(0x01)
	bool bIsFocused; // 0x58b(0x01)
	char pad_58C[0x4]; // 0x58c(0x04)
	struct FTimerHandle TTSDescriptionHandler; // 0x590(0x08)
	bool bIsLocked; // 0x598(0x01)

	void PlayCardInsertDescription(); // Function AnotherGameplayCard_WBP.AnotherGameplayCard_WBP_C.PlayCardInsertDescription // (None) // @ game+0xfffffffec0000000
};

