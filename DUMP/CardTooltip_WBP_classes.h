// WidgetBlueprintGeneratedClass CardTooltip_WBP.CardTooltip_WBP_C
// Size: 0x5f0 (Inherited: 0x528)
struct UCardTooltip_WBP_C : UCardTooltipUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct UCardAttribute_WBP_C* AbilityAttribute; // 0x530(0x08)
	struct UAnotherGameplayCard_WBP_C* AnotherGameplayCard_WBP; // 0x538(0x08)
	struct UHorizontalBox* AttributesHBox; // 0x540(0x08)
	struct UOverlay* AttributesOverlay; // 0x548(0x08)
	struct UImage* Background; // 0x550(0x08)
	struct UBaseTextBlock_C* BasicCardText; // 0x558(0x08)
	struct UBaseTextBlock_C* DescriptionText; // 0x560(0x08)
	struct UImage* Frame; // 0x568(0x08)
	struct UCardAttribute_WBP_C* LootAttribute; // 0x570(0x08)
	struct UOverlay* parentContainer; // 0x578(0x08)
	struct UOverlay* PerksOverlay; // 0x580(0x08)
	struct UVerticalBox* PerksVBox; // 0x588(0x08)
	struct UCardAttribute_WBP_C* SharedAttribute; // 0x590(0x08)
	struct UHorizontalBox* SharedDetails; // 0x598(0x08)
	struct UBaseTextBlock_C* SharedTeamText; // 0x5a0(0x08)
	struct UBaseTextBlock_C* SharedTeamTitle; // 0x5a8(0x08)
	struct UImage* SuitIcon; // 0x5b0(0x08)
	struct UBaseTextBlock_C* SuitNameText; // 0x5b8(0x08)
	struct UBaseTextBlock_C* TitleText; // 0x5c0(0x08)
	struct UHorizontalBox* TooltipContainer; // 0x5c8(0x08)
	struct UOverlay* TooltipOverlay; // 0x5d0(0x08)
	struct UTweenContainer* TweenFocusContainer; // 0x5d8(0x08)
	float delayTooltip; // 0x5e0(0x04)
	char pad_5E4[0x4]; // 0x5e4(0x04)
	struct FTimerHandle DelayPlayTTSHandle; // 0x5e8(0x08)

	void PlayTTSDescription(); // Function CardTooltip_WBP.CardTooltip_WBP_C.PlayTTSDescription // (None) // @ game+0xfffffffec0000000
};

