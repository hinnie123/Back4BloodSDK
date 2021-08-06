// WidgetBlueprintGeneratedClass PlayedCardsGrid_WBP.PlayedCardsGrid_WBP_C
// Size: 0x550 (Inherited: 0x4f0)
struct UPlayedCardsGrid_WBP_C : UPlayedCardsGridUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f0(0x08)
	struct UCardStats_WBP_C* CardStats; // 0x4f8(0x08)
	struct UWrapBox* DirectorCardGrid; // 0x500(0x08)
	struct UTextBlock* DrawCount; // 0x508(0x08)
	struct UTextBlock* DrawText; // 0x510(0x08)
	struct UAnotherGameplayCard_WBP_C* HeroCard; // 0x518(0x08)
	struct UPlatformCalloutImage_WBP_C* NextCallout; // 0x520(0x08)
	struct UCardPaginatorPageButton_WBP_C* NextPageButton; // 0x528(0x08)
	struct UPagePips_WBP_C* PagePips; // 0x530(0x08)
	struct UWrapBox* PlayerCardGrid; // 0x538(0x08)
	struct UPlatformCalloutImage_WBP_C* PrevCallout; // 0x540(0x08)
	struct UCardPaginatorPageButton_WBP_C* PreviousPageButton; // 0x548(0x08)

	struct UWidget* DoNavLeftFromCards(enum class EUINavigation Navigation); // Function PlayedCardsGrid_WBP.PlayedCardsGrid_WBP_C.DoNavLeftFromCards // (None) // @ game+0xfffffffec0000000
};

