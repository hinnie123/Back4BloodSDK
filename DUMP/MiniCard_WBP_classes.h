// WidgetBlueprintGeneratedClass MiniCard_WBP.MiniCard_WBP_C
// Size: 0x5a0 (Inherited: 0x450)
struct UMiniCard_WBP_C : UMiniCardUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UImage* Affinity_Corner; // 0x458(0x08)
	struct UCardAffinityBanner_WBP_C* AffinityBanner; // 0x460(0x08)
	struct UOverlay* CardContainer; // 0x468(0x08)
	struct UImage* CardImage; // 0x470(0x08)
	struct UOverlay* CardStackContainer; // 0x478(0x08)
	struct UImage* CardStackIcon; // 0x480(0x08)
	struct UImage* EmptyBG; // 0x488(0x08)
	struct UImage* EmptyFrame; // 0x490(0x08)
	struct UImage* FrameSmall; // 0x498(0x08)
	struct UImage* FrameThick; // 0x4a0(0x08)
	struct UImage* hoverFrame; // 0x4a8(0x08)
	struct UTextBlock* Multiply2; // 0x4b0(0x08)
	struct UOverlay* parentContainer; // 0x4b8(0x08)
	struct UImage* SharedIcon; // 0x4c0(0x08)
	struct UTextBlock* StackNumber2; // 0x4c8(0x08)
	struct UImage* TierBanner; // 0x4d0(0x08)
	struct UOverlay* TierContainer; // 0x4d8(0x08)
	struct UImage* TierStars; // 0x4e0(0x08)
	struct FDataTableRowHandle CardRowHandle; // 0x4e8(0x20)
	struct UMaterialInstanceDynamic* MIDTierStars; // 0x508(0x08)
	struct UMaterialInterface* cardImgMaterialInterface; // 0x510(0x08)
	struct UMaterialInstanceDynamic* MIDCardImage; // 0x518(0x08)
	struct UMaterialInstanceDynamic* MIDCardHighlight; // 0x520(0x08)
	struct UMaterialInstanceDynamic* MIDCardGrunge; // 0x528(0x08)
	struct FLinearColor primaryAffinityColor; // 0x530(0x10)
	struct UTexture2D* gradientMap; // 0x540(0x08)
	struct FLinearColor HighlightColor; // 0x548(0x10)
	struct FName CardHighlightMaterialName; // 0x558(0x08)
	struct FName CardForegroundMaterialName; // 0x560(0x08)
	struct FName CardBGMaterialName; // 0x568(0x08)
	enum class EGameplayCardAffinity Affinity; // 0x570(0x01)
	enum class EGameplayCardCategory Category; // 0x571(0x01)
	char pad_572[0x6]; // 0x572(0x06)
	struct UTweenContainer* TweenFocusContainer; // 0x578(0x08)
	struct UTweenContainer* TweenFocusLostContainer; // 0x580(0x08)
	bool isFilled; // 0x588(0x01)
	char pad_589[0x3]; // 0x589(0x03)
	float DefaultCardTint; // 0x58c(0x04)
	bool bIsHighlighted; // 0x590(0x01)
	char pad_591[0x7]; // 0x591(0x07)
	struct UTweenContainer* TweenHighlightContainer; // 0x598(0x08)

	void SetHighlight(bool bIsHighlighted); // Function MiniCard_WBP.MiniCard_WBP_C.SetHighlight // (None) // @ game+0xfffffffec0000000
};
